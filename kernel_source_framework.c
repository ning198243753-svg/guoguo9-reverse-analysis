// lsdriver 5.15 函数签名框架 - 从DWARF自动还原
// 每个函数含: 地址/返回类型/参数(名+类型)/局部变量/源码行号

// [0x5c..0x8] src:12
int my_module_init(void) {
    /* ... */
}

// [0x28..0x44] src:28
void my_module_exit(void) {
    /* ... */
}

// [0x127c..0x44] src:241
char *[] fuck_cfi(void) {
    char *[] cfi_symbols; // line 246
    void *[] patch_addrs; // line 253
    u32[] patch_insns; // line 254
    int * patch_text; // line 251
    unsigned long fn_patch_text; // line 252
    int i; // line 256
    int patch_count; // line 255
    /* ... */
}

// [0xc88..0x30] src:153
uint64_t init_page_util(void) {
    uint64_t tcr_el1; // line 155
    uint64_t ttbr1_el1; // line 156
    uint64_t t1sz; // line 157
    uint64_t va_bits; // line 158
    /* ... */
}

// [0xe5c..0xc] src:182
uint64_t * pgtable_entry(uint64_t pgd, uint64_t va) {
    int level; // line 188
    int start_level; // line 187
    uint64_t table_va; // line 186
    uint64_t entries_per_table; // line 185
    uint64_t index_bits; // line 184
    /* ... */
}

// [0xf5c..0x58] src:231
uint64_t * pgtable_entry_kernel(uint64_t va) {
    /* ... */
}

// [0x1444..0x74] src:355
int install_hook(int nr) {
    int ret; // line 357
    /* ... */
}

// [0x15b4..0x44] src:324
void *[] unfuck_cfi(void) {
    void *[] restore_addrs; // line 328
    u32[] restore_insns; // line 329
    int * patch_text; // line 326
    unsigned long fn_patch_text; // line 327
    int i; // line 330
    /* ... */
}

// [0x1630..0x48] src:400
int unstall_hook(void) {
    int ret; // line 402
    /* ... */
}

// [0x1670..0x3c] src:461
bool read_process_memory_common(pid_t pid, uintptr_t addr, void * buffer, size_t size) {
    /* ... */
}

// [0x189c..0xc] src:386
bool process_memory_rw(pid_t pid, uintptr_t addr, void * buffer, size_t size, chunk_handler_t handler, void * aux, enum memory_translate_mode translate_mode, bool batch_linear) {
    struct manual_walk_cache walk_cache; // line 392
    struct mm_struct * mm; // line 391
    char * ubuf; // line 393
    size_t done; // line 395
    uintptr_t cur_va; // line 394
    /* ... */
}

// [0x2500..0x4] src:225
int translate_va_to_pa(struct mm_struct * mm, uintptr_t va, phys_addr_t * pa, enum memory_translate_mode mode, struct manual_walk_cache * cache) {
    int ret; // line 230
    /* ... */
}

// [0x19cc..0x10] src:278
bool chunk_read_linear(phys_addr_t pa, void * ubuf, size_t size, void * aux) {
    void * mapped; // line 281
    void * mapped_end; // line 282
    /* ... */
}

// [0x26a4..0x4] src:172
unsigned long _copy_to_user(void * to, void * from, unsigned long n) {
    /* ... */
}

// [0x1a7c..0x24] src:469
bool read_process_memory_pte(pid_t pid, uintptr_t addr, void * buffer, size_t size) {
    char * tmp; // line 472
    bool ok; // line 473
    /* ... */
}

// [0x1b04..0x10] src:268
bool chunk_read_pte(phys_addr_t pa, void * ubuf, size_t size, void * aux) {
    char * tmp; // line 271
    /* ... */
}

// [0x1bac..0x24] src:484
bool read_process_memory_kmap(pid_t pid, uintptr_t addr, void * buffer, size_t size) {
    char * tmp; // line 487
    bool ok; // line 488
    /* ... */
}

// [0x1d50..0x10] src:303
bool chunk_read_kmap(phys_addr_t pa, void * ubuf, size_t size, void * aux) {
    char * tmp; // line 306
    void * kaddr; // line 309
    struct page * page; // line 308
    unsigned long offset; // line 307
    /* ... */
}

// [0x1d98..0x3c] src:499
bool read_process_memory_nocache_vmap(pid_t pid, uintptr_t addr, void * buffer, size_t size) {
    /* ... */
}

// [0x1f0c..0x4] src:324
bool chunk_read_vmap(phys_addr_t pa, void * ubuf, size_t size, void * aux) {
    pgprot_t prot; // line 327
    bool ok; // line 332
    void * mapped; // line 331
    struct page * page; // line 330
    size_t offset; // line 329
    phys_addr_t aligned_pa; // line 328
    /* ... */
}

