# 内核驱动 ioctl 命令协议（YL 驱动 5.15，命令基址 _IOC(0x30d..0x3e7)）

用户态通过 hook __arm64_sys_ioctl（不是标准字符设备，而是 inline hook 系统调用入口）
拦截命令码，命令范围 0x30d ~ 0x3e7（sub w8,w8,#0x30d; cmp w8,#0xda 范围检查）。
跳转表在 .rodata+0x2a18，ldrsw 相对跳转。

## 有效命令 -> 功能函数映射
| 命令码 | 调用的内核函数 | 功能 |
|---|---|---|
| 0x30d | (copy 32 bytes, __cfi_check) | 状态/信息查询 |
| 0x30e | read_process_memory_kmap | 读进程内存(kmap) |
| 0x30f | (cfi) | 相关内存读 |
| 0x310 | vmalloc/vfree | 分配缓冲区 |
| 0x312 | util_kallsyms_lookup_name + hide_kgsl + hide_cts | 隐藏进程(kgsl/cts) |
| 0x31c | (cfi) | 内存读 |
| 0x31d | read_process_memory_kmap_manual | 读内存(手动页表) |
| 0x31e | (cfi) | 内存读 |
| 0x31f | read_process_memory_nocache_ioremap_manual | 读内存(ioremap) |
| 0x322 | read_process_memory_pte | 读内存(PTE) |
| 0x32a | shadow_entry_add | 添加影子断点 |
| 0x32b | shadow_entry_del | 删除影子断点 |
| 0x32c | shadow_entry_get_hits | 获取影子断点命中 |
| 0x334 | brk_bp_add | 添加 BRK 硬件断点 |
| 0x335 | brk_bp_del | 删除 BRK 断点 |
| 0x336 | brk_bp_get_hits | 获取 BRK 命中 |
| 0x337 | brk_bp_update_cfg | 更新断点寄存器配置 |
| 0x338 | brk_bp_memwrite | 断点内存写入(改寄存器值) |
| 0x378 | do_config_gyro_hook | 配置陀螺仪 socket hook |
| 0x3e6 | read_process_memory_nocache_ioremap + get_module_base | 获取模块基址 |
| 0x3e7 | process_memory_rw | 读写进程内存 |
| 其他(~200个) | default -> 返回 -ENOTTY(0x1f7=503) | 无效命令 |

## 相关结构体（DWARF 精确偏移）
- COPY_MEMORY(32): pid@0 addr@8 buffer@16 size@24
- MODULE_BASE(24): pid@0 name@8 base@16
- HW_BP_INFO(368): pid@0 addr@8 type@16 len@20 is_tracking@24 is_write_regs@28 reg_*@32..
- BRK_MEMWRITE_ARGS(40): version@0 flags@4 pid@8 addr@16 buf@24 size@32
- HWBP_HIT_ARGS(32): pid@0 addr@8 out_buf@16 out_len@24 real_count@28

## 关键全局符号
ioctl_hook_target_addr(B 0xc0), orig_ioctl_call(b 0x120), ioctl_core_hook(b 0xc8)
