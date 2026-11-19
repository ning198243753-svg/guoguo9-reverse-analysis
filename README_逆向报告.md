# 果果9.0 逆向分析 —— 终版完整报告

分析对象: 果果9.0.zip (sha256 0202ff0e...), 22项, 全部编译产物无源码。
核心结论: 这不是"开源学习版"，而是集成了**两套开源内核后门项目**(lsdriver + android-paradise)
与一个 **OLLVM 混淆的商业外挂核心**的成品作弊工具，带完整卡密验证。

---

## 第一部分: 包结构与拆包
- 果果核心.sh = 9.6MB ARM64 ELF, 用户态主程序
- YL驱动/*.sh (7个) = gzip 内嵌 .ko (模块名 lsdriver)
- paradise驱动/*.ko.sh (6个) = base64 内嵌 .ko (模块名 paradise)
- Kairos/TwT = 加载器

## 第二部分: 内核驱动 (13个 .ko, 全部提取, 覆盖内核 5.4~6.18)
两套项目:
- **lsdriver** (/mnt/e/gt_driver_source, 编译者 /home/wangchuan): 带完整 DWARF
  - 22个源文件, 4527行代码行号映射, 560函数, 544结构体 (见 06_DWARF源码行号统计.txt)
  - 机制: BRK影子页断点(brk_bp_*), 硬件断点(hw_bp_*), ptrace欺骗, CFI绕过(fuck_cfi),
    kprobe inline hook, 进程/路径隐藏, 陀螺仪socket hook, 物理内存读写
- **android-paradise** (/__w/android-paradise, 开源后门): 170+函数
  - 机制: anon inode fd 后门, supercall ioctl (18个命令码 0xc0xx57xx, 见 04),
    隐藏进程(filldir64/kgsl hook), CFI绕过, PAC/TPIDR读取, 物理内存读写, HWBP

## 第三部分: 用户态核心
- 卡密: RC4 + hex, 接口 wy.llua.cn, 详见 01_卡密算法与常量.txt (含完整密钥与可运行示例)
- ioctl 协议: 21个命令码, 详见 02_ioctl协议分析.md
- 游戏数据: Uworld/BoneArray(0x838)/Matrix/Gname/Uleve, RADAR, ImGui悬浮窗, /dev/uinput
- 全局状态区 0x963000: 386个字段偏移 (见 09), 热字段 0xe88/0xe98/0x270
- 菜单功能项被 OLLVM 加密, 仅框架与167个武器名明文 (见 07)
- 作者: TG @guoguohz, 编译链 OLLVM + TUSI-Obfuscator

## 第四部分: 加载链
核心.sh --driver (auto/yl/twt/time/paradise) -> 加载器 -> insmod ko -> hook系统调用 -> ioctl/anon fd 通信 (见 05)

---

## 全部产物清单
| 文件 | 内容 |
|---|---|
| README_逆向报告.md | 本文件 |
| 00_KO清单.txt | 13个ko及vermagic |
| 01_卡密算法与常量.txt | RC4算法+密钥+接口+示例 |
| 02_ioctl协议分析.md / 02_ioctl命令表.txt | 21个ioctl命令 |
| 03_全模块modinfo.txt | 13个ko的modinfo |
| 04_paradise_supercall.txt | paradise 18个supercall命令 |
| 05_加载器链路分析.md | 加载器分析 |
| 06_DWARF源码行号统计.txt | 22源文件4527行映射 |
| 07_核心UI与功能标签.txt | UI框架+武器列表 |
| 08_游戏数据读取线索.txt | UE4偏移+魔数 |
| 09_核心全局状态区偏移.txt | 386个字段偏移 |
| extracted_ko/ | 13个已解包.ko |
| analysis_dump/ | 反汇编/符号/字符串dump |
| 果果核心_ELF.bin | 用户态核心样本 |


## 源码还原成果（第7轮）
- 内核: restored_driver_structs.h + kernel_source_framework.c (147函数) + kernel_annotated_disasm.txt (1346行号标注)
- 用户态: userland_key_functions.txt (5关键函数) + userland_function_map.txt (220函数映射)
- 方法说明: 10_源码还原说明.md


## 第9轮: 批量反编译
- pseudocode/ 目录: 10个内核模块伪代码(共~1500函数)
- kernel_pseudocode_final.c: 5.15主驱动DWARF增强伪代码(133函数签名增强)
- userland_pseudocode.c: 用户态3关键函数伪代码
- 12_最终反编译成果.md: 完整成果与复现指南