// [0x1f98..0x24] src:507
bool read_process_memory_nocache_ioremap(pid_t pid, uintptr_t addr, void * buffer, size_t size) {
    char * tmp; // line 510
    bool ok; // line 511
    /* ... */
}

// [0x2104..0x10] src:355
bool chunk_read_ioremap(phys_addr_t pa, void * ubuf, size_t size, void * aux) {
    char * tmp; // line 358
    phys_addr_t aligned_pa; // line 359
    bool ok; // line 362
    void * mapped; // line 361
    size_t offset; // line 360
    /* ... */
}

// [0x213c..0x3c] src:522
bool write_process_memory(pid_t pid, uintptr_t addr, void * buffer, size_t size) {
    /* ... */
}

// [0x21ac..0x88] src:294
bool chunk_write_linear(phys_addr_t pa, void * ubuf, size_t size, void * aux) {
    void * mapped; // line 297
    /* ... */
}

// [0x30ec..0x4] src:153
unsigned long _copy_from_user(void * to, void * from, unsigned long n) {
    unsigned long res; // line 155
    /* ... */
}

// [0x2200..0x3c] src:530
bool read_process_memory_common_manual(pid_t pid, uintptr_t addr, void * buffer, size_t size) {
    /* ... */
}

// [0x2290..0x24] src:538
bool read_process_memory_kmap_manual(pid_t pid, uintptr_t addr, void * buffer, size_t size) {
    char * tmp; // line 541
    bool ok; // line 542
    /* ... */
}

// [0x22e0..0x3c] src:553
bool read_process_memory_nocache_vmap_manual(pid_t pid, uintptr_t addr, void * buffer, size_t size) {
    /* ... */
}

// [0x2370..0x24] src:561
bool read_process_memory_nocache_ioremap_manual(pid_t pid, uintptr_t addr, void * buffer, size_t size) {
    char * tmp; // line 564
    bool ok; // line 565
    /* ... */
}

// [0x3a78..0x14] src:89
int pte_read_physical(phys_addr_t paddr, void * buffer, size_t size) {
    int ret; // line 93
    unsigned long pfn; // line 92
    void * mapped; // line 91
    /* ... */
}

// [0x3ac4..0x5c] src:122
void pte_control_exit(void) {
    /* ... */
}

// [0x3c20..0x4] src:20
unsigned long get_module_base(pid_t pid, char * comm) {
    char[] buf; // line 27
    unsigned long count; // line 26
    struct vm_area_struct * vma; // line 25
    struct mm_struct * mm; // line 24
    struct pid * pid_ref; // line 23
    struct task_struct * task; // line 22
    char * path_name; // line 28
    /* ... */
}

// [0x3d3c..0xe4] src:187
int do_config_gyro_hook(void * arg) {
    struct paradise_gyro_config_cmd cmd; // line 189
    uint32_t y_raw; // line 190
    uint32_t x_raw; // line 190
    /* ... */
}

// [0x32a0..0x4] src:153
unsigned long _copy_from_user(void * to, void * from, unsigned long n) {
    unsigned long res; // line 155
    /* ... */
}

// [0x2818..0x4] src:172
unsigned long _copy_to_user(void * to, void * from, unsigned long n) {
    /* ... */
}

// [0x3db0..0x8c] src:221
int paradise_gyro_init(void) {
    int ret; // line 223
    /* ... */
}

// [0x3e24..0x5c] src:239
void paradise_gyro_exit(void) {
    /* ... */
}

// [0x41f4..0x10] src:113
int gyro_sendto_handler(struct kprobe * p, struct pt_regs * regs) {
    struct pt_regs * real_regs; // line 115
    int i; // line 124
    unsigned long res; // line 123
    bool patched; // line 122
    struct paradise_gyro_state state; // line 121
    struct ASensorEvent_kernel * kernel_buffer; // line 120
    size_t count; // line 119
    size_t event_size; // line 118
    size_t len; // line 117
    void * user_buf; // line 116
    /* ... */
}

// [0x47ec..0x28] src:38
long hook_ioctl(struct pt_regs * regs) {
    unsigned int cmd; // line 40
    unsigned long arg; // line 41
    long ret; // line 42
    /* ... */
}

// [0x3454..0x4] src:153
unsigned long _copy_from_user(void * to, void * from, unsigned long n) {
    unsigned long res; // line 155
    /* ... */
}

// [0x298c..0x4] src:172
unsigned long _copy_to_user(void * to, void * from, unsigned long n) {
    /* ... */
}

// [0x4900..0x10] src:285
int ioctl_hook_install(void) {
    int ret; // line 287
    unsigned long target; // line 288
    u32 first_insn; // line 289
    /* ... */
}

// [0x4a10..0xc] src:322
int ioctl_hook_remove(void) {
    int ret; // line 324
    int i; // line 325
    /* ... */
}

// [0x4fe8..0x20] src:507
int install_hw_bp(HW_BP_INFO * info) {
    struct perf_event_attr attr; // line 510
    struct hw_bp_context * ctx; // line 509
    int ret; // line 512
    struct task_struct * task; // line 511
    /* ... */
}

