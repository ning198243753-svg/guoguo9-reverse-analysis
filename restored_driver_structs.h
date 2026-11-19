// 从 DWARF 自动还原 - lsdriver 5.15 (字段名/偏移/类型)
#ifndef _RESTORED_LSDRIVER_H
#define _RESTORED_LSDRIVER_H
#include <linux/types.h>

struct brk_bp_cfg {
	/* +   0 */ int              reg_count;
	/* +   4 */ u8[]             reg_index;
	char _pad_12[60]; // padding
	/* +  72 */ u8[]             reg_value;
	char _pad_80[120]; // padding
	/* + 200 */ int              fp_reg_count;
	/* + 204 */ u8[]             fp_reg_index;
	char _pad_212[56]; // padding
	/* + 268 */ u8[]             fp_reg_value;
	char _tail[60];
}; // sizeof=336

struct _HW_BP_INFO {
	/* +   0 */ struct pid_t     pid;
	/* +   8 */ struct uintptr_t addr;
	/* +  16 */ int              type;
	/* +  20 */ int              len;
	/* +  24 */ int              is_tracking;
	/* +  28 */ int              is_write_regs;
	/* +  32 */ int              reg_count;
	/* +  36 */ u8[]             reg_index;
	char _pad_44[60]; // padding
	/* + 104 */ u8[]             reg_value;
	char _pad_112[120]; // padding
	/* + 232 */ int              fp_reg_count;
	/* + 236 */ u8[]             fp_reg_index;
	char _pad_244[56]; // padding
	/* + 300 */ u8[]             fp_reg_value;
	char _tail[60];
}; // sizeof=368

struct _HWBP_REG_CONFIG {
	/* +   0 */ struct pid_t     pid;
	/* +   8 */ struct uintptr_t addr;
	/* +  16 */ int              is_tracking;
	/* +  20 */ int              reg_count;
	/* +  24 */ u8[]             reg_index;
	char _pad_32[56]; // padding
	/* +  88 */ u8[]             reg_value;
	char _pad_96[120]; // padding
	/* + 216 */ int              fp_reg_count;
	/* + 220 */ u8[]             fp_reg_index;
	char _pad_228[56]; // padding
	/* + 284 */ u8[]             fp_reg_value;
	char _tail[60];
}; // sizeof=352

struct _HWBP_UPDATE_ARGS {
	/* +   0 */ struct pid_t     pid;
	/* +   8 */ struct uintptr_t addr;
	/* +  16 */ int              is_tracking;
	/* +  20 */ int              reg_count;
	/* +  24 */ u8[]             reg_index;
	char _pad_32[56]; // padding
	/* +  88 */ u8[]             reg_value;
	char _pad_96[120]; // padding
	/* + 216 */ int              fp_reg_count;
	/* + 220 */ u8[]             fp_reg_index;
	char _pad_228[56]; // padding
	/* + 284 */ u8[]             fp_reg_value;
	char _tail[60];
}; // sizeof=352

struct _COPY_MEMORY {
	/* +   0 */ struct pid_t     pid;
	/* +   8 */ struct uintptr_t addr;
	/* +  16 */ void *           buffer;
	/* +  24 */ struct size_t    size;
}; // sizeof=32

struct _MODULE_BASE {
	/* +   0 */ struct pid_t     pid;
	/* +   8 */ void *           name;
	/* +  16 */ struct uintptr_t base;
}; // sizeof=24

struct _BRK_MEMWRITE_ARGS {
	/* +   0 */ struct uint32_t  version;
	/* +   4 */ struct uint32_t  flags;
	/* +   8 */ struct pid_t     pid;
	/* +  16 */ struct uintptr_t addr;
	/* +  24 */ void *           buf;
	/* +  32 */ struct size_t    size;
}; // sizeof=40

struct paradise_gyro_config_cmd {
	/* +   0 */ int              enable;
	/* +   4 */ struct uint32_t  type_mask;
	/* +   8 */ float            x;
	/* +  12 */ float            y;
}; // sizeof=16

struct shadow_fault_config {
	/* +   0 */ unsigned long    target_vaddr;
	/* +   8 */ int              reg_count;
	/* +  12 */ u8[]             reg_index;
	char _pad_20[60]; // padding
	/* +  80 */ u8[]             reg_value;
	char _pad_88[120]; // padding
	/* + 208 */ int              fp_reg_count;
	/* + 212 */ u8[]             fp_reg_index;
	char _pad_220[56]; // padding
	/* + 276 */ u8[]             fp_reg_value;
	char _tail[60];
}; // sizeof=344

struct kp_core_hook {
	/* +   0 */ unsigned long    func_addr;
	/* +   8 */ unsigned long    origin_addr;
	/* +  16 */ unsigned long    replace_addr;
	/* +  24 */ unsigned long    backup_addr;
	/* +  32 */ int              pool_slot;
	/* +  36 */ int              patch_insn_count;
	/* +  40 */ int              relo_insn_count;
	/* +  44 */ u8[]             origin_insns;
	char _pad_52[12]; // padding
	/* +  64 */ u8[]             patch_insns;
	char _pad_72[12]; // padding
	/* +  84 */ struct bool      installed;
}; // sizeof=88

struct hwbp_tracking_data {
	/* +   0 */ struct uintptr_t bp_addr;
	/* +   8 */ struct bool      is_active;
	/* +  12 */ float            x;
	/* +  16 */ float            y;
	/* +  20 */ float            z;
}; // sizeof=24

struct _HWBP_HIT_ARGS {
	/* +   0 */ struct pid_t     pid;
	/* +   8 */ struct uintptr_t addr;
	/* +  16 */ void *           out_buf;
	/* +  24 */ struct uint32_t  out_len;
	/* +  28 */ struct uint32_t  real_count;
}; // sizeof=32