// [0x5380..0x4] src:445
struct perf_event * hw_bp_handler(struct perf_event * bp, struct perf_sample_data * data, struct pt_regs * regs) {
    struct hw_bp_apply_cfg apply_cfg; // line 449
    struct hw_bp_context * ctx; // line 448
    /* ... */
}

// [0x5594..0x14] src:617
int get_hw_bp_hits(HWBP_HIT_ARGS * args) {
    unsigned long flags; // line 621
    int ret; // line 620
    struct hw_bp_context * pos; // line 619
    /* ... */
}

// [0x2b00..0x4] src:172
unsigned long _copy_to_user(void * to, void * from, unsigned long n) {
    /* ... */
}

// [0x56a8..0xc] src:677
struct hw_bp_context * clear_all_hw_bps(void) {
    struct hw_bp_context * pos; // line 679
    struct hw_bp_context * n; // line 679
    unsigned long tracking_flags; // line 680
    /* ... */
}

// [0x5700..0x4c] src:704
int hw_point_init(void) {
    /* ... */
}

// [0x5ab8..0x38] src:765
int update_hw_bp(HWBP_UPDATE_ARGS * args) {
    int i; // line 770
    unsigned long flags; // line 769
    int ret; // line 768
    struct hw_bp_context * pos; // line 767
    /* ... */
}

// [0x6010..0xdc] src:933
int enable_hw_bp(pid_t pid, uintptr_t addr) {
    /* ... */
}

// [0x6134..0xdc] src:938
int disable_hw_bp(pid_t pid, uintptr_t addr) {
    /* ... */
}

// [0x620c..0x4] src:949
int set_hwbp_reg_config(HWBP_REG_CONFIG * config) {
    int j; // line 954
    int i; // line 954
    int ret; // line 953
    unsigned long flags; // line 952
    struct hw_bp_context * pos; // line 951
    /* ... */
}

// [0x6738..0x4] src:475
int hw_bp_step_handler(struct pt_regs * regs, unsigned long esr) {
    struct hw_bp_context * ctx; // line 477
    /* ... */
}

// [0x71bc..0x4] src:518
int kp_core_hook_install(struct kp_core_hook * hook, unsigned long func_addr, unsigned long replace_addr, void * * backup) {
    u32[] reloc; // line 521
    int i; // line 523
    int ret; // line 522
    /* ... */
}

// [0x7258..0x10] src:484
struct kp_core_hook * kp_build_patch(struct kp_core_hook * hook) {
    unsigned long frame_addr; // line 486
    /* ... */
}

// [0x7380..0x4] src:449
int kp_patch_frame(struct kp_core_hook * hook, u32 * reloc) {
    void *[] addrs; // line 451
    u32[] insns; // line 452
    int i; // line 455
    int n; // line 454
    unsigned long base; // line 453
    /* ... */
}

// [0x75cc..0x1c] src:602
int kp_core_hook_restore(struct kp_core_hook * hook) {
    int ret; // line 604
    /* ... */
}

// [0x774c..0x38] src:630
int kp_core_hook_remove(struct kp_core_hook * hook) {
    int ret; // line 632
    /* ... */
}

// [0x77dc..0x14] src:641
int kp_core_patch_insn(void * addr, u32 insn) {
    int ret; // line 643
    /* ... */
}

// [0x7888..0xb8] src:321
int ptrace_hook_install(void) {
    int ret; // line 323
    /* ... */
}

// [0x7d40..0x30] src:283
long hook_ptrace(struct pt_regs * regs) {
    long request; // line 285
    void * addr; // line 286
    int ret; // line 287
    /* ... */
}

// [0x3608..0x4] src:153
unsigned long _copy_from_user(void * to, void * from, unsigned long n) {
    unsigned long res; // line 155
    /* ... */
}

// [0x2c74..0x4] src:172
unsigned long _copy_to_user(void * to, void * from, unsigned long n) {
    /* ... */
}

// [0x7e20..0xc] src:348
int ptrace_hook_remove(void) {
    struct spoof_entry * e; // line 350
    struct spoof_entry * tmp; // line 350
    /* ... */
}

// [0x7f40..0x14] src:370
int ptrace_spoof_add(pid_t tgid) {
    struct spoof_entry * e; // line 372
    /* ... */
}

// [0x8010..0x8] src:399
int ptrace_spoof_remove(pid_t tgid) {
    int ret; // line 402
    struct spoof_entry * e; // line 401
    /* ... */
}

// [0x8058..0x48] src:18
void init_hide_list(void) {
    /* ... */
}

// [0x80c0..0x64] src:58
struct kgsl_driver * hide_kgsl(struct kgsl_driver * kgsl_driver_ptr, pid_t target_pid) {
    /* ... */
}

// [0x81a8..0x18] src:25
struct kobject * hide_kgsl_dir(struct kobject * kobj, pid_t target_pid) {
    struct kernfs_node * parent_sd; // line 27
    struct rb_root * root; // line 28
    struct rb_node * node; // line 29
    /* ... */
}

// [0x82b8..0x8] src:68
pid_t hide_cts(pid_t target_pid) {
    char[] pid_str; // line 73
    struct dentry * pid_dentry; // line 72
    struct dentry * ctx_dir; // line 71
    struct dentry * mali_dir; // line 70
    /* ... */
}

// [0x8698..0x10] src:970
int shadow_entry_add(SHADOW_SET_ARGS * args) {
    struct lock_class_key __key; // line 1109
    int log_fp_reg_count; // line 986
    int log_reg_count; // line 985
    unsigned long old_target_addr; // line 984
    unsigned long flags; // line 983
    unsigned long page_addr; // line 982
    unsigned long target_addr; // line 981
    pteval_t pte_val_temp; // line 980
    pte_t current_pte; // line 979
    pte_t * pte_ptr; // line 978
    struct vm_area_struct * vma; // line 977
    struct mm_struct * mm; // line 976
    /* ... */
}

// [0x257b4..0x18] src:343
struct ratelimit_state shadow_log_emu_failure(struct pt_regs * regs, unsigned long fault_addr, unsigned long pc_before, unsigned long esr, u32 insn, enum emu_insn_result result, bool insn_read_failed, char * fallback) {
    struct ratelimit_state _rs; // line 352
    /* ... */
}

// [0x8a40..0x8] src:862
int shadow_write_user_pte(struct mm_struct * mm, unsigned long addr, pteval_t new_pte) {
    spinlock_t * ptl; // line 872
    pte_t old_pte; // line 871
    pte_t * ptep; // line 870
    pmd_t * pmd; // line 869
    pud_t * pud; // line 868
    p4d_t * p4d; // line 867
    pgd_t * pgd; // line 866
    struct vm_area_struct * vma; // line 865
    /* ... */
}

// [0x8b2c..0x10] src:956
struct shadow_entry * shadow_entry_fill_reg_config(struct shadow_entry * entry, SHADOW_SET_ARGS * args) {
    /* ... */
}

// [0x8e24..0x4] src:1136
int shadow_entry_del(pid_t pid, uintptr_t addr) {
    int ret; // line 1141
    unsigned long flags; // line 1140
    unsigned long page_addr; // line 1139
    struct shadow_entry * found; // line 1138
    /* ... */
}

// [0x909c..0xc] src:1187
int shadow_entry_get_hits(SHADOW_HIT_ARGS * args) {
    int ret; // line 1190
    struct shadow_entry * entry; // line 1189
    /* ... */
}

// [0x2de8..0x4] src:172
unsigned long _copy_to_user(void * to, void * from, unsigned long n) {
    /* ... */
}

// [0x9160..0x78] src:1245
int shadow_fault_init(void) {
    int ret; // line 1247
    /* ... */
}

// [0x9520..0x4] src:1273
struct list_head shadow_fault_exit(void) {
    struct list_head cleanup_list; // line 1277
    struct shadow_entry * entry; // line 1275
    struct shadow_entry * tmp; // line 1275
    unsigned long flags; // line 1276
    /* ... */
}

// [0x9584..0xc] src:1324
struct mm_struct * __mmu_notifier_arch_invalidate_secondary_tlbs(struct mm_struct * mm, unsigned long start, unsigned long end) {
    /* ... */
}

// [0x9720..0x28] src:722
int my_do_mem_abort(unsigned long far, unsigned long esr, struct pt_regs * regs) {
    unsigned long addr; // line 724
    /* ... */
}

// [0x11a24..0x4] src:364
int handle_shadow_page_fault(unsigned long addr, unsigned long esr, struct pt_regs * regs) {
    struct shadow_fault_config config; // line 372
    struct mm_struct * mm; // line 368
    struct shadow_entry * found; // line 367
    struct shadow_entry * entry; // line 366
    pte_t fault_pte; // line 371
    pte_t * fault_ptep; // line 370
    struct vm_area_struct * vma; // line 369
    bool pc_overridden; // line 387
    bool fp_regs_modified; // line 386
    bool emu_touches_fpsimd; // line 385
    bool fpsimd_state_flushed; // line 384
    bool fpsimd_state_current; // line 383
    /* ... */
}

// [0x25064..0x70] src:319
int shadow_apply_fp_reg_config(struct shadow_fault_config * config) {
    int applied; // line 321
    int i; // line 322
    /* ... */
}