struct brk_bp_entry {
	/* +   0 */ struct list_head list;
	char _pad_8[8]; // padding
	/* +  16 */ struct pid_t     pid;
	/* +  24 */ void *           mm;
	/* +  32 */ u8[]             ct_pages;
	char _pad_40[24]; // padding
	/* +  64 */ u8[]             ct_kva;
	char _pad_72[24]; // padding
	/* +  96 */ int              ct_tables;
	/* + 104 */ u8[]             ct_path_idx;
	char _pad_112[16]; // padding
	/* + 128 */ struct phys_addr_t normal_pgd_pa;
	/* + 136 */ unsigned long    real_leaf_kva;
	/* + 144 */ u8[]             tbls;
	char _pad_152[1784]; // padding
	/* +1936 */ int              tbl_cnt;
	/* +1944 */ struct list_head slots;
	char _pad_1952[8]; // padding
	/* +1960 */ int              slot_cnt;
	/* +1964 */ struct spinlock_t lock;
	/* +1968 */ struct spinlock_t pt_lock;
	/* +1972 */ struct atomic_t  active_handlers;
	/* +1976 */ struct atomic_t  active_switch;
	/* +1980 */ struct atomic_t  active_faults;
	/* +1984 */ struct wait_queue_head_t idle_wq;
	char _pad_1992[16]; // padding
	/* +2008 */ struct cpumask_t clone_cpu_mask;
	/* +2016 */ struct bool      clone_paused;
	/* +2017 */ struct bool      emulation_disabled;
	/* +2024 */ struct cpumask_t shadow_state_mask;
	/* +2032 */ struct bool      armed;
}; // sizeof=2040

struct brk_bp_slot {
	/* +   0 */ struct list_head node;
	char _pad_8[8]; // padding
	/* +  16 */ int              kind;
	/* +  24 */ struct uintptr_t addr;
	/* +  32 */ struct u32       imm;
	/* +  36 */ struct u32       orig_insn;
	/* +  40 */ int              leaf_idx;
	/* +  48 */ struct pte_t     orig_pte;
	/* +  56 */ void *           shadow_page;
	/* +  64 */ unsigned long    shadow_kaddr;
	/* +  72 */ struct phys_addr_t shadow_pa;
	/* +  80 */ unsigned long    leaf_real_kva;
	/* +  88 */ unsigned long    leaf_kva;
	/* +  96 */ u8[]             ct_kvas;
	char _pad_104[24]; // padding
	/* + 128 */ int              reg_count;
	/* + 132 */ u8[]             reg_index;
	char _pad_140[60]; // padding
	/* + 200 */ u8[]             reg_value;
	char _pad_208[120]; // padding
	/* + 328 */ int              fp_reg_count;
	/* + 332 */ u8[]             fp_reg_index;
	char _pad_340[56]; // padding
	/* + 396 */ u8[]             fp_reg_value;
	char _pad_404[60]; // padding
	/* + 464 */ u8[]             hit_records;
	char _pad_472[9080]; // padding
	/* +9552 */ int              hit_head;
	/* +9556 */ int              hit_tail;
	/* +9560 */ int              hit_count;
	/* +9568 */ struct u64       total_hits;
	/* +9576 */ struct bool      first_hit_logged;
	/* +9580 */ int              hb_last_hits;
	/* +9584 */ void *           parent;
}; // sizeof=9592

struct shadow_entry {
	/* +   0 */ unsigned long    vaddr;
	/* +   8 */ unsigned long    target_vaddr;
	/* +  16 */ void *           mm;
	/* +  24 */ struct pid_t     pid;
	/* +  32 */ void *           ptep;
	/* +  40 */ struct pte_t     orig_pte;
	/* +  48 */ struct list_head list;
	char _pad_56[8]; // padding
	/* +  64 */ struct spinlock_t entry_lock;
	/* +  68 */ struct bool      armed;
	/* +  72 */ int              reg_count;
	/* +  76 */ u8[]             reg_index;
	char _pad_84[60]; // padding
	/* + 144 */ u8[]             reg_value;
	char _pad_152[120]; // padding
	/* + 272 */ int              fp_reg_count;
	/* + 276 */ u8[]             fp_reg_index;
	char _pad_284[56]; // padding
	/* + 340 */ u8[]             fp_reg_value;
	char _pad_348[60]; // padding
	/* + 408 */ u8[]             hit_records;
	char _pad_416[9080]; // padding
	/* +9496 */ int              hit_head;
	/* +9500 */ int              hit_tail;
	/* +9504 */ int              hit_count;
	/* +9512 */ struct s64       timing_offset_ns;
	/* +9520 */ struct atomic_t  active_faults;
	/* +9528 */ struct wait_queue_head_t active_fault_wait;
	char _tail[16];
}; // sizeof=9552

struct spoof_entry {
	/* +   0 */ struct list_head list;
	char _pad_8[8]; // padding
	/* +  16 */ struct pid_t     tgid;
	/* +  20 */ struct bool      has_fake_state;
	/* +  24 */ struct u32       dbg_info;
	/* +  28 */ struct u32       break_count;
	/* +  32 */ struct u32       watch_count;
	/* +  40 */ u8[]             break_regs;
	/* +   0 */ struct u64       addr;
	/* +   8 */ struct u32       ctrl;
	/* +  12 */ struct u32       pad;
	char _pad_20[276]; // padding
	/* + 296 */ u8[]             watch_regs;
	/* +   0 */ struct u64       addr;
	/* +   8 */ struct u32       ctrl;
	/* +  12 */ struct u32       pad;
	char _tail[532];
}; // sizeof=552

#endif