// [0x254c8..0x14] src:266
bool shadow_insn_touches_fpsimd(u32 insn) {
    u32 table_count; // line 280
    u32 lane_count; // line 279
    u32 element_bits; // line 278
    u32 shift; // line 277
    u32 dest_bits; // line 276
    u32 source_bits; // line 275
    bool tbl_is_128; // line 274
    bool tbl_is_tbx; // line 273
    bool high_half; // line 272
    enum emu_narrow_shift_op narrow_shift_op; // line 271
    enum emu_reduce_op reduce_op; // line 270
    enum emu_narrow_op narrow_op; // line 269
    /* ... */
}

// [0x25698..0x4] src:923
bool shadow_allow_native_execution(struct shadow_entry * entry) {
    bool success; // line 928
    pteval_t pte_val_temp; // line 927
    pte_t current_pte; // line 926
    pte_t * ptep; // line 925
    /* ... */
}

// [0x26548..0x20] src:2603
int brk_bp_add(BRK_BP_SET_ARGS * args) {
    struct lock_class_key __key; // line 2894
    bool had_entries; // line 2615
    int i; // line 2614
    int ret; // line 2613
    u32 imm; // line 2612
    unsigned long flags; // line 2611
    unsigned long page_addr; // line 2610
    unsigned long addr; // line 2610
    struct vm_area_struct * vma; // line 2609
    struct task_struct * task; // line 2608
    struct pid * pid_struct; // line 2607
    struct mm_struct * mm; // line 2606
    /* ... */
}

// [0x29064..0x24] src:3122
int brk_bp_memwrite(BRK_MEMWRITE_ARGS * args) {
    struct lock_class_key __key; // line 3307
    bool had_entries; // line 3133
    int ret; // line 3132
    unsigned long flags; // line 3131
    unsigned long offset; // line 3130
    unsigned long page_addr; // line 3130
    unsigned long addr; // line 3130
    struct brk_bp_slot * slot; // line 3129
    struct vm_area_struct * vma; // line 3128
    struct task_struct * task; // line 3127
    struct pid * pid_struct; // line 3126
    struct mm_struct * mm; // line 3125
    /* ... */
}

// [0x277dc..0xc] src:1219
int brk_sync_clone_tree(struct brk_bp_entry * e, unsigned long fault_addr) {
    struct ratelimit_state _rs; // line 1278
    u64[] src_kva; // line 1221
    unsigned long[] done_rep; // line 1224
    unsigned long[] leaf_replaced_rep; // line 1225
    unsigned long[] slot_flush_addrs; // line 1226
    u64[] path_idx; // line 1223
    u64[] path_desc; // line 1222
    int ret; // line 1231
    int i; // line 1230
    bool root_synced; // line 1229
    struct brk_bp_tbl * root; // line 1228
    int slot_flush_cnt; // line 1227
    /* ... */
}

// [0x2aa1c..0x10] src:2529
int brk_user_break_handler(struct pt_regs * regs, brk_debug_esr_t esr) {
    struct ratelimit_state _rs; // line 2576
    bool handled; // line 2535
    u32 imm; // line 2534
    unsigned long flags; // line 2533
    struct brk_bp_slot * found_slot; // line 2532
    struct brk_bp_slot * slot; // line 2532
    struct brk_bp_entry * found; // line 2531
    struct brk_bp_entry * entry; // line 2531
    /* ... */
}

// [0x33354..0xc] src:2269
bool brk_bp_handle_hit(struct brk_bp_entry * entry, struct brk_bp_slot * slot, struct pt_regs * regs) {
    struct ratelimit_state _rs; // line 2397
    struct ratelimit_state _rs; // line 2432
    struct brk_bp_cfg cfg; // line 2274
    struct brk_hit_scratch * * scratch_by_cpu; // line 2273
    int i; // line 2290
    bool heartbeat; // line 2289
    bool first_hit; // line 2288
    bool normal_pgdir_installed; // line 2287
    bool emu_touches_fp; // line 2286
    bool pc_overridden; // line 2285
    bool fp_modified; // line 2284
    bool fpsimd_flushed; // line 2283
    /* ... */
}

// [0x47504..0x8] src:2216
struct ratelimit_state brk_log_entry_state(struct brk_bp_entry * e, char * why, void * caller) {
    struct ratelimit_state _rs; // line 2224
    unsigned long long first_addr; // line 2220
    struct brk_bp_slot * fs; // line 2219
    u64 total; // line 2221
    struct brk_bp_slot * s; // line 2222
    /* ... */
}

// [0x47e80..0x20] src:1436
struct ratelimit_state brk_switch_to_handle(struct task_struct * next) {
    struct ratelimit_state _rs; // line 1581
    phys_addr_t restore_pgd_pa; // line 1444
    int cpu; // line 1443
    bool restore_stale; // line 1442
    bool use_shadow; // line 1441
    unsigned long flags; // line 1440
    struct mm_struct * next_mm; // line 1439
    struct brk_bp_entry * stalled; // line 1438
    struct brk_bp_entry * found; // line 1438
    struct brk_bp_entry * entry; // line 1438
    /* ... */
}

// [0x4807c..0x20] src:1929
int brk_mm_fault_ret(struct kretprobe_instance * ri, struct pt_regs * regs) {
    struct ratelimit_state _rs; // line 1959
    struct brk_fault_capture * cap; // line 1931
    int ret; // line 1934
    unsigned long addr; // line 1933
    struct brk_bp_entry * entry; // line 1932
    /* ... */
}

// [0x4846c..0x4] src:551
struct ratelimit_state brk_call_all_cpus(void * fn, void * info) {
    struct ratelimit_state _rs; // line 571
    int ret; // line 555
    int cpu; // line 554
    int this_cpu; // line 553
    /* ... */
}

// [0x28470..0xc] src:1772
struct brk_bp_entry * brk_destroy_entry(struct brk_bp_entry * entry) {
    struct brk_bp_slot * tmp; // line 1775
    struct brk_bp_slot * slot; // line 1775
    int t; // line 1774
    /* ... */
}

// [0x26f24..0x4] src:790
int brk_build_clone(struct mm_struct * mm, unsigned long addr, struct brk_bp_entry * e, struct brk_bp_slot * slot) {
    u64[] src_kva; // line 793
    u64[] path_desc; // line 794
    u64[] path_idx; // line 795
    struct page *[] new_pages; // line 796
    unsigned long[] new_kvas; // line 797
    int ret; // line 806
    unsigned long cur_kva; // line 804
    int tbl_cnt_before; // line 803
    int n_used; // line 802
    int n_new; // line 802
    int t; // line 802
    int leaf_idx; // line 801
    /* ... */
}

// [0x26768..0x64] src:698
struct page * brk_cache_maintenance(struct page * page, unsigned long kaddr, size_t len) {
    /* ... */
}

// [0x27cc4..0x8] src:2039
int brk_install_debug_hook(void) {
    /* ... */
}

// [0x27d48..0xb4] src:1818
int brk_install_switch_hook(void) {
    unsigned long target; // line 1820
    int ret; // line 1821
    /* ... */
}

// [0x28068..0x8] src:1727
struct brk_bp_entry * brk_quiesce_entry(struct brk_bp_entry * entry) {
    unsigned long flags; // line 1729
    /* ... */
}

// [0x28164..0xb8] src:1843
int brk_uninstall_switch_hook(void) {
    int ret; // line 1845
    /* ... */
}

// [0x28210..0xc] src:2060
int brk_uninstall_debug_hook(void) {
    int i; // line 2062
    /* ... */
}

// [0x26fc8..0x1c] src:1711
struct brk_bp_entry * brk_resume_clone(struct brk_bp_entry * entry) {
    unsigned long flags; // line 1713
    /* ... */
}

// [0x27dd4..0x70] src:1986
int brk_install_mm_fault_kprobe(void) {
    int ret; // line 1988
    /* ... */
}

// [0x2988c..0x8] src:1036
pgd_t __val(void) {
    /* ... */
}

// [0x2a5a0..0x158] src:985
unsigned long brk_break_contiguous_group_at_kva(unsigned long leaf_kva, int leaf_idx) {
    u64 * leaf; // line 987
    int first; // line 988
    int i; // line 989
    /* ... */
}

// [0x2a898..0x8] src:1113
struct brk_bp_entry * brk_sync_tbl_node(struct brk_bp_entry * e, struct brk_bp_tbl * node, unsigned long real_kva) {
    struct brk_bp_tbl *[] kids; // line 1118
    u64 * dst; // line 1116
    u64 * src; // line 1117
    int j; // line 1120
    int i; // line 1120
    int kid_cnt; // line 1119
    /* ... */
}

// [0x28718..0x8] src:3033
int brk_bp_update_cfg(BRK_BP_SET_ARGS * args) {
    int i; // line 3038
    unsigned long flags; // line 3037
    unsigned long uaddr; // line 3037
    struct brk_bp_slot * found_slot; // line 3036
    struct brk_bp_slot * slot; // line 3036
    struct brk_bp_entry * found; // line 3035
    struct brk_bp_entry * entry; // line 3035
    /* ... */
}

// [0x37bc..0x4] src:153
unsigned long _copy_from_user(void * to, void * from, unsigned long n) {
    unsigned long res; // line 155
    /* ... */
}

// [0x29744..0x20] src:3433
int brk_bp_del(pid_t pid, uintptr_t addr) {
    bool was_singular; // line 3439
    unsigned long flags; // line 3438
    unsigned long uaddr; // line 3437
    struct brk_bp_slot * found_slot; // line 3436
    struct brk_bp_slot * slot; // line 3436
    struct brk_bp_entry * found; // line 3435
    struct brk_bp_entry * tmp; // line 3435
    struct brk_bp_entry * entry; // line 3435
    /* ... */
}

// [0x29b10..0xc] src:3618
int brk_bp_get_hits(BRK_BP_HIT_ARGS * args) {
    int ret; // line 3623
    unsigned long uaddr; // line 3622
    struct brk_bp_slot * slot; // line 3621
    struct brk_bp_entry * entry; // line 3620
    /* ... */
}

// [0x2f5c..0x4] src:172
unsigned long _copy_to_user(void * to, void * from, unsigned long n) {
    /* ... */
}

// [0x29c48..0xc] src:3679
struct brk_bp_entry * brk_bp_clear_all(void) {
    struct brk_bp_entry * entry; // line 3681
    struct brk_bp_entry * tmp; // line 3681
    unsigned long flags; // line 3682
    bool had_entries; // line 3683
    /* ... */
}

// [0x29e70..0x1c] src:3715
int brk_bp_init(void) {
    int ret; // line 3717
    /* ... */
}

// [0x2a44c..0x1c] src:356
struct work_struct * brk_heartbeat_fn(struct work_struct * work) {
    struct brk_bp_entry * entry; // line 358
    unsigned long flags; // line 359
    u64 ttbr; // line 360
    bool missed_grew; // line 361
    /* ... */
}

// [0x2a564..0x3c] src:3768
void brk_bp_exit(void) {
    /* ... */
}

// [0x472ec..0xc] src:664
bool brk_write_ttbr0(struct brk_bp_entry * entry, phys_addr_t pgd_pa, bool force_flush, struct task_struct * task) {
    u64 next; // line 667
    /* ... */
}

// [0x47094..0x4] src:2233
struct brk_bp_entry * brk_disable_emulation(struct brk_bp_entry * entry, char * reason) {
    bool was_disabled; // line 2237
    unsigned long flags; // line 2236
    /* ... */
}

// [0x47648..0x24] src:499
struct brk_bp_entry * brk_mark_clone_cpu(struct brk_bp_entry * entry, bool active) {
    int cpu; // line 503
    unsigned long flags; // line 502
    struct brk_bp_entry * other; // line 501
    /* ... */
}

// [0x477cc..0x28] src:1611
int brk_switch_to_hook(struct task_struct * prev, struct task_struct * next) {
    /* ... */
}

// [0x4830c..0x1c] src:1886
int brk_mm_fault_entry(struct kretprobe_instance * ri, struct pt_regs * regs) {
    struct brk_fault_capture * cap; // line 1888
    unsigned long flags; // line 1893
    struct mm_struct * mm; // line 1892
    struct brk_bp_entry * found; // line 1891
    struct brk_bp_entry * entry; // line 1891
    unsigned long addr; // line 1890
    struct vm_area_struct * vma; // line 1889
    /* ... */
}

// [0x485ac..0x4] src:1627
void * brk_restore_ttbr0_cb(void * info) {
    struct brk_bp_entry * entry; // line 1629
    phys_addr_t restore_pgd_pa; // line 1634
    bool saved_clone; // line 1633
    bool hardware_clone; // line 1632
    u64 ttbr; // line 1631
    struct mm_struct * mm; // line 1630
    /* ... */
}

// [0x487e4..0x414] src:184
struct arm64_decoded_insn arm64_decode_insn(arm64_u32 raw) {
    struct arm64_decoded_insn decoded; // line 186
    arm64_u32 op0; // line 188
    enum arm64_decode_status status; // line 187
    /* ... */
}

// [0x48b48..0x58] src:253
int arm64_decode_insn_has_effect(arm64_u32 raw, arm64_u64 effects) {
    struct arm64_decoded_insn decoded; // line 255
    /* ... */
}

// [0x48b74..0x74] src:262
int arm64_decode_direct_target(struct arm64_decoded_insn * decoded, arm64_u64 pc, arm64_u64 * target) {
    arm64_s64 offset; // line 264
    /* ... */
}

// [0x48ca8..0x20] src:325
int arm64_decode_memory_address(struct arm64_decoded_insn * decoded, arm64_u64 pc, arm64_u64 base, arm64_u64 index_value, struct arm64_memory_address * address) {
    struct arm64_load_store_operands * operands; // line 327
    arm64_u64 offset; // line 328
    /* ... */
}

// [0x49100..0xc] src:165
enum arm64_decode_status arm64_decode_data_processing_immediate(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    arm64_u32 opc; // line 167
    /* ... */
}

// [0x492cc..0x1c] src:65
int arm64_decode_bit_masks(arm64_u8 n, arm64_u8 immr, arm64_u8 imms, arm64_u8 width, int immediate, arm64_u64 * wmask, arm64_u64 * tmask) {
    arm64_u32 value; // line 68
    arm64_u8 element_width; // line 74
    arm64_u8 diff; // line 73
    arm64_u8 r; // line 72
    arm64_u8 s; // line 71
    arm64_u8 levels; // line 70
    arm64_u8 len; // line 69
    /* ... */
}

// [0x49990..0x8] src:265
enum arm64_decode_status arm64_decode_data_processing_register(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    arm64_u32 opc; // line 267
    /* ... */
}

// [0x49a4c..0x4ac] src:28
enum arm64_decode_status arm64_decode_branch(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    struct arm64_system_operands * system; // line 30
    arm64_u32 iclass; // line 32
    arm64_u32 branch_reg; // line 31
    /* ... */
}

// [0x4a3e4..0xc] src:394
enum arm64_decode_status arm64_decode_ldst(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    enum arm64_ldst_major major; // line 396
    /* ... */
}

// [0x4c384..0x2e8] src:886
enum arm64_simd_operation arm64_simd_decode_conversion(arm64_u32 raw, struct arm64_decoded_insn * decoded, arm64_u8 * unallocated) {
    enum arm64_fp_rounding_mode[] rounding_modes; // line 999
    arm64_u32 signature; // line 888
    enum arm64_simd_operation operation; // line 891
    arm64_u32 opcode; // line 890
    arm64_u32 rounding; // line 889
    /* ... */
}

// [0x4b660..0x18] src:1143
enum arm64_decode_status arm64_decode_simd(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    arm64_u8 conversion_unallocated; // line 1147
    arm64_u32 type; // line 1146
    arm64_u32 iclass; // line 1145
    enum arm64_simd_operation operation; // line 1148
    /* ... */
}

// [0x4b66c..0xb4] src:372
enum arm64_decode_status arm64_simd_decode_complex_vector(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    arm64_u8 q; // line 374
    arm64_u8 size; // line 375
    /* ... */
}

// [0x4b720..0x204] src:543
enum arm64_decode_status arm64_simd_decode_vector_3same_extra(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    enum arm64_simd_operation operation; // line 549
    arm64_u8 opcode; // line 548
    arm64_u8 size; // line 547
    arm64_u8 u; // line 546
    arm64_u8 q; // line 545
    /* ... */
}

// [0x4baf0..0x230] src:633
enum arm64_decode_status arm64_simd_decode_vector_3same(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    arm64_u8 fp16; // line 635
    enum arm64_simd_operation operation; // line 640
    arm64_u8 opcode; // line 639
    arm64_u8 u; // line 637
    arm64_u8 q; // line 636
    arm64_u8 size; // line 638
    /* ... */
}

// [0x4bcb4..0x8] src:715
enum arm64_decode_status arm64_simd_decode_scalar_3same(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    arm64_u8 extra; // line 718
    arm64_u8 u; // line 719
    arm64_u8 size; // line 720
    enum arm64_simd_operation operation; // line 722
    arm64_u8 opcode; // line 721
    arm64_u8 fp16; // line 717
    /* ... */
}

// [0x4bd78..0x400] src:288
enum arm64_decode_status arm64_simd_decode_by_element(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    arm64_u8 size; // line 290
    arm64_u8 opcode; // line 291
    arm64_u8 scalar; // line 292
    arm64_u8 q; // line 293
    arm64_u8 h; // line 295
    arm64_u8 u; // line 294
    arm64_u8 l; // line 296
    arm64_u8 m; // line 297
    enum arm64_decode_status extra_status; // line 298
    /* ... */
}

// [0x4c178..0xd0] src:859
enum arm64_decode_status arm64_simd_decode_shift_immediate(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    arm64_u8 immh; // line 861
    arm64_u8 opcode; // line 863
    arm64_u8 encoded_immediate; // line 865
    arm64_u8 element_width; // line 864
    arm64_u8 immb; // line 862
    /* ... */
}

// [0x4c248..0x13c] src:794
enum arm64_decode_status arm64_simd_decode_fp_compare_zero(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    arm64_u32 shape; // line 796
    arm64_u32 relation; // line 797
    arm64_u8 q; // line 799
    arm64_u8 scalar; // line 798
    /* ... */
}

// [0x4c66c..0xd0] src:1022
enum arm64_decode_status arm64_simd_decode_fp_vector_2reg(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    arm64_u32 shape; // line 1024
    arm64_u8 q; // line 1026
    arm64_u32 signature; // line 1025
    /* ... */
}

// [0x4c73c..0xc8] src:1056
enum arm64_decode_status arm64_simd_decode_rev(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    arm64_u32 size; // line 1058
    /* ... */
}

// [0x4c804..0x144] src:1084
enum arm64_decode_status arm64_simd_decode_fp_reduce(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    arm64_u32 signature; // line 1086
    /* ... */
}

// [0x4c948..0x1f8] src:489
enum arm64_simd_operation arm64_simd_decode_fp_3same_operation(arm64_u8 u, arm64_u8 alternate, arm64_u8 opcode) {
    /* ... */
}

// [0x4cb40..0x50] src:4
enum arm64_decode_status arm64_decode_sve(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    /* ... */
}

// [0x4cb90..0x3c] src:4
enum arm64_decode_status arm64_decode_sme(arm64_u32 raw, struct arm64_decoded_insn * decoded) {
    /* ... */
}

