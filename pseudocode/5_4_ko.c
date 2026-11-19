// 5.4.ko 内核模块伪代码 (radare2 pdc, 154 functions)


/* ===== 0x08005008 ===== */
int sym..rodata (int esi, int edx) {
    loc_0x8005008:
        ~   w1 = (word) [x16 + 0x139a] // 0xd7 // 215 // [09] -r-- section size 26012 named .rodata
        .string "6gyro: kprobe unregistered\n" // len=28
         // (break)
}

/* ===== 0x0800cb38 ===== */
int sym.unfuck_cfi (int esi, int edx) {
    loc_0x800cb38:
        sp = sp - 0x80
        [sp, 0x50] = (x29,2)
        [sp, 0x60] = (x22,2)
        [sp, 0x70] = (x20,2)
        x29 = var_50h
        x20 = sym.__cfi_check // 0x800c000
        w8 = (byte) [x20] // 0xdb // 219 // sym.__cfi_check
        [sp, 0x40] = (xzr,2)
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        if (w8 == 1)  // x26
        [sp, 0x10] = (xzr,2)
        [var_8h] = xzr
        b.ne 0x800cc18 // likely
            
    loc_0x800cc18:
        // CODE XREFS from sym.unfuck_cfi @ 0x800cb6c, 0x800cb78, 0x800cc38
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        sp = arg_80h
        0x0800cc28
         // } else {
    loc_0x800cb70:
        x21 = sym.__cfi_check // 0x800c000
        w8 = [x21]    // 0xdc // 220 // sym.__cfi_check
        if !w8 jmp 0x800cc18 // unlikely
        }
        return eax;
    loc_0x800cb7c:
        x22 = sym.__cfi_check // 0x800c000
        x8 = [x22]    // 0xdd // 221 // sym.__cfi_check
        if x8 jmp 0x800cbb4 // likely
            
    loc_0x800cbb4:
        // CODE XREF from sym.unfuck_cfi @ 0x800cb84
        x0 = sym.__cfi_check // 0x800c000
        x0 = x0 + 0   // 0x800c000
        // sym.__cfi_check
        blr x8        // x8(0x800c000, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800cc2c // unlikely
            
    loc_0x800cc2c:
        // CODE XREFS from sym.unfuck_cfi @ 0x800cb98, 0x800cbb0, 0x800cbc0
        x0 = sym.__cfi_check // 0x800c000
        x0 = x0 + 0   // 0x800c000
        // sym.__cfi_check // int64_t arg_80h
        0x800cc34 ()  // 0x800cc34(0x800c000, 0x0, 0x0, 0x0)
        jmp 0x800cc18
    loc_0x0800cb88: // orphan
             x19 = sym.__cfi_check    // 0x800c000
             x19 = x19 + 0            // 0x800c000
                                      // sym.__cfi_check
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h // sym.__cfi_check
             0x800cb94 ()             // 0x800cb94(0x800c000, 0x0, 0x0, 0x0)
             tbnz w0,0x1f,0x800cc2c   // unlikely

    loc_0x0800cb9c: // orphan
         x8 = [x19 + 0x28]        // 0xda // 218
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
         [x22] = x8
         0x800cba8 ()             // 0x800cba8(0x10, 0x0, 0x0, 0x0)
         x8 = [x22]               // 0xdd // 221
         if !x8 jmp 0x800cc2c     // unlikely

    loc_0x0800cbc4: // orphan
         w2 = [x21]               // 0xdc // 220
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w2 == 1)             // x26 // x26
         b.lt 0x800cc00           // likely

    loc_0x0800cbd4: // orphan
         x10 = sym.__cfi_check    // 0x800c000
         x9 = var_8h
         x10 = x10 + 0            // 0x800c000
                                  // sym.__cfi_check
         x11 = var_20h
         x12 = x2                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800cbe8: // orphan
         // CODE XREF from sym.unfuck_cfi @ 0x800cbfc
         ldur x13,[x10,-8]        // 0xd1 // 209
         w14 = [x10] + 0x10       // 0xd1 // 209 // x19
         x12 = x12 - 1
         [x11] + 8 = x13
         [x9] + 4 = w14
         b.ne 0x800cbe8           // likely

    loc_0x0800cc00: // orphan
         // CODE XREF from sym.unfuck_cfi @ 0x800cbd0
         x0 = var_20h
         x1 = var_8h
         blr x8                   // x8(0x178020, 0x178008, 0x0, 0x0)
         if w0 jmp 0x800cc3c      // likely

    loc_0x0800cc10: // orphan
         // CODE XREF from sym.unfuck_cfi @ 0x800cc4c
         [x20] = (byte) wzr       // x24
         [x21] = wzr

    loc_0x0800cc3c: // orphan
         // CODE XREF from sym.unfuck_cfi @ 0x800cc0c
         w1 = [x21]               // 0xdc // 220
         x0 = sym.__cfi_check     // 0x800c000
         x0 = x0 + 0              // 0x800c000
                                  // sym.__cfi_check // int64_t arg_80h
         0x800cc48 ()             // 0x800cc48(0x800c000, 0x0, 0x0, 0x0)
         jmp 0x800cc10

}

/* ===== 0x0800db60 ===== */
int sym._copy_from_user (int esi, int edx) {
    loc_0x800db60:
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = (byte) [x8 + 0x36] // 0xcf // 207
        x10 = [x8 + 8] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = x1 << 8  // arg2
        tbnz w11,5,0x800db98 // likely
            
    loc_0x800db98:
        // CODE XREF from sym._copy_from_user @ 0x800db88
        x11 = x1 & x9,asr 8 // arg2
         // do {
    loc_0x800db9c:
        // CODE XREF from sym._copy_from_user @ 0x800db94
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = x11 + x19
        csel x10,xzr,x10, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x10 // x19
        cset x11,ls   // x26
        if !x11 jmp 0x800dc64 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800dbb8: // orphan
             jmp 0x800dc7c

    loc_0x0800dbc0: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800dc84
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x800dbd4     // unlikely

    loc_0x0800dbcc: // orphan
         w11 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800dbd4: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800dbc8
         x11 = [x8 + 0x10]        // 0xcf // 207
         mrs x12,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x13,x12,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800dbfc: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800dc8c
         x10 = [x8 + 8]           // 0xcf // 207
         x9 = x1 & x9,asr 8       // arg2
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x1,xzr, eq
         hint 0x14
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800dc1c ()             // 0x800dc1c(0x20, 0x0, 0x10, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         jmp 0x800dc90

    loc_0x0800dc2c: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800dc98
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800dc40      // unlikely

    loc_0x0800dc38: // orphan
         w9 = 0x60                // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800dc40: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800dc34
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800dc64: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800dbb4
         if x21 jmp 0x800dca4     // unlikely

    loc_0x0800dc68: // orphan
         // CODE XREFS from sym._copy_from_user @ 0x800dca0, 0x800dcb8
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         

    loc_0x0800dc7c: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800dbb8
         x10 = 0x800d000
         x10 = [x10]              // 0xd1 // 209
         tbz w10,4,0x800dbc0      // likely

    loc_0x0800dc88: // orphan
         
         jmp 0x800dbfc

    loc_0x0800dc90: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800dc24
         x8 = 0x800d000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x800dc2c       // likely

    loc_0x0800dc9c: // orphan
         
         if !x21 jmp 0x800dc68    // likely

    loc_0x0800dca4: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800dc64
         x8 = x19 - x21
         x0 = x20 + x8            // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800dcb4 ()             // 0x800dcb4(0x30, 0x0, 0x0, 0x0)
         jmp 0x800dc68

}

/* ===== 0x0800da44 ===== */
int sym._copy_to_user (int esi, int edx) {
    loc_0x800da44:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = (byte) [x8 + 0x36] // 0xcf // 207
        x10 = [x8 + 8] // 0xcf // 207
        x9 = x0 << 8  // arg1
        tbnz w11,5,0x800da6c // likely
            
    loc_0x800da6c:
        // CODE XREF from sym._copy_to_user @ 0x800da5c
        x11 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x800da70:
        // CODE XREF from sym._copy_to_user @ 0x800da68
        x11 = x11 + x2 // arg3
        csel x10,xzr,x10, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x10
        cset x11,ls   // x26
        if !x11 jmp 0x800db2c // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800da88: // orphan
             jmp 0x800db38

    loc_0x0800da90: // orphan
         // CODE XREF from sym._copy_to_user @ 0x800db40
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x800daa4     // unlikely

    loc_0x0800da9c: // orphan
         w11 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800daa4: // orphan
         // CODE XREF from sym._copy_to_user @ 0x800da98
         x11 = [x8 + 0x10]        // 0xcf // 207
         mrs x12,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x13,x12,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800dacc: // orphan
         // CODE XREF from sym._copy_to_user @ 0x800db48
         x10 = [x8 + 8]           // 0xcf // 207
         x9 = x0 & x9,asr 8       // arg1
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x0,xzr, eq
         hint 0x14
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800dae4 ()             // 0x800dae4(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800db4c

    loc_0x0800daf4: // orphan
         // CODE XREF from sym._copy_to_user @ 0x800db54
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800db08      // unlikely

    loc_0x0800db00: // orphan
         w9 = 0x60                // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800db08: // orphan
         // CODE XREF from sym._copy_to_user @ 0x800dafc
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800db2c: // orphan
         // CODE XREFS from sym._copy_to_user @ 0x800da84, 0x800db5c
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         

    loc_0x0800db38: // orphan
         // CODE XREF from sym._copy_to_user @ 0x800da88
         x10 = 0x800d000
         x10 = [x10]              // 0xd1 // 209
         tbz w10,4,0x800da90      // likely

    loc_0x0800db44: // orphan
         
         jmp 0x800dacc

    loc_0x0800db4c: // orphan
         // CODE XREF from sym._copy_to_user @ 0x800daec
         x8 = 0x800d000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x800daf4       // likely

    loc_0x0800db58: // orphan
         
         jmp 0x800db2c

}

/* ===== 0x0800d7ac ===== */
int sym.translate_va_to_pa (int esi, int edx) {
    loc_0x800d7ac:
        if !w3 jmp 0x800d85c // likely
            
    loc_0x800d85c:
        // CODE XREF from sym.translate_va_to_pa @ 0x800d7ac
        w8 = ~0x15
        if !x0 jmp 0x800d920 // likely
            
    loc_0x800d920:
        // XREFS: CODE 0x0800d858  CODE 0x0800d860  CODE 0x0800d864
        // XREFS: CODE 0x0800d86c  CODE 0x0800d948  CODE 0x0800d9c4
        // XREFS: CODE 0x0800da1c
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // lr
         // } else {
    loc_0x800d864:
        if !x2 jmp 0x800d920 // likely
         // } else {
        }
        return eax;
        goto loc_0x800d7b0
    loc_0x800d7b8:
        if !x2 jmp 0x800d854 // likely
    loc_0x800d854:
        // CODE XREFS from sym.translate_va_to_pa @ 0x800d7b4, 0x800d7b8
        if (w3 == 1)  // arg4 // x26
        b.eq 0x800d920 // unlikely
        }
        return eax;
    loc_0x0800d7bc: // orphan
             [x2] = xzr               // arg3
             if !x4 jmp 0x800d840     // likely

    loc_0x0800d7c4: // orphan
         w8 = (byte) [x4 + 0x21]  // 0xcb // 203 // arg5
         if !w8 jmp 0x800d840     // unlikely

    loc_0x0800d7cc: // orphan
         x9 = [x4 + 8]            // 0xcb // 203 // arg5
         if (x9 == x1)            // arg2 // x26 // x26
         b.hi 0x800d840           // likely

    loc_0x0800d7d8: // orphan
         x8 = [x4 + 0x10]         // 0xcb // 203 // arg5 // x19
         if (x8 == x1)            // arg2 // x26 // x26
         b.ls 0x800d840           // unlikely

    loc_0x0800d7e4: // orphan
         w8 = (byte) [x4 + 0x20]  // 0xcb // 203 // arg5 // x24
         if !w8 jmp 0x800d804     // likely

    loc_0x0800d7ec: // orphan
         x10 = [x4 + 0x18]        // 0xcb // 203 // arg5
         x9 = x1 - x9             // arg2
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x9 = x9 + x10
         [x2] = x9                // arg3
                                  // lr

    loc_0x0800d804: // orphan
         // CODE XREF from sym.translate_va_to_pa @ 0x800d7e8
         x8 = [x4]                // 0xcb // 203 // arg5
         x9 = x1 - x9             // arg2
         x9 = x9 >> 9
         x9 = x9 & 0x7ffffffffffff8
         x9 = [x8 + x9]           // 0xd0000000cf // 893353197775
         x8 = 0x1                 // x26
         x8 = 0x400
         if ((x9 & x8) == 0)      // x26 // x26
         b.eq 0x800d83c           // unlikely

    loc_0x0800d828: // orphan
         x9 = x9 & 0xfffffffff000
         bfxil x9,x1,0, 0xc       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x2] = x9                // arg3
                                  // lr

    loc_0x0800d83c: // orphan
         // CODE XREF from sym.translate_va_to_pa @ 0x800d824
         [x4 + 0x21] = (byte) wzr // arg5

    loc_0x0800d840: // orphan
         // CODE XREFS from sym.translate_va_to_pa @ 0x800d7c0, 0x800d7c8, 0x800d7d4, 0x800d7e0
         x8 = [x0 + 0x40]         // 0xc7 // 199 // arg1
         ubfx x9,x1,0x1e, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         x10 = [x8 + x9,lsl 3]    // 0xd0000000cf // 893353197775
         tbnz w10,1,0x800d928     // likely

    loc_0x0800d850: // orphan
         // CODE XREFS from sym.translate_va_to_pa @ 0x800d9a0, 0x800d9f4, 0x800da08
         w8 = ~0xd

    loc_0x0800d868: // orphan
         x9 = [x0 + 0x40]         // 0xc7 // 199 // arg1
         if !x9 jmp 0x800d920     // unlikely

    loc_0x0800d870: // orphan
         [x2] = xzr               // arg3
         x8 = 0x800d000
         x8 = [x8]                // 0xcf // 207
         x11 = [x0 + 0x40]        // 0xc7 // 199 // arg1
         x9 = 0x800d000
         x10 = 0x800d000
         x9 = [x9]                // 0xd0 // 208
         x10 = [x10]              // 0xd1 // 209
         x8 = x8 - 1
         x8 = x11 >> x8
         if ((x8 & 1) == 0)       // x26
         csneg x8,x9,x10, eq
         x10 = x8 + x11
         w11 = ~0xd
         mrs x13,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,0xf          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         x16 = x10 >> 0x30
         x15 = x10 & 0xffffffffffff
         x16 = x15 | x16,lsl 2
         mrs x14,ttbr0_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x16        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         at s1e0r,x1
         
         mrs x12,par_el1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x15 = x1 >> 0xc          // arg2
         tlbi vaae1,x15
         dsb nsh
         
         msr ttbr0_el1,x14        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x13             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         tbnz w12,0,0x800d914     // unlikely

    loc_0x0800d8fc: // orphan
         ubfx x12,x12,0xc, 0x28   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x12 << 0xc
         x15 = x1 & 0xfff         // arg2
         x9 = x12 | x15
         w8 = 0
         jmp 0x800d91c

    loc_0x0800d914: // orphan
         // CODE XREF from sym.translate_va_to_pa @ 0x800d8f8
         w8 = w11                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0

    loc_0x0800d91c: // orphan
         // CODE XREF from sym.translate_va_to_pa @ 0x800d910
         if !w8 jmp 0x800d970     // unlikely

    loc_0x0800d928: // orphan
         // CODE XREF from sym.translate_va_to_pa @ 0x800d84c
         x11 = x10 & 3
         if (x11 == 1)            // x26
         b.ne 0x800d97c           // likely

    loc_0x0800d934: // orphan
         x9 = x10 & 0xffffc0000000
         x8 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x8,x1,0, 0x1e      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         [x2] = x8                // arg3
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if !x4 jmp 0x800d920     // likely

    loc_0x0800d94c: // orphan
         x10 = x1 & 0xffffffffc0000000 // arg2
         w11 = 0x4000
         w12 = 0x101
         x11 = x10 + x11
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x4] = (xzr,2)           // arg5
         [x4, 0x10] = (x11,2)     // arg5
         [x4 + 0x20] = (half) w12 // x24
                                  // lr

    loc_0x0800d970: // orphan
         // CODE XREF from sym.translate_va_to_pa @ 0x800d91c
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x2] = x9                // arg3
                                  // lr

    loc_0x0800d97c: // orphan
         // CODE XREF from sym.translate_va_to_pa @ 0x800d930
         x9 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         x8 = 0x800d000
         x8 = [x8]                // 0xcf // 207
         x10 = x1 >> 0x12         // arg2
         x9 = x9 & 0xfffffffff000
         x10 = x10 & 0xff8
         x9 = x9 | x10
         x9 = x9 - x8
         x10 = [x9]               // 0xd0 // 208
         tbz w10,1,0x800d850      // unlikely

    loc_0x0800d9a4: // orphan
         x11 = x10 & 3
         if (x11 == 1)            // x26
         b.ne 0x800d9e0           // likely

    loc_0x0800d9b0: // orphan
         x9 = x10 & 0xffffffe00000
         x8 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x8,x1,0, 0x15      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         [x2] = x8                // arg3
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if !x4 jmp 0x800d920     // likely

    loc_0x0800d9c8: // orphan
         x10 = x1 & 0xffffffffffe00000 // arg2
         x12 = x10 + 0x200,lsl 12
         w11 = 0x101
         [x4] = (xzr,2)           // arg5
         [x4, 0x10] = (x12,2)     // arg5
         jmp 0x800da38

    loc_0x0800d9e0: // orphan
         // CODE XREF from sym.translate_va_to_pa @ 0x800d9ac
         x9 = [x9]                // 0xd0 // 208
         x10 = x9 & 0xfffffffff000
         ubfx x9,x1,0xc, 9        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         bfi x10,x9,3, 9          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 - x8
         b.eq 0x800d850           // unlikely

    loc_0x0800d9f8: // orphan
         x8 = [x10]               // 0xd1 // 209
         x11 = 0x1                // x26
         x11 = 0x400
         if ((x8 & x11) == 0)     // x26
         b.eq 0x800d850           // unlikely

    loc_0x0800da0c: // orphan
         x8 = x8 & 0xfffffffff000
         bfxil x8,x1,0, 0xc       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         [x2] = x8                // arg3
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if !x4 jmp 0x800d920     // likely

    loc_0x0800da20: // orphan
         x9 = x10 - x9,lsl 3
         x10 = x1 & 0xffffffffffe00000 // arg2
         w11 = 0x100
         [x4] = (x9,2)            // arg5
         x9 = x10 + 0x200,lsl 12
         [x4, 0x10] = (x9,2)      // arg5

    loc_0x0800da38: // orphan
         // CODE XREF from sym.translate_va_to_pa @ 0x800d9dc
         [x4 + 0x20] = (half) w11 // x24
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
                                  // lr

}

/* ===== 0x0800e1f0 ===== */
int sym._copy_from_user_1 (int esi, int edx) {
    loc_0x800e1f0:
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = (byte) [x8 + 0x36] // 0xcf // 207
        x10 = [x8 + 8] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = x1 << 8  // arg2
        tbnz w11,5,0x800e228 // likely
            
    loc_0x800e228:
        x11 = x1 & x9,asr 8 // arg2
         // do {
    loc_0x800e22c:
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = x11 + x19
        csel x10,xzr,x10, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x10 // x19
        cset x11,ls   // x26
        if !x11 jmp 0x800e2f4 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800e248: // orphan
             jmp 0x800e30c

    loc_0x0800e250: // orphan
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x800e264     // unlikely

    loc_0x0800e25c: // orphan
         w11 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e264: // orphan
         x11 = [x8 + 0x10]        // 0xcf // 207
         mrs x12,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x13,x12,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800e28c: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x800e31c
         x10 = [x8 + 8]           // 0xcf // 207
         x9 = x1 & x9,asr 8       // arg2
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x1,xzr, eq
         hint 0x14
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800e2ac ()             // 0x800e2ac(0x20, 0x0, 0x10, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         jmp 0x800e320

    loc_0x0800e2bc: // orphan
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800e2d0      // unlikely

    loc_0x0800e2c8: // orphan
         w9 = 0x60                // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e2d0: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800e2f4: // orphan
         if x21 jmp 0x800e334     // unlikely

    loc_0x0800e2f8: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x800e348
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         

    loc_0x0800e30c: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x800e248
         x10 = 0x800e000
         x10 = [x10]              // 0xd1 // 209
         tbz w10,4,0x800e250      // unlikely

    loc_0x0800e318: // orphan
         
         jmp 0x800e28c

    loc_0x0800e320: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x800e2b4
         x8 = 0x800e000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x800e2bc       // unlikely

    loc_0x0800e32c: // orphan
         
         if !x21 jmp 0x800e2f8    // likely

    loc_0x0800e334: // orphan
         x8 = x19 - x21
         x0 = x20 + x8            // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800e344 ()             // 0x800e344(0x30, 0x0, 0x0, 0x0)
         jmp 0x800e2f8

}

/* ===== 0x0800e34c ===== */
int sym._copy_to_user_1 (int esi, int edx) {
    loc_0x800e34c:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = (byte) [x8 + 0x36] // 0xcf // 207
        x10 = [x8 + 8] // 0xcf // 207
        x9 = x0 << 8  // arg1
        tbnz w11,5,0x800e374 // likely
            
    loc_0x800e374:
        x11 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x800e378:
        x11 = x11 + x2 // arg3
        csel x10,xzr,x10, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x10
        cset x11,ls   // x26
        if !x11 jmp 0x800e434 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800e390: // orphan
             jmp 0x800e440

    loc_0x0800e398: // orphan
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x800e3ac     // unlikely

    loc_0x0800e3a4: // orphan
         w11 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e3ac: // orphan
         x11 = [x8 + 0x10]        // 0xcf // 207
         mrs x12,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x13,x12,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800e3d4: // orphan
         // CODE XREF from sym._copy_to_user_1 @ 0x800e450
         x10 = [x8 + 8]           // 0xcf // 207
         x9 = x0 & x9,asr 8       // arg1
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x0,xzr, eq
         hint 0x14
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800e3ec ()             // 0x800e3ec(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800e454

    loc_0x0800e3fc: // orphan
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800e410      // unlikely

    loc_0x0800e408: // orphan
         w9 = 0x60                // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e410: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800e434: // orphan
         // CODE XREF from sym._copy_to_user_1 @ 0x800e464
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         

    loc_0x0800e440: // orphan
         // CODE XREF from sym._copy_to_user_1 @ 0x800e390
         x10 = 0x800e000
         x10 = [x10]              // 0xd1 // 209
         tbz w10,4,0x800e398      // unlikely

    loc_0x0800e44c: // orphan
         
         jmp 0x800e3d4

    loc_0x0800e454: // orphan
         // CODE XREF from sym._copy_to_user_1 @ 0x800e3f4
         x8 = 0x800e000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x800e3fc       // unlikely

    loc_0x0800e460: // orphan
         
         jmp 0x800e434

}

/* ===== 0x0800efa8 ===== */
int sym._copy_from_user_2 (int esi, int edx) {
    loc_0x800efa8:
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = (byte) [x8 + 0x36] // 0xcf // 207
        x10 = [x8 + 8] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = x1 << 8  // arg2
        tbnz w11,5,0x800efe0 // likely
            
    loc_0x800efe0:
        x11 = x1 & x9,asr 8 // arg2
         // do {
    loc_0x800efe4:
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = x11 + x19
        csel x10,xzr,x10, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x10 // x19
        cset x11,ls   // x26
        if !x11 jmp 0x800f0ac // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800f000: // orphan
             // XREFS(135)
             jmp 0x800f0c4

    loc_0x0800f008: // orphan
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x800f01c     // unlikely

    loc_0x0800f014: // orphan
         w11 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800f01c: // orphan
         x11 = [x8 + 0x10]        // 0xcf // 207
         mrs x12,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x13,x12,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800f044: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x800f0d4
         x10 = [x8 + 8]           // 0xcf // 207
         x9 = x1 & x9,asr 8       // arg2
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x1,xzr, eq
         hint 0x14
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800f064 ()             // 0x800f064(0x20, 0x0, 0x10, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         jmp 0x800f0d8

    loc_0x0800f074: // orphan
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800f088      // unlikely

    loc_0x0800f080: // orphan
         w9 = 0x60                // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800f088: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800f0ac: // orphan
         if x21 jmp 0x800f0ec     // unlikely

    loc_0x0800f0b0: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x800f100
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         

    loc_0x0800f0c4: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x800f000
         x10 = 0x800f000
         x10 = [x10]              // 0xd1 // 209
         tbz w10,4,0x800f008      // unlikely

    loc_0x0800f0d0: // orphan
         
         jmp 0x800f044

    loc_0x0800f0d8: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x800f06c
         x8 = 0x800f000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x800f074       // unlikely

    loc_0x0800f0e4: // orphan
         
         if !x21 jmp 0x800f0b0    // likely

    loc_0x0800f0ec: // orphan
         x8 = x19 - x21
         x0 = x20 + x8            // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800f0fc ()             // 0x800f0fc(0x30, 0x0, 0x0, 0x0)
         jmp 0x800f0b0

}

/* ===== 0x0800f104 ===== */
int sym._copy_to_user_2 (int esi, int edx) {
    loc_0x800f104:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = (byte) [x8 + 0x36] // 0xcf // 207
        x10 = [x8 + 8] // 0xcf // 207
        x9 = x0 << 8  // arg1
        tbnz w11,5,0x800f12c // likely
            
    loc_0x800f12c:
        x11 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x800f130:
        x11 = x11 + x2 // arg3
        csel x10,xzr,x10, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x10
        cset x11,ls   // x26
        if !x11 jmp 0x800f1ec // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800f148: // orphan
             jmp 0x800f1f8

    loc_0x0800f150: // orphan
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x800f164     // unlikely

    loc_0x0800f15c: // orphan
         w11 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800f164: // orphan
         x11 = [x8 + 0x10]        // 0xcf // 207
         mrs x12,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x13,x12,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800f18c: // orphan
         // CODE XREF from sym._copy_to_user_2 @ 0x800f208
         x10 = [x8 + 8]           // 0xcf // 207
         x9 = x0 & x9,asr 8       // arg1
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x0,xzr, eq
         hint 0x14
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800f1a4 ()             // 0x800f1a4(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800f20c

    loc_0x0800f1b4: // orphan
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800f1c8      // unlikely

    loc_0x0800f1c0: // orphan
         w9 = 0x60                // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800f1c8: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800f1ec: // orphan
         // CODE XREF from sym._copy_to_user_2 @ 0x800f21c
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         

    loc_0x0800f1f8: // orphan
         // CODE XREF from sym._copy_to_user_2 @ 0x800f148
         x10 = 0x800f000
         x10 = [x10]              // 0xd1 // 209
         tbz w10,4,0x800f150      // unlikely

    loc_0x0800f204: // orphan
         
         jmp 0x800f18c

    loc_0x0800f20c: // orphan
         // CODE XREF from sym._copy_to_user_2 @ 0x800f1ac
         x8 = 0x800f000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x800f1b4       // unlikely

    loc_0x0800f218: // orphan
         
         jmp 0x800f1ec

}

/* ===== 0x08010688 ===== */
int sym._copy_to_user_3 (int esi, int edx) {
    loc_0x8010688:
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = (byte) [x8 + 0x36] // 0xcf // 207
        x10 = [x8 + 8] // 0xcf // 207
        x9 = x0 << 8  // arg1
        tbnz w11,5,0x80106b0 // likely
            
    loc_0x80106b0:
        x11 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x80106b4:
        x11 = x11 + x2 // arg3
        csel x10,xzr,x10, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x10
        cset x11,ls   // x26
        if !x11 jmp 0x8010770 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080106cc: // orphan
             jmp 0x801077c

    loc_0x080106d4: // orphan
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x80106e8     // unlikely

    loc_0x080106e0: // orphan
         w11 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080106e8: // orphan
         x11 = [x8 + 0x10]        // 0xcf // 207
         mrs x12,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x13,x12,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x08010710: // orphan
         // CODE XREF from sym._copy_to_user_3 @ 0x801078c
         x10 = [x8 + 8]           // 0xcf // 207
         x9 = x0 & x9,asr 8       // arg1
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x0,xzr, eq
         hint 0x14
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8010728 ()             // 0x8010728(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010790

    loc_0x08010738: // orphan
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x801074c      // unlikely

    loc_0x08010744: // orphan
         w9 = 0x60                // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801074c: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x08010770: // orphan
         // CODE XREF from sym._copy_to_user_3 @ 0x80107a0
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         

    loc_0x0801077c: // orphan
         // CODE XREF from sym._copy_to_user_3 @ 0x80106cc
         x10 = 0x8010000
         x10 = [x10]              // 0xd1 // 209
         tbz w10,4,0x80106d4      // likely

    loc_0x08010788: // orphan
         
         jmp 0x8010710

    loc_0x08010790: // orphan
         // CODE XREF from sym._copy_to_user_3 @ 0x8010730
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x8010738       // likely

    loc_0x0801079c: // orphan
         
         jmp 0x8010770

}

/* ===== 0x080127fc ===== */
int sym._copy_from_user_3 (int esi, int edx) {
    loc_0x80127fc:
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = (byte) [x8 + 0x36] // 0xcf // 207
        x10 = [x8 + 8] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = x1 << 8  // arg2
        tbnz w11,5,0x8012834 // likely
            
    loc_0x8012834:
        x11 = x1 & x9,asr 8 // arg2
         // do {
    loc_0x8012838:
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = x11 + x19
        csel x10,xzr,x10, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x10 // x19
        cset x11,ls   // x26
        if !x11 jmp 0x8012900 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08012854: // orphan
             jmp 0x8012918

    loc_0x0801285c: // orphan
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x8012870     // unlikely

    loc_0x08012868: // orphan
         w11 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08012870: // orphan
         x11 = [x8 + 0x10]        // 0xcf // 207
         mrs x12,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x13,x12,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x08012898: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x8012928
         x10 = [x8 + 8]           // 0xcf // 207
         x9 = x1 & x9,asr 8       // arg2
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x1,xzr, eq
         hint 0x14
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x80128b8 ()             // 0x80128b8(0x20, 0x0, 0x10, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         jmp 0x801292c

    loc_0x080128c8: // orphan
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x80128dc      // unlikely

    loc_0x080128d4: // orphan
         w9 = 0x60                // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080128dc: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x08012900: // orphan
         if x21 jmp 0x8012940     // unlikely

    loc_0x08012904: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x8012954
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         

    loc_0x08012918: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x8012854
         x10 = 0x8012000
         x10 = [x10]              // 0xd1 // 209
         tbz w10,4,0x801285c      // unlikely

    loc_0x08012924: // orphan
         
         jmp 0x8012898

    loc_0x0801292c: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x80128c0
         x8 = 0x8012000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x80128c8       // unlikely

    loc_0x08012938: // orphan
         
         if !x21 jmp 0x8012904    // likely

    loc_0x08012940: // orphan
         x8 = x19 - x21
         x0 = x20 + x8            // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x8012950 ()             // 0x8012950(0x30, 0x0, 0x0, 0x0)
         jmp 0x8012904

}

/* ===== 0x08012958 ===== */
int sym._copy_to_user_4 (int esi, int edx) {
    loc_0x8012958:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = (byte) [x8 + 0x36] // 0xcf // 207
        x10 = [x8 + 8] // 0xcf // 207
        x9 = x0 << 8  // arg1
        tbnz w11,5,0x8012980 // likely
            
    loc_0x8012980:
        x11 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x8012984:
        x11 = x11 + x2 // arg3
        csel x10,xzr,x10, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x10
        cset x11,ls   // x26
        if !x11 jmp 0x8012a40 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0801299c: // orphan
             jmp 0x8012a4c

    loc_0x080129a4: // orphan
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x80129b8     // unlikely

    loc_0x080129b0: // orphan
         w11 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080129b8: // orphan
         x11 = [x8 + 0x10]        // 0xcf // 207
         mrs x12,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x13,x12,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x080129e0: // orphan
         // CODE XREF from sym._copy_to_user_4 @ 0x8012a5c
         x10 = [x8 + 8]           // 0xcf // 207
         x9 = x0 & x9,asr 8       // arg1
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x0,xzr, eq
         hint 0x14
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80129f8 ()             // 0x80129f8(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8012a60

    loc_0x08012a08: // orphan
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8012a1c      // unlikely

    loc_0x08012a14: // orphan
         w9 = 0x60                // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08012a1c: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x08012a40: // orphan
         // CODE XREF from sym._copy_to_user_4 @ 0x8012a70
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         

    loc_0x08012a4c: // orphan
         // CODE XREF from sym._copy_to_user_4 @ 0x801299c
         x10 = 0x8012000
         x10 = [x10]              // 0xd1 // 209
         tbz w10,4,0x80129a4      // unlikely

    loc_0x08012a58: // orphan
         
         jmp 0x80129e0

    loc_0x08012a60: // orphan
         // CODE XREF from sym._copy_to_user_4 @ 0x8012a00
         x8 = 0x8012000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x8012a08       // unlikely

    loc_0x08012a6c: // orphan
         
         jmp 0x8012a40

}

/* ===== 0x08012afc ===== */
int sym.hide_kgsl_dir (int esi, int edx) {
    loc_0x8012afc:
        sp = sp - 0x40
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = var_10h
        if !x0 jmp 0x8012bc8 // likely
            
    loc_0x8012bc8:
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        sp = arg_40h
        0x08012bd8
         // } else {
    loc_0x8012b14:
        x22 = [x0 + 0x30] // 0xc7 // 199 // arg1
        if !x22 jmp 0x8012bc8 // unlikely
        }
        return eax;
    loc_0x8012b1c:
        w8 = (word) [x22 + 0x70] // 0xdd // 221
        w8 = w8 & 0xf
        if (w8 == 1)  // x26
        b.ne 0x8012bc8 // likely
    loc_0x8012b2c:
        x20 = x22 + 0x48
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w19 = w1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x8012b38 ()  // 0x8012b38(0x48, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8012bc8 // unlikely
    loc_0x8012b40:
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x22 = x22 + 0x40
        jmp 0x8012b5c
         // do {
    loc_0x8012b5c:
        // CODE XREF from sym.hide_kgsl_dir @ 0x8012b48
        [x29 = wzr
        ldur x0,[x21,-8] // 0xdc // 220
        if !x0 jmp 0x8012b4c // unlikely
         // } while (?);
        }
        return eax;
    loc_0x8012b68:
        x2 = x29 - 4  // int64_t arg_40h
        w1 = 0xa
        0x8012b70 ()  // 0x8012b70(0x0, 0xa, 0x177ffc, 0x0)
        if w0 jmp 0x8012b4c // unlikely
    loc_0x8012b4c:
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8012b50 ()  // 0x8012b50(0x0, 0x0, 0x0, 0x0)
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8012bc8 // likely
        }
        return eax;
    loc_0x08012b78: // orphan
             ldur w8,[x29,-4]
             if (w8 == w19)           // x26
             b.ne 0x8012b4c           // likely

    loc_0x08012b84: // orphan
         x8 = 0x8012000
         x8 = [x8]                // 0xcf // 207
         x19 = x21 - 0x18
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // 0xf9400c081400007a(0xffffffffffffffe8, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // x24
         0x8012ba0 ()             // 0x8012ba0(0x0, 0x20, 0x0, 0x0)
         jmp 0x8012bdc

    loc_0x08012bb8: // orphan
         // CODE XREF from sym.hide_kgsl_dir @ 0x8012be4
         x8 = 0x8012000
         x8 = [x8]                // 0xcf // 207
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // 0xf9400c081400007a(0x10, 0x0, 0x0, 0x0)

    loc_0x08012bdc: // orphan
         // CODE XREF from sym.hide_kgsl_dir @ 0x8012ba4
         w8 = 0x1                 // x26
         jmp 0x8012be8

    loc_0x08012be4: // orphan
         // CODE XREF from sym.hide_kgsl_dir @ 0x8012bfc
         jmp 0x8012bb8

    loc_0x08012be8: // orphan
         // CODE XREF from sym.hide_kgsl_dir @ 0x8012be0
         prfm pstl1strm,[x22]

    loc_0x08012bec: // orphan
         ldxr x9,[x22]
         x9 = x9 - x8
         stxr w10,x9,[x22]
         if w10 jmp 0x8012bec     // unlikely

    loc_0x08012bfc: // orphan
         jmp 0x8012be4

}

/* ===== 0x08013aa0 ===== */
int sym._copy_to_user_5 (int esi, int edx) {
    loc_0x8013aa0:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = (byte) [x8 + 0x36] // 0xcf // 207
        x10 = [x8 + 8] // 0xcf // 207
        x9 = x0 << 8  // arg1
        tbnz w11,5,0x8013ac8 // likely
            
    loc_0x8013ac8:
        x11 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x8013acc:
        x11 = x11 + x2 // arg3
        csel x10,xzr,x10, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x10
        cset x11,ls   // x26
        if !x11 jmp 0x8013b88 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08013ae4: // orphan
             jmp 0x8013b94

    loc_0x08013aec: // orphan
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x8013b00     // unlikely

    loc_0x08013af8: // orphan
         w11 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08013b00: // orphan
         x11 = [x8 + 0x10]        // 0xcf // 207
         mrs x12,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x13,x12,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x08013b28: // orphan
         // CODE XREF from sym._copy_to_user_5 @ 0x8013ba4
         x10 = [x8 + 8]           // 0xcf // 207
         x9 = x0 & x9,asr 8       // arg1
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x0,xzr, eq
         hint 0x14
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8013b40 ()             // 0x8013b40(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8013ba8

    loc_0x08013b50: // orphan
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8013b64      // unlikely

    loc_0x08013b5c: // orphan
         w9 = 0x60                // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08013b64: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x08013b88: // orphan
         // CODE XREF from sym._copy_to_user_5 @ 0x8013bb8
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         

    loc_0x08013b94: // orphan
         // CODE XREF from sym._copy_to_user_5 @ 0x8013ae4
         x10 = 0x8013000
         x10 = [x10]              // 0xd1 // 209
         tbz w10,4,0x8013aec      // likely

    loc_0x08013ba0: // orphan
         
         jmp 0x8013b28

    loc_0x08013ba8: // orphan
         // CODE XREF from sym._copy_to_user_5 @ 0x8013b48
         x8 = 0x8013000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x8013b50       // likely

    loc_0x08013bb4: // orphan
         
         jmp 0x8013b88

}

/* ===== 0x08013cc0 ===== */
int sym.handle_shadow_page_fault (int esi, int edx) {
    loc_0x8013cc0:
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x570
        mrs x21,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x24 = [x21 + 0x4d8] // 0xdc // 220
        x23 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = var_188h // int64_t arg1
        w2 = 0x158
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8013d00 ()  // 0x8013d00(0x177bb8, 0x0, 0x158, 0x0)
        [sp, 0x178] = (xzr,2)
        [sp, 0x168] = (xzr,2)
        [sp, 0x158] = (xzr,2)
        [sp, 0x148] = (xzr,2)
        [sp, 0x138] = (xzr,2)
        [sp, 0x128] = (xzr,2)
        [sp, 0x118] = (xzr,2)
        [sp, 0x108] = (xzr,2)
        [sp, 0xf8] = (xzr,2)
        [sp, 0xe8] = (xzr,2)
        [sp, 0xd8] = (xzr,2)
        [sp, 0xc8] = (xzr,2)
        [sp, 0xb8] = (xzr,2)
        [sp, 0xa8] = (xzr,2)
        [sp, 0x98] = (xzr,2)
        [sp, 0x88] = (xzr,2)
        if !x24 jmp 0x8013e98 // unlikely
            
    loc_0x8013e98:
        // CODE XREFS from sym.handle_shadow_page_fault @ 0x8013e88, 0x8014688
        w26 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // chop
         // do {
    loc_0x8013e9c:
        // CODE XREFS from sym.handle_shadow_page_fault @ 0x8014644, 0x80146bc
        // CODE XREFS from fcn.080155c0 @ 0x208, 0x80157e4
        w0 = w26      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26
        sp = arg_570h
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        0x08013ebc
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8013d48
    loc_0x8013d60:
        x8 = [x23 + 0x108] // 0xde // 222
        x8 = x8 & 0xf
        if x8 jmp 0x8013e9c // fcn.080155c0-0x1724 // likely
        // chop
    loc_0x8013d6c:
        x8 = [x23 + 0x100] // 0xde // 222
        x9 = x19 << 8
        x9 = x19 & x9,asr 8
        x10 = x8 << 8
        x8 = x8 & x10,asr 8
        x8 = x8 ^ x9
        if (x8 == 0xfff) // x26 // x26
        b.hi 0x8013e98 // likely
    loc_0x8013d8c:
        x0 = 0x8013000
        x0 = x0 + 0   // int64_t arg1
        0x8013d94 ()  // 0x8013d94(0x8013000, 0x0, 0x0, 0x0)
        x8 = 0x8013000
        x8 = x8 + 0
        x27 = [x8]    // 0xcf // 207
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x27 == x8) // x26 // x26
        b.eq 0x8013e8c // unlikely
            
    loc_0x8013e8c:
        x0 = 0x8013000
        x0 = x0 + 0   // int64_t arg1
        0x8013e94 ()  // 0x8013e94(0x8013000, 0x0, 0x0, 0x0)
    loc_0x08013db0: // orphan
             x28 = x23 + 0x108
             x22 = x23 + 0x100
             x9 = x19 & 0xfffffffffffff000
             jmp 0x8013dcc

    loc_0x08013dc0: // orphan
         x27 = [x27]              // 0xe2 // 226
         if (x27 == x8)           // x26 // x26
         b.eq 0x8013e8c           // unlikely

    loc_0x08013dcc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8013dbc
         ldur x10,[x27,-0x20]     // 0xe2 // 226
         if (x10 == x24)          // x26 // x26
         b.ne 0x8013dc0           // likely

    loc_0x08013dd8: // orphan
         w10 = (byte) [x27 + 0x14] // 0xe2 // 226
         if !w10 jmp 0x8013dc0    // likely

    loc_0x08013de0: // orphan
         x26 = x27 - 0x30
         x10 = [x26]              // 0xe1 // 225
         if (x10 == x9)           // x26 // x26
         b.ne 0x8013dc0           // likely

    loc_0x08013df0: // orphan
         w8 = 0x2500
         x25 = x27 + x8
         jmp 0x8014674

    loc_0x08013e08: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014678
         x0 = 0x8013000
         x0 = x0 + 0              // int64_t arg1
         0x8013e10 ()             // 0x8013e10(0x8013000, 0x0, 0x0, 0x0)
         if !x26 jmp 0x8013e9c    // fcn.080155c0-0x1724 // unlikely

    loc_0x08013e18: // orphan
         [var_80h] = x25
         x25 = x24 + 0x68
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8013e24 ()             // 0x8013e24(0x88, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8013e50     // unlikely

    loc_0x08013e2c: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x8013e34 ()             // 0x8013e34(0x20, 0x10, 0x0, 0x0)
         if !x0 jmp 0x8013e48     // unlikely

    loc_0x08013e3c: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x8 == x19)           // x26 // x26
         b.ls 0x8013ec0           // unlikely

    loc_0x08013e48: // orphan
         // XREFS: CODE 0x08013ecc  CODE 0x08013ed8  CODE 0x08013f00  
         // XREFS: CODE 0x08013f0c  CODE 0x08013f28  CODE 0x08013f3c  
         // XREFS: CODE 0x08013f48  CODE 0x08013f64  
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8013e4c ()             // 0x8013e4c(0x0, 0x0, 0x0, 0x0)

    loc_0x08013e50: // orphan
         jmp 0x801467c

    loc_0x08013e70: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801468c
         w8 = 0x2508
         x0 = x27 + x8            // int64_t arg1
         w1 = 0x3
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_570h
         0x8013e84 ()             // 0x8013e84(0x72a9c62900002508, 0x3, 0x0, 0x0)
         jmp 0x8013e98

    loc_0x08013ec0: // orphan
         x8 = [x24 + 0x40]        // 0xdf // 223
         ubfx x9,x19,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x8 + x9,lsl 3]    // 0xd0000000cf // 893353197775
         tbz w10,1,0x8013e48      // unlikely

    loc_0x08013ed0: // orphan
         x10 = x10 & 3
         if (x10 == 1)            // x26
         b.eq 0x8013e48           // unlikely

    loc_0x08013edc: // orphan
         x9 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         x8 = 0x8013000
         x8 = [x8]                // 0xcf // 207
         x10 = x19 >> 0x12
         x9 = x9 & 0xfffffffff000
         x10 = x10 & 0xff8
         x9 = x9 | x10
         x9 = x9 - x8
         x10 = [x9]               // 0xd0 // 208
         tbz w10,1,0x8013e48      // unlikely

    loc_0x08013f04: // orphan
         x10 = x10 & 3
         if (x10 == 1)            // x26
         b.eq 0x8013e48           // unlikely

    loc_0x08013f10: // orphan
         x9 = [x9]                // 0xd0 // 208
         x10 = x19 >> 9
         x10 = x10 & 0xff8
         x8 = x10 - x8
         x9 = x9 & 0xfffffffff000
         x8 = x9 + x8
         b.eq 0x8013e48           // unlikely

    loc_0x08013f2c: // orphan
         x24 = [x8]               // 0xcf // 207
         x8 = 0x1                 // x26
         x8 = 0x400
         if ((x24 & x8) == 0)     // x26 // x26
         b.eq 0x8013e48           // unlikely

    loc_0x08013f40: // orphan
         ubfx x0,x24,0xc, 0x24    // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8013f44 ()             // 0x8013f44(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8013e48     // likely

    loc_0x08013f4c: // orphan
         ldur x8,[x27,-8]         // 0xe2 // 226
         x9 = ~0x400
         x9 = 0xff7f              // '\x7f\xff'
         x8 = x8 | 0x40000000000000
         x8 = x8 ^ x24
         if ((x8 & x9) == 0)      // x26
         b.ne 0x8013e48           // likely

    loc_0x08013f68: // orphan
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [var_48h] = x23          // tmp
         0x8013f70 ()             // "`C" // 0x8013f70(0x0, 0x0, 0x0, 0x0)
         x0 = x27 + 0x10          // int64_t arg1 // x19
         [var_78h] = x0
         0x8013f7c ()             // 0x8013f7c(0x10, 0x0, 0x0, 0x0)
         ldur x8,[x27,-0x28]      // 0xe2 // 226
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         [var_188h] = x8
         w8 = [x27 + 0x18]        // 0xe2 // 226
         if (w8 == 1)             // x26
         [var_190h] = w8
         b.lt 0x8013fc4           // likely

    loc_0x08013f9c: // orphan
         x23 = var_188h
         x1 = x27 + 0x1c          // int64_t arg2
         x0 = var_44h_2           // int64_t arg1
         x2 = x8 << 2             // int64_t arg3
         0x8013fac ()             // 0x8013fac(0x178194, 0x1c, 0xcaa718a400000008, 0x0)
         x8 = [var_190h]          // 0x4 // 4
         x0 = var_50h_4           // int64_t arg1
         x1 = x27 + 0x60          // int64_t arg2
         x2 = x8 << 3             // int64_t arg3
         0x8013fc0 ()             // 0x8013fc0(0x1781d8, 0x60, 0x0, 0x0)

    loc_0x08013fc4: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8013f98
         w8 = [x27 + 0xe0]        // 0xe2 // 226
         if (w8 == 1)             // x26 // x26
         [var_258h] = w8
         b.lt 0x8013ffc           // likely

    loc_0x08013fd4: // orphan
         x23 = var_188h
         x1 = x27 + 0xe4          // int64_t arg2
         x0 = var_d4h             // int64_t arg1
         x2 = x8 << 2             // int64_t arg3
         0x8013fe4 ()             // 0x8013fe4(0x17825c, 0xe4, 0xcaa718a400000008, 0x0)
         x8 = [var_258h]          // 0x4 // 4
         x0 = var_114h            // int64_t arg1
         x1 = x27 + 0x124         // int64_t arg2
         x2 = x8 << 2             // int64_t arg3
         0x8013ff8 ()             // 0x8013ff8(0x17829c, 0x124, 0xfffffffffffffffc, 0x0)

    loc_0x08013ffc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8013fd0
         x0 = [var_78h]           // 0x4 // 4 // int64_t arg1 // x19
         // XREFS(24)
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x8014004 ()             // 0x8014004(0x10, 0x20, 0x0, 0x0)
         x8 = [x22]               // 0xdd // 221
         x10 = [var_188h]         // 0x4 // 4
         x9 = x8 << 8
         [sp, 0x68] = (x10,2)
         x8 = x8 & x9,asr 8
         x8 = x8 & 0xfffffffffffffffc
         if (x8 == x10)           // x26
         [var_60h] = x8
         b.ne 0x8014218           // likely

    loc_0x0801402c: // orphan
         0x801402c ()             // 0x801402c(0x0, 0x0, 0x0, 0x0)
         w8 = [x21 + 0x18]        // 0xdc // 220
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 + 1              // x26
         [x21 + 0x18] = w8
         x8 = 0x8014000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x8014050     // unlikely

    loc_0x0801404c: // orphan
         blr x8                   // x8(0x0, 0x0, 0x0, 0x0)

    loc_0x08014050: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014048
         x8 = [x21 + 0xb30]       // 0xdc // 220
         [var_88h] = x8
         x8 = [x21 + 0xb40]       // 0xdc // 220
         [var_88h_2] = x8
         x8 = [x21 + 0xb50]       // 0xdc // 220
         [var_98h] = x8
         x8 = [x21 + 0xb60]       // 0xdc // 220
         [var_98h_2] = x8
         x8 = [x21 + 0xb70]       // 0xdc // 220
         [var_a8h] = x8
         x8 = [x21 + 0xb80]       // 0xdc // 220
         [var_a8h_2] = x8
         x8 = [x21 + 0xb90]       // 0xdc // 220
         [var_b8h] = x8
         x8 = [x21 + 0xba0]       // 0xdc // 220
         [var_b8h_2] = x8
         x8 = [x21 + 0xbb0]       // 0xdc // 220
         [var_c8h] = x8
         x8 = [x21 + 0xbc0]       // 0xdc // 220
         [var_c8h_2] = x8
         x8 = [x21 + 0xbd0]       // 0xdc // 220
         [var_d8h] = x8
         x8 = [x21 + 0xbe0]       // 0xdc // 220
         [var_d8h_2] = x8
         x8 = [x21 + 0xbf0]       // 0xdc // 220
         [var_e8h] = x8
         x8 = [x21 + 0xc00]       // 0xdc // 220
         [var_e8h_2] = x8
         x8 = [x21 + 0xc10]       // 0xdc // 220
         [var_f8h] = x8
         x8 = [x21 + 0xc20]       // 0xdc // 220
         [var_f8h_2] = x8
         x8 = [x21 + 0xc30]       // 0xdc // 220
         [var_108h] = x8
         x8 = [x21 + 0xc40]       // 0xdc // 220
         [var_108h_2] = x8
         x8 = [x21 + 0xc50]       // 0xdc // 220
         [var_118h] = x8
         x8 = [x21 + 0xc60]       // 0xdc // 220
         [var_118h_2] = x8
         x8 = [x21 + 0xc70]       // 0xdc // 220
         [var_128h] = x8
         x8 = [x21 + 0xc80]       // 0xdc // 220
         [var_128h_2] = x8
         x8 = [x21 + 0xc90]       // 0xdc // 220
         [var_138h] = x8
         x8 = [x21 + 0xca0]       // 0xdc // 220
         [var_138h_2] = x8
         x8 = [x21 + 0xcb0]       // 0xdc // 220
         [var_148h] = x8
         x8 = [x21 + 0xcc0]       // 0xdc // 220
         [var_148h_2] = x8
         x8 = [x21 + 0xcd0]       // 0xdc // 220
         [var_158h] = x8
         x8 = [x21 + 0xce0]       // 0xdc // 220
         [var_158h_2] = x8
         x8 = [x21 + 0xcf0]       // 0xdc // 220
         [var_168h] = x8
         x8 = [x21 + 0xd00]       // 0xdc // 220
         [var_168h_2] = x8
         x8 = [x21 + 0xd10]       // 0xdc // 220
         [var_178h] = x8
         x8 = [x21 + 0xd20]       // 0xdc // 220
         [var_178h_2] = x8
         x8 = [x21 + 0x18]        // 0xdc // 220 // x26
         x8 = x8 - 1
         [x21 + 0x18] = w8
         b.eq 0x801465c           // unlikely

    loc_0x08014160: // orphan
         x8 = [x21 + 0x18]        // 0xdc // 220
         if !x8 jmp 0x801465c     // likely

    loc_0x08014168: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014660
         x0 = [var_78h]           // 0x4 // 4 // int64_t arg1 // x19
         0x801416c ()             // 0x801416c(0x10, 0x0, 0x0, 0x0)
         x8 = [x27 + 0x24e8]      // 0xe2 // 226
         x9 = [x21 + 0x588]       // 0xdc // 220
         w10 = 0x238
         x25 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         madd x23,x8,x10, x26
         x26 = [var_48h]          // 4 // tmp // x24
         [x23 + 0x198] = x9
         x0 = x23 + 0x1b0         // int64_t arg1
         w2 = 0xf8                // '\xf8'
         x8 = [x26 + 0x100]       // 0xe1 // 225
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // x24
         [x23, 0x1a0] = (x8,2)
         0x80141a0 ()             // 0x80141a0(0xffffffffffffff79, 0x20, 0xf8, 0x0)
         x24 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x24 + 0xf8]!       // 0xdf // 223
         x0 = x23 + 0x2d0         // int64_t arg1
         x1 = var_88h             // int64_t arg2
         w2 = 0x100
         [x23 + 0x2a8] = x8
         x8 = [x26 + 0x100]       // 0xe1 // 225
         [x23 + 0x2b0] = x8
         x8 = [x24 + 0x10]        // 0xdf // 223
         [x23 + 0x2b8] = x8
         x8 = [x24 + 0x18]        // 0xdf // 223
         [x23 + x9] = x8
         x8 = [x24 + 0x20]        // 0xdf // 223
         [x23 + 0x2c8] = x8
         0x80141dc ()             // 0x80141dc(0x99, 0x178088, 0x100, 0x0)
         w9 = [x27 + 0x24e8]      // 0xe2 // 226
         w8 = [x27 + 0x24f0]      // 0xe2 // 226
         w10 = w9 + 1
         w11 = w9 + 0x10
         if (w10 == 0)            // x26 // x26
         csinc w9,w11,w9, lt
         w9 = w9 & 0xfffffff0
         w9 = w10 - w9
         if (w8 == 0xf)           // x26 // x26
         [x27 + 0x24e8] = w9
         jmp ifgt 0x8014224       // unlikely

    loc_0x0801420c: // orphan
         w8 = w8 + 1
         [x27 + 0x24f0] = w8
         jmp 0x8014244

    loc_0x08014218: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014028
         [var_0h] = wzr
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80143a8

    loc_0x08014224: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014208
         w8 = [x27 + 0x24ec]      // 0xe2 // 226
         w9 = w8 + 1
         w10 = w8 + 0x10
         if (w9 == 0)             // x26 // x26
         csinc w8,w10,w8, lt
         w8 = w8 & 0xfffffff0
         w8 = w9 - w8
         [x27 + 0x24ec] = w8

    loc_0x08014244: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014214
         x0 = [var_78h]           // 0x4 // 4 // int64_t arg1 // x19
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x801424c ()             // 0x801424c(0x10, 0x0, 0x0, 0x0)
         w8 = [var_190h]          // 0x4 // 4
         if (w8 == 1)             // x26
         b.lt 0x80142cc           // likely

    loc_0x0801425c: // orphan
         x12 = [var_48h]          // 4 // tmp // x24
         x11 = var_188h
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = var_50h_4
         jmp 0x8014288

    loc_0x08014274: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014298
         x14 = x12 + x14,lsl 3

    loc_0x08014278: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x80142b4, 0x80142bc
         [x14] = x13

    loc_0x0801427c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80142a8
         x9 = x9 + 1
         if (x8 == x9)            // x26
         b.eq 0x80142c0           // unlikely

    loc_0x08014288: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014270
         x13 = x11 + x9,lsl 2
         ldur w14,[x13,-0x44]     // 0xd4 // 212
         x13 = [x11 + x9,lsl 3]   // 0xd0000000d2 // 893353197778
         if (w14 == 0x1e)         // x26 // x26
         b.ls 0x8014274           // unlikely

    loc_0x0801429c: // orphan
         if (w14 == 0x1f)         // x26
         b.eq 0x80142b8           // unlikely

    loc_0x080142a4: // orphan
         if (w14 == 0x20)         // x26
         b.ne 0x801427c           // likely

    loc_0x080142ac: // orphan
         w10 = 0x1                // x26
         x14 = x22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8014278

    loc_0x080142b8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80142a0
         x14 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8014278

    loc_0x080142c0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014284
         w8 = w10 & 1
         [var_70h] = w8
         jmp 0x80142d0

    loc_0x080142cc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014258
         [var_70h] = wzr

    loc_0x080142d0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80142c8
         w8 = [var_258h]          // 0x4 // 4
         if (w8 == 1)             // x26 // x26
         b.lt 0x8014390           // likely

    loc_0x080142dc: // orphan
         w8 = [x21 + 0x18]        // 0xdc // 220
         w8 = w8 + 1              // x26
         [x21 + 0x18] = w8
         w8 = [var_258h]          // 0x4 // 4
         if (w8 == 1)             // x26 // x26
         b.lt 0x80145f8           // likely

    loc_0x080142f4: // orphan
         x26 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = var_188h
         jmp 0x8014310

    loc_0x08014304: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8014328, 0x8014350
         x26 = x26 + 1
         if (x26 == w8)
         b.ge 0x8014354           // likely

    loc_0x08014310: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014300
         x9 = x24 + x26,lsl 2
         w23 = [var_d4h]          // 0xd0 // 208
         s0 = [var_114h]          // 0xd0 // 208
         [var_360h] = wzr
         if (w23 == 0x1f)         // x26 // x26
         [var_2e0h] = s0
         b.hi 0x8014304           // likely

    loc_0x0801432c: // orphan
         x0 = var_360h            // int64_t arg1
         x1 = var_2e0h            // int64_t arg2
         w2 = 0x4
         0x8014338 ()             // 0x8014338(0x178360, 0x1782e0, 0x4, 0x0)
         w8 = [var_360h]          // 0x4 // 4
         x9 = x21 + x23,lsl 4
         w25 = w25 + 1            // x26
         [x9 + 0xb30] = w8
         w8 = [var_258h]          // 0x4 // 4
         jmp 0x8014304

    loc_0x08014354: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801430c
         if (w25 == 0)            // x26 // x26
         cset w8,gt
         if (w25 == 1)            // x26
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h] = w8
         b.lt 0x8014600           // likely

    loc_0x0801436c: // orphan
         x8 = 0x8014000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x8014600     // unlikely

    loc_0x08014378: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // "9" // x8(0x0, 0x0, 0x0, 0x0)
         w25 = 0x1                // x26
         w8 = 0x1                 // x26
         [var_0h] = w8
         jmp 0x8014600

    loc_0x08014390: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80142d8
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h] = wzr
         w8 = [var_70h]           // 0x4 // 4
         tbnz w8,0,0x8014620      // unlikely

    loc_0x080143a0: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x801461c, 0x8014670
         x8 = [x22]               // 0xdd // 221
         [var_70h] = x8

    loc_0x080143a8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014220
         x24 = x21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x24 + 8]!          // 0xdf // 223
         (x11, 2) = 3
         w10 = (byte) [x24 + 0x2e] // 0xdf // 223
         if (x11 == x8)           // x26
         x11 = [var_70h]          // 0x4 // 4
         cset w23,ne              // x26
         x8 = x11 << 8
         tbnz w10,5,0x80143d8     // likely

    loc_0x080143cc: // orphan
         x12 = [x21]              // 0xdc // 220
         x10 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w12,0x1a,0x80143dc   // likely

    loc_0x080143d8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80143c8
         x10 = x11 & x8,asr 8

    loc_0x080143dc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80143d4
         x11 = x24 + 0x2c
         [var_38h] = x11
         x10 = x10 + 4
         csel x9,xzr,x9, hi
         csinv x10,x10,xzr, lo
         sbcs xzr,x10,x9
         cset x10,ls              // x26
         if !x10 jmp 0x80144a8    // unlikely

    loc_0x080143fc: // orphan
         x10 = [var_70h]          // 0x4 // 4
         x9 = [x24]               // 0xdf // 223
         x11 = x10 & x8,asr 8
         bics xzr,x11,x9          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x10,xzr, eq
         hint 0x14
         jmp 0x80146c0

    loc_0x0801441c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80146c8
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w9 & 0x80
         if w10 jmp 0x8014430     // likely

    loc_0x08014428: // orphan
         w10 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08014430: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014424
         x10 = [x21 + 0x10]       // 0xdc // 220 // x19
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x08014458: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80146d0
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = [x8]               // 0xcf // 207
         [var_50h_2] = x10
         jmp 0x80146d4

    loc_0x0801446c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80146dc
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 & 0x80
         if w10 jmp 0x8014480     // unlikely

    loc_0x08014478: // orphan
         w10 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08014480: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014474
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 & 0xffffffffffff
         x11 = x10 - 1,lsl 12
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         if !w9 jmp 0x80146e8     // unlikely

    loc_0x080144a8: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x80143f8, 0x80146e4
         x9 = [var_38h]           // 0x4 // 4
         x8 = [x22]               // 0xdd // 221
         [var_0h_2] = xzr
         [var_0h_3] = xzr
         [var_0h_4] = xzr
         [var_0h_5] = xzr
         [var_0h_6] = xzr
         [var_0h_7] = xzr
         [var_0h_8] = xzr
         [var_2f0h] = xzr
         [var_0h_9] = xzr
         [var_2e0h] = xzr
         w10 = (byte) [x9 + 2]    // 0xd0 // 208
         x9 = [x24]               // 0xdf // 223
         [var_68h] = x8
         x8 = x8 << 8
         tbnz w10,5,0x80144f8     // likely

    loc_0x080144ec: // orphan
         x11 = [x21]              // 0xdc // 220
         x10 = [var_68h]          // 0x4 // 4
         tbz w11,0x1a,0x8014500   // likely

    loc_0x080144f8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80144e8
         x10 = [var_68h]          // 0x4 // 4
         x10 = x10 & x8,asr 8

    loc_0x08014500: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80144f4
         x10 = x10 + 4
         csel x9,xzr,x9, hi
         csinv x10,x10,xzr, lo
         sbcs xzr,x10,x9
         cset x10,ls              // x26
         if !x10 jmp 0x80145c4    // unlikely

    loc_0x08014518: // orphan
         x11 = [var_68h]          // 0x4 // 4
         x9 = [x24]               // 0xdf // 223
         x10 = x11 & x8,asr 8
         bics xzr,x10,x9          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x11,xzr, eq
         hint 0x14
         jmp 0x8014bb8

    loc_0x08014538: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014bc0
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w9 & 0x80
         if w10 jmp 0x801454c     // likely

    loc_0x08014544: // orphan
         w10 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801454c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014540
         x10 = [x21 + 0x10]       // 0xdc // 220 // x19
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x08014574: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014bc8
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = [x8]               // 0xcf // 207
         [var_60h] = x10
         jmp 0x8014bcc

    loc_0x08014588: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014bd4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 & 0x80
         if w10 jmp 0x801459c     // unlikely

    loc_0x08014594: // orphan
         w10 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801459c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014590
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 & 0xffffffffffff
         x11 = x10 - 1,lsl 12
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         if !w9 jmp 0x8014be0     // unlikely

    loc_0x080145c4: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8014514, 0x8014bdc
         x0 = 0x8014000
         x1 = 0x8014000
         x0 = x0 + 0              // int64_t arg1
         x1 = x1 + 0              // int64_t arg2
         0x80145d4 ()             // 0x80145d4(0x8014000, 0x8014000, 0x0, 0x0)
         if w0 jmp 0x8014648      // likely

    loc_0x080145dc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014658
         x8 = 0x8014000
         x8 = x8 + 0
         [var_50h_2] = xzr
         [var_44h] = wzr
         w25 = 0x3
         [var_0h_10] = x8
         jmp fcn.080155c0         // fcn.080155c0(0x0, 0x0)

    loc_0x080145f8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80142f0
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h] = wzr

    loc_0x08014600: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8014368, 0x8014374, 0x801438c
         x8 = [x21 + 0x18]        // 0xdc // 220 // x26
         x8 = x8 - 1
         [x21 + 0x18] = w8
         b.eq 0x8014664           // unlikely

    loc_0x08014610: // orphan
         x8 = [x21 + 0x18]        // 0xdc // 220
         if !x8 jmp 0x8014664     // likely

    loc_0x08014618: // orphan
         w8 = [var_70h]           // 0x4 // 4
         tbz w8,0,0x80143a0       // likely

    loc_0x08014620: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x801439c, 0x801466c
         jmp 0x8014690

    loc_0x08014640: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801469c
         w26 = 0x1                // x26
         jmp 0x8013e9c            // fcn.080155c0-0x1724

    loc_0x08014648: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80145d8
         x1 = [var_68h]           // 0x4 // 4 // int64_t arg2
         x0 = 0x8014000
         x0 = x0 + 0              // int64_t arg1
         0x8014654 ()             // 0x8014654(0x8014000, 0x0, 0x0, 0x0)
         jmp 0x80145dc

    loc_0x0801465c: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x801415c, 0x8014164
         0x801465c ()             // 0x801465c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8014168

    loc_0x08014664: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x801460c, 0x8014614
         0x8014664 ()             // 0x8014664(0x0, 0x0, 0x0, 0x0)
         w8 = [var_70h]           // 0x4 // 4
         tbnz w8,0,0x8014620      // unlikely

    loc_0x08014670: // orphan
         jmp 0x80143a0

    loc_0x08014674: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8013df8
         jmp 0x802c0ec

    loc_0x08014678: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x802c100
         jmp 0x8013e08

    loc_0x0801467c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8013e50
         w9 = 0x1                 // x26
         x11 = [var_80h]          // 0x4 // 4
         jmp 0x802c104

    loc_0x08014688: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x802c11c
         if w8 jmp 0x8013e98      // likely

    loc_0x0801468c: // orphan
         jmp 0x8013e70

    loc_0x08014690: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014620
         // CODE XREF from sym.handle_shadow_page_fault @ +0x964
         w9 = 0x1                 // x26
         x11 = [var_80h]          // 0x4 // 4
         jmp 0x802c120

    loc_0x0801469c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x802c138
         if w8 jmp 0x8014640      // likely

    loc_0x080146a0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ +0x97c
         w8 = 0x2508
         x0 = x27 + x8            // int64_t arg1
         w1 = 0x3
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_570h
         0x80146b4 ()             // ":" // 0x80146b4(0x72a9c62900002508, 0x3, 0x0, 0x0)
         w26 = 0x1                // x26
         jmp 0x8013e9c            // fcn.080155c0-0x1724

    loc_0x080146c0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014414
         x9 = 0x8014000
         x9 = [x9]                // 0xd0 // 208
         tbz w9,4,0x801441c       // likely

    loc_0x080146cc: // orphan
         
         jmp 0x8014458

    loc_0x080146d4: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014464
         x8 = 0x8014000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x801446c       // likely

    loc_0x080146e0: // orphan
         
         if w9 jmp 0x80144a8      // likely

    loc_0x080146e8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80144a4
         x8 = [var_50h_2]         // 0x4 // 4
         w8 = ~w8
         if ((w8 & 0xc00000) == 0) // x26 // x26
         b.ne 0x801474c           // likely

    loc_0x080146f8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014808
         x9 = [var_50h_2]         // 0x4 // 4
         w8 = 0x9f80              // '\x80\x9f'
         w8 = w8 | 0xe000
         w8 = w9 & w8
         w9 = 0x8000
         w9 = 0xf00
         if (w8 == w9)            // x26
         b.ne 0x801485c           // likely

    loc_0x08014718: // orphan
         x8 = [var_50h_2]         // 0x4 // 4
         tbnz w8,0x16,0x801485c   // unlikely

    loc_0x08014720: // orphan
         x8 = [var_50h_2]         // 0x4 // 4
         ubfx w8,w8,0x13, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x801485c     // likely

    loc_0x0801472c: // orphan
         x9 = [var_50h_2]         // 0x4 // 4
         tbnz w9,0x15,0x801480c   // unlikely

    loc_0x08014734: // orphan
         x9 = [var_50h_2]         // 0x4 // 4
         tbnz w9,0x14,0x8014814   // unlikely

    loc_0x0801473c: // orphan
         x9 = [var_50h_2]         // 0x4 // 4
         tbz w9,0x13,0x801485c    // likely

    loc_0x08014744: // orphan
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8014818

    loc_0x0801474c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80146f4
         x9 = [var_50h_2]         // 0x4 // 4
         w8 = 0xfc00
         w8 = 0xff3f              // '?\xff'
         w8 = w9 & w8
         w9 = 0x27ff              // '\xff''
         w9 = 0x4e21              // '!N'
         if (w8 == w9)            // x26
         w9 = 0x1                 // x26
         [var_44h] = w9
         jmp ifgt 0x80147a0       // unlikely

    loc_0x08014774: // orphan
         w9 = 0x27ff              // '\xff''
         w9 = 0x2e21              // '!.'
         if (w8 == w9)            // x26
         jmp ifgt 0x80147cc       // unlikely

    loc_0x08014784: // orphan
         w9 = 0x2800
         w9 = 0xe21               // '!\x0e'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x08014794: // orphan
         w9 = 0x4800
         w9 = 0xe21               // '!\x0e'
         jmp 0x8014800

    loc_0x080147a0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014770
         w9 = 0x27ff              // '\xff''
         w9 = 0x6e21              // '!n'
         if (w8 == w9)            // x26
         jmp ifgt 0x80147e8       // unlikely

    loc_0x080147b0: // orphan
         w9 = 0x2800
         w9 = 0x4e21              // '!N'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x080147c0: // orphan
         w9 = 0x4800
         w9 = 0x4e21              // '!N'
         jmp 0x8014800

    loc_0x080147cc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014780
         w9 = 0x2800
         w9 = 0x2e21              // '!.'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x080147dc: // orphan
         w9 = 0x4800
         w9 = 0x2e21              // '!.'
         jmp 0x8014800

    loc_0x080147e8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80147ac
         w9 = 0x2800
         w9 = 0x6e21              // '!n'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x080147f8: // orphan
         w9 = 0x4800
         w9 = 0x6e21              // '!n'

    loc_0x08014800: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x801479c, 0x80147c8, 0x80147e4
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x08014808: // orphan
         jmp 0x80146f8

    loc_0x0801480c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014730
         w9 = 0x2
         jmp 0x8014818

    loc_0x08014814: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014738
         w9 = 0x1                 // x26

    loc_0x08014818: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8014748, 0x8014810
         x10 = [var_50h_2]        // 0x4 // 4
         w10 = w10 & 0xe000
         if (w10 == 8)            // x26
         b.ne 0x801485c           // likely

    loc_0x08014828: // orphan
         x10 = [var_50h_2]        // 0x4 // 4
         w11 = 0x8
         ubfx w10,w10,0x10, 3     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w10,w8,3, 4          // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         w8 = w11 << w9
         if (w10 == w8)           // x26
         b.lo 0x801485c           // unlikely

    loc_0x08014844: // orphan
         w8 = w8 << 1
         if (w10 == w8)           // x26
         b.hs 0x801485c           // unlikely

    loc_0x08014850: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8014b2c, 0x8014b54
         w8 = 0x1                 // x26

    loc_0x08014854: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014bac
         [var_44h] = w8
         jmp 0x8014a5c

    loc_0x0801485c: // orphan
         // XREFS: CODE 0x08014714  CODE 0x0801471c  CODE 0x08014728  
         // XREFS: CODE 0x08014740  CODE 0x08014824  CODE 0x08014840  
         // XREFS: CODE 0x0801484c  
         x8 = [var_50h_2]         // 0x4 // 4
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4e31              // '1N'
         w8 = w8 & 0xfffffc00
         if (w8 == w9)            // x26
         w9 = 0x1                 // x26
         [var_44h] = w9
         jmp ifle 0x80148c8       // likely

    loc_0x0801487c: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4eb1              // '\xb1N'
         if (w8 == w9)            // x26
         jmp ifle 0x8014950       // likely

    loc_0x0801488c: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x6e70              // 'pn'
         if (w8 == w9)            // x26
         jmp ifle 0x8014a10       // likely

    loc_0x0801489c: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x6eb0              // '\xb0n'
         if (w8 == w9)            // x26
         jmp ifgt 0x8014a3c       // unlikely

    loc_0x080148ac: // orphan
         w9 = 0xa800
         w9 = 0x6e70              // 'pn'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x080148bc: // orphan
         w9 = 0xa800
         w9 = 0x6e71              // 'qn'
         jmp 0x8014a54

    loc_0x080148c8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014878
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e30              // '0.'
         if (w8 == w9)            // x26
         jmp ifgt 0x8014914       // unlikely

    loc_0x080148d8: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0xe70               // 'p\x0e'
         if (w8 == w9)            // x26
         jmp ifgt 0x801498c       // unlikely

    loc_0x080148e8: // orphan
         w9 = 0xa800
         w9 = 0xe30               // '0\x0e'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x080148f8: // orphan
         w9 = 0xa800
         w9 = 0xe31               // '1\x0e'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x08014908: // orphan
         w9 = 0xb800
         w9 = 0xe31               // '1\x0e'
         jmp 0x8014a54

    loc_0x08014914: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80148d4
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e71              // 'q.'
         if (w8 == w9)            // x26
         jmp ifgt 0x80149b8       // unlikely

    loc_0x08014924: // orphan
         w9 = 0xa800
         w9 = 0x2e30              // '0.'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x08014934: // orphan
         w9 = 0xa800
         w9 = 0x2e31              // '1.'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x08014944: // orphan
         w9 = 0xa800
         w9 = 0x2e70              // 'p.'
         jmp 0x8014a54

    loc_0x08014950: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014888
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4e71              // 'qN'
         if (w8 == w9)            // x26
         jmp ifgt 0x80149e4       // unlikely

    loc_0x08014960: // orphan
         w9 = 0xb800
         w9 = 0x4e31              // '1N'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x08014970: // orphan
         w9 = 0xa800
         w9 = 0x4e70              // 'pN'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x08014980: // orphan
         w9 = 0xa800
         w9 = 0x4e71              // 'qN'
         jmp 0x8014a54

    loc_0x0801498c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80148e4
         w9 = 0xa800
         w9 = 0xe70               // 'p\x0e'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x0801499c: // orphan
         w9 = 0xa800
         w9 = 0xe71               // 'q\x0e'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x080149ac: // orphan
         w9 = 0xb800
         w9 = 0xe71               // 'q\x0e'
         jmp 0x8014a54

    loc_0x080149b8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014920
         w9 = 0xa800
         w9 = 0x2e71              // 'q.'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x080149c8: // orphan
         w9 = 0xa800
         w9 = 0x4e30              // '0N'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x080149d8: // orphan
         w9 = 0xa800
         w9 = 0x4e31              // '1N'
         jmp 0x8014a54

    loc_0x080149e4: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801495c
         w9 = 0xb800
         w9 = 0x4e71              // 'qN'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x080149f4: // orphan
         w9 = 0xa800
         w9 = 0x4eb0              // '\xb0N'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x08014a04: // orphan
         w9 = 0xa800
         w9 = 0x4eb1              // '\xb1N'
         jmp 0x8014a54

    loc_0x08014a10: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014898
         w9 = 0xb800
         w9 = 0x4eb1              // '\xb1N'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x08014a20: // orphan
         w9 = 0xa800
         w9 = 0x6e30              // '0n'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x08014a30: // orphan
         w9 = 0xa800
         w9 = 0x6e31              // '1n'
         jmp 0x8014a54

    loc_0x08014a3c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80148a8
         w9 = 0xa800
         w9 = 0x6eb0              // '\xb0n'
         if (w8 == w9)            // x26
         b.eq 0x8014a5c           // unlikely

    loc_0x08014a4c: // orphan
         w9 = 0xa800
         w9 = 0x6eb1              // '\xb1n'

    loc_0x08014a54: // orphan
         // XREFS: CODE 0x080148c4  CODE 0x08014910  CODE 0x0801494c  
         // XREFS: CODE 0x08014988  CODE 0x080149b4  CODE 0x080149e0  
         // XREFS: CODE 0x08014a0c  CODE 0x08014a38  
         if (w8 == w9)            // x26
         b.ne 0x8014b0c           // likely

    loc_0x08014a5c: // orphan
         // XREFS(22)
         w8 = [var_44h]           // 4 // x26
         w8 = w8 ^ 1
         w8 = w25 | w8
         tbnz w8,0,0x8014ac4      // unlikely

    loc_0x08014a6c: // orphan
         w8 = [x21 + 0x18]        // 0xdc // 220
         x9 = 0x8014000
         w10 = w23 ^ 1
         w8 = w8 + 1              // x26
         [x21 + 0x18] = w8
         x8 = [x9]                // 0xd0 // 208
         if (x8 == 0)             // x26 // x26
         cset w9,eq
         w9 = w9 | w10
         tbnz w9,0,0x8014a98      // likely

    loc_0x08014a94: // orphan
         blr x8                   // x8(0x0, 0x0, 0x0, 0x0)

    loc_0x08014a98: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014a90
         x8 = 0x8014000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x8014aac     // unlikely

    loc_0x08014aa4: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // x8(0x0, 0x0, 0x0, 0x0)

    loc_0x08014aac: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014aa0
         x8 = [x21 + 0x18]        // 0xdc // 220 // x26
         x8 = x8 - 1
         [x21 + 0x18] = w8
         b.eq 0x8014bb0           // unlikely

    loc_0x08014abc: // orphan
         x8 = [x21 + 0x18]        // 0xdc // 220
         if !x8 jmp 0x8014bb0     // likely

    loc_0x08014ac4: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8014a68, 0x8014b48, 0x8014bb4
         x9 = [x22]               // 0xdd // 221
         x8 = 0x8014000
         x8 = x8 + 0
         [var_0h_10] = x8
         x8 = [var_50h_2]         // 0x4 // 4
         x23 = var_2e0h
         [var_0h_2] = xzr
         [var_0h_3] = xzr
         [var_0h_4] = xzr
         [var_0h_5] = xzr
         [var_0h_6] = xzr
         [var_0h_7] = xzr
         [var_0h_8] = xzr
         [var_2f0h] = xzr
         [var_0h_9] = xzr
         [var_2e0h] = xzr
         [sp, 0x60] = (x8,2)
         jmp 0x8014bf8

    loc_0x08014b0c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014a58
         x9 = [var_50h_2]         // 0x4 // 4
         w8 = 0xfc00
         w8 = 0xbf20              // ' \xbf'
         w8 = w9 & w8
         w9 = 0xf200
         w8 = w8 + w9
         ror w8,w8,0xc
         if (w8 == 8)             // x26
         b.lo 0x8014850           // unlikely

    loc_0x08014b30: // orphan
         x8 = var_360h
         x0 = [var_50h_2]         // 0x4 // 4 // int64_t arg1
         0x8014b38 ()             // 0x8014b38(0x0, 0x0, 0x0, 0x0)
         w8 = [var_364h]          // 4
         if !w8 jmp 0x8014b4c     // likely

    loc_0x08014b44: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014b64
         [var_44h] = wzr
         jmp 0x8014ac4

    loc_0x08014b4c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014b40
         x8 = [var_368h]          // 0x4 // 4
         if ((x8 & 0xc) == 0)     // x26
         b.ne 0x8014850           // likely

    loc_0x08014b58: // orphan
         w8 = [var_374h]          // 4
         w8 = w8 & 0xfffffffe
         if (w8 == 6)             // x26
         b.ne 0x8014b44           // likely

    loc_0x08014b68: // orphan
         w8 = (byte) [var_38fh]   // 0x4 // 4
         w9 = (byte) [var_390h]   // 0x4 // 4
         w10 = (byte) [var_391h]  // 0x4 // 4
         w11 = (byte) [var_392h]  // 0x4 // 4
         w12 = (byte) [var_393h]  // 0x4 // 4
         w8 = w8 & 3
         w9 = w9 & 7
         w8 = w8 << 0xe
         w10 = w10 & 0xf
         bfi w8,w9,0xb, 3         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w8,w10,7, 4          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w12 = w12 & 6
         bfi w8,w11,3, 4          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 | w12
         w9 = 0xda20              // ' \xda'
         if (w8 == w9)            // x26
         cset w8,eq
         jmp 0x8014854

    loc_0x08014bb0: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8014ab8, 0x8014ac0
         0x8014bb0 ()             // 0x8014bb0(0x0, 0x0, 0x0, 0x0)
         jmp 0x8014ac4

    loc_0x08014bb8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014530
         x9 = 0x8014000
         x9 = [x9]                // 0xd0 // 208
         tbz w9,4,0x8014538       // likely

    loc_0x08014bc4: // orphan
         
         jmp 0x8014574

    loc_0x08014bcc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014580
         x8 = 0x8014000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x8014588       // likely

    loc_0x08014bd8: // orphan
         
         if w9 jmp 0x80145c4      // likely

    loc_0x08014be0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80145c0
         x8 = 0x8014000
         x23 = var_2e0h
         x8 = x8 + 0
         [var_50h_2] = xzr
         [var_44h] = wzr
         [var_0h_10] = x8

    loc_0x08014bf8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014b08
         x8 = [var_60h]           // 0x4 // 4
         ubfx w8,w8,0x16, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == 3)             // x26
         [var_28h] = w8
         b.ne 0x8014c6c           // likely

    loc_0x08014c0c: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8014ce8, 0x8014d2c
         x9 = [var_60h]           // 0x4 // 4
         w8 = 0x9f80              // '\x80\x9f'
         w8 = w9 & w8
         w9 = 0xf00
         if (w8 == w9)            // x26
         b.ne 0x8014ffc           // likely

    loc_0x08014c24: // orphan
         x8 = [var_60h]           // 0x4 // 4
         w8 = w8 & 0xe000
         if (w8 == 8)             // x26
         b.ne 0x8014ffc           // likely

    loc_0x08014c34: // orphan
         x8 = [var_60h]           // 0x4 // 4
         tbnz w8,0x16,0x8014ffc   // unlikely

    loc_0x08014c3c: // orphan
         x8 = [var_60h]           // 0x4 // 4
         ubfx w8,w8,0x13, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x8014ffc     // likely

    loc_0x08014c48: // orphan
         x9 = [var_60h]           // 0x4 // 4
         tbnz w9,0x15,0x8014f7c   // unlikely

    loc_0x08014c50: // orphan
         x9 = [var_60h]           // 0x4 // 4
         tbnz w9,0x14,0x8014f8c   // unlikely

    loc_0x08014c58: // orphan
         x9 = [var_60h]           // 0x4 // 4
         tbz w9,0x13,0x8014ffc    // likely

    loc_0x08014c60: // orphan
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_24h] = wzr
         jmp 0x8014f94

    loc_0x08014c6c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014c08
         x9 = [var_60h]           // 0x4 // 4
         w8 = 0xfc00
         w8 = 0xff3f              // '?\xff'
         [var_24h] = wzr
         w8 = w9 & w8
         w9 = 0x27ff              // '\xff''
         w9 = 0x4e21              // '!N'
         if (w8 == w9)            // x26
         jmp ifgt 0x8014cbc       // unlikely

    loc_0x08014c90: // orphan
         w9 = 0x27ff              // '\xff''
         w9 = 0x2e21              // '!.'
         if (w8 == w9)            // x26
         jmp ifgt 0x8014cf4       // unlikely

    loc_0x08014ca0: // orphan
         w9 = 0x2800
         w9 = 0xe21               // '!\x0e'
         if (w8 == w9)            // x26
         b.eq 0x8014d40           // unlikely

    loc_0x08014cb0: // orphan
         w9 = 0x4800
         w9 = 0xe21               // '!\x0e'
         jmp 0x8014ce4

    loc_0x08014cbc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014c8c
         w9 = 0x27ff              // '\xff''
         w9 = 0x6e21              // '!n'
         if (w8 == w9)            // x26
         jmp ifgt 0x8014d10       // unlikely

    loc_0x08014ccc: // orphan
         w9 = 0x2800
         w9 = 0x4e21              // '!N'
         if (w8 == w9)            // x26
         b.eq 0x8014d40           // unlikely

    loc_0x08014cdc: // orphan
         w9 = 0x4800
         w9 = 0x4e21              // '!N'

    loc_0x08014ce4: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014cb8
         if (w8 == w9)            // x26
         b.ne 0x8014c0c           // likely

    loc_0x08014cec: // orphan
         w8 = 0x1                 // x26
         jmp 0x8014d3c

    loc_0x08014cf4: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014c9c
         w9 = 0x2800
         w9 = 0x2e21              // '!.'
         if (w8 == w9)            // x26
         b.eq 0x8014d38           // unlikely

    loc_0x08014d04: // orphan
         w9 = 0x4800
         w9 = 0x2e21              // '!.'
         jmp 0x8014d28

    loc_0x08014d10: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014cc8
         w9 = 0x2800
         w9 = 0x6e21              // '!n'
         if (w8 == w9)            // x26
         b.eq 0x8014d38           // unlikely

    loc_0x08014d20: // orphan
         w9 = 0x4800
         w9 = 0x6e21              // '!n'

    loc_0x08014d28: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014d0c
         if (w8 == w9)            // x26
         b.ne 0x8014c0c           // likely

    loc_0x08014d30: // orphan
         w8 = 0x2
         jmp 0x8014d3c

    loc_0x08014d38: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8014d00, 0x8014d1c
         w8 = 0x3

    loc_0x08014d3c: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8014cf0, 0x8014d34
         [var_24h] = w8

    loc_0x08014d40: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8014cac, 0x8014cd8
         w12 = [var_28h]          // 0x4 // 4
         x26 = [var_60h]          // 0x4 // 4
         w8 = 0x10                // x19
         w11 = 0x40               // '@'
         w23 = w8 << w12          // x19
         ubfx w10,w26,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = w23 >> 1
         x8 = x21 + w10,uxtw 4
         w10 = w24 & 0xf8
         w9 = w26 << 1
         w25 = (unsigned) w11 / w10
         w9 = w25 & w9,asr 31
         x1 = x8 + 0xb30          // int64_t arg2
         x0 = var_360h            // int64_t arg1
         w2 = 0x10                // x19
         [var_368h] = xzr
         [var_360h] = xzr
         [var_348h] = xzr
         [var_340h] = xzr
         w28 = w26 & 0x1f
         [var_38h] = w9           // "L"
         0x8014d94 ()             // 0x8014d94(0x178360, 0xb30, 0x10, 0x0)
         x8 = x21 + w28,uxtw 4
         [var_48h] = x8           // " " tmp
         tbz w26,0x1e,0x8014db8   // likely

    loc_0x08014da4: // orphan
         x8 = [var_48h]           // 4 // tmp
         x0 = var_340h            // int64_t arg1
         w2 = 0x10                // x19
         x1 = x8 + 0xb30          // int64_t arg2
         0x8014db4 ()             // 0x8014db4(0x178340, 0xb30, 0x10, 0x0)

    loc_0x08014db8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014da0
         w12 = [var_28h]          // 0x4 // 4
         x16 = ~0
         w13 = w24 - 1
         x17 = x16 << x23
         if (w12 == 2)            // x26
         w12 = [var_38h]          // 0x4 // 4
         x14 = x16 << x24
         x13 = x16 << x13
         csinv x16,x16,x17, eq
         w17 = [var_24h]          // 4
         x10 = [var_368h]         // 0x4 // 4
         x11 = [var_360h]         // 0x4 // 4
         x18 = 0x8014000
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w28 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w12 = w12 * w24
         x14 = ~x14
         x15 = ~x13
         w17 = w17                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x18 = x18 + 0
         jmp 0x8014e98

    loc_0x08014e98: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014e0c
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = !x0
         if (x0 == 0)             // x26
         x2 = x10 << x2
         x1 = x11 >> x8
         x3 = x10 >> x0
         x0 = x0 - 0x40
         csel x2,xzr,x2, eq
         x1 = x1 | x2
         if (x0 == 0)             // x26 // x26
         csel x0,x3,x1, ge
         x1 = 0x8014ec4
         x2 = [x18 + x17,lsl 2]   // 0xd8000000d9 // 927712936153
         x1 = x1 + x2
         x0 = x16 & x0
         br x1

    loc_0x08014f7c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014c4c
         w10 = 0x1                // x26
         w9 = 0x2
         [var_24h] = w10
         jmp 0x8014f94

    loc_0x08014f8c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014c54
         [var_24h] = wzr
         w9 = 0x1                 // x26

    loc_0x08014f94: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8014c68, 0x8014f88
         x10 = [var_60h]          // 0x4 // 4
         w11 = 0x8
         w25 = w11 << w9
         ubfx w10,w10,0x10, 3     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w10,w8,3, 4          // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         if (w10 == w25)          // x26
         b.lo 0x8014ffc           // unlikely

    loc_0x08014fb0: // orphan
         w26 = w25 << 1
         w8 = w26 - w10
         [var_28h] = x8
         b.ls 0x8014ffc           // likely

    loc_0x08014fc0: // orphan
         x8 = [var_60h]           // 0x4 // 4
         ubfx w8,w8,0xb, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 - 0x10
         if (w8 == 3)             // x26 // x26
         b.hi 0x8014ffc           // likely

    loc_0x08014fd4: // orphan
         x9 = 0x8014000
         x9 = x9 + 0
         x10 = 0x8014fdc
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         x8 = [var_60h]           // 0x4 // 4
         w8 = w8 & 0x20000000
         br x10

    loc_0x08014ffc: // orphan
         // XREFS: CODE 0x08014c20  CODE 0x08014c30  CODE 0x08014c38  
         // XREFS: CODE 0x08014c44  CODE 0x08014c5c  CODE 0x08014fac  
         // XREFS: CODE 0x08014fbc  CODE 0x08014fd0  
         x8 = [var_60h]           // 0x4 // 4
         // XREFS(28)
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4e31              // '1N'
         w8 = w8 & 0xfffffc00
         if (w8 == w9)            // x26
         jmp ifle 0x8015078       // likely

    loc_0x08015014: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4eb1              // '\xb1N'
         if (w8 == w9)            // x26
         jmp ifle 0x8015138       // likely

    loc_0x08015024: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x6e70              // 'pn'
         if (w8 == w9)            // x26
         jmp ifle 0x8015270       // likely

    loc_0x08015034: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x6eb0              // '\xb0n'
         if (w8 == w9)            // x26
         jmp ifgt 0x80152b8       // unlikely

    loc_0x08015044: // orphan
         w9 = 0xa800
         w9 = 0x6e70              // 'pn'
         if (w8 == w9)            // x26
         b.eq 0x8015428           // unlikely

    loc_0x08015054: // orphan
         w9 = 0xa800
         w9 = 0x6e71              // 'qn'
         if (w8 == w9)            // x26
         b.ne 0x8015948           // likely

    loc_0x08015064: // orphan
         [var_48h] = wzr          // tmp
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = 0x8
         jmp 0x80153b8

    loc_0x08015078: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015010
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e30              // '0.'
         if (w8 == w9)            // x26
         jmp ifgt 0x80150e8       // unlikely

    loc_0x08015088: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0xe70               // 'p\x0e'
         if (w8 == w9)            // x26
         jmp ifgt 0x8015194       // unlikely

    loc_0x08015098: // orphan
         w9 = 0xa800
         w9 = 0xe30               // '0\x0e'
         if (w8 == w9)            // x26
         b.eq 0x8015358           // unlikely

    loc_0x080150a8: // orphan
         w9 = 0xa800
         w9 = 0xe31               // '1\x0e'
         if (w8 == w9)            // x26
         b.eq 0x80152f0           // unlikely

    loc_0x080150b8: // orphan
         w9 = 0xb800
         w9 = 0xe31               // '1\x0e'
         if (w8 == w9)            // x26
         b.ne 0x8015948           // likely

    loc_0x080150c8: // orphan
         w8 = 0x1                 // x26
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = wzr
         w23 = 0x8
         [var_48h] = w8           // tmp
         w26 = 0x8
         jmp 0x801548c

    loc_0x080150e8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015084
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e71              // 'q.'
         if (w8 == w9)            // x26
         jmp ifgt 0x80151d8       // unlikely

    loc_0x080150f8: // orphan
         w9 = 0xa800
         w9 = 0x2e30              // '0.'
         if (w8 == w9)            // x26
         b.eq 0x8015374           // unlikely

    loc_0x08015108: // orphan
         w9 = 0xa800
         w9 = 0x2e31              // '1.'
         if (w8 == w9)            // x26
         b.eq 0x801530c           // unlikely

    loc_0x08015118: // orphan
         w9 = 0xa800
         w9 = 0x2e70              // 'p.'
         if (w8 == w9)            // x26
         b.ne 0x8015948           // likely

    loc_0x08015128: // orphan
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = 0x4
         [var_48h] = wzr          // tmp
         jmp 0x8015434

    loc_0x08015138: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015020
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4e71              // 'qN'
         if (w8 == w9)            // x26
         jmp ifgt 0x8015224       // unlikely

    loc_0x08015148: // orphan
         w9 = 0xb800
         w9 = 0x4e31              // '1N'
         if (w8 == w9)            // x26
         b.eq 0x80153f8           // unlikely

    loc_0x08015158: // orphan
         w9 = 0xa800
         w9 = 0x4e70              // 'pN'
         if (w8 == w9)            // x26
         b.eq 0x80153c0           // unlikely

    loc_0x08015168: // orphan
         w9 = 0xa800
         w9 = 0x4e71              // 'qN'
         if (w8 == w9)            // x26
         b.ne 0x8015948           // likely

    loc_0x08015178: // orphan
         [var_48h] = wzr          // tmp
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = wzr
         w26 = 0x8
         w23 = 0x10               // x19
         jmp 0x801548c

    loc_0x08015194: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015094
         w9 = 0xa800
         w9 = 0xe70               // 'p\x0e'
         if (w8 == w9)            // x26
         b.eq 0x8015394           // unlikely

    loc_0x080151a4: // orphan
         w9 = 0xa800
         w9 = 0xe71               // 'q\x0e'
         if (w8 == w9)            // x26
         b.eq 0x8015320           // unlikely

    loc_0x080151b4: // orphan
         w9 = 0xb800
         w9 = 0xe71               // 'q\x0e'
         if (w8 == w9)            // x26
         b.ne 0x8015948           // likely

    loc_0x080151c4: // orphan
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = 0x4
         [var_38h] = wzr
         jmp 0x8015420

    loc_0x080151d8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80150f4
         w9 = 0xa800
         w9 = 0x2e71              // 'q.'
         if (w8 == w9)            // x26
         b.eq 0x80153a8           // unlikely

    loc_0x080151e8: // orphan
         w9 = 0xa800
         w9 = 0x4e30              // '0N'
         if (w8 == w9)            // x26
         b.eq 0x801533c           // unlikely

    loc_0x080151f8: // orphan
         w9 = 0xa800
         w9 = 0x4e31              // '1N'
         if (w8 == w9)            // x26
         b.ne 0x8015948           // likely

    loc_0x08015208: // orphan
         [var_48h] = wzr          // tmp
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = wzr
         w26 = 0x10               // x19
         w23 = 0x8
         jmp 0x801548c

    loc_0x08015224: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015144
         w9 = 0xb800
         w9 = 0x4e71              // 'qN'
         if (w8 == w9)            // x26
         b.eq 0x8015410           // unlikely

    loc_0x08015234: // orphan
         w9 = 0xa800
         w9 = 0x4eb0              // '\xb0N'
         if (w8 == w9)            // x26
         b.eq 0x80153dc           // unlikely

    loc_0x08015244: // orphan
         w9 = 0xa800
         w9 = 0x4eb1              // '\xb1N'
         if (w8 == w9)            // x26
         b.ne 0x8015948           // likely

    loc_0x08015254: // orphan
         [var_48h] = wzr          // tmp
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = wzr
         w26 = 0x4
         w23 = 0x20               // x24
         jmp 0x801548c

    loc_0x08015270: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015030
         w9 = 0xb800
         w9 = 0x4eb1              // '\xb1N'
         if (w8 == w9)            // x26
         b.eq 0x8015470           // unlikely

    loc_0x08015280: // orphan
         w9 = 0xa800
         w9 = 0x6e30              // '0n'
         if (w8 == w9)            // x26
         b.eq 0x8015450           // unlikely

    loc_0x08015290: // orphan
         w9 = 0xa800
         w9 = 0x6e31              // '1n'
         if (w8 == w9)            // x26
         b.ne 0x8015948           // likely

    loc_0x080152a0: // orphan
         [var_48h] = wzr          // tmp
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = 0x10               // x19
         w23 = 0x8
         jmp 0x8015464

    loc_0x080152b8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015040
         w9 = 0xa800
         w9 = 0x6eb0              // '\xb0n'
         if (w8 == w9)            // x26
         b.eq 0x801543c           // unlikely

    loc_0x080152c8: // orphan
         w9 = 0xa800
         w9 = 0x6eb1              // '\xb1n'
         if (w8 == w9)            // x26
         b.ne 0x8015948           // likely

    loc_0x080152d8: // orphan
         [var_48h] = wzr          // tmp
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = 0x4
         w23 = 0x20               // x24
         jmp 0x8015464

    loc_0x080152f0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80150b4
         [var_48h] = wzr          // tmp
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = wzr
         w23 = 0x8
         w26 = 0x8
         jmp 0x801548c

    loc_0x0801530c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015114
         [var_48h] = wzr          // tmp
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w23 = 0x8
         jmp 0x8015384

    loc_0x08015320: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80151b0
         [var_48h] = wzr          // tmp
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = wzr
         w26 = 0x4
         w23 = 0x10               // x19
         jmp 0x801548c

    loc_0x0801533c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80151f4
         [var_48h] = wzr          // tmp
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = wzr
         w26 = 0x10               // x19
         w23 = 0x8
         w24 = 0x1                // x26
         jmp 0x801548c

    loc_0x08015358: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80150a4
         [var_48h] = wzr          // tmp
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = wzr
         w23 = 0x8
         w24 = 0x1                // x26
         w26 = 0x8
         jmp 0x801548c

    loc_0x08015374: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015104
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w23 = 0x8
         w25 = 0x1                // x26
         [var_48h] = wzr          // tmp

    loc_0x08015384: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801531c
         w8 = 0x1                 // x26
         [var_38h] = w8
         w26 = 0x8
         jmp 0x801548c

    loc_0x08015394: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80151a0
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = 0x4
         [var_48h] = wzr          // tmp
         [var_38h] = wzr
         jmp 0x80153d0

    loc_0x080153a8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80151e4
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = 0x4
         [var_48h] = wzr          // tmp

    loc_0x080153b8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015074
         w23 = 0x10               // x19
         jmp 0x8015464

    loc_0x080153c0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015164
         [var_48h] = wzr          // tmp
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = wzr
         w26 = 0x8

    loc_0x080153d0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80153a4
         w23 = 0x10               // x19
         w24 = 0x1                // x26
         jmp 0x801548c

    loc_0x080153dc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015240
         [var_48h] = wzr          // tmp
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = wzr
         w26 = 0x4
         w23 = 0x20               // x24
         w24 = 0x1                // x26
         jmp 0x801548c

    loc_0x080153f8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015154
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = wzr
         w26 = 0x10               // x19
         w23 = 0x8
         jmp 0x8015484

    loc_0x08015410: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015230
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = wzr
         w26 = 0x8

    loc_0x08015420: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80151d4
         w23 = 0x10               // x19
         jmp 0x8015484

    loc_0x08015428: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015050
         [var_48h] = wzr          // tmp
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = 0x8

    loc_0x08015434: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015134
         w23 = 0x10               // x19
         jmp 0x8015460

    loc_0x0801543c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80152c4
         [var_48h] = wzr          // tmp
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = 0x4
         w23 = 0x20               // x24
         jmp 0x8015460

    loc_0x08015450: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801528c
         [var_48h] = wzr          // tmp
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = 0x10               // x19
         w23 = 0x8

    loc_0x08015460: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8015438, 0x801544c
         w25 = 0x1                // x26

    loc_0x08015464: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x80152b4, 0x80152ec, 0x80153bc
         w8 = 0x1                 // x26
         [var_38h] = w8
         jmp 0x801548c

    loc_0x08015470: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801527c
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = wzr
         w26 = 0x4
         w23 = 0x20               // x24

    loc_0x08015484: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x801540c, 0x8015424
         w8 = 0x1                 // x26
         [var_48h] = w8           // tmp

    loc_0x0801548c: // orphan
         // XREFS: CODE 0x080150e4  CODE 0x08015190  CODE 0x08015220  
         // XREFS: CODE 0x0801526c  CODE 0x08015308  CODE 0x08015338  
         // XREFS: CODE 0x08015354  CODE 0x08015370  CODE 0x08015390  
         // XREFS: CODE 0x080153d8  CODE 0x080153f4  CODE 0x0801546c  
         x8 = [var_60h]           // 0x4 // 4
         x9 = ~0
         x9 = x9 << x23
         x0 = var_360h            // int64_t arg1
         ubfx w8,w8,5, 5          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x21 + w8,uxtw 4
         x1 = x8 + 0xb30          // int64_t arg2
         w2 = 0x10                // x19
         [var_368h] = xzr
         [var_360h] = xzr
         [var_348h] = xzr
         [var_340h] = xzr
         x28 = ~x9
         0x80154c0 ()             // 0x80154c0(0x178360, 0xb30, 0x10, 0x0)
         x8 = [var_368h]          // 0x4 // 4
         x9 = [var_360h]          // 0x4 // 4
         w10 = [var_48h]          // 4 // tmp // x26
         if !w10 jmp 0x8015524    // unlikely

    loc_0x080154d4: // orphan
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080154dc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801551c
         w12 = w11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = !x12
         if (x12 == 0)            // x26 // x26
         x14 = x12 - 0x40
         x13 = x8 << x13
         csel x13,xzr,x13, eq
         if (x14 == 0)            // x26 // x26
         x14 = x9 >> x11
         x12 = x8 >> x12
         x13 = x14 | x13          // x9
         csel x12,x12,x13, ge     // x9
         x12 = x12 & x28
         x10 = x12 + x10
         w26 = w26 - 1
         x10 = x10 & x28
         w11 = w11 + w23          // x24
         b.ne 0x80154dc           // likely

    loc_0x08015520: // orphan
         jmp 0x8015588

    loc_0x08015524: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80154d0
         w11 = [var_38h]          // 0x4 // 4
         x10 = x9 & x28
         if !w11 jmp 0x80157e8    // likely

    loc_0x08015530: // orphan
         w11 = w26 - 1
         w12 = w23                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24

    loc_0x08015538: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015584
         w13 = w12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x14 = !x13
         if (x13 == 0)            // x26 // x26
         x15 = x13 - 0x40
         x14 = x8 << x14
         csel x14,xzr,x14, eq
         if (x15 == 0)            // x26 // x26
         x15 = x9 >> x12
         x13 = x8 >> x13
         x14 = x15 | x14          // x9
         csel x13,x13,x14, ge     // x9
         x13 = x13 & x28
         if (x13 == x10)          // x26 // x26
         csel x14,x13,x10, hi
         csel x10,x13,x10, lo
         if (w25 == 0)            // x26 // x26
         csel x10,x14,x10, ne
         w11 = w11 - 1
         w12 = w12 + w23          // x24
         b.ne 0x8015538           // unlikely

    loc_0x08015588: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8015520, 0x80158ec
         x8 = [var_60h]           // 0x4 // 4
         x9 = x10 & x28
         [var_348h] = xzr
         [var_340h] = x9
         w8 = w8 & 0x1f
         x8 = x21 + w8,uxtw 4
         x0 = x8 + 0xb30
         x1 = var_340h

    loc_0x080155a8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015be8
         w2 = 0x10                // x19
         0x80155ac ()             // 0x80155ac(0x0, 0x0, 0x10, 0x0)

    loc_0x080155b0: // orphan
         // CODE XREFS from fcn.08014f5c @ 0x8014f64, 0x8014f78
         // CODE XREF from fcn.08018590 @ +0x47a0
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [var_68h]           // 0x4 // 4
         // CODE XREF from fcn.08018590 @ +0x3798
         // CODE XREF from fcn.0801d1b8 @ +0x53c
         x8 = x8 + 4
         [x22] = x8

    loc_0x080157e8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801552c
         if (w23 == 0x20)         // x26 // x26
         b.eq 0x80158bc           // likely

    loc_0x080157f0: // orphan
         if (w23 == 0x10)         // x26
         b.eq 0x80158b4           // unlikely

    loc_0x080157f8: // orphan
         if (w23 == 8)            // x26
         b.ne 0x80158c0           // likely

    loc_0x08015800: // orphan
         x10 = (char) w10
         jmp 0x80158c0

    loc_0x080158b4: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80157f4
         x10 = (short) w10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80158c0

    loc_0x080158bc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80157ec
         x10 = w10                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080158c0: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x80157fc, 0x8015804, 0x80158b8
         w11 = w26 - 1
         w12 = w23                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         jmp 0x80158f0

    loc_0x080158cc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801592c
         x13 = (short) w13        // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080158d0: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8015934, 0x801593c, 0x8015944
         if (x13 == x10)          // x26 // x26
         csel x14,x13,x10, gt
         csel x10,x13,x10, lt
         if (w24 == 0)            // x26
         csel x10,x14,x10, ne
         w11 = w11 - 1
         w12 = w12 + w23          // x24
         b.eq 0x8015588           // unlikely

    loc_0x080158f0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80158c8
         w13 = w12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x15 = !x13
         if (x13 == 0)            // x26 // x26
         x15 = x8 << x15
         x14 = x9 >> x12
         x16 = x8 >> x13
         x13 = x13 - 0x40
         csel x15,xzr,x15, eq
         if (x13 == 0)            // x26 // x26
         x13 = x14 | x15          // x9
         csel x13,x16,x13, ge     // x9
         if (w23 == 0x20)         // x26 // x26
         x13 = x13 & x28
         b.eq 0x8015940           // likely

    loc_0x08015928: // orphan
         if (w23 == 0x10)         // x26
         b.eq 0x80158cc           // unlikely

    loc_0x08015930: // orphan
         if (w23 == 8)            // x26
         b.ne 0x80158d0           // likely

    loc_0x08015938: // orphan
         x13 = (char) w13
         jmp 0x80158d0

    loc_0x08015940: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015924
         x13 = w13                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80158d0

    loc_0x08015948: // orphan
         // XREFS: CODE 0x08015060  CODE 0x080150c4  CODE 0x08015124  
         // XREFS: CODE 0x08015174  CODE 0x080151c0  CODE 0x08015204  
         // XREFS: CODE 0x08015250  CODE 0x0801529c  CODE 0x080152d4  
         x9 = [var_60h]           // 0x4 // 4
         w8 = 0xfc00
         w8 = 0xbf20              // ' \xbf'
         w8 = w9 & w8
         w9 = 0xf200
         w8 = w8 + w9
         ror w26,w8,0xc
         if (w26 == 7)            // x26
         b.hi 0x8015b88           // likely

    loc_0x0801596c: // orphan
         x9 = [var_60h]           // 0x4 // 4
         x25 = var_360h
         [var_398h] = xzr
         [var_390h] = xzr
         ubfx w8,w9,0xd, 2        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w28 = w8 + 1             // x26
         w23 = w9 >> 5
         x24 = x28                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26
         [var_388h] = xzr
         [var_380h] = xzr
         [var_378h] = xzr
         [var_370h] = xzr
         [var_368h] = xzr
         [var_360h] = xzr
         [var_348h] = xzr
         [var_340h] = xzr
         [var_338h] = xzr
         [var_330h] = xzr

    loc_0x080159b4: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x80159d8
         w8 = w23 & 0x1f
         x8 = x21 + w8,uxtw 4
         x1 = x8 + 0xb30          // int64_t arg2
         w2 = 0x10                // x19
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80159c8 ()             // 0x80159c8(0x0, 0xb30, 0x10, 0x0)
         x24 = x24 - 1
         x25 = var_370h           // x19
         w23 = w23 + 1
         b.ne 0x80159b4           // likely

    loc_0x080159dc: // orphan
         x10 = [var_60h]          // 0x4 // 4
         w8 = 0x10                // x19
         w9 = 0x8
         x0 = var_340h            // int64_t arg1
         if ((w10 & 0x40000000) == 0) // x26
         w24 = w10 & 0x1f
         ubfx w10,w10,0x10, 5     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w23,w9,w8, eq       // x19
         x8 = x21 + w10,uxtw 4
         x1 = x8 + 0xb30          // int64_t arg2
         w2 = 0x10                // x19
         0x8015a08 ()             // 0x8015a08(0x178340, 0xb30, 0x10, 0x0)
         x24 = x21 + w24,uxtw 4
         tbz w26,0,0x8015a30      // unlikely

    loc_0x08015a14: // orphan
         x1 = x24 + 0xb30         // int64_t arg2
         x0 = var_330h            // int64_t arg1
         w2 = 0x10                // x19
         0x8015a20 ()             // 0x8015a20(0x178330, 0xb50, 0x10, 0x0)
         x8 = [var_60h]           // 0x4 // 4
         tbnz w8,0x1e,0x8015a30   // unlikely

    loc_0x08015a2c: // orphan
         [var_338h] = xzr

    loc_0x08015a30: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8015a10, 0x8015a28
         x9 = [var_348h]          // 4
         x10 = [var_340h]         // 4
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w28 << 4
         x12 = var_360h
         w13 = 0xff               // '\xff'
         jmp 0x8015a58

    loc_0x08015a4c: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x8015a8c, 0x8015b2c
         w23 = w23 - 1
         w8 = w8 + 8
         b.eq 0x8015be0           // unlikely

    loc_0x08015a58: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015a48
         w14 = w8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x16 = !x14
         if (x14 == 0)            // x26
         x16 = x9 << x16
         x15 = x10 >> x8
         x18 = x14 - 0x40
         csel x16,xzr,x16, eq
         x17 = x9 >> x14
         x15 = x15 | x16
         if (x18 == 0)            // x26 // x26
         csel x15,x17,x15, ge
         x15 = x15 & 0xff
         if (w11 == w15)          // x26 // x26
         b.ls 0x8015a4c           // likely

    loc_0x08015a90: // orphan
         x16 = x15 & 0xf0
         x16 = x12 + x16
         (x18, 2) = 3
         ubfiz w15,w15,3, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = !x15
         if (x15 == 0)            // x26 // x26
         x1 = x16 << x1
         x18 = x18 >> x15
         x16 = x16 >> x15
         x15 = x15 - 0x40
         csel x1,xzr,x1, eq
         if (x15 == 0)            // x26 // x26
         x18 = x18 | x1
         csel x16,x16,x18, ge
         x17 = !x14
         x16 = x16 & 0xff
         x15 = x14 - 0x40
         x18 = x13 >> x17
         if (x14 == 0)            // x26 // x26
         x17 = x16 >> x17
         x0 = x13 << x14
         csel x18,xzr,x18, eq
         csel x17,xzr,x17, eq
         if (x15 == 0)            // x26 // x26
         csel x15,x0,x18, ge
         x18 = [var_330h]         // 0x4 // 4
         x0 = [var_338h]          // 0x4 // 4
         x1 = x13 << x8
         x14 = x16 << x14
         x16 = x16 << x8          // x19
         csel x1,xzr,x1, ge
         csel x14,x14,x17, ge
         csel x16,xzr,x16, ge     // x19
         bic x15,x0,x15           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bic x17,x18,x1           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x14 = x14 | x15
         x15 = x16 | x17          // x19
         [var_330h] = x15
         [var_338h] = x14
         jmp 0x8015a4c

    loc_0x08015b88: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015968
         x8 = var_360h
         x0 = [var_60h]           // 0x4 // 4 // int64_t arg1
         0x8015b90 ()             // 0x8015b90(0x0, 0x0, 0x0, 0x0)
         x8 = [var_360h]          // 0x4 // 4
         x9 = [var_368h]          // 0x4 // 4
         x12 = [var_380h]         // 0x4 // 4
         x13 = [var_388h]         // 0x4 // 4
         x10 = [var_370h]         // 0x4 // 4
         x11 = [var_378h]         // 0x4 // 4
         [x23] = (x8,2)
         x8 = [var_3a0h]          // 0x4 // 4
         x9 = [var_3a8h]          // 0x4 // 4
         [x23, 0x20] = (x12,2)
         x12 = [var_390h]         // 0x4 // 4
         x13 = [var_398h]         // 0x4 // 4
         [x23, 0x10] = (x10,2)
         [x23, 0x40] = (x8,2)
         [x23, 0x30] = (x12,2)
         w8 = [var_2e4h]          // 4
         if !w8 jmp 0x8015fb8     // likely

    loc_0x08015bd8: // orphan
         // CODE XREFS from fcn.08018590 @ +0x3810, +0x383c
         // CODE XREF from fcn.0801cd40 @ 0x801cd44
         w25 = 0x1                // x26
         jmp fcn.08015f7c

    loc_0x08015be0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015a54
         x0 = x24 + 0xb30
         x1 = var_330h
         jmp 0x80155a8

    loc_0x08015fb8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8015bd4
         w8 = [var_2f0h]          // 0x4
         w8 = w8 - 1
         if (w8 == 4)             // x26 // x26
         b.hi 0x8015bd8           // likely

    loc_0x08015fc8: // orphan
         x9 = 0x8015000
         x9 = x9 + 0
         x10 = 0x8015fd0
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

    loc_0x0802c0ec: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014674
         prfm pstl1strm,[x25]

    loc_0x0802c0f0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x802c0fc
         ldxr w8,[x25]
         w8 = w8 + 1
         stxr w9,w8,[x25]
         if w9 jmp 0x802c0f0      // unlikely

    loc_0x0802c100: // orphan
         jmp 0x8014678

    loc_0x0802c104: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014684
         prfm pstl1strm,[x11]

    loc_0x0802c108: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x802c114
         ldxr w8,[x11]
         w8 = w8 - w9
         stlxr w10,w8,[x11]
         if w10 jmp 0x802c108     // unlikely

    loc_0x0802c118: // orphan
         dmb ish
         jmp 0x8014688

    loc_0x0802c120: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x8014698
         prfm pstl1strm,[x11]

    loc_0x0802c124: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x802c130
         ldxr w8,[x11]
         w8 = w8 - w9
         stlxr w10,w8,[x11]
         if w10 jmp 0x802c124     // unlikely

    loc_0x0802c134: // orphan
         dmb ish
         jmp 0x801469c

}

/* ===== 0x080131c0 ===== */
int sym.shadow_entry_fill_reg_config (int esi, int edx) {
    loc_0x80131c0:
        [sp, -0x30]! = (x29,2) // " "
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = [x1 + 0x10] // 0xc8 // 200 // arg2 // x19
        w21 = 0x10    // x19
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        bic w8,w9,w9, asr 31 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w8 == 0x10) // x26
        csel w8,w8,w21, lt
        if (w9 == 1)  // x26
        [x0 + 0x48] = w8 // arg1
        b.lt 0x801321c // unlikely
            
    loc_0x801321c:
        w9 = [x19 + 0xd8] // 0xda // 218
        bic w8,w9,w9, asr 31 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w8 == 0x10) // x26
        csel w8,w8,w21, lt
        if (w9 == 1)  // x26 // x26
        [x20 + 0x110] = w8
        b.lt 0x801325c // likely
            
    loc_0x801325c:
        (x20, 2) = 3
        x21 = [var_10h] // 0x4
        (x29, 2) = 3
        0x08013268
         // } else {
    loc_0x8013238:
        x0 = x20 + 0x114 // int64_t arg1
        x1 = x19 + 0xdc // int64_t arg2
        w2 = w8 << 2
        0x8013244 ()  // 0x8013244(0x134, 0xec, 0x8, 0x0)
        x8 = [x20 + 0x110] // 0xdb // 219
        x0 = x20 + 0x154 // int64_t arg1
        x1 = x19 + 0x11c // int64_t arg2
        x2 = x8 << 2
        0x8013258 ()  // 0x8013258(0x174, 0x12c, 0x0, 0x0)
         // } else {
        }
        return eax;
}

/* ===== 0x08013060 ===== */
int sym.shadow_write_user_pte (int esi, int edx) {
    loc_0x8013060:
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x80130a0 // likely
            
    loc_0x80130a0:
        w0 = ~0x15
         // do {
    loc_0x80130a4:
        // CODE XREFS from sym.shadow_write_user_pte @ 0x801309c, 0x80131b0
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4
        (x29, 2) = 3
        0x080130b4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8013078
    loc_0x801308c:
        x8 = [x0]     // 0xc7 // 199
        if (x8 == x19) // x26
        b.ls 0x80130b8 // unlikely
            
    loc_0x80130b8:
        x8 = [x21 + 0x40] // 0xdc // 220
        ubfx x9,x19,0x1e, 9 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = ~0xd
        x10 = [x8 + x9,lsl 3] // 0xd0000000cf // 893353197775
        tbz w10,1,0x80130a4 // likely
    loc_0x80130cc:
        x10 = x10 & 3
        if (x10 == 1) // x26
        b.eq 0x80130a4 // unlikely
    loc_0x80130d8:
        x8 = [x8 + x9,lsl 3] // 0xd0000000cf // 893353197775
        x9 = 0x8013000
        x9 = [x9]     // 0xd0 // 208
        x10 = x19 >> 0x12
        x8 = x8 & 0xfffffffff000
        x10 = x10 & 0xff8
        x8 = x8 | x10
        x10 = x8 - x9
        x8 = [x10]    // 0xd1 // 209
        w0 = ~0xd
        tbz w8,1,0x80130a4 // unlikely
    loc_0x8013104:
        x11 = x8 & 3
        if (x11 == 1) // x26
        b.eq 0x80130a4 // unlikely
    loc_0x8013110:
        x10 = [x10]   // 0xd1 // 209
        x11 = x19 >> 9
        x11 = x11 & 0xff8
        x10 = x10 & 0xfffffffff000
        x10 = x10 | x11
        x22 = x10 - x9
        b.eq 0x8013098 // unlikely
    loc_0x801312c:
        x9 = 0x8013000
        x9 = [x9]     // 0xd0 // 208
        ubfx x8,x8,0xc, 0x24 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x9 + x8,lsl 6
        x21 = x8 + 0x28
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8013144 ()  // 0x8013144(0x94000318dd011330, 0x0, 0x0, 0x0)
        x23 = [x22]   // 0xdd // 221
        x8 = 0x1      // x26
        x8 = 0x400
        if ((x23 & x8) == 0) // x26
        b.eq 0x80131b4 // unlikely
            
    loc_0x80131b4:
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x80131b8 ()  // 0x80131b8(0x0, 0x0, 0x0, 0x0)
        jmp 0x8013098
    loc_0x08013098: // orphan
             // CODE XREF from sym.shadow_write_user_pte @ 0x80131bc
             w0 = ~0xd
             jmp 0x80130a4

    loc_0x0801315c: // orphan
         ubfx x0,x23,0xc, 0x24    // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8013160 ()             // 0x8013160(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x80131b4     // likely

    loc_0x08013168: // orphan
         x8 = x20 >> 0x36
         x9 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         w10 = 0x41               // 'A'
         bfi x9,x8,0x36, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x8 = x23 & x10
         if (x8 == 1)             // x26
         [x22] = x9
         b.ne 0x8013190           // likely

    loc_0x08013188: // orphan
         dsb ishst
         

    loc_0x08013190: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8013194 ()             // 0x8013194(0x0, 0x0, 0x0, 0x0)
         ubfx x8,x19,0xc, 0x2c    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         dsb ishst
         tlbi vaale1is,x8
         dsb ish
         
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80130a4

}

/* ===== 0x0804aa0c ===== */
int sym._copy_from_user_4 (int esi, int edx) {
    loc_0x804aa0c:
        [sp, -0x30]! = (x29,2) // " "
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = (byte) [x8 + 0x36] // 0xcf // 207
        x10 = [x8 + 8] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = x1 << 8  // arg2
        tbnz w11,5,0x804aa44 // likely
            
    loc_0x804aa44:
        x11 = x1 & x9,asr 8 // arg2
         // do {
    loc_0x804aa48:
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = x11 + x19
        csel x10,xzr,x10, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x10 // x19
        cset x11,ls   // x26
        if !x11 jmp 0x804ab10 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0804aa64: // orphan
             jmp 0x804ab28

    loc_0x0804aa6c: // orphan
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x804aa80     // unlikely

    loc_0x0804aa78: // orphan
         w11 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0804aa80: // orphan
         x11 = [x8 + 0x10]        // 0xcf // 207
         mrs x12,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x13,x12,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0804aaa8: // orphan
         // CODE XREF from sym._copy_from_user_4 @ 0x804ab38
         x10 = [x8 + 8]           // 0xcf // 207
         x9 = x1 & x9,asr 8       // arg2
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x1,xzr, eq
         hint 0x14
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // (cstr 0x00000000) " " x24
         x1 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x804aac8 ()             // 0x804aac8(0x20, 0x0, 0x10, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // (cstr 0x00000000) " " x24
         jmp 0x804ab3c

    loc_0x0804aad8: // orphan
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x804aaec      // unlikely

    loc_0x0804aae4: // orphan
         w9 = 0x60                // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0804aaec: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0804ab10: // orphan
         if x21 jmp 0x804ab50     // unlikely

    loc_0x0804ab14: // orphan
         // CODE XREF from sym._copy_from_user_4 @ 0x804ab64
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_10h]          // 0x4
         (x29, 2) = 3
         

    loc_0x0804ab28: // orphan
         // CODE XREF from sym._copy_from_user_4 @ 0x804aa64
         x10 = 0x804a000
         x10 = [x10]              // 0xd1 // 209
         tbz w10,4,0x804aa6c      // likely

    loc_0x0804ab34: // orphan
         
         jmp 0x804aaa8

    loc_0x0804ab3c: // orphan
         // CODE XREF from sym._copy_from_user_4 @ 0x804aad0
         x8 = 0x804a000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x804aad8       // likely

    loc_0x0804ab48: // orphan
         
         if !x21 jmp 0x804ab14    // likely

    loc_0x0804ab50: // orphan
         x8 = x19 - x21
         x0 = x20 + x8            // int64_t arg1 // (cstr 0x00000000) " "
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x804ab60 ()             // 0x804ab60(0x30, 0x0, 0x0, 0x0)
         jmp 0x804ab14

}

/* ===== 0x0804ab68 ===== */
int sym._copy_to_user_6 (int esi, int edx) {
    loc_0x804ab68:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = (byte) [x8 + 0x36] // 0xcf // 207
        x10 = [x8 + 8] // 0xcf // 207
        x9 = x0 << 8  // arg1
        tbnz w11,5,0x804ab90 // likely
            
    loc_0x804ab90:
        x11 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x804ab94:
        x11 = x11 + x2 // arg3
        csel x10,xzr,x10, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x10
        cset x11,ls   // x26
        if !x11 jmp 0x804ac50 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0804abac: // orphan
             jmp 0x804ac5c

    loc_0x0804abb4: // orphan
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x804abc8     // unlikely

    loc_0x0804abc0: // orphan
         w11 = 0x60               // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0804abc8: // orphan
         x11 = [x8 + 0x10]        // 0xcf // 207
         mrs x12,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x13,x12,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0804abf0: // orphan
         // CODE XREF from sym._copy_to_user_6 @ 0x804ac6c
         x10 = [x8 + 8]           // 0xcf // 207
         x9 = x0 & x9,asr 8       // arg1
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x0,xzr, eq
         hint 0x14
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x804ac08 ()             // 0x804ac08(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x804ac70

    loc_0x0804ac18: // orphan
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x804ac2c      // unlikely

    loc_0x0804ac24: // orphan
         w9 = 0x60                // '`'
         msr daifset,2            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0804ac2c: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0804ac50: // orphan
         // CODE XREF from sym._copy_to_user_6 @ 0x804ac80
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3             // (cstr 0x00000000) " "
         

    loc_0x0804ac5c: // orphan
         // CODE XREF from sym._copy_to_user_6 @ 0x804abac
         x10 = 0x804a000
         x10 = [x10]              // 0xd1 // 209
         tbz w10,4,0x804abb4      // likely

    loc_0x0804ac68: // orphan
         
         jmp 0x804abf0

    loc_0x0804ac70: // orphan
         // CODE XREF from sym._copy_to_user_6 @ 0x804ac10
         x8 = 0x804a000
         x8 = [x8]                // 0xcf // 207
         tbz w8,4,0x804ac18       // likely

    loc_0x0804ac7c: // orphan
         
         jmp 0x804ac50

}

/* ===== 0x08030e78 ===== */
int sym.brk_bp_handle_hit (int esi, int edx) {
    loc_0x8030e78:
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x460 // (cstr 0x00000000) " "
        [var_78h] = x2 // arg3 // (cstr 0x00000000) " "
        x23 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = var_80h  // int64_t arg1 // (cstr 0x00000000) " "
        w2 = 0x150
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8030eb0 ()  // 0x8030eb0(0x177bc0, 0x0, 0x150, 0x0)
        if !x23 jmp 0x80310d4 // likely
            
    loc_0x80310d4:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x803238c // fcn.08032c98-0x90c
        // chop
         // do {
    loc_0x803238c:
        // CODE XREF from sym.brk_bp_handle_hit @ 0x80310d8
        sp = arg_460h // (cstr 0x00000000) " "
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3  // (cstr 0x00000000) " "
        0x080323a8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8030eb8
    loc_0x8030ec4:
        x28 = 0x8030000
        mrs x9,tpidr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x28 = x28 + 0
        x9 = [x9 + x28] // 0xe3000000d0 // 974957576400
        x27 = [x8 + x9,lsl 3] // 0xd0000000cf // 893353197775
        if !x27 jmp 0x80310d4 // unlikely
    loc_0x8030edc:
        x24 = x21 + 0x7ac
        x0 = x24      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8030ee4 ()  // 0x8030ee4(0x7ac, 0x0, 0x0, 0x0)
        w8 = [x23 + 0x80] // 0xde // 222
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w8 == 1)  // x26 // x26
        [var_80h] = w8
        b.lt 0x8030f24 // likely
            
    loc_0x8030f24:
        w8 = [x23 + 0x148] // 0xde // 222
        if (w8 == 1)  // x26 // x26
        [var_148h] = w8
        b.lt 0x8030f5c // likely
            
    loc_0x8030f5c:
        x0 = x24      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // (cstr 0x00000000) " "
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // (cstr 0x00000000) " " x24
        0x8030f64 ()  // 0x8030f64(0x20, 0x20, 0x0, 0x0)
        mrs x20,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = [x20 + 0x18] // 0xdb // 219
        w8 = w8 + 1   // x26
        [x20 + 0x18] = w8 // (cstr 0x00000000) " "
        x8 = 0x8030000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8030f88 // unlikely
            
    loc_0x8030f88:
        w19 = 0xb3    // '\xb3'
        x25 = 0x8030000
        x22 = x27     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8030f94:
        x8 = x19 - 0xb3
        jmp 0x8030fc0
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08030fa0: // orphan
             x8 = x19 << 4
             x8 = [x20 + x8]          // 0xcf000000db // 889058230491
             [x22] = x8

    loc_0x08030fac: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8030ffc
         x19 = x19 + 1
         if (x19 == 0xd3)         // x26
         x22 = x22 + 8
         b.ne 0x8030f94           // likely

    loc_0x08030fbc: // orphan
         jmp 0x8031000

    loc_0x08030fc0: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8030f98
         x9 = [x25]               // 0xe0 // 224
         tbz w9,0x16,0x8030fa0    // unlikely

    loc_0x08030fc8: // orphan
         x9 = [x20]               // 0xdb // 219 // x24
         tbz w9,0x17,0x8030fa0    // likely

    loc_0x08030fd0: // orphan
         x9 = [x20 + 0xd50]       // 0xdb // 219
         if !x9 jmp 0x8030fa0     // unlikely

    loc_0x08030fd8: // orphan
         mrs x9,s3_0_c1_c2_0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x20 + 0xd50]      // 0xdb // 219
         w9 = w9 << 4
         x9 = x9 & 0x1ff0
         x9 = x9 + 0x10
         madd x1,x9,x8, x10       // int64_t arg2
         w2 = 0x8
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8030ff8 ()             // 0x8030ff8(0x0, 0x1fe64e900000181f, 0x8, 0x0)
         jmp 0x8030fac

    loc_0x08031000: // orphan
         // XREFS(28)
         x8 = [x20 + 0x18]        // 0xdb // 219 // x26
         x8 = x8 - 1
         [x20 + 0x18] = w8
         b.eq 0x8032b6c           // unlikely

    loc_0x08031010: // orphan
         x8 = [x20 + 0x18]        // 0xdb // 219
         if !x8 jmp 0x8032b6c     // likely

    loc_0x08031018: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8032b70
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x803101c ()             // 0x803101c(0x20, 0x0, 0x0, 0x0)
         x8 = [x23 + 0x2550]      // 0xde // 222
         x9 = [x20 + 0x588]       // 0xdb // 219
         x22 = [var_78h]          // 0x4 // 4 // x19
         w10 = 0x238
         madd x19,x8,x10, x23
         [x19 + 0x1d0] = x9
         x8 = [x22 + 0x100]       // 0xdd // 221
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         [x19 + 0x1d8] = x8
         0x8031044 ()             // 0x8031044(0x20, 0x0, 0x0, 0x0)
         [x19 + 0x1e0] = x0
         x0 = x19 + 0x1e8         // int64_t arg1
         w2 = 0xf8                // '\xf8'
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // x19
         0x8031058 ()             // 0x8031058(0xffffffffffffffd0, 0x10, 0xf8, 0x0)
         x9 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         x8 = [x9 + 0xf8]!        // 0xd0 // 208
         x0 = x19 + 0x308         // int64_t arg1
         w2 = 0x100
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19 + 0x2e0] = x8
         x8 = [x22 + 0x100]       // 0xdd // 221
         [var_70h] = x9
         [x19 + 0x2e8] = x8
         x8 = [x9 + 0x10]         // 0xd0 // 208
         [x19 + 0x2f0] = x8
         x8 = [x9 + 0x18]         // 0xd0 // 208
         [x19 + 0x2f8] = x8
         x8 = [x9 + 0x20]         // 0xd0 // 208
         [x19 + 0x300] = x8
         0x8031098 ()             // 0x8031098(0xf0, 0x0, 0x100, 0x0)
         w9 = [x23 + 0x2550]      // 0xde // 222
         w8 = [x23 + 0x2558]      // 0xde // 222
         w10 = w9 + 1
         w11 = w9 + 0x10
         if (w10 == 0)            // x26 // x26
         csinc w9,w11,w9, lt
         w9 = w9 & 0xfffffff0
         w9 = w10 - w9
         if (w8 == 0xf)           // x26 // x26
         [x23 + 0x2550] = w9
         jmp ifgt 0x80310dc       // unlikely

    loc_0x080310c8: // orphan
         w8 = w8 + 1
         [x23 + 0x2558] = w8
         jmp 0x80310fc

    loc_0x080310dc: // orphan
         w8 = [x23 + 0x2554]      // 0xde // 222
         w9 = w8 + 1
         w10 = w8 + 0x10
         if (w9 == 0)             // x26 // x26
         csinc w8,w10,w8, lt
         w8 = w8 & 0xfffffff0
         w8 = w9 - w8
         [x23 + 0x2554] = w8

    loc_0x080310fc: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80310d0
         x9 = [var_78h]           // 0x4 // 4 // x19
         x8 = [x23 + 0x2560]      // 0xde // 222
         w10 = 0x2568             // 'h%'
         x9 = x9 + 0x100
         [var_58h] = x9
         x9 = 0xf7cf              // '\xcf\xf7'
         x9 = 0xe353              // 'S\xe3'
         x11 = x8 + 1
         x9 = 0x9ba5              // '\xa5\x9b'
         [x23 + 0x2560] = x11
         x8 = x23 + x10
         x9 = 0x20c4              // '\xc4 '
         x12 = x11 >> 3
         w10 = (byte) [x8]        // 0xcf // 207
         umulh x9,x12,x9
         x9 = x9 >> 4
         w12 = 0x3e8
         msub x19,x9,x12, x11
         if !w10 jmp 0x803147c    // unlikely

    loc_0x08031148: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x8031150 ()             // 0x8031150(0x20, 0x1, 0x0, 0x0)
         if !x19 jmp 0x80314c0    // unlikely

    loc_0x08031158: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8031500
         w8 = [var_80h]           // 0x4
         [var_50h_2] = x27
         [sp, 0x60] = (x21,2)
         if (w8 == 1)             // x26 // x26
         b.lt 0x8031248           // likely

    loc_0x0803116c: // orphan
         x8 = var_80h
         x24 = 0x8031000
         x26 = 0x8031000
         x19 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = 0x8031000
         w21 = 0x1                // x26
         w25 = ~0xfff             // '\xff\x0f'
         x24 = x24 + 0
         x26 = x26 + 0
         x27 = var_48h_2
         jmp 0x80311b4

    loc_0x0803119c: // orphan
         x9 = [var_78h]           // 0x4 // x19
         [x9 + x8,lsl 3] = x28

    loc_0x080311a4: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x80311e0, 0x8031218, 0x8031244
         x8 = [var_80h]           // 0x4
         x19 = x19 + 1
         if (x19 == x8)
         b.ge 0x803124c           // likely

    loc_0x080311b4: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8031198
         x8 = x27 + x19,lsl 2
         ldur w8,[x8,-0x44]       // 0xcf // 207
         x28 = [x27 + x19,lsl 3]  // 0xda000000e2 // 936302870754
         if (w8 == 0x1e)          // x26 // x26
         b.ls 0x803119c           // unlikely

    loc_0x080311c8: // orphan
         if (w8 == 0x20)          // x26
         b.eq 0x80311e4           // unlikely

    loc_0x080311d0: // orphan
         if (w8 == 0x1f)          // x26
         b.ne 0x80311a4           // likely

    loc_0x080311d8: // orphan
         x8 = [var_70h]           // 0x4
         [x8] = x28
         jmp 0x80311a4

    loc_0x080311e4: // orphan
         if ((x28 & 3) == 0)      // x26
         b.ne 0x803121c           // likely

    loc_0x080311ec: // orphan
         x8 = [var_68h]           // 0x4 // x24
         x8 = [x8]                // 0xcf // 207 // x24
         x9 = [x20]               // 0xdb // 219 // x24
         if ((x8 & 0x400000) == 0) // x26
         x8 = x21 << x9
         csel x8,x8,x25, eq
         if (x8 == x28)           // x26 // x26
         b.ls 0x803121c           // likely

    loc_0x0803120c: // orphan
         x8 = [var_58h]           // 0x4
         w22 = 0x1                // x26
         [x8] = x28
         jmp 0x80311a4

    loc_0x0803121c: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x8031224 ()             // 0x8031224(0x20, 0x1, 0x0, 0x0)
         if !w0 jmp 0x80311a4     // unlikely

    loc_0x0803122c: // orphan
         x8 = [var_60h]           // 0x4
         x0 = 0x8031000
         x0 = x0 + 0              // int64_t arg1
         x1 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = [x8 + 0x10]         // 0xcf // 207 // x19
         0x8031240 ()             // 0x8031240(0x8031000, 0x0, 0x200000, 0x0)
         jmp 0x80311a4

    loc_0x08031248: // orphan
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0803124c: // orphan
         w8 = [var_148h]
         if (w8 == 1)             // x26 // x26
         b.lt 0x803132c           // likely

    loc_0x08031258: // orphan
         x25 = [var_68h]          // 0x4 // x24
         w8 = [x25 + 0x18]        // 0xe0 // 224
         w8 = w8 + 1              // x26
         [x25 + 0x18] = w8
         w8 = [var_148h]
         x28 = [var_60h]          // 0x4
         if (w8 == 1)             // x26 // x26
         b.lt 0x8031304           // likely

    loc_0x08031278: // orphan
         x9 = var_80h
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = var_10ch
         jmp 0x803129c

    loc_0x0803128c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80312d0
         x20 = x20 + 1
         if (x20 == w8)           // x26
         x24 = var_4h
         b.ge 0x80312d4           // likely

    loc_0x0803129c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8031288
         ldur w21,[x24,-0x40]     // 0xdf // 223
         [var_250h] = wzr
         if (w21 == 0x1f)         // x26 // x26
         b.hi 0x803128c           // likely

    loc_0x080312ac: // orphan
         x0 = var_250h            // int64_t arg1
         w2 = 0x4
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x80312b8 ()             // 0x80312b8(0x178250, 0x20, 0x4, 0x0)
         w8 = [var_250h]          // 0x4
         x9 = x25 + x21,lsl 4
         w19 = w19 + 1
         [x9 + 0xb30] = w8
         w8 = [var_148h]
         jmp 0x803128c

    loc_0x080312d4: // orphan
         if (w19 == 1)            // x26
         b.lt 0x8031304           // unlikely

    loc_0x080312dc: // orphan
         jmp 0x80478d4

    loc_0x080312e4: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x80478e0, 0x80478ec, 0x8047938
         x8 = 0x8031000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x8031470     // unlikely

    loc_0x080312f0: // orphan
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // "5" // x8(0x0, 0x0, 0x0, 0x0)
         w21 = 0x1                // x26
         w27 = 0x1                // x26
         jmp 0x803130c

    loc_0x08031304: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0803130c: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8031300, 0x8031478
         x8 = [x25 + 0x18]        // 0xe0 // 224
         x8 = x8 - 1
         [x25 + 0x18] = w8
         b.eq 0x8031324           // unlikely

    loc_0x0803131c: // orphan
         x8 = [x25 + 0x18]        // 0xe0 // 224
         if x8 jmp 0x8031338      // likely

    loc_0x08031324: // orphan
         0x8031324 ()             // 0x8031324(0x0, 0x0, 0x0, 0x0)
         jmp 0x8031338

    loc_0x0803132c: // orphan
         (x28, 2) = 3             // x24
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08031338: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8031328
         tbnz w22,0,0x8032388     // fcn.08032c98-0x910 // unlikely

    loc_0x0803133c: // orphan
         w8 = (byte) [x28 + 0x7e1] // 0xe3 // 227
         if !w8 jmp 0x8031370     // unlikely

    loc_0x08031344: // orphan
         x0 = 0x8031000
         x1 = 0x8031000
         x0 = x0 + 0              // int64_t arg1
         x1 = x1 + 0              // int64_t arg2
         0x8031354 ()             // 0x8031354(0x8031000, 0x8031000, 0x0, 0x0)
         if w0 jmp 0x8031570      // likely

    loc_0x0803135c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x803159c
         x1 = 0x8031000
         x1 = x1 + 0              // int64_t arg2
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8031368 ()             // 0x8031368(0x0, 0x8031000, 0x0, 0x0)
         jmp 0x8032388            // fcn.08032c98-0x910

    loc_0x08031370: // orphan
         x1 = [var_78h]           // 0x4 // int64_t arg2 // x19
         x8 = [var_50h_2]         // 0x4
         w19 = [x23 + 0x24]       // 0xde // 222
         w2 = 0x140
         x22 = [x1 + 0x100]       // 0xc8 // 200
         x26 = x8 + 0x300
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x803138c ()             // 0x803138c(0x300, 0x10, 0x140, 0x0)
         x8 = var_250h
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8031398 ()             // 0x8031398(0x0, 0x10, 0x140, 0x0)
         w8 = [var_254h]
         x9 = [var_258h]          // 0x4
         if (w8 == 0)             // x26 // x26
         cset w8,eq               // x26
         if ((x9 & 0x30) == 0)    // x26
         cset w9,ne               // x26
         w8 = w8 & w9             // x26
         if (w8 == 1)             // x26 // x26
         [var_0h] = w8
         b.ne 0x80313d4           // unlikely

    loc_0x080313c4: // orphan
         x1 = [x28 + 0x80]        // 0xe3 // 227 // int64_t arg2
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x80313d0 ()             // 0x80313d0(0x0, -1, 0x0, 0x0)

    loc_0x080313d4: // orphan
         w8 = ~w19
         w25 = 0x9f80             // '\x80\x9f'
         if ((w8 & 0xc00000) == 0) // x26 // x26
         x20 = 0x8031000
         [var_48h] = x19          // tmp
         b.ne 0x8031424           // likely

    loc_0x080313ec: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x803156c
         w8 = w25 + 0xe,lsl 12
         w9 = 0x8000
         w8 = w19 & w8
         w9 = 0xf00
         if (w8 == w9)            // x26
         b.ne 0x80315e4           // likely

    loc_0x08031404: // orphan
         tbnz w19,0x16,0x80315e4  // unlikely

    loc_0x08031408: // orphan
         ubfx w8,w19,0x13, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x80315e4     // likely

    loc_0x08031410: // orphan
         tbnz w19,0x15,0x80315a0  // unlikely

    loc_0x08031414: // orphan
         tbnz w19,0x14,0x80315a8  // unlikely

    loc_0x08031418: // orphan
         tbz w19,0x13,0x80315e4   // likely

    loc_0x0803141c: // orphan
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80315ac

    loc_0x08031424: // orphan
         w8 = 0xfc00
         w8 = 0xff3f              // '?\xff'
         w9 = 0x27ff              // '\xff''
         w8 = w19 & w8
         w9 = 0x4e21              // '!N'
         if (w8 == w9)            // x26
         w23 = 0x1                // x26
         jmp ifgt 0x8031504       // unlikely

    loc_0x08031444: // orphan
         w9 = 0x27ff              // '\xff''
         w9 = 0x2e21              // '!.'
         if (w8 == w9)            // x26
         jmp ifgt 0x8031530       // unlikely

    loc_0x08031454: // orphan
         w9 = 0x2800
         w9 = 0xe21               // '!\x0e'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x08031464: // orphan
         w9 = 0x4800
         w9 = 0xe21               // '!\x0e'
         jmp 0x8031564

    loc_0x08031470: // orphan
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = 0x1                // x26
         jmp 0x803130c

    loc_0x0803147c: // orphan
         w9 = 0x1                 // x26
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x8] = (byte) w9
         0x803148c ()             // 0x803148c(0x20, 0x1, 0x0, 0x0)
         w1 = [x21 + 0x10]        // 0xdc // 220 // x19
         w2 = [x20 + 0x588]       // 0xdb // 219
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [var_58h]           // 0x4
         w5 = [x23 + 0x24]        // 0xde // 222
         w3 = [x8 + x28]          // 0xe3000000cf // 974957576399
         x6 = [x23 + 0x18]        // 0xde // 222 // x26
         x4 = [x9]                // 0xd0 // 208
         x0 = 0x8031000
         x0 = x0 + 0              // int64_t arg1
         0x80314b8 ()             // 0x80314b8(0x8031000, 0x200000, -1, 0xffffff01)
         if x19 jmp 0x8031158     // likely

    loc_0x080314c0: // orphan
         x1 = [x23 + 0x2560]      // 0xde // 222 // int64_t arg2
         w2 = [x21 + 0x10]        // 0xdc // 220 // x19
         w3 = [x20 + 0x588]       // 0xdb // 219
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [var_58h]           // 0x4
         x6 = [x23 + 0x18]        // 0xde // 222 // x26
         w4 = [x8 + x28]          // 0xe3000000cf // 974957576399
         x0 = 0x8031000
         x5 = [x9]                // 0xd0 // 208
         w7 = (byte) [x21 + 0x7f0] // 0xdc // 220
         w8 = (byte) [x21 + 0x7e0] // 0xdc // 220
         w9 = (byte) [x21 + 0x7e1] // 0xdc // 220
         x0 = x0 + 0              // int64_t arg1
         [sp] = w8
         [var_0h_9] = w9
         0x80314fc ()             // 0x80314fc(0x8031000, 0x0, 0x200000, -1)
         jmp 0x8031158

    loc_0x08031504: // orphan
         w9 = 0x27ff              // '\xff''
         w9 = 0x6e21              // '!n'
         if (w8 == w9)            // x26
         jmp ifgt 0x803154c       // unlikely

    loc_0x08031514: // orphan
         w9 = 0x2800
         w9 = 0x4e21              // '!N'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x08031524: // orphan
         w9 = 0x4800
         w9 = 0x4e21              // '!N'
         jmp 0x8031564

    loc_0x08031530: // orphan
         w9 = 0x2800
         w9 = 0x2e21              // '!.'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x08031540: // orphan
         w9 = 0x4800
         w9 = 0x2e21              // '!.'
         jmp 0x8031564

    loc_0x0803154c: // orphan
         w9 = 0x2800
         w9 = 0x6e21              // '!n'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x0803155c: // orphan
         w9 = 0x4800
         w9 = 0x6e21              // '!n'

    loc_0x08031564: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x803146c, 0x803152c, 0x8031548
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x0803156c: // orphan
         jmp 0x80313ec

    loc_0x08031570: // orphan
         x9 = 0x8031000
         w1 = [x28 + 0x10]        // 0xe3 // 227 // x19
         w2 = [x25 + 0x588]       // 0xe0 // 224
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 + 0
         w3 = [x8 + x9]           // 0xd0000000cf // 893353197775
         x8 = [var_58h]           // 0x4
         x0 = 0x8031000
         x0 = x0 + 0              // int64_t arg1
         x4 = [x8]                // 0xcf // 207
         0x8031598 ()             // 0x8031598(0x8031000, 0x200000, -1, -1)
         jmp 0x803135c

    loc_0x080315a0: // orphan
         w9 = 0x2
         jmp 0x80315ac

    loc_0x080315a8: // orphan
         w9 = 0x1                 // x26

    loc_0x080315ac: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8031420, 0x80315a4
         w10 = w19 & 0xe000
         if (w10 == 8)            // x26
         b.ne 0x80315e4           // likely

    loc_0x080315b8: // orphan
         ubfx w10,w19,0x10, 3     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = 0x8
         bfi w10,w8,3, 4          // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         w8 = w11 << w9
         if (w10 == w8)           // x26
         b.lo 0x80315e4           // unlikely

    loc_0x080315d0: // orphan
         w8 = w8 << 1
         if (w10 == w8)           // x26
         b.hs 0x80315e4           // unlikely

    loc_0x080315dc: // orphan
         w23 = 0x1                // x26
         jmp 0x80317dc

    loc_0x080315e4: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w8 = w19 & 0xfffffc00
         w9 = 0x4e31              // '1N'
         if (w8 == w9)            // x26
         w23 = 0x1                // x26
         jmp ifle 0x8031648       // likely

    loc_0x080315fc: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4eb1              // '\xb1N'
         if (w8 == w9)            // x26
         jmp ifle 0x80316d0       // likely

    loc_0x0803160c: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x6e70              // 'pn'
         if (w8 == w9)            // x26
         jmp ifle 0x8031790       // likely

    loc_0x0803161c: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x6eb0              // '\xb0n'
         if (w8 == w9)            // x26
         jmp ifgt 0x80317bc       // unlikely

    loc_0x0803162c: // orphan
         w9 = 0xa800
         w9 = 0x6e70              // 'pn'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x0803163c: // orphan
         w9 = 0xa800
         w9 = 0x6e71              // 'qn'
         jmp 0x80317d4

    loc_0x08031648: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e30              // '0.'
         if (w8 == w9)            // x26
         jmp ifgt 0x8031694       // unlikely

    loc_0x08031658: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0xe70               // 'p\x0e'
         if (w8 == w9)            // x26
         jmp ifgt 0x803170c       // unlikely

    loc_0x08031668: // orphan
         w9 = 0xa800
         w9 = 0xe30               // '0\x0e'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x08031678: // orphan
         w9 = 0xa800
         w9 = 0xe31               // '1\x0e'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x08031688: // orphan
         w9 = 0xb800
         w9 = 0xe31               // '1\x0e'
         jmp 0x80317d4

    loc_0x08031694: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e71              // 'q.'
         if (w8 == w9)            // x26
         jmp ifgt 0x8031738       // unlikely

    loc_0x080316a4: // orphan
         w9 = 0xa800
         w9 = 0x2e30              // '0.'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x080316b4: // orphan
         w9 = 0xa800
         w9 = 0x2e31              // '1.'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x080316c4: // orphan
         w9 = 0xa800
         w9 = 0x2e70              // 'p.'
         jmp 0x80317d4

    loc_0x080316d0: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4e71              // 'qN'
         if (w8 == w9)            // x26
         jmp ifgt 0x8031764       // unlikely

    loc_0x080316e0: // orphan
         w9 = 0xb800
         w9 = 0x4e31              // '1N'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x080316f0: // orphan
         w9 = 0xa800
         w9 = 0x4e70              // 'pN'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x08031700: // orphan
         w9 = 0xa800
         w9 = 0x4e71              // 'qN'
         jmp 0x80317d4

    loc_0x0803170c: // orphan
         w9 = 0xa800
         w9 = 0xe70               // 'p\x0e'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x0803171c: // orphan
         w9 = 0xa800
         w9 = 0xe71               // 'q\x0e'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x0803172c: // orphan
         w9 = 0xb800
         w9 = 0xe71               // 'q\x0e'
         jmp 0x80317d4

    loc_0x08031738: // orphan
         w9 = 0xa800
         w9 = 0x2e71              // 'q.'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x08031748: // orphan
         w9 = 0xa800
         w9 = 0x4e30              // '0N'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x08031758: // orphan
         w9 = 0xa800
         w9 = 0x4e31              // '1N'
         jmp 0x80317d4

    loc_0x08031764: // orphan
         w9 = 0xb800
         w9 = 0x4e71              // 'qN'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x08031774: // orphan
         w9 = 0xa800
         w9 = 0x4eb0              // '\xb0N'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x08031784: // orphan
         w9 = 0xa800
         w9 = 0x4eb1              // '\xb1N'
         jmp 0x80317d4

    loc_0x08031790: // orphan
         w9 = 0xb800
         w9 = 0x4eb1              // '\xb1N'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x080317a0: // orphan
         w9 = 0xa800
         w9 = 0x6e30              // '0n'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x080317b0: // orphan
         w9 = 0xa800
         w9 = 0x6e31              // '1n'
         jmp 0x80317d4

    loc_0x080317bc: // orphan
         w9 = 0xa800
         w9 = 0x6eb0              // '\xb0n'
         if (w8 == w9)            // x26
         b.eq 0x80317dc           // unlikely

    loc_0x080317cc: // orphan
         w9 = 0xa800
         w9 = 0x6eb1              // '\xb1n'

    loc_0x080317d4: // orphan
         // XREFS: CODE 0x08031644  CODE 0x08031690  CODE 0x080316cc  
         // XREFS: CODE 0x08031708  CODE 0x08031734  CODE 0x08031760  
         // XREFS: CODE 0x0803178c  CODE 0x080317b8  
         if (w8 == w9)            // x26
         b.ne 0x8031bfc           // likely

    loc_0x080317dc: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x80315e0, 0x8032c80
         w8 = w23 ^ 1
         w8 = w27 | w8
         tbz w8,0,0x80317f4       // unlikely

    loc_0x080317e8: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8031c34
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w13 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x803184c

    loc_0x080317f4: // orphan
         x19 = [var_68h]          // 0x4 // x24
         w8 = [x19 + 0x18]        // 0xda // 218 // x26
         w8 = w8 + 1
         [x19 + 0x18] = w8
         x8 = [x20]               // 0xdb // 219 // x24
         if !x8 jmp 0x8031814     // likely

    loc_0x0803180c: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // x8(0x10, 0x0, 0x0, 0x0)

    loc_0x08031814: // orphan
         x8 = [var_50h_2]         // 0x4
         x1 = x19 + 0xb30         // int64_t arg2
         w2 = 0x200
         x0 = x8 + 0x100          // int64_t arg1
         0x8031824 ()             // 0x8031824(0x100, 0xb40, 0x200, 0x0)
         w13 = [x19 + 0xd30]      // 0xda // 218
         w12 = [x19 + 0xd34]      // 0xda // 218
         x8 = [x19 + 0x18]        // 0xda // 218
         x8 = x8 - 1
         [x19 + 0x18] = w8
         b.eq 0x8032ea4           // unlikely

    loc_0x08031840: // orphan
         x8 = [x19 + 0x18]        // 0xda // 218
         if !x8 jmp 0x8032ea4     // unlikely

    loc_0x08031848: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8032eb8
         x19 = [var_48h]          // tmp

    loc_0x0803184c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80317f0
         x8 = [var_58h]           // 0x4
         ubfx x24,x19,0x16, 2     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w24 == 3)            // x26
         [var_34h] = w23
         x8 = [x8]                // 0xcf // 207
         [var_0h_2] = xzr
         [var_0h_3] = xzr
         [var_0h_4] = xzr
         [var_38h] = x8
         [sp, 0x1f8] = (xzr,2)
         [sp, 0x1e8] = (xzr,2)
         [sp, 0x1d8] = (xzr,2)
         [var_0h_5] = xzr
         b.ne 0x80318c8           // likely

    loc_0x08031884: // orphan
         w8 = w19 & w25
         w9 = 0xf00
         if (w8 == w9)            // x26
         [var_0h_6] = x22
         b.ne 0x8031ca4           // likely

    loc_0x08031898: // orphan
         w8 = w19 & 0xe000
         if (w8 == 8)             // x26
         b.ne 0x8031ca4           // likely

    loc_0x080318a4: // orphan
         tbnz w19,0x16,0x8031ca4  // unlikely

    loc_0x080318a8: // orphan
         ubfx w8,w19,0x13, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x8031ca4     // likely

    loc_0x080318b0: // orphan
         tbnz w19,0x15,0x8031bf0  // unlikely

    loc_0x080318b4: // orphan
         tbnz w19,0x14,0x8031c38  // unlikely

    loc_0x080318b8: // orphan
         tbz w19,0x13,0x8031ca4   // likely

    loc_0x080318bc: // orphan
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8031c40

    loc_0x080318c8: // orphan
         w8 = 0xfc00
         w8 = 0xff3f              // '?\xff'
         w9 = 0x27ff              // '\xff''
         w8 = w19 & w8
         w9 = 0x4e21              // '!N'
         x10 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == w9)            // x26
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp ifgt 0x8031918       // unlikely

    loc_0x080318ec: // orphan
         w9 = 0x27ff              // '\xff''
         w9 = 0x2e21              // '!.'
         if (w8 == w9)            // x26
         jmp ifgt 0x8031954       // unlikely

    loc_0x080318fc: // orphan
         w9 = 0x2800
         w9 = 0xe21               // '!\x0e'
         if (w8 == w9)            // x26
         b.eq 0x80319a4           // unlikely

    loc_0x0803190c: // orphan
         w9 = 0x4800
         w9 = 0xe21               // '!\x0e'
         jmp 0x8031940

    loc_0x08031918: // orphan
         w9 = 0x27ff              // '\xff''
         w9 = 0x6e21              // '!n'
         if (w8 == w9)            // x26
         jmp ifgt 0x8031974       // unlikely

    loc_0x08031928: // orphan
         w9 = 0x2800
         w9 = 0x4e21              // '!N'
         if (w8 == w9)            // x26
         b.eq 0x80319a4           // unlikely

    loc_0x08031938: // orphan
         w9 = 0x4800
         w9 = 0x4e21              // '!N'

    loc_0x08031940: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8031914
         if (w8 == w9)            // x26
         x26 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x8031884           // likely

    loc_0x0803194c: // orphan
         w26 = 0x1                // x26
         jmp 0x80319a4

    loc_0x08031954: // orphan
         w9 = 0x2800
         w9 = 0x2e21              // '!.'
         if (w8 == w9)            // x26
         b.eq 0x80319a0           // unlikely

    loc_0x08031964: // orphan
         w9 = 0x4800
         x26 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x2e21              // '!.'
         jmp 0x8031990

    loc_0x08031974: // orphan
         w9 = 0x2800
         w9 = 0x6e21              // '!n'
         if (w8 == w9)            // x26
         b.eq 0x80319a0           // unlikely

    loc_0x08031984: // orphan
         w9 = 0x4800
         x26 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x6e21              // '!n'

    loc_0x08031990: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8031970
         if (w8 == w9)            // x26
         b.ne 0x8031884           // likely

    loc_0x08031998: // orphan
         w26 = 0x2
         jmp 0x80319a4

    loc_0x080319a0: // orphan
         w26 = 0x3

    loc_0x080319a4: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8031950, 0x803199c
         w8 = 0x10                // x19
         [var_70h] = w21
         x21 = x8 << x24
         x8 = [var_68h]           // 0x4 // x24
         x23 = x19                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = x20                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         ubfx x10,x23,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx x20,x21,1, 0x1f     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = 0x40               // '@'
         x8 = x8 + x10,lsl 4      // x24
         w10 = w20 & 0xf8
         w9 = w19 << 1            // x24
         w22 = (unsigned) w11 / w10
         x1 = x8 + 0xb30          // int64_t arg2
         x0 = var_250h            // int64_t arg1
         w2 = 0x10                // x19
         [var_258h] = xzr
         [var_250h] = xzr
         [var_238h] = xzr
         [var_230h] = xzr
         x19 = x19 & 0x1f
         w25 = w22 & w9,asr 31
         0x80319fc ()             // 0x80319fc(0x178250, 0xb50, 0x10, 0x0)
         tbz w23,0x1e,0x8031a1c   // likely

    loc_0x08031a04: // orphan
         x8 = [var_68h]           // 0x4 // x24
         x0 = var_230h            // int64_t arg1
         w2 = 0x10                // x19
         x8 = x8 + x19,lsl 4
         x1 = x8 + 0xb30          // int64_t arg2
         0x8031a18 ()             // 0x8031a18(0x178230, 0xc50, 0x10, 0x0)

    loc_0x08031a1c: // orphan
         w12 = w21 >> 1
         x10 = [var_258h]         // 0x4
         x11 = [var_250h]         // 0x4
         w14 = w25 * w12
         x25 = [var_68h]          // 0x4 // x24
         x17 = ~0
         w13 = w20 - 1
         if (w24 == 2)            // x26
         x18 = x17 << x21
         x15 = x17 << x20
         x13 = x17 << x13
         x0 = 0x8031000
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x15 = ~x15
         x16 = ~x13
         csinv x17,x17,x18, eq
         w18 = w26                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26
         x0 = x0 + 0
         x20 = x27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8031b04

    loc_0x08031b04: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8031a70
         w1 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = !x1
         if (x1 == 0)             // x26
         x3 = x10 << x3
         x2 = x11 >> x8
         x4 = x10 >> x1
         x1 = x1 - 0x40
         csel x3,xzr,x3, eq
         x2 = x2 | x3
         if (x1 == 0)             // x26 // x26
         csel x1,x4,x2, ge
         x2 = 0x8031b30
         x3 = [x0 + x18,lsl 2]    // 0xd9000000c7 // 932007903431
         x2 = x2 + x3
         x1 = x17 & x1
         br x2

    loc_0x08031bf0: // orphan
         w9 = 0x2
         w22 = 0x1                // x26
         jmp 0x8031c40

    loc_0x08031bfc: // orphan
         w8 = 0xfc00
         w8 = 0xbf20              // ' \xbf'
         w8 = w19 & w8
         w9 = 0xf200
         w8 = w8 + w9
         ror w8,w8,0xc
         if (w8 == 8)             // x26
         b.lo 0x80315dc           // unlikely

    loc_0x08031c1c: // orphan
         x8 = var_250h
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         0x8031c24 ()             // 0x8031c24(0x10, 0x0, 0x0, 0x0)
         w8 = [var_254h]
         if !w8 jmp 0x8032c20     // likely

    loc_0x08031c30: // orphan
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80317e8

    loc_0x08031c38: // orphan
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x1                 // x26

    loc_0x08031c40: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x80318c4, 0x8031bf8
         ubfx w10,w19,0x10, 3     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = 0x8
         bfi w10,w8,3, 4          // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         w24 = w11 << w9
         if (w10 == w24)          // x26
         b.lo 0x8031ca4           // unlikely

    loc_0x08031c58: // orphan
         w25 = w24 << 1
         w27 = w25 - w10
         b.ls 0x8031ca4           // likely

    loc_0x08031c64: // orphan
         ubfx w8,w19,0xb, 5       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 - 0x10
         if (w8 == 3)             // x26 // x26
         b.hi 0x8031ca4           // likely

    loc_0x08031c74: // orphan
         x9 = 0x8031000
         x9 = x9 + 0
         [var_70h] = w21
         x10 = 0x8031c80
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         w8 = w19 & 0x20000000
         [var_0h_7] = x26
         [sp, 0x18] = (w13,2)
         br x10

    loc_0x08031ca4: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w8 = w19 & 0xfffffc00
         w9 = 0x4e31              // '1N'
         if (w8 == w9)            // x26
         jmp ifle 0x8031d24       // likely

    loc_0x08031cb8: // orphan
         x25 = [var_68h]          // 0x4 // x24
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4eb1              // '\xb1N'
         if (w8 == w9)            // x26
         jmp ifle 0x8031dec       // likely

    loc_0x08031ccc: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x6e70              // 'pn'
         if (w8 == w9)            // x26
         jmp ifle 0x8031f34       // likely

    loc_0x08031cdc: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x6eb0              // '\xb0n'
         if (w8 == w9)            // x26
         jmp ifgt 0x8031f80       // unlikely

    loc_0x08031cec: // orphan
         w9 = 0xa800
         w9 = 0x6e70              // 'pn'
         if (w8 == w9)            // x26
         b.eq 0x8032128           // unlikely

    loc_0x08031cfc: // orphan
         w9 = 0xa800
         w9 = 0x6e71              // 'qn'
         if (w8 == w9)            // x26
         b.ne 0x8032480           // likely

    loc_0x08031d0c: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x8
         jmp 0x80320a0

    loc_0x08031d24: // orphan
         x25 = [var_68h]          // 0x4 // x24
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e30              // '0.'
         if (w8 == w9)            // x26
         jmp ifgt 0x8031d98       // unlikely

    loc_0x08031d38: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0xe70               // 'p\x0e'
         if (w8 == w9)            // x26
         jmp ifgt 0x8031e4c       // unlikely

    loc_0x08031d48: // orphan
         w9 = 0xa800
         w9 = 0xe30               // '0\x0e'
         if (w8 == w9)            // x26
         b.eq 0x8032034           // unlikely

    loc_0x08031d58: // orphan
         w9 = 0xa800
         w9 = 0xe31               // '1\x0e'
         if (w8 == w9)            // x26
         b.eq 0x8031fbc           // unlikely

    loc_0x08031d68: // orphan
         w9 = 0xb800
         w9 = 0xe31               // '1\x0e'
         if (w8 == w9)            // x26
         b.ne 0x8032480           // likely

    loc_0x08031d78: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w19 = 0x8
         w24 = 0x1                // x26
         w27 = 0x8
         jmp 0x8032174

    loc_0x08031d98: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e71              // 'q.'
         if (w8 == w9)            // x26
         jmp ifgt 0x8031e94       // unlikely

    loc_0x08031da8: // orphan
         w9 = 0xa800
         w9 = 0x2e30              // '0.'
         if (w8 == w9)            // x26
         b.eq 0x8032054           // unlikely

    loc_0x08031db8: // orphan
         w9 = 0xa800
         w9 = 0x2e31              // '1.'
         if (w8 == w9)            // x26
         b.eq 0x8031fdc           // unlikely

    loc_0x08031dc8: // orphan
         w9 = 0xa800
         w9 = 0x2e70              // 'p.'
         if (w8 == w9)            // x26
         b.ne 0x8032480           // likely

    loc_0x08031dd8: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x4
         jmp 0x8032138

    loc_0x08031dec: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4e71              // 'qN'
         if (w8 == w9)            // x26
         jmp ifgt 0x8031ee4       // unlikely

    loc_0x08031dfc: // orphan
         w9 = 0xb800
         w9 = 0x4e31              // '1N'
         if (w8 == w9)            // x26
         b.eq 0x80320e8           // unlikely

    loc_0x08031e0c: // orphan
         w9 = 0xa800
         w9 = 0x4e70              // 'pN'
         if (w8 == w9)            // x26
         b.eq 0x80320a8           // unlikely

    loc_0x08031e1c: // orphan
         w9 = 0xa800
         w9 = 0x4e71              // 'qN'
         if (w8 == w9)            // x26
         b.ne 0x8032480           // likely

    loc_0x08031e2c: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x8
         w19 = 0x10               // x19
         jmp 0x8032174

    loc_0x08031e4c: // orphan
         w9 = 0xa800
         w9 = 0xe70               // 'p\x0e'
         if (w8 == w9)            // x26
         b.eq 0x8032074           // unlikely

    loc_0x08031e5c: // orphan
         w9 = 0xa800
         w9 = 0xe71               // 'q\x0e'
         if (w8 == w9)            // x26
         b.eq 0x8031ff4           // unlikely

    loc_0x08031e6c: // orphan
         w9 = 0xb800
         w9 = 0xe71               // 'q\x0e'
         if (w8 == w9)            // x26
         b.ne 0x8032480           // likely

    loc_0x08031e7c: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x4
         jmp 0x803211c

    loc_0x08031e94: // orphan
         w9 = 0xa800
         w9 = 0x2e71              // 'q.'
         if (w8 == w9)            // x26
         b.eq 0x803208c           // unlikely

    loc_0x08031ea4: // orphan
         w9 = 0xa800
         w9 = 0x4e30              // '0N'
         if (w8 == w9)            // x26
         b.eq 0x8032014           // unlikely

    loc_0x08031eb4: // orphan
         w9 = 0xa800
         w9 = 0x4e31              // '1N'
         if (w8 == w9)            // x26
         b.ne 0x8032480           // likely

    loc_0x08031ec4: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x10               // x19
         w19 = 0x8
         jmp 0x8032174

    loc_0x08031ee4: // orphan
         w9 = 0xb800
         w9 = 0x4e71              // 'qN'
         if (w8 == w9)            // x26
         b.eq 0x8032108           // unlikely

    loc_0x08031ef4: // orphan
         w9 = 0xa800
         w9 = 0x4eb0              // '\xb0N'
         if (w8 == w9)            // x26
         b.eq 0x80320c8           // unlikely

    loc_0x08031f04: // orphan
         w9 = 0xa800
         w9 = 0x4eb1              // '\xb1N'
         if (w8 == w9)            // x26
         b.ne 0x8032480           // likely

    loc_0x08031f14: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x4
         w19 = 0x20               // x24
         jmp 0x8032174

    loc_0x08031f34: // orphan
         w9 = 0xb800
         w9 = 0x4eb1              // '\xb1N'
         if (w8 == w9)            // x26
         b.eq 0x8032460           // unlikely

    loc_0x08031f44: // orphan
         w9 = 0xa800
         w9 = 0x6e30              // '0n'
         if (w8 == w9)            // x26
         b.eq 0x8032158           // unlikely

    loc_0x08031f54: // orphan
         w9 = 0xa800
         w9 = 0x6e31              // '1n'
         if (w8 == w9)            // x26
         b.ne 0x8032480           // likely

    loc_0x08031f64: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x10               // x19
         w19 = 0x8
         jmp 0x8032170

    loc_0x08031f80: // orphan
         w9 = 0xa800
         w9 = 0x6eb0              // '\xb0n'
         if (w8 == w9)            // x26
         b.eq 0x8032140           // unlikely

    loc_0x08031f90: // orphan
         w9 = 0xa800
         w9 = 0x6eb1              // '\xb1n'
         if (w8 == w9)            // x26
         b.ne 0x8032480           // likely

    loc_0x08031fa0: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x4
         w19 = 0x20               // x24
         jmp 0x8032170

    loc_0x08031fbc: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w19 = 0x8
         w27 = 0x8
         jmp 0x8032174

    loc_0x08031fdc: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w19 = 0x8
         jmp 0x8032068

    loc_0x08031ff4: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // XREFS: DATA 0x08032368  STRING 0x080327e4  CODE 0x0803280c  
         // XREFS: STRING 0x08032a3c  DATA 0x08032a70  DATA 0x08032a74  
         // XREFS: DATA 0x08032b14  DATA 0x08032b18  DATA 0x08032b2c  
         // XREFS: DATA 0x08032b30  DATA 0x08032b54  STRING 0x08032b88  
         // XREFS: CODE 0x08032b8c  STRING 0x08032c94  DATA 0x08032ca4  
         // XREFS: STRING 0x08032d2c  CODE 0x08032d30  STRING 0x08032e0c  
         // XREFS: CODE 0x08032e10  
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x4
         w19 = 0x10               // x19
         jmp 0x8032174

    loc_0x08032014: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x10               // x19
         w19 = 0x8
         w21 = 0x1                // x26
         jmp 0x8032174

    loc_0x08032034: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w19 = 0x8
         w21 = 0x1                // x26
         w27 = 0x8
         jmp 0x8032174

    loc_0x08032054: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w19 = 0x8
         w25 = 0x1                // x26

    loc_0x08032068: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8031ff0
         w26 = 0x1                // x26
         w27 = 0x8
         jmp 0x8032174

    loc_0x08032074: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x4
         jmp 0x80320bc

    loc_0x0803208c: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x4

    loc_0x080320a0: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8031d20
         w19 = 0x10               // x19
         jmp 0x8032170

    loc_0x080320a8: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x8

    loc_0x080320bc: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8032088
         w19 = 0x10               // x19
         w21 = 0x1                // x26
         jmp 0x8032174

    loc_0x080320c8: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x4
         w19 = 0x20               // x24
         w21 = 0x1                // x26
         jmp 0x8032174

    loc_0x080320e8: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x10               // x19
         w19 = 0x8
         w24 = 0x1                // x26
         jmp 0x8032174

    loc_0x08032108: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x8

    loc_0x0803211c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8031e90
         w19 = 0x10               // x19
         w24 = 0x1                // x26
         jmp 0x8032174

    loc_0x08032128: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x8

    loc_0x08032138: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8031de8
         w19 = 0x10               // x19
         jmp 0x803216c

    loc_0x08032140: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x4
         w19 = 0x20               // x24
         jmp 0x803216c

    loc_0x08032158: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x10               // x19
         w19 = 0x8

    loc_0x0803216c: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x803213c, 0x8032154
         w25 = 0x1                // x26

    loc_0x08032170: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8031f7c, 0x8031fb8, 0x80320a4
         w26 = 0x1                // x26

    loc_0x08032174: // orphan
         // XREFS: CODE 0x08031d94  CODE 0x08031e48  CODE 0x08031ee0  
         // XREFS: CODE 0x08031f30  CODE 0x08031fd8  CODE 0x08032010  
         // XREFS: CODE 0x08032030  CODE 0x08032050  CODE 0x08032070  
         // XREFS: CODE 0x080320c4  CODE 0x080320e4  CODE 0x08032104  
         // XREFS: CODE 0x08032124  CODE 0x0803247c  
         x8 = [var_48h]           // tmp // x19
         x10 = [var_68h]          // 0x4 // x24
         x9 = ~0
         x9 = x9 << x19
         ubfx x8,x8,5, 5          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x10 + x8,lsl 4      // x24
         x1 = x8 + 0xb30          // int64_t arg2
         x0 = var_250h            // int64_t arg1
         w2 = 0x10                // x19
         [var_258h] = xzr
         [var_250h] = xzr
         [var_238h] = xzr
         [var_230h] = xzr
         x22 = ~x9
         0x80321ac ()             // 0x80321ac(0x178250, 0xb50, 0x10, 0x0)
         x8 = [var_258h]          // 0x4
         x9 = [var_250h]          // 0x4
         if !w24 jmp 0x803220c    // unlikely

    loc_0x080321bc: // orphan
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080321c4: // orphan
         w12 = w11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = !x12
         if (x12 == 0)            // x26 // x26
         x14 = x12 - 0x40
         x13 = x8 << x13
         csel x13,xzr,x13, eq
         if (x14 == 0)            // x26 // x26
         x14 = x9 >> x11
         x12 = x8 >> x12
         x13 = x14 | x13          // x9
         csel x12,x12,x13, ge     // x9
         x12 = x12 & x22
         x10 = x12 + x10
         w27 = w27 - 1
         x10 = x10 & x22
         w11 = w11 + w19          // x19
         b.ne 0x80321c4           // likely

    loc_0x08032208: // orphan
         jmp 0x803226c

    loc_0x0803220c: // orphan
         x10 = x9 & x22
         if !w26 jmp 0x80323ac    // unlikely

    loc_0x08032214: // orphan
         w11 = w27 - 1
         w12 = w19                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19

    loc_0x0803221c: // orphan
         w13 = w12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x14 = !x13
         if (x13 == 0)            // x26 // x26
         x15 = x13 - 0x40
         x14 = x8 << x14
         csel x14,xzr,x14, eq
         if (x15 == 0)            // x26 // x26
         x15 = x9 >> x12
         x13 = x8 >> x13
         x14 = x15 | x14          // x9
         csel x13,x13,x14, ge     // x9
         x13 = x13 & x22
         if (x13 == x10)          // x26 // x26
         csel x14,x13,x10, hi
         csel x10,x13,x10, lo
         if (w25 == 0)            // x26 // x26
         csel x10,x14,x10, ne
         w11 = w11 - 1
         w12 = w12 + w19          // x19
         b.ne 0x803221c           // unlikely

    loc_0x0803226c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8032208
         x8 = [var_48h]           // tmp // x19
         x25 = [var_68h]          // 0x4 // x24
         x9 = x10 & x22
         x1 = var_230h            // int64_t arg2
         x8 = x8 & 0x1f           // x19
         x8 = x25 + x8,lsl 4
         x0 = x8 + 0xb30          // int64_t arg1
         w2 = 0x10                // x19
         [var_238h] = xzr
         [var_230h] = x9
         0x8032294 ()             // 0x8032294(0xc50, 0x178230, 0x10, 0x0)
         x8 = [var_38h]           // 0x4
         x9 = [var_58h]           // 0x4
         w21 = w23                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24

    loc_0x080322a4: // orphan
         // CODE XREF from fcn.08031bc4 @ 0x8031bec
         w23 = [var_34h]          // x24

    loc_0x080322a8: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80326f8
         x8 = x8 + 4
         [x9] = x8

    loc_0x080323ac: // orphan
         if (w19 == 0x20)         // x26
         b.eq 0x80323d4           // unlikely

    loc_0x080323b4: // orphan
         if (w19 == 0x10)         // x26 // x26
         b.eq 0x80323cc           // likely

    loc_0x080323bc: // orphan
         if (w19 == 8)            // x26
         b.ne 0x80323d8           // likely

    loc_0x080323c4: // orphan
         x10 = (char) w10
         jmp 0x80323d8

    loc_0x080323cc: // orphan
         x10 = (short) w10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80323d8

    loc_0x080323d4: // orphan
         x10 = w10                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080323d8: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x80323c8, 0x80323d0
         w11 = w27 - 1
         w12 = w19                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         jmp 0x8032408

    loc_0x080323e4: // orphan
         x13 = (short) w13        // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080323e8: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8032454, 0x803245c
         if (x13 == x10)          // x26 // x26
         csel x14,x13,x10, gt
         csel x10,x13,x10, lt
         if (w21 == 0)            // x26 // x26
         csel x10,x14,x10, ne
         w11 = w11 - 1
         w12 = w12 + w19          // x19
         b.eq 0x803226c           // likely

    loc_0x08032408: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80323e0
         w13 = w12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x15 = !x13
         if (x13 == 0)            // x26 // x26
         x15 = x8 << x15
         x14 = x9 >> x12
         x16 = x8 >> x13
         x13 = x13 - 0x40
         csel x15,xzr,x15, eq
         if (x13 == 0)            // x26 // x26
         x13 = x14 | x15          // x9
         csel x13,x16,x13, ge     // x9
         if (w19 == 0x20)         // x26
         x13 = x13 & x22
         b.eq 0x8032458           // unlikely

    loc_0x08032440: // orphan
         if (w19 == 0x10)         // x26 // x26
         b.eq 0x80323e4           // likely

    loc_0x08032448: // orphan
         if (w19 == 8)            // x26
         b.ne 0x80323e8           // likely

    loc_0x08032450: // orphan
         x13 = (char) w13
         jmp 0x80323e8

    loc_0x08032458: // orphan
         x13 = w13                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80323e8

    loc_0x08032460: // orphan
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = 0x4
         w19 = 0x20               // x24
         w24 = 0x1                // x26
         jmp 0x8032174

    loc_0x08032480: // orphan
         w8 = 0xfc00
         w8 = 0xbf20              // ' \xbf'
         w8 = w19 & w8
         w9 = 0xf200
         w8 = w8 + w9
         [var_0h_7] = x26
         x26 = x20                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         ror w20,w8,0xc
         if (w20 == 7)            // x26
         b.hi 0x8032670           // likely

    loc_0x080324a8: // orphan
         ubfx x8,x19,0xd, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x22 = x8 + 1             // x26
         w27 = w23                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         w23 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx x19,x19,5, 0x1b     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = var_250h
         x24 = x22                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26
         [var_288h] = xzr
         [var_280h] = xzr
         [var_278h] = xzr
         [var_270h] = xzr
         [var_268h] = xzr
         [var_260h] = xzr
         [var_258h] = xzr
         [var_250h] = xzr
         [var_238h] = xzr
         [var_230h] = xzr
         [var_228h] = xzr
         [var_220h] = xzr

    loc_0x080324f4: // orphan
         w8 = w19 & 0x1f          // x19
         x8 = x25 + w8,uxtw 4
         x1 = x8 + 0xb30          // int64_t arg2
         w2 = 0x10                // x19
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8032508 ()             // 0x8032508(0x0, 0xc30, 0x10, 0x0)
         x24 = x24 - 1
         x21 = var_260h           // x19
         w19 = w19 + 1
         b.ne 0x80324f4           // likely

    loc_0x0803251c: // orphan
         x24 = [var_48h]          // tmp // x19
         w8 = 0x10                // x19
         w9 = 0x8
         x0 = var_230h            // int64_t arg1
         if ((w24 & 0x40000000) == 0) // x26
         ubfx x10,x24,0x10, 5     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w19,w9,w8, eq       // x19
         x8 = x25 + x10,lsl 4
         x1 = x8 + 0xb30          // int64_t arg2
         w2 = 0x10                // x19
         w21 = w24 & 0x1f         // x19
         0x8032548 ()             // 0x8032548(0x178230, 0xb30, 0x10, 0x0)
         x21 = x25 + w21,uxtw 4
         tbz w20,0,0x803256c      // likely

    loc_0x08032554: // orphan
         x1 = x21 + 0xb30         // int64_t arg2
         x0 = var_220h            // int64_t arg1
         w2 = 0x10                // x19
         0x8032560 ()             // "X" // 0x8032560(0x178220, 0xb30, 0x10, 0x0)
         tbnz w24,0x1e,0x803256c  // unlikely

    loc_0x08032568: // orphan
         [var_228h] = xzr

    loc_0x0803256c: // orphan
         x9 = [var_238h]          // 0x4
         x10 = [var_230h]         // 0x4
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w22 << 4
         x12 = var_250h
         w13 = 0xff               // '\xff'
         x20 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8032598

    loc_0x0803258c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x803266c
         w19 = w19 - 1
         w8 = w8 + 8
         b.eq 0x80326d8           // unlikely

    loc_0x08032598: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8032588
         w14 = w8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x16 = !x14
         if (x14 == 0)            // x26
         x16 = x9 << x16
         x15 = x10 >> x8
         x18 = x14 - 0x40
         csel x16,xzr,x16, eq
         x17 = x9 >> x14
         x15 = x15 | x16
         if (x18 == 0)            // x26 // x26
         csel x15,x17,x15, ge
         x15 = x15 & 0xff
         if (w11 == w15)          // x26 // x26
         b.ls 0x803258c           // likely

    loc_0x080325d0: // orphan
         x16 = x15 & 0xf0
         x16 = x12 + x16
         (x18, 2) = 3
         ubfiz w15,w15,3, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = !x15
         if (x15 == 0)            // x26 // x26
         x1 = x16 << x1
         x18 = x18 >> x15
         x16 = x16 >> x15
         x15 = x15 - 0x40
         csel x1,xzr,x1, eq
         if (x15 == 0)            // x26 // x26
         x18 = x18 | x1
         csel x16,x16,x18, ge
         x17 = !x14
         x16 = x16 & 0xff
         x15 = x14 - 0x40
         x18 = x13 >> x17
         if (x14 == 0)            // x26 // x26
         x17 = x16 >> x17
         x0 = x13 << x14
         csel x18,xzr,x18, eq
         csel x17,xzr,x17, eq
         if (x15 == 0)            // x26 // x26
         csel x15,x0,x18, ge
         x18 = [var_220h]         // 0x4 // 4
         x0 = [var_228h]          // 0x4 // 4
         x1 = x13 << x8
         x14 = x16 << x14
         x16 = x16 << x8
         csel x1,xzr,x1, ge
         csel x14,x14,x17, ge
         csel x16,xzr,x16, ge
         bic x15,x0,x15           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bic x17,x18,x1           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x14 = x14 | x15
         x15 = x16 | x17
         [var_220h] = x15
         [var_228h] = x14
         jmp 0x803258c

    loc_0x08032670: // orphan
         x8 = var_250h
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         [sp, 0x18] = (w13,2)
         0x803267c ()             // 0x803267c(0x10, 0x0, 0x0, 0x0)
         x8 = [var_280h]          // 0x4
         x9 = [var_288h]          // 0x4
         x15 = [var_278h]         // 0x4
         x10 = [var_290h]         // 0x4
         x11 = [var_298h]         // 0x4
         [var_0h_4] = x9
         [sp, 0x1f8] = (x15,2)
         x8 = [var_250h]          // 0x4
         x9 = [var_258h]          // 0x4
         x12 = [var_260h]         // 0x4
         x13 = [var_268h]         // 0x4
         x14 = [var_270h]
         [sp, 0x1d0] = (x8,2)
         x8 = x8 >> 0x20
         [var_0h_3] = x10
         [var_0h_2] = x11
         [sp, 0x1e0] = (x12,2)
         [var_1e8h_2] = x14
         if !w8 jmp 0x8032b74     // likely

    loc_0x080326cc: // orphan
         w27 = 0x1                // x26
         x20 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8032a70            // fcn.08032c98-0x228

    loc_0x080326d8: // orphan
         x0 = x21 + 0xb30         // int64_t arg1
         x1 = var_220h            // int64_t arg2
         w2 = 0x10                // x19
         0x80326e4 ()             // 0x80326e4(0xb30, 0x178220, 0x10, 0x0)
         x8 = [var_38h]           // 0x4
         x9 = [var_58h]           // 0x4
         w21 = w23                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         w23 = w27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80322a8

    loc_0x08032b6c: // orphan
         0x8032b6c ()             // 0x8032b6c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8031018

    loc_0x08032b74: // orphan
         w8 = [var_1e0h]          // 0x4
         x20 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 - 1
         if (w8 == 4)             // x26 // x26
         b.hi 0x8032cc8           // likely

    loc_0x08032b88: // orphan
         x9 = 0x8032000
         x9 = x9 + 0
         x10 = 0x8032b90
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         x8 = [var_70h]           // 0x4
         x22 = x8 + 0x10          // x19
         br x10

    loc_0x08032c20: // orphan
         x8 = [var_258h]          // 0x4
         if ((x8 & 0xc) == 0)     // x26
         b.ne 0x80315dc           // likely

    loc_0x08032c2c: // orphan
         w8 = [var_264h]
         w8 = w8 & 0xfffffffe
         if (w8 == 6)             // x26
         b.ne 0x8031c30           // likely

    loc_0x08032c3c: // orphan
         w8 = (byte) [var_27fh]   // 0x4
         w9 = (byte) [var_280h]   // 0x4
         w10 = (byte) [var_281h]  // 0x4
         w11 = (byte) [var_282h]  // 0x4
         w12 = (byte) [var_283h]  // 0x4
         w8 = w8 & 3
         w9 = w9 & 7
         w8 = w8 << 0xe
         w10 = w10 & 0xf
         bfi w8,w9,0xb, 3         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w8,w10,7, 4          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w12 = w12 & 6
         bfi w8,w11,3, 4          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 | w12
         w9 = 0xda20              // ' \xda'
         if (w8 == w9)            // x26
         cset w23,eq
         jmp 0x80317dc

    loc_0x08032cc8: // orphan
         w27 = 0x1                // x26
         jmp 0x8032a70            // fcn.08032c98-0x228

    loc_0x08032ea4: // orphan
         w19 = w12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = w13                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8032eac ()             // 0x8032eac(0x0, 0x0, 0x0, 0x0)
         w13 = w24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w12 = w19                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8031848

    loc_0x080478d4: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80312dc
         x8 = 0x8047000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x16,0x80478e4   // likely

    loc_0x080478e0: // orphan
         jmp 0x80312e4

    loc_0x080478e4: // orphan
         x8 = [x25]               // 0xe0 // 224
         tbnz w8,0x17,0x80478f0   // likely

    loc_0x080478ec: // orphan
         jmp 0x80312e4

    loc_0x080478f0: // orphan
         x8 = [x25 + 0xd50]       // 0xe0 // 224
         if !x8 jmp 0x80312e4     // unlikely

    loc_0x080478f8: // orphan
         mrs x8,s3_0_c1_c2_0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 << 4             // x24
         x8 = x8 & 0x1ff0         // x24
         x19 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = x8 + 0x10
         x24 = x25 + 0xb30

    loc_0x08047914: // orphan
         x8 = [x25 + 0xd50]       // 0xe0 // 224
         x1 = x24 + x20           // int64_t arg2
         w2 = 0x10                // x19
         x0 = x8 + x19            // int64_t arg1
         0x8047924 ()             // 0x8047924(0xf, 0x40, 0x10, 0x0)
         x20 = x20 + 0x10
         if (x20 == 0x200)        // x26
         x19 = x19 + x21
         b.ne 0x8047914           // likely

    loc_0x08047938: // orphan
         jmp 0x80312e4

}

/* ===== 0x080308c4 ===== */
int sym.brk_break_contiguous_group_at_kva (int esi, int edx) {
    loc_0x80308c4:
        if !x0 jmp 0x80309f4 // likely
            
    loc_0x80309f4:
        // lr
         // } else {
    loc_0x80308c8:
        if (w1 == 0x1ff) // arg2 // x26
        b.hi 0x80309f4 // unlikely
        }
        return eax;
    loc_0x80308d0:
        w8 = w1 & 0xfffffff0 // arg2
        w9 = w8 + 0x10 // x19
        if (w9 == 0x200) // x26
        jmp ifgt 0x80309f4 // unlikely
    loc_0x80308e0:
        sbfiz x8,x8,3, 0x20 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        x9 = [x0 + x8] // 0xcf000000c7 // 889058230471 // arg1
        x10 = x8 | 8
        x9 = x9 & 0xffefffffffffffff
        [x0 + x8] = x9 // arg1
        x9 = [x0 + x10] // 0xd1000000c7 // 897648165063 // arg1
        x9 = x9 & 0xffefffffffffffff
        [x0 + x10] = x9 // arg1
        x9 = x8 | 0x10 // x19
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        x9 = x8 | 0x18
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        x9 = x8 | 0x20
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        w9 = 0x28     // '('
        x9 = x8 | x9
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        x9 = x8 | 0x30
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        x9 = x8 | 0x38
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        x9 = x8 | 0x40
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        w9 = 0x48     // 'H'
        x9 = x8 | x9
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        w9 = 0x50     // 'P'
        x9 = x8 | x9
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        w9 = 0x58     // 'X'
        x9 = x8 | x9
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        x9 = x8 | 0x60
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        w9 = 0x68     // 'h'
        x9 = x8 | x9
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        x9 = x8 | 0x70
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x8 = x8 | 0x78
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        x9 = [x0 + x8] // 0xcf000000c7 // 889058230471 // arg1
        x9 = x9 & 0xffefffffffffffff
        [x0 + x8] = x9 // arg1
}

/* ===== 0x0802d124 ===== */
int sym.brk_build_clone (int esi, int edx) {
    loc_0x802d124:
        sp = sp - 0x140
        [sp, 0xe0] = (x29,2)
        [sp, 0xf0] = (x28,2)
        [sp, 0x100] = (x26,2)
        [sp, 0x110] = (x24,2)
        [sp, 0x120] = (x22,2)
        [sp, 0x130] = (x20,2)
        x29 = var_e0h
        w24 = ~0x15
        [x29, -0x18] = (xzr,2)
        [x29 = xzr
        [x29, -0x38] = (xzr,2)
        [x29, -0x50] = (xzr,2)
        [sp, 0x78] = (xzr,2)
        [sp, 0x68] = (xzr,2)
        [sp, 0x58] = (xzr,2)
        [sp, 0x48] = (xzr,2)
        if !x2 jmp 0x802d46c // likely
            
    loc_0x802d46c:
        // XREFS: CODE 0x0802d168  CODE 0x0802d170  CODE 0x0802d180
        // XREFS: CODE 0x0802d188  CODE 0x0802d1d0  CODE 0x0802d1dc
        // XREFS: CODE 0x0802d400  CODE 0x0802d408  CODE 0x0802d45c
        // XREFS: CODE 0x0802d550  CODE 0x0802d770
        w0 = w24      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_140h
        0x0802d48c
         // } else {
    loc_0x802d16c:
        x19 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        if !x3 jmp 0x802d46c // likely
        }
        return eax;
    loc_0x802d174:
        x8 = [x19 + 0x40] // 0xda // 218
        if !x8 jmp 0x802d3fc // likely
            
    loc_0x802d3fc:
        // CODE XREF from sym.brk_build_clone @ 0x802d178
        w24 = ~0x15
        jmp 0x802d46c
    loc_0x0802d17c: // orphan
             w24 = ~0x15
             if !x0 jmp 0x802d46c     // likely

    loc_0x0802d184: // orphan
         x8 = [x19 + 0x48]        // 0xda // 218
         if !x8 jmp 0x802d46c     // likely

    loc_0x0802d18c: // orphan
         x10 = [x0 + 0x40]        // 0xc7 // 199 // arg1
         ubfx x11,x1,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         x8 = x11 << 3
         ubfx x12,x1,0x15, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         [x29 = x10               // " "
         x9 = [x10 + x8]          // 0xcf000000d1 // 889058230481
         [x29 = x11               // (pstr 0x08047840) "sB"
         x21 = x1                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         w24 = ~0xd
         [x29 = x9
         x8 = [x10 + x8]          // 0xcf000000d1 // 889058230481
         x9 = 0x802d000
         x9 = [x9]                // 0xd0 // 208
         x8 = x8 & 0xfffffffff000
         bfi x8,x12,3, 9          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 - x9
         x13 = [x8]               // 0xcf // 207
         tbz w13,1,0x802d46c      // unlikely

    loc_0x0802d1d4: // orphan
         x13 = x13 & 3
         if (x13 == 1)            // x26
         b.eq 0x802d46c           // unlikely

    loc_0x0802d1e0: // orphan
         x10 = [x10 + x11,lsl 3]  // 0xd2000000d1 // 901943132369
         x10 = x10 & 0xfffffffff000
         x10 = x10 - x9
         [x29 = x10
         x10 = [x8]               // 0xcf // 207
         [x29 = x12
         [x29 = x10
         x10 = [x8]               // 0xcf // 207
         x11 = x10 & 0xfffffffff000
         ubfx x10,x21,0xc, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi x11,x10,3, 9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x11 - x9
         b.eq 0x802d404           // unlikely

    loc_0x0802d214: // orphan
         x11 = [x8]               // 0xcf // 207
         x11 = x11 & 0xfffffffff000
         x9 = x11 - x9
         [x29 = x9
         x9 = 0x802d000
         x8 = [x8]                // 0xcf // 207
         x9 = [x9]                // 0xd0 // 208
         ubfx x8,x8,0xc, 0x24     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x9 + x8,lsl 6
         x8 = x8 + 0x28
         b.eq 0x802d404           // unlikely

    loc_0x0802d240: // orphan
         [sp, 0x30] = (x12,2)
         xzr = [x12]              // 0xd3 // 211
         x27 = xzr | 0xffffffc000000000
         x20 = x2                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w28 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x26 = x2 + 0xb0          // arg3
         x8 = x2 + 0xa0           // arg3
         x24 = var_68h            // " "
         x27 = 0x800
         x23 = var_48h            // tmp
         [x19 + 0x28] = w10
         [var_40h] = x8

    loc_0x0802d278: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d368
         if !x22 jmp 0x802d2f8    // likely

    loc_0x0802d27c: // orphan
         w9 = [x20 + 0x790]       // 0xdb // 219
         if (w9 == 1)             // x26 // x26
         b.lt 0x802d324           // likely

    loc_0x0802d288: // orphan
         x10 = x29 - 0x58
         x10 = x10 + x22,lsl 3
         ldur x10,[x10,-8]        // 0xd1 // 209 // sp
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802d2b0

    loc_0x0802d2a0: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x802d2b8, 0x802d2c4, 0x802d2d0
         x8 = x8 + 1
         if (x9 == x8)            // x26
         x11 = x11 + 0x38
         b.eq 0x802d324           // unlikely

    loc_0x0802d2b0: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d29c
         ldur w12,[x11,-0x10]     // 0xd2 // 210
         if (x22 == x12)          // x26
         b.ne 0x802d2a0           // likely

    loc_0x0802d2bc: // orphan
         x12 = [x11]              // 0xd2 // 210
         if (x12 == x25)          // x26 // x26
         b.ne 0x802d2a0           // likely

    loc_0x0802d2c8: // orphan
         ldur x12,[x11,-8]        // 0xd2 // 210
         if (x12 == x10)          // x26 // x26
         b.ne 0x802d2a0           // likely

    loc_0x0802d2d4: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d310
         x8 = x8 & 0xffffffff
         w9 = 0x38                // '8'
         madd x9,x8,x9, x20
         if (x9 != 0x90)          // x26 // x26
         b.eq 0x802d324           // likely

    loc_0x0802d2e8: // orphan
         w9 = 0x38                // '8'
         madd x8,x8,x9, x20
         x25 = [x8 + 0x98]        // 0xcf // 207
         jmp 0x802d360

    loc_0x0802d2f8: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d278
         w9 = [x20 + 0x790]       // 0xdb // 219
         if (w9 == 1)             // x26 // x26
         b.lt 0x802d324           // likely

    loc_0x0802d304: // orphan
         x10 = [var_40h]
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802d30c: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d320
         w11 = [x10]              // 0xd1 // 209
         if !w11 jmp 0x802d2d4    // unlikely

    loc_0x0802d314: // orphan
         x8 = x8 + 1
         if (x9 == x8)            // x26
         x10 = x10 + 0x38
         b.ne 0x802d30c           // likely

    loc_0x0802d324: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x802d284, 0x802d2ac, 0x802d2e4, 0x802d300
         if (w28 == 3)            // x26
         jmp ifgt 0x802d40c       // unlikely

    loc_0x0802d32c: // orphan
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg4
         0x802d33c ()             // 0x802d33c(0xcc0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x802d420     // unlikely

    loc_0x0802d344: // orphan
         x9 = x27 + x0,lsl 6
         sbfiz x8,x28,3, 0x20     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 &= x9
         [x24 + x8] = x0
         [x23 + x8] = x9
         b.eq 0x802d418           // unlikely

    loc_0x0802d35c: // orphan
         w28 = w28 + 1            // x26

    loc_0x0802d360: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d2f4
         x22 = x22 + 1            // x26
         if (x22 == 3)            // x26
         b.ne 0x802d278           // likely

    loc_0x0802d36c: // orphan
         w23 = [x20 + 0x790]      // 0xdb // 219
         x26 = x20 + 0x7b0
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802d378 ()             // 0x802d378(0x7d0, 0x0, 0x0, 0x0)
         0x802d37c ()             // 0x802d37c(0x7d0, 0x0, 0x0, 0x0)
         x25 = [var_38h]          // 0x4 // x8
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x8
         0x802d388 ()             // 0x802d388(0x72a9c62900000002, 0x0, 0x0, 0x0)
         x8 = [var_30h]           // 0x4
         x22 = [x8]               // 0xcf // 207
         x8 = 0x1                 // x26
         x8 = 0x400
         if ((x22 & x8) == 0)     // x26 // x26
         [x19 + 0x30] = x22
         b.eq 0x802d3d8           // unlikely

    loc_0x0802d3a8: // orphan
         ubfx x0,x22,0xc, 0x24    // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802d3ac ()             // 0x802d3ac(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x802d3d8     // likely

    loc_0x0802d3b4: // orphan
         x8 = 0x802d000
         x9 = [x8]                // 0xcf // 207
         x8 = 0x802d000
         x10 = [x8]               // 0xcf // 207
         x8 = x22 & 0xfffffffff000
         x22 = x8 - x9
         x9 = x10 - 1
         x9 = x22 >> x9
         tbz w9,0,0x802d58c       // likely

    loc_0x0802d3d8: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x802d3a4, 0x802d3b0, 0x802d594
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = ~0xd

    loc_0x0802d3e0: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x802d7a4, 0x802d808
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802d3e4 ()             // 0x802d3e4(0x0, 0x0, 0x0, 0x0)
         0x802d3e8 ()             // 0x802d3e8(0x0, 0x0, 0x0, 0x0)
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802d3f0 ()             // 0x802d3f0(0x1, 0x0, 0x0, 0x0)
         dsb ishst
         jmp 0x802d428

    loc_0x0802d404: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x802d210, 0x802d23c
         w24 = ~0xd
         jmp 0x802d46c

    loc_0x0802d40c: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d328
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w24 = ~0x1b
         jmp 0x802d428

    loc_0x0802d418: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d358
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802d41c ()             // 0x802d41c(0x0, 0x0, 0x0, 0x0)

    loc_0x0802d420: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d340
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = ~0xb

    loc_0x0802d428: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x802d3f8, 0x802d414
         if (w23 == w28)          // x26
         b.ge 0x802d45c           // likely

    loc_0x0802d430: // orphan
         x9 = var_68h             // " "
         x8 = w28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x22 = w23                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x23 = x9 - 8

    loc_0x0802d440: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d458
         x0 = [x23 + x8,lsl 3]    // 0xcf000000de // 889058230494 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = x8 - 1
         0x802d44c ()             // 0x802d44c(-1, 0x0, 0x0, 0x0)
         if (x25 == x22)          // x26
         x8 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp ifgt 0x802d440       // likely

    loc_0x0802d45c: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d42c
         if w24 jmp 0x802d46c     // likely

    loc_0x0802d460: // orphan
         x8 = 0x802d000
         w8 = [x8]                // 0xcf // 207
         if w8 jmp 0x802d490      // likely

    loc_0x0802d490: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d468
         x9 = 0x802d000
         x8 = [x20 + 0x20]        // 0xdb // 219
         x9 = [x9]                // 0xd0 // 208
         w1 = [x20 + 0x10]        // 0xdb // 219
         w4 = [x19 + 0x28]        // 0xda // 218
         x6 = [x19 + 0x58]        // 0xda // 218
         x7 = [x20 + 0x88]        // 0xdb // 219
         x10 = [x19 + 0x30]       // 0xda // 218
         w11 = [x20 + 0x7a8]      // 0xdb // 219
         w12 = [x20 + 0x790]      // 0xdb // 219
         x9 = x8 - x9
         x9 = x9 << 6
         if (x8 == 0)             // x26 // x26
         x0 = 0x802d000
         csel x5,xzr,x9, eq
         w8 = 0x8
         x0 = x0 + 0              // int64_t arg1
         w3 = 0x3
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         [var_0h_3] = w12
         [var_0h_4] = w11
         [var_0h_5] = w8
         [sp] = x10
         0x802d4ec ()             // 0x802d4ec(0x802d000, 0x0, 0x0, 0x3)
         w8 = [x20 + 0x790]       // 0xdb // 219
         if (w8 == 1)             // x26 // x26
         b.lt 0x802d76c           // likely

    loc_0x0802d4fc: // orphan
         x21 = 0x802d000
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = x20 + 0xc0
         x21 = x21 + 0
         jmp 0x802d554

    loc_0x0802d510: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d560
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802d514: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x802d580, 0x802d588
         x9 = 0x802d000
         ldur x8,[x23,-0x30]      // 0xde // 222
         x9 = [x9]                // 0xd0 // 208
         ldur w4,[x23,-0x20]      // 0xde // 222
         (x6, 2) = 3
         x7 = [x23]               // 0xde // 222 // x24
         x8 = x8 - x9
         x3 = x8 << 6             // int64_t arg4
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802d538 ()             // 0x802d538(0x0, 0x0, 0x0, 0x7fff07b1a80f45c0)
         w8 = [x20 + 0x790]       // 0xdb // 219

    loc_0x0802d540: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d578
         x22 = x22 + 1            // x26
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x22 == w8)           // x26
         x23 = x23 + 0x38
         b.ge 0x802d46c           // unlikely

    loc_0x0802d554: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d50c
         ldur x2,[x23,-0x28]      // 0xde // 222
         x9 = [x19 + 0x60]        // 0xda // 218
         if (x9 == x2)            // x26
         b.eq 0x802d510           // unlikely

    loc_0x0802d564: // orphan
         x9 = [x19 + 0x68]        // 0xda // 218
         if (x9 == x2)            // x26 // x26
         b.eq 0x802d584           // unlikely

    loc_0x0802d570: // orphan
         x9 = [x19 + 0x70]        // 0xda // 218
         if (x9 == x2)            // x26 // x26
         b.ne 0x802d540           // likely

    loc_0x0802d57c: // orphan
         w1 = 0x2
         jmp 0x802d514

    loc_0x0802d584: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d56c
         w1 = 0x1                 // x26
         jmp 0x802d514

    loc_0x0802d58c: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d3d4
         x0 = x8 >> 0xc           // int64_t arg1
         0x802d590 ()             // 0x802d590(0x72a9c62900000, 0x0, 0x0, 0x0)
         if !w0 jmp 0x802d3d8     // unlikely

    loc_0x0802d598: // orphan
         x0 = [x19 + 0x40]        // 0xda // 218 // int64_t arg1
         w2 = 0x1000
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [var_40h] = w23
         [var_20h] = x26
         0x802d5ac ()             // 0x802d5ac(0x0, 0x0, 0x1000, 0x0)
         x10 = x20 + 0xb0
         x9 = x20 + 0xa0
         x8 = x21 & 0xfff
         [sp, 0x28] = (x9,2)
         w8 = [x22 + x8]          // 0xcf000000dd // 889058230493
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x24] = w8
         jmp 0x802d5fc

    loc_0x0802d5d8: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d668
         w9 = 0x38                // '8'
         madd x8,x8,x9, x20
         x22 = [x8 + 0x98]        // 0xcf // 207

    loc_0x0802d5e4: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x802d734, 0x802d768
         x8 = x19 + x27,lsl 3
         x27 = x27 + 1            // x26
         if (x27 == 3)            // x26
         x24 = x22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8 + 0x60] = x22
         b.eq 0x802d788           // unlikely

    loc_0x0802d5fc: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d5d4
         if !x27 jmp 0x802d670    // likely

    loc_0x0802d600: // orphan
         w9 = [x20 + 0x790]       // 0xdb // 219
         if (w9 == 1)             // x26 // x26
         b.lt 0x802d69c           // likely

    loc_0x0802d60c: // orphan
         x10 = x29 - 0x58
         x10 = x10 + x27,lsl 3
         ldur x10,[x10,-8]        // 0xd1 // 209 // sp
         x11 = [var_30h]          // 0x4
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802d634

    loc_0x0802d624: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x802d63c, 0x802d648, 0x802d654
         x8 = x8 + 1
         if (x9 == x8)            // x26
         x11 = x11 + 0x38
         b.eq 0x802d69c           // unlikely

    loc_0x0802d634: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d620
         ldur w12,[x11,-0x10]     // 0xd2 // 210
         if (x27 == x12)          // x26
         b.ne 0x802d624           // likely

    loc_0x0802d640: // orphan
         x12 = [x11]              // 0xd2 // 210
         if (x12 == x24)          // x26 // x26
         b.ne 0x802d624           // likely

    loc_0x0802d64c: // orphan
         ldur x12,[x11,-8]        // 0xd2 // 210
         if (x12 == x10)          // x26 // x26
         b.ne 0x802d624           // likely

    loc_0x0802d658: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d688
         x8 = x8 & 0xffffffff
         w9 = 0x38                // '8'
         madd x9,x8,x9, x20
         if (x9 != 0x90)          // x26 // x26
         b.ne 0x802d5d8           // unlikely

    loc_0x0802d66c: // orphan
         jmp 0x802d69c

    loc_0x0802d670: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d5fc
         w9 = [x20 + 0x790]       // 0xdb // 219
         if (w9 == 1)             // x26 // x26
         b.lt 0x802d69c           // likely

    loc_0x0802d67c: // orphan
         x10 = [var_sp_28h]       // 0x4
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802d684: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d698
         w11 = [x10]              // 0xd1 // 209
         if !w11 jmp 0x802d658    // unlikely

    loc_0x0802d68c: // orphan
         x8 = x8 + 1
         if (x9 == x8)            // x26
         x10 = x10 + 0x38
         b.ne 0x802d684           // likely

    loc_0x0802d69c: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x802d608, 0x802d630, 0x802d66c, 0x802d678
         if (w23 == w28)          // x26
         b.ge 0x802d798           // likely

    loc_0x0802d6a4: // orphan
         sbfiz x8,x23,3, 0x20     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = var_68h             // " "
         x25 = [x9 + x8]          // 0xcf000000d0 // 889058230480
         x9 = var_48h             // tmp
         x22 = [x9 + x8]          // 0xcf000000d0 // 889058230480
         x8 = x29 - 0x28
         x26 = [x8 + x27,lsl 3]   // 0xe2000000cf // 970662609103
         w2 = 0x1000
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x802d6cc ()             // 0x802d6cc(-1, 0x0, 0x1000, 0x0)
         if !x27 jmp 0x802d6e4    // likely

    loc_0x0802d6d4: // orphan
         x8 = x29 - 0x58
         x8 = x8 + x27,lsl 3
         ldur x8,[x8,-8]          // 0xcf // 207 // sp
         jmp 0x802d6e8

    loc_0x0802d6e4: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d6d0
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802d6e8: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d6e0
         x9 = [x20 + 0x790]       // 0xdb // 219
         w23 = w23 + 1
         if (w9 == 0x1f)          // x26 // x26
         jmp ifgt 0x802d774       // unlikely

    loc_0x0802d6f8: // orphan
         w11 = 0x38               // '8'
         w10 = w9 + 1
         madd x9,x9,x11, x20
         [x20 + 0x790] = w10
         [x9 + 0x90]! = x25
         [x9 + 8] = x22
         [x9 + 0x10] = w27
         [x9, 0x18] = (x8,2)
         [x9, 0x28] = (x21,2)
         if !x9 jmp 0x802d774     // unlikely

    loc_0x0802d720: // orphan
         w8 = [var_40h]           // x24
         if w8 jmp 0x802d734      // likely

    loc_0x0802d728: // orphan
         x8 = x20 + x27,lsl 3     // x24
         [x8 + 0x20] = x25
         [x8 + 0x40] = x22

    loc_0x0802d734: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d724
         if !x27 jmp 0x802d5e4    // likely

    loc_0x0802d738: // orphan
         x9 = 0x802d000
         w8 = w27 - 1
         x9 = [x9]                // 0xd0 // 208
         x8 = x8 << 3
         x10 = x29 - 0x40
         x10 = [x10 + x8]         // 0xcf000000d1 // 889058230481
         x11 = x29 - 0x58
         x8 = [x11 + x8]          // 0xcf000000d2 // 889058230482
         x9 = x25 - x9
         x9 = x9 >> 6
         bfi x10,x9,0xc, 0x24     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x24 + x8,lsl 3] = x10
         jmp 0x802d5e4

    loc_0x0802d76c: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d4f8
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802d46c

    loc_0x0802d774: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x802d6f4, 0x802d71c
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802d77c ()             // 0x802d77c(0x0, 0x0, 0x0, 0x0)
         w24 = ~0x1b
         jmp 0x802d79c

    loc_0x0802d788: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d5f8
         w8 = [var_40h]           // x24
         if !w8 jmp 0x802d7a8     // unlikely

    loc_0x0802d790: // orphan
         ldur x8,[x29,-0x18]
         jmp 0x802d7c4

    loc_0x0802d798: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d6a0
         w24 = ~0xd

    loc_0x0802d79c: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d784
         x25 = [var_38h]          // 0x4 // x8
         x26 = [var_20h]          // 0x4
         jmp 0x802d3e0

    loc_0x0802d7a8: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d78c
         w8 = 0x3
         [x20 + 0x60] = w8
         ldur x8,[x29,-0x18]
         [x20 + 0x88] = x8
         ldur x10,[x29,-0x58]
         ldur x9,[x29,-0x50]
         [x20, 0x68] = (x10,2)

    loc_0x0802d7c4: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x802d794
         x0 = [x19 + 0x70]        // 0xda // 218 // int64_t arg1
         w1 = [x19 + 0x28]        // 0xda // 218
         x25 = [var_38h]          // 0x4 // x8
         x26 = [var_20h]          // 0x4
         [x19, 0x50] = (x8,2)
         0x802d7d8 ()             // 0x802d7d8(0xffffffff00000003, 0x0, 0x0, 0x0)
         x8 = [x19 + 0x30]        // 0xda // 218
         x10 = [x19 + 0x48]       // 0xda // 218
         x9 = 0xfff               // '\xff\x0f'
         x11 = [x19 + 0x58]       // 0xda // 218
         x12 = [x19 + 0x28]       // 0xda // 218
         x9 = 0xffef              // '\xef\xff'
         x8 = x8 & x9
         x9 = x10 & 0xfffffffff000
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x9 | x8
         [x11 + x12,lsl 3] = x8
         jmp 0x802d3e0

}

/* ===== 0x0802d068 ===== */
int sym.brk_cache_maintenance (int esi, int edx) {
    loc_0x802d068:
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19 // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x802d000
        x8 = [x8]     // 0xcf // 207
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        if !x8 jmp 0x802d088 // unlikely
            
    loc_0x802d088:
        // CODE XREF from sym.brk_cache_maintenance @ 0x802d080
        x8 = 0x802d000
        x8 = [x8]     // 0xcf // 207
        x1 = x19 + 1,lsl 12
        if !x8 jmp 0x802d0a4 // unlikely
            
    loc_0x802d0a4:
        // CODE XREF from sym.brk_cache_maintenance @ 0x802d094
        mrs x8,ctr_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = 0x4
        ubfx x9,x8,0x10, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = x11 << x9
        x10 = !x9
        x8 = x8 & 0xf
        x10 = x10 & x19
        if (x10 == x1) // x26
        x8 = x11 << x8 // x19
        b.hs 0x802d0dc // likely
            
    loc_0x802d0dc:
        // CODE XREF from sym.brk_cache_maintenance @ 0x802d0c8
        dsb ish
        x9 = !x8
        x9 = x9 & x19
        if (x9 == x1) // x26
        b.hs 0x802d100 // likely
            
    loc_0x802d100:
        // CODE XREF from sym.brk_cache_maintenance @ 0x802d0ec
        dsb ish
        0x0802d104
         // do {
    loc_0x802d108:
        // CODE XREF from sym.brk_cache_maintenance @ 0x802d0a0
        x8 = 0x802d000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x802d118 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0802d114: // orphan
             blr x8                   // x8(0x0, 0x0, 0x0, 0x0)

    loc_0x0802d118: // orphan
         // CODE XREF from sym.brk_cache_maintenance @ 0x802d110
         x19 = [var_10h]          // 0x4
         (x29, 2) = 3
         

}

/* ===== 0x0804a6b8 ===== */
int sym.brk_call_all_cpus (int esi, int edx) {
    loc_0x804a6b8:
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x27,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = [x27 + 0x18] // 0xe2 // 226
        x9 = 0x804a000
        x9 = x9 + 0
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 + 1
        [x27 + 0x18] = w8
        mrs x8,tpidr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = [x8 + x9] // 0xd0000000cf // 893353197775
        0x804a6f8 ()  // 0x804a6f8(0x0, 0x0, 0x0, 0x0)
        x22 = 0x804a000
        x24 = 0x804a000
        w23 = 0x1     // x26
        w21 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x28 = 0x804a000
        x22 = x22 + 0
        w25 = 0x1     // x26
        x24 = x24 + 0
        w23 = 0x41    // 'A'
        jmp 0x804a744
         // do {
    loc_0x804a744:
        // CODE XREF from sym.brk_call_all_cpus @ 0x804a720
        if (w19 == w21) // x26
        b.eq 0x804a738 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x804a74c:
        x8 = [x28]    // 0xe3 // 227
        if !x8 jmp 0x804a7a4 // unlikely
            
    loc_0x804a7a4:
        x8 = [x27 + 0x18] // 0xe2 // 226
        x8 = x8 - 1
        [x27 + 0x18] = w8
        b.eq 0x804a7d8 // unlikely
            
    loc_0x804a7d8:
        0x804a7d8 ()  // 0x804a7d8(0x0, 0x0, 0x0, 0x0)
        jmp 0x804a7bc
         // do {
    loc_0x804a7bc:
        // CODE XREF from sym.brk_call_all_cpus @ 0x804a7dc
        (x20, 2) = 3
        (x22, 2) = 3  // x24 // x19
        (x24, 2) = 3  // x8
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        0x0804a7d4
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x804a754
    loc_0x804a778:
        w8 = w25 << w8
        if ((w8 & w23) == 0) // x26
        b.ne 0x804a738 // likely
    loc_0x804a738:
        // CODE XREF from sym.brk_call_all_cpus @ 0x804a7a0
        w21 = w21 + 1 // x26
        if (w21 == 0x20) // x26
        b.eq 0x804a7a4 // unlikely
        }
        return eax;
    loc_0x0804a724: // orphan
             // CODE XREF from sym.brk_call_all_cpus @ 0x804a784
             x0 = 0x804a000
             x0 = x0 + 0              // int64_t arg1
             x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x804a730 ()             // 0x804a730(0x804a000, 0x20, 0x0, 0x0)
             if w0 jmp 0x804a788      // likely

    loc_0x0804a784: // orphan
         jmp 0x804a724

    loc_0x0804a788: // orphan
         x0 = 0x804a000
         x0 = x0 + 0              // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         w2 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26
         0x804a79c ()             // 0x804a79c(0x804a000, 0x10, 0x0, 0x1)
         jmp 0x804a738

}

/* ===== 0x0802e574 ===== */
int sym.brk_destroy_entry (int esi, int edx) {
    loc_0x802e574:
        sp = sp - 0x90
        [sp, 0x40] = (x29,2)
        [var_50h] = x25
        [sp, 0x60] = (x24,2)
        [sp, 0x70] = (x22,2)
        [sp, 0x80] = (x20,2)
        x29 = var_40h
        w8 = [x0 + 0x790] // 0xc7 // 199 // arg1
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w8 == 1)  // x26 // x26
        b.lt 0x802e5d8 // likely
            
    loc_0x802e5d8:
        [x19 + 0x790] = wzr // arg1
        [x19 + 0x60] = wzr // arg1
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [sp, 0x10] = (xzr,2)
        [sp] = (xzr,2)
        x20 = [x19 + 0x798] // 0xda // 218
        x21 = x19 + 0x798
        if (x20 == x21) // x26 // x26
        b.eq 0x802e6b0 // unlikely
            
    loc_0x802e6b0:
        x0 = [x19 + 0x18] // 0xda // 218
        [x19 + 0x7a8] = wzr
        if !x0 jmp 0x802e6c4 // unlikely
            
    loc_0x802e6c4:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x802e6c8 ()  // 0x802e6c8(0x10, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        (x22, 2) = 3  // x19
        (x24, 2) = 3
        x25 = [var_50h] // 0x4
        (x29, 2) = 3  // x24 // x19
        sp = arg_90h
        // x19
         // } else {
    loc_0x802e6bc:
        0x802e6bc ()  // 0x802e6bc(0x0, 0x0, 0x0, 0x0)
        [x19 + 0x18] = xzr
         // } else {
         // } else {
        }
        return eax;
    loc_0x0802e5ac: // orphan
             // CODE XREF from sym.brk_destroy_entry @ 0x802e5d4
             x20 = x20 + 1
             if (x20 == w8)           // x26
             x21 = x21 + 0x38
             b.ge 0x802e5d8           // likely

    loc_0x0802e5bc: // orphan
         // CODE XREF from sym.brk_destroy_entry @ 0x802e5a8
         x0 = [x21]               // 0xdc // 220
         if !x0 jmp 0x802e5ac     // unlikely

    loc_0x0802e5c4: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802e5c8 ()             // 0x802e5c8(0x0, 0x0, 0x0, 0x0)
         [x21] = xzr
         w8 = [x19 + 0x790]       // 0xda // 218
         jmp 0x802e5ac

    loc_0x0802e614: // orphan
         // CODE XREF from sym.brk_destroy_entry @ 0x802e6ac
         x8 = x23 + 0x22
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         [x20] = (x23,2)
         0x802e620 ()             // 0x802e620(0x20, 0x0, 0x0, 0x0)
         if (x25 == x21)          // x26 // x26
         x20 = x25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.eq 0x802e6b0           // likely

    loc_0x0802e630: // orphan
         // CODE XREF from sym.brk_destroy_entry @ 0x802e610
         x0 = [x20 + 0x38]        // 0xdb // 219
         x25 = [x20]              // 0xdb // 219 // x24 // x24
         if !x0 jmp 0x802e694     // likely

    loc_0x0802e63c: // orphan
         if (w22 == 0)            // x26 // x26
         jmp ifle 0x802e678       // likely

    loc_0x0802e644: // orphan
         w8 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802e64c: // orphan
         x10 = [x9]               // 0xd0 // 208
         if (x10 == x0)           // x26
         b.eq 0x802e690           // unlikely

    loc_0x0802e658: // orphan
         x8 = x8 - 1
         x9 = var_0h_2
         b.ne 0x802e64c           // likely

    loc_0x0802e664: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802e668 ()             // 0x802e668(0x0, 0x0, 0x0, 0x0)
         if (w22 == 7)            // x26
         jmp ifle 0x802e680       // likely

    loc_0x0802e674: // orphan
         jmp 0x802e690

    loc_0x0802e678: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802e67c ()             // 0x802e67c(0x0, 0x0, 0x0, 0x0)

    loc_0x0802e680: // orphan
         x8 = [x20 + 0x38]        // 0xdb // 219
         w9 = w22 + 1             // x26
         [x24 + w22,sxtw 3] = x8
         w22 = w9                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26

    loc_0x0802e690: // orphan
         // CODE XREF from sym.brk_destroy_entry @ 0x802e674
         [x20 + 0x38] = xzr

    loc_0x0802e694: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802e698 ()             // 0x802e698(0x20, 0x0, 0x0, 0x0)
         tbz w0,0,0x802e614       // likely

    loc_0x0802e6a0: // orphan
         (x9, 2) = 3
         [x9 + 8] = x8
         [x8] = x9
         jmp 0x802e614

}

/* ===== 0x080494b8 ===== */
int sym.brk_disable_emulation (int esi, int edx) {
    loc_0x80494b8:
        sp = sp - 0x70
        [sp, 0x30] = (x29,2)
        [var_40h] = x23 // " "
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_30h
        if !x0 jmp 0x8049520 // likely
            
    loc_0x8049520:
        // CODE XREF from sym.brk_disable_emulation @ 0x8049634
        (x20, 2) = 3  // x24
        (x22, 2) = 3
        x23 = [var_40h] // x24
        (x29, 2) = 3
        sp = arg_70h
        0x08049534
         // } else {
    loc_0x80494d4:
        x22 = 0x8049000
        x22 = x22 + 0
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x20 = x30     // '\xff\xff\xff\xff\xff\xff\xff\xff' // "sB" lr
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x80494ec ()  // 0x80494ec(0x8049000, 0x0, 0x0, 0x0)
        w23 = (byte) [x19 + 0x7e1] // 0xda // 218
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w8 = 0x1      // x26
        x0 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        [x19 + 0x7e1] = (byte) w8
        [x19 + 0x7e0] = (byte) w8
        0x8049508 ()  // 0x8049508(0x8049000, 0x8049000, 0x0, 0x0)
        x1 = [x19 + 0x80] // 0xda // 218 // int64_t arg2
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        mrs x2,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8049518 ()  // 0x8049518(0x0, 0xffffffff00000003, 0x0, 0x0)
        if !w23 jmp 0x8049538 // unlikely
        }
        return eax;
    loc_0x8049538:
        x8 = [x19 + 0x798] // 0xda // 218
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x22 = x19 + 0x798
        if !x8 jmp 0x8049554 // unlikely
            
    loc_0x8049554:
        x9 = 0x8049000
        x9 = x9 + 0
        w1 = [x19 + 0x10] // 0xda // 218 // x24
        w3 = [x19 + 0x7a8] // 0xda // 218
        mrs x8,tpidr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w5 = [x8 + x9] // 0xd0000000cf // 893353197775
        x8 = 0x8049000
        x8 = x8 + 0
        if (x21 == 0) // x26 // x26
        x0 = 0x8049000
        csel x4,x8,x21, eq
        x0 = x0 + 0   // int64_t arg1
        0x8049584 ()  // 0x8049584(0x8049000, 0x0, 0x0, 0x0)
        x30 = x20     // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        hint 0x7
        x8 = [x19 + 0x798] // 0xda // 218
        x21 = x30     // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        x20 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x8 jmp 0x80495ac // unlikely
            
    loc_0x80495ac:
        if (x8 == x22) // x26
        b.eq 0x80495d0 // unlikely
            
    loc_0x80495d0:
        x23 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x80495d4:
        // CODE XREF from sym.brk_disable_emulation @ 0x80495cc
        x0 = 0x8049000
        x1 = 0x8049000
        x0 = x0 + 0   // int64_t arg1
        x1 = x1 + 0   // int64_t arg2
        0x80495e4 ()  // 0x80495e4(0x8049000, 0x8049000, 0x0, 0x0)
        if !w0 jmp 0x8049520 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8049548
    loc_0x8049550:
        x2 = [x8 + 0x18] // 0xcf // 207
    loc_0x080495a8: // orphan
             x20 = [x8 + 0x18]        // 0xcf // 207

    loc_0x080495b8: // orphan
         x9 = [x8 + 0x2560]       // 0xcf // 207
         x8 = [x8]                // 0xcf // 207
         x23 = x9 + x23
         if (x8 == x22)           // x26 // x26
         b.ne 0x80495b8           // likely

    loc_0x080495cc: // orphan
         jmp 0x80495d4

    loc_0x080495ec: // orphan
         w2 = [x19 + 0x10]        // 0xda // 218 // x24
         w4 = [x19 + 0x7a8]       // 0xda // 218
         w5 = (byte) [x19 + 0x7f0] // 0xda // 218
         w6 = (byte) [x19 + 0x7e0] // 0xda // 218
         w7 = (byte) [x19 + 0x7e1] // 0xda // 218
         w8 = [x19 + 0x7b4]       // 0xda // 218
         w9 = [x19 + 0x7bc]       // 0xda // 218
         w10 = [x19 + 0x7b8]      // 0xda // 218
         x0 = 0x8049000
         x1 = 0x8049000
         x0 = x0 + 0              // int64_t arg1
         x1 = x1 + 0              // int64_t arg2
         x3 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         [sp, 0x18] = (x23,2)
         [var_0h] = w10
         [var_0h_2] = w9
         [sp] = w8
         0x8049630 ()             // 0x8049630(0x8049000, 0x8049000, 0x0, 0x20)
         jmp 0x8049520

}

/* ===== 0x0802e1a0 ===== */
int sym.brk_install_debug_hook (int esi, int edx) {
    loc_0x802e1a0:
        [sp, -0x30]! = (x29,2) // " "
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x802e000
        w8 = (byte) [x20] // 0xdb // 219
        tbz w8,0,0x802e1c4 // unlikely
            
    loc_0x802e1c4:
        x21 = 0x802e000
        x8 = [x21]    // 0xdc // 220
        if !x8 jmp 0x802e21c // unlikely
            
    loc_0x802e21c:
        w0 = ~0x5
         // do {
    loc_0x802e220:
        // CODE XREFS from sym.brk_install_debug_hook @ 0x802e1c0, 0x802e218
        (x20, 2) = 3
        x21 = [var_10h] // 0x4
        (x29, 2) = 3
        0x0802e22c
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08049950 ===== */
int sym.brk_mark_clone_cpu (int esi, int edx) {
    loc_0x8049950:
        if !x0 jmp 0x8049a70 // likely
            
    loc_0x8049a70:
        // lr
         // } else {
    loc_0x8049954:
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8049000
        x9 = x9 + 0
        mrs x8,tpidr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w22 = [x8 + x9] // 0xd0000000cf // 893353197775
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8049000
        x0 = x0 + 0   // int64_t arg1
        w19 = w1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x8049984 ()  // 0x8049984(0x8049000, 0x0, 0x0, 0x0)
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        tbz w19,0,0x80499cc // likely
        }
        return eax;
    loc_0x8049990:
        x9 = 0x8049000
        x9 = x9 + 0
        x11 = [x9]    // 0xd0 // 208
        w8 = 0x1      // x26
        x10 = x22 >> 6
        x8 = x8 << x22
        if (x11 == x9) // x26
        b.ne 0x8049ab4 // likely
            
    loc_0x8049ab4:
        if (x11 == x20) // x26
        b.eq 0x8049aa8 // unlikely
    loc_0x8049aa8:
        // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049b2c
        x11 = [x11]   // 0xd2 // 210
        if (x11 == x9) // x26
        b.eq 0x80499b0 // unlikely
         // }
        }
        return eax;
    loc_0x080499cc: // orphan
             x8 = x22 >> 3
             x8 = x8 & 0x1ffffff8
             w10 = 0x1                // x26
             x8 = x20 + x8            // x24
             x9 = x8 + 0x7d8
             x8 = x10 << x22          // x26
             jmp 0x8049b00

    loc_0x080499f4: // orphan
         // CODE XREFS from sym.brk_mark_clone_cpu @ 0x8049afc, 0x8049b04
         w9 = w22 + 0x3f
         if (w22 == 0)            // x26 // x26
         csel w9,w9,w22, lt
         w9 = w9 >> 6
         x9 = x20 + w9,sxtw 3     // x24
         x9 = [x9 + 0x7e8]        // 0xd0 // 208
         if ((x9 & x8) == 0)      // x26 // x26
         cset w9,eq
         w9 = w9 ^ w19            // x19
         tbnz w9,0,0x8049a54      // unlikely

    loc_0x08049a1c: // orphan
         ubfx x9,x22,6, 0x1a      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x20 + w9,uxtw 3     // x24
         x9 = x9 + 0x7e8
         tbz w19,0,0x8049a3c      // likely

    loc_0x08049a2c: // orphan
         jmp 0x8049b08

    loc_0x08049a3c: // orphan
         jmp 0x8049b10

    loc_0x08049a48: // orphan
         // CODE XREFS from sym.brk_mark_clone_cpu @ 0x8049b0c, 0x8049b14
         x8 = 0x8049000
         w8 = [x8]                // 0xcf // 207
         if w8 jmp 0x8049a74      // likely

    loc_0x08049a54: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049aa0
         x0 = 0x8049000
         x0 = x0 + 0              // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x8049a60 ()             // 0x8049a60(0x8049000, 0x0, 0x0, 0x0)
         (x20, 2) = 3
         (x22, 2) = 3             // x24
         (x29, 2) = 3

    loc_0x08049a74: // orphan
         w3 = [x20 + 0x10]        // 0xdb // 219
         x8 = 0x8049000
         x9 = 0x8049000
         x8 = x8 + 0
         x9 = x9 + 0
         if ((w19 & 1) == 0)      // x26
         x0 = 0x8049000
         csel x2,x9,x8, ne
         x0 = x0 + 0              // int64_t arg1
         w1 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8049a9c ()             // 0x8049a9c(0x8049000, 0x0, 0x8049000, 0x0)
         jmp 0x8049a54

    loc_0x08049aa4: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049adc
         jmp 0x8049b18

    loc_0x08049abc: // orphan
         x12 = x11 + x10,lsl 3
         x12 = x12 + 0x7d8
         jmp 0x8049af0

    loc_0x08049ad4: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049af4
         x12 = x11 + x10,lsl 3
         x12 = x12 + 0x7e8
         jmp 0x8049aa4

    loc_0x08049af0: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049ac4
         jmp 0x8049b30

    loc_0x08049af4: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049b44
         jmp 0x8049ad4

    loc_0x08049af8: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x80499b8
         jmp 0x8049b48

    loc_0x08049afc: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049b5c
         jmp 0x80499f4

    loc_0x08049b00: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x80499e4
         jmp 0x8049b60

    loc_0x08049b04: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049b74
         jmp 0x80499f4

    loc_0x08049b08: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049a2c
         jmp 0x8049b78

    loc_0x08049b0c: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049b8c
         jmp 0x8049a48

    loc_0x08049b10: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049a3c
         jmp 0x8049b90

    loc_0x08049b14: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049ba4
         jmp 0x8049a48

    loc_0x08049b18: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049aa4
         prfm pstl1strm,[x12]

    loc_0x08049b1c: // orphan
         ldxr x13,[x12]
         bic x13,x13,x8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w14,x13,[x12]
         if w14 jmp 0x8049b1c     // unlikely

    loc_0x08049b2c: // orphan
         jmp 0x8049aa8

    loc_0x08049b30: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049af0
         prfm pstl1strm,[x12]

    loc_0x08049b34: // orphan
         ldxr x13,[x12]
         bic x13,x13,x8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w14,x13,[x12]
         if w14 jmp 0x8049b34     // unlikely

    loc_0x08049b44: // orphan
         jmp 0x8049af4

    loc_0x08049b48: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049af8
         prfm pstl1strm,[x9]

    loc_0x08049b4c: // orphan
         ldxr x10,[x9]
         x10 = x10 | x8
         stxr w11,x10,[x9]
         if w11 jmp 0x8049b4c     // unlikely

    loc_0x08049b5c: // orphan
         jmp 0x8049afc

    loc_0x08049b60: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049b00
         prfm pstl1strm,[x9]

    loc_0x08049b64: // orphan
         ldxr x10,[x9]
         bic x10,x10,x8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w11,x10,[x9]
         if w11 jmp 0x8049b64     // unlikely

    loc_0x08049b74: // orphan
         jmp 0x8049b04

    loc_0x08049b78: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049b08
         prfm pstl1strm,[x9]

    loc_0x08049b7c: // orphan
         ldxr x10,[x9]
         x10 = x10 | x8
         stxr w11,x10,[x9]
         if w11 jmp 0x8049b7c     // unlikely

    loc_0x08049b8c: // orphan
         jmp 0x8049b0c

    loc_0x08049b90: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8049b10
         prfm pstl1strm,[x9]

    loc_0x08049b94: // orphan
         ldxr x10,[x9]
         bic x10,x10,x8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w11,x10,[x9]
         if w11 jmp 0x8049b94     // unlikely

    loc_0x08049ba4: // orphan
         jmp 0x8049b14

}

/* ===== 0x0802e230 ===== */
int sym.brk_quiesce_entry (int esi, int edx) {
    loc_0x802e230:
        sp = sp - 0x60
        [sp, 0x30] = (x29,2)
        [var_40h] = x21
        [sp, 0x50] = (x20,2)
        x29 = var_30h
        x20 = 0x802e000
        x20 = x20 + 0
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x802e254 ()  // 0x802e254(0x802e000, 0x0, 0x0, 0x0)
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
        w8 = 0x1      // x26
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        [x19 + 0x7f0] = (byte) wzr
        [x19 + 0x7e0] = (byte) w8
        0x802e26c ()  // 0x802e26c(0x802e000, 0x802e000, 0x0, 0x0)
        if !x19 jmp 0x802e310 // likely
            
    loc_0x802e310:
        if !x19 jmp 0x802e3d4 // unlikely
            
    loc_0x802e3d4:
        w21 = 0x1     // x26
        w8 = [x19 + 0x7b4] // 0xda // 218
        if !w8 jmp 0x802e3a4 // unlikely
            
    loc_0x802e3a4:
        w8 = [x19 + 0x7b8] // 0xda // 218
        if w8 jmp 0x802e3e0 // likely
    loc_0x802e3ac:
        w8 = [x19 + 0x7bc] // 0xda // 218
        if w8 jmp 0x802e3e0 // likely
    loc_0x802e3b4:
        tbnz w21,0,0x802e3c0 // unlikely
            
    loc_0x802e3c0:
        // CODE XREF from sym.brk_quiesce_entry @ 0x802e43c
        (x20, 2) = 3
        x21 = [var_40h] // x24
        (x29, 2) = 3
        sp = arg_60h
        0x0802e3d0
         // } else {
    loc_0x802e3b8:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x802e3bc ()  // 0x802e3bc(0x10, 0x0, 0x0, 0x0)
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x802e274
    loc_0x802e280:
        x8 = [x19 + 0x18] // 0xda // 218
        if !x8 jmp 0x802e314 // unlikely
    loc_0x802e288:
        w9 = [x19 + 0x790] // 0xda // 218
        if (w9 == 1)  // x26
        b.lt 0x802e314 // likely
    loc_0x802e294:
        x0 = x8 + 0x68 // int64_t arg1
        0x802e298 ()  // 0x802e298(0x72a9c6290000006a, 0x0, 0x0, 0x0)
        x8 = [x19 + 0x798] // 0xda // 218
        x1 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = x19 + 0x798
        if !x8 jmp 0x802e2b8 // unlikely
            
    loc_0x802e2b8:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x802e2bc ()  // 0x802e2bc(0x10, 0x0, 0x0, 0x0)
        x8 = [x19 + 0x18] // 0xda // 218
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        x0 = x8 + 0x68 // int64_t arg1
        0x802e2cc ()  // 0x802e2cc(0xaa, 0x0, 0x0, 0x0)
        x8 = 0x802e000
        w8 = [x8]     // 0xcf // 207
        if !w8 jmp 0x802e314 // unlikely
    loc_0x802e2dc:
        w1 = [x19 + 0x10] // 0xda // 218 // x24 // x26
        x8 = [x19 + 0x798] // 0xda // 218
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x8 jmp 0x802e2f8 // unlikely
            
    loc_0x802e2f8:
        w3 = [x19 + 0x7a8] // 0xda // 218
        x0 = 0x802e000
        x0 = x0 + 0   // int64_t arg1
        w4 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        0x802e308 ()  // 0x802e308(0x802e000, 0x0, 0x0, 0x0)
        jmp 0x802e314
    loc_0x0802e2ac: // orphan
             if (x21 == x8)           // x26
             b.eq 0x802e2b8           // unlikely

    loc_0x0802e2b4: // orphan
         x1 = [x8 + 0x18]         // 0xcf // 207

    loc_0x0802e2ec: // orphan
         if (x21 == x8)           // x26
         b.eq 0x802e2f8           // unlikely

    loc_0x0802e2f4: // orphan
         x2 = [x8 + 0x18]         // 0xcf // 207

    loc_0x0802e348: // orphan
         x0 = var_8h              // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x20] = (xzr,2)
         [sp, 0x10] = (xzr,2)
         [var_8h] = xzr
         0x802e35c ()             // 0x802e35c(0x178008, 0x0, 0x0, 0x0)
         x20 = x19 + 0x7c0

    loc_0x0802e364: // orphan
         // CODE XREF from sym.brk_quiesce_entry @ 0x802e380
         x1 = var_8h              // int64_t arg_60h
         w2 = 0x2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802e370 ()             // 0x802e370(0x20, 0x178008, 0x2, 0x0)
         w8 = [x19 + 0x7b8]       // 0xda // 218
         if !w8 jmp 0x802e384     // unlikely

    loc_0x0802e37c: // orphan
         0x802e37c ()             // 0x802e37c(0x0, 0x0, 0x0, 0x0)
         jmp 0x802e364

    loc_0x0802e384: // orphan
         x1 = var_8h              // int64_t arg_60h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802e38c ()             // 0x802e38c(0x20, 0x178008, 0x0, 0x0)

    loc_0x0802e390: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802e394 ()             // 0x802e394(0x10, 0x0, 0x0, 0x0)
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = [x19 + 0x7b4]       // 0xda // 218
         if w8 jmp 0x802e3e0      // likely

    loc_0x0802e400: // orphan
         0x802e400 ()             // 0x802e400(0x0, 0x0, 0x0, 0x0)

    loc_0x0802e404: // orphan
         // CODE XREF from sym.brk_quiesce_entry @ 0x802e3fc
         x1 = var_8h              // int64_t arg_60h
         w2 = 0x2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802e410 ()             // 0x802e410(0x20, 0x178008, 0x2, 0x0)
         w8 = [x19 + 0x7b4]       // 0xda // 218
         if w8 jmp 0x802e400      // likely

    loc_0x0802e41c: // orphan
         w8 = [x19 + 0x7b8]       // 0xda // 218
         if w8 jmp 0x802e400      // likely

    loc_0x0802e424: // orphan
         w8 = [x19 + 0x7bc]       // 0xda // 218
         if w8 jmp 0x802e400      // likely

    loc_0x0802e42c: // orphan
         x1 = var_8h              // int64_t arg_60h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802e434 ()             // 0x802e434(0x20, 0x178008, 0x0, 0x0)
         tbz w21,0,0x802e3b8      // likely

    loc_0x0802e43c: // orphan
         jmp 0x802e3c0

}

/* ===== 0x08049c4c ===== */
int sym.brk_switch_to_handle (int esi, int edx) {
    loc_0x8049c4c:
        sp = sp - 0xe0
        [sp, 0x80] = (x29,2)
        [sp, 0x90] = (x28,2)
        [sp, 0xa0] = (x26,2)
        [sp, 0xb0] = (x24,2)
        [sp, 0xc0] = (x22,2)
        [sp, 0xd0] = (x20,2)
        x29 = var_80h
        if !x0 jmp 0x804a2a4 // likely
            
    loc_0x804a2a4:
        // CODE XREF from sym.brk_switch_to_handle @ 0x804a1d4
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_e0h
        0x0804a2c0
         // } else {
    loc_0x8049c70:
        x9 = 0x8049000
        x9 = x9 + 0
        x20 = [x0 + 0x4d8] // 0xc7 // 199 // arg1
        mrs x8,tpidr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w22 = [x8 + x9] // 0xd0000000cf // 893353197775
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8049000
        x0 = x0 + 0   // int64_t arg1
        x27 = x30     // '\xff\xff\xff\xff\xff\xff\xff\xff' // "sB" lr
        0x8049c94 ()  // 0x8049c94(0x8049000, 0x0, 0x0, 0x0)
        x8 = 0x8049000
        x8 = x8 + 0
        x21 = [x8]    // 0xcf // 207
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x21 == x8) // x26
        b.eq 0x8049d1c // unlikely
        }
        return eax;
    loc_0x8049cb0:
        x26 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x8049cd4
         // do {
    loc_0x8049cd4:
        // CODE XREF from sym.brk_switch_to_handle @ 0x8049cb8
        w10 = (byte) [x9 + 0x7f0] // 0xd0 // 208
        if !w10 jmp 0x8049cf4 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x8049cdc:
        w10 = (byte) [x9 + 0x7e0] // 0xd0 // 208
        if !x20 jmp 0x8049cf4 // unlikely
            
    loc_0x8049cf4:
        if !x20 jmp 0x8049cc8 // unlikely
    loc_0x8049cc8:
        // CODE XREF from sym.brk_switch_to_handle @ 0x8049d08
        x9 = [x9]     // 0xd0 // 208
        if (x9 == x8) // x26
        b.eq 0x8049d0c // unlikely
            
    loc_0x8049d0c:
        w23 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x21 == x8) // x26
        b.ne 0x8049d2c // likely
            
    loc_0x8049d2c:
        w9 = w22 + 0x3f
        if (w22 == 0) // x26 // x26
        w10 = 0x1     // x26
        csel w9,w9,w22, lt
        sbfx x9,x9,6, 0x1a // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = x10 << x22 // x26
         // do {
    loc_0x8049d44:
        x11 = x21 + x9,lsl 3
        x11 = [x11 + 0x7d8] // 0xd2 // 210
        if ((x11 & x10) == 0) // x26 // x26
        b.ne 0x8049d6c // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8049ce4
    loc_0x8049ce8:
        x10 = [x9 + 0x18] // 0xd0 // 208
        if (x10 == x20) // x26 // x26
        b.eq 0x8049e08 // unlikely
            
    loc_0x8049e08:
        x10 = x9 + 0x7b8
        jmp 0x804a314
         // do {
    loc_0x804a314:
        // CODE XREF from sym.brk_switch_to_handle @ 0x8049e0c
        jmp 0x804a370
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8049cf4
    loc_0x8049cf8:
        if x26 jmp 0x8049cc8 // likely
    loc_0x8049cfc:
        w10 = (byte) [x9 + 0x7f0] // 0xd0 // 208
        if w10 jmp 0x8049cbc // likely
            
    loc_0x8049cbc:
        x10 = [x9 + 0x18] // 0xd0 // 208
        if (x10 == x20) // x26 // x26
        csel x26,x9,xzr, eq
    loc_0x08049d04: // orphan
             x26 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             jmp 0x8049cc8

    loc_0x08049d1c: // orphan
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x26 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x21 == x8)           // x26
         b.eq 0x8049d60           // unlikely

    loc_0x08049d54: // orphan
         x21 = [x21]              // 0xdc // 220
         if (x21 == x8)           // x26
         b.ne 0x8049d44           // likely

    loc_0x08049d60: // orphan
         // CODE XREFS from sym.brk_switch_to_handle @ 0x8049d18, 0x804a330
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8049d84

    loc_0x08049d6c: // orphan
         x9 = x21 + 0x7b8
         jmp 0x804a30c

    loc_0x08049d80: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a310
         w24 = 0x1                // x26

    loc_0x08049d84: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x8049d68
         if (x20 == 0)            // x26
         cset w11,ne              // x26
         if !x20 jmp 0x8049dd4    // unlikely

    loc_0x08049d90: // orphan
         if x21 jmp 0x8049dd4     // unlikely

    loc_0x08049d94: // orphan
         x21 = [x8]               // 0xcf // 207
         jmp 0x8049da0

    loc_0x08049d9c: // orphan
         x21 = [x21]              // 0xdc // 220

    loc_0x08049da0: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x8049d98
         if (x21 == x8)           // x26
         b.eq 0x8049e00           // unlikely

    loc_0x08049da8: // orphan
         w9 = (byte) [x21 + 0x7f0] // 0xdc // 220 // x26
         if !w9 jmp 0x8049d9c     // unlikely

    loc_0x08049db0: // orphan
         x9 = [x21 + 0x18]        // 0xdc // 220
         if (x9 == x20)           // x26 // x26
         b.ne 0x8049d9c           // likely

    loc_0x08049dbc: // orphan
         x8 = x21 + 0x7b8
         jmp 0x804a334

    loc_0x08049dd0: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a338
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08049dd4: // orphan
         if (x21 == 0)            // x26 // x26
         w28 = w24 ^ 1
         cset w25,ne
         [x29 = w11
         tbnz w28,0,0x8049e40     // likely

    loc_0x08049de8: // orphan
         if !x21 jmp 0x8049e40    // likely

    loc_0x08049dec: // orphan
         x8 = [x21 + 0x18]        // 0xdc // 220
         if (x8 == x20)           // x26 // x26
         b.eq 0x8049f78           // unlikely

    loc_0x08049df8: // orphan
         w28 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8049e40

    loc_0x08049e00: // orphan
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8049e28

    loc_0x08049e20: // orphan
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w23 = 0x1                // x26

    loc_0x08049e28: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x8049e04
         if (x9 == 0)             // x26
         w8 = 0x1                 // x26
         w28 = w24 ^ 1
         cset w25,ne              // x26
         [x29 = w8
         x21 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08049e40: // orphan
         // CODE XREFS from sym.brk_switch_to_handle @ 0x8049dfc, 0x8049f94
         x0 = 0x8049000
         x0 = x0 + 0              // int64_t arg1
         0x8049e48 ()             // 0x8049e48(0x8049000, 0x0, 0x0, 0x0)
         x12 = 0x8049000
         if !w25 jmp 0x8049e5c    // likely

    loc_0x08049e54: // orphan
         w8 = [x12]               // 0xd3 // 211
         if w8 jmp 0x8049fbc      // unlikely

    loc_0x08049e5c: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a2f8
         if !x26 jmp 0x8049ef4    // unlikely

    loc_0x08049e60: // orphan
         if x21 jmp 0x8049ef4     // unlikely

    loc_0x08049e64: // orphan
         x8 = 0x8049000
         x9 = 0x8049000
         x10 = [x8]               // 0xcf // 207
         x11 = [x9]               // 0xd0 // 208
         if (x10 == x11)          // x26 // x26
         b.pl 0x8049ef4           // likely

    loc_0x08049e7c: // orphan
         x9 = [x9]                // 0xd0 // 208
         x30 = x27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 + 0x4e2
         [x8] = x9
         hint 0x7
         [x29 = x30
         x8 = [x26 + 0x798]       // 0xe1 // 225
         x9 = x26 + 0x798
         if !x8 jmp 0x8049eb0     // unlikely

    loc_0x08049ea4: // orphan
         if (x9 == x8)            // x26
         b.eq 0x8049eb0           // unlikely

    loc_0x08049eac: // orphan
         x10 = [x8 + 0x18]        // 0xcf // 207

    loc_0x08049eb0: // orphan
         if (x8 == x9)            // x26
         x24 = x12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x29 = x10               // " "
         b.eq 0x8049ed8           // unlikely

    loc_0x08049ec4: // orphan
         x10 = [x8 + 0x2560]      // 0xcf // 207
         x8 = [x8]                // 0xcf // 207
         x27 = x10 + x27
         if (x8 == x9)            // x26
         b.ne 0x8049ec4           // likely

    loc_0x08049ed8: // orphan
         x0 = 0x8049000
         x1 = 0x8049000
         x0 = x0 + 0              // int64_t arg1
         x1 = x1 + 0              // int64_t arg_e0h
         0x8049ee8 ()             // 0x8049ee8(0x8049000, 0x8049000, 0x0, 0x0)
         x12 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x804a17c      // likely

    loc_0x08049ef4: // orphan
         if !w25 jmp 0x804a2a4    // likely

    loc_0x08049ef8: // orphan
         x8 = 0x8049000
         w8 = (byte) [x8]         // 0xcf // 207
         w8 = w23 & w8
         if (w8 == 1)             // x26
         b.ne 0x8049fa0           // likely

    loc_0x08049f0c: // orphan
         x8 = [x21 + 0x798]       // 0xdc // 220
         x24 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x26 = x12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x8 jmp 0x8049f2c     // unlikely

    loc_0x08049f1c: // orphan
         x9 = x21 + 0x798
         if (x9 == x8)            // x26
         b.eq 0x8049f2c           // unlikely

    loc_0x08049f28: // orphan
         x24 = [x8 + 0x18]        // 0xcf // 207

    loc_0x08049f2c: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_e0h
         0x8049f34 ()             // 0x8049f34(0x0, 0x20, 0x0, 0x0)
         if !w0 jmp 0x8049f98     // likely

    loc_0x08049f3c: // orphan
         w25 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x8049000
         x1 = 0x8049000
         x0 = x0 + 0              // int64_t arg1
         x1 = x1 + 0              // int64_t arg_e0h
         0x8049f50 ()             // 0x8049f50(0x8049000, 0x8049000, 0x0, 0x0)
         if !w0 jmp 0x804a1f8     // unlikely

    loc_0x08049f58: // orphan
         w1 = [x21 + 0x10]        // 0xdc // 220 // x19
         w3 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = 0x8049000
         x0 = x0 + 0              // int64_t arg1
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w4 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8049f70 ()             // 0x8049f70(0x8049000, 0x200000, 0x20, -1)
         jmp 0x804a1f8

    loc_0x08049f78: // orphan
         w8 = (byte) [x21 + 0x7f0] // 0xdc // 220 // x26
         if !w8 jmp 0x8049df8     // unlikely

    loc_0x08049f80: // orphan
         w8 = (byte) [x21 + 0x7e0] // 0xdc // 220 // x26
         w28 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == 0)             // x26
         cset w8,ne               // x26
         w23 = w23 & w8
         jmp 0x8049e40

    loc_0x08049f98: // orphan
         w8 = [x26]               // 0xe1 // 225
         if w8 jmp 0x804a1d8      // likely

    loc_0x08049fa0: // orphan
         if !w23 jmp 0x804a1f8    // unlikely

    loc_0x08049fa4: // orphan
         x9 = 0x8049000
         x8 = [x21 + 0x20]        // 0xdc // 220 // x24 // x26
         x9 = [x9]                // 0xd0 // 208
         x8 = x8 - x9
         x1 = x8 << 6
         jmp 0x804a264

    loc_0x08049fbc: // orphan
         [x29 = x27
         x8 = [x21 + 0x798]       // 0xdc // 220
         x27 = x21 + 0x798
         x5 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x27 == x8)
         csel x8,xzr,x8, eq
         [x29 = x8
         if !x8 jmp 0x8049fe4     // unlikely

    loc_0x08049fdc: // orphan
         ldur x8,[x29,-0x10]
         x5 = [x8 + 0x18]         // 0xcf // 207

    loc_0x08049fe4: // orphan
         x10 = 0x8049000
         mrs x8,ttbr0_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = [x21 + 0x20]       // 0xdc // 220 // x24 // x26
         x14 = [x10]              // 0xd1 // 209
         w2 = [x19 + 0x588]       // 0xda // 218
         w4 = [x21 + 0x10]        // 0xdc // 220 // x19
         w6 = [x21 + 0x7a8]       // 0xdc // 220
         // XREFS(75)
         w10 = (byte) [x21 + 0x7f0] // 0xdc // 220 // x26
         w11 = (byte) [x21 + 0x7e0] // 0xdc // 220 // x26
         w12 = (byte) [x21 + 0x7e1] // 0xdc // 220 // x26
         x14 = x13 - x14
         x14 = x14 << 6
         if (x13 == 0)            // x26
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x16,xzr,x14, eq
         if !x21 jmp 0x804a034    // likely

    loc_0x0804a024: // orphan
         if !x13 jmp 0x804a034    // likely

    loc_0x0804a028: // orphan
         x9 = x14 ^ x8
         if ((x9 & 0xfffffffff000) == 0) // x26
         cset w9,eq

    loc_0x0804a034: // orphan
         x13 = 0x804a000
         w13 = [x13]              // 0xd4 // 212
         x0 = 0x804a000
         x14 = x21 + 0x7d8
         x15 = x21 + 0x7e8
         x0 = x0 + 0              // int64_t arg1
         w1 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         w7 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         [var_0h_4] = x15
         [var_0h_5] = w13         // tmp
         [var_0h_6] = x14         // " "
         [var_0h_7] = w13
         [x29 = x16
         [var_0h_8] = x16
         [var_0h_9] = w9
         [var_0h_10] = x8
         [var_sp_18h] = w12
         [var_0h] = w11
         [var_0h_2] = w10
         [sp] = w24
         0x804a088 ()             // 0x804a088(0x804a000, 0x0, 0x0, 0x20)
         ldur x8,[x29,-0x10]
         if !x8 jmp 0x804a124     // unlikely

    loc_0x0804a094: // orphan
         x24 = [x27]              // 0xe2 // 226
         jmp 0x804a0d0

    loc_0x0804a09c: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a120
         w1 = [x21 + 0x10]        // 0xdc // 220 // x19
         x2 = [x24 + 0x18]        // 0xdf // 223
         w7 = [x21 + 0x7b4]       // 0xdc // 220
         w8 = [x21 + 0x7b8]       // 0xdc // 220
         w9 = [x21 + 0x7bc]       // 0xdc // 220
         x10 = x3 & 0x10000000000000
         x0 = 0x804a000
         x6 = x10 >> 0x34
         x0 = x0 + 0              // int64_t arg1
         [var_0h_2] = w9
         [sp] = w8                // " "
         0x804a0c8 ()             // 0x804a0c8(0x804a000, 0x200000, 0x0, 0x0)

    loc_0x0804a0cc: // orphan
         x24 = [x24]              // 0xdf // 223 // x26

    loc_0x0804a0d0: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a098
         if (x24 == x27)          // x26
         b.eq 0x804a124           // unlikely

    loc_0x0804a0d8: // orphan
         x8 = [x24 + 0x58]        // 0xdf // 223
         if !x8 jmp 0x804a0ec     // unlikely

    loc_0x0804a0e0: // orphan
         x9 = [x24 + 0x28]        // 0xdf // 223
         x3 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         jmp 0x804a108

    loc_0x0804a0ec: // orphan
         w8 = [x21 + 0x60]        // 0xdc // 220
         w8 = w8 - 1              // x26
         b.lt 0x804a104           // likely

    loc_0x0804a0f8: // orphan
         x8 = x21 + w8,uxtw 3     // x19
         x8 = [x8 + 0x40]         // 0xcf // 207
         if x8 jmp 0x804a0e0      // unlikely

    loc_0x0804a104: // orphan
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0804a108: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a0e8
         x5 = [x24 + 0x48]        // 0xdf // 223
         x4 = x5 & 0xfffffffff000
         tbnz x3,0x34,0x804a09c   // unlikely

    loc_0x0804a114: // orphan
         x8 = x3 & 0xfffffffff000
         if (x8 == x4)            // x26 // x26
         b.eq 0x804a0cc           // likely

    loc_0x0804a120: // orphan
         jmp 0x804a09c

    loc_0x0804a124: // orphan
         x12 = 0x804a000
         w8 = [x12]               // 0xd3 // 211
         ldur x27,[x29,-0x18]
         if (w8 == 2)             // x26
         b.lt 0x8049e5c           // unlikely

    loc_0x0804a138: // orphan
         x8 = [x21 + 0x18]        // 0xdc // 220
         if !x8 jmp 0x8049e5c     // unlikely

    loc_0x0804a140: // orphan
         ldur x9,[x29,-0x10]
         if !x9 jmp 0x8049e5c     // unlikely

    loc_0x0804a148: // orphan
         w9 = [x21 + 0x60]        // 0xdc // 220
         if (w9 == 1)             // x26
         b.lt 0x8049e5c           // unlikely

    loc_0x0804a154: // orphan
         ldur x9,[x29,-0x10]
         x10 = [x8 + 0x40]        // 0xcf // 207
         x8 = [x21 + 0x40]        // 0xdc // 220
         x9 = [x9 + 0x18]         // 0xd0 // 208
         ubfx x9,x9,0x1e, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = [x10 + x9,lsl 3]    // 0xd0000000d1 // 893353197777
         if !x8 jmp 0x804a2c4     // likely

    loc_0x0804a170: // orphan
         x9 = [x21 + 0x68]        // 0xdc // 220
         x3 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         jmp 0x804a2c8

    loc_0x0804a17c: // orphan
         w2 = [x26 + 0x10]        // 0xe1 // 225
         w4 = [x26 + 0x7a8]       // 0xe1 // 225
         w5 = (byte) [x26 + 0x7f0] // 0xe1 // 225
         w6 = (byte) [x26 + 0x7e0] // 0xe1 // 225
         w7 = (byte) [x26 + 0x7e1] // 0xe1 // 225
         w8 = [x26 + 0x7b4]       // 0xe1 // 225
         w9 = [x26 + 0x7bc]       // 0xe1 // 225
         w10 = [x26 + 0x7b8]      // 0xe1 // 225
         ldur x11,[x29,-0x18]
         ldur x3,[x29,-0x10]
         x0 = 0x804a000
         x1 = 0x804a000
         x0 = x0 + 0              // int64_t arg1
         x1 = x1 + 0              // int64_t arg_e0h
         x24 = x12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x18] = (x27,2)
         [var_0h] = w10
         [var_0h_2] = w9
         [sp] = w8
         0x804a1c8 ()             // 0x804a1c8(0x804a000, 0x804a000, 0x2000, -1)
         x12 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w25 jmp 0x8049ef8     // unlikely

    loc_0x0804a1d4: // orphan
         jmp 0x804a2a4

    loc_0x0804a1d8: // orphan
         w1 = [x21 + 0x10]        // 0xdc // 220 // x19
         w3 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = 0x804a000
         x0 = x0 + 0              // int64_t arg1
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w4 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x804a1f0 ()             // 0x804a1f0(0x804a000, 0x200000, 0x20, -1)
         if w23 jmp 0x8049fa4     // likely

    loc_0x0804a1f8: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x8049f74
         ldur w8,[x29,-4]         // x26
         tbnz w8,0,0x804a210      // likely

    loc_0x0804a200: // orphan
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = [x8 + 0x4d8]       // 0xcf // 207
         if x20 jmp 0x804a214     // likely

    loc_0x0804a20c: // orphan
         x20 = [x8 + 0x4e0]       // 0xcf // 207

    loc_0x0804a210: // orphan
         if !x20 jmp 0x804a248    // unlikely

    loc_0x0804a214: // orphan
         x9 = 0x804a000
         x9 = [x9]                // 0xd0 // 208
         x8 = [x20 + 0x40]        // 0xdb // 219
         x10 = 0x804a000
         x11 = 0x804a000
         x10 = [x10]              // 0xd1 // 209
         x11 = [x11]              // 0xd2 // 210
         x9 = x9 - 1
         x9 = x8 >> x9
         if ((x9 & 1) == 0)       // x26
         csneg x9,x10,x11, eq
         x1 = x9 + x8
         jmp 0x804a24c

    loc_0x0804a248: // orphan
         x1 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0804a24c: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a244
         if (x1 == 0)             // x26 // x26
         cset w8,ne
         w8 = w28 | w8
         tbnz w8,0,0x804a260      // unlikely

    loc_0x0804a25c: // orphan
         x1 = [x21 + 0x80]        // 0xdc // 220

    loc_0x0804a260: // orphan
         if !x1 jmp 0x804a270     // likely

    loc_0x0804a264: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x8049fb8
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x804a26c ()             // 0x804a26c(0x0, 0x0, 0x10, 0x0)

    loc_0x0804a270: // orphan
         x8 = x21 + 0x7b8
         jmp 0x804a2fc

    loc_0x0804a290: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a308
         x0 = x21 + 0x7c0         // int64_t arg1
         w1 = 0x3
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x804a2a0 ()             // 0x804a2a0(0x7c0, 0x3, 0x0, 0x0)

    loc_0x0804a2c4: // orphan
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0804a2c8: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a178
         ldur x8,[x29,-0x20]
         x4 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 >> 0xc
         bfi x4,x8,0xc, 0x24      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x3 == x4)            // x26 // x26
         b.eq 0x8049e5c           // likely

    loc_0x0804a2e0: // orphan
         w1 = [x21 + 0x10]        // 0xdc // 220 // x19
         x5 = [x21 + 0x68]        // 0xdc // 220
         x0 = 0x804a000
         x0 = x0 + 0              // int64_t arg1
         0x804a2f0 ()             // 0x804a2f0(0x804a000, 0x200000, 0x0, 0x0)
         x12 = 0x804a000
         jmp 0x8049e5c

    loc_0x0804a2fc: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a274
         w10 = 0x1                // x26
         jmp 0x804a33c

    loc_0x0804a304: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a354
         if w9 jmp 0x804a2a4      // likely

    loc_0x0804a308: // orphan
         jmp 0x804a290

    loc_0x0804a30c: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x8049d70
         jmp 0x804a358

    loc_0x0804a310: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a36c
         jmp 0x8049d80

    loc_0x0804a318: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a384
         if x9 jmp 0x8049e20      // likely

    loc_0x0804a31c: // orphan
         x9 = 0x804a000
         x21 = [x9]               // 0xd0 // 208
         w23 = 0x1                // x26
         if (x21 == x8)           // x26
         b.ne 0x8049d2c           // likely

    loc_0x0804a330: // orphan
         jmp 0x8049d60

    loc_0x0804a334: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x8049dc0
         jmp 0x804a388

    loc_0x0804a338: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a39c
         jmp 0x8049dd0

    loc_0x0804a33c: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a300
         prfm pstl1strm,[x8]

    loc_0x0804a340: // orphan
         ldxr w9,[x8]
         w9 = w9 - w10
         stlxr w11,w9,[x8]
         if w11 jmp 0x804a340     // unlikely

    loc_0x0804a350: // orphan
         dmb ish
         jmp 0x804a304

    loc_0x0804a358: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a30c
         prfm pstl1strm,[x9]

    loc_0x0804a35c: // orphan
         ldxr w10,[x9]
         w10 = w10 + 1
         stxr w11,w10,[x9]
         if w11 jmp 0x804a35c     // unlikely

    loc_0x0804a36c: // orphan
         jmp 0x804a310

    loc_0x0804a370: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a314
         prfm pstl1strm,[x10]

    loc_0x0804a374: // orphan
         ldxr w11,[x10]
         w11 = w11 + 1            // x26
         stxr w12,w11,[x10]
         if w12 jmp 0x804a374     // unlikely

    loc_0x0804a384: // orphan
         jmp 0x804a318

    loc_0x0804a388: // orphan
         // CODE XREF from sym.brk_switch_to_handle @ 0x804a334
         prfm pstl1strm,[x8]

    loc_0x0804a38c: // orphan
         ldxr w9,[x8]
         w9 = w9 + 1
         stxr w10,w9,[x8]
         if w10 jmp 0x804a38c     // unlikely

    loc_0x0804a39c: // orphan
         jmp 0x804a338

}

/* ===== 0x0802d80c ===== */
int sym.brk_sync_clone_tree (int esi, int edx) {
    loc_0x802d80c:
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x230
        [x29, -0x58] = (xzr,2)
        [x29, -0x68] = (xzr,2)
        [sp, 0x1b8] = (xzr,2)
        [sp, 0x1a8] = (xzr,2)
        [sp, 0x198] = (xzr,2)
        [sp, 0x188] = (xzr,2)
        [sp, 0x178] = (xzr,2)
        [sp, 0x168] = (xzr,2)
        [sp, 0x158] = (xzr,2)
        [sp, 0x148] = (xzr,2)
        [sp, 0x138] = (xzr,2)
        [sp, 0x128] = (xzr,2)
        [sp, 0x118] = (xzr,2)
        [sp, 0x108] = (xzr,2)
        [sp, 0xf8] = (xzr,2)
        [sp, 0xe8] = (xzr,2)
        [sp, 0xd8] = (xzr,2)
        [sp, 0xc8] = (xzr,2)
        [sp, 0xb8] = (xzr,2)
        [sp, 0xa8] = (xzr,2)
        [sp, 0x98] = (xzr,2)
        [sp, 0x88] = (xzr,2)
        [sp, 0x78] = (xzr,2)
        [sp, 0x68] = (xzr,2)
        [sp, 0x58] = (xzr,2)
        [sp, 0x48] = (xzr,2)
        if !x0 jmp 0x802d8dc // likely
            
    loc_0x802d8dc:
        // CODE XREFS from sym.brk_sync_clone_tree @ 0x802d894, 0x802d8a0, 0x802d8ac
        w28 = ~0x15
        jmp 0x802d954
         // do {
    loc_0x802d954:
        // CODE XREFS from sym.brk_sync_clone_tree @ 0x802d8e0, 0x802e194, 0x802e19c
        w0 = w28      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = arg_230h
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        0x0802d974
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d898
    loc_0x802d8a4:
        w8 = [x19 + 0x790] // 0xda // 218
        if (w8 == 1)  // x26
        b.lt 0x802d8dc // likely
    loc_0x802d8b0:
        w9 = 0x38     // '8'
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x22 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x8 * x9
         // do {
    loc_0x802d8c0:
        // CODE XREF from sym.brk_sync_clone_tree @ 0x802d8d4
        x9 = x19 + x22
        w10 = [x9 + 0xa0] // 0xd0 // 208
        if !w10 jmp 0x802d8e4 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x802d8cc:
        x22 = x22 + 0x38
        if (x8 == x22) // x26
        b.ne 0x802d8c0 // likely
    loc_0x802d8d8:
        jmp 0x802d950
         // do {
    loc_0x802d950:
        // CODE XREFS from sym.brk_sync_clone_tree @ 0x802d8d8, 0x802d8e8, 0x802d8f4
        w28 = ~0xd
         // } while (?);
        }
        return eax;
    loc_0x0802d8e4: // orphan
             // CODE XREF from sym.brk_sync_clone_tree @ 0x802d8c8
             x9 = x9 + 0x90
             b.eq 0x802d950           // unlikely

    loc_0x0802d8ec: // orphan
         x23 = x19 + x22
         x8 = [x23 + 0x98]        // 0xde // 222
         if !x8 jmp 0x802d950     // unlikely

    loc_0x0802d8f8: // orphan
         x25 = x19 + 0x7b0
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [var_28h] = x9
         0x802d904 ()             // 0x802d904(0x7c0, 0x0, 0x0, 0x0)
         0x802d908 ()             // 0x802d908(0x7c0, 0x0, 0x0, 0x0)
         w8 = [x19 + 0x790]       // 0xda // 218
         x21 = 0x802d000
         if (w8 == 1)             // x26
         b.lt 0x802d978           // likely

    loc_0x0802d91c: // orphan
         x27 = 0x802d000
         [sp, 0x10] = (x23,2)
         [var_20h_2] = x20
         x23 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = x19 + 0x798
         x8 = x19 + x22
         x27 = x27 + 0
         w26 = 0x38               // '8'
         [var_40h_2] = xzr
         [var_34h] = wzr
         [var_8h] = x8
         jmp 0x802d9ac

    loc_0x0802d978: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802d918
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w28 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_40h_2] = wzr
         jmp 0x802ded8

    loc_0x0802d988: // orphan
         x0 = [sp]                // 0x4 // int64_t arg1
         0x802d98c ()             // 0x802d98c(0xffffff, 0x0, 0x0, 0x0)
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x1                 // x26
         [var_34h] = w8

    loc_0x0802d99c: // orphan
         // CODE XREFS from sym.brk_sync_clone_tree @ 0x802de40, 0x802de64
         x8 = [x19 + 0x790]       // 0xda // 218
         x23 = x23 + 1
         if (x23 == x8)           // x26
         b.ge 0x802de68           // likely

    loc_0x0802d9ac: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802d94c
         madd x8,x23,x26, x19
         w8 = [x8 + 0xa0]         // 0xcf // 207
         if !w8 jmp 0x802d99c     // unlikely

    loc_0x0802d9b8: // orphan
         madd x8,x23,x26, x19
         x2 = [x8 + 0xb8]         // 0xcf // 207
         if (w20 == 1)            // x26
         b.lt 0x802d9f0           // unlikely

    loc_0x0802d9c8: // orphan
         w8 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x9 = var_c8h

    loc_0x0802d9d0: // orphan
         x10 = [x9]               // 0xd0 // 208
         if (x10 == x2)           // x26
         b.eq 0x802d99c           // unlikely

    loc_0x0802d9dc: // orphan
         x8 = x8 - 1
         x9 = var_c8h_2
         b.ne 0x802d9d0           // likely

    loc_0x0802d9e8: // orphan
         if (w20 == 0x1f)         // x26
         jmp ifgt 0x802da00       // likely

    loc_0x0802d9f0: // orphan
         w8 = w20 + 1
         x9 = var_c8h
         [x9 + w20,sxtw 3] = x2
         w20 = w8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802da00: // orphan
         x9 = [x19 + 0x798]       // 0xda // 218
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x21 == x9)
         b.eq 0x802da38           // unlikely

    loc_0x0802da10: // orphan
         if (x9 == x21)           // x26
         b.eq 0x802da38           // unlikely

    loc_0x0802da18: // orphan
         x8 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802da1c: // orphan
         x9 = [x8 + 0x18]         // 0xcf // 207
         if (x9 == x2)            // x26 // x26
         b.eq 0x802da38           // unlikely

    loc_0x0802da28: // orphan
         x8 = [x8]                // 0xcf // 207
         if (x8 == x21)           // x26
         b.ne 0x802da1c           // likely

    loc_0x0802da34: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802da38: // orphan
         x9 = [x19 + 0x18]        // 0xda // 218
         madd x10,x23,x26, x19
         x25 = x10 + 0xb8
         if !x9 jmp 0x802db50     // unlikely

    loc_0x0802da48: // orphan
         x11 = [x9 + 0x40]        // 0xd0 // 208
         ubfx x12,x2,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x12 << 3
         x10 = 0x802d000
         [x29 = x11
         xzr = [x11 + x9]         // 0xd0000000d2 // 893353197778
         x9 = [x11 + x9]          // 0xd0000000d2 // 893353197778
         x10 = [x10]              // 0xd1 // 209
         x13 = x2 >> 0x12
         x13 = x13 & 0xff8
         x9 = x9 & 0xfffffffff000
         x9 = x9 | x13
         x9 = x9 - x10
         x14 = [x9]               // 0xd0 // 208
         x13 = x14 & 3
         tbz w14,1,0x802db64      // unlikely

    loc_0x0802da88: // orphan
         if (x13 == 1)            // x26
         b.eq 0x802db64           // unlikely

    loc_0x0802da90: // orphan
         x11 = [x11 + x12,lsl 3]  // 0xd3000000d2 // 906238099666
         x12 = x2 >> 9
         x12 = x12 & 0xff8
         x11 = x11 & 0xfffffffff000
         x11 = x11 - x10
         [x29 = x11
         xzr = [x9]               // 0xd0 // 208
         x11 = [x9]               // 0xd0 // 208
         x11 = x11 & 0xfffffffff000
         x11 = x11 | x12
         x11 = x11 - x10
         b.eq 0x802dde0           // unlikely

    loc_0x0802dac0: // orphan
         x12 = [x9]               // 0xd0 // 208
         x12 = x12 & 0xfffffffff000
         x10 = x12 - x10
         [x29 = x10               // (pstr 0x08047840) "sB"
         x9 = [x9]                // 0xd0 // 208
         x10 = 0x802d000
         x10 = [x10]              // 0xd1 // 209
         ubfx x9,x9,0xc, 0x24     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x10 + x9,lsl 6
         x24 = x9 + 0x28
         b.eq 0x802ddf0           // unlikely

    loc_0x0802daec: // orphan
         xzr = [x11]              // 0xd2 // 210
         w9 = [x19 + 0x60]        // 0xda // 218
         if (w9 == 3)             // x26
         b.ne 0x802de0c           // likely

    loc_0x0802dafc: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802db00 ()             // 0x802db00(0x20, 0x0, 0x0, 0x0)
         w8 = [var_34h]           // x26
         tbnz w8,0,0x802db30      // likely

    loc_0x0802db0c: // orphan
         x8 = [x19 + 0x18]        // 0xda // 218
         x1 = [var_28h]           // 0x4 // int64_t arg2 // x9
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = [x8 + 0x40]         // 0xcf // 207 // int64_t arg_230h
         0x802db1c ()             // 0x802db1c(0x10, 0x2c0, 0xffffffff0000, 0x0)
         x8 = [x19 + 0x18]        // 0xda // 218
         x9 = [var_8h]            // 0x4 // x19
         x8 = [x8 + 0x40]         // 0xcf // 207
         [x9 + 0xc0] = x8

    loc_0x0802db30: // orphan
         x8 = [x19 + 0x790]       // 0xda // 218
         [sp] = x24
         if (x23 == x8)           // x26
         b.ge 0x802d988           // likely

    loc_0x0802db40: // orphan
         x28 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         [var_34h] = w20
         [var_38h] = x25
         jmp 0x802dbbc

    loc_0x0802db50: // orphan
         w24 = ~0x15
         w28 = ~0x15
         x26 = x27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x8 jmp 0x802de24     // unlikely

    loc_0x0802db60: // orphan
         jmp 0x802de78

    loc_0x0802db64: // orphan
         x9 = 0x802d000
         x10 = 0x802d000
         if (x13 == 1)            // x26
         x9 = x9 + 0
         x10 = x10 + 0
         csel x26,x10,x9, eq
         w24 = ~0xd
         w28 = ~0xd
         x27 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x8 jmp 0x802de24     // unlikely

    loc_0x0802db8c: // orphan
         jmp 0x802de78

    loc_0x0802db90: // orphan
         x1 = x10 + 0x90          // int64_t arg2
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_230h
         0x802db9c ()             // 0x802db9c(0x10, 0x90, 0x0, 0x0)

    loc_0x0802dba0: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802dddc
         madd x8,x28,x26, x19
         [x8 + 0xc0] = x25
         w8 = [x19 + 0x790]       // 0xda // 218
         x25 = [var_38h]          // 0x4

    loc_0x0802dbb0: // orphan
         x28 = x28 + 1            // x26
         if (x28 == w8)           // x26
         b.ge 0x802d988           // unlikely

    loc_0x0802dbbc: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802db4c
         madd x10,x28,x26, x19
         x11 = [x10 + 0xa0]       // 0xd1 // 209
         if !w11 jmp 0x802dbb0    // unlikely

    loc_0x0802dbc8: // orphan
         madd x9,x28,x26, x19
         x9 = [x9 + 0xb8]         // 0xd0 // 208
         x12 = [x25]              // 0xe0 // 224
         if (x9 == x12)           // x26 // x26
         b.ne 0x802dbb0           // likely

    loc_0x0802dbdc: // orphan
         w8 = [x19 + 0x60]        // 0xda // 218
         x12 = x29 - 0x68
         x25 = [x12 + x11,lsl 3]  // 0xd2000000d3 // 901943132371
         w8 = w8 - 1
         if (w11 == w8)
         b.lt 0x802db90           // unlikely

    loc_0x0802dbf4: // orphan
         madd x8,x28,x26, x19
         x8 = [x8 + 0xc0]         // 0xcf // 207
         if !x8 jmp 0x802dc28     // likely

    loc_0x0802dc00: // orphan
         w10 = [var_40h_2]
         if (w10 == 7)            // x26
         jmp ifgt 0x802dc28       // unlikely

    loc_0x0802dc0c: // orphan
         if (x8 == x25)           // x26
         b.eq 0x802dc28           // unlikely

    loc_0x0802dc14: // orphan
         w10 = [var_40h_2]
         x11 = var_88h
         w8 = w10 + 1             // x26
         [x11 + w10,sxtw 3] = x9
         [var_40h_2] = w8

    loc_0x0802dc28: // orphan
         madd x27,x28,x26, x19
         x20 = [x27 + 0x98]!      // 0xe2 // 226
         [x29, -0x18] = (xzr,2)
         [x29, -0x28] = (xzr,2)
         [x29, -0x38] = (xzr,2)
         [x29, -0x48] = (xzr,2)
         if !x25 jmp 0x802ddd8    // likely

    loc_0x0802dc44: // orphan
         if !x20 jmp 0x802ddd8    // unlikely

    loc_0x0802dc48: // orphan
         x0 = x29 - 0x48          // int64_t arg1
         w2 = 0x40                // '@'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802dc54 ()             // 0x802dc54(0x177fb8, 0x0, 0x40, 0x0)
         x8 = [x21]               // 0xdc // 220
         x13 = x29 - 0x48
         w14 = 0x1                // x26
         if (x8 == x21)           // x26
         b.eq 0x802dcb4           // unlikely

    loc_0x0802dc6c: // orphan
         x9 = [x27]               // 0xe2 // 226
         jmp 0x802dc80

    loc_0x0802dc74: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802dcb0
         x8 = [x8]                // 0xcf // 207
         if (x8 == x21)           // x26
         b.eq 0x802dcb4           // unlikely

    loc_0x0802dc80: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802dc70
         x10 = [x8 + 0x58]        // 0xcf // 207
         if (x10 == x9)           // x26 // x26
         b.ne 0x802dc74           // likely

    loc_0x0802dc8c: // orphan
         w10 = [x8 + 0x28]        // 0xcf // 207
         if (w10 == 0x1ff)        // x26 // x26
         b.hi 0x802dc74           // likely

    loc_0x0802dc98: // orphan
         ubfx x11,x10,6, 0x1a     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x14 << x10
         x11 = x11 << 3
         x12 = [x13 + x11]        // 0xd2000000d4 // 901943132372
         x10 = x12 | x10
         [x13 + x11] = x10
         jmp 0x802dc74

    loc_0x0802dcb4: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802dcc8

    loc_0x0802dcbc: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802dcec
         x8 = x8 + 1
         if (x8 == 0x200)         // x26
         b.eq 0x802dcf0           // unlikely

    loc_0x0802dcc8: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802dcb8
         ubfx x10,x8,6, 0x1a      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x25 + x8,lsl 3]    // 0xcf000000e0 // 889058230496
         x10 = [x13 + x10,lsl 3]  // 0xd1000000d4 // 897648165076
         x10 = x10 >> x8
         tbnz w10,0,0x802dcbc     // unlikely

    loc_0x0802dcdc: // orphan
         x10 = [x20 + x8,lsl 3]   // 0xcf000000db // 889058230491
         if (x10 == x9)           // x26 // x26
         b.eq 0x802dcbc           // unlikely

    loc_0x0802dce8: // orphan
         [x20 + x8,lsl 3] = x9
         jmp 0x802dcbc

    loc_0x0802dcf0: // orphan
         x24 = [x21]              // 0xdc // 220
         jmp 0x802dd00

    loc_0x0802dcf8: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802ddb4
         w26 = 0x38               // '8'

    loc_0x0802dcfc: // orphan
         x24 = [x24]              // 0xdf // 223 // x26

    loc_0x0802dd00: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802dcf4
         if (x24 == x21)          // x26
         b.eq 0x802ddd8           // unlikely

    loc_0x0802dd08: // orphan
         x8 = [x24 + 0x58]        // 0xdf // 223
         x9 = [x27]               // 0xe2 // 226
         if (x8 == x9)            // x26 // x26
         b.ne 0x802dcfc           // likely

    loc_0x0802dd18: // orphan
         x8 = [x24 + 0x28]        // 0xdf // 223
         x26 = [x25 + x8,lsl 3]   // 0xcf000000e0 // 889058230496
         x8 = 0x1                 // x26
         x8 = 0x400
         if ((x26 & x8) == 0)
         [x24 + 0x30] = x26
         b.eq 0x802dd68           // unlikely

    loc_0x0802dd34: // orphan
         ubfx x0,x26,0xc, 0x24    // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802dd38 ()             // 0x802dd38(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x802dd68     // likely

    loc_0x0802dd40: // orphan
         x0 = [x27]               // 0xe2 // 226 // int64_t arg1
         w1 = [x24 + 0x28]        // 0xdf // 223
         0x802dd48 ()             // 0x802dd48(0x700000000000100, 0x0, 0x0, 0x0)
         x8 = [x24 + 0x48]        // 0xdf // 223
         x9 = 0xfff               // '\xff\x0f'
         x9 = 0xffef              // '\xef\xff'
         x9 = x26 & x9
         x8 = x8 & 0xfffffffff000
         x26 = x8 | x9
         jmp 0x802dd80

    loc_0x0802dd68: // orphan
         x0 = 0x802d000
         x1 = 0x802d000
         x0 = x0 + 0              // int64_t arg1
         x1 = x1 + 0              // int64_t arg2
         0x802dd78 ()             // 0x802dd78(0x802d000, 0x802d000, 0x0, 0x0)
         if w0 jmp 0x802ddb8      // likely

    loc_0x0802dd80: // orphan
         // CODE XREFS from sym.brk_sync_clone_tree @ 0x802dd64, 0x802ddd4
         x8 = [x24 + 0x28]        // 0xdf // 223
         x9 = [x20 + x8,lsl 3]    // 0xcf000000db // 889058230491 // x26
         if (x9 == x26)
         b.eq 0x802dcf8           // likely

    loc_0x0802dd90: // orphan
         w10 = [var_44h]
         [x20 + x8,lsl 3] = x26
         if (w10 == 7)            // x26
         jmp ifgt 0x802dcf8       // unlikely

    loc_0x0802dda0: // orphan
         x8 = [x24 + 0x18]        // 0xdf // 223
         w9 = w10 + 1             // x26
         x11 = var_48h            // tmp
         [var_44h] = w9
         [x11 + w10,sxtw 3] = x8
         jmp 0x802dcf8

    loc_0x0802ddb8: // orphan
         x2 = [x24 + 0x18]        // 0xdf // 223 // int64_t arg_230h
         w1 = [x19 + 0x10]        // 0xda // 218 // x24 // x26
         x0 = 0x802d000
         x0 = x0 + 0              // int64_t arg1
         x3 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x4 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ddd0 ()             // 0x802ddd0(0x802d000, 0x1, 0x0, 0x1)
         jmp 0x802dd80

    loc_0x0802ddd8: // orphan
         w20 = [var_34h]          // x24
         jmp 0x802dba0

    loc_0x0802dde0: // orphan
         x26 = 0x802d000
         w24 = ~0xd
         x26 = x26 + 0
         jmp 0x802ddfc

    loc_0x0802ddf0: // orphan
         x26 = 0x802d000
         w24 = ~0xd
         x26 = x26 + 0

    loc_0x0802ddfc: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802ddec
         x27 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w28 = ~0xd
         if !x8 jmp 0x802de24     // unlikely

    loc_0x0802de08: // orphan
         jmp 0x802de78

    loc_0x0802de0c: // orphan
         x26 = 0x802d000
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w28 = ~0xd
         x26 = x26 + 0
         if x8 jmp 0x802de78      // likely

    loc_0x0802de24: // orphan
         x0 = 0x802d000
         x1 = 0x802d000
         x0 = x0 + 0              // int64_t arg1
         x1 = x1 + 0              // int64_t arg2
         0x802de34 ()             // "`" // 0x802de34(0x802d000, 0x802d000, 0x0, 0x0)
         if w0 jmp 0x802de44      // likely

    loc_0x0802de3c: // orphan
         w26 = 0x38               // '8'
         jmp 0x802d99c

    loc_0x0802de44: // orphan
         x1 = [x25]               // 0xe0 // 224 // int64_t arg2
         w2 = [x19 + 0x10]        // 0xda // 218 // x24 // x26
         x0 = 0x802d000
         x0 = x0 + 0              // int64_t arg1
         w3 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x4 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802de5c ()             // 0x802de5c(0x802d000, 0x700000000000100, 0x1, 0x20)
         w26 = 0x38               // '8'
         jmp 0x802d99c

    loc_0x0802de68: // orphan
         x20 = [var_20h_2]        // 0x4 // x24
         w28 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = 0x802d000
         jmp 0x802de88

    loc_0x0802de78: // orphan
         // CODE XREFS from sym.brk_sync_clone_tree @ 0x802db60, 0x802db8c, 0x802de08
         x21 = 0x802d000
         w8 = [x21]               // 0xdc // 220
         if w8 jmp 0x802dea0      // likely

    loc_0x0802de84: // orphan
         x20 = [var_20h_2]        // 0x4 // x24

    loc_0x0802de88: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802de74
         (x23, 2) = 3             // x24
         w24 = [var_44h]          // x26
         w8 = [var_34h]           // x24
         tbz w8,0,0x802ded8       // likely

    loc_0x0802de98: // orphan
         w23 = 0x1                // x26
         jmp 0x802df20

    loc_0x0802dea0: // orphan
         w1 = [x19 + 0x10]        // 0xda // 218 // x24 // x26
         x0 = 0x802d000
         x0 = x0 + 0              // int64_t arg1
         w3 = w28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x4 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802deb4 ()             // 0x802deb4(0x802d000, 0x1, 0x0, 0x0)
         (x25, 2) = 3             // x24
         x23 = [var_10h_2]        // 0x4 // x24
         w8 = [var_34h]           // x24
         tbz w8,0,0x802ded4       // likely

    loc_0x0802dec8: // orphan
         w24 = [var_44h]          // x26
         w23 = 0x1                // x26
         jmp 0x802df20

    loc_0x0802ded4: // orphan
         w24 = [var_44h]          // x26

    loc_0x0802ded8: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802d984
         x8 = [x19 + 0x798]       // 0xda // 218
         x9 = x19 + 0x798
         if (x9 == x8)
         b.eq 0x802def0           // unlikely

    loc_0x0802dee8: // orphan
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802df20

    loc_0x0802def0: // orphan
         x8 = [x23 + 0x98]        // 0xde // 222
         if !x8 jmp 0x802dee8     // unlikely

    loc_0x0802def8: // orphan
         x8 = [x19 + 0x18]        // 0xda // 218
         x1 = [var_28h]           // 0x4 // int64_t arg2 // x9
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = [x8 + 0x40]         // 0xcf // 207 // int64_t arg_230h
         0x802df08 ()             // 0x802df08(0x10, 0x2c0, 0xffffffff0000, 0x0)
         x8 = [x19 + 0x18]        // 0xda // 218
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x19 + x22
         x8 = [x8 + 0x40]         // 0xcf // 207
         [x9 + 0xc0] = x8

    loc_0x0802df20: // orphan
         // CODE XREFS from sym.brk_sync_clone_tree @ 0x802de9c, 0x802ded0, 0x802deec
         dsb ishst
         0x802df24 ()             // 0x802df24(0x0, 0x0, 0x0, 0x0)
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802df2c ()             // 0x802df2c(0x0, 0x0, 0x0, 0x0)
         w9 = [var_40h_2]         // x26
         if (w9 == 1)             // x26 // x26
         b.lt 0x802df84           // unlikely

    loc_0x0802df3c: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // x9
         x10 = var_88h

    loc_0x0802df48: // orphan
         x12 = [x10 + x8,lsl 3]   // 0xcf000000d1 // 889058230481
         dsb ishst
         x11 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx x12,x12,0x15, 0x23  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x12 << 9

    loc_0x0802df5c: // orphan
         x13 = x12 + x11
         tlbi vaae1is,x13
         x11 = x11 + 1            // x26
         if (x11 == 0x200)        // x26
         b.ne 0x802df5c           // likely

    loc_0x0802df70: // orphan
         dsb ish
         
         x8 = x8 + 1
         if (x8 == x9)            // x26
         b.ne 0x802df48           // likely

    loc_0x0802df84: // orphan
         x8 = x20 >> 0xc
         dsb ishst
         x8 = x8 & 0xffffffffff0
         tlbi vaae1is,x8
         x9 = x8 | 1              // x26
         tlbi vaae1is,x9
         x9 = x8 | 2
         tlbi vaae1is,x9
         x9 = x8 | 3
         tlbi vaae1is,x9
         x9 = x8 | 4
         tlbi vaae1is,x9
         w9 = 0x5
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 6
         tlbi vaae1is,x9
         x9 = x8 | 7
         tlbi vaae1is,x9
         x9 = x8 | 8
         tlbi vaae1is,x9
         w9 = 0x9
         x9 = x8 | x9
         tlbi vaae1is,x9
         w9 = 0xa
         x9 = x8 | x9
         tlbi vaae1is,x9
         w9 = 0xb
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 0xc
         // XREFS(78)
         stlxrb w2,w0,[x0]
         
         stlxrb w2,w0,[x0]
         
         stlxrb w2,w0,[x0]
         
         
         tlbi vaae1is,x8
         dsb ish
         
         if (w24 == 1)            // x26
         b.lt 0x802e0fc           // unlikely

    loc_0x0802e030: // orphan
         w8 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x9 = var_48h             // tmp
         w10 = 0x5
         w11 = 0x9
         w12 = 0xa
         w13 = 0xb
         w14 = 0xd
         jmp 0x802e05c

    loc_0x0802e050: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802e0f8
         x8 = x8 - 1
         x9 = var_48h_2
         b.eq 0x802e0fc           // unlikely

    loc_0x0802e05c: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802e04c
         x15 = [x9]               // 0xd0 // 208
         if (x15 == x20)          // x26
         b.eq 0x802e050           // unlikely

    loc_0x0802e068: // orphan
         dsb ishst
         x15 = x15 >> 0xc
         x15 = x15 & 0xffffffffff0
         tlbi vaae1is,x15
         x16 = x15 | 1            // x26
         tlbi vaae1is,x16
         x16 = x15 | 2
         tlbi vaae1is,x16
         x16 = x15 | 3
         tlbi vaae1is,x16
         x16 = x15 | 4
         tlbi vaae1is,x16
         x16 = x15 | x10
         tlbi vaae1is,x16
         x16 = x15 | 6
         tlbi vaae1is,x16
         x16 = x15 | 7
         tlbi vaae1is,x16
         x16 = x15 | 8
         tlbi vaae1is,x16
         x16 = x15 | x11
         tlbi vaae1is,x16
         x16 = x15 | x12
         tlbi vaae1is,x16
         x16 = x15 | x13
         tlbi vaae1is,x16
         x16 = x15 | 0xc
         tlbi vaae1is,x16
         x16 = x15 | x14
         tlbi vaae1is,x16
         x16 = x15 | 0xe
         tlbi vaae1is,x16
         x15 = x15 | 0xf
         tlbi vaae1is,x15
         dsb ish
         
         jmp 0x802e050

    loc_0x0802e0fc: // orphan
         if w28 jmp 0x802d954     // unlikely

    loc_0x0802e100: // orphan
         w8 = [x21]               // 0xdc // 220
         if !w8 jmp 0x802d954     // unlikely

    loc_0x0802e108: // orphan
         w1 = [x19 + 0x10]        // 0xda // 218 // x24 // x26
         w3 = [x19 + 0x7a8]       // 0xda // 218
         w4 = [x19 + 0x790]       // 0xda // 218
         x0 = 0x802e000
         x0 = x0 + 0              // int64_t arg1
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_230h // x24
         w5 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         0x802e124 ()             // 0x802e124(0x802e000, 0x1, 0x20, 0x0)
         x21 = [x19 + 0x798]      // 0xda // 218
         x22 = x19 + 0x798
         if (x21 == x22)          // x26 // x26
         b.eq 0x802e198           // unlikely

    loc_0x0802e138: // orphan
         x20 = 0x802e000
         x20 = x20 + 0

    loc_0x0802e140: // orphan
         x3 = [x21 + 0x58]        // 0xdc // 220
         x8 = x3                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if x3 jmp 0x802e16c      // unlikely

    loc_0x0802e14c: // orphan
         w8 = [x19 + 0x60]        // 0xda // 218
         w8 = w8 - 1
         x8 = x19 + w8,sxtw 3
         x8 = [x8 + 0x40]         // 0xcf // 207
         if x8 jmp 0x802e16c      // unlikely

    loc_0x0802e160: // orphan
         w2 = [x21 + 0x28]        // 0xdc // 220
         x4 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802e174

    loc_0x0802e16c: // orphan
         x2 = [x21 + 0x28]        // 0xdc // 220
         x4 = [x8 + x2,lsl 3]     // 0xc9000000cf // 863288426703

    loc_0x0802e174: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x802e168
         x1 = [x21 + 0x18]        // 0xdc // 220 // int64_t arg2
         x5 = [x21 + 0x48]        // 0xdc // 220
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802e180 ()             // 0x802e180(0x20, 0xffff07b1a80f4fff, 0x0, 0x0)
         x21 = [x21]              // 0xdc // 220
         w28 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x21 == x22)          // x26
         b.ne 0x802e140           // likely

    loc_0x0802e194: // orphan
         jmp 0x802d954

    loc_0x0802e198: // orphan
         w28 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802d954

}

/* ===== 0x080309f8 ===== */
int sym.brk_sync_tbl_node (int esi, int edx) {
    loc_0x80309f8:
        sp = sp - 0x110
        [sp, 0xf8] = (xzr,2)
        x8 = [x1 + 8] // 0xc8 // 200 // arg2
        [sp, 0xe8] = (xzr,2)
        [sp, 0xd8] = (xzr,2)
        [sp, 0xc8] = (xzr,2)
        [sp, 0xb8] = (xzr,2)
        [sp, 0xa8] = (xzr,2)
        [sp, 0x98] = (xzr,2)
        [sp, 0x88] = (xzr,2)
        [sp, 0x78] = (xzr,2)
        [sp, 0x68] = (xzr,2)
        [sp, 0x58] = (xzr,2)
        [sp, 0x48] = (xzr,2)
        [sp, 0x38] = (xzr,2)
        [sp, 0x28] = (xzr,2)
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        [sp] = xzr
        if !x2 jmp 0x8030b38 // likely
            
    loc_0x8030b38:
        x29 = [var_100h] // 0x4
        sp = arg_110h
        // lr
         // } else {
    loc_0x8030a48:
        if !x8 jmp 0x8030b38 // unlikely
        }
        return eax;
    loc_0x8030a4c:
        w9 = [x0 + 0x790] // 0xc7 // 199 // arg1
        if (w9 == 1)  // x26 // x26
        b.lt 0x8030ab0 // likely
            
    loc_0x8030ab0:
        w10 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x8030ab4:
        // CODE XREF from sym.brk_sync_tbl_node @ 0x8030aac
        x9 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = w10     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = 0x8030000
        jmp 0x8030ad0
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08030a70: // orphan
             w15 = [x11 + 0x10]       // 0xd2 // 210 // x19
             if (w15 == w13)          // x26
             b.ne 0x8030a94           // likely

    loc_0x08030a7c: // orphan
         x15 = [x11 + 0x20]       // 0xd2 // 210 // x24 // x26
         if (x15 == x8)           // x26
         b.ne 0x8030a94           // likely

    loc_0x08030a88: // orphan
         w15 = w10 + 1            // x26
         [x14 + w10,sxtw 3] = x11
         w10 = w15                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26

    loc_0x08030a94: // orphan
         if (x12 == x9)           // x26
         b.hs 0x8030ab4           // unlikely

    loc_0x08030a9c: // orphan
         x12 = x12 + 1            // x26
         if (w10 == 0x20)         // x26
         x11 = x11 + 0x38
         b.lt 0x8030a70           // likely

    loc_0x08030aac: // orphan
         jmp 0x8030ab4

    loc_0x08030ac4: // orphan
         // CODE XREF from sym.brk_sync_tbl_node @ 0x8030b34
         x9 = x9 + 1
         if (x9 == 0x200)         // x26
         b.eq 0x8030b38           // unlikely

    loc_0x08030ad0: // orphan
         // CODE XREF from sym.brk_sync_tbl_node @ 0x8030ac0
         x12 = [x2 + x9,lsl 3]    // 0xd0000000c9 // 893353197769 // arg3
         if (w10 == 1)            // x26
         b.lt 0x8030b24           // likely

    loc_0x08030adc: // orphan
         x13 = sp                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // " "
         x14 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08030ae4: // orphan
         x15 = [x13]              // 0xd4 // 212
         x16 = [x15 + 0x18]       // 0xd6 // 214
         if (x16 == x9)           // x26 // x26
         b.eq 0x8030b04           // unlikely

    loc_0x08030af4: // orphan
         x14 = x14 - 1
         x13 = var_8h
         b.ne 0x8030ae4           // likely

    loc_0x08030b00: // orphan
         jmp 0x8030b24

    loc_0x08030b04: // orphan
         w13 = ~w12
         if ((x13 & 3) == 0)      // x26
         b.ne 0x8030b24           // likely

    loc_0x08030b10: // orphan
         x13 = [x15]              // 0xd6 // 214
         x14 = [x11]              // 0xd2 // 210
         x13 = x13 - x14
         x13 = x13 >> 6
         bfi x12,x13,0xc, 0x24    // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08030b24: // orphan
         // CODE XREF from sym.brk_sync_tbl_node @ 0x8030b00
         x13 = [x8 + x9,lsl 3]    // 0xd0000000cf // 893353197775
         if (x13 == x12)          // x26 // x26
         b.eq 0x8030ac4           // unlikely

    loc_0x08030b30: // orphan
         [x8 + x9,lsl 3] = x12
         jmp 0x8030ac4

}

/* ===== 0x0802e4dc ===== */
int sym.brk_uninstall_debug_hook (int esi, int edx) {
    loc_0x802e4dc:
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff' // (pstr 0x00178000) " "
        x19 = 0x802e000
        w8 = (byte) [x19] // 0xda // 218
        if (w8 == 1)  // x26
        b.ne 0x802e550 // likely
            
    loc_0x802e550:
        (x20, 2) = 3  // x24 // x9
        (x22, 2) = 3  // x24
        (x29, 2) = 3  // x24 // x19
        // x19
         // } else {
    loc_0x802e4fc:
        x8 = 0x802e000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x802e514 // unlikely
        }
        return eax;
    loc_0x802e508:
        x0 = 0x802e000
        x0 = x0 + 0
        blr x8        // x8(0x802e000, 0x0, 0x0, 0x0)
         // do {
    loc_0x802e514:
        x20 = 0x802e000
        w8 = [x20]    // 0xdb // 219
        if !w8 jmp 0x802e544 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x802e520:
        w21 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w22 = 0x1386  // '\x86\x13'
         // do {
    loc_0x802e528:
        w0 = 0x1      // x26
        0x802e52c ()  // 0x802e52c(0x1, 0x0, 0x0, 0x0)
        w8 = [x20]    // 0xdb // 219 // x24 // x26
        if (w21 == w22) // x26 // x26
        b.hi 0x802e544 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x802e53c:
        w21 = w21 + 1 // x26
        if w8 jmp 0x802e528 // likely
    loc_0x802e544:
        w8 = [x20]    // 0xdb // 219 // x24 // x26
        if w8 jmp 0x802e560 // likely
            
    loc_0x802e560:
        w1 = [x20]    // 0xdb // 219 // x24 // x26
        x0 = 0x802e000
        x0 = x0 + 0   // int64_t arg1
        0x802e56c ()  // 0x802e56c(0x802e000, 0x1, 0x0, 0x0)
        jmp 0x802e54c
    loc_0x0802e54c: // orphan
             // CODE XREF from sym.brk_uninstall_debug_hook @ 0x802e570
             [x19] = (byte) wzr

}

/* ===== 0x0802e440 ===== */
int sym.brk_uninstall_switch_hook (int esi, int edx) {
    loc_0x802e440:
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19 // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff' // (pstr 0x00178000) " "
        x19 = 0x802e000
        w8 = (byte) [x19] // 0xda // 218
        if (w8 == 1)  // x26
        b.ne 0x802e4ac // likely
            
    loc_0x802e4ac:
        // CODE XREF from sym.brk_uninstall_switch_hook @ 0x802e4d8
        x19 = [var_10h] // 0x4 // x24
        (x29, 2) = 3  // x24 // x19 // " "
        // x19
         // } else {
    loc_0x802e45c:
        x0 = 0x802e000
        x0 = x0 + 0
        0x802e464 ()  // 0x802e464(0x802e000, 0x0, 0x0, 0x0)
        if w0 jmp 0x802e4b8 // likely
        }
        return eax;
    loc_0x802e46c:
        x8 = 0x802e000
        x8 = [x8]     // 0xcf // 207
        [x19] = (byte) wzr
        if !x8 jmp 0x802e480 // unlikely
            
    loc_0x802e480:
        x19 = 0x802e000
        w8 = [x19]    // 0xda // 218
        if !w8 jmp 0x802e49c // unlikely
    loc_0x802e49c:
        x0 = 0x802e000
        x0 = x0 + 0
        0x802e4a4 ()  // 0x802e4a4(0x802e000, 0x0, 0x0, 0x0)
        if w0 jmp 0x802e4c8 // likely
            
    loc_0x802e4c8:
        w1 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x802e000
        x0 = x0 + 0
         // do {
    loc_0x802e4d4:
        // CODE XREF from sym.brk_uninstall_switch_hook @ 0x802e4c4
        0x802e4d4 ()  // 0x802e4d4(0x0, 0x0, 0x0, 0x0)
        jmp 0x802e4ac
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0802e48c: // orphan
             w0 = 0x1                 // x26
             0x802e490 ()             // 0x802e490(0x1, 0x0, 0x0, 0x0)
             w8 = [x19]               // 0xda // 218
             if w8 jmp 0x802e48c      // likely

    loc_0x0802e4b8: // orphan
         w1 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x802e000
         x0 = x0 + 0
         jmp 0x802e4d4

}

/* ===== 0x08049638 ===== */
int sym.brk_write_ttbr0 (int esi, int edx) {
    loc_0x8049638:
        sp = sp - 0x80
        [sp, 0x30] = (x29,2)
        [var_40h] = x25 // (cstr 0x00178000) " "
        [sp, 0x50] = (x24,2)
        [sp, 0x60] = (x22,2)
        [sp, 0x70] = (x20,2)
        x29 = var_30h // (pstr 0x00178000) " "
        if !x0 jmp 0x8049894 // likely
            
    loc_0x8049894:
        (x20, 2) = 3  // x19
        (x22, 2) = 3  // x24
        (x24, 2) = 3
        x25 = [var_40h]
        (x29, 2) = 3
        sp = arg_80h
        0x080498ac
         // } else {
    loc_0x8049658:
        if !x1 jmp 0x8049894 // likely
        }
        return eax;
    loc_0x804965c:
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = x2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        if x2 jmp 0x8049674 // unlikely
            
    loc_0x8049674:
        jmp 0x8049930
         // do {
    loc_0x8049930:
        // CODE XREF from sym.brk_write_ttbr0 @ 0x8049674
        x9 = 0x8049000
        x9 = [x9]     // 0xd0 // 208
        tbnz w9,4,0x8049684 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x804966c
    loc_0x8049684:
        mrs x25,ttbr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8049688:
        x24 = x1 & 0xfffffffff000 // arg2
        x8 = x25 & 0xffff000000000fff
        x21 = x8 | x24
        if !x21 jmp 0x804986c // likely
         // } while (?);
        }
        return eax;
    loc_0x8049698:
        mrs x22,ttbr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x22 == x21) // x26 // x26
        b.eq 0x8049798 // likely
            
    loc_0x8049798:
        x8 = [x20 + 0x20] // 0xdb // 219
        if !x8 jmp 0x8049850 // likely
            
    loc_0x8049850:
        w23 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x8049854:
        // CODE XREF from sym.brk_write_ttbr0 @ 0x80497b8
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
        w1 = w23      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        0x804985c ()  // 0x804985c(0x20, 0x20, 0x0, 0x0)
        x8 = 0x8049000
        w8 = [x8]     // 0xcf // 207
        if w8 jmp 0x80498b0 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80496a4
    loc_0x80496b0:
        x8 = x25 & 0xffff000000000000
        dsb ishst
        tlbi aside1is,x8
        dsb ish
        0x080496c0
         // do {
    loc_0x80496c4:
        msr ttbr0_el1,x21 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x080496c8
        x8 = [x20 + 0x798] // 0xdb // 219
        x9 = x20 + 0x798
        if (x9 == x8)
        b.eq 0x80497bc // unlikely
         // } while (?);
        }
        return eax;
    loc_0x80496dc:
        if (x8 == x9) // x26
        b.eq 0x8049798 // unlikely
    loc_0x80496e4:
        w10 = 0x5
        w11 = 0x9
        w12 = 0xa
        w13 = 0xb
        w14 = 0xd
         // do {
    loc_0x80496f8:
        x15 = [x8 + 0x18] // 0xcf // 207
        dsb ishst
        x15 = x15 >> 0xc
        x15 = x15 & 0xffffffffff0
        tlbi vaae1is,x15
        x16 = x15 | 1
        tlbi vaae1is,x16
        x16 = x15 | 2
        tlbi vaae1is,x16
        x16 = x15 | 3
        tlbi vaae1is,x16
        x16 = x15 | 4
        tlbi vaae1is,x16
        x16 = x15 | x10
        tlbi vaae1is,x16
        x16 = x15 | 6
        tlbi vaae1is,x16
        x16 = x15 | 7
        tlbi vaae1is,x16
        x16 = x15 | 8
        tlbi vaae1is,x16
        x16 = x15 | x11
        tlbi vaae1is,x16
        x16 = x15 | x12
        tlbi vaae1is,x16
        x16 = x15 | x13
        tlbi vaae1is,x16
        x16 = x15 | 0xc
        tlbi vaae1is,x16
        x16 = x15 | x14
        tlbi vaae1is,x16
        x16 = x15 | 0xe
        tlbi vaae1is,x16
        x15 = x15 | 0xf
        tlbi vaae1is,x15
        dsb ish
        0x08049788
        x8 = [x8]     // 0xcf // 207
        if (x8 == x9) // x26
        b.ne 0x80496f8 // likely
         // } while (?);
        }
        return eax;
    loc_0x0804967c: // orphan
             // CODE XREF from sym.brk_write_ttbr0 @ 0x804993c
             x25 = [x8 + 0x10]        // 0xcf // 207
             if x25 jmp 0x8049688     // likely

    loc_0x080497bc: // orphan
         dsb ishst
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tlbi vaae1is,x8
         w8 = 0x1                 // x26
         tlbi vaae1is,x8
         w8 = 0x2
         tlbi vaae1is,x8
         w8 = 0x3
         tlbi vaae1is,x8
         w8 = 0x4
         tlbi vaae1is,x8
         w8 = 0x5
         tlbi vaae1is,x8
         w8 = 0x6
         tlbi vaae1is,x8
         w8 = 0x7
         tlbi vaae1is,x8
         w8 = 0x8
         tlbi vaae1is,x8
         w8 = 0x9
         tlbi vaae1is,x8
         w8 = 0xa
         tlbi vaae1is,x8
         w8 = 0xb
         tlbi vaae1is,x8
         w8 = 0xc
         tlbi vaae1is,x8
         w8 = 0xd
         tlbi vaae1is,x8
         w8 = 0xe
         tlbi vaae1is,x8
         w8 = 0xf
         tlbi vaae1is,x8
         dsb ish
         
         x8 = [x20 + 0x20]        // 0xdb // 219
         if x8 jmp 0x80497a0      // unlikely

    loc_0x0804986c: // orphan
         if x19 jmp 0x8049878     // likely

    loc_0x08049870: // orphan
         // CODE XREF from sym.brk_write_ttbr0 @ 0x804992c
         mrs x19,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x19 jmp 0x8049894    // unlikely

    loc_0x08049878: // orphan
         x8 = [x19 + 0x4d8]       // 0xda // 218
         x9 = [x20 + 0x18]        // 0xdb // 219
         if (x8 == x9)            // x26 // x26
         b.ne 0x8049894           // likely

    loc_0x08049888: // orphan
         jmp 0x8049940

    loc_0x08049890: // orphan
         // CODE XREF from sym.brk_write_ttbr0 @ 0x804994c
         [x19 + 0x10] = x21       // x24

    loc_0x080498b0: // orphan
         x10 = [x20 + 0x798]      // 0xdb // 219
         x2 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x7 = x22 & 0xfffffffff000
         x8 = x22 & 0xffff000000000000
         x9 = x25 & 0xffff000000000000
         if !x10 jmp 0x80498d8    // unlikely

    loc_0x080498c8: // orphan
         x11 = x20 + 0x798
         if (x11 == x10)          // x26
         b.eq 0x80498d8           // unlikely

    loc_0x080498d4: // orphan
         x2 = [x10 + 0x18]        // 0xd1 // 209

    loc_0x080498d8: // orphan
         x11 = 0x8049000
         x11 = x11 + 0
         w1 = [x20 + 0x10]        // 0xdb // 219
         w3 = [x20 + 0x7a8]       // 0xdb // 219
         mrs x10,tpidr_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w4 = [x10 + x11]         // 0xd2000000d1 // 901943132369
         x10 = 0x8049000
         x11 = 0x8049000
         x10 = x10 + 0
         x11 = x11 + 0
         if (x22 == x21)          // x26 // x26
         x0 = 0x8049000
         csel x10,x11,x10, eq
         x0 = x0 + 0              // int64_t arg1
         x5 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x6 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h] = w23           // " "
         [sp, 0x10] = (x9,2)
         [sp] = (x24,2)
         0x8049924 ()             // 0x8049924(0x8049000, 0x0, 0x0, -1)
         if x19 jmp 0x8049878     // likely

    loc_0x0804992c: // orphan
         jmp 0x8049870

    loc_0x0804993c: // orphan
         jmp 0x804967c

    loc_0x08049940: // orphan
         // CODE XREF from sym.brk_write_ttbr0 @ 0x8049888
         x8 = 0x8049000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,4,0x8049894      // likely

    loc_0x0804994c: // orphan
         jmp 0x8049890

}

/* ===== 0x0804b69c ===== */
int sym.arm64_decode_bit_masks (int esi, int edx) {
    loc_0x804b69c:
        w8 = w0 & 0xff // arg1
        w9 = w2 & 0x3f // arg3
        bfi w9,w8,6, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w9 ^ 0x3f
        if !w8 jmp 0x804b6f0 // unlikely
            
    loc_0x804b6f0:
        // CODE XREFS from sym.arm64_decode_bit_masks @ 0x804b6ac, 0x804b6b8, 0x804b6cc
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // lr
         // } else {
    loc_0x804b6b0:
        clz w8,w8     // pstate
        w8 = w8 ^ 0x1f // x26
        if !w8 jmp 0x804b6f0 // unlikely
        }
        return eax;
    loc_0x804b6bc:
        w9 = w3 & 0xff // arg4
        if (w9 == 0x20) // x26
        b.ne 0x804b6d0 // likely
            
    loc_0x804b6d0:
        // CODE XREF from sym.arm64_decode_bit_masks @ 0x804b6c4
        w9 = 0x1      // x26
        w8 = w9 << w8
        w10 = w8 + 0xff
        w9 = w10 & w2 // arg3
        if !w4 jmp 0x804b6f8 // likely
            
    loc_0x804b6f8:
        // CODE XREFS from sym.arm64_decode_bit_masks @ 0x804b6e0, 0x804b6ec
        w11 = w10 & w1 // arg2
        w13 = w9 & 0xff
        w9 = w9 + 1
        x15 = ~0
        w16 = w11 & 0xff
        w11 = w9 & 0xff
        w14 = w8 & 0xff
        w12 = w8 & 0xfe
        x9 = x15 << x9
        if (w11 == 0x3f) // x26
        x17 = x15 << x12
        csinv x18,x15,x9, hi
        if (w14 == 0x3f) // x26
        w11 = w13 - w16
        csinv x9,x15,x17, hi
        w13 = (unsigned) w16 / w14
        msub w13,w13,w14, w16
        x15 = x18 & x9
        if !w13 jmp 0x804b758 // likely
            
    loc_0x804b758:
        // CODE XREF from sym.arm64_decode_bit_masks @ 0x804b740
        w12 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x13 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w14 = w11 & w10
        x11 = x15 & x9
        w10 = w3 & 0xff // arg4
         // do {
    loc_0x804b76c:
        // CODE XREF from sym.arm64_decode_bit_masks @ 0x804b780
        x15 = x11 << x12
        w12 = w12 + w8
        w12 = w12 & 0xff
        if (w12 == w10) // x26
        x13 = x15 | x13
        b.lo 0x804b76c // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0804b784: // orphan
             [x5] = x13               // arg6
             w13 = w14 + 1            // x26
             x14 = ~0
             w15 = w13 & 0xff         // x26
             x13 = x14 << x13
             if (w15 == 0x3f)         // x26
             csinv x13,x14,x13, hi
             w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             x11 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x9 = x13 & x9

    loc_0x0804b7ac: // orphan
         // CODE XREF from sym.arm64_decode_bit_masks @ 0x804b7c0
         x13 = x9 << x12
         w12 = w12 + w8
         w12 = w12 & 0xff
         if (w12 == w10)          // x26
         x11 = x13 | x11          // x9
         b.lo 0x804b7ac           // unlikely

    loc_0x0804b7c4: // orphan
         w0 = 0x1                 // x26
         [x6] = x11               // arg7
                                  // lr

}

/* ===== 0x0804eb88 ===== */
int sym.arm64_simd_decode_fp_3same_operation (int esi, int edx) {
    loc_0x804eb88:
        w9 = w1 & 0xff // arg2
        w8 = w0 & 0xff // arg1
        w9 = w9 << 5
        w8 = w9 | w8,lsl 6
        w9 = w2 & 0xff // arg3
        w8 = w8 | w9
        w8 = w8 - 0x18
        if (w8 == 0x67) // x26 // x26
        b.hi 0x804ebe8 // likely
            
    loc_0x804ebe8:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // lr
         // } else {
    loc_0x804ebac:
        x9 = 0x804e000
        x9 = x9 + 0
        x10 = 0x804ebc8
        w11 = (byte) [x9 + x8] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11,lsl 2
        w0 = 0x8
        br x10
        }
        return eax;
}

/* ===== 0x0804ed14 ===== */
int sym.init_module (int esi, int edx) {
    loc_0x804ed14:
        [sp, -0x20]! = (x29,2) // [14] -r-x section size 132 named .init.text
        [var_10h] = x19 // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff' // (pstr 0x00178000) " "
        w0 = 0x1d
        0x804ed24 ()  // 0x804ed24(0x1d, 0x0, 0x0, 0x0)
        if w0 jmp 0x804ed78 // likely
            
    loc_0x804ed78:
        // CODE XREF from sym.init_module @ 0x804ed28
        x0 = 0x804e000
        w19 = ~0
        x0 = x0 + 0
         // do {
    loc_0x804ed84:
        // CODE XREF from sym.init_module @ 0x804ed74
        0x804ed84 ()  // 0x804ed84(0x0, 0x0, 0x0, 0x0)
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        x19 = [var_10h] // 0x4 // x9
        (x29, 2) = 3  // x24 // x8 // " "
        // x8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x804ed2c
    loc_0x804ed40:
        (x9, 2) = 3
        [x9 + 8] = x8
        [x8] = x9
         // do {
    loc_0x804ed4c:
        // CODE XREF from sym.init_module @ 0x804ed3c
        x8 = 0x100
        x8 = 0xdead   // '\xad\xde'
        w9 = 0x22     // '\"'
        x9 = x8 | x9
        x0 = x19 + 0x48
        [x19] = (x8,2)
        0x804ed64 ()  // 0x804ed64(0x58, 0x0, 0x0, 0x0)
        x0 = 0x804e000
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x0 + 0
        jmp 0x804ed84
         // } while (?);
        }
        return eax;
}

/* ===== 0x0804ed98 ===== */
int sym.cleanup_module (int esi, int edx) {
    loc_0x804ed98:
        [sp, -0x10]! = (x29,2) // [16] -r-x section size 52 named .exit.text
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff' // (pstr 0x00178000) " "
        0x804eda0 ()  // 0x804eda0(0x0, 0x0, 0x0, 0x0)
        if !w0 jmp 0x804edb4 // likely
            
    loc_0x804edb4:
        // CODE XREF from sym.cleanup_module @ 0x804eda4
        0x804edb4 ()  // 0x804edb4(0x0, 0x0, 0x0, 0x0)
        x0 = 0x804e000
        x0 = x0 + 0
        0x804edc0 ()  // 0x804edc0(0x804e000, 0x0, 0x0, 0x0)
        (x29, 2) = 3  // x24 // x8
        // x8
         // } else {
    loc_0x804eda8:
        x0 = 0x804e000
        x0 = x0 + 0
        0x804edb0 ()  // 0x804edb0(0x804e000, 0x0, 0x0, 0x0)
        }
        return eax;
}

/* ===== 0x0800cad0 ===== */
int sym.install_hook (int esi, int edx) {
    loc_0x800cad0:
        [sp, -0x10]! = (x29,2) // (pstr 0x00178000) " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff' // (pstr 0x00178000) " "
        0x800cad8 ()  // 0x800cad8(0x0, 0x0, 0x0, 0x0)
        0x800cadc ()  // 0x800cadc(0x0, 0x0, 0x0, 0x0)
        0x800cae0 ()  // 0x800cae0(0x0, 0x0, 0x0, 0x0)
        if w0 jmp 0x800cafc // unlikely
            
    loc_0x800cafc:
        // CODE XREF from sym.install_hook @ 0x800cae4
        0x800cafc ()  // 0x800cafc(0x0, 0x0, 0x0, 0x0)
        w0 = ~0
        (x29, 2) = 3  // x24 // x8
        // x8
         // } else {
    loc_0x800cae8:
        0x800cae8 ()  // 0x800cae8(0x0, 0x0, 0x0, 0x0)
        if w0 jmp 0x800cb0c // unlikely
        }
        return eax;
    loc_0x800caf0:
        0x800caf0 ()  // 0x800caf0(0x0, 0x0, 0x0, 0x0)
        if !w0 jmp 0x800cb24 // likely
            
    loc_0x800cb24:
        // CODE XREF from sym.install_hook @ 0x800caf4
        0x800cb24 ()  // 0x800cb24(0x0, 0x0, 0x0, 0x0)
        0x800cb28 ()  // 0x800cb28(0x0, 0x0, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x29, 2) = 3  // x24 // x8
        // x8
         // } else {
    loc_0x800caf8:
        // CODE XREF from sym.install_hook @ 0x800cb20
        0x800caf8 ()  // 0x800caf8(0x0, 0x0, 0x0, 0x0)
        }
        return eax;
    loc_0x0800cb0c: // orphan
             // CODE XREF from sym.install_hook @ 0x800caec
             w1 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x0 = sym.__cfi_check     // 0x800c000
             x0 = x0 + 0              // 0x800c000
                                      // sym.__cfi_check
             0x800cb18 ()             // 0x800cb18(0x800c000, 0x0, 0x0, 0x0)
             0x800cb1c ()             // 0x800cb1c(0x800c000, 0x0, 0x0, 0x0)
             if w0 jmp 0x800caf8      // likely

}

/* ===== 0x0800cc50 ===== */
int sym.unstall_hook (int esi, int edx) {
    loc_0x800cc50:
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800cc5c ()  // 0x800cc5c(0x0, 0x0, 0x0, 0x0)
        0x800cc60 ()  // 0x800cc60(0x0, 0x0, 0x0, 0x0)
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800cc68 ()  // 0x800cc68(0x0, 0x0, 0x0, 0x0)
        0x800cc6c ()  // 0x800cc6c(0x0, 0x0, 0x0, 0x0)
        0x800cc70 ()  // 0x800cc70(0x0, 0x0, 0x0, 0x0)
        0x800cc74 ()  // 0x800cc74(0x0, 0x0, 0x0, 0x0)
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // sp // "sB" lr // sp
        // lr
         // (break)
}

/* ===== 0x0800de60 ===== */
int sym.pte_control_exit (int esi, int edx) {
    loc_0x800de60:
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800d000
        x0 = x0 + 0
        0x800de74 ()  // 0x800de74(0x800d000, 0x0, 0x0, 0x0)
        x19 = 0x800d000
        x0 = [x19]    // 0xda // 218
        if !x0 jmp 0x800de88 // unlikely
            
    loc_0x800de88:
        // CODE XREF from sym.pte_control_exit @ 0x800de80
        x0 = 0x800d000
        x8 = 0x800d000
        x0 = x0 + 0
        [x19] = xzr
        [x8] = xzr
        0x800de9c ()  // 0x800de9c(0x800d000, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        0x0800dea8
         // } else {
    loc_0x800de84:
        0x800de84 ()  // 0x800de84(0x0, 0x0, 0x0, 0x0)
        }
        return eax;
}

/* ===== 0x0800c308 ===== */
int sym.__cfi_check_fail (int esi, int edx) {
    loc_0x800c308:
        if !x0 jmp 0x800c31c // likely
            
    loc_0x800c31c:
        // CODE XREFS from sym.__cfi_check_fail @ 0x800c308, 0x800c314
        brk 0x5502
         // } else {
    loc_0x800c30c:
        w8 = (byte) [x0] // 0xc7 // 199 // arg1
        if (w8 == 5)  // x26
        b.lo 0x800c31c // unlikely
        }
        return eax;
    loc_0x800c318:
        // lr
         // (break)
}

/* ===== 0x0800c000 ===== */
int sym.__cfi_check (int esi, int edx) {
    loc_0x800c000:
        // XREFS(132)
        x8 = 0x2444   // 'D$' // [10] -r-x section size 273684 named .text
        // CODE XREFS from sym.fuck_cfi @ 0x800c874, 0x800c954, 0x800c9f8
        x8 = 0x2924   // '$)'
        x8 = 0xa43e   // '>\xa4'
        x8 = 0x2b3
        // STRING XREFS from sym.fuck_cfi @ 0x800c95c, 0x800c9fc, 0x800ca6c
        // STRING XREF from sym.unfuck_cfi @ 0x800cbec
        if (x0 == x8) // arg1 // x26
        jmp ifgt 0x800c084 // unlikely
            
    loc_0x800c084:
        // CODE XREF from sym.__cfi_check @ 0x800c014
        x8 = 0xf4c0   // '\xc0\xf4'
        x8 = 0xdf1c   // '\x1c\xdf'
        x8 = 0x309
        x8 = 0x4c55   // 'UL'
        if (x0 == x8) // arg1 // x26
        jmp ifle 0x800c144 // likely
            
    loc_0x800c144:
        // CODE XREF from sym.__cfi_check @ 0x800c098
        x8 = 0x2445   // 'E$'
        x8 = 0x2924   // '$)'
        x8 = 0xa43e   // '>\xa4'
        x8 = 0x2b3
        if (x0 == x8) // arg1 // x26
        b.eq 0x800c240 // unlikely
            
    loc_0x800c240:
        // CODE XREF from sym.__cfi_check @ 0x800c158
        x8 = sym.__cfi_check // pc
        // 0x800c000
        x8 = x8 + 0   // 0x800c000
        // pc
        jmp 0x800c254
         // do {
    loc_0x800c254:
        // CODE XREFS from sym.__cfi_check @ 0x800c080, 0x800c20c, 0x800c248
        x8 = x1 - x8  // arg2
        ror x8,x8,2
        if (x8 == 2)  // x26 // x26
        b.lo 0x800c278 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800c018
    loc_0x800c030:
        x8 = 0xd47c   // '|\xd4'
        x8 = 0x3887   // '\x878'
        x8 = 0xa351   // 'Q\xa3'
        x8 = 0xef6f   // 'o\xef'
        if (x0 == x8) // arg1
        jmp ifgt 0x800c198 // likely
            
    loc_0x800c198:
        // CODE XREF from sym.__cfi_check @ 0x800c044
        x8 = 0xd47d   // '}\xd4'
        x8 = 0x3887   // '\x878'
        x8 = 0xa351   // 'Q\xa3'
        x8 = 0xef6f   // 'o\xef'
        if (x0 == x8) // arg1
        b.eq 0x800c268 // unlikely
            
    loc_0x800c268:
        // CODE XREF from sym.__cfi_check @ 0x800c1ac
        x8 = sym.__cfi_check // pc
        // 0x800c000
        x8 = x8 + 0   // 0x800c000
        // pc
         // do {
    loc_0x800c270:
        // XREFS: CODE 0x0800c0ec  CODE 0x0800c140  CODE 0x0800c194
        // XREFS: CODE 0x0800c1d0  CODE 0x0800c218  CODE 0x0800c224
        // XREFS: CODE 0x0800c230  CODE 0x0800c23c
        if (x1 == x8) // arg2 // x26
        b.ne 0x800c294 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800c048
    loc_0x800c060:
        x8 = 0x786f   // 'ox'
        x8 = 0x32b7   // '\xb72'
        x8 = 0x2eab   // '\xab.'
        x8 = 0xe933   // '3\xe9'
        if (x0 == x8) // arg1
        b.ne 0x800c294 // likely
            
    loc_0x800c294:
        // XREFS: CODE 0x0800c074  CODE 0x0800c0e0  CODE 0x0800c134
        // XREFS: CODE 0x0800c188  CODE 0x0800c1c4  CODE 0x0800c200
        // XREFS: CODE 0x0800c264  CODE 0x0800c274
        [var_10h]! = x30
        x0 = x2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800c29c ()  // 0x800c29c(0x0, 0x0, 0x0, 0x0)
        x30 = [sp] + 0x10 // 0x178000 // lr
        // lr
         // } else {
    loc_0x800c078:
        x8 = sym.__cfi_check // pc
        // 0x800c000
        x8 = x8 + 0   // 0x800c000
        // pc
        jmp 0x800c254
        }
        return eax;
    loc_0x0800c0b4: // orphan
             x8 = 0xf4c1              // '\xc1\xf4'
             x8 = 0xdf1c              // '\x1c\xdf'
             x8 = 0x309
             x8 = 0x4c55              // 'UL'
             if (x0 == x8)            // arg1 // x26
             b.eq 0x800c21c           // unlikely

    loc_0x0800c0cc: // orphan
         x8 = 0x100
         x8 = 0x3f91              // '\x91?'
         x8 = 0xac3c              // '<\xac'
         x8 = 0x6d27              // ''m'
         if (x0 == x8)            // arg1 // x26
         b.ne 0x800c294           // likely

    loc_0x0800c0e4: // orphan
         x8 = sym.__cfi_check     // pc
                                  // 0x800c000
         x8 = x8 + 0              // 0x800c000
                                  // pc
         jmp 0x800c270

    loc_0x0800c0f0: // orphan
         // CODE XREF from sym.__cfi_check @ 0x800c02c
         x8 = 0x39ec              // '\xec9'
         x8 = 0xca65              // 'e\xca'
         x8 = 0x61ad              // '\xada'
         x8 = 0xaaf4              // '\xf4\xaa'
         if (x0 == x8)            // arg1
         b.eq 0x800c228           // unlikely

    loc_0x0800c108: // orphan
         x8 = 0xd69a              // '\x9a\xd6'
         x8 = 0x69c7              // '\xc7i'
         x8 = 0xe1ce              // '\xce\xe1'
         x8 = 0xab87              // '\x87\xab'
         if (x0 == x8)            // arg1
         b.eq 0x800c234           // unlikely

    loc_0x0800c120: // orphan
         x8 = 0xaf01
         x8 = 0x6ea
         x8 = 0x7b02
         x8 = 0xc8ec              // '\xec\xc8'
         if (x0 == x8)            // arg1
         b.ne 0x800c294           // likely

    loc_0x0800c138: // orphan
         x8 = sym.__cfi_check     // pc
                                  // 0x800c000
         x8 = x8 + 0              // 0x800c000
                                  // pc
         jmp 0x800c270

    loc_0x0800c174: // orphan
         x8 = 0xca1e              // '\x1e\xca'
         x8 = 0xff55              // 'U\xff'
         x8 = 0xc313              // '\x13\xc3'
         x8 = 0x4086              // '\x86@'
         if (x0 == x8)            // arg1 // x26
         b.ne 0x800c294           // likely

    loc_0x0800c18c: // orphan
         x8 = sym.__cfi_check     // pc
                                  // 0x800c000
         x8 = x8 + 0              // 0x800c000
                                  // pc
         jmp 0x800c270

    loc_0x0800c1c8: // orphan
         x8 = sym.__cfi_check     // pc
                                  // 0x800c000
         x8 = x8 + 0              // 0x800c000
                                  // pc
         jmp 0x800c270

    loc_0x0800c1d4: // orphan
         // CODE XREF from sym.__cfi_check @ 0x800c0b0
         x8 = 0x246e              // 'n$'
         x8 = 0xd4d0              // '\xd0\xd4'
         x8 = 0xa906
         x8 = 0x7dc5              // '\xc5}'
         if (x0 == x8)            // arg1 // x26
         b.eq 0x800c27c           // unlikely

    loc_0x0800c1ec: // orphan
         x8 = 0xbcd5              // '\xd5\xbc'
         x8 = 0x7ad8              // '\xd8z'
         x8 = 0xa0fb              // '\xfb\xa0'
         x8 = 0x7e04
         if (x0 == x8)            // arg1 // x26
         b.ne 0x800c294           // likely

    loc_0x0800c204: // orphan
         x8 = sym.__cfi_check     // pc
                                  // 0x800c000
         x8 = x8 + 0              // 0x800c000
                                  // pc
         jmp 0x800c254

    loc_0x0800c210: // orphan
         // CODE XREF from sym.__cfi_check @ 0x800c05c
         x8 = sym.__cfi_check     // pc
                                  // 0x800c000
         x8 = x8 + 0              // 0x800c000
                                  // pc
         jmp 0x800c270

    loc_0x0800c21c: // orphan
         // CODE XREF from sym.__cfi_check @ 0x800c0c8
         x8 = sym.__cfi_check     // pc
                                  // 0x800c000
         x8 = x8 + 0              // 0x800c000
                                  // pc
         jmp 0x800c270

    loc_0x0800c228: // orphan
         // CODE XREF from sym.__cfi_check @ 0x800c104
         x8 = sym.__cfi_check     // pc
                                  // 0x800c000
         x8 = x8 + 0              // 0x800c000
                                  // pc
         jmp 0x800c270

    loc_0x0800c234: // orphan
         // CODE XREF from sym.__cfi_check @ 0x800c11c
         x8 = sym.__cfi_check     // pc
                                  // 0x800c000
         x8 = x8 + 0              // 0x800c000
                                  // pc
         jmp 0x800c270

    loc_0x0800c24c: // orphan
         // CODE XREF from sym.__cfi_check @ 0x800c170
         x8 = sym.__cfi_check     // pc
                                  // 0x800c000
         x8 = x8 + 0              // 0x800c000
                                  // pc

    loc_0x0800c264: // orphan
         jmp 0x800c294

    loc_0x0800c278: // orphan
         // CODE XREFS from sym.__cfi_check @ 0x800c260, 0x800c290
                                  // lr

    loc_0x0800c27c: // orphan
         // CODE XREF from sym.__cfi_check @ 0x800c1e8
         x8 = sym.__cfi_check     // pc
                                  // 0x800c000
         x8 = x8 + 0              // 0x800c000
                                  // pc
         x8 = x1 - x8             // arg2
         ror x8,x8,2
         if (x8 == 6)             // x26
         b.lo 0x800c278           // unlikely

}

/* ===== 0x0800c320 ===== */
int sym.util_find_kallsyms (int esi, int edx) {
    loc_0x800c320:
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = sym.__cfi_check // 0x800c000
        x19 = [x21]   // 0xdc // 220 // sym.__cfi_check
        if x19 jmp 0x800c368 // likely
            
    loc_0x800c368:
        // CODE XREFS from sym.util_find_kallsyms @ 0x800c338, 0x800c360
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        0x0800c378
         // } else {
    loc_0x800c33c:
        x20 = sym.__cfi_check // 0x800c000
        x20 = x20 + 0 // 0x800c000
        // sym.__cfi_check
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // sym.__cfi_check
        0x800c348 ()  // 0x800c348(0x800c000, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x800c364 // unlikely
        }
        return eax;
    loc_0x800c350:
        x19 = [x20 + 0x28] // 0xdb // 219
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        [x21] = x19
        0x800c35c ()  // 0x800c35c(0x20, 0x0, 0x0, 0x0)
        jmp 0x800c368
    loc_0x0800c364: // orphan
             // CODE XREF from sym.util_find_kallsyms @ 0x800c34c
             x19 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

}

/* ===== 0x0800c37c ===== */
int sym.util_kallsyms_lookup_name (int esi, int edx) {
    loc_0x800c37c:
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = sym.__cfi_check // 0x800c000
        x8 = [x21]    // 0xdc // 220 // sym.__cfi_check
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if !x8 jmp 0x800c3a8 // unlikely
            
    loc_0x800c3a8:
        // CODE XREF from sym.util_kallsyms_lookup_name @ 0x800c398
        x20 = sym.__cfi_check // 0x800c000
        x20 = x20 + 0 // 0x800c000
        // sym.__cfi_check
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // sym.__cfi_check
        0x800c3b4 ()  // 0x800c3b4(0x800c000, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x800c3d4 // unlikely
            
    loc_0x800c3d4:
        // CODE XREF from sym.util_kallsyms_lookup_name @ 0x800c3b8
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800c3d8:
        // CODE XREF from sym.util_kallsyms_lookup_name @ 0x800c3a4
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        0x0800c3e4
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800c3e8 ===== */
int sym.init_page_util (int esi, int edx) {
    loc_0x800c3e8:
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = sym.__cfi_check // 0x800c000
        x8 = [x20]    // 0xdb // 219 // sym.__cfi_check
        if x8 jmp 0x800c428 // likely
            
    loc_0x800c428:
        // CODE XREFS from sym.init_page_util @ 0x800c400, 0x800c414
        mrs x8,tcr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = 0x3c    // '<'
        ubfx x11,x8,0x10, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx x8,x8,0x1e, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = 0xc
        x10 = x10 - x11
        w11 = 0x10    // x19
        if (x8 == 3)  // x26
        csel x9,x11,x9, eq
        w11 = 0xe
        if (x8 == 1)  // x26
        x8 = [x20]    // 0xdb // 219 // x24
        x21 = sym.__cfi_check // 0x800c000
        csel x9,x11,x9, eq
        [x21] = x9    // sym.__cfi_check
        x9 = x9 - 3
        x9 = (unsigned) x10 / x9
        x10 = sym.__cfi_check // 0x800c000
        [x10] = x9    // sym.__cfi_check
        if !x8 jmp 0x800c49c // unlikely
            
    loc_0x800c49c:
        // CODE XREF from sym.init_page_util @ 0x800c474
        x19 = sym.__cfi_check // 0x800c000
        x19 = x19 + 0 // 0x800c000
        // sym.__cfi_check
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // sym.__cfi_check
        0x800c4a8 ()  // 0x800c4a8(0x800c000, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x800c4c8 // unlikely
            
    loc_0x800c4c8:
        // CODE XREFS from sym.init_page_util @ 0x800c48c, 0x800c498, 0x800c4ac
        mrs x8,ttbr1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = [x21]    // 0xdc // 220
        x11 = sym.__cfi_check // 0x800c000
        x10 = ~0
        x11 = [x11]   // 0xd2 // 210 // sym.__cfi_check
        x9 = x10 << x9
        x8 = x8 & x9
        x8 = x8 & 0xffffffffffff
        x8 = x8 - x11
         // do {
    loc_0x800c4ec:
        // CODE XREF from sym.init_page_util @ 0x800c494
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        x9 = sym.__cfi_check // 0x800c000
        [x9] = x8     // sym.__cfi_check
        (x29, 2) = 3
        0x0800c500
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800c404
    loc_0x800c418:
        x8 = [x19 + 0x28] // 0xda // 218
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x20] = x8    // x24
        0x800c424 ()  // 0x800c424(0x10, 0x0, 0x0, 0x0)
    loc_0x0800c490: // orphan
             x8 = [x0 + 0x40]         // 0xc7 // 199
             if x8 jmp 0x800c4ec      // likely

    loc_0x0800c498: // orphan
         jmp 0x800c4c8

}

/* ===== 0x0800c504 ===== */
int sym.pgtable_entry (int esi, int edx) {
    loc_0x800c504:
        sp = sp - 0x70
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x28,2)
        [sp, 0x30] = (x26,2)
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_10h
        x8 = sym.__cfi_check // 0x800c000
        x9 = [x8]     // 0xcf // 207 // sym.__cfi_check // sym.__cfi_check
        x26 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w9 == 1)  // x26
        b.lt 0x800c72c // unlikely
            
    loc_0x800c72c:
        // XREFS: CODE 0x0800c534  CODE 0x0800c538  CODE 0x0800c544
        // XREFS: CODE 0x0800c550  CODE 0x0800c6c8  CODE 0x0800c6d0
        x0 = x26      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_70h
        0x0800c74c
         // } else {
    loc_0x800c538:
        if !x0 jmp 0x800c72c // likely
        }
        return eax;
    loc_0x800c53c:
        x25 = sym.__cfi_check // 0x800c000
        x8 = [x25]    // 0xe0 // 224 // sym.__cfi_check // sym.__cfi_check
        if !x8 jmp 0x800c72c // unlikely
    loc_0x800c548:
        x10 = x9 - 1
        if (x10 == 4) // x26
        b.hi 0x800c72c // likely
    loc_0x800c554:
        x9 = x9 << 0x20
        x11 = 0x4
        x11 = x11 - x9
        x12 = xzr | 0xfffffffc00000000
        if (x11 == 0) // x26 // x26
        x9 = x9 + x12
        csinv x12,x11,xzr, ge
        if (x12 == 1) // x26 // x26
        csinc x12,x12,xzr, lt
        if (x9 == x11)
        csel x9,x9,x11, gt
        x10 = x8 - 3
        x14 = ~0
        x9 = x9 >> 0x20
        x13 = 0x3
        x10 = x14 << x10
        x9 = x12 * x9
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x27 = 0xffff  // '\xff\xff'
        x28 = sym.__cfi_check // 0x800c000
        x20 = ~x10
        x21 = x9 - 3
        x22 = x13 - x9,lsl 32
         // do {
    loc_0x800c5b0:
        // CODE XREF from sym.pgtable_entry @ 0x800c714
        x9 = x22 >> 0x20
        x10 = x8 - 3
        madd x8,x9,x10, x8
        x8 = x19 >> x8
        x8 = x8 & x20
        x26 = x0 + x8,lsl 3 // arg1
        if (x26 == x27)
        [var_8h] = xzr
        b.lo 0x800c728 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800c5d4:
        x24 = [x28]   // 0xe3 // 227
        if x24 jmp 0x800c68c // likely
            
    loc_0x800c68c:
        // CODE XREFS from sym.pgtable_entry @ 0x800c5d8, 0x800c600
        x0 = 0x126f   // 'o\x12'
        x0 = 0x5c79   // 'y\\'
        x0 = 0xb6d0   // '\xd0\xb6'
        x0 = 0x5cc    // int64_t arg1
        x1 = x24      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800c6a0 ()  // 0x800c6a0(0x5ccb6d05c79126f, 0x20, 0x0, 0x0)
        x0 = var_8h
        w2 = 0x8
        x1 = x26      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x23 = var_8h
        blr x24       // x24(0x178008, 0x1, 0x8, 0x0)
        if x0 jmp 0x800c728 // likely
            
    loc_0x800c728:
        // XREFS: CODE 0x0800c5d0  CODE 0x0800c6b8  CODE 0x0800c6c4
        // XREFS: CODE 0x0800c6d8  CODE 0x0800c6f0  CODE 0x0800c700
        // XREFS: CODE 0x0800c718
        x26 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
    loc_0x0800c5dc: // orphan
             x8 = sym.__cfi_check     // 0x800c000
             x8 = [x8]                // 0xcf // 207 // sym.__cfi_check // sym.__cfi_check
             if !x8 jmp 0x800c604     // unlikely

    loc_0x0800c5e8: // orphan
         // CODE XREF from sym.pgtable_entry @ 0x800c630
         x0 = sym.__cfi_check     // 0x800c000
         x0 = x0 + 0              // 0x800c000
                                  // sym.__cfi_check
         blr x8                   // x8(0x800c000, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800c638     // unlikely

    loc_0x0800c5f8: // orphan
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x28] = x0
         jmp 0x800c68c

    loc_0x0800c604: // orphan
         // CODE XREF from sym.pgtable_entry @ 0x800c5e4
         x0 = sym.__cfi_check     // 0x800c000
         x0 = x0 + 0              // 0x800c000
                                  // sym.__cfi_check // int64_t arg1
         0x800c60c ()             // 0x800c60c(0x800c000, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x800c638   // unlikely

    loc_0x0800c614: // orphan
         x0 = sym.__cfi_check     // 0x800c000
         x0 = x0 + 0              // 0x800c000
                                  // sym.__cfi_check // int64_t arg1
         x8 = [x0 + 0x28]         // 0xc7 // 199
         x23 = sym.__cfi_check    // 0x800c000
         [x23] = x8               // sym.__cfi_check
         0x800c628 ()             // 0x800c628(0x800c000, 0x0, 0x0, 0x0)
         x8 = [x23]               // 0xde // 222 // sym.__cfi_check
         if x8 jmp 0x800c5e8      // likely

    loc_0x0800c634: // orphan
         jmp 0x800c644

    loc_0x0800c638: // orphan
         // CODE XREFS from sym.pgtable_entry @ 0x800c5f4, 0x800c610
         x8 = sym.__cfi_check     // 0x800c000
         x8 = [x8]                // 0xcf // 207 // sym.__cfi_check
         if x8 jmp 0x800c674      // likely

    loc_0x0800c644: // orphan
         // CODE XREF from sym.pgtable_entry @ 0x800c634
         x0 = sym.__cfi_check     // 0x800c000
         x0 = x0 + 0              // 0x800c000
                                  // sym.__cfi_check // int64_t arg1
         0x800c64c ()             // 0x800c64c(0x800c000, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x800c71c   // unlikely

    loc_0x0800c654: // orphan
         x0 = sym.__cfi_check     // 0x800c000
         x0 = x0 + 0              // 0x800c000
                                  // sym.__cfi_check // int64_t arg1
         x8 = [x0 + 0x28]         // 0xc7 // 199
         x23 = sym.__cfi_check    // 0x800c000
         [x23] = x8               // sym.__cfi_check
         0x800c668 ()             // 0x800c668(0x800c000, 0x0, 0x0, 0x0)
         x8 = [x23]               // 0xde // 222 // sym.__cfi_check
         if !x8 jmp 0x800c71c     // unlikely

    loc_0x0800c674: // orphan
         // CODE XREF from sym.pgtable_entry @ 0x800c640
         x0 = sym.__cfi_check     // 0x800c000
         x0 = x0 + 0              // 0x800c000
                                  // sym.__cfi_check
         blr x8                   // x8(0x800c000, 0x0, 0x0, 0x0)
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // sym.__cfi_check
         [x28] = x0
         if !x0 jmp 0x800c720     // unlikely

    loc_0x0800c6bc: // orphan
         // CODE XREF from sym.pgtable_entry @ 0x800c724
         x9 = [x23]               // 0xde // 222 // x24
         x8 &= x9
         b.eq 0x800c728           // unlikely

    loc_0x0800c6c8: // orphan
         if !x21 jmp 0x800c72c    // likely

    loc_0x0800c6cc: // orphan
         if (x8 == 1)             // x26
         b.eq 0x800c72c           // unlikely

    loc_0x0800c6d4: // orphan
         if (x8 == 3)             // x26
         b.ne 0x800c728           // likely

    loc_0x0800c6dc: // orphan
         x8 = [x25]               // 0xe0 // 224 // sym.__cfi_check
         x10 = ~0
         x10 = x10 << x8
         x9 = x9 & x10
         x9 &= x9
         b.eq 0x800c728           // unlikely

    loc_0x0800c6f4: // orphan
         x10 = sym.__cfi_check    // 0x800c000
         x10 = [x10]              // 0xd1 // 209 // sym.__cfi_check
         x0 = x9 - x10
         b.eq 0x800c728           // unlikely

    loc_0x0800c704: // orphan
         x21 = x21 + 1            // x26
         x9 = xzr | 0xffffffff00000000
         if (w21 == 1)            // x26 // x26
         x22 = x22 + x9
         b.ne 0x800c5b0           // unlikely

    loc_0x0800c718: // orphan
         jmp 0x800c728

    loc_0x0800c71c: // orphan
         // CODE XREFS from sym.pgtable_entry @ 0x800c650, 0x800c670
         [x28] = xzr

    loc_0x0800c720: // orphan
         // CODE XREF from sym.pgtable_entry @ 0x800c688
         x23 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800c6bc

}

/* ===== 0x0800c750 ===== */
int sym.pgtable_entry_kernel (int esi, int edx) {
    loc_0x800c750:
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = sym.__cfi_check // 0x800c000
        x8 = [x20]    // 0xdb // 219 // sym.__cfi_check
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if x8 jmp 0x800c778 // likely
            
    loc_0x800c778:
        // CODE XREF from sym.pgtable_entry_kernel @ 0x800c768
        x0 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800c780 ()  // 0x800c780(0x72a9c62900000002, 0x10, 0x0, 0x0)
         // do {
    loc_0x800c784:
        // CODE XREF from sym.pgtable_entry_kernel @ 0x800c794
        (x20, 2) = 3
        (x29, 2) = 3
        0x0800c78c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800c76c
    loc_0x800c790:
        // CODE XREF from sym.pgtable_entry_kernel @ 0x800c774
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800c784
}

/* ===== 0x0800c798 ===== */
int sym.fuck_cfi (int esi, int edx) {
    loc_0x800c798:
        sp = sp - 0xa0
        [sp, 0x50] = (x29,2)
        [sp, 0x60] = (x26,2)
        [sp, 0x70] = (x24,2)
        [sp, 0x80] = (x22,2)
        [sp, 0x90] = (x20,2)
        x29 = var_50h
        x22 = sym.__cfi_check // 0x800c000
        w8 = (byte) [x22] // 0xdd // 221 // sym.__cfi_check
        [sp, 0x40] = (xzr,2)
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [sp, 0x10] = (xzr,2)
        [var_8h] = xzr
        tbnz w8,0,0x800ca90 // likely
            
    loc_0x800ca90:
        // CODE XREFS from sym.fuck_cfi @ 0x800c7d0, 0x800ca1c, 0x800cab8, 0x800cacc
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x29, 2) = 3
        sp = arg_a0h
        0x0800caa8
         // } else {
    loc_0x800c7d4:
        x23 = sym.__cfi_check // 0x800c000
        x8 = [x23]    // 0xde // 222 // sym.__cfi_check
        if x8 jmp 0x800c80c // likely
        }
        return eax;
    loc_0x800c7e0:
        x19 = sym.__cfi_check // 0x800c000
        x19 = x19 + 0 // 0x800c000
        // sym.__cfi_check
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h // sym.__cfi_check
        0x800c7ec ()  // 0x800c7ec(0x800c000, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x800caac // unlikely
            
    loc_0x800caac:
        // CODE XREFS from sym.fuck_cfi @ 0x800c7f0, 0x800c808, 0x800c818
        x0 = sym.__cfi_check // 0x800c000
        x0 = x0 + 0   // 0x800c000
        // sym.__cfi_check // int64_t arg_a0h
        0x800cab4 ()  // 0x800cab4(0x800c000, 0x0, 0x0, 0x0)
        jmp 0x800ca90
    loc_0x0800c7f4: // orphan
             x8 = [x19 + 0x28]        // 0xda // 218
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
             [x23] = x8               // x24
             0x800c800 ()             // 0x800c800(0x10, 0x0, 0x0, 0x0)
             x8 = [x23]               // 0xde // 222 // x24
             if !x8 jmp 0x800caac     // unlikely

    loc_0x0800c80c: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x800c7dc
         x0 = sym.__cfi_check     // 0x800c000
         x0 = x0 + 0              // 0x800c000
                                  // sym.__cfi_check
         blr x8                   // x8(0x800c000, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800caac     // unlikely

    loc_0x0800c81c: // orphan
         x8 = [x23]               // 0xde // 222 // x24
         w24 = 0x3c0
         w25 = 0x245f             // '_$'
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = 0xd65f             // '_\xd6'
         w25 = 0xd503
         if !x8 jmp 0x800c8cc     // unlikely

    loc_0x0800c838: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x800c8f4
         x0 = sym.__cfi_check     // 0x800c000
         x0 = x0 + 0              // 0x800c000
                                  // sym.__cfi_check
         blr x8                   // x8(0x800c000, 0x0, 0x0, 0x0)
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x0 jmp 0x800c894     // unlikely

    loc_0x0800c84c: // orphan
         x8 = 0x30                // '0'
         x8 = x0 + x8
         x8 = x8 >> 0x25          // x26
         if !x8 jmp 0x800c894     // unlikely

    loc_0x0800c85c: // orphan
         x8 = sym.__cfi_check     // 0x800c000
         x8 = x8 + 0              // 0x800c000
                                  // sym.__cfi_check
         [var_20h] = x0
         [var_8h] = w25
         [x8] = x0                // sym.__cfi_check
         w10 = [x0]               // 0xc7 // 199
         x9 = x0 + 4
         [var_20h_2] = x9
         [var_0h] = w24
         [x8 + 0x10] = x9
         [x8 + 8] = w10
         w9 = [x0 + 4]            // 0xc7 // 199
         w20 = 0x2
         [x8 + 0x18] = w9

    loc_0x0800c894: // orphan
         // CODE XREFS from sym.fuck_cfi @ 0x800c848, 0x800c858
         x8 = [x23]               // 0xde // 222 // x24
         if x8 jmp 0x800c90c      // likely

    loc_0x0800c89c: // orphan
         // CODE XREFS from sym.fuck_cfi @ 0x800c8fc, 0x800c908
         x21 = sym.__cfi_check    // 0x800c000
         x21 = x21 + 0            // 0x800c000
                                  // sym.__cfi_check
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h // sym.__cfi_check
         0x800c8a8 ()             // 0x800c8a8(0x800c000, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x800c978   // unlikely

    loc_0x0800c8b0: // orphan
         x8 = [x21 + 0x28]        // 0xdc // 220
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
         [x23] = x8               // x24
         0x800c8bc ()             // 0x800c8bc(0x0, 0x0, 0x0, 0x0)
         x8 = [x23]               // 0xde // 222 // x24
         if x8 jmp 0x800c90c      // likely

    loc_0x0800c8c8: // orphan
         jmp 0x800c980

    loc_0x0800c8cc: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x800c834
         x20 = sym.__cfi_check    // 0x800c000
         x20 = x20 + 0            // 0x800c000
                                  // sym.__cfi_check
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h // sym.__cfi_check
         0x800c8d8 ()             // 0x800c8d8(0x800c000, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x800c900   // unlikely

    loc_0x0800c8e0: // orphan
         x8 = [x20 + 0x28]        // 0xdb // 219
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h // x24
         [x23] = x8               // x24
         0x800c8ec ()             // 0x800c8ec(0x20, 0x0, 0x0, 0x0)
         x8 = [x23]               // 0xde // 222 // x24
         if x8 jmp 0x800c838      // likely

    loc_0x0800c8f8: // orphan
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800c89c

    loc_0x0800c900: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x800c8dc
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x23]               // 0xde // 222 // x24
         if !x8 jmp 0x800c89c     // unlikely

    loc_0x0800c90c: // orphan
         // CODE XREFS from sym.fuck_cfi @ 0x800c898, 0x800c8c4
         x0 = sym.__cfi_check     // 0x800c000
         x0 = x0 + 0              // 0x800c000
                                  // sym.__cfi_check
         blr x8                   // x8(0x800c000, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800c978     // unlikely

    loc_0x0800c91c: // orphan
         x8 = 0x30                // '0'
         x8 = x0 + x8
         x8 = x8 >> 0x25          // x26
         if !x8 jmp 0x800c978     // unlikely

    loc_0x0800c92c: // orphan
         x10 = sym.__cfi_check    // 0x800c000
         x10 = x10 + 0            // 0x800c000
                                  // sym.__cfi_check
         x8 = var_20h
         x9 = var_8h
         x13 = x10 + w20,uxtw 4   // 0x800c000
                                  // sym.__cfi_check
         [x8 + w20,uxtw 3] = x0
         [x9 + w20,uxtw 2] = w25
         [x13] = x0
         w14 = [x0]               // 0xc7 // 199
         w11 = w20 | 1
         x12 = x0 + 4
         [x8 + w11,uxtw 3] = x12
         x8 = x10 + w11,uxtw 4
         [x9 + w11,uxtw 2] = w24
         [x13 + 8] = w14
         [x8] = x12
         w9 = [x0 + 4]            // 0xc7 // 199
         w20 = w20 + 2
         [x8 + 8] = w9

    loc_0x0800c978: // orphan
         // CODE XREFS from sym.fuck_cfi @ 0x800c8ac, 0x800c918, 0x800c928
         x8 = [x23]               // 0xde // 222 // x24
         if x8 jmp 0x800c9ac      // likely

    loc_0x0800c980: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x800c8c8
         x21 = sym.__cfi_check    // 0x800c000
         x21 = x21 + 0            // 0x800c000
                                  // sym.__cfi_check
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h // sym.__cfi_check
         0x800c98c ()             // 0x800c98c(0x800c000, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x800ca1c   // unlikely

    loc_0x0800c994: // orphan
         x8 = [x21 + 0x28]        // 0xdc // 220
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
         [x23] = x8               // x24
         0x800c9a0 ()             // 0x800c9a0(0x0, 0x0, 0x0, 0x0)
         x8 = [x23]               // 0xde // 222 // x24
         if !x8 jmp 0x800ca1c     // unlikely

    loc_0x0800c9ac: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x800c97c
         x0 = sym.__cfi_check     // 0x800c000
         x0 = x0 + 0              // 0x800c000
                                  // sym.__cfi_check
         blr x8                   // x8(0x800c000, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800ca1c     // unlikely

    loc_0x0800c9bc: // orphan
         x8 = 0x30                // '0'
         x8 = x0 + x8
         x8 = x8 >> 0x25          // x26
         if !x8 jmp 0x800ca1c     // unlikely

    loc_0x0800c9cc: // orphan
         x10 = sym.__cfi_check    // 0x800c000
         x10 = x10 + 0            // 0x800c000
                                  // sym.__cfi_check
         x8 = var_20h
         x9 = var_8h
         x12 = x10 + w20,uxtw 4   // 0x800c000
                                  // sym.__cfi_check
         [x8 + w20,uxtw 3] = x0
         [x9 + w20,uxtw 2] = w25
         [x12] = x0
         w13 = [x0]               // 0xc7 // 199
         w11 = w20 + 1
         [x9 + w11,uxtw 2] = w24
         x9 = x0 + 4
         x10 = x10 + w11,uxtw 4
         [x8 + w11,uxtw 3] = x9
         [x12 + 8] = w13
         [x10] = x9
         w8 = [x0 + 4]            // 0xc7 // 199
         w20 = w20 + 2
         [x10 + 8] = w8
         jmp 0x800ca20

    loc_0x0800ca1c: // orphan
         // CODE XREFS from sym.fuck_cfi @ 0x800c990, 0x800c9a8, 0x800c9b8, 0x800c9c8
         if !w20 jmp 0x800ca90    // unlikely

    loc_0x0800ca20: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x800ca18
         x0 = var_20h
         x1 = var_8h
         w2 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         blr x19                  // x19(0x178020, 0x178008, 0x20, 0x0)
         if w0 jmp 0x800cabc      // likely

    loc_0x0800ca34: // orphan
         x24 = sym.__cfi_check    // 0x800c000
         x25 = sym.__cfi_check    // 0x800c000
         x26 = sym.__cfi_check    // 0x800c000
         x19 = sym.__cfi_check    // 0x800c000
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = sym.__cfi_check    // 0x800c000
         w8 = 0x1                 // x26
         x24 = x24 + 0            // 0x800c000
                                  // sym.__cfi_check
         x25 = x25 + 0            // 0x800c000
                                  // sym.__cfi_check
         x26 = x26 + 0            // 0x800c000
                                  // sym.__cfi_check
         x19 = x19 + 0            // 0x800c000
                                  // sym.__cfi_check
         [x23] = w20              // sym.__cfi_check
         [x22] = (byte) w8

    loc_0x0800ca68: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x800ca8c
         ldur x1,[x24,-8]         // 0xdf // 223
         w2 = [x24] + 0x10        // 0xdf // 223
         if ((x21 & 1) == 0)      // x26
         csel x3,x26,x25, eq
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
         0x800ca7c ()             // 0x800ca7c(0x10, -1, -1, 0x0)
         x8 = [x23]               // 0xde // 222 // x24
         x21 = x21 + 1            // x26
         if (x21 == x8)
         b.lt 0x800ca68           // unlikely

    loc_0x0800cabc: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x800ca30
         x0 = sym.__cfi_check     // 0x800c000
         x0 = x0 + 0              // 0x800c000 // " " // int64_t arg_a0h // sym.__cfi_check
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         0x800cac8 ()             // 0x800cac8(0x800c000, 0x20, 0x0, 0x0)
         jmp 0x800ca90

}

/* ===== 0x08012a74 ===== */
int sym.init_hide_list (int esi, int edx) {
    loc_0x8012a74:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8012000
        x0 = x0 + 0   // "z"
        0x8012a84 ()  // 0x8012a84(0x8012000, 0x0, 0x0, 0x0)
        x8 = 0x8012000
        [x8] = x0     // "z"
        x0 = 0x8012000
        x0 = x0 + 0
        0x8012a98 ()  // 0x8012a98(0x8012000, 0x0, 0x0, 0x0)
        x8 = 0x8012000
        [x8] = x0
        (x29, 2) = 3  // sp // "sB" lr // sp
        // lr
         // (break)
}

/* ===== 0x080136c8 ===== */
int sym.shadow_fault_init (int esi, int edx) {
    loc_0x80136c8:
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8013000
        x0 = x0 + 0
        0x80136dc ()  // 0x80136dc(0x8013000, 0x0, 0x0, 0x0)
        x19 = 0x8013000
        [x19] = x0
        x0 = 0x8013000
        x0 = x0 + 0
        0x80136f0 ()  // 0x80136f0(0x8013000, 0x0, 0x0, 0x0)
        x8 = [x19]    // 0xda // 218
        x9 = 0x8013000
        [x9] = x0
        if x8 jmp 0x8013710 // likely
            
    loc_0x8013710:
        if x0 jmp 0x8013728 // unlikely
            
    loc_0x8013728:
        x0 = 0x8013000
        x0 = x0 + 0
        0x8013730 ()  // 0x8013730(0x8013000, 0x0, 0x0, 0x0)
        if x0 jmp 0x801374c // likely
            
    loc_0x801374c:
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8013000
        x2 = 0x8013000
        x3 = 0x8013000
        x0 = x0 + 0
        x2 = x2 + 0
        x3 = x3 + 0
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x801376c ()  // 0x801376c(0x8013000, 0x0, 0x8013000, 0x8013000)
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if w0 jmp 0x801378c // likely
            
    loc_0x801378c:
        x0 = 0x8013000
        x0 = x0 + 0
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        w2 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        0x801379c ()  // 0x801379c(0x8013000, 0x20, 0x10, 0x0)
         // do {
    loc_0x80137a0:
        // CODE XREF from sym.shadow_fault_init @ 0x8013748
        x0 = 0x8013000
        x0 = x0 + 0
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        0x80137ac ()  // 0x80137ac(0x8013000, 0x10, 0x0, 0x0)
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0801371c: // orphan
             // CODE XREF from sym.shadow_fault_init @ 0x801370c
             0x801371c ()             // 0x801371c(0x0, 0x0, 0x0, 0x0)
             w19 = ~0x5
             jmp 0x80137b0

    loc_0x080137b0: // orphan
         // CODE XREFS from sym.shadow_fault_init @ 0x8013724, 0x8013788
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         (x20, 2) = 3
         (x29, 2) = 3
         

}

/* ===== 0x080300f8 ===== */
int sym.brk_bp_init (int esi, int edx) {
    loc_0x80300f8:
        [sp, -0x30]! = (x29,2) // " "
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8030000
        x21 = 0x8030000
        x0 = x0 + 0
        [x21] = (byte) wzr
        0x8030118 ()  // 0x8030118(0x8030000, 0x0, 0x0, 0x0)
        x19 = 0x8030000
        [x19] = x0
        x0 = 0x8030000
        x0 = x0 + 0
        0x803012c ()  // 0x803012c(0x8030000, 0x0, 0x0, 0x0)
        x8 = 0x8030000
        [x8] = x0
        if !x0 jmp 0x8030294 // unlikely
            
    loc_0x8030294:
        x0 = 0x8030000
        x0 = x0 + 0
        jmp 0x80302b4
         // do {
    loc_0x80302b4:
        // CODE XREFS from sym.brk_bp_init @ 0x803029c, 0x80302a8
        0x80302b4 ()  // 0x80302b4(0x0, 0x0, 0x0, 0x0)
        w19 = ~0x5
        jmp 0x8030280
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803013c
    loc_0x8030144:
        x0 = 0x8030000
        x0 = x0 + 0
        0x803014c ()  // 0x803014c(0x8030000, 0x0, 0x0, 0x0)
        x8 = 0x8030000
        [x8] = x0
        x0 = 0x8030000
        x0 = x0 + 0
        0x8030160 ()  // 0x8030160(0x8030000, 0x0, 0x0, 0x0)
        x8 = 0x8030000
        [x8] = x0
        x0 = 0x8030000
        x0 = x0 + 0
        0x8030174 ()  // 0x8030174(0x8030000, 0x0, 0x0, 0x0)
        x8 = 0x8030000
        [x8] = x0
        x0 = 0x8030000
        x0 = x0 + 0
        0x8030188 ()  // 0x8030188(0x8030000, 0x0, 0x0, 0x0)
        x8 = 0x8030000
        [x8] = x0
        if !x0 jmp 0x80302a0 // unlikely
            
    loc_0x80302a0:
        x0 = 0x8030000
        x0 = x0 + 0
        jmp 0x80302b4
    loc_0x08030198: // orphan
             x0 = 0x8030000
             x0 = x0 + 0
             0x80301a0 ()             // 0x80301a0(0x8030000, 0x0, 0x0, 0x0)
             x19 = 0x8030000
             [x19] = x0
             x0 = 0x8030000
             x0 = x0 + 0
             0x80301b4 ()             // 0x80301b4(0x8030000, 0x0, 0x0, 0x0)
             x8 = 0x8030000
             [x8] = x0
             if !x0 jmp 0x80302ac     // unlikely

    loc_0x080301c4: // orphan
         x8 = [x19]               // 0xda // 218
         if !x8 jmp 0x80302ac     // likely

    loc_0x080301cc: // orphan
         x8 = 0x8030000
         x0 = [x8]                // 0xcf // 207
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x100
         0x80301dc ()             // 0x80301dc(0x8030000, 0xdc0, 0x100, 0x0)
         if !x0 jmp 0x80302e8     // unlikely

    loc_0x080301e4: // orphan
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x22 = 0x8030000

    loc_0x080301f0: // orphan
         x0 = [x22]               // 0xdd // 221 // x26
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x440
         0x80301fc ()             // 0x80301fc(0x1, 0xdc0, 0x440, 0x0)
         [x19 + x20,lsl 3] = x0
         if !x0 jmp 0x80302c0     // unlikely

    loc_0x08030208: // orphan
         x20 = x20 + 1
         if (x20 == 0x20)         // x26
         b.ne 0x80301f0           // likely

    loc_0x08030214: // orphan
         x20 = 0x8030000
         x8 = 0x8030000
         x20 = x20 + 0
         x11 = 0x8030000
         x1 = 0x8030000
         w9 = 0x1                 // x26
         x10 = xzr | 0xfffffffe0
         x11 = x11 + 0
         [x8] = x19
         x8 = x20 + 8
         x0 = x20 + 0x30
         x1 = x1 + 0
         w2 = 0x20
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x4 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x21] = (byte) w9
         [x20] = x10
         [x20 + 8] = x8
         [x20, 0x10] = (x8,2)
         0x8030260 ()             // 0x8030260(0x8030030, 0x8030000, 0x200000, 0x0)
         x8 = 0x8030000
         x1 = [x8]                // 0xcf // 207
         w0 = 0x20                // x24
         w3 = 0x9c4
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8030278 ()             // 0x8030278(0x20, 0xfffffffe0, 0x8030000, 0x9c4)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08030280: // orphan
         // CODE XREFS from sym.brk_bp_init @ 0x80302bc, 0x80302fc
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         

    loc_0x080302ac: // orphan
         x0 = 0x8030000
         x0 = x0 + 0

    loc_0x080302c0: // orphan
         if !w20 jmp 0x80302e0    // unlikely

    loc_0x080302c4: // orphan
         x20 = x20 - 1

    loc_0x080302c8: // orphan
         x0 = [x19 + x20,lsl 3]   // 0xdb000000da // 940597838042 // x26
         0x80302cc ()             // 0x80302cc(0x1, 0x0, 0x0, 0x0)
         x8 = x20 + 1
         x20 = x20 - 1
         if (x8 == 1)             // x26
         jmp ifgt 0x80302c8       // likely

    loc_0x080302e0: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80302e4 ()             // 0x80302e4(0x10, 0x0, 0x0, 0x0)

    loc_0x080302e8: // orphan
         x0 = 0x8030000
         x0 = x0 + 0
         w1 = ~0xb
         w19 = ~0xb
         0x80302f8 ()             // 0x80302f8(0x8030000, 0xfffffff4, 0x0, 0x0)
         jmp 0x8030280

}

/* ===== 0x0800edcc ===== */
int sym.ioctl_hook_install (int esi, int edx) {
    loc_0x800edcc:
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = 0x800e000
        w8 = (byte) [x21] // 0xdc // 220
        tbz w8,0,0x800ee00 // unlikely
            
    loc_0x800ee00:
        x0 = 0x800e000
        x0 = x0 + 0   // int64_t arg1
        0x800ee08 ()  // 0x800ee08(0x800e000, 0x0, 0x0, 0x0)
        if x0 jmp 0x800ee24 // likely
            
    loc_0x800ee24:
        x22 = 0x800e000
        [x22] = x0
        w2 = [x0]     // 0xc7 // 199 // x26
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800e000
        x0 = x0 + 0   // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800ee40 ()  // 0x800ee40(0x800e000, 0x0, 0x1, 0x0)
        x0 = 0x800e000
        x2 = 0x800e000
        x3 = 0x800e000
        x0 = x0 + 0   // int64_t arg1
        x2 = x2 + 0
        x3 = x3 + 0
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800ee60 ()  // 0x800ee60(0x800e000, 0x0, 0x800e000, 0x800e000)
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if w0 jmp 0x800ee8c // likely
            
    loc_0x800ee8c:
        x0 = 0x800e000
        x0 = x0 + 0   // int64_t arg1
        w1 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        0x800ee98 ()  // 0x800ee98(0x800e000, 0x20, 0x0, 0x0)
        x8 = 0x800e000
        [x22] = xzr
        [x8] = xzr
        jmp 0x800edec
         // do {
    loc_0x800edec:
        // CODE XREFS from sym.ioctl_hook_install @ 0x800ee20, 0x800ee88, 0x800eea8
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        0x0800edfc
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x080137c0 ===== */
int sym.shadow_fault_exit (int esi, int edx) {
    loc_0x80137c0:
        sp = sp - 0xa0
        [sp, 0x40] = (x29,2)
        [sp, 0x50] = (x28,2)
        [sp, 0x60] = (x26,2)
        [sp, 0x70] = (x24,2)
        [sp, 0x80] = (x22,2)
        [sp, 0x90] = (x20,2)
        x29 = var_40h
        x8 = 0x8013000
        w8 = (byte) [x8] // 0xcf // 207
        x9 = var_8h
        [sp, 8] = (x9,2)
        if w8 jmp 0x80139f8 // unlikely
            
    loc_0x80139f8:
        x0 = 0x8013000
        x0 = x0 + 0   // int64_t arg_a0h
        0x8013a00 ()  // 0x8013a00(0x8013000, 0x0, 0x0, 0x0)
        if w0 jmp 0x8013a88 // likely
            
    loc_0x8013a88:
        w1 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8013000
        x0 = x0 + 0   // int64_t arg_a0h
        0x8013a94 ()  // 0x8013a94(0x8013000, 0x0, 0x0, 0x0)
        jmp 0x80137f4
    loc_0x080137f4: // orphan
             // CODE XREFS from sym.shadow_fault_exit @ 0x8013a84, 0x8013a98
             x0 = 0x8013000
             x0 = x0 + 0              // int64_t arg_a0h
             0x80137fc ()             // 0x80137fc(0x8013000, 0x0, 0x0, 0x0)
             x0 = 0x8013000
             x0 = x0 + 0              // int64_t arg_a0h
             0x8013808 ()             // 0x8013808(0x8013000, 0x0, 0x0, 0x0)
             x8 = 0x8013000
             x8 = x8 + 0
             x9 = [x8]                // 0xcf // 207
             x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             if (x9 == x8)            // x26 // x26
             b.eq 0x8013848           // likely

    loc_0x08013824: // orphan
         x10 = [var_8h]           // 0x4 // 4
         x11 = [x8 + 8]           // 0xcf // 207
         x12 = var_8h
         [x9 + 8] = x12
         [var_8h] = x9
         [x11] = x10
         [x10 + 8] = x11
         [x8] = x8
         [x8 + 8] = x8

    loc_0x08013848: // orphan
         x0 = 0x8013000
         x0 = x0 + 0              // int64_t arg_a0h
         0x8013850 ()             // 0x8013850(0x8013000, 0x0, 0x0, 0x0)
         x25 = [var_8h]           // 0x4 // 4 // x9
         x20 = var_8h
         if (x20 == x25)          // x26
         b.eq 0x80139cc           // unlikely

    loc_0x08013864: // orphan
         x22 = 0x1                // x26
         x21 = 0x8013000
         x22 = 0x400
         w24 = 0x2508
         jmp 0x80138a0

    loc_0x08013878: // orphan
         // CODE XREF from sym.shadow_fault_exit @ 0x80139c8
         ldur x8,[x25,-0x20]      // 0xe0 // 224
         x0 = x8 + 0x68           // int64_t arg_a0h
         0x8013880 ()             // 0x8013880(0x67, 0x0, 0x0, 0x0)
         ldur x0,[x25,-0x20]      // 0xe0 // 224 // int64_t arg_a0h
         0x8013888 ()             // 0x8013888(-1, 0x0, 0x0, 0x0)

    loc_0x0801388c: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
         0x8013890 ()             // 0x8013890(0x10, 0x0, 0x0, 0x0)
         if (x20 == x26)
         x25 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.eq 0x80139cc           // unlikely

    loc_0x080138a0: // orphan
         // CODE XREF from sym.shadow_fault_exit @ 0x8013874
         x26 = [x25]              // 0xe0 // 224
         w8 = [x25 + 0x2500]      // 0xe0 // 224
         if !w8 jmp 0x80138f4     // unlikely

    loc_0x080138ac: // orphan
         x0 = var_18h             // int64_t arg_a0h
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x30] = (xzr,2)
         [sp, 0x20] = (xzr,2)
         [var_18h] = xzr
         0x80138c0 ()             // 0x80138c0(0x178018, 0x0, 0x0, 0x0)
         x19 = x25 + x24

    loc_0x080138c8: // orphan
         // CODE XREF from sym.shadow_fault_exit @ 0x80138e4
         x1 = var_18h
         w2 = 0x2
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
         0x80138d4 ()             // 0x80138d4(0x10, 0x178018, 0x2, 0x0)
         w8 = [x25 + 0x2500]      // 0xe0 // 224
         if !w8 jmp 0x80138e8     // unlikely

    loc_0x080138e0: // orphan
         0x80138e0 ()             // 0x80138e0(0x0, 0x0, 0x0, 0x0)
         jmp 0x80138c8

    loc_0x080138e8: // orphan
         x1 = var_18h
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
         0x80138f0 ()             // 0x80138f0(0x10, 0x178018, 0x0, 0x0)

    loc_0x080138f4: // orphan
         ldur x8,[x25,-0x20]      // 0xe0 // 224
         x19 = x25 - 0x30
         if !x8 jmp 0x801388c     // unlikely

    loc_0x08013900: // orphan
         x0 = x8 + 0x68           // int64_t arg_a0h
         0x8013904 ()             // 0x8013904(0x72a9c6290000006a, 0x0, 0x0, 0x0)
         ldur x9,[x25,-0x20]      // 0xe0 // 224
         ldur x8,[x25,-0x30]      // 0xe0 // 224
         x9 = [x9 + 0x40]         // 0xd0 // 208
         ubfx x10,x8,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = [x9 + x10,lsl 3]   // 0xd1000000d0 // 897648165072
         tbz w11,1,0x8013878      // unlikely

    loc_0x08013920: // orphan
         x11 = x11 & 3
         if (x11 == 1)            // x26
         b.eq 0x8013878           // unlikely

    loc_0x0801392c: // orphan
         x10 = [x9 + x10,lsl 3]   // 0xd1000000d0 // 897648165072
         x9 = [x21]               // 0xdc // 220 // x26
         x11 = x8 >> 0x12
         x11 = x11 & 0xff8
         x10 = x10 & 0xfffffffff000
         x10 = x10 | x11
         x10 = x10 - x9
         x11 = [x10]              // 0xd1 // 209
         tbz w11,1,0x8013878      // unlikely

    loc_0x08013950: // orphan
         x11 = x11 & 3
         if (x11 == 1)            // x26
         b.eq 0x8013878           // unlikely

    loc_0x0801395c: // orphan
         x10 = [x10]              // 0xd1 // 209 // x26
         x8 = x8 >> 9
         x8 = x8 & 0xff8
         x8 = x8 - x9
         x10 = x10 & 0xfffffffff000
         x27 = x10 + x8
         b.eq 0x8013878           // unlikely

    loc_0x08013978: // orphan
         x28 = [x27]              // 0xe2 // 226 // x26
         if ((x28 & x22) == 0)    // x26
         b.eq 0x8013878           // unlikely

    loc_0x08013984: // orphan
         w23 = (byte) [x25 + 0x14] // 0xe0 // 224
         ubfx x0,x28,0xc, 0x24    // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
         0x801398c ()             // 0x801398c(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8013878     // likely

    loc_0x08013994: // orphan
         ldur x8,[x25,-8]         // 0xe0 // 224
         x9 = x23 << 0x36
         x8 = x8 | x9
         x9 = ~0x400
         x8 = x8 ^ x28
         x9 = 0xff7f              // '\x7f\xff'
         if ((x8 & x9) == 0)      // x26
         b.ne 0x8013878           // likely

    loc_0x080139b4: // orphan
         x8 = [x27]               // 0xe2 // 226 // x26
         ldur x0,[x25,-0x20]      // 0xe0 // 224 // int64_t arg_a0h
         ldur x1,[x25,-0x30]      // 0xe0 // 224
         x2 = x8 & 0xffbfffffffffffff // x26
         0x80139c4 ()             // 0x80139c4(-1, -1, 0x1, 0x0)
         jmp 0x8013878

    loc_0x080139cc: // orphan
         x0 = 0x8013000
         x0 = x0 + 0              // int64_t arg_a0h
         0x80139d4 ()             // 0x80139d4(0x8013000, 0x0, 0x0, 0x0)
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_a0h
         

    loc_0x08013a08: // orphan
         x19 = 0x8013000
         w8 = [x19]               // 0xda // 218
         if !w8 jmp 0x8013a38     // unlikely

    loc_0x08013a14: // orphan
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = 0x1386             // '\x86\x13'

    loc_0x08013a1c: // orphan
         w0 = 0x1                 // x26
         0x8013a20 ()             // 0x8013a20(0x1, 0x0, 0x0, 0x0)
         w8 = [x19]               // 0xda // 218
         if (w20 == w21)          // x26
         b.hi 0x8013a38           // likely

    loc_0x08013a30: // orphan
         w20 = w20 + 1
         if w8 jmp 0x8013a1c      // likely

    loc_0x08013a38: // orphan
         w8 = [x19]               // 0xda // 218
         if !w8 jmp 0x8013a50     // likely

    loc_0x08013a40: // orphan
         w1 = [x19]               // 0xda // 218
         x0 = 0x8013000
         x0 = x0 + 0              // int64_t arg_a0h
         0x8013a4c ()             // 0x8013a4c(0x8013000, 0x0, 0x0, 0x0)

    loc_0x08013a50: // orphan
         x0 = 0x8013000
         x0 = x0 + 0              // int64_t arg_a0h
         0x8013a58 ()             // 0x8013a58(0x8013000, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8013a70     // unlikely

    loc_0x08013a60: // orphan
         w1 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x8013000
         x0 = x0 + 0              // int64_t arg_a0h
         0x8013a6c ()             // 0x8013a6c(0x8013000, 0x0, 0x0, 0x0)

    loc_0x08013a70: // orphan
         x0 = 0x8013000
         x8 = 0x8013000
         x0 = x0 + 0              // int64_t arg_a0h
         [x8] = xzr
         0x8013a80 ()             // 0x8013a80(0x8013000, 0x0, 0x0, 0x0)
         jmp 0x80137f4

}

/* ===== 0x08011e80 ===== */
int sym.ptrace_hook_install (int esi, int edx) {
    loc_0x8011e80:
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x8011000
        x8 = [x20]    // 0xdb // 219
        if !x8 jmp 0x8011eac // unlikely
            
    loc_0x8011eac:
        x0 = 0x8011000
        x0 = x0 + 0   // int64_t arg1
        0x8011eb4 ()  // 0x8011eb4(0x8011000, 0x0, 0x0, 0x0)
        [x20] = x0    // x24
        if x0 jmp 0x8011ed4 // likely
            
    loc_0x8011ed4:
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8011000
        x2 = 0x8011000
        x3 = 0x8011000
        x0 = x0 + 0   // int64_t arg1
        x2 = x2 + 0
        x3 = x3 + 0
        0x8011ef0 ()  // 0x8011ef0(0x8011000, 0x0, 0x8011000, 0x8011000)
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if w0 jmp 0x8011f10 // likely
            
    loc_0x8011f10:
        x0 = 0x8011000
        x0 = x0 + 0   // int64_t arg1
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        0x8011f1c ()  // 0x8011f1c(0x8011000, 0x10, 0x0, 0x0)
        [x20] = xzr   // x24
        jmp 0x8011e9c
         // do {
    loc_0x8011e9c:
        // CODE XREFS from sym.ptrace_hook_install @ 0x8011ed0, 0x8011f0c, 0x8011f24
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        (x20, 2) = 3
        (x29, 2) = 3  // x9
        // x9
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800e128 ===== */
int sym.paradise_gyro_init (int esi, int edx) {
    loc_0x800e128:
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x800e000
        w8 = (byte) [x20] // 0xdb // 219
        tbz w8,0,0x800e154 // likely
            
    loc_0x800e154:
        x0 = 0x800e000
        x0 = x0 + 0   // int64_t arg1
        0x800e15c ()  // 0x800e15c(0x800e000, 0x0, 0x0, 0x0)
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if w0 jmp 0x800e188 // likely
            
    loc_0x800e188:
        x0 = 0x800e000
        x1 = 0x800e000
        x0 = x0 + 0   // int64_t arg1
        x1 = x1 + 0
        w2 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        0x800e19c ()  // 0x800e19c(0x800e000, 0x800e000, 0x10, 0x0)
        jmp 0x800e144
         // do {
    loc_0x800e144:
        // CODE XREFS from sym.paradise_gyro_init @ 0x800e184, 0x800e1a0
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        (x20, 2) = 3
        (x29, 2) = 3  // x9
        // x9
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08012568 ===== */
int sym.ptrace_hook_remove (int esi, int edx) {
    loc_0x8012568:
        [sp, -0x30]! = (x29,2) // " "
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8012000
        w8 = (byte) [x8] // 0xcf // 207
        if !w8 jmp 0x80125ac // likely
            
    loc_0x80125ac:
        x0 = 0x8012000
        x0 = x0 + 0
        0x80125b4 ()  // 0x80125b4(0x8012000, 0x0, 0x0, 0x0)
        x20 = 0x8012000
        x20 = x20 + 0
        x19 = [x20]   // 0xdb // 219
        if (x19 == x20) // x26 // x26
        b.ne 0x80125f8 // unlikely
            
    loc_0x80125f8:
        x21 = 0x100
        x21 = 0xdead  // '\xad\xde'
        jmp 0x8012620
         // do {
    loc_0x8012620:
        // CODE XREF from sym.ptrace_hook_remove @ 0x8012600
        x22 = [x19]   // 0xda // 218
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8012628 ()  // 0x8012628(0x10, 0x0, 0x0, 0x0)
        tbz w0,0,0x8012604 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08012604: // orphan
             // CODE XREF from sym.ptrace_hook_remove @ 0x801263c
             x8 = x21 + 0x22
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             [x19] = (x21,2)
             0x8012610 ()             // 0x8012610(0x10, 0x0, 0x0, 0x0)
             if (x22 == x20)          // x26
             x19 = x22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             b.eq 0x80125cc           // unlikely

    loc_0x08012630: // orphan
         (x9, 2) = 3
         [x9 + 8] = x8
         [x8] = x9
         jmp 0x8012604

}

/* ===== 0x0800eeac ===== */
int sym.ioctl_hook_remove (int esi, int edx) {
    loc_0x800eeac:
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = 0x800e000
        w8 = (byte) [x21] // 0xdc // 220
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w8 == 1)  // x26
        b.ne 0x800ef68 // likely
            
    loc_0x800ef68:
        x0 = 0x800e000
        x8 = 0x800e000
        x0 = x0 + 0   // int64_t arg1
        [x8] = (byte) wzr
        0x800ef78 ()  // 0x800ef78(0x800e000, 0x0, 0x0, 0x0)
        jmp 0x800ef94
         // do {
    loc_0x800ef94:
        // CODE XREF from sym.ioctl_hook_remove @ 0x800ef7c
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3  // x9
        // x9
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800eed0
    loc_0x800eedc:
        x0 = 0x800e000
        x0 = x0 + 0   // int64_t arg1
        0x800eee4 ()  // 0x800eee4(0x800e000, 0x0, 0x0, 0x0)
        if w0 jmp 0x800ef80 // likely
            
    loc_0x800ef80:
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800e000
        x0 = x0 + 0   // int64_t arg1
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800ef90 ()  // 0x800ef90(0x800e000, 0x0, 0x0, 0x0)
    loc_0x0800eeec: // orphan
             [x21] = (byte) wzr
             x19 = 0x800e000
             w8 = [x19]               // 0xda // 218
             if !w8 jmp 0x800ef20     // likely

    loc_0x0800eefc: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w22 = 0x1386             // '\x86\x13'

    loc_0x0800ef04: // orphan
         w0 = 0x1                 // x26
         0x800ef08 ()             // 0x800ef08(0x1, 0x0, 0x0, 0x0)
         w8 = [x19]               // 0xda // 218
         if (w21 == w22)          // x26 // x26
         b.hi 0x800ef20           // unlikely

    loc_0x0800ef18: // orphan
         w21 = w21 + 1            // x26
         if w8 jmp 0x800ef04      // likely

    loc_0x0800ef20: // orphan
         w8 = [x19]               // 0xda // 218
         if !w8 jmp 0x800ef38     // likely

    loc_0x0800ef28: // orphan
         w1 = [x19]               // 0xda // 218
         x0 = 0x800e000
         x0 = x0 + 0              // int64_t arg1
         0x800ef34 ()             // 0x800ef34(0x800e000, 0x0, 0x0, 0x0)

    loc_0x0800ef38: // orphan
         x0 = 0x800e000
         x0 = x0 + 0              // int64_t arg1
         0x800ef40 ()             // 0x800ef40(0x800e000, 0x0, 0x0, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x800ef5c     // unlikely

    loc_0x0800ef4c: // orphan
         x0 = 0x800e000
         x0 = x0 + 0              // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         0x800ef58 ()             // 0x800ef58(0x800e000, 0x10, 0x0, 0x0)

    loc_0x0800ef5c: // orphan
         x8 = 0x800e000
         [x20] = xzr              // x24
         [x8] = xzr

}

/* ===== 0x08030854 ===== */
int sym.brk_bp_exit (int esi, int edx) {
    loc_0x8030854:
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8030000
        x8 = 0x8030000
        x0 = x0 + 0
        [x8] = (byte) wzr
        0x8030870 ()  // 0x8030870(0x8030000, 0x0, 0x0, 0x0)
        0x8030874 ()  // 0x8030874(0x8030000, 0x0, 0x0, 0x0)
        0x8030878 ()  // 0x8030878(0x8030000, 0x0, 0x0, 0x0)
        x19 = 0x8030000
        x8 = [x19]    // 0xda // 218
        if !x8 jmp 0x80308b8 // unlikely
            
    loc_0x80308b8:
        (x20, 2) = 3
        (x29, 2) = 3  // x9
        // x9
         // } else {
    loc_0x8030888:
        x0 = [x8]     // 0xcf // 207
        0x803088c ()  // 0x803088c(0x72a9c62900000002, 0x0, 0x0, 0x0)
        w20 = 0x8     // "\""
        }
        return eax;
    loc_0x08030894: // orphan
             x8 = [x19]               // 0xda // 218
             x0 = [x8 + x20]          // 0xdb000000cf // 940597838031
             0x803089c ()             // 0x803089c(0x0, 0x0, 0x0, 0x0)
             x20 = x20 + 8
             if (x20 == 0x100)        // x26
             b.ne 0x8030894           // likely

    loc_0x080308ac: // orphan
         x0 = [x19]               // 0xda // 218
         0x80308b0 ()             // 0x80308b0(0x0, 0x0, 0x0, 0x0)
         [x19] = xzr

}

/* ===== 0x0800e1a4 ===== */
int sym.paradise_gyro_exit (int esi, int edx) {
    loc_0x800e1a4:
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19 // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x800e000
        w8 = (byte) [x19] // 0xda // 218
        if (w8 == 1)  // x26
        b.ne 0x800e1d0 // likely
            
    loc_0x800e1d0:
        x0 = 0x800e000
        x8 = 0x800e000
        x0 = x0 + 0
        [x8] = (byte) wzr
        0x800e1e0 ()  // 0x800e1e0(0x800e000, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // x9
        // x9
         // } else {
    loc_0x800e1c0:
        x0 = 0x800e000
        x0 = x0 + 0
        0x800e1c8 ()  // 0x800e1c8(0x800e000, 0x0, 0x0, 0x0)
        [x19] = (byte) wzr
        }
        return eax;
}

/* ===== 0x0800cc88 ===== */
int sym.read_process_memory_common (int esi, int edx) {
    loc_0x800cc88:
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x4 = sym.__cfi_check // 0x800c000
        x4 = x4 + 0   // 0x800c000 // " " // sym.__cfi_check
        w6 = 0x2
        w7 = 0x1      // x26
        x5 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800cca4 ()  // 0x800cca4(0x0, 0x0, 0x0, 0x0)
        w0 = w0 & 1
        (x29, 2) = 3  // sp // "sB" lr // sp
        // lr
         // (break)
}

/* ===== 0x0800cedc ===== */
int sym.chunk_read_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c (int esi, int edx) {
    loc_0x800cedc:
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x22 = sym.__cfi_check // 0x800c000
        x8 = [x22]    // 0xdd // 221 // sym.__cfi_check // x24
        x20 = x0 - x8 // arg1
        b.eq 0x800cf14 // unlikely
            
    loc_0x800cf14:
        // CODE XREFS from sym.chunk_read_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800cefc, 0x800cf54
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x800cf18:
        // CODE XREFS from sym.chunk_read_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800cf3c, 0x800cf68, 0x800cf9c
        // CODE XREF from sym.chunk_read_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ +0xcc
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // x9
        // x9
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800cf00
    loc_0x800cf2c:
        // CODE XREF from sym.chunk_read_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800cf10
        x0 = x0 >> 0xc // int64_t arg1
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x800cf38 ()  // 0x800cf38(0x0, 0x0, 0x0, 0x0)
        if !w0 jmp 0x800cf18 // likely
    loc_0x800cf40:
        x9 = [x23]    // 0xde // 222 // x24
        x8 = x20 + x19
        x8 = x8 - 1
        x9 = x9 - 1
        x9 = x8 >> x9
        tbnz w9,0,0x800cf14 // unlikely
    loc_0x800cf58:
        x9 = [x22]    // 0xdd // 221
        x8 = x9 + x8
        x0 = x8 >> 0xc // int64_t arg1
        0x800cf64 ()  // 0x800cf64(0x72a9c62900000, 0x0, 0x0, 0x0)
        if !w0 jmp 0x800cf18 // unlikely
    loc_0x800cf6c:
        x8 = x19 >> 0x1f
        if x8 jmp 0x800cfa0 // unlikely
            
    loc_0x800cfa0:
        // CODE XREF from sym.chunk_read_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800cf70
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        brk 0x800
         // } else {
    loc_0x800cf74:
        w2 = 0x1      // x26
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800cf80 ()  // 0x800cf80(0x20, 0x10, 0x1, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // x24
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        0x800cf90 ()  // 0x800cf90(0x0, 0x20, 0x10, 0x0)
        if (x0 == 0)  // x26 // x26
        cset w0,eq    // x26
        jmp 0x800cf18
        }
        return eax;
}

/* ===== 0x0800cfac ===== */
int sym.read_process_memory_pte (int esi, int edx) {
    loc_0x800cfac:
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23 // " "
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = sym.__cfi_check // 0x800c000
        x8 = [x8]     // 0xcf // 207 // sym.__cfi_check // x24
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w22 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x1000
        x0 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
        x19 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        0x800cfe4 ()  // 0x800cfe4(0x20, 0xcc0, 0x1000, 0x0)
        if !x0 jmp 0x800d028 // unlikely
            
    loc_0x800d028:
        // CODE XREF from sym.read_process_memory_pte @ 0x800cfe8
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800d02c:
        // CODE XREF from sym.read_process_memory_pte @ 0x800d024
        w0 = w19 & 1
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // x9
        // x9
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800d044 ===== */
int sym.chunk_read_pte_6e0ef9c12ffe46e1d24e73d5aa5ea16c (int esi, int edx) {
    loc_0x800d044:
        [sp, -0x30]! = (x29,2) // " "
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x1 = x3       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        x20 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        0x800d064 ()  // "`" // 0x800d064(0x0, 0x0, 0x0, 0x0)
        if !w0 jmp 0x800d074 // likely
            
    loc_0x800d074:
        // CODE XREF from sym.chunk_read_pte_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d068
        x8 = x19 >> 0x1f
        if x8 jmp 0x800d0b4 // unlikely
            
    loc_0x800d0b4:
        // CODE XREF from sym.chunk_read_pte_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d078
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        brk 0x800
         // } else {
    loc_0x800d07c:
        w2 = 0x1      // x26
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // x24
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        0x800d088 ()  // 0x800d088(0x20, 0x10, 0x1, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3 // x24
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg4
        0x800d098 ()  // 0x800d098(0x0, 0x20, 0x10, 0x0)
        if (x0 == 0)  // x26 // x26
        cset w0,eq    // x26
         // } else {
        }
        return eax;
    loc_0x0800d0a4: // orphan
             // CODE XREF from sym.chunk_read_pte_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d070
             // CODE XREF from sym.chunk_read_pte_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ +0x78
             (x20, 2) = 3
             x21 = [var_10h]          // 0x4 // 4
             (x29, 2) = 3             // x9
                                      // x9

}

/* ===== 0x0800d0c0 ===== */
int sym.read_process_memory_kmap (int esi, int edx) {
    loc_0x800d0c0:
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x800d000
        x8 = [x8]     // 0xcf // 207
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w22 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x1000
        x0 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x19 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        0x800d0f8 ()  // 0x800d0f8(0x0, 0xcc0, 0x1000, 0x0)
        if !x0 jmp 0x800d13c // likely
            
    loc_0x800d13c:
        // CODE XREF from sym.read_process_memory_kmap @ 0x800d0fc
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800d140:
        // CODE XREF from sym.read_process_memory_kmap @ 0x800d138
        w0 = w19 & 1
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // x9
        // x9
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800d158 ===== */
int sym.chunk_read_kmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c (int esi, int edx) {
    loc_0x800d158:
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23 // " "
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x23 = x0 >> 0xc // arg1
        x22 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = x23      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x20 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x800d184 ()  // 0x800d184(0x0, 0x0, 0x0, 0x0)
        if !w0 jmp 0x800d238 // likely
            
    loc_0x800d238:
        // CODE XREFS from sym.chunk_read_kmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d188, 0x800d230
        // CODE XREF from sym.chunk_read_kmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ +0x108
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // x9
        // x9
         // } else {
    loc_0x800d18c:
        x8 = 0x800d000
        x8 = [x8]     // 0xcf // 207
        x8 = x8 + x23,lsl 6
        b.eq 0x800d234 // unlikely
        }
        return eax;
    loc_0x800d19c:
        mrs x23,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = [x23 + 0x18] // 0xde // 222
        x10 = x22 & 0xfff
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        w9 = w9 + 1
        [x23 + 0x18] = w9
        w9 = [x23 + 0xa30] // 0xde // 222
        w9 = w9 + 1
        [x23 + 0xa30] = w9
        x9 = xzr | 0xffffffc000000000
        x9 = 0x800
        x8 = x9 + x8,lsl 6
        x8 = x8 & 0xfffffffffffff000
        x1 = x8 | x10 // int64_t arg2
        0x800d1d8 ()  // 0x800d1d8(0x20, 0xaa718a0008000000, 0x10, 0x0)
        w8 = [x23 + 0xa30] // 0xde // 222
        w8 = w8 - 1
        [x23 + 0xa30] = w8
        x8 = [x23 + 0x18] // 0xde // 222
        x8 = x8 - 1
        [x23 + 0x18] = w8
        b.eq 0x800d24c // unlikely
            
    loc_0x800d24c:
        // CODE XREFS from sym.chunk_read_kmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d1f4, 0x800d1fc
        0x800d24c ()  // 0x800d24c(0x0, 0x0, 0x0, 0x0)
        x8 = x19 >> 0x1f
        if !x8 jmp 0x800d208 // likely
            
    loc_0x800d208:
        // CODE XREF from sym.chunk_read_kmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d254
        w2 = 0x1      // x26
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800d214 ()  // 0x800d214(0x20, 0x10, 0x1, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // x24
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        0x800d224 ()  // 0x800d224(0x0, 0x20, 0x10, 0x0)
        if (x0 == 0)  // x26 // x26
        cset w0,eq    // x26
        jmp 0x800d238
    loc_0x0800d1f8: // orphan
             x8 = [x23 + 0x18]        // 0xde // 222
             if !x8 jmp 0x800d24c     // unlikely

    loc_0x0800d200: // orphan
         x8 = x19 >> 0x1f
         if x8 jmp 0x800d258      // unlikely

    loc_0x0800d234: // orphan
         // CODE XREF from sym.chunk_read_kmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d198
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800d258: // orphan
         // CODE XREF from sym.chunk_read_kmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d204
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         brk 0x800

}

/* ===== 0x0800d264 ===== */
int sym.read_process_memory_nocache_vmap (int esi, int edx) {
    loc_0x800d264:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x4 = 0x800d000
        x4 = x4 + 0
        w6 = 0x2
        x5 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w7 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x800d280 ()  // 0x800d280(0x0, 0x0, 0x0, 0x0)
        w0 = w0 & 1
        (x29, 2) = 3  // sp // "sB" lr // sp
        // lr
         // (break)
}

/* ===== 0x0800d290 ===== */
int sym.chunk_read_vmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c (int esi, int edx) {
    loc_0x800d290:
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23 // " "
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x22 = 0x703
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x22 = 0x68    // 'h'
        jmp 0x800d3b0
         // do {
    loc_0x800d3b0:
        // CODE XREF from sym.chunk_read_vmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d2b8
        x8 = 0x800d000
        x8 = [x8]     // 0xcf // 207
        tbnz w8,0x17,0x800d2dc // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800d3bc:
        jmp 0x800d2c0
         // do {
    loc_0x800d2c0:
        // CODE XREF from sym.chunk_read_vmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d3bc
        0x0800d2c0
        x8 = 0x800d000
        x8 = [x8]     // 0xcf // 207
        x9 = xzr | 0xffffffc000000000
        x9 = 0x1000
        if (x8 == x9)
        b.eq 0x800d2e0 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800d2dc:
        // CODE XREF from sym.chunk_read_vmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d3b8
        x22 = x22 + 0x800
         // do {
    loc_0x800d2e0:
        // CODE XREF from sym.chunk_read_vmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d2d8
        x23 = x21 >> 0xc
        x0 = x23      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        [var_18h] = xzr
        0x800d2ec ()  // 0x800d2ec(0x0, 0x0, 0x0, 0x0)
        if !w0 jmp 0x800d374 // likely
         // } while (?);
        }
        return eax;
    loc_0x800d2f4:
        x8 = 0x800d000
        x8 = [x8]     // 0xcf // 207
        x8 = x8 + x23,lsl 6
        [var_18h] = x8
        b.eq 0x800d374 // unlikely
            
    loc_0x800d374:
        // CODE XREFS from sym.chunk_read_vmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d2f0, 0x800d304
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800d38c
         // do {
    loc_0x800d38c:
        // CODE XREF from sym.chunk_read_vmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d378
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // x9
        // x9
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800d308
    loc_0x800d32c:
        x22 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x19 >> 0x1f
        if x8 jmp 0x800d3a4 // unlikely
            
    loc_0x800d3a4:
        // CODE XREF from sym.chunk_read_vmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d334
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        brk 0x800
         // } else {
    loc_0x800d338:
        x8 = x21 & 0xfff
        x21 = x22 + x8
        w2 = 0x1      // x26
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800d34c ()  // 0x800d34c(0x0, 0x10, 0x1, 0x0)
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        0x800d35c ()  // 0x800d35c(0x20, 0x0, 0x10, 0x0)
        if (x0 == 0)  // x26
        cset w19,eq
        // CODE XREF from sym.chunk_read_vmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ +0x11c
        x0 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800d36c ()  // 0x800d36c(0x0, 0x0, 0x10, 0x0)
        jmp 0x800d380
        }
        return eax;
    loc_0x0800d37c: // orphan
             // CODE XREF from sym.chunk_read_vmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d328
             w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800d380: // orphan
         // CODE XREF from sym.chunk_read_vmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d370
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         0x800d388 ()             // 0x800d388(0x800d000, 0x0, 0x0, 0x0)

}

/* ===== 0x0800d3c0 ===== */
int sym.read_process_memory_nocache_ioremap (int esi, int edx) {
    loc_0x800d3c0:
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23 // " "
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x800d000
        x8 = [x8]     // 0xcf // 207
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w22 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x1000
        x0 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x19 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        0x800d3f8 ()  // 0x800d3f8(0x0, 0xcc0, 0x1000, 0x0)
        if !x0 jmp 0x800d43c // likely
            
    loc_0x800d43c:
        // CODE XREF from sym.read_process_memory_nocache_ioremap @ 0x800d3fc
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800d440:
        // CODE XREF from sym.read_process_memory_nocache_ioremap @ 0x800d438
        w0 = w19 & 1
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // x9
        // x9
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800d458 ===== */
int sym.chunk_read_ioremap_6e0ef9c12ffe46e1d24e73d5aa5ea16c (int esi, int edx) {
    loc_0x800d458:
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x24,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x23 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = x0 >> 0xc // int64_t arg1
        x20 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x800d480 ()  // 0x800d480(0x0, 0x0, 0x0, 0x0)
        if !w0 jmp 0x800d530 // likely
            
    loc_0x800d530:
        // CODE XREF from sym.chunk_read_ioremap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d484
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800d548
         // do {
    loc_0x800d548:
        // CODE XREF from sym.chunk_read_ioremap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d534
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3  // x9
        // x9
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800d4ac: // orphan
             // CODE XREF from sym.chunk_read_ioremap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d578
             
             x8 = 0x800d000
             x8 = [x8]                // 0xcf // 207
             x9 = xzr | 0xffffffc000000000
             x9 = 0x1000
             if (x8 == x9)
             b.eq 0x800d4cc           // unlikely

    loc_0x0800d4c8: // orphan
         // CODE XREF from sym.chunk_read_ioremap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d574
         x22 = x22 + 0x800

    loc_0x0800d4cc: // orphan
         // CODE XREF from sym.chunk_read_ioremap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d4c4
         w1 = 0x1000
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800d4d8 ()             // 0x800d4d8(0x20, 0x1000, 0x0, 0x0)
         if !x0 jmp 0x800d538     // unlikely

    loc_0x0800d4e0: // orphan
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x0 + x24            // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800d4f0 ()             // 0x800d4f0(0x20, 0x20, 0x10, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800d4f8 ()             // 0x800d4f8(0x0, 0x20, 0x10, 0x0)
         x8 = x19 >> 0x1f
         if x8 jmp 0x800d560      // unlikely

    loc_0x0800d504: // orphan
         w2 = 0x1                 // x26
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x800d510 ()             // 0x800d510(0x20, 0x10, 0x1, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // x24
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800d520 ()             // 0x800d520(0x0, 0x20, 0x10, 0x0)
         if (x0 == 0)             // x26 // x26
         cset w19,eq              // x26
         jmp 0x800d53c

    loc_0x0800d538: // orphan
         // CODE XREF from sym.chunk_read_ioremap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d4dc
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800d53c: // orphan
         // CODE XREF from sym.chunk_read_ioremap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d52c
         // CODE XREF from sym.chunk_read_ioremap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ +0x110
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         0x800d544 ()             // 0x800d544(0x800d000, 0x0, 0x0, 0x0)

    loc_0x0800d560: // orphan
         // CODE XREF from sym.chunk_read_ioremap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d500
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         brk 0x800

    loc_0x0800d56c: // orphan
         // CODE XREF from sym.chunk_read_ioremap_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d4a4
         x8 = 0x800d000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x17,0x800d4c8   // unlikely

    loc_0x0800d578: // orphan
         jmp 0x800d4ac

}

/* ===== 0x0800d57c ===== */
int sym.write_process_memory (int esi, int edx) {
    loc_0x800d57c:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x4 = 0x800d000
        x4 = x4 + 0
        x5 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w6 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w7 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x800d598 ()  // 0x800d598(0x0, 0x0, 0x0, 0x0)
        w0 = w0 & 1
        (x29, 2) = 3  // sp // "sB" lr // sp
        // lr
         // (break)
}

/* ===== 0x0800d5a8 ===== */
int sym.chunk_write_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c (int esi, int edx) {
    loc_0x800d5a8:
        [sp, -0x30]! = (x29,2) // " "
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x800d000
        x8 = [x8]     // 0xcf // 207
        x21 = x0 - x8 // arg1
        b.eq 0x800d604 // unlikely
            
    loc_0x800d604:
        // CODE XREF from sym.chunk_write_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d5c4
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x800d608:
        // CODE XREF from sym.chunk_write_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d600
        // CODE XREF from sym.chunk_write_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ +0x78
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // x9
        // x9
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800d5c8
    loc_0x800d5d4:
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800d5e4 ()  // 0x800d5e4(0x0, 0x10, 0x0, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        0x800d5f4 ()  // 0x800d5f4(0x0, 0x0, 0x10, 0x0)
        if (x0 == 0)  // x26 // x26
        cset w0,eq    // x26
        jmp 0x800d608
    loc_0x0800d618: // orphan
             // CODE XREF from sym.chunk_write_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c @ 0x800d5d0
             w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             brk 0x800

}

/* ===== 0x0800d624 ===== */
int sym.read_process_memory_common_manual (int esi, int edx) {
    loc_0x800d624:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x4 = 0x800d000
        x4 = x4 + 0
        w6 = 0x1      // x26
        w7 = 0x1      // x26
        x5 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800d640 ()  // 0x800d640(0x0, 0x0, 0x0, 0x0)
        w0 = w0 & 1
        (x29, 2) = 3  // sp // "sB" lr // sp
        // lr
         // (break)
}

/* ===== 0x0800d650 ===== */
int sym.read_process_memory_kmap_manual (int esi, int edx) {
    loc_0x800d650:
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x800d000
        x8 = [x8]     // 0xcf // 207
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w22 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x1000
        x0 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x19 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        0x800d688 ()  // 0x800d688(0x0, 0xcc0, 0x1000, 0x0)
        if !x0 jmp 0x800d6cc // likely
            
    loc_0x800d6cc:
        // CODE XREF from sym.read_process_memory_kmap_manual @ 0x800d68c
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800d6d0:
        // CODE XREF from sym.read_process_memory_kmap_manual @ 0x800d6c8
        w0 = w19 & 1
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // x9
        // x9
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800d6e8 ===== */
int sym.read_process_memory_nocache_vmap_manual (int esi, int edx) {
    loc_0x800d6e8:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x4 = 0x800d000
        x4 = x4 + 0
        w6 = 0x1      // x26
        x5 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w7 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x800d704 ()  // 0x800d704(0x0, 0x0, 0x0, 0x0)
        w0 = w0 & 1
        (x29, 2) = 3  // sp // "sB" lr // sp
        // lr
         // (break)
}

/* ===== 0x0800d714 ===== */
int sym.read_process_memory_nocache_ioremap_manual (int esi, int edx) {
    loc_0x800d714:
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23 // " "
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x800d000
        x8 = [x8]     // 0xcf // 207
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w22 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x1000
        x0 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x19 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        0x800d74c ()  // 0x800d74c(0x0, 0xcc0, 0x1000, 0x0)
        if !x0 jmp 0x800d790 // likely
            
    loc_0x800d790:
        // CODE XREF from sym.read_process_memory_nocache_ioremap_manual @ 0x800d750
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800d794:
        // CODE XREF from sym.read_process_memory_nocache_ioremap_manual @ 0x800d78c
        w0 = w19 & 1
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // x9
        // x9
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800dcbc ===== */
int sym.pte_read_physical (int esi, int edx) {
    loc_0x800dcbc:
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x24,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w22 = ~0x15
        if !x1 jmp 0x800dde0 // likely
            
    loc_0x800dde0:
        // CODE XREFS from sym.pte_read_physical @ 0x800dcd4, 0x800dcdc, 0x800dd08, 0x800dd10
        w0 = w22      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3  // x9
        // x9
         // } else {
    loc_0x800dcd8:
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        if !x2 jmp 0x800dde0 // likely
        }
        return eax;
    loc_0x800dce0:
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = x0 >> 0xc // int64_t arg1
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x800dcec ()  // 0x800dcec(0x0, 0x0, 0x0, 0x0)
        if !w0 jmp 0x800dd0c // likely
            
    loc_0x800dd0c:
        // CODE XREF from sym.pte_read_physical @ 0x800dcf0
        w22 = ~0xd
        jmp 0x800dde0
    loc_0x0800dcf4: // orphan
             x23 = x21 & 0xfff
             x8 = x23 + x19
             if (x8 == 1)             // x26
             b.ls 0x800dd14           // likely

    loc_0x0800dd04: // orphan
         w22 = ~0x15
         jmp 0x800dde0

    loc_0x0800dd14: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x800dd00
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         0x800dd1c ()             // 0x800dd1c(0x800d000, 0x0, 0x0, 0x0)
         x24 = 0x800d000
         x8 = [x24]               // 0xdf // 223
         if !x8 jmp 0x800dd80     // likely

    loc_0x0800dd2c: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x800de5c
         x10 = 0x70f
         x9 = x21 & 0xfffffffffffff00f
         x10 = 0x60               // '`'
         x9 = x9 | x10
         [x8] = x9
         dsb ishst
         
         x8 = 0x800d000
         x9 = [x8]                // 0xcf // 207
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x9 = x9 >> 0xc
         dsb ishst
         tlbi vaae1is,x9
         dsb ish
         
         x8 = [x8]                // 0xcf // 207
         x1 = x8 + x23            // int64_t arg2 // x24
         0x800dd74 ()             // 0x800dd74(0x20, 0x20, 0x10, 0x0)
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800ddd4

    loc_0x0800dd80: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x800dd28
         w0 = 0x1000
         0x800dd84 ()             // 0x800dd84(0x1000, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800ddd0     // unlikely

    loc_0x0800dd8c: // orphan
         w1 = 0xaa                // '\xaa'
         w2 = 0x1000
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800dd98 ()             // 0x800dd98(0x0, 0xaa, 0x1000, 0x0)
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         0x800dda4 ()             // 0x800dda4(0x800d000, 0xaa, 0x1000, 0x0)
         if !x0 jmp 0x800ddc0     // unlikely

    loc_0x0800ddac: // orphan
         x8 = [x0 + 0x40]         // 0xc7 // 199
         if !x8 jmp 0x800ddc0     // unlikely

    loc_0x0800ddb4: // orphan
         ubfx x9,x22,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x8 + x9,lsl 3]    // 0xd0000000cf // 893353197775
         tbnz w10,1,0x800ddf8     // likely

    loc_0x0800ddc0: // orphan
         // XREFS: CODE 0x0800dda8  CODE 0x0800ddb0  CODE 0x0800de1c  
         // XREFS: CODE 0x0800de28  CODE 0x0800de44  CODE 0x0800de4c  
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800ddc4 ()             // 0x800ddc4(0x0, 0x0, 0x0, 0x0)
         w22 = ~0xd
         jmp 0x800ddd4

    loc_0x0800ddd0: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x800dd88
         w22 = ~0xb

    loc_0x0800ddd4: // orphan
         // CODE XREFS from sym.pte_read_physical @ 0x800dd7c, 0x800ddcc
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         0x800dddc ()             // 0x800dddc(0x800d000, 0x0, 0x0, 0x0)

    loc_0x0800ddf8: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x800ddbc
         x9 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         x8 = 0x800d000
         x8 = [x8]                // 0xcf // 207
         x10 = x22 >> 0x12
         x9 = x9 & 0xfffffffff000
         x10 = x10 & 0xff8
         x9 = x9 | x10
         x9 = x9 - x8
         x10 = [x9]               // 0xd0 // 208
         tbz w10,1,0x800ddc0      // unlikely

    loc_0x0800de20: // orphan
         x10 = x10 & 3
         if (x10 == 1)            // x26
         b.eq 0x800ddc0           // unlikely

    loc_0x0800de2c: // orphan
         x9 = [x9]                // 0xd0 // 208
         x10 = x22 >> 9
         x10 = x10 & 0xff8
         x9 = x9 & 0xfffffffff000
         x9 = x9 | x10
         x8 = x9 - x8
         b.eq 0x800ddc0           // unlikely

    loc_0x0800de48: // orphan
         x9 = [x8]                // 0xcf // 207
         if !x9 jmp 0x800ddc0     // unlikely

    loc_0x0800de50: // orphan
         x9 = 0x800d000
         [x9] = x22
         [x24] = x8
         jmp 0x800dd2c

}

/* ===== 0x0800deac ===== */
int sym.get_module_base (int esi, int edx) {
    loc_0x800deac:
        sp = sp - 0x140
        [sp, 0x100] = (x29,2)
        [sp, 0x110] = (x28,2)
        [sp, 0x120] = (x22,2)
        [sp, 0x130] = (x20,2)
        x29 = var_100h
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [sp, 0xf0] = (xzr,2)
        [sp, 0xe0] = (xzr,2)
        [sp, 0xd0] = (xzr,2)
        [sp, 0xc0] = (xzr,2)
        [sp, 0xb0] = (xzr,2)
        [sp, 0xa0] = (xzr,2)
        [sp, 0x90] = (xzr,2)
        [sp, 0x80] = (xzr,2)
        [sp, 0x70] = (xzr,2)
        [sp, 0x60] = (xzr,2)
        [sp, 0x50] = (xzr,2)
        [sp, 0x40] = (xzr,2)
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [sp, 0x10] = (xzr,2)
        [sp] = (xzr,2)
        0x800df08 ()  // 0x800df08(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800dfc4 // likely
            
    loc_0x800dfc4:
        // CODE XREFS from sym.get_module_base @ 0x800df0c, 0x800df44
        x19 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800dfe0
         // do {
    loc_0x800dfe0:
        // CODE XREF from sym.get_module_base @ 0x800dfc8
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_140h
        0x0800dff8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800df10
    loc_0x800df28:
        0x800df28 ()  // 0x800df28(0x0, 0x0, 0x0, 0x0)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800df38
         // do {
    loc_0x800df38:
        // CODE XREF from sym.get_module_base @ 0x800df30
        0x800df38 ()  // 0x800df38(0x0, 0x0, 0x0, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800df40 ()  // 0x800df40(0x0, 0x0, 0x0, 0x0)
        if !x20 jmp 0x800dfc4 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800df48:
        x21 = x20 + 0x68
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800df50 ()  // 0x800df50(0x88, 0x0, 0x0, 0x0)
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // x24
        x1 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_140h
        0x800df5c ()  // 0x800df5c(0x20, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800dfcc // unlikely
            
    loc_0x800dfcc:
        // CODE XREFS from sym.get_module_base @ 0x800df60, 0x800df7c
        x19 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800dfd0:
        // CODE XREF from sym.get_module_base @ 0x800dfc0
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800dfd4 ()  // 0x800dfd4(0x0, 0x0, 0x0, 0x0)
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // x24
        0x800dfdc ()  // 0x800dfdc(0x20, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800df34: // orphan
             // CODE XREF from sym.get_module_base @ 0x800df24
             x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800df6c: // orphan
         // CODE XREFS from sym.get_module_base @ 0x800df84, 0x800df98
         x1 = [x22 + 8]           // 0xdd // 221 // int64_t arg_140h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // x24
         0x800df74 ()             // 0x800df74(0x20, 0x22, 0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         if !x0 jmp 0x800dfcc     // unlikely

    loc_0x0800df80: // orphan
         // CODE XREF from sym.get_module_base @ 0x800df68
         x0 = [x22 + 0xa0]        // 0xdd // 221
         if !x0 jmp 0x800df6c     // unlikely

    loc_0x0800df88: // orphan
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_140h
         w2 = 0x100
         0x800df90 ()             // 0x800df90(0x0, 0x178000, 0x100, 0x0)
         if (x0 != 1)             // x26
         b.hi 0x800df6c           // unlikely

    loc_0x0800df9c: // orphan
         w1 = 0x2f                // '/'
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800dfa4 ()             // 0x800dfa4(0x0, 0x2f, 0x0, 0x0)
         if (x0 == 0)             // x26 // x26
         csinc x0,x23,x0, eq      // int64_t arg2
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_140h
         0x800dfb4 ()             // 0x800dfb4(0x0, 0x10, 0x0, 0x0)
         if !x0 jmp 0x800df6c     // likely

    loc_0x0800dfbc: // orphan
         x19 = [x22]              // 0xdd // 221
         jmp 0x800dfd0

}

/* ===== 0x0800dffc ===== */
int sym.do_config_gyro_hook (int esi, int edx) {
    loc_0x800dffc:
        sp = sp - 0x60
        // XREFS(83)
        0x0800e000
        0x0800e004
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = var_10h
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w2 = 0x10     // x19
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
        [sp] = (xzr,2)
        [var_18h] = xzr // (pstr 0x08047840) "sB"
        0x800e030 ()  // "`" // 0x800e030(0x177fa0, 0x0, 0x10, 0x0)
        if !x0 jmp 0x800e040 // unlikely
            
    loc_0x800e040:
        w8 = [var_4h] // 4
        if w8 jmp 0x800e050 // unlikely
            
    loc_0x800e050:
        x21 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = var_0h_2
        x0 = var_1ch  // int64_t arg1
        w2 = 0x4
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
        0x800e064 ()  // 0x800e064(0x17801c, 0x178008, 0x4, 0x0)
        x21 = var_ch
        x0 = var_18h  // int64_t arg1
        w2 = 0x4
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
        0x800e078 ()  // 0x800e078(0x178018, 0x17800c, 0x4, 0x0)
        x22 = 0x800e000
        x22 = x22 + 0
        x0 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800e088 ()  // 0x800e088(0x800e000, 0x17800c, 0x4, 0x0)
        (w11, 2) = 3
        (w9, 2) = 3
        x25 = 0x800e000
        x25 = x25 + 0
        x23 = x25     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w11 == 0) // x26 // x26
        x24 = x25     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x23 + 8]! = w8
        cset w8,ne
        x0 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        [x24 + 0xc]! = w9
        [x25 + 4] = w10
        [x25] = (byte) w8
        0x800e0c0 ()  // 0x800e0c0(0x800e000, 0x17800c, 0x4, 0x0)
        w8 = (byte) [x25] // 0xe0 // 224
        w9 = [x25 + 4] // 0xe0 // 224
        w2 = 0x4
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x23      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
        [sp] = (w8,2)
        0x800e0dc ()  // 0x800e0dc(0x178008, 0x800e008, 0x4, 0x0)
        w2 = 0x4
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x24      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
        0x800e0ec ()  // 0x800e0ec(0x17800c, 0x800e00c, 0x4, 0x0)
        x1 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
        w2 = 0x10     // x19
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800e0fc ()  // 0x800e0fc(0x10, 0x178000, 0x10, 0x0)
        if (x0 == 0)  // x26
        w8 = ~0xd
        csel w0,wzr,w8, eq
         // do {
    loc_0x800e10c:
        // CODE XREF from sym.do_config_gyro_hook @ 0x800e03c
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        x25 = [var_20h] // 0x4 // 4
        (x29, 2) = 3
        sp = arg_60h
        0x0800e124
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800e468 ===== */
int sym.gyro_sendto_handler_fdb83cf1522c16a856bfbce63099cb98 (int esi, int edx) {
    loc_0x800e468:
        [sp, -0x50]! = (x29,2)
        [var_10h] = x25
        [sp, 0x20] = (x24,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x800e000
        x8 = [x1]     // 0xc8 // 200 // arg2
        w9 = (byte) [x9] // 0xd0 // 208
        if !x8 jmp 0x800e7f0 // unlikely
            
    loc_0x800e7f0:
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        x25 = [var_10h] // 0x4 // 4
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        (x29, 2) = 3
        0x0800e808
         // } else {
    loc_0x800e490:
        if !w9 jmp 0x800e7f0 // unlikely
        }
        return eax;
    loc_0x800e494:
        x19 = [x8 + 0x10] // 0xcf // 207
        if (x19 == 0x200) // x26 // x26
        b.hi 0x800e7f0 // likely
    loc_0x800e4a0:
        x20 = [x8 + 8] // 0xcf // 207
        if !x20 jmp 0x800e7f0 // unlikely
    loc_0x800e4a8:
        if !x19 jmp 0x800e7f0 // unlikely
    loc_0x800e4ac:
        x8 = 0x4ec5   // '\xc5N'
        x8 = 0xc4ec   // '\xec\xc4'
        x8 = 0xec4e   // 'N\xec'
        x8 = 0x4ec4   // '\xc4N'
        umulh x8,x19,x8
        x8 = x8 >> 5
        w9 = 0x68     // 'h'
        msub x8,x8,x9, x19
        if x8 jmp 0x800e7f0 // likely
    loc_0x800e4d0:
        x8 = 0x800e000
        x8 = x8 + 0
        w22 = [x8]    // 0xcf // 207
        w23 = [x8 + 4] // 0xcf // 207
        w24 = [x8 + 8] // 0xcf // 207
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800e4e8 ()  // 0x800e4e8(0x10, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800e7f0 // unlikely
    loc_0x800e4f0:
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800e4fc ()  // 0x800e4fc(0x0, 0x10, 0x0, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // x24
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800e50c ()  // 0x800e50c(0x0, 0x20, 0x10, 0x0)
        if x0 jmp 0x800e7e8 // unlikely
            
    loc_0x800e7e8:
        // CODE XREF from sym.gyro_sendto_handler_fdb83cf1522c16a856bfbce63099cb98 @ 0x800e81c
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800e7ec ()  // 0x800e7ec(0x0, 0x0, 0x0, 0x0)
    loc_0x0800e514: // orphan
             if (w19 == 0x68)         // x26
             b.lo 0x800e7e8           // likely

    loc_0x0800e51c: // orphan
         w18 = 0xec4f             // 'O\xec'
         x17 = x19 & 0xffffffff
         w18 = 0x4ec4             // '\xc4N'
         w12 = 0x80               // '\x80'
         w13 = 0x80               // '\x80'
         x17 = x17 * x18
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w23 & 0x7fffffff    // x24
         w10 = w23 >> 0x1f
         ubfx w11,w23,0x17, 8     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w14 = w24 & 0x7fffffff   // x24
         w15 = w24 >> 0x1f
         ubfx w16,w24,0x17, 8     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil w13,w23,0, 0x17    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil w12,w24,0, 0x17    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x17 = x17 >> 0x25
         w18 = 0x68               // 'h'

    loc_0x0800e568: // orphan
         w8 = w8 + 1

    loc_0x0800e56c: // orphan
         madd x2,x0,x18, x21
         w2 = [x2 + 8]            // 0xc9 // 201
         if (w2 == 4)             // x26 // x26
         cset w3,eq
         if (w2 == 0x10)          // x26 // x26
         w3 = w22 & w3
         cset w2,eq
         tbnz w3,0,0x800e5a8      // unlikely

    loc_0x0800e58c: // orphan
         w2 = w2 & w22,lsr 1
         if w2 jmp 0x800e5a8      // unlikely

    loc_0x0800e594: // orphan
         x0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x17 == x0)           // x26
         w8 = w8 + 1
         b.hi 0x800e56c           // unlikely

    loc_0x0800e5a4: // orphan
         jmp 0x800e7c0

    loc_0x0800e5a8: // orphan
         madd x1,x0,x18, x21
         w4 = [x1 + 0x18]!        // 0xc8 // 200
         w2 &= w4
         csel w5,w23,w4, eq
         if !w9 jmp 0x800e6a4     // unlikely

    loc_0x0800e5bc: // orphan
         if !w2 jmp 0x800e6a4     // likely

    loc_0x0800e5c0: // orphan
         ubfx w2,w4,0x17, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = 0x80                // '\x80'
         w6 = w2 - w11
         bfxil w3,w4,0, 0x17      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ls 0x800e5e8           // likely

    loc_0x0800e5d4: // orphan
         if (w6 == 0x18)          // x26
         w5 = w4                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp ifgt 0x800e6a4       // unlikely

    loc_0x0800e5e0: // orphan
         w5 = w13 >> w6
         jmp 0x800e60c

    loc_0x0800e5e8: // orphan
         w6 = w11 - w2
         w5 = w13                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ls 0x800e60c           // likely

    loc_0x0800e5f4: // orphan
         if (w6 == 0x18)          // x26
         w5 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         jmp ifgt 0x800e6a4       // unlikely

    loc_0x0800e600: // orphan
         w3 = w3 >> w6
         w2 = w11                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w5 = w13                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e60c: // orphan
         // CODE XREF from sym.gyro_sendto_handler_fdb83cf1522c16a856bfbce63099cb98 @ 0x800e5e4
         w4 = w4 >> 0x1f
         if (w4 == w10)           // x26 // x26
         b.ne 0x800e634           // unlikely

    loc_0x0800e618: // orphan
         w4 = w5                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x4 + w3,uxtw
         tbz w3,0x18,0x800e62c    // likely

    loc_0x0800e624: // orphan
         x3 = x3 >> 1
         w2 = w2 + 1              // x26

    loc_0x0800e62c: // orphan
         w4 = w10                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800e66c

    loc_0x0800e634: // orphan
         w6 = w3                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w7 = w5                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = x6 - x7
         x6 = x7 - x6
         if (w3 == w5)            // x26 // x26
         csel x3,x6,x25, lo
         csel w4,w10,w4, lo
         if !x3 jmp 0x800e6a0     // likely

    loc_0x0800e654: // orphan
         tbnz w3,0x17,0x800e66c   // unlikely

    loc_0x0800e658: // orphan
         x5 = x3                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x3 << 1
         w2 = w2 - 1
         if !x3 jmp 0x800e66c     // likely

    loc_0x0800e668: // orphan
         tbz w5,0x16,0x800e658    // likely

    loc_0x0800e66c: // orphan
         // CODE XREF from sym.gyro_sendto_handler_fdb83cf1522c16a856bfbce63099cb98 @ 0x800e630
         if (w2 == 0xff)          // x26
         b.lt 0x800e680           // likely

    loc_0x0800e674: // orphan
         w5 = 0x7f80              // '\x80\x7f'
         bfi w5,w4,0x1f, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800e6a4

    loc_0x0800e680: // orphan
         if (w2 == 1)             // x26
         w5 = w4 << 0x1f
         b.lt 0x800e6a4           // likely

    loc_0x0800e68c: // orphan
         ubfiz w2,w2,0x17, 8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = w5 | w2
         w3 = w3 & 0x7fffff
         w5 = w2 | w3
         jmp 0x800e6a4

    loc_0x0800e6a0: // orphan
         w5 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e6a4: // orphan
         // CODE XREFS from sym.gyro_sendto_handler_fdb83cf1522c16a856bfbce63099cb98 @ 0x800e67c, 0x800e69c
         [x1] = w5
         madd x0,x0,x18, x21
         w3 = [x0 + 0x1c]!        // 0xc7 // 199
         w1 &= w3
         csel w4,w24,w3, eq
         if !w14 jmp 0x800e7a4    // likely

    loc_0x0800e6bc: // orphan
         if !w1 jmp 0x800e7a4     // likely

    loc_0x0800e6c0: // orphan
         ubfx w1,w3,0x17, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x80                // '\x80'
         w5 = w1 - w16
         bfxil w2,w3,0, 0x17      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ls 0x800e6e8           // likely

    loc_0x0800e6d4: // orphan
         if (w5 == 0x18)          // x26
         w4 = w3                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp ifgt 0x800e7a4       // unlikely

    loc_0x0800e6e0: // orphan
         w4 = w12 >> w5
         jmp 0x800e70c

    loc_0x0800e6e8: // orphan
         w5 = w16 - w1
         w4 = w12                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ls 0x800e70c           // likely

    loc_0x0800e6f4: // orphan
         if (w5 == 0x18)          // x26
         w4 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         jmp ifgt 0x800e7a4       // unlikely

    loc_0x0800e700: // orphan
         w2 = w2 >> w5
         w1 = w16                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w4 = w12                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e70c: // orphan
         // CODE XREF from sym.gyro_sendto_handler_fdb83cf1522c16a856bfbce63099cb98 @ 0x800e6e4
         w3 = w3 >> 0x1f
         if (w3 == w15)           // x26 // x26
         b.ne 0x800e734           // unlikely

    loc_0x0800e718: // orphan
         w3 = w4                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x3 + w2,uxtw
         tbz w2,0x18,0x800e72c    // likely

    loc_0x0800e724: // orphan
         x2 = x2 >> 1
         w1 = w1 + 1              // x26

    loc_0x0800e72c: // orphan
         w3 = w15                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800e76c

    loc_0x0800e734: // orphan
         w5 = w2                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w6 = w4                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x7 = x5 - x6
         x5 = x6 - x5
         if (w2 == w4)            // x26 // x26
         csel x2,x5,x7, lo
         csel w3,w15,w3, lo
         if !x2 jmp 0x800e7a0     // likely

    loc_0x0800e754: // orphan
         tbnz w2,0x17,0x800e76c   // unlikely

    loc_0x0800e758: // orphan
         x4 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x2 << 1
         w1 = w1 - 1
         if !x2 jmp 0x800e76c     // likely

    loc_0x0800e768: // orphan
         tbz w4,0x16,0x800e758    // likely

    loc_0x0800e76c: // orphan
         // CODE XREF from sym.gyro_sendto_handler_fdb83cf1522c16a856bfbce63099cb98 @ 0x800e730
         if (w1 == 0xff)          // x26
         b.lt 0x800e780           // likely

    loc_0x0800e774: // orphan
         w4 = 0x7f80              // '\x80\x7f'
         bfi w4,w3,0x1f, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800e7a4

    loc_0x0800e780: // orphan
         if (w1 == 1)             // x26
         w4 = w3 << 0x1f
         b.lt 0x800e7a4           // likely

    loc_0x0800e78c: // orphan
         ubfiz w1,w1,0x17, 8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = w4 | w1
         w2 = w2 & 0x7fffff
         w4 = w1 | w2
         jmp 0x800e7a4

    loc_0x0800e7a0: // orphan
         w4 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e7a4: // orphan
         // CODE XREFS from sym.gyro_sendto_handler_fdb83cf1522c16a856bfbce63099cb98 @ 0x800e77c, 0x800e79c
         [x0] = w4
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x17 == x0)           // x26
         w1 = 0x1                 // x26
         b.hi 0x800e568           // unlikely

    loc_0x0800e7bc: // orphan
         jmp 0x800e7c4

    loc_0x0800e7c0: // orphan
         // CODE XREF from sym.gyro_sendto_handler_fdb83cf1522c16a856bfbce63099cb98 @ 0x800e5a4
         tbz w1,0,0x800e7e8       // likely

    loc_0x0800e7c4: // orphan
         // CODE XREF from sym.gyro_sendto_handler_fdb83cf1522c16a856bfbce63099cb98 @ 0x800e7bc
         w2 = 0x1                 // x26
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x800e7d0 ()             // 0x800e7d0(0x0, 0x10, 0x1, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800e7e0 ()             // 0x800e7e0(0x20, 0x0, 0x10, 0x0)
         if x0 jmp 0x800e80c      // likely

    loc_0x0800e80c: // orphan
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x0 = 0x800e000
         x0 = x0 + 0              // int64_t arg1
         0x800e818 ()             // 0x800e818(0x800e000, 0x0, 0x0, 0x0)
         jmp 0x800e7e8

}

/* ===== 0x0800e820 ===== */
int sym.hook_ioctl (int esi, int edx) {
    loc_0x800e820:
        sp = sp - 0x1a0
        [sp, 0x170] = (x29,2)
        [var_180h] = x28
        [sp, 0x190] = (x20,2)
        x29 = var_170h
        w8 = [x0 + 8] // 0xc7 // 199 // arg1
        x19 = [x0 + 0x10] // 0xc7 // 199 // arg1
        jmp 0x800ed78
         // do {
    loc_0x800ed78:
        // CODE XREF from sym.hook_ioctl @ 0x800e83c
        x9 = 0x800e000
        x9 = x9 + 0
        jmp 0x800ed9c
         // } while (?);
        }
        return eax;
    loc_0x0800e854: // orphan
             // CODE XREF from sym.hook_ioctl @ 0x800ed84
             if (w8 == 0x7ea)         // x26
             x9 = 0x800e000
             b.ne 0x800e870           // likely

    loc_0x0800e860: // orphan
         w8 = 0x1                 // x26
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x9] = (byte) w8
         jmp 0x800ecf4

    loc_0x0800e870: // orphan
         w9 = (byte) [x9]         // 0xd0 // 208 // x26
         if (w9 == 1)             // x26 // x26
         b.ne 0x800e8dc           // unlikely

    loc_0x0800e87c: // orphan
         w8 = w8 - 0x30d
         if (w8 == 0xda)          // x26 // x26
         b.hi 0x800e8dc           // likely

    loc_0x0800e888: // orphan
         x9 = 0x800e000
         x9 = x9 + 0
         x10 = 0x800e890
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         br x10

    loc_0x0800e8dc: // orphan
         w0 = 0x1f7
         jmp 0x800ecf4

    loc_0x0800ecf4: // orphan
         // XREFS: CODE 0x0800e86c  CODE 0x0800e8e0  CODE 0x0800e99c  
         // XREFS: CODE 0x0800e9cc  CODE 0x0800eb80  CODE 0x0800ec14  
         // XREFS: CODE 0x0800ec80  CODE 0x0800ecd0  CODE 0x0800ed28  
         // XREFS: CODE 0x0800ed74  
         jmp 0x800ed88

    loc_0x0800ed10: // orphan
         // CODE XREF from sym.hook_ioctl @ 0x800ed98
         (x20, 2) = 3
         x28 = [var_180h]         // 0x4 // 4
         (x29, 2) = 3
         sp = arg_1a0h
         

    loc_0x0800ed84: // orphan
         // CODE XREF from sym.hook_ioctl @ 0x800edb0
         jmp 0x800e854

    loc_0x0800ed88: // orphan
         // CODE XREF from sym.hook_ioctl @ 0x800ecf4
         x8 = 0x800e000
         x8 = x8 + 0
         w9 = 0x1                 // x26
         jmp 0x800edb4

    loc_0x0800ed98: // orphan
         // CODE XREF from sym.hook_ioctl @ 0x800edc8
         jmp 0x800ed10

    loc_0x0800ed9c: // orphan
         // CODE XREF from sym.hook_ioctl @ 0x800ed80
         prfm pstl1strm,[x9]

    loc_0x0800eda0: // orphan
         ldxr w10,[x9]
         w10 = w10 + 1
         stxr w11,w10,[x9]
         if w11 jmp 0x800eda0     // unlikely

    loc_0x0800edb0: // orphan
         jmp 0x800ed84

    loc_0x0800edb4: // orphan
         // CODE XREF from sym.hook_ioctl @ 0x800ed94
         prfm pstl1strm,[x8]

    loc_0x0800edb8: // orphan
         ldxr w10,[x8]
         w10 = w10 - w9
         stxr w11,w10,[x8]
         if w11 jmp 0x800edb8     // unlikely

    loc_0x0800edc8: // orphan
         jmp 0x800ed98

}

/* ===== 0x08012aac ===== */
int sym.hide_kgsl (int esi, int edx) {
    loc_0x8012aac:
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8012af0 // likely
            
    loc_0x8012af0:
        (x20, 2) = 3
        (x29, 2) = 3
        0x08012af8
         // } else {
    loc_0x8012abc:
        x8 = 0x8012000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8012af0 // unlikely
        }
        return eax;
    loc_0x8012ac8:
        x8 = 0x8012000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8012af0 // unlikely
    loc_0x8012ad4:
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = [x0 + 0x438] // 0xc7 // 199 // int64_t arg1
        w19 = w1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x8012ae0 ()  // 0x8012ae0(-1, 0x0, 0x0, 0x0)
        x0 = [x20 + 0x430] // 0xdb // 219 // int64_t arg1
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8012aec ()  // 0x8012aec(-1, 0x0, 0x0, 0x0)
}

/* ===== 0x08012c00 ===== */
int sym.hide_cts (int esi, int edx) {
    loc_0x8012c00:
        sp = sp - 0x20
        [sp, 0x10] = (x29,2)
        x29 = var_10h
        x2 = 0x8012000
        w3 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x2 = x2 + 0   // "z"
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w1 = 0x10     // x19
        [sp] = (xzr,2)
        0x8012c24 ()  // 0x8012c24(0x177fe0, 0x10, 0x8012000, 0x0)
        w0 = 0x45     // 'E'
        0x8012c2c ()  // 0x8012c2c(0x45, 0x10, 0x8012000, 0x0)
        w0 = 0x7d     // '}'
        0x8012c34 ()  // 0x8012c34(0x7d, 0x10, 0x8012000, 0x0)
        tbz w0,0,0x8012c54 // unlikely
            
    loc_0x8012c54:
        w8 = 0x7d     // '}'
        w9 = 0x85     // '\x85'
        w0 = 0x45     // 'E'
        [x8] = x8
        [x9] = x8
        0x8012c68 ()  // 0x8012c68(0x45, 0x0, 0x0, 0x0)
        x0 = ~0x12    // int64_t arg1
        0x8012c70 ()  // 0x8012c70(0xffffffffffffffed, 0x0, 0x0, 0x0)
        x0 = ~0x12    // int64_t arg1
        0x8012c78 ()  // 0x8012c78(0xffffffffffffffed, 0x0, 0x0, 0x0)
        x0 = ~0x12    // int64_t arg1
        0x8012c80 ()  // 0x8012c80(0xffffffffffffffed, 0x0, 0x0, 0x0)
        (x29, 2) = 3
        sp = arg_20h
        0x08012c8c
         // } else {
    loc_0x8012c3c:
        w8 = 0x85     // '\x85' // "}"
        w9 = 0x7d     // '}'
        x8 = [x8]     // 0xcf // 207
        x9 = [x9]     // 0xd0 // 208
        [x9 + 8] = x8
        [x8] = x9
        }
        return eax;
}

/* ===== 0x08012c90 ===== */
int sym.shadow_entry_add (int esi, int edx) {
    loc_0x8012c90:
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8012d70 // likely
            
    loc_0x8012d70:
        w0 = ~0x15
         // do {
    loc_0x8012d74:
        // CODE XREFS from sym.shadow_entry_add @ 0x8012cf8, 0x8012fa0, 0x8012fc4, 0x8012ff0, 0x801305c
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        0x08012d8c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8012cb0
    loc_0x8012cc0:
        x8 = [x21 + 8] // 0xdc // 220
        if !x8 jmp 0x8012d70 // unlikely
    loc_0x8012cc8:
        0x8012cc8 ()  // 0x8012cc8(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8012cf4 // likely
            
    loc_0x8012cf4:
        w0 = ~0x2
        jmp 0x8012d74
    loc_0x08012cd0: // orphan
             x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8012cd4 ()             // 0x8012cd4(0x0, 0x0, 0x0, 0x0)
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8012ce0 ()             // 0x8012ce0(0x0, 0x0, 0x0, 0x0)
             if !x0 jmp 0x8012cfc     // likely

    loc_0x08012ce8: // orphan
         0x8012ce8 ()             // 0x8012ce8(0x0, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8012d00

    loc_0x08012cfc: // orphan
         x19 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08012d00: // orphan
         // CODE XREF from sym.shadow_entry_add @ 0x8012cf0
         0x8012d00 ()             // 0x8012d00(0x0, 0x0, 0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x8012d08 ()             // 0x8012d08(0x20, 0x0, 0x0, 0x0)
         if !x19 jmp 0x8012d70    // unlikely

    loc_0x08012d10: // orphan
         x8 = [x21 + 8]           // 0xdc // 220
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg1 // "z"
         x9 = x8 << 8
         x23 = x8 & x9,asr 8
         x22 = x23 & 0xfffffffffffff000
         0x8012d28 ()             // 0x8012d28(0x8012000, 0x0, 0x0, 0x0)
         x20 = x19 + 0x68
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8012d34 ()             // 0x8012d34(0x78, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8012d40 ()             // 0x8012d40(0x10, 0xfffffffffffff000, 0x0, 0x0)
         if !x0 jmp 0x8012d54     // unlikely

    loc_0x08012d48: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x22 == x8)
         b.hs 0x8012d90           // unlikely

    loc_0x08012d54: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x8012d58 ()             // 0x8012d58(0x20, 0x0, 0x0, 0x0)
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg1 // "z"
         0x8012d64 ()             // 0x8012d64(0x8012000, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8012d6c ()             // 0x8012d6c(0x10, 0x0, 0x0, 0x0)

    loc_0x08012d90: // orphan
         x8 = [x19 + 0x40]        // 0xda // 218
         x26 = x23 & 0xfffffffffffffffc // x24
         ubfx x9,x26,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x8 + x9,lsl 3]    // 0xd0000000cf // 893353197775
         tbz w10,1,0x8012f80      // unlikely

    loc_0x08012da4: // orphan
         x10 = x10 & 3
         if (x10 == 1)            // x26
         b.eq 0x8012f80           // unlikely

    loc_0x08012db0: // orphan
         x9 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         x8 = 0x8012000
         x8 = [x8]                // 0xcf // 207
         x10 = x26 >> 0x12
         x9 = x9 & 0xfffffffff000
         x10 = x10 & 0xff8
         x9 = x9 | x10
         x9 = x9 - x8
         x10 = [x9]               // 0xd0 // 208
         tbz w10,1,0x8012f80      // unlikely

    loc_0x08012dd8: // orphan
         x10 = x10 & 3
         if (x10 == 1)            // x26
         b.eq 0x8012f80           // unlikely

    loc_0x08012de4: // orphan
         x9 = [x9]                // 0xd0 // 208
         x10 = x22 >> 9
         x10 = x10 & 0xff8
         x8 = x10 - x8
         x9 = x9 & 0xfffffffff000
         x28 = x9 + x8
         b.eq 0x8012f80           // unlikely

    loc_0x08012e00: // orphan
         x27 = [x28]              // 0xe3 // 227
         x8 = 0x1                 // x26
         x8 = 0x400
         if ((x27 & x8) == 0)     // x26 // x26
         b.eq 0x8012f80           // unlikely

    loc_0x08012e14: // orphan
         ubfx x23,x27,0xc, 0x24   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8012e1c ()             // 0x8012e1c(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8012f80     // likely

    loc_0x08012e24: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x23 = 0x8012000
         x23 = x23 + 0            // "z"
         x25 = [x23]              // 0xde // 222
         jmp 0x8012e3c

    loc_0x08012e38: // orphan
         x25 = [x25]              // 0xe0 // 224

    loc_0x08012e3c: // orphan
         // CODE XREF from sym.shadow_entry_add @ 0x8012e34
         if (x25 == x23)          // x26
         b.eq 0x8012ef8           // unlikely

    loc_0x08012e44: // orphan
         ldur x8,[x25,-0x20]      // 0xe0 // 224
         if (x8 == x19)           // x26 // x26
         b.ne 0x8012e38           // likely

    loc_0x08012e50: // orphan
         x24 = x25 - 0x30
         x8 = [x24]               // 0xdf // 223
         if (x8 == x22)           // x26 // x26
         b.ne 0x8012e38           // likely

    loc_0x08012e60: // orphan
         w23 = (byte) [x25 + 0x14] // 0xe0 // 224
         0x8012e64 ()             // 0x8012e64(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8012f80     // likely

    loc_0x08012e6c: // orphan
         ldur x8,[x25,-8]         // 0xe0 // 224
         if (w23 == 0)            // x26
         cset w9,ne               // x26
         x8 = x8 | x9,lsl 54
         x9 = ~0x400
         x8 = x8 ^ x27
         x9 = 0xff7f              // '\x7f\xff'
         if ((x8 & x9) == 0)      // x26
         b.ne 0x8012f80           // likely

    loc_0x08012e90: // orphan
         x2 = x27 | 0x40000000000000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8012e9c ()             // 0x8012e9c(0x10, 0x0, 0x40000000000000, 0x0)
         if w0 jmp 0x8012f80      // likely

    loc_0x08012ea4: // orphan
         x22 = x25 + 0x10         // x19
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x19
         0x8012eac ()             // 0x8012eac(0x10, 0x0, 0x0, 0x0)
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x25 = x26
         0x8012ec0 ()             // "(" // 0x8012ec0(0x20, 0x0, 0x0, 0x0)
         w8 = 0x1                 // x26
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x19
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         [x25 + 0x14] = (byte) w8
         0x8012ed4 ()             // 0x8012ed4(0x10, 0x10, 0x0, 0x0)
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg1 // "z"
         0x8012ee0 ()             // 0x8012ee0(0x8012000, 0x10, 0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x8012ee8 ()             // 0x8012ee8(0x20, 0x10, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8012ef0 ()             // "Y" // 0x8012ef0(0x10, 0x10, 0x0, 0x0)
         jmp 0x8013058

    loc_0x08012ef8: // orphan
         w0 = 0x2550              // 'P%'
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x2
         0x8012f04 ()             // 0x8012f04(0x2550, 0xdc0, 0x2, 0x0)
         if !x0 jmp 0x8012fa4     // unlikely

    loc_0x08012f0c: // orphan
         [x0] = (x22,2)
         [x0 + 0x10] = x19
         w8 = [x21]               // 0xdc // 220
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0, 0x20] = (x28,2)
         [x0 + 0x44] = (byte) wzr
         [x0 + 0x18] = w8
         [x0 + 0x40] = wzr
         tbnz x27,0x36,0x8012fc8  // unlikely

    loc_0x08012f30: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8012f38 ()             // 0x8012f38(0x20, 0x0, 0x0, 0x0)
         w8 = 0x2538              // '8%'
         x1 = 0x8012000
         x2 = 0x8012000
         x0 = x24 + x8            // int64_t arg1
         x1 = x1 + 0              // "z"
         x2 = x2 + 0              // "z"
         [x24 + 0x2518] = xzr
         [x24 + 0x2520] = wzr
         [x24 + 0x2530] = wzr
         0x8012f60 ()             // 0x8012f60(0x72a9c62900002558, 0x8012000, 0x8012000, 0x0)
         x2 = x27 | 0x40000000000000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8012f70 ()             // 0x8012f70(0x10, 0x0, 0x40000000000000, 0x0)
         if !w0 jmp 0x8012ff4     // unlikely

    loc_0x08012f78: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8012f7c ()             // 0x8012f7c(0x20, 0x0, 0x0, 0x0)

    loc_0x08012f80: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x8012f84 ()             // 0x8012f84(0x20, 0x0, 0x0, 0x0)
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg1 // "z"
         0x8012f90 ()             // 0x8012f90(0x8012000, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8012f98 ()             // 0x8012f98(0x10, 0x0, 0x0, 0x0)
         w0 = ~0xd
         jmp 0x8012d74

    loc_0x08012fa4: // orphan
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg1 // "z"
         0x8012fac ()             // 0x8012fac(0x8012000, 0x0, 0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x8012fb4 ()             // 0x8012fb4(0x20, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8012fbc ()             // 0x8012fbc(0x10, 0x0, 0x0, 0x0)
         w0 = ~0xb
         jmp 0x8012d74

    loc_0x08012fc8: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8012fcc ()             // 0x8012fcc(0x20, 0x0, 0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x8012fd4 ()             // 0x8012fd4(0x20, 0x0, 0x0, 0x0)
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg1 // "z"
         0x8012fe0 ()             // 0x8012fe0(0x8012000, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8012fe8 ()             // 0x8012fe8(0x10, 0x0, 0x0, 0x0)
         w0 = ~0xc
         jmp 0x8012d74

    loc_0x08012ff4: // orphan
         x0 = 0x8012000
         w8 = 0x1                 // x26
         x0 = x0 + 0              // int64_t arg1 // "z"
         // XREFS(94)
         [x24 + 0x44] = (byte) w8
         0x8013004 ()             // 0x8013004(0x8012000, 0x0, 0x0, 0x0)
         x21 = [x23 + 8]          // 0xde // 222
         x22 = x24 + 0x30
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // "z"
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         0x8013020 ()             // 0x8013020(0x50, 0x0, 0x20, 0x0)
         tbz w0,0,0x8013034       // likely

    loc_0x08013028: // orphan
         [x23 + 8] = x22
         [x24, 0x30] = (x23,2)
         [x21] = x22

    loc_0x08013034: // orphan
         x0 = 0x8013000
         x0 = x0 + 0              // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8013040 ()             // 0x8013040(0x8013000, 0x10, 0x0, 0x0)
         x0 = 0x8013000
         x0 = x0 + 0              // int64_t arg1
         0x801304c ()             // 0x801304c(0x8013000, 0x10, 0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x8013054 ()             // 0x8013054(0x20, 0x10, 0x0, 0x0)

    loc_0x08013058: // orphan
         // CODE XREF from sym.shadow_entry_add @ 0x8012ef4
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8012d74

}

/* ===== 0x0801326c ===== */
int sym.shadow_entry_del (int esi, int edx) {
    loc_0x801326c:
        sp = sp - 0x70
        [sp, 0x30] = (x29,2)
        [var_40h] = x23 // " "
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_30h
        w22 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8013000
        x0 = x0 + 0   // int64_t arg1
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x8013294 ()  // 0x8013294(0x8013000, 0x0, 0x0, 0x0)
        x0 = 0x8013000
        x0 = x0 + 0   // int64_t arg1
        0x80132a0 ()  // 0x80132a0(0x8013000, 0x0, 0x0, 0x0)
        x8 = 0x8013000
        x8 = x8 + 0
        x19 = [x8]    // 0xcf // 207
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x19 == x8) // x26 // x26
        b.eq 0x8013380 // unlikely
            
    loc_0x8013380:
        x0 = 0x8013000
        x0 = x0 + 0   // int64_t arg1
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x801338c ()  // "3" // 0x801338c(0x8013000, 0x0, 0x0, 0x0)
         // do {
    loc_0x8013390:
        w19 = ~0x1
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080132cc: // orphan
             if (x10 == x8)           // x26
             x19 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             b.eq 0x8013380           // unlikely

    loc_0x080132d8: // orphan
         // CODE XREF from sym.shadow_entry_del @ 0x80132c8
         ldur w11,[x19,-0x18]     // 0xda // 218
         x10 = [x19]              // 0xda // 218
         if (w11 == w22)          // x26 // x26
         b.ne 0x80132cc           // likely

    loc_0x080132e8: // orphan
         x20 = x19 - 0x30
         x11 = [x20]              // 0xdb // 219
         if (x11 == x9)           // x26 // x26
         b.ne 0x80132cc           // likely

    loc_0x080132f8: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80132fc ()             // 0x80132fc(0x10, 0x0, 0x0, 0x0)
         tbz w0,0,0x8013310       // likely

    loc_0x08013304: // orphan
         (x9, 2) = 3              // x19
         [x9 + 8] = x8
         [x8] = x9

    loc_0x08013310: // orphan
         x8 = 0x100
         x8 = 0xdead              // '\xad\xde'
         w9 = 0x22                // '\"'
         x0 = 0x8013000
         x9 = x8 | x9
         x0 = x0 + 0              // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19] = (x8,2)
         0x8013330 ()             // 0x8013330(0x8013000, 0x0, 0x0, 0x0)
         if !x20 jmp 0x8013390    // unlikely

    loc_0x08013338: // orphan
         w8 = [x19 + 0x2500]      // 0xda // 218
         if !w8 jmp 0x80133c8     // unlikely

    loc_0x08013340: // orphan
         x0 = var_8h              // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x20] = (xzr,2)
         [sp, 0x10] = (xzr,2)
         [var_8h] = xzr
         0x8013354 ()             // 0x8013354(0x178008, 0x0, 0x0, 0x0)
         w8 = 0x2508
         x21 = x19 + x8

    loc_0x08013360: // orphan
         // CODE XREF from sym.shadow_entry_del @ 0x801337c
         x1 = var_8h              // int64_t arg2
         w2 = 0x2
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801336c ()             // 0x801336c(0x0, 0x178008, 0x2, 0x0)
         w8 = [x19 + 0x2500]      // 0xda // 218
         if !w8 jmp 0x80133bc     // unlikely

    loc_0x08013378: // orphan
         0x8013378 ()             // 0x8013378(0x0, 0x0, 0x0, 0x0)
         jmp 0x8013360

    loc_0x08013394: // orphan
         // CODE XREF from sym.shadow_entry_del @ 0x80134c4
         x0 = 0x8013000
         x0 = x0 + 0              // int64_t arg1
         0x801339c ()             // 0x801339c(0x8013000, 0x0, 0x0, 0x0)
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         (x20, 2) = 3
         (x22, 2) = 3
         x23 = [var_40h]
         (x29, 2) = 3
         sp = arg_70h
         

    loc_0x080133bc: // orphan
         x1 = var_8h              // int64_t arg2
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80133c4 ()             // 0x80133c4(0x0, 0x178008, 0x0, 0x0)

    loc_0x080133c8: // orphan
         ldur x8,[x19,-0x20]      // 0xda // 218
         if !x8 jmp 0x80134b8     // unlikely

    loc_0x080133d0: // orphan
         x0 = x8 + 0x68           // int64_t arg1
         0x80133d4 ()             // 0x80133d4(0x72a9c6290000006a, 0x0, 0x0, 0x0)
         ldur x9,[x19,-0x20]      // 0xda // 218
         ldur x8,[x19,-0x30]      // 0xda // 218
         x9 = [x9 + 0x40]         // 0xd0 // 208
         ubfx x10,x8,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = [x9 + x10,lsl 3]   // 0xd1000000d0 // 897648165072
         tbz w11,1,0x80134a4      // unlikely

    loc_0x080133f0: // orphan
         x11 = x11 & 3
         if (x11 == 1)            // x26
         b.eq 0x80134a4           // unlikely

    loc_0x080133fc: // orphan
         x10 = [x9 + x10,lsl 3]   // 0xd1000000d0 // 897648165072
         x9 = 0x8013000
         x9 = [x9]                // 0xd0 // 208
         x11 = x8 >> 0x12
         x10 = x10 & 0xfffffffff000
         x11 = x11 & 0xff8
         x10 = x10 | x11
         x10 = x10 - x9
         x11 = [x10]              // 0xd1 // 209
         tbz w11,1,0x80134a4      // unlikely

    loc_0x08013424: // orphan
         x11 = x11 & 3
         if (x11 == 1)            // x26
         b.eq 0x80134a4           // unlikely

    loc_0x08013430: // orphan
         x10 = [x10]              // 0xd1 // 209
         x8 = x8 >> 9
         x8 = x8 & 0xff8
         x8 = x8 - x9
         x10 = x10 & 0xfffffffff000
         x21 = x10 + x8
         b.eq 0x80134a4           // unlikely

    loc_0x0801344c: // orphan
         x22 = [x21]              // 0xdc // 220
         x8 = 0x1                 // x26
         x8 = 0x400
         if ((x22 & x8) == 0)     // x26
         b.eq 0x80134a4           // unlikely

    loc_0x08013460: // orphan
         w23 = (byte) [x19 + 0x14] // 0xda // 218
         ubfx x0,x22,0xc, 0x24    // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8013468 ()             // 0x8013468(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x80134a4     // likely

    loc_0x08013470: // orphan
         ldur x8,[x19,-8]         // 0xda // 218 // x26
         x9 = x23 << 0x36
         x8 = x8 | x9
         x9 = ~0x400
         x8 = x8 ^ x22
         x9 = 0xff7f              // '\x7f\xff'
         if ((x8 & x9) == 0)
         b.ne 0x80134a4           // likely

    loc_0x08013490: // orphan
         x8 = [x21]               // 0xdc // 220
         ldur x0,[x19,-0x20]      // 0xda // 218 // int64_t arg1
         ldur x1,[x19,-0x30]      // 0xda // 218 // int64_t arg2
         x2 = x8 & 0xffbfffffffffffff // int64_t arg_70h
         0x80134a0 ()             // 0x80134a0(-1, -1, 0x0, 0x0)

    loc_0x080134a4: // orphan
         ldur x8,[x19,-0x20]      // 0xda // 218
         x0 = x8 + 0x68           // int64_t arg1
         0x80134ac ()             // 0x80134ac(0x67, 0x0, 0x0, 0x0)
         ldur x0,[x19,-0x20]      // 0xda // 218 // int64_t arg1
         0x80134b4 ()             // 0x80134b4(-1, 0x0, 0x0, 0x0)

    loc_0x080134b8: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x80134bc ()             // 0x80134bc(0x20, 0x0, 0x0, 0x0)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8013394

}

/* ===== 0x080134c8 ===== */
int sym.shadow_entry_get_hits (int esi, int edx) {
    loc_0x80134c8:
        [sp, -0x60]! = (x29,2)
        [var_10h] = x27
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x801365c // likely
            
    loc_0x801365c:
        w21 = ~0x15
        jmp 0x8013674
         // do {
    loc_0x8013674:
        // CODE XREF from sym.shadow_entry_get_hits @ 0x8013660
        w0 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        x27 = [var_10h] // 0x4
        (x29, 2) = 3
        0x08013690
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80134e8
    loc_0x80134f4:
        w8 = [x19 + 0x18] // 0xda // 218
        if !w8 jmp 0x801365c // likely
    loc_0x80134fc:
        x0 = 0x8013000
        x0 = x0 + 0   // int64_t arg1
        0x8013504 ()  // 0x8013504(0x8013000, 0x0, 0x0, 0x0)
        x8 = 0x8013000
        x8 = x8 + 0
        x23 = [x8]    // 0xcf // 207
        if (x23 == x8) // x26 // x26
        b.eq 0x8013664 // unlikely
            
    loc_0x8013664:
        w21 = ~0x1
         // do {
    loc_0x8013668:
        // CODE XREFS from sym.shadow_entry_get_hits @ 0x801369c, 0x80136a4, 0x80136b8
        x0 = 0x8013000
        x0 = x0 + 0   // int64_t arg1
        0x8013670 ()  // 0x8013670(0x8013000, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08013524: // orphan
             x23 = [x23]              // 0xde // 222 // x24
             if (x23 == x8)           // x26
             b.eq 0x8013664           // unlikely

    loc_0x08013530: // orphan
         // CODE XREF from sym.shadow_entry_get_hits @ 0x8013520
         ldur w10,[x23,-0x18]     // 0xde // 222 // x26
         if (w10 == w9)           // x26
         b.ne 0x8013524           // likely

    loc_0x0801353c: // orphan
         x10 = [x19 + 8]          // 0xda // 218
         ldur x11,[x23,-0x30]     // 0xde // 222
         x12 = x10 << 8
         x10 = x10 & x12,asr 8
         x10 = x10 & 0xfffffffffffff000
         if (x11 == x10)          // x26
         b.ne 0x8013524           // likely

    loc_0x08013558: // orphan
         x21 = x23 + 0x10
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8013560 ()             // 0x8013560(0x30, 0x0, 0x0, 0x0)
         w8 = [x23 + 0x24f0]      // 0xde // 222
         w9 = [x19 + 0x18]        // 0xda // 218
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         if (w8 == w9)            // x26 // x26
         csel w22,w8,w9, lo
         0x801357c ()             // 0x801357c(0x30, 0x30, 0x0, 0x0)
         if !w22 jmp 0x8013694    // likely

    loc_0x08013584: // orphan
         w8 = 0x238
         umull x0,w22,w8          // int64_t arg1
         w1 = 0xcc0               // '\xc0\f'
         0x8013590 ()             // 0x8013590(0x0, 0xcc0, 0x0, 0x0)
         if !x0 jmp 0x80136a0     // likely

    loc_0x08013598: // orphan
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80135a0 ()             // 0x80135a0(0x0, 0x0, 0x0, 0x0)
         w8 = [x23 + 0x24f0]      // 0xde // 222
         if (w22 == w8)
         csel w24,w22,w8, lo
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w24 jmp 0x8013608    // likely

    loc_0x080135b8: // orphan
         w8 = [x23 + 0x24ec]      // 0xde // 222
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x26 = x23 + 0x168
         w27 = 0x238

    loc_0x080135c8: // orphan
         smaddl x0,w25,w27, x20   // int64_t arg1 // x24
         smaddl x1,w8,w27, x26
         w2 = 0x238
         0x80135d4 ()             // 0x80135d4(0x20, 0x1, 0x238, 0x0)
         w8 = [x23 + 0x24ec]      // 0xde // 222
         w25 = w25 + 1            // x26
         w9 = w8 + 1
         w10 = w8 + 0x10
         if (w9 == 0)             // x26 // x26
         csinc w8,w10,w8, lt
         w8 = w8 & 0xfffffff0
         w8 = w9 - w8
         if (w24 == w25)          // x26
         [x23 + 0x24ec] = w8
         b.ne 0x80135c8           // likely

    loc_0x08013604: // orphan
         w8 = [x23 + 0x24f0]      // 0xde // 222

    loc_0x08013608: // orphan
         w8 = w8 - w24
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x23 + 0x24f0] = w8
         0x8013618 ()             // 0x8013618(0x0, 0x0, 0x0, 0x0)
         w8 = 0x238
         umull x21,w24,w8
         x8 = x21 >> 0x1f
         if x8 jmp 0x80136bc      // unlikely

    loc_0x0801362c: // orphan
         x22 = [x19 + 0x10]       // 0xda // 218 // x24
         w2 = 0x1                 // x26
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801363c ()             // 0x801363c(0x20, 0x0, 0x1, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801364c ()             // 0x801364c(0x0, 0x20, 0x0, 0x0)
         if !x0 jmp 0x80136a8     // likely

    loc_0x08013654: // orphan
         w21 = ~0xd
         jmp 0x80136b0

    loc_0x08013694: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x1c] = wzr
         jmp 0x8013668

    loc_0x080136a0: // orphan
         w21 = ~0xb
         jmp 0x8013668

    loc_0x080136a8: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x1c] = w24

    loc_0x080136b0: // orphan
         // CODE XREF from sym.shadow_entry_get_hits @ 0x8013658
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x80136b4 ()             // 0x80136b4(0x20, 0x0, 0x0, 0x0)
         jmp 0x8013668

    loc_0x080136bc: // orphan
         brk 0x800

}

/* ===== 0x0802c158 ===== */
int sym.brk_bp_add (int esi, int edx) {
    loc_0x802c158:
        sp = sp - 0x80
        [sp, 0x20] = (x29,2)
        [sp, 0x30] = (x28,2)
        [sp, 0x40] = (x26,2)
        [sp, 0x50] = (x24,2)
        [sp, 0x60] = (x22,2)
        [sp, 0x70] = (x20,2)
        x29 = var_20h
        x8 = 0x802c000
        w8 = (byte) [x8] // 0xcf // 207
        if (w8 == 1)  // x26
        b.ne 0x802c260 // likely
            
    loc_0x802c260:
        // CODE XREF from sym.brk_bp_add @ 0x802c184
        w25 = ~0x5
        jmp 0x802c318
         // do {
    loc_0x802c318:
        // XREFS: CODE 0x0802c224  CODE 0x0802c230  CODE 0x0802c264
        // XREFS: CODE 0x0802c26c  CODE 0x0802c904  CODE 0x0802c9fc
        // XREFS: CODE 0x0802cdcc
        w0 = w25      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_80h
        0x0802c338
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802c188
    loc_0x802c190:
        w0 = [x20 + 8] // 0xdb // 219
        if (w0 == 1)  // x26
        b.lt 0x802c314 // likely
            
    loc_0x802c314:
        // XREFS: CODE 0x0802c18c  CODE 0x0802c198  CODE 0x0802c1a0
        // XREFS: CODE 0x0802c1ac  CODE 0x0802c1b4  CODE 0x0802c1c0
        // XREFS: CODE 0x0802c1cc  CODE 0x0802c1dc  CODE 0x0802c208
        // XREFS: CODE 0x0802c280
        w25 = ~0x15
    loc_0x0802c19c: // orphan
             x8 = [x20 + 0x10]        // 0xdb // 219
             if !x8 jmp 0x802c314     // unlikely

    loc_0x0802c1a4: // orphan
         w9 = [x20]               // 0xdb // 219 // x24
         if (w9 == 1)             // x26
         b.ne 0x802c314           // likely

    loc_0x0802c1b0: // orphan
         w9 = [x20 + 4]           // 0xdb // 219
         if w9 jmp 0x802c314      // unlikely

    loc_0x0802c1b8: // orphan
         w9 = [x20 + 0x18]        // 0xdb // 219
         if (w9 == 0x10)          // x26 // x26
         b.hi 0x802c314           // likely

    loc_0x0802c1c4: // orphan
         w9 = [x20 + 0xe0]        // 0xdb // 219
         if (w9 == 0x10)          // x26 // x26
         b.hi 0x802c314           // likely

    loc_0x0802c1d0: // orphan
         x9 = x8 << 8
         x19 = x8 & x9,asr 8
         if ((x19 & 3) == 0)      // x26
         b.ne 0x802c314           // likely

    loc_0x0802c1e0: // orphan
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x28 = 0x802c000
         x8 = [x8]                // 0xcf // 207
         x9 = [x28]               // 0xe3 // 227
         w10 = 0x1                // x26
         if ((x8 & 0x400000) == 0) // x26 // x26
         x9 = x10 << x9
         w8 = ~0xfff              // '\xff\x0f'
         csel x8,x9,x8, eq
         if (x19 == x8)
         b.hs 0x802c314           // unlikely

    loc_0x0802c20c: // orphan
         w8 = [x20 + 0xc]         // 0xdb // 219 // x24
         w9 = 0xd15               // '\x15\r'
         w25 = ~0x15
         if (w8 == 0)             // x26
         csel w21,w9,w8, eq       // x24
         w8 = w21 >> 0x10
         if w8 jmp 0x802c318      // unlikely

    loc_0x0802c228: // orphan
         w8 = w21 & 0xfffffffc
         if (w8 == 4)             // x26
         b.eq 0x802c318           // unlikely

    loc_0x0802c234: // orphan
         0x802c234 ()             // 0x802c234(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x802c268     // likely

    loc_0x0802c23c: // orphan
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c240 ()             // 0x802c240(0x0, 0x0, 0x0, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c24c ()             // 0x802c24c(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x802c270     // likely

    loc_0x0802c254: // orphan
         0x802c254 ()             // 0x802c254(0x0, 0x0, 0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802c274

    loc_0x0802c268: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c238
         w25 = ~0x2
         jmp 0x802c318

    loc_0x0802c270: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c250
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802c274: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c25c
         0x802c274 ()             // 0x802c274(0x0, 0x0, 0x0, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802c27c ()             // 0x802c27c(0x20, 0x0, 0x0, 0x0)
         if !x22 jmp 0x802c314    // likely

    loc_0x0802c284: // orphan
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         0x802c28c ()             // 0x802c28c(0x802c000, 0x0, 0x0, 0x0)
         x24 = 0x802c000
         x24 = x24 + 0
         x27 = [x24]              // 0xdf // 223
         [x29 = w21
         if (x27 == x24)          // x26 // x26
         b.eq 0x802c2c4           // unlikely

    loc_0x0802c2a8: // orphan
         x23 = x27                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802c2ac: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c2c0
         x8 = [x23 + 0x18]        // 0xde // 222
         if (x8 == x22)           // x26 // x26
         b.eq 0x802c2c8           // unlikely

    loc_0x0802c2b8: // orphan
         x23 = [x23]              // 0xde // 222 // x24
         if (x23 == x24)          // x26
         b.ne 0x802c2ac           // likely

    loc_0x0802c2c4: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c2a4
         x23 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802c2c8: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c2b4
         x25 = x19 & 0xfffffffffffff000
         x9 = 0x802c000
         if x23 jmp 0x802c2dc     // likely

    loc_0x0802c2d4: // orphan
         w8 = [x9]                // 0xd0 // 208
         if w8 jmp 0x802c808      // likely

    loc_0x0802c2dc: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802c2d0, 0x802c830, 0x802c878
         if !x23 jmp 0x802c38c    // unlikely

    loc_0x0802c2e0: // orphan
         w8 = [x9]                // 0xd0 // 208
         if w8 jmp 0x802c894      // likely

    loc_0x0802c2e8: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c8b8
         w2 = [x23 + 0x7a8]       // 0xde // 222
         if (w2 == 8)             // x26 // x26
         b.ge 0x802c8bc           // unlikely

    loc_0x0802c2f4: // orphan
         x21 = [x23 + 0x798]      // 0xde // 222
         x26 = x23 + 0x798
         [var_10h] = x26
         if (x21 == x26)
         b.eq 0x802c5f8           // unlikely

    loc_0x0802c308: // orphan
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w24,w19,0xc, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802c348

    loc_0x0802c33c: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802c360, 0x802c36c, 0x802c388
         x21 = [x21]              // 0xdc // 220
         if (x21 == x26)
         b.eq 0x802c5b8           // unlikely

    loc_0x0802c348: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c310
         x4 = [x21 + 0x18]        // 0xdc // 220
         if (x4 == x19)           // x26 // x26
         b.eq 0x802c9d0           // unlikely

    loc_0x0802c354: // orphan
         x8 = x4 & 0xfffffffffffff000
         if (x8 == x25)           // x26 // x26
         csel x27,x21,x27, eq
         b.eq 0x802c33c           // likely

    loc_0x0802c364: // orphan
         w8 = [x21 + 0x28]        // 0xdc // 220
         if (w8 == w24)           // x26
         b.ne 0x802c33c           // likely

    loc_0x0802c370: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         0x802c384 ()             // 0x802c384(0x802c000, 0x0, 0x10, 0x20)
         jmp 0x802c33c

    loc_0x0802c38c: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c2dc
         x8 = 0x802c000
         x0 = [x8]                // 0xcf // 207 // int64_t arg1
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x7f8
         x21 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c3a0 ()             // 0x802c3a0(0xf940010890000008, 0xdc0, 0x7f8, 0x0)
         if !x0 jmp 0x802c75c     // unlikely

    loc_0x0802c3a8: // orphan
         x1 = 0x802c000
         x2 = 0x802c000
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x0 + 0x7ac
         x0 = x0 + 0x7c0          // int64_t arg1
         x1 = x1 + 0              // int64_t arg_80h
         x2 = x2 + 0
         [x8] = xzr
         0x802c3c8 ()             // 0x802c3c8(0x7c0, 0x802c000, 0x802c000, 0x0)
         x0 = x23 + 0x7d8         // int64_t arg1
         w2 = 0x8
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x23 + 0x7b4] = wzr
         [x23 + 0x7b8] = wzr
         [x23 + 0x7bc] = wzr
         0x802c3e4 ()             // 0x802c3e4(0x7d8, 0x0, 0x8, 0x0)
         x0 = x23 + 0x7e8         // int64_t arg1
         w2 = 0x8
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c3f4 ()             // 0x802c3f4(0x7e8, 0x0, 0x8, 0x0)
         x9 = x23 + 0x798
         w8 = 0x1                 // x26
         [x23 + 0x798] = x9
         [x23 + 0x7a0] = x9
         [x23 + 0x7a8] = wzr
         [x23 + 0x7e0] = (byte) w8
         w8 = [x20 + 8]           // 0xdb // 219
         [x23 + 0x18] = x22
         x10 = [x28]              // 0xe3 // 227
         [var_10h] = x9
         [x23 + 0x10] = w8        // x19
         x8 = [x22 + 0x40]        // 0xdd // 221
         x9 = 0x802c000
         x11 = 0x802c000
         x9 = [x9]                // 0xd0 // 208
         x11 = [x11]              // 0xd2 // 210
         x10 = x10 - 1
         x10 = x8 >> x10          // x26
         if ((x10 & 1) == 0)      // x26 // x26
         csneg x9,x9,x11, eq
         x8 = x9 + x8
         w0 = 0x2578              // 'x%'
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x2
         [x23 + 0x80] = x8
         0x802c45c ()             // 0x802c45c(0x2578, 0xdc0, 0x2, 0x0)
         if !x0 jmp 0x802c800     // unlikely

    loc_0x0802c464: // orphan
         ldur w8,[x29,-4]
         [x0 + 0x10] = wzr        // x19
         [x0 + 0x18] = x19
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x20] = w8         // x24
         w9 = [x20 + 0x18]        // 0xdb // 219
         w8 = 0x10                // x19
         bic w10,w9,w9, asr 31    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 0x10)         // x26
         csel w11,w10,w8, lt
         if (w9 == 1)             // x26 // x26
         [x0 + 0x80] = w11
         b.lt 0x802c4d4           // likely

    loc_0x0802c498: // orphan
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x26 + 0x84
         w11 = w11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x20 + 0x60

    loc_0x0802c4a8: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c4d0
         x13 = x9 << 2
         x14 = x12 + x13
         ldur w14,[x14,-0x44]     // 0xd5 // 213
         [x10 + x13] = w14
         x13 = x9 << 3
         x14 = [x12 + x13]        // 0xd4000000d3 // 910533066963
         x9 = x9 + 1
         x13 = x10 + x13
         if (x9 == x11)           // x26
         [x13 = x14
         b.lo 0x802c4a8           // unlikely

    loc_0x0802c4d4: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c494
         w10 = [x20 + 0xe0]       // 0xdb // 219
         bic w9,w10,w10, asr 31   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 0x10)          // x26
         csel w9,w9,w8, lt
         if (w10 == 1)            // x26 // x26
         [x26 + 0x148] = w9
         b.lt 0x802c520           // likely

    loc_0x0802c4f0: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // x9

    loc_0x0802c4f8: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c51c
         x10 = x8 << 2
         x11 = x20 + x10
         w12 = [x11 + 0xe4]       // 0xd2 // 210
         x10 = x26 + x10
         x8 = x8 + 1
         if (x8 == x9)            // x26
         [x10 + 0x14c] = w12
         s0 = [x11 + 0x124]       // 0xd2 // 210
         [x10 + 0x18c] = s0
         b.lo 0x802c4f8           // unlikely

    loc_0x0802c520: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c4ec
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x26 + 0x2570] = x23
         0x802c534 ()             // 0x802c534(0xcc0, 0x0, 0x0, 0x0)
         [x26 + 0x38] = x0
         if !x0 jmp 0x802c8e4     // unlikely

    loc_0x0802c540: // orphan
         x8 = xzr | 0xffffffc000000000
         x8 = 0x800
         x8 = x8 + x0,lsl 6
         x8 &= x8
         [x26 + 0x40] = x8
         b.eq 0x802c8dc           // unlikely

    loc_0x0802c558: // orphan
         x8 = 0x802c000
         x8 = [x8]                // 0xcf // 207
         x28 = x22 + 0x68
         x8 = x0 - x8
         x8 = x8 << 6
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x26 + 0x48] = x8
         0x802c574 ()             // 0x802c574(0x68, 0x0, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
         0x802c580 ()             // 0x802c580(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x802c59c     // likely

    loc_0x0802c588: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x25 == x8)           // x26 // x26
         b.lo 0x802c59c           // unlikely

    loc_0x0802c594: // orphan
         w8 = (byte) [x0 + 0x50]  // 0xc7 // 199
         tbnz w8,2,0x802ca00      // likely

    loc_0x0802c59c: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802c584, 0x802c590
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802c5a0 ()             // 0x802c5a0(0x0, 0x0, 0x0, 0x0)
         x0 = [x26 + 0x38]        // 0xe1 // 225 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c5ac ()             // 0x802c5ac(0xcc0, 0x0, 0x0, 0x0)
         w25 = ~0x15
         jmp 0x802c8e8

    loc_0x0802c5b8: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c344
         if (x27 == 0)            // x26 // x26
         cset w26,ne
         if !x27 jmp 0x802c600    // likely

    loc_0x0802c5c4: // orphan
         x8 = 0x802c000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x802c600     // unlikely

    loc_0x0802c5d0: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x3 = [x27 + 0x18]        // 0xe2 // 226 // x19
         w4 = [x27 + 0x28]        // 0xe2 // 226
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c5ec ()             // ":" // 0x802c5ec(0x802c000, 0x0, 0x10, 0x10)
         w26 = 0x1                // x26
         jmp 0x802c600

    loc_0x0802c5f8: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c304
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802c600: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802c5c0, 0x802c5cc, 0x802c5f4
         w0 = 0x2578              // 'x%'
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x2
         0x802c60c ()             // "`\n" // 0x802c60c(0x2578, 0xdc0, 0x2, 0x0)
         if !x0 jmp 0x802c75c     // unlikely

    loc_0x0802c614: // orphan
         ldur w8,[x29,-4]
         [x0 + 0x10] = wzr        // x19
         [x0 + 0x18] = x19
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x20] = w8         // x24
         w9 = [x20 + 0x18]        // 0xdb // 219
         w8 = 0x10                // x19
         bic w10,w9,w9, asr 31    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 0x10)         // x26
         csel w11,w10,w8, lt
         if (w9 == 1)             // x26
         [x0 + 0x80] = w11
         b.lt 0x802c684           // unlikely

    loc_0x0802c648: // orphan
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x24 + 0x84
         w11 = w11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x20 + 0x60

    loc_0x0802c658: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c680
         x13 = x9 << 2
         x14 = x12 + x13
         ldur w14,[x14,-0x44]     // 0xd5 // 213
         [x10 + x13] = w14
         x13 = x9 << 3
         x14 = [x12 + x13]        // 0xd4000000d3 // 910533066963
         x9 = x9 + 1
         x13 = x10 + x13
         if (x9 == x11)           // x26
         [x13 = x14
         b.lo 0x802c658           // unlikely

    loc_0x0802c684: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c644
         w10 = [x20 + 0xe0]       // 0xdb // 219
         bic w9,w10,w10, asr 31   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 0x10)          // x26
         csel w9,w9,w8, lt
         if (w10 == 1)            // x26 // x26
         [x24 + 0x148] = w9
         b.lt 0x802c6d0           // likely

    loc_0x0802c6a0: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // x9

    loc_0x0802c6a8: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c6cc
         x10 = x8 << 2
         x11 = x20 + x10
         w12 = [x11 + 0xe4]       // 0xd2 // 210
         x10 = x24 + x10
         x8 = x8 + 1
         if (x8 == x9)            // x26
         [x10 + 0x14c] = w12
         s0 = [x11 + 0x124]       // 0xd2 // 210
         [x10 + 0x18c] = s0
         b.lo 0x802c6a8           // unlikely

    loc_0x0802c6d0: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c69c
         [x24 + 0x2570] = x23
         if !w26 jmp 0x802c764    // unlikely

    loc_0x0802c6d8: // orphan
         x8 = [x27 + 0x38]        // 0xe2 // 226
         x0 = x24 + 0x60          // int64_t arg1
         x1 = x27 + 0x60          // int64_t arg_80h
         w2 = 0x20                // x24
         [x24 + 0x38] = x8
         x8 = [x27 + 0x40]        // 0xe2 // 226
         [x24 + 0x40] = x8
         x8 = [x27 + 0x48]        // 0xe2 // 226
         [x24 + 0x48] = x8
         w8 = [x27 + 0x28]        // 0xe2 // 226
         [x24 + 0x28] = w8
         x8 = [x27 + 0x30]        // 0xe2 // 226
         [x24 + 0x30] = x8
         x8 = [x27 + 0x58]        // 0xe2 // 226
         [x24 + 0x58] = x8
         x8 = [x27 + 0x50]        // 0xe2 // 226
         [x24 + 0x50] = x8
         0x802c71c ()             // 0x802c71c(0x80, 0x60, 0x20, 0x0)
         x26 = x22 + 0x68
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802c728 ()             // 0x802c728(0x68, 0x60, 0x20, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
         0x802c734 ()             // 0x802c734(0x0, 0x0, 0x20, 0x0)
         if !x0 jmp 0x802c750     // likely

    loc_0x0802c73c: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x25 == x8)           // x26 // x26
         b.lo 0x802c750           // unlikely

    loc_0x0802c748: // orphan
         w8 = (byte) [x0 + 0x50]  // 0xc7 // 199
         tbnz w8,2,0x802c908      // likely

    loc_0x0802c750: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802c738, 0x802c744
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802c754 ()             // "&" // 0x802c754(0x1, 0x0, 0x0, 0x0)
         jmp 0x802c7f0

    loc_0x0802c75c: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802c3a4, 0x802c610
         w25 = ~0xb
         jmp 0x802c9e8

    loc_0x0802c764: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c6d4
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c774 ()             // 0x802c774(0xcc0, 0x0, 0x0, 0x0)
         [x24 + 0x38] = x0
         if !x0 jmp 0x802c884     // unlikely

    loc_0x0802c780: // orphan
         x8 = xzr | 0xffffffc000000000
         x8 = 0x800
         x8 = x8 + x0,lsl 6
         x8 &= x8
         [x24 + 0x40] = x8
         b.eq 0x802c87c           // unlikely

    loc_0x0802c798: // orphan
         x8 = 0x802c000
         x8 = [x8]                // 0xcf // 207
         x26 = x22 + 0x68
         x8 = x0 - x8
         x8 = x8 << 6
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x24 + 0x48] = x8
         0x802c7b4 ()             // 0x802c7b4(0x68, 0x0, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
         0x802c7c0 ()             // 0x802c7c0(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x802c7dc     // likely

    loc_0x0802c7c8: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x25 == x8)           // x26 // x26
         b.lo 0x802c7dc           // unlikely

    loc_0x0802c7d4: // orphan
         w8 = (byte) [x0 + 0x50]  // 0xc7 // 199
         tbnz w8,2,0x802cb78      // likely

    loc_0x0802c7dc: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802c7c4, 0x802c7d0
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802c7e0 ()             // 0x802c7e0(0x1, 0x0, 0x0, 0x0)
         x0 = [x24 + 0x38]        // 0xdf // 223 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c7ec ()             // 0x802c7ec(0xcc0, 0x0, 0x0, 0x0)

    loc_0x0802c7f0: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c758
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802c7f4 ()             // 0x802c7f4(0x20, 0x0, 0x0, 0x0)
         w25 = ~0x15
         jmp 0x802c9e8

    loc_0x0802c800: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c460
         w25 = ~0xb
         jmp 0x802c8f0

    loc_0x0802c808: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c2d8
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x26 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c820 ()             // 0x802c820(0x802c000, 0x0, 0x0, 0x10)
         x21 = [x24]              // 0xdf // 223
         x9 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x21 == x24)          // x26
         b.eq 0x802c2dc           // unlikely

    loc_0x0802c834: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c874
         x8 = [x21 + 0x798]       // 0xdc // 220
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x8 jmp 0x802c850     // unlikely

    loc_0x0802c840: // orphan
         x9 = x21 + 0x798
         if (x9 == x8)            // x26
         b.eq 0x802c850           // unlikely

    loc_0x0802c84c: // orphan
         x3 = [x8 + 0x18]         // 0xcf // 207

    loc_0x0802c850: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802c83c, 0x802c848
         w1 = [x21 + 0x10]        // 0xdc // 220 // x19
         x2 = [x21 + 0x18]        // 0xdc // 220 // x19
         w4 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         0x802c864 ()             // 0x802c864(0x802c000, 0x0, 0x10, 0x0)
         x21 = [x21]              // 0xdc // 220
         x9 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x21 == x24)          // x26
         b.ne 0x802c834           // likely

    loc_0x0802c878: // orphan
         jmp 0x802c2dc

    loc_0x0802c87c: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c794
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c880 ()             // 0x802c880(0x0, 0x0, 0x0, 0x0)

    loc_0x0802c884: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c77c
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802c888 ()             // 0x802c888(0x20, 0x0, 0x0, 0x0)
         w25 = ~0xb
         jmp 0x802c9e8

    loc_0x0802c894: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c2e4
         w1 = [x20 + 8]           // 0xdb // 219
         x3 = [x23 + 0x18]        // 0xde // 222
         w4 = [x23 + 0x7a8]       // 0xde // 222
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x6 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c8b4 ()             // 0x802c8b4(0x802c000, 0x0, 0x0, 0xcc0ff)
         jmp 0x802c2e8

    loc_0x0802c8bc: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c2f0
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         w3 = 0x8
         x4 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c8d0 ()             // 0x802c8d0(0x802c000, 0x0, 0x0, 0x8)
         w25 = ~0x1b
         jmp 0x802c9e8

    loc_0x0802c8dc: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c554
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c8e0 ()             // 0x802c8e0(0x0, 0x0, 0x0, 0x0)

    loc_0x0802c8e4: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c53c
         w25 = ~0xb

    loc_0x0802c8e8: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802c5b4, 0x802ca30
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802c8ec ()             // 0x802c8ec(0x1, 0x0, 0x0, 0x0)

    loc_0x0802c8f0: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802c804, 0x802cb48, 0x802cb74
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802c8f4 ()             // 0x802c8f4(0x20, 0x0, 0x0, 0x0)
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         0x802c900 ()             // 0x802c900(0x802c000, 0x0, 0x0, 0x0)
         jmp 0x802c318

    loc_0x0802c908: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c74c
         x8 = [x22 + 0x40]        // 0xdd // 221
         ubfx x9,x19,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = 0x802c000
         x10 = x19 >> 0x12
         x9 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         x8 = [x21]               // 0xdc // 220
         x10 = x10 & 0xff8
         x9 = x9 & 0xfffffffff000
         x9 = x9 | x10
         x9 = x9 - x8
         x10 = [x9]               // 0xd0 // 208
         tbz w10,1,0x802c9b8      // unlikely

    loc_0x0802c938: // orphan
         x10 = x10 & 3
         if (x10 == 1)            // x26
         b.eq 0x802c9b8           // unlikely

    loc_0x0802c944: // orphan
         x9 = [x9]                // 0xd0 // 208
         x10 = x19 >> 9
         x10 = x10 & 0xff8
         x9 = x9 & 0xfffffffff000
         x9 = x9 | x10
         x8 = x9 - x8
         b.eq 0x802c9b8           // unlikely

    loc_0x0802c960: // orphan
         x9 = [x8]                // 0xcf // 207
         if !x9 jmp 0x802c9b8     // unlikely

    loc_0x0802c968: // orphan
         x8 = [x8]                // 0xcf // 207
         x9 = 0x1                 // x26
         x9 = 0x400
         if ((x8 & x9) == 0)      // x26 // x26
         [x24 + 0x30] = x8
         b.eq 0x802c9b8           // unlikely

    loc_0x0802c980: // orphan
         ubfx x0,x8,0xc, 0x24     // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802c984 ()             // 0x802c984(0xc62900000, 0x0, 0x0, 0x0)
         if !w0 jmp 0x802c9b8     // unlikely

    loc_0x0802c98c: // orphan
         x8 = [x24 + 0x30]        // 0xdf // 223
         x9 = [x21]               // 0xdc // 220
         x10 = [x28]              // 0xe3 // 227
         x8 = x8 & 0xfffffffff000
         x21 = x8 - x9
         x9 = x10 - 1
         x9 = x21 >> x9
         tbnz w9,0,0x802c9b8      // unlikely

    loc_0x0802c9ac: // orphan
         x0 = x8 >> 0xc           // int64_t arg1
         0x802c9b0 ()             // "`%" // 0x802c9b0(0x72a9c62900000, 0x0, 0x0, 0x0)
         if w0 jmp 0x802ce60      // likely

    loc_0x0802c9b8: // orphan
         // XREFS: CODE 0x0802c934  CODE 0x0802c940  CODE 0x0802c95c  
         // XREFS: CODE 0x0802c964  CODE 0x0802c97c  CODE 0x0802c988  
         // XREFS: CODE 0x0802c9a8  
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802c9bc ()             // 0x802c9bc(0x1, 0x0, 0x0, 0x0)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802c9c4 ()             // 0x802c9c4(0x20, 0x0, 0x0, 0x0)
         w25 = ~0xd
         jmp 0x802c9e8

    loc_0x0802c9d0: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c350
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802c9e0 ()             // 0x802c9e0(0x802c000, 0x0, 0x10, 0x0)
         w25 = ~0x10

    loc_0x0802c9e8: // orphan
         // XREFS: CODE 0x0802c760  CODE 0x0802c7fc  CODE 0x0802c890  
         // XREFS: CODE 0x0802c8d8  CODE 0x0802c9cc  CODE 0x0802ce08  
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         0x802c9f0 ()             // 0x802c9f0(0x802c000, 0x0, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802c9f8 ()             // 0x802c9f8(0x0, 0x0, 0x0, 0x0)
         jmp 0x802c318

    loc_0x0802ca00: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c598
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x3 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ca10 ()             // 0x802ca10(0x0, 0x10, 0x20, 0x1)
         if !w0 jmp 0x802ca34     // likely

    loc_0x0802ca18: // orphan
         w25 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802ca20 ()             // 0x802ca20(0x0, 0x0, 0x0, 0x0)
         x0 = [x26 + 0x38]        // 0xe1 // 225 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ca2c ()             // 0x802ca2c(0xcc0, 0x0, 0x0, 0x0)
         jmp 0x802c8e8

    loc_0x0802ca34: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802ca14
         ldur w10,[x29,-4]
         x8 = [x26 + 0x40]        // 0xe1 // 225
         w9 = 0xd420              // ' \xd4'
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w9 = w9 | w10,lsl 5
         x10 = x19 & 0xfff
         [x8 + x10] = w9
         dsb ishst
         0x802ca54 ()             // 0x802ca54(0x0, 0x0, 0x0, 0x0)
         (x0, 2) = 3              // int64_t arg_80h
         0x802ca5c ()             // 0x802ca5c(0xcc0, 0xffffc008000000, 0x0, 0x0)
         x22 = [x23 + 0x7a0]      // 0xde // 222
         x2 = [var_10h]           // 0x4
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
         0x802ca70 ()             // 0x802ca70(0x1, -1, 0x798, 0x0)
         tbz w0,0,0x802ca88       // unlikely

    loc_0x0802ca78: // orphan
         x8 = [var_10h]           // 0x4
         [x23 + 0x7a0] = x26
         [x26] = (x8,2)
         [x22] = x26

    loc_0x0802ca88: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802ca74
         w8 = [x21]               // 0xdc // 220 // x26
         w21 = 0x1                // x26
         [x23 + 0x7a8] = w21
         if w8 jmp 0x802ce0c      // likely

    loc_0x0802ca98: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802ce2c
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         0x802caa0 ()             // 0x802caa0(0x802c000, 0x0, 0x0, 0x0)
         x25 = [x24 + 8]          // 0xdf // 223
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
         [x23 + 0x7f0] = (byte) w21
         0x802cabc ()             // 0x802cabc(0x20, 0x2000000000, 0x20, 0x0)
         tbz w0,0,0x802cad0       // likely

    loc_0x0802cac4: // orphan
         [x24 + 8] = x23
         [x23] = (x24,2)
         [x25] = x23

    loc_0x0802cad0: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802cac0
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
         0x802cadc ()             // 0x802cadc(0x802c000, 0x0, 0x0, 0x0)
         0x802cae0 ()             // 0x802cae0(0x802c000, 0x0, 0x0, 0x0)
         w25 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x802ce30     // unlikely

    loc_0x0802caec: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802ce5c, 0x802d064
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         0x802caf4 ()             // 0x802caf4(0x802c000, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // " " x24
         [x23 + 0x7f0] = (byte) wzr
         0x802cb04 ()             // 0x802cb04(0x20, 0x0, 0x0, 0x0)
         tbz w0,0,0x802cb18       // likely

    loc_0x0802cb0c: // orphan
         (x9, 2) = 3              // " " x24
         [x9 + 8] = x8
         [x8] = x9

    loc_0x0802cb18: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802cb08
         x8 = 0x100
         x8 = 0xdead              // '\xad\xde'
         w9 = 0x22                // '\"'
         x0 = 0x802c000
         x9 = x8 | x9
         x0 = x0 + 0              // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
         [x23] = (x8,2)
         0x802cb38 ()             // 0x802cb38(0x802c000, 0x10, 0x0, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802cb40 ()             // 0x802cb40(0x20, 0x10, 0x0, 0x0)
         if (x27 == x24)          // (cstr 0x00000000) " " x26
         b.ne 0x802c8f0           // likely

    loc_0x0802cb4c: // orphan
         0x802cb4c ()             // 0x802cb4c(0x0, 0x0, 0x0, 0x0)
         x19 = 0x802c000
         w8 = (byte) [x19]        // 0xda // 218
         if (w8 == 1)             // (cstr 0x00000000) " " x26
         b.ne 0x802cb70           // likely

    loc_0x0802cb60: // orphan
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         0x802cb68 ()             // 0x802cb68(0x802c000, 0x0, 0x0, 0x0)
         [x19] = (byte) wzr

    loc_0x0802cb70: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802cb5c
         0x802cb70 ()             // 0x802cb70(0x0, 0x0, 0x0, 0x0)
         jmp 0x802c8f0

    loc_0x0802cb78: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c7d8
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x3 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802cb88 ()             // 0x802cb88(0x0, 0x10, 0x20, 0x20)
         if w0 jmp 0x802cdd0      // unlikely

    loc_0x0802cb90: // orphan
         ldur w11,[x29,-4]        // (cstr 0x00000000) " "
         x8 = [x24 + 0x40]        // 0xdf // 223
         w9 = 0xd420              // ' \xd4'
         x10 = x19 & 0xfff
         w9 = w9 | w11,lsl 5
         [x8 + x10] = w9
         dsb ishst
         x8 = x19 >> 0xc
         dsb ishst
         x8 = x8 & 0xffffffffff0
         tlbi vaae1is,x8
         x10 = x8 | 1             // (cstr 0x00000000) " " x26
         tlbi vaae1is,x10
         x10 = x8 | 2             // (cstr 0x00000000) " "
         tlbi vaae1is,x10
         x10 = x8 | 3
         tlbi vaae1is,x10
         w9 = 0x5
         x10 = x8 | 4
         tlbi vaae1is,x10
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 6
         tlbi vaae1is,x9
         x9 = x8 | 7
         tlbi vaae1is,x9
         w10 = 0x9
         x9 = x8 | 8
         tlbi vaae1is,x9
         w9 = 0xa
         x10 = x8 | x10
         tlbi vaae1is,x10
         w10 = 0xb
         x9 = x8 | x9
         tlbi vaae1is,x9
         x10 = x8 | x10
         tlbi vaae1is,x10
         w9 = 0xd
         x10 = x8 | 0xc
         tlbi vaae1is,x10
         x9 = x8 | x9
         tlbi vaae1is,x9
         x10 = x8 | 0xe
         tlbi vaae1is,x10
         x8 = x8 | 0xf
         tlbi vaae1is,x8
         dsb ish
         
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // (cstr 0x00000000) " "
         0x802cc54 ()             // 0x802cc54(0x1, 0x0, 0x0, 0x0)
         (x0, 2) = 3              // int64_t arg_80h
         0x802cc5c ()             // 0x802cc5c(0xcc0, 0xffffffc008000000, 0x0, 0x0)

    loc_0x0802cc60: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802cf40, 0x802cf60
         x25 = x23 + 0x7ac
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802cc68 ()             // 0x802cc68(0x7cc, 0x0, 0x0, 0x0)
         x27 = [x23 + 0x7a0]      // 0xde // 222 // x26
         x2 = [var_10h]           // 0x4
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h // (cstr 0x00000000) " " x26
         0x802cc80 ()             // 0x802cc80(0x20, 0x1, 0x798, 0x0)
         tbz w0,0,0x802cc98       // likely

    loc_0x0802cc88: // orphan
         x8 = [var_10h]           // 0x4
         [x23 + 0x7a0] = x24
         [x24] = (x8,2)
         [x27] = x24

    loc_0x0802cc98: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802cc84
         w8 = [x23 + 0x7a8]       // 0xde // 222 // x26
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h // (cstr 0x00000000) " "
         w8 = w8 + 1              // (cstr 0x00000000) " "
         [x23 + 0x7a8] = w8
         0x802ccac ()             // 0x802ccac(0x0, 0x1, 0x0, 0x0)
         x8 = 0x802c000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x802ccdc     // unlikely

    loc_0x0802ccbc: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         (w4, 2) = 3
         w5 = [x23 + 0x7a8]       // 0xde // 222
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         w6 = 0x8
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ccd8 ()             // 0x802ccd8(0x802c000, 0x0, 0x10, 0x0)

    loc_0x0802ccdc: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802ccb8
         w8 = (byte) [x23 + 0x7e0] // 0xde // 222
         if !w8 jmp 0x802cd14     // unlikely

    loc_0x0802cce4: // orphan
         w8 = (byte) [x23 + 0x7f0] // 0xde // 222
         if !w8 jmp 0x802cd14     // likely

    loc_0x0802ccec: // orphan
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         0x802ccf4 ()             // 0x802ccf4(0x802c000, 0x0, 0x0, 0x0)
         w8 = (byte) [x23 + 0x7f0] // 0xde // 222
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x802cd08     // likely

    loc_0x0802cd04: // orphan
         [x23 + 0x7e0] = (byte) wzr

    loc_0x0802cd08: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802cd00
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         0x802cd10 ()             // 0x802cd10(0x802c000, 0x0, 0x0, 0x0)

    loc_0x0802cd14: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802cce0, 0x802cce8
         w8 = [x23 + 0x7a8]       // 0xde // 222
         if (w8 == 2)             // (cstr 0x00000000) " " x26 // (cstr 0x00000000) " " x26
         b.lt 0x802cd84           // unlikely

    loc_0x0802cd20: // orphan
         x26 = x22 + 0x68
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802cd28 ()             // 0x802cd28(0x68, 0x0, 0x0, 0x0)
         x1 = [x24 + 0x18]        // 0xdf // 223 // int64_t arg_80h
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802cd34 ()             // 0x802cd34(0x20, 0xcc0ff, 0x0, 0x0)
         w25 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802cd40 ()             // 0x802cd40(0x68, 0xcc0ff, 0x0, 0x0)
         x8 = 0x802c000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x802cd68     // unlikely

    loc_0x0802cd50: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802cd64 ()             // 0x802cd64(0x802c000, 0x0, 0x10, 0x0)

    loc_0x0802cd68: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802cd4c
         if !w25 jmp 0x802cd84    // likely

    loc_0x0802cd6c: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802cd80 ()             // 0x802cd80(0x802c000, 0x0, 0x10, 0x0)

    loc_0x0802cd84: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802cd1c, 0x802cd68
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         0x802cd8c ()             // 0x802cd8c(0x802c000, 0x0, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802cd94 ()             // 0x802cd94(0x0, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         w4 = [x24 + 0x24]        // 0xdf // 223
         w5 = [x24 + 0x80]        // 0xdf // 223
         w6 = [x24 + 0x148]       // 0xdf // 223
         w7 = [x23 + 0x7a8]       // 0xde // 222
         x0 = 0x802c000
         w8 = 0x8
         x0 = x0 + 0

    loc_0x0802cdb8: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802d048
         ldur w3,[x29,-4]         // (cstr 0x00000000) " "
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp] = w8
         0x802cdc4 ()             // 0x802cdc4(0x0, 0x0, 0x10, 0x0)
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802c318

    loc_0x0802cdd0: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802cb8c
         w25 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // (cstr 0x00000000) " "
         0x802cdd8 ()             // 0x802cdd8(0x1, 0x0, 0x0, 0x0)
         x0 = [x24 + 0x38]        // 0xdf // 223 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802cde4 ()             // 0x802cde4(0xcc0, 0x0, 0x0, 0x0)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802cdec ()             // 0x802cdec(0x20, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ce04 ()             // 0x802ce04(0x802c000, 0x0, 0x10, 0x0)
         jmp 0x802c9e8

    loc_0x0802ce0c: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802ca94
         w1 = [x20 + 8]           // 0xdb // 219
         w4 = [x26 + 0x28]        // 0xe1 // 225
         ldur w3,[x29,-4]
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         w5 = 0x1                 // (cstr 0x00000000) " " x26
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ce28 ()             // 0x802ce28(0x802c000, 0x0, 0x10, 0x0)
         jmp 0x802ca98

    loc_0x0802ce30: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802cae8
         x21 = 0x802c000
         w8 = (byte) [x21]        // 0xdc // 220
         tbnz w8,0,0x802cf90      // unlikely

    loc_0x0802ce3c: // orphan
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         0x802ce44 ()             // 0x802ce44(0x802c000, 0x0, 0x0, 0x0)
         if x0 jmp 0x802cf64      // likely

    loc_0x0802ce4c: // orphan
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         0x802ce54 ()             // "9" // 0x802ce54(0x802c000, 0x0, 0x0, 0x0)
         w25 = ~0x1
         jmp 0x802caec

    loc_0x0802ce60: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802c9b4
         x8 = x19 & 0xfff
         w9 = [x21 + x8]          // 0xcf000000dc // 889058230492
         ldur w11,[x29,-4]
         x10 = [x24 + 0x40]       // 0xdf // 223
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // (cstr 0x00000000) " "
         [x24 + 0x24] = w9
         w9 = 0xd420              // ' \xd4'
         w9 = w9 | w11,lsl 5
         [x10 + x8] = w9
         dsb ishst
         x8 = x19 >> 0xc
         dsb ishst
         x8 = x8 & 0xffffffffff0
         tlbi vaae1is,x8
         x10 = x8 | 1             // (cstr 0x00000000) " " x26
         tlbi vaae1is,x10
         x10 = x8 | 2             // (cstr 0x00000000) " "
         tlbi vaae1is,x10
         x10 = x8 | 3
         tlbi vaae1is,x10
         w9 = 0x5
         x10 = x8 | 4
         tlbi vaae1is,x10
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 6
         tlbi vaae1is,x9
         x9 = x8 | 7
         tlbi vaae1is,x9
         w10 = 0x9
         x9 = x8 | 8
         tlbi vaae1is,x9
         w9 = 0xa
         x10 = x8 | x10
         tlbi vaae1is,x10
         w10 = 0xb
         x9 = x8 | x9
         tlbi vaae1is,x9
         x10 = x8 | x10
         tlbi vaae1is,x10
         w9 = 0xd
         x10 = x8 | 0xc
         tlbi vaae1is,x10
         x9 = x8 | x9
         tlbi vaae1is,x9
         x10 = x8 | 0xe
         tlbi vaae1is,x10
         x8 = x8 | 0xf
         tlbi vaae1is,x8
         dsb ish
         
         0x802cf2c ()             // 0x802cf2c(0x1, 0x0, 0x0, 0x0)
         (x0, 2) = 3              // int64_t arg_80h
         0x802cf34 ()             // 0x802cf34(0xcc0, 0xffffffc008000000, 0x0, 0x0)
         x8 = 0x802c000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x802cc60     // unlikely

    loc_0x0802cf44: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x3 = [x27 + 0x18]        // 0xe2 // 226 // x19
         (w5, 2) = 3
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802cf5c ()             // 0x802cf5c(0x802c000, 0x0, 0x10, 0x10)
         jmp 0x802cc60

    loc_0x0802cf64: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802ce48
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x802c000
         x2 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         x2 = x2 + 0
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802cf80 ()             // 0x802cf80(0x802c000, 0x0, 0x802c000, 0x0)
         if w0 jmp 0x802d04c      // likely

    loc_0x0802cf88: // orphan
         w8 = 0x1                 // (cstr 0x00000000) " " x26
         [x21] = (byte) w8

    loc_0x0802cf90: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802ce38
         x21 = 0x802c000
         w8 = (byte) [x21]        // 0xdc // 220
         tbz w8,0,0x802cfa4       // likely

    loc_0x0802cf9c: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802cfec

    loc_0x0802cfa4: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802cf98
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         0x802cfac ()             // 0x802cfac(0x802c000, 0x0, 0x0, 0x0)
         if w0 jmp 0x802cfc4      // likely

    loc_0x0802cfb4: // orphan
         w9 = 0x1                 // x26
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x21] = (byte) w9
         jmp 0x802cfec

    loc_0x0802cfc4: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802cfb0
         w22 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         w1 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802cfd4 ()             // 0x802cfd4(0x802c000, 0x0, 0x0, 0x0)
         x0 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         w1 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802cfe4 ()             // "(" // 0x802cfe4(0x802c000, 0x0, 0x0, 0x0)
         w8 = 0x1                 // x26

    loc_0x0802cfec: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x802cfa0, 0x802cfc0
         x0 = 0x802c000
         x9 = 0x802c000
         x0 = x0 + 0              // int64_t arg1
         [x9] = (byte) w8
         0x802cffc ()             // 0x802cffc(0x802c000, 0x0, 0x0, 0x0)
         // XREFS(54)
         w8 = (byte) [x23 + 0x7f0] // 0xde // 222
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x802d010     // likely

    loc_0x0802d00c: // orphan
         [x23 + 0x7e0] = (byte) wzr

    loc_0x0802d010: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802d008
         x0 = 0x802d000
         x0 = x0 + 0              // int64_t arg1
         0x802d018 ()             // 0x802d018(0x802d000, 0x0, 0x0, 0x0)
         x0 = 0x802d000
         x0 = x0 + 0              // int64_t arg1
         0x802d024 ()             // 0x802d024(0x802d000, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         w4 = [x26 + 0x24]        // 0xe1 // 225
         w5 = [x26 + 0x80]        // 0xe1 // 225 // loc.imp.system_wq
         w6 = [x26 + 0x148]       // 0xe1 // 225
         w7 = [x23 + 0x7a8]       // 0xde // 222
         x0 = 0x802d000
         w8 = 0x8
         x0 = x0 + 0
         jmp 0x802cdb8

    loc_0x0802d04c: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x802cf84
         w25 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x802d000
         x0 = x0 + 0              // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
         w2 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802d060 ()             // 0x802d060(0x802d000, 0x0, 0x0, 0x0)
         jmp 0x802caec

}

/* ===== 0x0802f54c ===== */
int sym.brk_bp_del (int esi, int edx) {
    loc_0x802f54c:
        sp = sp - 0x60
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = var_10h
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x802f000
        x0 = x0 + 0   // int64_t arg1
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x802f578 ()  // 0x802f578(0x802f000, 0x0, 0x0, 0x0)
        x0 = 0x802f000
        x0 = x0 + 0   // int64_t arg1
        0x802f584 ()  // 0x802f584(0x802f000, 0x0, 0x0, 0x0)
        x8 = 0x802f000
        x8 = x8 + 0
        x21 = [x8]    // 0xcf // 207
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x21 == x8) // x26
        b.eq 0x802f5f8 // unlikely
            
    loc_0x802f5f8:
        x0 = 0x802f000
        x0 = x0 + 0   // int64_t arg1
        0x802f600 ()  // 0x802f600(0x802f000, 0x0, 0x0, 0x0)
         // do {
    loc_0x802f604:
        x0 = 0x802f000
        x0 = x0 + 0   // int64_t arg1
        0x802f60c ()  // " " // 0x802f60c(0x802f000, 0x0, 0x0, 0x0)
        w0 = ~0x1
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0802f5ac: // orphan
             if x21 jmp 0x802f630     // unlikely

    loc_0x0802f5b0: // orphan
         // CODE XREF from sym.brk_bp_del @ 0x802f5f4
         if (x9 == x8)            // x26
         x21 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.eq 0x802f5f8           // unlikely

    loc_0x0802f5bc: // orphan
         // CODE XREF from sym.brk_bp_del @ 0x802f5a8
         w10 = [x21 + 0x10]       // 0xdc // 220 // x19
         x9 = [x21]               // 0xdc // 220 // x26
         if (w10 == w19)          // x26
         b.ne 0x802f5b0           // likely

    loc_0x0802f5cc: // orphan
         x22 = [x21 + 0x798]      // 0xdc // 220
         x23 = x21 + 0x798
         if (x22 == x23)          // x26 // x26
         b.eq 0x802f5b0           // likely

    loc_0x0802f5dc: // orphan
         x10 = [x22 + 0x18]       // 0xdd // 221 // x19
         if (x10 == x20)          // x26
         b.eq 0x802f5ac           // unlikely

    loc_0x0802f5e8: // orphan
         x22 = [x22]              // 0xdd // 221 // x26
         if (x22 == x23)          // x26
         b.ne 0x802f5dc           // likely

    loc_0x0802f5f4: // orphan
         jmp 0x802f5b0

    loc_0x0802f614: // orphan
         // CODE XREFS from sym.brk_bp_del @ 0x802f720, 0x802fa90
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x29, 2) = 3
         sp = arg_60h
         

    loc_0x0802f630: // orphan
         x9 = [x8]                // 0xcf // 207
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x9 == x8)            // x26 // x26
         b.eq 0x802f658           // unlikely

    loc_0x0802f640: // orphan
         x8 = [x8 + 8]            // 0xcf // 207
         if (x8 == x9)            // x26 // x26
         b.ne 0x802f658           // likely

    loc_0x0802f64c: // orphan
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         if (w8 == 1)             // x26
         cset w24,eq

    loc_0x0802f658: // orphan
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f660 ()             // 0x802f660(0x802f000, 0x0, 0x0, 0x0)
         if !x22 jmp 0x802f604    // likely

    loc_0x0802f668: // orphan
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         if (w8 == 2)             // x26
         b.lt 0x802f724           // likely

    loc_0x0802f674: // orphan
         x8 = [x23]               // 0xde // 222 // x24
         jmp 0x802f680

    loc_0x0802f67c: // orphan
         x8 = [x8]                // 0xcf // 207

    loc_0x0802f680: // orphan
         // CODE XREF from sym.brk_bp_del @ 0x802f678
         if (x8 == x23)           // x26
         b.eq 0x802f7ec           // unlikely

    loc_0x0802f688: // orphan
         if (x8 == x22)           // x26
         b.eq 0x802f67c           // unlikely

    loc_0x0802f690: // orphan
         x9 = [x8 + 0x38]         // 0xcf // 207
         x10 = [x22 + 0x38]       // 0xdd // 221
         if (x9 == x10)           // x26 // x26
         b.eq 0x802f6b4           // unlikely

    loc_0x0802f6a0: // orphan
         x9 = [x8 + 0x18]         // 0xcf // 207
         x10 = [x22 + 0x18]       // 0xdd // 221 // x19
         x9 = x10 ^ x9
         if (x9 == 1)             // x26 // x26
         b.hs 0x802f67c           // likely

    loc_0x0802f6b4: // orphan
         w8 = [x22 + 0x10]        // 0xdd // 221 // x19
         if (w8 == 1)             // x26
         b.ne 0x802fa94           // likely

    loc_0x0802f6c0: // orphan
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802f6d0 ()             // 0x802f6d0(0xcc0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x802f6fc     // unlikely

    loc_0x0802f6d8: // orphan
         x8 = xzr | 0xffffffc000000000
         x8 = 0x800
         x8 = x8 + x0,lsl 6
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 &= x8
         b.ne 0x802fc04           // likely

    loc_0x0802f6f0: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802f6f8 ()             // 0x802f6f8(0x20, 0x0, 0x0, 0x0)

    loc_0x0802f6fc: // orphan
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f704 ()             // 0x802f704(0x802f000, 0x0, 0x0, 0x0)
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h // x24
         0x802f718 ()             // 0x802f718(0x802f000, 0x10, 0x20, 0x0)
         w0 = ~0xb
         jmp 0x802f614

    loc_0x0802f724: // orphan
         x22 = 0x802f000
         x22 = x22 + 0
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f730 ()             // 0x802f730(0x802f000, 0x0, 0x0, 0x0)
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x21 + 0x7f0] = (byte) wzr
         0x802f740 ()             // 0x802f740(0x802f000, 0x802f000, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f748 ()             // 0x802f748(0x0, 0x802f000, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f750 ()             // 0x802f750(0x802f000, 0x802f000, 0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f75c ()             // 0x802f75c(0x0, 0x802f000, 0x0, 0x0)
         tbz w0,0,0x802f770       // likely

    loc_0x0802f764: // orphan
         (x9, 2) = 3              // x26
         [x9 + 8] = x8
         [x8] = x9

    loc_0x0802f770: // orphan
         x8 = 0x100
         x8 = 0xdead              // '\xad\xde'
         w9 = 0x22                // '\"'
         x0 = 0x802f000
         x9 = x8 | x9
         x0 = x0 + 0              // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x21] = (x8,2)
         0x802f790 ()             // 0x802f790(0x802f000, 0x0, 0x0, 0x0)
         if !w24 jmp 0x802f7c0    // unlikely

    loc_0x0802f798: // orphan
         0x802f798 ()             // 0x802f798(0x0, 0x0, 0x0, 0x0)
         x22 = 0x802f000
         w8 = (byte) [x22]        // 0xdd // 221
         if (w8 == 1)             // x26
         b.ne 0x802f7bc           // likely

    loc_0x0802f7ac: // orphan
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f7b4 ()             // 0x802f7b4(0x802f000, 0x0, 0x0, 0x0)
         [x22] = (byte) wzr

    loc_0x0802f7bc: // orphan
         0x802f7bc ()             // 0x802f7bc(0x0, 0x0, 0x0, 0x0)

    loc_0x0802f7c0: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f7c4 ()             // 0x802f7c4(0x0, 0x0, 0x0, 0x0)
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f7d0 ()             // 0x802f7d0(0x802f000, 0x0, 0x0, 0x0)
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h // x24
         0x802f7e4 ()             // 0x802f7e4(0x802f000, 0x10, 0x20, 0x0)
         jmp 0x802fa8c

    loc_0x0802f7ec: // orphan
         x23 = x21 + 0x7b0
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f7f4 ()             // 0x802f7f4(0x7b0, 0x0, 0x0, 0x0)
         x8 = [x22 + 0x58]        // 0xdd // 221
         if x8 jmp 0x802f814      // likely

    loc_0x0802f800: // orphan
         w8 = [x21 + 0x60]        // 0xdc // 220 // loc.imp.system_wq
         w8 = w8 - 1
         x8 = x21 + w8,sxtw 3
         x8 = [x8 + 0x40]         // 0xcf // 207
         if !x8 jmp 0x802f9f0     // unlikely

    loc_0x0802f814: // orphan
         w9 = [x22 + 0x28]        // 0xdd // 221
         if (w9 == 0x1ff)         // x26
         b.hi 0x802f9f0           // unlikely

    loc_0x0802f820: // orphan
         x11 = [x21 + 0x18]       // 0xdc // 220 // x19
         if !x11 jmp 0x802f914    // unlikely

    loc_0x0802f828: // orphan
         x10 = [x22 + 0x18]       // 0xdd // 221 // x19
         x12 = [x11 + 0x40]       // 0xd2 // 210
         x14 = 0x802f000
         ubfx x13,x10,0x1e, 9     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x13 << 3
         xzr = [x12 + x11]        // 0xd2000000d3 // 901943132371
         x11 = [x12 + x11]        // 0xd2000000d3 // 901943132371
         x15 = [x14]              // 0xd5 // 213
         x16 = x10 >> 0x12
         x14 = x16 & 0xff8
         x11 = x11 & 0xfffffffff000
         x11 = x11 | x14
         x14 = x11 - x15
         x11 = [x14]              // 0xd5 // 213
         tbz w11,1,0x802f914      // unlikely

    loc_0x0802f864: // orphan
         x16 = x11 & 3
         if (x16 == 1)            // x26
         b.eq 0x802f914           // unlikely

    loc_0x0802f870: // orphan
         xzr = [x12 + x13,lsl 3]  // 0xd4000000d3 // 910533066963
         xzr = [x14]              // 0xd5 // 213
         x12 = [x14]              // 0xd5 // 213
         x10 = x10 >> 9
         x10 = x10 & 0xff8
         x12 = x12 & 0xfffffffff000
         x10 = x12 | x10
         x24 = x10 - x15
         b.eq 0x802f914           // unlikely

    loc_0x0802f894: // orphan
         x10 = 0x802f000
         xzr = [x14]              // 0xd5 // 213
         x10 = [x10]              // 0xd1 // 209
         ubfx x11,x11,0xc, 0x24   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 + x11,lsl 6
         x25 = x10 + 0x28
         b.eq 0x802f914           // unlikely

    loc_0x0802f8b0: // orphan
         xzr = [x24]              // 0xdf // 223
         w10 = [x21 + 0x60]       // 0xdc // 220 // loc.imp.system_wq
         if (w10 == 3)            // x26
         b.ne 0x802f914           // likely

    loc_0x0802f8c0: // orphan
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x26 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802f8c8 ()             // 0x802f8c8(0x0, 0x0, 0x0, 0x0)
         x24 = [x24]              // 0xdf // 223
         x8 = [x22 + 0x28]        // 0xdd // 221
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x26 + x8,lsl 3] = x24
         0x802f8dc ()             // 0x802f8dc(0x0, 0x0, 0x0, 0x0)
         x8 = 0x802f000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x802f944     // unlikely

    loc_0x0802f8ec: // orphan
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         w3 = [x22 + 0x28]        // 0xdd // 221
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         w5 = w8 - 1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h // x24
         x4 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802f90c ()             // "\r" // 0x802f90c(0x802f000, 0x10, 0x20, 0x0)
         jmp 0x802f944

    loc_0x0802f914: // orphan
         x10 = [x22 + 0x30]       // 0xdd // 221
         [x8 + x9,lsl 3] = x10
         x8 = 0x802f000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x802f944     // unlikely

    loc_0x0802f928: // orphan
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         w3 = w8 - 1
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h // x24
         0x802f940 ()             // 0x802f940(0x802f000, 0x10, 0x20, -1)

    loc_0x0802f944: // orphan
         // CODE XREF from sym.brk_bp_del @ 0x802f910
         dsb ishst
         x8 = [x22 + 0x18]        // 0xdd // 221 // x19
         dsb ishst
         x8 = x8 >> 0xc
         x8 = x8 & 0xffffffffff0
         tlbi vaae1is,x8
         x9 = x8 | 1              // x26
         tlbi vaae1is,x9
         x9 = x8 | 2
         tlbi vaae1is,x9
         x9 = x8 | 3
         tlbi vaae1is,x9
         x9 = x8 | 4
         tlbi vaae1is,x9
         w9 = 0x5
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 6
         tlbi vaae1is,x9
         x9 = x8 | 7
         tlbi vaae1is,x9
         x9 = x8 | 8
         tlbi vaae1is,x9
         w9 = 0x9
         x9 = x8 | x9
         tlbi vaae1is,x9
         w9 = 0xa
         x9 = x8 | x9
         tlbi vaae1is,x9
         w9 = 0xb
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 0xc
         tlbi vaae1is,x9
         w9 = 0xd
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 0xe
         tlbi vaae1is,x9
         x8 = x8 | 0xf
         tlbi vaae1is,x8
         dsb ish
         

    loc_0x0802f9f0: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802f9f4 ()             // 0x802f9f4(0x20, 0x0, 0x0, 0x0)
         x23 = x21 + 0x7ac
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802fa00 ()             // 0x802fa00(0x7ac, 0x0, 0x0, 0x0)
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802fa0c ()             // 0x802fa0c(0x0, 0x0, 0x0, 0x0)
         tbz w0,0,0x802fa20       // likely

    loc_0x0802fa14: // orphan
         (x9, 2) = 3
         [x9 + 8] = x8
         [x8] = x9

    loc_0x0802fa20: // orphan
         x8 = 0x100
         x8 = 0xdead              // '\xad\xde'
         w9 = 0x22                // '\"'
         x9 = x8 | x9
         [x22] = (x8,2)
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w8 = w8 - 1
         [x21 + 0x7a8] = w8
         0x802fa48 ()             // 0x802fa48(0x20, 0x20, 0x0, 0x0)
         x0 = [x22 + 0x38]        // 0xdd // 221
         if !x0 jmp 0x802fa5c     // unlikely

    loc_0x0802fa54: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802fa58 ()             // 0x802fa58(0x0, 0x0, 0x0, 0x0)

    loc_0x0802fa5c: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802fa60 ()             // 0x802fa60(0x0, 0x0, 0x0, 0x0)
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802fa6c ()             // 0x802fa6c(0x802f000, 0x0, 0x0, 0x0)
         w3 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = 0x802f000
         x0 = x0 + 0

    loc_0x0802fa7c: // orphan
         // CODE XREFS from sym.brk_bp_del @ 0x802fc00, 0x802fda4
         w4 = 0x8
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h // x24
         0x802fa88 ()             // 0x802fa88(0x0, 0x10, 0x20, 0x0)

    loc_0x0802fa8c: // orphan
         // CODE XREF from sym.brk_bp_del @ 0x802f7e8
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802f614

    loc_0x0802fa94: // orphan
         x8 = [x22 + 0x40]        // 0xdd // 221
         if !x8 jmp 0x802fb8c     // likely

    loc_0x0802fa9c: // orphan
         x9 = [x22 + 0x18]        // 0xdd // 221 // x19
         w10 = [x22 + 0x24]       // 0xdd // 221
         x9 = x9 & 0xfff          // x19
         [x8 + x9] = w10
         dsb ishst
         x8 = [x22 + 0x18]        // 0xdd // 221 // x19
         dsb ishst
         w9 = 0x5
         x8 = x8 >> 0xc
         x8 = x8 & 0xffffffffff0
         tlbi vaae1is,x8
         x10 = x8 | 1             // x26
         tlbi vaae1is,x10
         x10 = x8 | 2
         tlbi vaae1is,x10
         x10 = x8 | 3
         tlbi vaae1is,x10
         x10 = x8 | 4
         tlbi vaae1is,x10
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 6
         tlbi vaae1is,x9
         x9 = x8 | 7
         tlbi vaae1is,x9
         w10 = 0x9
         x9 = x8 | 8
         tlbi vaae1is,x9
         w9 = 0xa
         x10 = x8 | x10
         tlbi vaae1is,x10
         w10 = 0xb
         x9 = x8 | x9
         tlbi vaae1is,x9
         x10 = x8 | x10
         tlbi vaae1is,x10
         w9 = 0xd
         x10 = x8 | 0xc
         tlbi vaae1is,x10
         x9 = x8 | x9
         tlbi vaae1is,x9
         x10 = x8 | 0xe
         tlbi vaae1is,x10
         x8 = x8 | 0xf
         tlbi vaae1is,x8
         dsb ish
         
         (x0, 2) = 3              // int64_t arg2
         0x802fb5c ()             // 0x802fb5c(0xcc0ff, 0x0, 0x0, 0x0)
         x8 = 0x802f000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x802fb8c     // unlikely

    loc_0x0802fb6c: // orphan
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         (w4, 2) = 3
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         w5 = w8 - 1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h // x24
         0x802fb88 ()             // 0x802fb88(0x802f000, 0x10, 0x20, 0x0)

    loc_0x0802fb8c: // orphan
         x23 = x21 + 0x7ac
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802fb94 ()             // 0x802fb94(0x7ac, 0x0, 0x0, 0x0)
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802fba0 ()             // 0x802fba0(0x0, 0x0, 0x0, 0x0)
         tbz w0,0,0x802fbb4       // likely

    loc_0x0802fba8: // orphan
         (x9, 2) = 3
         [x9 + 8] = x8
         [x8] = x9

    loc_0x0802fbb4: // orphan
         x8 = 0x100
         x8 = 0xdead              // '\xad\xde'
         w9 = 0x22                // '\"'
         x9 = x8 | x9
         [x22] = (x8,2)
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w8 = w8 - 1
         [x21 + 0x7a8] = w8
         0x802fbdc ()             // 0x802fbdc(0x20, 0x20, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802fbe4 ()             // 0x802fbe4(0x0, 0x20, 0x0, 0x0)
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802fbf0 ()             // 0x802fbf0(0x802f000, 0x20, 0x0, 0x0)
         w3 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = 0x802f000
         x0 = x0 + 0
         jmp 0x802fa7c

    loc_0x0802fc04: // orphan
         x1 = [x22 + 0x40]        // 0xdd // 221 // int64_t arg2
         w2 = 0x1000
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802fc10 ()             // 0x802fc10(0x20, 0x0, 0x1000, 0x0)
         [x22, 0x38] = (x23,2)
         x8 = 0x802f000
         x8 = [x8]                // 0xcf // 207
         [var_8h] = x24
         x24 = x21 + 0x7b0
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x8 = x23 - x8
         x8 = x8 << 6
         [x22 + 0x48] = x8
         0x802fc38 ()             // 0x802fc38(0x7b0, 0x0, 0x1000, 0x0)
         x8 = [x22 + 0x58]        // 0xdd // 221
         if !x8 jmp 0x802fc70     // unlikely

    loc_0x0802fc44: // orphan
         w9 = [x22 + 0x28]        // 0xdd // 221
         if (w9 == 0x1ff)         // x26
         b.hi 0x802fc70           // unlikely

    loc_0x0802fc50: // orphan
         x10 = [x22 + 0x30]       // 0xdd // 221
         x11 = [x22 + 0x48]       // 0xdd // 221
         x12 = 0xfff              // '\xff\x0f'
         x12 = 0xffef             // '\xef\xff'
         x10 = x10 & x12
         x11 = x11 & 0xfffffffff000
         x10 = x11 | x10
         [x8 + x9,lsl 3] = x10

    loc_0x0802fc70: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802fc74 ()             // 0x802fc74(0x20, 0x0, 0x0, 0x0)
         dsb ishst
         x8 = [x22 + 0x18]        // 0xdd // 221 // x19
         dsb ishst
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x8 = x8 >> 0xc
         x8 = x8 & 0xffffffffff0
         tlbi vaae1is,x8
         x9 = x8 | 1              // x26
         tlbi vaae1is,x9
         x9 = x8 | 2
         tlbi vaae1is,x9
         x9 = x8 | 3
         tlbi vaae1is,x9
         x9 = x8 | 4
         tlbi vaae1is,x9
         w9 = 0x5
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 6
         tlbi vaae1is,x9
         x9 = x8 | 7
         tlbi vaae1is,x9
         x9 = x8 | 8
         tlbi vaae1is,x9
         w9 = 0x9
         x9 = x8 | x9
         tlbi vaae1is,x9
         w9 = 0xa
         x9 = x8 | x9
         tlbi vaae1is,x9
         w9 = 0xb
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 0xc
         tlbi vaae1is,x9
         w9 = 0xd
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 0xe
         tlbi vaae1is,x9
         x8 = x8 | 0xf
         tlbi vaae1is,x8
         dsb ish
         
         x1 = [var_8h]            // 0x4 // 4 // int64_t arg2 // x24
         0x802fd2c ()             // 0x802fd2c(0x20, 0x20, 0x0, 0x0)
         x23 = x21 + 0x7ac
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802fd38 ()             // 0x802fd38(0x7ac, 0x20, 0x0, 0x0)
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802fd44 ()             // 0x802fd44(0x0, 0x20, 0x0, 0x0)
         tbz w0,0,0x802fd58       // likely

    loc_0x0802fd4c: // orphan
         (x9, 2) = 3
         [x9 + 8] = x8
         [x8] = x9

    loc_0x0802fd58: // orphan
         x8 = 0x100
         x8 = 0xdead              // '\xad\xde'
         w9 = 0x22                // '\"'
         x9 = x8 | x9
         [x22] = (x8,2)
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w8 = w8 - 1
         [x21 + 0x7a8] = w8
         0x802fd80 ()             // 0x802fd80(0x20, 0x20, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802fd88 ()             // 0x802fd88(0x0, 0x20, 0x0, 0x0)
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802fd94 ()             // 0x802fd94(0x802f000, 0x20, 0x0, 0x0)
         w3 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = 0x802f000
         x0 = x0 + 0
         jmp 0x802fa7c

}

/* ===== 0x0802e6e8 ===== */
int sym.brk_bp_update_cfg (int esi, int edx) {
    loc_0x802e6e8:
        [sp, -0x30]! = (x29,2) // " "
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x802e000
        w8 = (byte) [x8] // 0xcf // 207
        if (w8 == 1)  // x26
        b.ne 0x802e7c8 // likely
            
    loc_0x802e7c8:
        w0 = ~0x5
        jmp 0x802e850
         // do {
    loc_0x802e850:
        // CODE XREFS from sym.brk_bp_update_cfg @ 0x802e7cc, 0x802e870, 0x802e968
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3  // x24
        // x24
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e708
    loc_0x802e710:
        w8 = [x19 + 8] // 0xda // 218
        if (w8 == 1)  // x26
        b.lt 0x802e84c // unlikely
            
    loc_0x802e84c:
        w0 = ~0x15
    loc_0x0802e71c: // orphan
             x8 = [x19 + 0x10]        // 0xda // 218 // x24
             if !x8 jmp 0x802e84c     // unlikely

    loc_0x0802e724: // orphan
         w9 = [x19]               // 0xda // 218
         if (w9 == 1)             // x26
         b.ne 0x802e84c           // likely

    loc_0x0802e730: // orphan
         w9 = [x19 + 4]           // 0xda // 218
         if w9 jmp 0x802e84c      // likely

    loc_0x0802e738: // orphan
         w9 = [x19 + 0x18]        // 0xda // 218
         if (w9 == 0x10)          // x26
         b.hi 0x802e84c           // unlikely

    loc_0x0802e744: // orphan
         w9 = [x19 + 0xe0]        // 0xda // 218
         if (w9 == 0x10)          // x26 // x26
         b.hi 0x802e84c           // likely

    loc_0x0802e750: // orphan
         x9 = x8 << 8
         x20 = x8 & x9,asr 8
         if ((x20 & 3) == 0)      // x26
         b.ne 0x802e84c           // likely

    loc_0x0802e760: // orphan
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x802e000
         x8 = [x8]                // 0xcf // 207
         x9 = [x9]                // 0xd0 // 208
         w10 = 0x1                // x26
         if ((x8 & 0x400000) == 0) // x26
         x9 = x10 << x9
         w8 = ~0xfff              // '\xff\x0f'
         csel x8,x9,x8, eq
         if (x20 == x8)           // x26
         b.hs 0x802e84c           // unlikely

    loc_0x0802e78c: // orphan
         x0 = 0x802e000
         x0 = x0 + 0              // int64_t arg1
         0x802e794 ()             // 0x802e794(0x802e000, 0x0, 0x0, 0x0)
         x0 = 0x802e000
         x0 = x0 + 0              // int64_t arg1
         0x802e7a0 ()             // 0x802e7a0(0x802e000, 0x0, 0x0, 0x0)
         x8 = 0x802e000
         x8 = x8 + 0
         x21 = [x8]               // 0xcf // 207
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x21 == x8)           // x26
         b.eq 0x802e81c           // unlikely

    loc_0x0802e7bc: // orphan
         w9 = [x19 + 8]           // 0xda // 218
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802e7e4

    loc_0x0802e7d0: // orphan
         x22 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if x21 jmp 0x802e874     // unlikely

    loc_0x0802e7d8: // orphan
         // CODE XREF from sym.brk_bp_update_cfg @ 0x802e818
         x21 = [x21]              // 0xdc // 220
         if (x21 == x8)           // x26 // x26
         b.eq 0x802e820           // unlikely

    loc_0x0802e7e4: // orphan
         // CODE XREF from sym.brk_bp_update_cfg @ 0x802e7c4
         w10 = [x21 + 0x10]       // 0xdc // 220 // x19
         if (w10 == w9)           // x26
         b.ne 0x802e7d8           // likely

    loc_0x0802e7f0: // orphan
         x10 = [x21 + 0x798]      // 0xdc // 220
         x11 = x21 + 0x798
         if (x10 == x11)          // x26 // x26
         b.eq 0x802e7d8           // likely

    loc_0x0802e800: // orphan
         x12 = [x10 + 0x18]       // 0xd1 // 209 // x19
         if (x12 == x20)          // x26
         b.eq 0x802e7d0           // unlikely

    loc_0x0802e80c: // orphan
         x10 = [x10]              // 0xd1 // 209
         if (x10 == x11)          // x26 // x26
         b.ne 0x802e800           // likely

    loc_0x0802e818: // orphan
         jmp 0x802e7d8

    loc_0x0802e81c: // orphan
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802e820: // orphan
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802e824: // orphan
         // CODE XREF from sym.brk_bp_update_cfg @ 0x802e878
         x0 = 0x802e000
         x0 = x0 + 0              // int64_t arg1
         0x802e82c ()             // 0x802e82c(0x802e000, 0x0, 0x0, 0x0)
         if !x22 jmp 0x802e860    // likely

    loc_0x0802e834: // orphan
         if !x21 jmp 0x802e860    // likely

    loc_0x0802e838: // orphan
         w8 = [x22 + 0x10]        // 0xdd // 221 // x19
         if !w8 jmp 0x802e87c     // likely

    loc_0x0802e840: // orphan
         x0 = 0x802e000
         x0 = x0 + 0              // int64_t arg1
         0x802e848 ()             // 0x802e848(0x802e000, 0x0, 0x0, 0x0)

    loc_0x0802e860: // orphan
         x0 = 0x802e000
         x0 = x0 + 0              // int64_t arg1
         0x802e868 ()             // " " // 0x802e868(0x802e000, 0x0, 0x0, 0x0)
         w0 = ~0x1
         jmp 0x802e850

    loc_0x0802e874: // orphan
         x22 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802e824

    loc_0x0802e87c: // orphan
         x21 = x21 + 0x7ac
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802e884 ()             // 0x802e884(0x7ac, 0x0, 0x0, 0x0)
         w9 = [x19 + 0x18]        // 0xda // 218
         w8 = 0x10                // x19
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bic w10,w9,w9, asr 31    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 0x10)         // x26
         csel w10,w10,w8, lt
         if (w9 == 1)             // x26
         [x22 + 0x80] = w10
         b.lt 0x802e8e8           // likely

    loc_0x0802e8ac: // orphan
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x22 + 0x84
         x12 = x19 + 0x60

    loc_0x0802e8bc: // orphan
         x13 = x9 << 2
         x14 = x12 + x13
         ldur w14,[x14,-0x44]     // 0xd5 // 213
         [x11 + x13] = w14
         x13 = x9 << 3
         x14 = [x12 + x13]        // 0xd4000000d3 // 910533066963
         x9 = x9 + 1
         x13 = x11 + x13
         if (x9 == x10)           // x26
         [x13 = x14
         b.lo 0x802e8bc           // unlikely

    loc_0x0802e8e8: // orphan
         w10 = [x19 + 0xe0]       // 0xda // 218
         bic w9,w10,w10, asr 31   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 0x10)          // x26
         csel w9,w9,w8, lt
         if (w10 == 1)            // x26 // x26
         [x22 + 0x148] = w9
         b.lt 0x802e934           // likely

    loc_0x0802e904: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // x9

    loc_0x0802e90c: // orphan
         x10 = x8 << 2
         x11 = x19 + x10
         w12 = [x11 + 0xe4]       // 0xd2 // 210
         x10 = x22 + x10
         x8 = x8 + 1
         if (x8 == x9)            // x26
         [x10 + 0x14c] = w12
         s0 = [x11 + 0x124]       // 0xd2 // 210
         [x10 + 0x18c] = s0
         b.lo 0x802e90c           // unlikely

    loc_0x0802e934: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802e938 ()             // 0x802e938(0x0, 0x0, 0x0, 0x0)
         x0 = 0x802e000
         x0 = x0 + 0              // int64_t arg1
         0x802e944 ()             // 0x802e944(0x802e000, 0x0, 0x0, 0x0)
         w1 = [x19 + 8]           // 0xda // 218
         w3 = [x22 + 0x80]        // 0xdd // 221
         w4 = [x22 + 0x148]       // 0xdd // 221
         x0 = 0x802e000
         x0 = x0 + 0              // int64_t arg1
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         0x802e960 ()             // 0x802e960(0x802e000, 0x10, 0x20, 0x0)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802e850

}

/* ===== 0x0802fda8 ===== */
int sym.brk_bp_get_hits (int esi, int edx) {
    loc_0x802fda8:
        [sp, -0x50]! = (x29,2)
        [sp, 0x10] = (x26,2)
        [sp, 0x20] = (x24,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x802ff60 // likely
            
    loc_0x802ff60:
        w21 = ~0x15
        jmp 0x802ff78
         // do {
    loc_0x802ff78:
        // CODE XREF from sym.brk_bp_get_hits @ 0x802ff64
        w0 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x29, 2) = 3  // x24
        // x24
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802fdc4
    loc_0x802fdd0:
        w8 = [x19 + 0x18] // 0xda // 218
        if !w8 jmp 0x802ff60 // likely
    loc_0x802fdd8:
        x20 = [x19 + 8] // 0xda // 218
        x0 = 0x802f000
        x0 = x0 + 0   // int64_t arg1
        0x802fde4 ()  // "\t" // 0x802fde4(0x802f000, 0x0, 0x0, 0x0)
        x9 = 0x802f000
        x9 = x9 + 0
        x8 = [x9]     // 0xd0 // 208
        if (x8 == x9) // x26
        b.eq 0x802ff68 // unlikely
            
    loc_0x802ff68:
        w21 = ~0x1
         // do {
    loc_0x802ff6c:
        // CODE XREFS from sym.brk_bp_get_hits @ 0x802ff9c, 0x802ffa4, 0x802ffb8
        x0 = 0x802f000
        x0 = x0 + 0   // int64_t arg1
        0x802ff74 ()  // 0x802ff74(0x802f000, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0802fe0c: // orphan
             x8 = [x8]                // 0xcf // 207
             if (x8 == x9)            // x26
             b.eq 0x802ff68           // unlikely

    loc_0x0802fe18: // orphan
         // CODE XREF from sym.brk_bp_get_hits @ 0x802fe08
         w12 = [x8 + 0x10]        // 0xcf // 207
         if (w12 == w10)          // x26 // x26
         b.ne 0x802fe0c           // unlikely

    loc_0x0802fe24: // orphan
         x23 = [x8 + 0x798]       // 0xcf // 207
         x12 = x8 + 0x798
         if (x23 == x12)          // x26 // x26
         b.eq 0x802fe4c           // unlikely

    loc_0x0802fe34: // orphan
         x13 = [x23 + 0x18]       // 0xde // 222 // x24
         if (x13 == x11)          // x26
         b.eq 0x802fe4c           // unlikely

    loc_0x0802fe40: // orphan
         x23 = [x23]              // 0xde // 222 // x24
         if (x23 == x12)          // x26
         b.ne 0x802fe34           // likely

    loc_0x0802fe4c: // orphan
         if !x23 jmp 0x802fe0c    // unlikely

    loc_0x0802fe50: // orphan
         x12 = [x23 + 0x18]       // 0xde // 222 // x24
         if (x12 == x11)          // x26
         b.ne 0x802fe0c           // likely

    loc_0x0802fe5c: // orphan
         x21 = x8 + 0x7ac
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802fe64 ()             // 0x802fe64(0x72a9c629000007ae, 0x0, 0x0, 0x0)
         w8 = [x23 + 0x2558]      // 0xde // 222
         w9 = [x19 + 0x18]        // 0xda // 218
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         if (w8 == w9)            // x26 // x26
         csel w22,w8,w9, lo
         0x802fe80 ()             // 0x802fe80(0x72a9c629000007ae, 0x72a9c629000007ae, 0x0, 0x0)
         if !w22 jmp 0x802ff94    // likely

    loc_0x0802fe88: // orphan
         w8 = 0x238
         umull x0,w22,w8          // int64_t arg1
         w1 = 0xcc0               // '\xc0\f'
         0x802fe94 ()             // 0x802fe94(0x0, 0xcc0, 0x0, 0x0)
         if !x0 jmp 0x802ffa0     // likely

    loc_0x0802fe9c: // orphan
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802fea4 ()             // 0x802fea4(0x0, 0x0, 0x0, 0x0)
         w8 = [x23 + 0x2558]      // 0xde // 222
         if (w22 == w8)
         csel w24,w22,w8, lo
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w24 jmp 0x802ff0c    // likely

    loc_0x0802febc: // orphan
         w8 = [x23 + 0x2554]      // 0xde // 222
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = 0x238

    loc_0x0802fec8: // orphan
         smaddl x8,w8,w26, x23
         smaddl x0,w25,w26, x20   // int64_t arg1 // x24
         x1 = x8 + 0x1d0
         w2 = 0x238
         0x802fed8 ()             // 0x802fed8(0x20, 0x1f2, 0x238, 0x0)
         w8 = [x23 + 0x2554]      // 0xde // 222
         w25 = w25 + 1            // x26
         w9 = w8 + 1              // x26
         w10 = w8 + 0x10          // x19
         if (w9 == 0)             // x26
         csinc w8,w10,w8, lt      // x26
         w8 = w8 & 0xfffffff0
         w8 = w9 - w8             // x26
         if (w24 == w25)          // x26
         [x23 + 0x2554] = w8
         b.ne 0x802fec8           // likely

    loc_0x0802ff08: // orphan
         w8 = [x23 + 0x2558]      // 0xde // 222

    loc_0x0802ff0c: // orphan
         w8 = w8 - w24
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x23 + 0x2558] = w8
         0x802ff1c ()             // 0x802ff1c(0x0, 0x0, 0x0, 0x0)
         w8 = 0x238
         umull x21,w24,w8
         x8 = x21 >> 0x1f
         if x8 jmp 0x802ffbc      // unlikely

    loc_0x0802ff30: // orphan
         x22 = [x19 + 0x10]       // 0xda // 218 // x24
         w2 = 0x1                 // x26
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ff40 ()             // 0x802ff40(0x20, 0x0, 0x1, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ff50 ()             // 0x802ff50(0x798, 0x20, 0x0, 0x0)
         if !x0 jmp 0x802ffa8     // unlikely

    loc_0x0802ff58: // orphan
         w21 = ~0xd
         jmp 0x802ffb0

    loc_0x0802ff94: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x1c] = wzr
         jmp 0x802ff6c

    loc_0x0802ffa0: // orphan
         w21 = ~0xb
         jmp 0x802ff6c

    loc_0x0802ffa8: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x1c] = w24

    loc_0x0802ffb0: // orphan
         // CODE XREF from sym.brk_bp_get_hits @ 0x802ff5c
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802ffb4 ()             // 0x802ffb4(0x20, 0x0, 0x0, 0x0)
         jmp 0x802ff6c

    loc_0x0802ffbc: // orphan
         brk 0x800

}

/* ===== 0x0802e96c ===== */
int sym.brk_bp_memwrite (int esi, int edx) {
    loc_0x802e96c:
        sp = sp - 0x70
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x28,2)
        [sp, 0x30] = (x26,2)
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_10h
        x8 = 0x802e000
        w8 = (byte) [x8] // 0xcf // 207
        if (w8 == 1)  // x26
        b.ne 0x802e9d4 // likely
            
    loc_0x802e9d4:
        w19 = ~0x5
         // do {
    loc_0x802e9d8:
        // XREFS: CODE 0x0802e9d0  CODE 0x0802ea80  CODE 0x0802edcc
        // XREFS: CODE 0x0802ee74  CODE 0x0802ef4c  CODE 0x0802f474
        // XREFS: CODE 0x0802f530
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_70h
        0x0802e9f8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e99c
    loc_0x802e9a4:
        w0 = [x20 + 8] // 0xdb // 219
        if (w0 == 1)  // x26
        b.lt 0x802e9cc // likely
            
    loc_0x802e9cc:
        w19 = ~0x15
        jmp 0x802e9d8
    loc_0x0802e9b0: // orphan
             x8 = [x20 + 0x10]        // 0xdb // 219
             if !x8 jmp 0x802e9cc     // unlikely

    loc_0x0802e9b8: // orphan
         w9 = [x20]               // 0xdb // 219 // x24
         if (w9 == 1)             // x26
         b.ne 0x802e9cc           // likely

    loc_0x0802e9c4: // orphan
         w9 = [x20 + 4]           // 0xdb // 219
         if !w9 jmp 0x802e9fc     // likely

    loc_0x0802e9fc: // orphan
         x9 = [x20 + 0x18]        // 0xdb // 219 // x24
         if !x9 jmp 0x802e9cc     // unlikely

    loc_0x0802ea04: // orphan
         x9 = [x20 + 0x20]        // 0xdb // 219 // x24
         if !x9 jmp 0x802e9cc     // unlikely

    loc_0x0802ea0c: // orphan
         mrs x10,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = 0x802e000
         x10 = [x10]              // 0xd1 // 209
         x11 = [x25]              // 0xe0 // 224
         x12 = x8 << 8
         w13 = 0x1                // x26
         x19 = x8 & x12,asr 8
         x8 = x13 << x11
         if ((x10 & 0x400000) == 0) // x26 // x26
         w10 = ~0xfff             // '\xff\x0f'
         csel x8,x8,x10, eq
         if (x19 == x8)           // x26 // x26
         b.hs 0x802e9cc           // unlikely

    loc_0x0802ea40: // orphan
         x27 = x19 & 0xfff
         x8 = x9 + x27
         if (x8 == 1)             // x26
         b.hi 0x802e9cc           // unlikely

    loc_0x0802ea50: // orphan
         0x802ea50 ()             // 0x802ea50(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x802ea7c     // likely

    loc_0x0802ea58: // orphan
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ea5c ()             // 0x802ea5c(0x0, 0x0, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ea68 ()             // 0x802ea68(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x802ea84     // likely

    loc_0x0802ea70: // orphan
         0x802ea70 ()             // 0x802ea70(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802ea88

    loc_0x0802ea7c: // orphan
         w19 = ~0x2
         jmp 0x802e9d8

    loc_0x0802ea84: // orphan
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802ea88: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x802ea78
         0x802ea88 ()             // 0x802ea88(0x0, 0x0, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802ea90 ()             // 0x802ea90(0x0, 0x0, 0x0, 0x0)
         if !x21 jmp 0x802e9cc    // likely

    loc_0x0802ea98: // orphan
         x0 = 0x802e000
         x0 = x0 + 0              // int64_t arg1
         x24 = x19 & 0xfffffffffffff000
         0x802eaa4 ()             // 0x802eaa4(0x802e000, 0x0, 0x0, 0x0)
         x23 = 0x802e000
         x23 = x23 + 0
         x26 = [x23]              // 0xde // 222
         if (x26 == x23)
         b.eq 0x802eb54           // unlikely

    loc_0x0802eabc: // orphan
         x22 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802eac0: // orphan
         x8 = [x22 + 0x18]        // 0xdd // 221 // x19
         if (x8 == x21)           // x26
         b.eq 0x802eadc           // unlikely

    loc_0x0802eacc: // orphan
         x22 = [x22]              // 0xdd // 221
         if (x22 == x23)          // x26 // x26
         b.ne 0x802eac0           // likely

    loc_0x0802ead8: // orphan
         jmp 0x802eb54

    loc_0x0802eadc: // orphan
         if !x22 jmp 0x802eb54    // likely

    loc_0x0802eae0: // orphan
         x26 = [x22 + 0x798]      // 0xdd // 221
         x25 = x22 + 0x798
         jmp 0x802eaf0

    loc_0x0802eaec: // orphan
         x26 = [x26]              // 0xe1 // 225

    loc_0x0802eaf0: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x802eae8
         if (x26 == x25)
         b.eq 0x802ecd0           // unlikely

    loc_0x0802eaf8: // orphan
         x8 = [x26 + 0x18]        // 0xe1 // 225
         x8 = x8 & 0xfffffffffffff000
         if (x8 == x24)           // x26 // x26
         b.ne 0x802eaec           // likely

    loc_0x0802eb08: // orphan
         x8 = [x26 + 0x40]        // 0xe1 // 225
         if !x8 jmp 0x802eaec     // likely

    loc_0x0802eb10: // orphan
         if !x26 jmp 0x802ecd0    // unlikely

    loc_0x0802eb14: // orphan
         x22 = [x20 + 0x20]       // 0xdb // 219 // x24
         x9 = x22 >> 0x1f
         if x9 jmp 0x802f534      // unlikely

    loc_0x0802eb20: // orphan
         x23 = [x20 + 0x18]       // 0xdb // 219 // x24
         x24 = x8 + x27
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x8
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802eb34 ()             // 0x802eb34(0x72a9c62900000002, 0x0, 0x0, 0x0)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x8
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h // x24
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802eb44 ()             // 0x802eb44(0x72a9c62900000002, 0x20, 0x0, 0x0)
         if !x0 jmp 0x802ee78     // unlikely

    loc_0x0802eb4c: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x802efc4
         w19 = ~0xd
         jmp 0x802ee60

    loc_0x0802eb54: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x802ead8
         x8 = 0x802e000
         x0 = [x8]                // 0xcf // 207 // int64_t arg1
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x7f8
         0x802eb64 ()             // 0x802eb64(0x528001a9d5088369, 0xdc0, 0x7f8, 0x0)
         if !x0 jmp 0x802ee5c     // unlikely

    loc_0x0802eb6c: // orphan
         x1 = 0x802e000
         x2 = 0x802e000
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x0 + 0x7ac
         x0 = x0 + 0x7c0          // int64_t arg1 // " "
         x1 = x1 + 0              // int64_t arg_70h
         x2 = x2 + 0
         [var_8h] = x26           // " "
         [x8] = xzr
         0x802eb90 ()             // 0x802eb90(0x7c0, 0x802e000, 0x802e000, 0x0)
         x0 = x22 + 0x7d8         // int64_t arg1
         w2 = 0x8
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x22 + 0x7b4] = wzr
         [x22 + 0x7b8] = wzr
         [x22 + 0x7bc] = wzr
         0x802ebac ()             // 0x802ebac(0x7d8, 0x0, 0x8, 0x0)
         x0 = x22 + 0x7e8         // int64_t arg1
         w2 = 0x8
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ebbc ()             // 0x802ebbc(0x7e8, 0x0, 0x8, 0x0)
         x26 = x22 + 0x798
         w28 = 0x1                // x26
         [x22 + 0x798] = x26
         [x22 + 0x7a0] = x26
         [x22 + 0x7a8] = wzr
         [x22 + 0x7e0] = (byte) w28
         w8 = [x20 + 8]           // 0xdb // 219
         [x22 + 0x18] = x21
         x10 = [x25]              // 0xe0 // 224
         x9 = 0x802e000
         [x22 + 0x10] = w8        // x19
         x8 = [x21 + 0x40]        // 0xdc // 220 // x24
         x11 = 0x802e000
         x9 = [x9]                // 0xd0 // 208
         x11 = [x11]              // 0xd2 // 210
         x10 = x10 - 1
         x10 = x8 >> x10
         if ((x10 & 1) == 0)      // x26
         csneg x9,x9,x11, eq
         x8 = x9 + x8
         w0 = 0x2578              // 'x%'
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x2
         [x22 + 0x80] = x8
         0x802ec20 ()             // 0x802ec20(0x2578, 0xdc0, 0x2, 0x0)
         if !x0 jmp 0x802edb4     // unlikely

    loc_0x0802ec28: // orphan
         x25 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x10] = w28        // x19
         [x0 + 0x18] = x19
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ec44 ()             // 0x802ec44(0xcc0, 0x0, 0x0, 0x0)
         [x25 + 0x38] = x0        // " "
         if !x0 jmp 0x802edac     // unlikely

    loc_0x0802ec50: // orphan
         x8 = xzr | 0xffffffc000000000
         x8 = 0x800
         x8 = x8 + x0,lsl 6
         x8 &= x8
         [x25 + 0x40] = x8        // " "
         b.eq 0x802eda4           // unlikely

    loc_0x0802ec68: // orphan
         x8 = 0x802e000
         x8 = [x8]                // 0xcf // 207
         x28 = x21 + 0x68
         x8 = x0 - x8
         x8 = x8 << 6
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x25 + 0x48] = x8
         0x802ec84 ()             // 0x802ec84(0x68, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x802ec90 ()             // 0x802ec90(0x0, 0x20, 0x0, 0x0)
         if !x0 jmp 0x802ecac     // likely

    loc_0x0802ec98: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x24 == x8)
         b.lo 0x802ecac           // likely

    loc_0x0802eca4: // orphan
         w8 = (byte) [x0 + 0x50]  // 0xc7 // 199
         tbnz w8,0,0x802edd0      // likely

    loc_0x0802ecac: // orphan
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802ecb0 ()             // 0x802ecb0(0x0, 0x0, 0x0, 0x0)
         x0 = [x25 + 0x38]        // 0xe0 // 224 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ecbc ()             // 0x802ecbc(0xcc0, 0x0, 0x0, 0x0)
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802ecc4 ()             // 0x802ecc4(0x0, 0x0, 0x0, 0x0)
         w19 = ~0x15
         jmp 0x802edb8

    loc_0x0802ecd0: // orphan
         w8 = [x22 + 0x7a8]       // 0xdd // 221
         if (w8 == 7)             // x26
         jmp ifle 0x802ece4       // likely

    loc_0x0802ecdc: // orphan
         w19 = ~0x1b
         jmp 0x802ee60

    loc_0x0802ece4: // orphan
         w0 = 0x2578              // 'x%'
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x2
         0x802ecf0 ()             // 0x802ecf0(0x2578, 0xdc0, 0x2, 0x0)
         if !x0 jmp 0x802ee5c     // unlikely

    loc_0x0802ecf8: // orphan
         w8 = 0x1                 // x26
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x10] = w8         // x19
         [x0 + 0x18] = x19
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ed18 ()             // 0x802ed18(0xcc0, 0x0, 0x0, 0x0)
         [x23 + 0x38] = x0
         if !x0 jmp 0x802ee54     // unlikely

    loc_0x0802ed24: // orphan
         x8 = xzr | 0xffffffc000000000
         x8 = 0x800
         x8 = x8 + x0,lsl 6
         x8 &= x8
         [x23 + 0x40] = x8
         b.eq 0x802ee4c           // unlikely

    loc_0x0802ed3c: // orphan
         x8 = 0x802e000
         x8 = [x8]                // 0xcf // 207
         x26 = x21 + 0x68
         x8 = x0 - x8
         x8 = x8 << 6
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x23 + 0x48] = x8
         0x802ed58 ()             // 0x802ed58(0x68, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x802ed64 ()             // 0x802ed64(0x0, 0x20, 0x0, 0x0)
         if !x0 jmp 0x802ed80     // likely

    loc_0x0802ed6c: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x24 == x8)
         b.lo 0x802ed80           // likely

    loc_0x0802ed78: // orphan
         w8 = (byte) [x0 + 0x50]  // 0xc7 // 199
         tbnz w8,0,0x802ef50      // likely

    loc_0x0802ed80: // orphan
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802ed84 ()             // 0x802ed84(0x1, 0x0, 0x0, 0x0)
         x0 = [x23 + 0x38]        // 0xde // 222 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ed90 ()             // 0x802ed90(0xcc0, 0x0, 0x0, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802ed98 ()             // 0x802ed98(0x20, 0x0, 0x0, 0x0)
         w19 = ~0x15
         jmp 0x802ee60

    loc_0x0802eda4: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802eda8 ()             // 0x802eda8(0x0, 0x0, 0x0, 0x0)

    loc_0x0802edac: // orphan
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802edb0 ()             // 0x802edb0(0x0, 0x0, 0x0, 0x0)

    loc_0x0802edb4: // orphan
         w19 = ~0xb

    loc_0x0802edb8: // orphan
         // CODE XREFS from sym.brk_bp_memwrite @ 0x802eccc, 0x802ee48, 0x802f004
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802edbc ()             // 0x802edbc(0x0, 0x0, 0x0, 0x0)
         x0 = 0x802e000
         x0 = x0 + 0              // int64_t arg1
         0x802edc8 ()             // 0x802edc8(0x802e000, 0x0, 0x0, 0x0)
         jmp 0x802e9d8

    loc_0x0802edd0: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ede0 ()             // 0x802ede0(0x0, 0x10, 0x0, 0x0)
         if w0 jmp 0x802efc8      // unlikely

    loc_0x0802ede8: // orphan
         x21 = [x20 + 0x20]       // 0xdb // 219
         x8 = x21 >> 0x1f
         if x8 jmp 0x802f53c      // likely

    loc_0x0802edf4: // orphan
         x8 = [x25 + 0x40]        // 0xe0 // 224
         x9 = [x20 + 0x18]        // 0xdb // 219
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = x8 + x27
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [sp] = x9
         0x802ee10 ()             // 0x802ee10(0xffffffc008000000, 0x0, 0x0, 0x0)
         x1 = [sp]                // 0x4 // int64_t arg_70h
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ee20 ()             // 0x802ee20(0xffffffc008000000, 0xcc0, 0x0, 0x0)
         if !x0 jmp 0x802f008     // unlikely

    loc_0x0802ee28: // orphan
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802ee2c ()             // 0x802ee2c(0x0, 0x0, 0x0, 0x0)
         x0 = [x25 + 0x38]        // 0xe0 // 224 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ee38 ()             // 0x802ee38(0xcc0, 0x0, 0x0, 0x0)
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802ee40 ()             // 0x802ee40(0x0, 0x0, 0x0, 0x0)
         w19 = ~0xd
         jmp 0x802edb8

    loc_0x0802ee4c: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802ee50 ()             // 0x802ee50(0x0, 0x0, 0x0, 0x0)

    loc_0x0802ee54: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802ee58 ()             // 0x802ee58(0x20, 0x0, 0x0, 0x0)

    loc_0x0802ee5c: // orphan
         w19 = ~0xb

    loc_0x0802ee60: // orphan
         // CODE XREFS from sym.brk_bp_memwrite @ 0x802eb50, 0x802ece0, 0x802eda0, 0x802f238
         x0 = 0x802e000
         x0 = x0 + 0              // int64_t arg1
         0x802ee68 ()             // 0x802ee68(0x802e000, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802ee70 ()             // 0x802ee70(0x0, 0x0, 0x0, 0x0)
         jmp 0x802e9d8

    loc_0x0802ee78: // orphan
         dsb ishst
         x8 = x19 >> 0xc
         dsb ishst
         x8 = x8 & 0xffffffffff0
         tlbi vaae1is,x8
         x9 = x8 | 1              // x26
         tlbi vaae1is,x9
         x9 = x8 | 2
         tlbi vaae1is,x9
         x9 = x8 | 3
         tlbi vaae1is,x9
         x9 = x8 | 4
         tlbi vaae1is,x9
         w9 = 0x5
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 6
         tlbi vaae1is,x9
         x9 = x8 | 7
         tlbi vaae1is,x9
         x9 = x8 | 8
         tlbi vaae1is,x9
         w9 = 0x9
         x9 = x8 | x9
         tlbi vaae1is,x9
         w9 = 0xa
         x9 = x8 | x9
         tlbi vaae1is,x9
         w9 = 0xb
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 0xc
         tlbi vaae1is,x9
         w9 = 0xd
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 0xe
         tlbi vaae1is,x9
         x8 = x8 | 0xf
         tlbi vaae1is,x8
         dsb ish
         
         (x0, 2) = 3              // int64_t arg_70h
         0x802ef24 ()             // 0x802ef24(0xc, 0xc0ffffffc0080000, 0x0, 0x0)
         x8 = 0x802e000
         w8 = [x8]                // 0xcf // 207
         if w8 jmp 0x802f164      // likely

    loc_0x0802ef34: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x802f198
         x0 = 0x802e000
         x0 = x0 + 0              // int64_t arg1
         0x802ef3c ()             // 0x802ef3c(0x802e000, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802ef44 ()             // 0x802ef44(0x0, 0x0, 0x0, 0x0)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802e9d8

    loc_0x0802ef50: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         0x802ef60 ()             // 0x802ef60(0x0, 0x10, 0x0, 0x20)
         if w0 jmp 0x802f1fc      // unlikely

    loc_0x0802ef68: // orphan
         x24 = [x20 + 0x20]       // 0xdb // 219
         x8 = x24 >> 0x1f
         if x8 jmp 0x802f544      // likely

    loc_0x0802ef74: // orphan
         x8 = [x23 + 0x40]        // 0xde // 222
         x9 = [x20 + 0x18]        // 0xdb // 219
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x28 = x8 + x27
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [var_8h] = x9
         0x802ef90 ()             // 0x802ef90(0xffffffc008000000, 0x20, 0x0, 0x0)
         x1 = [var_8h]            // 0x4 // int64_t arg_70h
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802efa0 ()             // 0x802efa0(0xffffffc008000000, 0xcc0, 0x20, 0x0)
         if !x0 jmp 0x802f23c     // unlikely

    loc_0x0802efa8: // orphan
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802efac ()             // 0x802efac(0x1, 0x0, 0x0, 0x0)
         x0 = [x23 + 0x38]        // 0xde // 222 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802efb8 ()             // 0x802efb8(0xcc0, 0x0, 0x0, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802efc0 ()             // 0x802efc0(0x20, 0x0, 0x0, 0x0)
         jmp 0x802eb4c

    loc_0x0802efc8: // orphan
         w21 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802efd0 ()             // 0x802efd0(0x0, 0x0, 0x0, 0x0)
         x0 = [x25 + 0x38]        // 0xe0 // 224 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802efdc ()             // 0x802efdc(0xcc0, 0x0, 0x0, 0x0)
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802efe4 ()             // 0x802efe4(0x0, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x802e000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w19 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // XREFS(121)
         0x802f000 ()             // 0x802f000(0x802e000, 0x0, 0x10, 0x0)
         jmp 0x802edb8

    loc_0x0802f008: // orphan
         dsb ishst
         x8 = x19 >> 0xc
         dsb ishst
         x8 = x8 & 0xffffffffff0
         tlbi vaae1is,x8
         x9 = x8 | 1              // x26
         tlbi vaae1is,x9
         x9 = x8 | 2
         tlbi vaae1is,x9
         x9 = x8 | 3
         tlbi vaae1is,x9
         x9 = x8 | 4
         tlbi vaae1is,x9
         w9 = 0x5
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 6
         tlbi vaae1is,x9
         x9 = x8 | 7
         tlbi vaae1is,x9
         x9 = x8 | 8
         tlbi vaae1is,x9
         w9 = 0x9
         x9 = x8 | x9
         tlbi vaae1is,x9
         w9 = 0xa
         x9 = x8 | x9
         tlbi vaae1is,x9
         w9 = 0xb
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 0xc
         tlbi vaae1is,x9
         w9 = 0xd
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 0xe
         tlbi vaae1is,x9
         x8 = x8 | 0xf
         tlbi vaae1is,x8
         dsb ish
         
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f0b4 ()             // 0x802f0b4(0x0, 0x0, 0x0, 0x0)
         (x0, 2) = 3              // int64_t arg_70h
         0x802f0bc ()             // 0x802f0bc(0xcc0, 0xffffffc008000000, 0x0, 0x0)
         x21 = [x22 + 0x7a0]      // 0xdd // 221
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x802f0d0 ()             // 0x802f0d0(0x0, 0x798, 0x1, 0x0)
         tbz w0,0,0x802f0e4       // likely

    loc_0x0802f0d8: // orphan
         [x22 + 0x7a0] = x25
         [x25] = (x26,2)
         [x21] = x25

    loc_0x0802f0e4: // orphan
         x0 = 0x802f000
         w25 = 0x1                // x26
         x0 = x0 + 0              // int64_t arg1
         [x22 + 0x7a8] = w25
         0x802f0f4 ()             // 0x802f0f4(0x802f000, 0x0, 0x0, 0x0)
         x24 = [x23 + 8]          // 0xde // 222
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         [x22 + 0x7f0] = (byte) w25
         0x802f110 ()             // 0x802f110(0x0, 0x2000000000, 0x20, 0x0)
         tbz w0,0,0x802f124       // likely

    loc_0x0802f118: // orphan
         [x23 + 8] = x22
         [x22] = (x23,2)
         [x24] = x22

    loc_0x0802f124: // orphan
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x802f130 ()             // 0x802f130(0x802f000, 0x0, 0x0, 0x0)
         x25 = 0x802f000
         w8 = (byte) [x25]        // 0xe0 // 224
         tbnz w8,0,0x802f1c8      // unlikely

    loc_0x0802f140: // orphan
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f148 ()             // 0x802f148(0x802f000, 0x0, 0x0, 0x0)
         if x0 jmp 0x802f19c      // likely

    loc_0x0802f150: // orphan
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f158 ()             // "5" // 0x802f158(0x802f000, 0x0, 0x0, 0x0)
         w21 = ~0x1
         jmp 0x802f490

    loc_0x0802f164: // orphan
         w8 = [x26 + 0x10]        // 0xe1 // 225
         w1 = [x20 + 8]           // 0xdb // 219
         x3 = [x20 + 0x20]        // 0xdb // 219
         x9 = 0x802f000
         x10 = 0x802f000
         x9 = x9 + 0
         x10 = x10 + 0
         if (w8 == 0)             // x26 // x26
         x0 = 0x802f000
         csel x4,x10,x9, eq
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802f194 ()             // 0x802f194(0x802f000, 0x0, 0x10, 0xffffffc008000000)
         jmp 0x802ef34

    loc_0x0802f19c: // orphan
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x802f000
         x2 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         x2 = x2 + 0
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802f1b8 ()             // 0x802f1b8(0x802f000, 0x0, 0x802f000, 0x0)
         if w0 jmp 0x802f478      // likely

    loc_0x0802f1c0: // orphan
         w8 = 0x1                 // x26
         [x25] = (byte) w8

    loc_0x0802f1c8: // orphan
         x23 = 0x802f000
         w8 = (byte) [x23]        // 0xde // 222
         tbz w8,0,0x802f1dc       // likely

    loc_0x0802f1d4: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802f414

    loc_0x0802f1dc: // orphan
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f1e4 ()             // 0x802f1e4(0x802f000, 0x0, 0x0, 0x0)
         if w0 jmp 0x802f3ec      // likely

    loc_0x0802f1ec: // orphan
         w9 = 0x1                 // x26
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x23] = (byte) w9        // x24
         jmp 0x802f414

    loc_0x0802f1fc: // orphan
         w24 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f204 ()             // 0x802f204(0x1, 0x0, 0x0, 0x0)
         x0 = [x23 + 0x38]        // 0xde // 222 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802f210 ()             // 0x802f210(0xcc0, 0x0, 0x0, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x802f218 ()             // 0x802f218(0x20, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w19 = w24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802f234 ()             // 0x802f234(0x802f000, 0x0, 0x10, 0x0)
         jmp 0x802ee60

    loc_0x0802f23c: // orphan
         dsb ishst
         x8 = x19 >> 0xc
         dsb ishst
         x8 = x8 & 0xffffffffff0
         tlbi vaae1is,x8
         x9 = x8 | 1              // x26
         tlbi vaae1is,x9
         x9 = x8 | 2
         tlbi vaae1is,x9
         x9 = x8 | 3
         tlbi vaae1is,x9
         x9 = x8 | 4
         tlbi vaae1is,x9
         w9 = 0x5
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 6
         tlbi vaae1is,x9
         x9 = x8 | 7
         tlbi vaae1is,x9
         x9 = x8 | 8              // " "
         tlbi vaae1is,x9
         w9 = 0x9
         x9 = x8 | x9
         tlbi vaae1is,x9
         w9 = 0xa
         x9 = x8 | x9
         tlbi vaae1is,x9
         w9 = 0xb
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 0xc
         tlbi vaae1is,x9
         w9 = 0xd
         x9 = x8 | x9
         tlbi vaae1is,x9
         x9 = x8 | 0xe
         tlbi vaae1is,x9
         x8 = x8 | 0xf
         tlbi vaae1is,x8
         dsb ish
         
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f2e8 ()             // 0x802f2e8(0x1, 0x0, 0x0, 0x0)
         (x0, 2) = 3              // int64_t arg_70h
         0x802f2f0 ()             // 0x802f2f0(0xcc0, 0xffffffc008000000, 0x0, 0x0)
         x24 = x22 + 0x7ac
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f2fc ()             // 0x802f2fc(0x7ac, 0xffffffc008000000, 0x0, 0x0)
         x28 = [x22 + 0x7a0]      // 0xdd // 221
         x27 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x2 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x802f314 ()             // 0x802f314(0x20, 0x0, 0x0, 0x0)
         tbz w0,0,0x802f328       // likely

    loc_0x0802f31c: // orphan
         [x22 + 0x7a0] = x23
         [x23] = (x25,2)
         [x28] = x23

    loc_0x0802f328: // orphan
         w8 = [x22 + 0x7a8]       // 0xdd // 221 // x26
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         w8 = w8 + 1
         [x22 + 0x7a8] = w8
         0x802f33c ()             // 0x802f33c(0x20, 0x0, 0x0, 0x0)
         w8 = (byte) [x22 + 0x7e0] // 0xdd // 221 // x26
         if !w8 jmp 0x802f378     // unlikely

    loc_0x0802f348: // orphan
         w8 = (byte) [x22 + 0x7f0] // 0xdd // 221 // x26
         if !w8 jmp 0x802f378     // unlikely

    loc_0x0802f350: // orphan
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f358 ()             // 0x802f358(0x802f000, 0x0, 0x0, 0x0)
         w8 = (byte) [x22 + 0x7f0] // 0xdd // 221 // x26
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x802f36c     // unlikely

    loc_0x0802f368: // orphan
         [x22 + 0x7e0] = (byte) wzr

    loc_0x0802f36c: // orphan
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f374 ()             // 0x802f374(0x802f000, 0x0, 0x0, 0x0)

    loc_0x0802f378: // orphan
         w8 = [x22 + 0x7a8]       // 0xdd // 221
         if (w8 == 2)             // x26 // x26
         b.lt 0x802f3c0           // unlikely

    loc_0x0802f384: // orphan
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f388 ()             // 0x802f388(0x1, 0x0, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x802f394 ()             // 0x802f394(0x0, 0x10, 0x0, 0x0)
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f3a0 ()             // 0x802f3a0(0x1, 0x10, 0x0, 0x0)
         if !w23 jmp 0x802f3c0    // likely

    loc_0x0802f3a8: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         0x802f3bc ()             // 0x802f3bc(0x802f000, 0x0, 0x10, 0x20)

    loc_0x0802f3c0: // orphan
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f3c8 ()             // 0x802f3c8(0x802f000, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f3d0 ()             // 0x802f3d0(0x0, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         x3 = [x20 + 0x20]        // 0xdb // 219
         w4 = [x22 + 0x7a8]       // 0xdd // 221
         x0 = 0x802f000
         x0 = x0 + 0
         jmp 0x802f464

    loc_0x0802f3ec: // orphan
         w21 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         w1 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802f3fc ()             // 0x802f3fc(0x802f000, 0x0, 0x0, 0x0)
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         w1 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802f40c ()             // "(" // 0x802f40c(0x802f000, 0x0, 0x0, 0x0)
         w8 = 0x1                 // x26

    loc_0x0802f414: // orphan
         // CODE XREFS from sym.brk_bp_memwrite @ 0x802f1d8, 0x802f1f8
         x0 = 0x802f000
         x9 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         [x9] = (byte) w8
         0x802f424 ()             // 0x802f424(0x802f000, 0x0, 0x0, 0x0)
         w8 = (byte) [x22 + 0x7f0] // 0xdd // 221 // x26
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x802f438     // unlikely

    loc_0x0802f434: // orphan
         [x22 + 0x7e0] = (byte) wzr

    loc_0x0802f438: // orphan
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f440 ()             // 0x802f440(0x802f000, 0x0, 0x0, 0x0)
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f44c ()             // 0x802f44c(0x802f000, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         x3 = [x20 + 0x20]        // 0xdb // 219
         w4 = [x22 + 0x7a8]       // 0xdd // 221
         x0 = 0x802f000
         x0 = x0 + 0

    loc_0x0802f464: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x802f3e8
         w5 = 0x8                 // " "
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802f46c ()             // 0x802f46c(0x0, 0x0, 0x10, 0x0)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802e9d8

    loc_0x0802f478: // orphan
         w21 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         w2 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802f48c ()             // 0x802f48c(0x802f000, 0x20, 0x0, 0x0)

    loc_0x0802f490: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x802f160
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f498 ()             // 0x802f498(0x802f000, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x22 + 0x7f0] = (byte) wzr
         0x802f4a8 ()             // 0x802f4a8(0x0, 0x0, 0x0, 0x0)
         tbz w0,0,0x802f4bc       // likely

    loc_0x0802f4b0: // orphan
         (x9, 2) = 3              // x24 // x24
         [x9 + 8] = x8
         [x8] = x9                // x24

    loc_0x0802f4bc: // orphan
         x8 = 0x100
         x8 = 0xdead              // '\xad\xde'
         w9 = 0x22                // '\"'
         x0 = 0x802f000
         x9 = x8 | x9
         x0 = x0 + 0              // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         [x22] = (x8,2)
         0x802f4dc ()             // 0x802f4dc(0x802f000, 0x10, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f4e4 ()             // 0x802f4e4(0x0, 0x10, 0x0, 0x0)
         x8 = [var_8h]            // 0x4
         if (x8 == x23)           // x26
         b.ne 0x802f518           // likely

    loc_0x0802f4f4: // orphan
         0x802f4f4 ()             // 0x802f4f4(0x0, 0x0, 0x0, 0x0)
         x19 = 0x802f000
         w8 = (byte) [x19]        // 0xda // 218
         if (w8 == 1)             // x26
         b.ne 0x802f518           // likely

    loc_0x0802f508: // orphan
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f510 ()             // 0x802f510(0x802f000, 0x0, 0x0, 0x0)
         [x19] = (byte) wzr

    loc_0x0802f518: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802f51c ()             // 0x802f51c(0x0, 0x0, 0x0, 0x0)
         x0 = 0x802f000
         x0 = x0 + 0              // int64_t arg1
         0x802f528 ()             // 0x802f528(0x802f000, 0x0, 0x0, 0x0)
         w19 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802e9d8

    loc_0x0802f534: // orphan
         brk 0x800

    loc_0x0802f53c: // orphan
         brk 0x800

    loc_0x0802f544: // orphan
         brk 0x800

}

/* ===== 0x08010f68 ===== */
int sym.kp_core_hook_install (int esi, int edx) {
    loc_0x8010f68:
        sp = sp - 0x1d0
        [sp, 0x170] = (x29,2)
        [sp, 0x180] = (x28,2)
        [sp, 0x190] = (x26,2)
        [sp, 0x1a0] = (x24,2)
        [sp, 0x1b0] = (x22,2)
        [sp, 0x1c0] = (x20,2)
        x29 = var_170h
        w23 = ~0x15
        [var_0h] = wzr // arg1
        // CODE XREFS from sym.kp_core_hook_install @ 0x8011574, 0x80115f0
        [sp] = (xzr,2)
        if !x0 jmp 0x8010fd4 // likely
            
    loc_0x8010fd4:
        // CODE XREFS from sym.kp_core_hook_install @ 0x801108c, 0x80113b0
        // CODE XREF from fcn.080119b8 @ 0x80119c0
        // CODE XREFS from sym.kp_core_hook_install @ 0x8011b44, 0x8011b78
        w0 = w23      // '\xff\xff\xff\xff\xff\xff\xff\xff' // " " x24
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_1d0h
        0x08010ff4
         // } else {
    loc_0x8010f98:
        x9 = x1 & 0x8000000000000003 // arg2
        x8 = 0x8000
        x22 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        if (x9 == x8) // x26
        b.ne 0x8010fd4 // likely
        }
        return eax;
    loc_0x8010fac:
        x9 = x2 & 0x8000000000000003 // arg3
        x21 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        if (x9 == x8) // x26
        b.ne 0x8010fd4 // likely
    loc_0x8010fbc:
        w8 = (byte) [x0 + 0x54] // 0xc7 // 199 // arg1
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if w8 jmp 0x8010fd0 // likely
            
    loc_0x8010fd0:
        w23 = ~0x71   // 'q'
    loc_0x08010fc8: // orphan
             x8 = [x20 + 0x18]        // 0xdb // 219
             // CODE XREF from sym.kp_core_hook_install @ 0x8011634
             if !x8 jmp 0x8010ff8     // unlikely

    loc_0x08010ff8: // orphan
         w2 = 0x58                // 'X'
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // " " x24
         // XREFS(71)
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x19 = x3                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         0x8011008 ()             // 0x8011008(0x20, 0x0, 0x58, 0x0)
         w8 = ~0
         [x20 + 0x20] = w8
         x26 = 0x8011000
         x8 = [x26]               // 0xe1 // 225
         if x8 jmp 0x8011034      // likely

    loc_0x08011020: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x8011028 ()             // 0x8011028(0x8011000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x26] = x0

    loc_0x08011034: // orphan
         x28 = 0x8011000
         x9 = [x28]               // 0xe3 // 227
         if x9 jmp 0x8011054      // likely

    loc_0x08011040: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x8011048 ()             // 0x8011048(0x8011000, 0x0, 0x0, 0x0)
         x8 = [x26]               // 0xe1 // 225
         [x28] = x0

    loc_0x08011054: // orphan
         if !x8 jmp 0x8011088     // unlikely

    loc_0x08011058: // orphan
         [x20] = x22              // " " x24
         w8 = [x22]               // 0xdd // 221
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)             // x26
         b.ne 0x8011090           // likely

    loc_0x0801106c: // orphan
         w8 = w8 << 2
         x8 = x8 & 0xffffffc
         x8 = x8 ^ loc.__crc_shadow_fault_init
         x8 = x22 + x8
         x9 = xzr | 0xfffffffff8000000
         x23 = x8 + x9
         jmp 0x80110c8

    loc_0x08011088: // orphan
         w23 = ~0x1
         jmp 0x8010fd4

    loc_0x08011090: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x80110c4           // unlikely

    loc_0x080110a0: // orphan
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x80110c4           // unlikely

    loc_0x080110b0: // orphan
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         if (w8 == w9)
         x8 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x8011374           // likely

    loc_0x080110c4: // orphan
         x23 = x22 + 4

    loc_0x080110c8: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x8011084
         w8 = [x23]               // 0xde // 222 // x24
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)             // x26
         b.ne 0x80110f4           // likely

    loc_0x080110d8: // orphan
         w8 = w8 << 2
         x8 = x8 & 0xffffffc
         x8 = x8 ^ loc.__crc_shadow_fault_init
         x8 = x23 + x8            // 0x8000000
                                  // loc.imp.system_wq
         x9 = xzr | 0xfffffffff8000000
         x23 = x8 + x9            // " "
         jmp 0x8011128

    loc_0x080110f4: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x8011124           // unlikely

    loc_0x08011104: // orphan
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x8011124           // unlikely

    loc_0x08011114: // orphan
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         if (w8 == w9)
         b.ne 0x8011368           // likely

    loc_0x08011124: // orphan
         x23 = x23 + 4

    loc_0x08011128: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x80110f0
         w8 = [x23]               // 0xde // 222 // x24
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)             // x26
         b.ne 0x8011154           // likely

    loc_0x08011138: // orphan
         w8 = w8 << 2
         x8 = x8 & 0xffffffc
         x8 = x8 ^ loc.__crc_shadow_fault_init
         x8 = x23 + x8
         x9 = xzr | 0xfffffffff8000000
         x23 = x8 + x9            // " "
         jmp 0x8011188

    loc_0x08011154: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x8011184           // unlikely

    loc_0x08011164: // orphan
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x8011184           // unlikely

    loc_0x08011174: // orphan
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         if (w8 == w9)
         b.ne 0x8011368           // likely

    loc_0x08011184: // orphan
         x23 = x23 + 4

    loc_0x08011188: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x8011150
         w8 = [x23]               // 0xde // 222 // x24
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)             // x26
         b.ne 0x80111b4           // likely

    loc_0x08011198: // orphan
         w8 = w8 << 2
         x8 = x8 & 0xffffffc
         x8 = x8 ^ loc.__crc_shadow_fault_init
         x8 = x23 + x8
         x9 = xzr | 0xfffffffff8000000
         x23 = x8 + x9            // " "
         jmp 0x80111e8

    loc_0x080111b4: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x80111e4           // unlikely

    loc_0x080111c4: // orphan
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x80111e4           // unlikely

    loc_0x080111d4: // orphan
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         if (w8 == w9)
         b.ne 0x8011368           // likely

    loc_0x080111e4: // orphan
         x23 = x23 + 4

    loc_0x080111e8: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x80111b0
         w8 = [x23]               // 0xde // 222 // x24
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)             // x26
         b.ne 0x8011214           // likely

    loc_0x080111f8: // orphan
         w8 = w8 << 2
         x8 = x8 & 0xffffffc
         x8 = x8 ^ loc.__crc_shadow_fault_init
         x8 = x23 + x8
         x9 = xzr | 0xfffffffff8000000
         x23 = x8 + x9            // " "
         jmp 0x8011248

    loc_0x08011214: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x8011244           // unlikely

    loc_0x08011224: // orphan
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x8011244           // unlikely

    loc_0x08011234: // orphan
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         if (w8 == w9)
         b.ne 0x8011368           // likely

    loc_0x08011244: // orphan
         x23 = x23 + 4

    loc_0x08011248: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x8011210
         w8 = [x23]               // 0xde // 222 // x24
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)             // x26
         b.ne 0x8011274           // likely

    loc_0x08011258: // orphan
         w8 = w8 << 2
         x8 = x8 & 0xffffffc
         x8 = x8 ^ loc.__crc_shadow_fault_init
         x8 = x23 + x8
         x9 = xzr | 0xfffffffff8000000
         x23 = x8 + x9            // " "
         jmp 0x80112a8

    loc_0x08011274: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x80112a4           // unlikely

    loc_0x08011284: // orphan
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x80112a4           // unlikely

    loc_0x08011294: // orphan
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         if (w8 == w9)
         b.ne 0x8011368           // likely

    loc_0x080112a4: // orphan
         x23 = x23 + 4

    loc_0x080112a8: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x8011270
         w8 = [x23]               // 0xde // 222 // x24
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)             // x26
         b.ne 0x80112d4           // likely

    loc_0x080112b8: // orphan
         w8 = w8 << 2
         x8 = x8 & 0xffffffc
         x8 = x8 ^ loc.__crc_shadow_fault_init
         x8 = x23 + x8
         x9 = xzr | 0xfffffffff8000000
         x23 = x8 + x9            // " "
         jmp 0x8011308

    loc_0x080112d4: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x8011304           // unlikely

    loc_0x080112e4: // orphan
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x8011304           // unlikely

    loc_0x080112f4: // orphan
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         if (w8 == w9)
         b.ne 0x8011368           // likely

    loc_0x08011304: // orphan
         x23 = x23 + 4

    loc_0x08011308: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x80112d0
         w8 = [x23]               // 0xde // 222 // x24
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)             // x26
         b.ne 0x8011334           // likely

    loc_0x08011318: // orphan
         w8 = w8 << 2
         x8 = x8 & 0xffffffc
         x8 = x8 ^ loc.__crc_shadow_fault_init
         x8 = x23 + x8
         x9 = xzr | 0xfffffffff8000000
         x23 = x8 + x9            // " "
         jmp 0x8011368

    loc_0x08011334: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x8011364           // unlikely

    loc_0x08011344: // orphan
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         if (w8 == w9)
         b.eq 0x8011364           // unlikely

    loc_0x08011354: // orphan
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         if (w8 == w9)
         b.ne 0x8011368           // likely

    loc_0x08011364: // orphan
         x23 = x23 + 4

    loc_0x08011368: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x8011330
         if (x23 == x22)          // x26
         x8 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x80113e4           // likely

    loc_0x08011374: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x80113fc
         x9 = x8 & 0x8000000000000003
         x10 = 0x8000
         if (x9 == x10)           // x26
         [x20, 8] = (x8,2)
         b.ne 0x80113ac           // likely

    loc_0x08011388: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x8011390 ()             // "\n" // 0x8011390(0x8011000, 0x0, 0x0, 0x0)
         x10 = 0x8011000
         x8 = [x10]               // 0xd1 // 209
         tbnz w8,0,0x80113b4      // likely

    loc_0x080113a0: // orphan
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x1                 // x26
         jmp 0x80114bc

    loc_0x080113ac: // orphan
         w23 = ~0x15
         jmp 0x8010fd4

    loc_0x080113b4: // orphan
         tbnz w8,1,0x80113c4      // likely

    loc_0x080113b8: // orphan
         w24 = 0x1                // x26
         w9 = 0x2
         jmp 0x80114bc

    loc_0x080113c4: // orphan
         tbnz w8,2,0x80113d4      // unlikely

    loc_0x080113c8: // orphan
         w24 = 0x2
         w9 = 0x4
         jmp 0x80114bc

    loc_0x080113d4: // orphan
         tbnz w8,3,0x8011400      // unlikely

    loc_0x080113d8: // orphan
         w24 = 0x3
         w9 = 0x8
         jmp 0x80114bc

    loc_0x080113e4: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3 // x24
         0x80113f4 ()             // 0x80113f4(0x8011000, 0x0, 0x20, 0x0)
         x8 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         jmp 0x8011374

    loc_0x08011400: // orphan
         tbnz w8,4,0x8011410      // unlikely

    loc_0x08011404: // orphan
         w24 = 0x4
         w9 = 0x10                // x19
         jmp 0x80114bc

    loc_0x08011410: // orphan
         tbnz w8,5,0x8011420      // unlikely

    loc_0x08011414: // orphan
         w24 = 0x5
         w9 = 0x20                // x24
         jmp 0x80114bc

    loc_0x08011420: // orphan
         tbnz w8,6,0x8011430      // unlikely

    loc_0x08011424: // orphan
         w24 = 0x6
         w9 = 0x40                // '@'
         jmp 0x80114bc

    loc_0x08011430: // orphan
         tbnz w8,7,0x8011440      // unlikely

    loc_0x08011434: // orphan
         w24 = 0x7
         w9 = 0x80                // '\x80'
         jmp 0x80114bc

    loc_0x08011440: // orphan
         tbnz w8,8,0x8011450      // unlikely

    loc_0x08011444: // orphan
         w24 = 0x8
         w9 = 0x100
         jmp 0x80114bc

    loc_0x08011450: // orphan
         tbnz w8,9,0x8011460      // unlikely

    loc_0x08011454: // orphan
         w24 = 0x9
         w9 = 0x200
         jmp 0x80114bc

    loc_0x08011460: // orphan
         tbnz w8,0xa,0x8011470    // unlikely

    loc_0x08011464: // orphan
         w24 = 0xa
         w9 = 0x400
         jmp 0x80114bc

    loc_0x08011470: // orphan
         tbnz w8,0xb,0x8011480    // unlikely

    loc_0x08011474: // orphan
         w24 = 0xb
         w9 = 0x800
         jmp 0x80114bc

    loc_0x08011480: // orphan
         tbnz w8,0xc,0x8011490    // unlikely

    loc_0x08011484: // orphan
         w24 = 0xc
         w9 = 0x1000
         jmp 0x80114bc

    loc_0x08011490: // orphan
         tbnz w8,0xd,0x80114a0    // unlikely

    loc_0x08011494: // orphan
         w24 = 0xd
         w9 = 0x2000
         jmp 0x80114bc

    loc_0x080114a0: // orphan
         tbnz w8,0xe,0x80114b0    // unlikely

    loc_0x080114a4: // orphan
         w24 = 0xe
         w9 = 0x4000
         jmp 0x80114bc

    loc_0x080114b0: // orphan
         tbnz w8,0xf,0x8011b68    // unlikely

    loc_0x080114b4: // orphan
         w24 = 0xf
         w9 = 0x8000

    loc_0x080114bc: // orphan
         // XREFS: CODE 0x080113a8  CODE 0x080113c0  CODE 0x080113d0  
         // XREFS: CODE 0x080113e0  CODE 0x0801140c  CODE 0x0801141c  
         // XREFS: CODE 0x0801142c  CODE 0x0801143c  CODE 0x0801144c  
         // XREFS: CODE 0x0801145c  CODE 0x0801146c  CODE 0x0801147c  
         // XREFS: CODE 0x0801148c  CODE 0x0801149c  CODE 0x080114ac  
         x0 = 0x8011000
         w27 = 0x80               // '\x80'
         x8 = x9 | x8
         x0 = x0 + 0              // int64_t arg1
         w27 = 0xd420             // ' \xd4'
         [x10] = x8
         0x80114d4 ()             // 0x80114d4(0x8011000, 0x0, 0x0, 0x0)
         x23 = [x20 + 8]          // 0xdb // 219 // x8
         [x20 + 0x20] = w24
         w24 = [x23]              // 0xde // 222 // x8
         w8 = w24 & 0xffffff9f
         if (w8 == w27)
         b.eq 0x80119cc           // unlikely

    loc_0x080114f0: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x80119fc
         [x20 + 0x2c] = w24
         x24 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = [x24 + 4]!         // 0xdf // 223
         w8 = w25 & 0xffffff9f
         if (w8 == w27)           // x26 // x26
         b.eq 0x8011a00           // likely

    loc_0x08011508: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x8011a38
         [x20 + 0x30] = w25
         x24 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = [x24 + 8]!         // 0xdf // 223
         w8 = w25 & 0xffffff9f
         if (w8 == w27)           // x26
         b.eq 0x8011a3c           // unlikely

    loc_0x08011520: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x8011a74
         [x20 + 0x34] = w25
         x24 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = [x24 + 0xc]!       // 0xdf // 223
         w8 = w25 & 0xffffff9f
         if (w8 == w27)           // x26
         b.eq 0x8011a78           // unlikely

    loc_0x08011538: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x8011ab0
         [x20 + 0x38] = w25
         x24 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = [x24 + 0x10]!      // 0xdf // 223
         w8 = w25 & 0xffffff9f
         if (w8 == w27)           // x26 // x26
         b.eq 0x8011ab4           // likely

    loc_0x08011550: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x8011b64
         x9 = [x20 + 0x20]        // 0xdb // 219 // x24
         x11 = [x20]              // 0xdb // 219 // x24
         w10 = 0x70               // 'p'
         x24 = 0x8011000
         x24 = x24 + 0
         x4 = x9 * x10
         w12 = 0x5                // "\u01a9r"
         x8 = x9 & 0xffffffff     // x24
         if (x23 == x11)          // x26
         x11 = x4 + x24
         [x20 + 0x3c] = w25
         [x20 + 0x24] = w12
         b.ne 0x80115b4           // likely

    loc_0x08011584: // orphan
         w9 = 0x220
         w14 = 0x201f             // '\x1f '
         w12 = 0x51               // 'Q'
         w9 = 0xd65f              // '_\xd6'
         x10 = x11 >> 0x20
         w13 = 0x4c0
         w14 = 0xd503
         w12 = 0x5800
         [x20 + 0x48] = w9
         [x20 + 0x50] = w10
         w13 = w14 | w13
         jmp 0x80115d8

    loc_0x080115b4: // orphan
         w12 = 0x220
         w13 = 0x51               // 'Q'
         w9 = 0x201f              // '\x1f '
         w12 = 0xd65f             // '_\xd6'
         w13 = 0x5800
         [x20 + 0x48] = w11
         x11 = x11 >> 0x20
         w9 = 0xd503
         [x20 + 0x50] = w9

    loc_0x080115d8: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x80115b0
         x2 = x23 - x24
         x3 = ~0x3b               // '//'
         x27 = ~0x3b              // '//'
         x3 = 0xffef              // '\xef\xff'
         x7 = ~0x803b             // '//\x80'
         x27 = 0xf7ff             // '\xff\xf7'
         x5 = x4 + x24
         w14 = 0x10               // x19
         x2 = x2 - x4
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = 0x9400
         [x20, 0x40] = (w13,2)
         [x20 + 0x4c] = w11
         x11 = x20 + 0x2c         // " "
         w12 = 0x800              // loc.imp.system_wq
         x13 = sp                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w14 = 0xff00
         w15 = 0x5400
         w16 = 0x9f00
         w17 = 0x9000
         x18 = 0x1
         w0 = 0x1000
         w1 = ~0xe800
         x30 = x5 + 0x3c
         x5 = x2 + x3
         x25 = x2 + x7
         x4 = x2 + x27
         jmp 0x8011684

    loc_0x08011684: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x8011644
         w27 = [x11 + x9]         // 0xd0000000d2 // 893353197778
         w7 = 0x1400
         w3 = w27 & 0xfc000000
         if (w3 == w7)            // x26 // x26
         b.eq 0x80116b0           // unlikely

    loc_0x080119cc: // orphan
         x8 = [x28]               // 0xe3 // 227
         if !x8 jmp 0x8011ac0     // unlikely

    loc_0x080119d4: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         blr x8                   // x8(0x20, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8011adc     // unlikely

    loc_0x080119e0: // orphan
         w24 = [x0 + 0x58]        // 0xc7 // 199
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3 // x24
         w1 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80119f4 ()             // 0x80119f4(0x8011000, 0x0, 0x20, 0x0)
         x23 = [x20 + 8]          // 0xdb // 219 // x8
         jmp 0x80114f0

    loc_0x08011a00: // orphan
         x8 = [x28]               // 0xe3 // 227
         x23 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x8 jmp 0x8011ac0     // unlikely

    loc_0x08011a0c: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // x8(0x20, 0x0, 0x0, 0x0)
         x23 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x0 jmp 0x8011adc     // unlikely

    loc_0x08011a1c: // orphan
         w25 = [x0 + 0x58]        // 0xc7 // 199
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         w1 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8011a30 ()             // 0x8011a30(0x8011000, 0x0, 0x20, 0x0)
         x23 = [x20 + 8]          // 0xdb // 219 // x8
         jmp 0x8011508

    loc_0x08011a3c: // orphan
         x8 = [x28]               // 0xe3 // 227
         x23 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x8 jmp 0x8011ac0     // unlikely

    loc_0x08011a48: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // x8(0x20, 0x0, 0x0, 0x0)
         x23 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x0 jmp 0x8011adc     // unlikely

    loc_0x08011a58: // orphan
         w25 = [x0 + 0x58]        // 0xc7 // 199
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         w1 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8011a6c ()             // 0x8011a6c(0x8011000, 0x0, 0x20, 0x0)
         x23 = [x20 + 8]          // 0xdb // 219 // x8
         jmp 0x8011520

    loc_0x08011a78: // orphan
         x8 = [x28]               // 0xe3 // 227
         x23 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x8 jmp 0x8011ac0     // unlikely

    loc_0x08011a84: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // x8(0x20, 0x0, 0x0, 0x0)
         x23 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x0 jmp 0x8011adc     // unlikely

    loc_0x08011a94: // orphan
         w25 = [x0 + 0x58]        // 0xc7 // 199
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         w1 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8011aa8 ()             // 0x8011aa8(0x8011000, 0x0, 0x20, 0x0)
         x23 = [x20 + 8]          // 0xdb // 219 // x8
         jmp 0x8011538

    loc_0x08011ab4: // orphan
         x8 = [x28]               // 0xe3 // 227
         x23 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if x8 jmp 0x8011acc      // likely

    loc_0x08011ac0: // orphan
         x0 = 0x8011000
         x0 = x0 + 0
         jmp 0x8011ae4

    loc_0x08011acc: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // x8(0x20, 0x0, 0x0, 0x0)
         x23 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if x0 jmp 0x8011b48      // likely

    loc_0x08011adc: // orphan
         x0 = 0x8011000
         x0 = x0 + 0

    loc_0x08011ae4: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x8011ac8
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // x24
         0x8011ae8 ()             // "7" // 0x8011ae8(0x0, 0x20, 0x0, 0x0)
         w23 = ~0x1
         w22 = [x20 + 0x20]       // 0xdb // 219 // x24
         if (w22 == 0xf)          // x26
         b.hi 0x8011b2c           // likely

    loc_0x08011afc: // orphan
         x21 = 0x8011000
         x21 = x21 + 0
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8011b08 ()             // "\n" // 0x8011b08(0x8011000, 0x0, 0x0, 0x0)
         x10 = 0x8011000
         x8 = [x10]               // 0xd1 // 209
         w9 = 0x1                 // x26
         x9 = x9 << x22           // x26
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         bic x8,x8,x9             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x10] = x8
         0x8011b28 ()             // 0x8011b28(0x8011000, 0x0, 0x0, 0x0)

    loc_0x08011b2c: // orphan
         w2 = 0x58                // 'X'
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8011b38 ()             // 0x8011b38(0x20, 0x0, 0x58, 0x0)
         if !x19 jmp 0x8010fd4    // unlikely

    loc_0x08011b40: // orphan
         [x19] = xzr
         jmp 0x8010fd4

    loc_0x08011b48: // orphan
         w25 = [x0 + 0x58]        // 0xc7 // 199
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         w1 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8011b5c ()             // 0x8011b5c(0x8011000, 0x0, 0x20, 0x0)
         x23 = [x20 + 8]          // 0xdb // 219 // x8
         jmp 0x8011550

    loc_0x08011b68: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x8011b70 ()             // 0x8011b70(0x8011000, 0x0, 0x0, 0x0)
         w23 = ~0x1b
         jmp 0x8010fd4

}

/* ===== 0x08011b7c ===== */
int sym.kp_core_hook_restore (int esi, int edx) {
    loc_0x8011b7c:
        sp = sp - 0x60
        [sp, 0x40] = (x29,2)
        [sp, 0x50] = (x20,2)
        x29 = var_40h
        if !x0 jmp 0x8011c10 // likely
            
    loc_0x8011c10:
        w20 = ~0x15
         // do {
    loc_0x8011c14:
        // CODE XREFS from sym.kp_core_hook_restore @ 0x8011c0c, 0x8011c40
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        (x20, 2) = 3
        (x29, 2) = 3
        sp = arg_60h
        0x08011c24
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8011b90
    loc_0x8011b9c:
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [var_18h] = xzr
        [var_0h] = wzr // arg1
        [sp] = (xzr,2)
        w2 = [x19 + 0x24] // 0xda // 218
        if (w2 == 1)  // x26
        b.lt 0x8011be8 // likely
            
    loc_0x8011be8:
        x8 = 0x8011000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8011c28 // unlikely
            
    loc_0x8011c28:
        w20 = ~0x1
         // do {
    loc_0x8011c2c:
        x1 = [x19 + 8] // 0xda // 218 // int64_t arg_60h
        x0 = 0x8011000
        x0 = x0 + 0   // int64_t arg1
        w2 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        0x8011c3c ()  // 0x8011c3c(0x8011000, 0x10, 0x20, 0x0)
        jmp 0x8011c14
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08011bd0: // orphan
             [x11] + 8 = x8
             w13 = [x9] + 4           // 0xd0 // 208
             x12 = x12 - 1
             x8 = x8 + 4
             [x10] + 4 = w13          // ")\u01a9r"
             b.ne 0x8011bd0           // likely

    loc_0x08011c08: // orphan
         [x19 + 0x54] = (byte) wzr
         jmp 0x8011c14

}

/* ===== 0x08011c44 ===== */
int sym.kp_core_hook_release (int esi, int edx) {
    loc_0x8011c44:
        [sp, -0x30]! = (x29,2) // " "
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8011c64 // likely
            
    loc_0x8011c64:
        w0 = ~0x15
         // do {
    loc_0x8011c68:
        // CODE XREF from sym.kp_core_hook_release @ 0x8011ccc
        (x20, 2) = 3
        x21 = [var_10h] // 0x4
        (x29, 2) = 3
        0x08011c74
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8011c58
    loc_0x8011c78:
        w21 = [x19 + 0x20] // 0xda // 218
        tbnz w21,0x1f,0x8011c64 // unlikely
    loc_0x8011c80:
        if (w21 == 0xf) // x26
        jmp ifgt 0x8011cb8 // unlikely
            
    loc_0x8011cb8:
        w2 = 0x58     // 'X'
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8011cc4 ()  // 0x8011cc4(0x10, 0x0, 0x58, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x8011c68
    loc_0x08011c88: // orphan
             x20 = 0x8011000
             x20 = x20 + 0
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             0x8011c94 ()             // 0x8011c94(0x8011000, 0x0, 0x0, 0x0)
             x8 = 0x8011000
             x9 = [x8]                // 0xcf // 207
             w10 = 0x1                // x26
             x10 = x10 << x21         // x26
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             bic x9,x9,x10            // '\xff\xff\xff\xff\xff\xff\xff\xff'
             [x8] = x9
             0x8011cb4 ()             // 0x8011cb4(0x8011000, 0x0, 0x0, 0x0)

}

/* ===== 0x0800f220 ===== */
int sym.install_hw_bp (int esi, int edx) {
    loc_0x800f220:
        sp = sp - 0xb0
        [sp, 0x70] = (x29,2)
        [var_80h] = x23
        [sp, 0x90] = (x22,2)
        [sp, 0xa0] = (x20,2)
        x29 = var_70h
        x23 = 0x800f000
        x8 = [x23]    // 0xde // 222
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x20 = 0x800f000
        [sp, 0x60] = (xzr,2)
        [sp, 0x50] = (xzr,2)
        [sp, 0x40] = (xzr,2)
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [sp, 0x10] = (xzr,2)
        [sp] = (xzr,2)
        if !x8 jmp 0x800f270 // unlikely
            
    loc_0x800f270:
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1 // "1"
        0x800f278 ()  // 0x800f278(0x800f000, 0x0, 0x0, 0x0)
        [x23] = x0    // x24
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1 // "1"
        0x800f288 ()  // 0x800f288(0x800f000, 0x0, 0x0, 0x0)
        [x20] = x0    // (pstr 0x0800f000) "1" x24
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1 // "1"
        0x800f298 ()  // 0x800f298(0x800f000, 0x0, 0x0, 0x0)
        x21 = 0x800f000
        [x21] = x0    // "1"
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f2ac ()  // 0x800f2ac(0x800f000, 0x0, 0x0, 0x0)
        x22 = 0x800f000
        [x22] = x0
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f2c0 ()  // 0x800f2c0(0x800f000, 0x0, 0x0, 0x0)
        x8 = 0x800f000
        [x8] = x0
        if !x0 jmp 0x800f548 // unlikely
            
    loc_0x800f548:
        x0 = 0x800f000
        x0 = x0 + 0
        jmp 0x800f55c
         // do {
    loc_0x800f55c:
        // CODE XREF from sym.install_hw_bp @ 0x800f550
        0x800f55c ()  // 0x800f55c(0x0, 0x0, 0x0, 0x0)
        w22 = ~0x5
        jmp 0x800f37c
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800f268
    loc_0x800f35c:
        if !x19 jmp 0x800f378 // unlikely
            
    loc_0x800f378:
        w22 = ~0x15
         // do {
    loc_0x800f37c:
        // XREFS: CODE 0x0800f3f0  CODE 0x0800f544  CODE 0x0800f564
        // XREFS: CODE 0x0800f58c  CODE 0x0800f664  CODE 0x0800f6b8
        w0 = w22      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_80h] // 0x4
        (x29, 2) = 3
        sp = arg_b0h
        0x0800f394
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800f360
    loc_0x800f36c:
        w8 = [x19 + 0xe8] // 0xda // 218
        if (w8 == 0x10) // x26 // x26
        b.ls 0x800f398 // unlikely
            
    loc_0x800f398:
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f3a0 ()  // 0x800f3a0(0x800f000, 0x0, 0x0, 0x0)
        x20 = 0x800f000
        x20 = x20 + 0
        x8 = [x20]    // 0xdb // 219
        w0 = [x19]    // 0xda // 218
        jmp 0x800f3bc
         // do {
    loc_0x800f3bc:
        // CODE XREF from sym.install_hw_bp @ 0x800f3b4
        if (x8 == x20) // x26
        b.eq 0x800f3f4 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800f2d8: // orphan
             x8 = [x20]               // 0xdb // 219 // x24
             if !x8 jmp 0x800f548     // unlikely

    loc_0x0800f2e0: // orphan
         x8 = [x21]               // 0xdc // 220
         if !x8 jmp 0x800f548     // unlikely

    loc_0x0800f2e8: // orphan
         x8 = [x22]               // 0xdd // 221
         if !x8 jmp 0x800f548     // unlikely

    loc_0x0800f2f0: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f2f8 ()             // 0x800f2f8(0x800f000, 0x0, 0x0, 0x0)
         x20 = 0x800f000
         [x20] = x0
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f30c ()             // 0x800f30c(0x800f000, 0x0, 0x0, 0x0)
         x21 = 0x800f000
         [x21] = x0
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f320 ()             // 0x800f320(0x800f000, 0x0, 0x0, 0x0)
         x22 = 0x800f000
         [x22] = x0
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f334 ()             // 0x800f334(0x800f000, 0x0, 0x0, 0x0)
         x8 = 0x800f000
         [x8] = x0
         if !x0 jmp 0x800f554     // unlikely

    loc_0x0800f344: // orphan
         x8 = [x20]               // 0xdb // 219 // x24
         if !x8 jmp 0x800f554     // unlikely

    loc_0x0800f34c: // orphan
         x8 = [x21]               // 0xdc // 220
         if !x8 jmp 0x800f554     // unlikely

    loc_0x0800f354: // orphan
         x8 = [x22]               // 0xdd // 221
         if !x8 jmp 0x800f554     // unlikely

    loc_0x0800f3b8: // orphan
         x8 = [x8]                // 0xcf // 207

    loc_0x0800f3c4: // orphan
         w9 = [x8 + 0x10]         // 0xcf // 207
         if (w9 == w0)            // x26 // x26
         b.ne 0x800f3b8           // unlikely

    loc_0x0800f3d0: // orphan
         x9 = [x8 + 0x18]         // 0xcf // 207
         x10 = [x19 + 8]          // 0xda // 218
         if (x9 == x10)           // x26 // x26
         b.ne 0x800f3b8           // likely

    loc_0x0800f3e0: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f3e8 ()             // 0x800f3e8(0x800f000, 0x0, 0x0, 0x0)
         w22 = ~0x10
         jmp 0x800f37c

    loc_0x0800f3f4: // orphan
         0x800f3f4 ()             // 0x800f3f4(0x0, 0x0, 0x0, 0x0)
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800f3fc ()             // 0x800f3fc(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800f534     // likely

    loc_0x0800f404: // orphan
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x2518              // '\x18%'
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x2
         0x800f414 ()             // 0x800f414(0x2518, 0xdc0, 0x2, 0x0)
         if !x0 jmp 0x800f568     // unlikely

    loc_0x0800f41c: // orphan
         w8 = [x19]               // 0xda // 218
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x10] = w8         // x19
         x8 = [x19 + 8]           // 0xda // 218
         [x0 + 0x18] = x8
         w9 = [x19 + 0x10]        // 0xda // 218 // x24
         w8 = [x19 + 0x14]        // 0xda // 218
         [x0, 0x28] = (w9,2)
         w8 = [x19 + 0x1c]        // 0xda // 218
         if (w8 == 0)             // x26 // x26
         cset w8,ne
         [x0 + 0x31] = (byte) w8
         w8 = [x19 + 0x18]        // 0xda // 218
         if (w8 == 0)             // x26
         cset w8,ne               // x26
         [x0 + 0x30] = (byte) w8
         w8 = [x19 + 0x20]        // 0xda // 218 // x26
         if (w8 == 1)             // x26 // x26
         [x0 + 0x34] = w8
         b.lt 0x800f490           // unlikely

    loc_0x0800f46c: // orphan
         x0 = x21 + 0x38          // int64_t arg1
         x1 = x19 + 0x24          // int64_t arg_b0h
         x2 = x8 << 2
         0x800f478 ()             // 0x800f478(0x38, 0x34, 0xcaa718a400000008, 0x0)
         x8 = [x21 + 0x34]        // 0xdc // 220 // x26
         x0 = x21 + 0x78          // int64_t arg1
         x1 = x19 + 0x68          // int64_t arg_b0h
         x2 = x8 << 3
         0x800f48c ()             // 0x800f48c(0x78, 0x78, 0x8, 0x0)

    loc_0x0800f490: // orphan
         w8 = [x19 + 0xe8]        // 0xda // 218
         if (w8 == 1)             // x26 // x26
         [x21 + 0xf8] = w8
         b.lt 0x800f4c4           // likely

    loc_0x0800f4a0: // orphan
         x0 = x21 + 0xfc          // int64_t arg1
         x1 = x19 + 0xec          // int64_t arg_b0h
         x2 = x8 << 2
         0x800f4ac ()             // 0x800f4ac(0xfc, 0xfc, 0xcaa718a400000008, 0x0)
         x8 = [x21 + 0xf8]        // 0xdc // 220
         x0 = x21 + 0x13c         // int64_t arg1
         x1 = x19 + 0x12c         // int64_t arg_b0h
         x2 = x8 << 2
         0x800f4c0 ()             // 0x800f4c0(0x13c, 0x13c, 0xfffffffffffffffc, 0x0)

    loc_0x0800f4c4: // orphan
         w8 = (byte) [x21 + 0x30] // 0xdc // 220 // x26
         if !w8 jmp 0x800f5b8     // unlikely

    loc_0x0800f4cc: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f4d4 ()             // 0x800f4d4(0x800f000, 0x0, 0x0, 0x0)
         w8 = [x21 + 0xf8]        // 0xdc // 220
         x9 = [x21 + 0x18]        // 0xdc // 220 // x19
         x10 = 0x800f000
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == 0)             // x26 // x26
         [x10] = x9
         cset w9,gt
         x10 = 0x800f000
         [x10] = (byte) w9
         jmp ifle 0x800f590       // likely

    loc_0x0800f500: // orphan
         s0 = [x21 + 0x13c]       // 0xdc // 220
         x9 = 0x800f000
         if (w8 == 1)             // x26
         [x9] = s0
         b.eq 0x800f598           // unlikely

    loc_0x0800f514: // orphan
         s0 = [x21 + 0x140]       // 0xdc // 220
         x9 = 0x800f000
         if (w8 == 3)             // x26
         [x9] = s0
         s0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.lt 0x800f5a4           // likely

    loc_0x0800f52c: // orphan
         s0 = [x21 + 0x144]       // 0xdc // 220
         jmp 0x800f5a4

    loc_0x0800f534: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f53c ()             // "V" // 0x800f53c(0x800f000, 0x0, 0x0, 0x0)
         w22 = ~0x2
         jmp 0x800f37c

    loc_0x0800f554: // orphan
         x0 = 0x800f000
         x0 = x0 + 0

    loc_0x0800f568: // orphan
         x0 = x22 + 0x30          // int64_t arg1
         0x800f56c ()             // "`" // 0x800f56c(0x30, 0x0, 0x0, 0x0)
         tbz w0,0,0x800f57c       // likely

    loc_0x0800f574: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800f578 ()             // 0x800f578(0x0, 0x0, 0x0, 0x0)

    loc_0x0800f57c: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f584 ()             // 0x800f584(0x800f000, 0x0, 0x0, 0x0)
         w22 = ~0xb
         jmp 0x800f37c

    loc_0x0800f590: // orphan
         x8 = 0x800f000
         [x8] = wzr

    loc_0x0800f598: // orphan
         x8 = 0x800f000
         [x8] = wzr
         s0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800f5a4: // orphan
         // CODE XREF from sym.install_hw_bp @ 0x800f530
         x0 = 0x800f000
         x8 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         [x8] = s0
         0x800f5b4 ()             // 0x800f5b4(0x800f000, 0x0, 0x0, 0x0)

    loc_0x0800f5b8: // orphan
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x70                // 'p'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x21 + 0x250c] = wzr
         0x800f5c8 ()             // 0x800f5c8(0x178000, 0x0, 0x70, 0x0)
         x9 = [var_28h]           // 0x4
         x8 = 0x5                 // "\u01a9r"
         x8 = 0x70                // 'p'
         w10 = 0x1                // x26
         [sp] = x8
         x8 = x9 | 4              // ")\u01a9r"
         [var_10h] = x10
         [var_28h] = x8
         x9 = [x19 + 8]           // 0xda // 218
         x8 = [x19 + 0x14]        // 0xda // 218
         x1 = 0x800f000
         x1 = x1 + 0              // int64_t arg_b0h
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x38] = (x9,2)
         w8 = [x19 + 0x10]        // 0xda // 218 // x24
         x9 = [x23]               // 0xde // 222 // x24
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 - 1
         if (w10 == 3)            // x26
         w10 = 0x3
         csel w8,w10,w8, hi
         [var_0h_3] = w8
         blr x9                   // 0x800f000(0x178000, 0x800f000, 0x0, 0x0)
         [x21 + 0x20] = x0        // x24
         x0 = x22 + 0x30          // int64_t arg1
         0x800f634 ()             // "`" // 0x800f634(0x30, 0x800f000, 0x0, 0x0)
         tbz w0,0,0x800f644       // likely

    loc_0x0800f63c: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800f640 ()             // 0x800f640(0x0, 0x0, 0x0, 0x0)

    loc_0x0800f644: // orphan
         x22 = [x21 + 0x20]       // 0xdc // 220 // x24 // sp
         if (x22 != 0xfff)        // x26
         b.lo 0x800f668           // unlikely

    loc_0x0800f650: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800f654 ()             // 0x800f654(0x0, 0x0, 0x0, 0x0)
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f660 ()             // 0x800f660(0x800f000, 0x0, 0x0, 0x0)
         jmp 0x800f37c

    loc_0x0800f668: // orphan
         x22 = [x20]              // 0xdb // 219 // x24 // sp
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_b0h // x24
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // sp
         0x800f678 ()             // 0x800f678(0x0, 0x20, 0x178000, 0x0)
         tbz w0,0,0x800f690       // likely

    loc_0x0800f680: // orphan
         x8 = 0x800f000
         [x22 + 8] = x21
         [x21] = (x22,2)
         [x8] = x21

    loc_0x0800f690: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f698 ()             // 0x800f698(0x800f000, 0x0, 0x0, 0x0)
         w1 = [x19]               // 0xda // 218
         x2 = [x19 + 8]           // 0xda // 218
         w3 = [x19 + 0x10]        // 0xda // 218 // x24 // sp
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f6b0 ()             // 0x800f6b0(0x800f000, 0x0, 0x10, 0x178000)
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800f37c

}

/* ===== 0x0800f6bc ===== */
int sym.hw_bp_handler_e67fb88cc2f08ac7d3de047d864fd9b9 (int esi, int edx) {
    loc_0x800f6bc:
        sp = sp - 0x1e0
        [var_160h] = d10
        [sp, 0x170] = (d9,2)
        [sp, 0x180] = (x29,2)
        [sp, 0x190] = (x28,2)
        [sp, 0x1a0] = (x26,2)
        [sp, 0x1b0] = (x24,2)
        [sp, 0x1c0] = (x22,2)
        [sp, 0x1d0] = (x20,2)
        x29 = var_180h
        x26 = [x0 + 0x398] // 0xc7 // 199 // arg1
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x0 = var_8h   // int64_t arg1
        w2 = 0x150
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800f6fc ()  // 0x800f6fc(0x177e28, 0x0, 0x150, 0x0)
        if !x20 jmp 0x800fa70 // likely
            
    loc_0x800fa70:
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        (d9, 2) = 3
        d10 = [var_160h] // 0x4
        sp = arg_1e0h
        0x0800fa94
         // } else {
    loc_0x800f704:
        if !x26 jmp 0x800fa70 // unlikely
        }
        return eax;
    loc_0x800f708:
        w8 = 0x2510   // '\x10%'
        x25 = x26 + x8
        w8 = (byte) [x25] // 0xe0 // 224
        if w8 jmp 0x800fa70 // likely
    loc_0x800f718:
        x0 = var_8h   // int64_t arg1
        w2 = 0x150
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x23 = var_8h
        0x800f728 ()  // 0x800f728(0x178008, 0x0, 0x150, 0x0)
        w8 = 0x250c   // '\f%'
        x21 = x26 + x8
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800f738 ()  // 0x800f738(0x72a9c6290000250d, 0x0, 0x150, 0x0)
        w8 = (byte) [x26 + 0x31] // 0xe1 // 225
        w24 = 0x10    // x19
        x22 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [var_8h] = (byte) w8
        w8 = (byte) [x26 + 0x30] // 0xe1 // 225
        [var_9h] = (byte) w8
        w9 = [x26 + 0x34] // 0xe1 // 225
        bic w8,w9,w9, asr 31 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w8 == 0x10) // x26
        csel w8,w8,w24, lt
        if (w9 == 1)  // x26 // x26
        [var_ch] = w8
        b.lt 0x800f794 // likely
            
    loc_0x800f794:
        w9 = [x26 + 0xf8] // 0xe1 // 225
        bic w8,w9,w9, asr 31 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w8 == 0x10) // x26
        csel w8,w8,w24, lt
        if (w9 == 1)  // x26 // x26
        [var_d0h] = w8
        b.lt 0x800f7d8 // likely
            
    loc_0x800f7d8:
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        0x800f7e0 ()  // 0x800f7e0(0x0, 0x0, 0x0, 0x0)
        w8 = (byte) [var_8h] // 0x4
        if !w8 jmp 0x800f8c8 // likely
            
    loc_0x800f8c8:
        w8 = [var_d0h] // 0x4
        mrs x20,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w8 == 1)  // x26
        b.lt 0x800fa30 // likely
            
    loc_0x800fa30:
        x8 = [x19 + 0x108] // 0xda // 218
        x8 = x8 | 1
        [x19 + 0x108] = x8
        x8 = 0x800f000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800fa54 // likely
            
    loc_0x800fa54:
        x8 = 0x800f000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800fa68 // likely
            
    loc_0x800fa68:
        w8 = 0x1      // x26
        [x25] = (byte) w8
    loc_0x0800f770: // orphan
             x0 = var_40h_2           // int64_t arg1
             x1 = x26 + 0x38          // int64_t arg3
             w2 = w8 << 2             // " "
             0x800f77c ()             // 0x800f77c(0x28, 0x39, 0x8, 0x0)
             x8 = [var_ch]            // 0x4
             x0 = var_48h             // int64_t arg1
             x1 = x26 + 0x78          // int64_t arg3
             x2 = x8 << 3             // int64_t arg_1e0h
             0x800f790 ()             // 0x800f790(0x68, 0x79, 0x0, 0x0)

    loc_0x0800f7b0: // orphan
         x23 = var_8h
         x1 = x26 + 0xfc          // int64_t arg3
         x0 = var_40h             // int64_t arg1
         w2 = w8 << 2             // " "
         0x800f7c0 ()             // 0x800f7c0(0x1780d4, 0xfd, 0x8, 0x0)
         x8 = [var_d0h]           // 0x4
         x0 = var_10ch            // int64_t arg1
         x1 = x26 + 0x13c         // int64_t arg3
         x2 = x8 << 2             // int64_t arg_1e0h
         0x800f7d4 ()             // 0x800f7d4(0x178114, 0x13d, 0x0, 0x0)

    loc_0x0800f7ec: // orphan
         w8 = [var_ch]            // 0x4
         if (w8 == 1)             // x26
         b.lt 0x800f8c8           // likely

    loc_0x0800f7f8: // orphan
         x8 = var_8h
         x21 = 0x800f000
         x22 = 0x800f000
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = x21 + 0
         x22 = x22 + 0
         x23 = var_48h
         mrs x28,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800f830

    loc_0x0800f81c: // orphan
         [x20 + x8,lsl 3] = x24

    loc_0x0800f820: // orphan
         // CODE XREFS from sym.hw_bp_handler_e67fb88cc2f08ac7d3de047d864fd9b9 @ 0x800f858, 0x800f89c, 0x800f8c4
         x8 = [var_ch]            // 0x4
         x27 = x27 + 1            // x26
         if (x27 == x8)           // x26
         b.ge 0x800f8c8           // likely

    loc_0x0800f830: // orphan
         // CODE XREF from sym.hw_bp_handler_e67fb88cc2f08ac7d3de047d864fd9b9 @ 0x800f818
         x8 = x23 + x27,lsl 2     // x24
         ldur w8,[x8,-0x40]       // 0xcf // 207
         x24 = [x23 + x27,lsl 3]  // 0xe2000000de // 970662609118 // sp
         if (w8 == 0x1e)          // x26 // x26
         b.ls 0x800f81c           // unlikely

    loc_0x0800f844: // orphan
         if (w8 == 0x20)          // x26
         b.eq 0x800f85c           // unlikely

    loc_0x0800f84c: // orphan
         if (w8 == 0x1f)          // x26
         b.ne 0x800f820           // likely

    loc_0x0800f854: // orphan
         [x20 + 0xf8] = x24
         jmp 0x800f820

    loc_0x0800f85c: // orphan
         x8 = [x20 + 0x108]       // 0xdb // 219
         x9 = x24 & 3
         x8 = x8 & 0xf
         x8 = x8 | x9
         if x8 jmp 0x800f8a0      // likely

    loc_0x0800f870: // orphan
         x8 = [x28]               // 0xe3 // 227 // x26
         x9 = 0x800f000
         x9 = [x9]                // 0xd0 // 208
         if ((x8 & 0x400000) == 0) // x26
         w8 = 0x1                 // x26
         x8 = x8 << x9            // x26
         w9 = ~0xfff              // '\xff\x0f'
         csel x8,x8,x9, eq
         if (x8 == x24)           // x26
         b.ls 0x800f8a0           // unlikely

    loc_0x0800f898: // orphan
         [x20 + 0x100] = x24
         jmp 0x800f820

    loc_0x0800f8a0: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800f8a8 ()             // 0x800f8a8(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x800f820     // likely

    loc_0x0800f8b0: // orphan
         w2 = [x28 + 0x588]       // 0xe3 // 227
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800f8c0 ()             // 0x800f8c0(0x800f000, 0x20, -1, 0x0)
         jmp 0x800f820

    loc_0x0800f8d8: // orphan
         w8 = (byte) [var_9h]     // 0x4
         if !w8 jmp 0x800f950     // likely

    loc_0x0800f8e0: // orphan
         x22 = [x26 + 0x18]       // 0xe1 // 225
         x21 = 0x800f000
         x21 = x21 + 0
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800f8f0 ()             // "\t" // 0x800f8f0(0x800f000, 0x0, 0x0, 0x0)
         x9 = 0x800f000
         x8 = 0x800f000
         w24 = (byte) [x9]        // 0xd0 // 208
         x10 = 0x800f000
         x11 = 0x800f000
         x26 = [x8]               // 0xcf // 207
         x8 = 0x800f000
         s8 = [x10]               // 0xd1 // 209
         s9 = [x11]               // 0xd2 // 210
         s10 = [x8]               // 0xcf // 207
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         if (w24 == 0)            // x26 // x26
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         cset w23,ne
         0x800f92c ()             // "5" // 0x800f92c(0x800f000, 0x800f000, 0x0, 0x0)
         w21 = 0x1                // x26
         if !x26 jmp 0x800f964    // likely

    loc_0x0800f938: // orphan
         if (x26 == x22)
         b.ne 0x800f964           // likely

    loc_0x0800f940: // orphan
         if !w24 jmp 0x800fa30    // unlikely

    loc_0x0800f944: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w23 = 0x1                // x26
         jmp 0x800f964

    loc_0x0800f950: // orphan
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         s8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = 0x1                // x26
         s9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         s10 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800f964: // orphan
         // CODE XREF from sym.hw_bp_handler_e67fb88cc2f08ac7d3de047d864fd9b9 @ 0x800f94c
         x8 = 0x800f000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x800f974     // likely

    loc_0x0800f970: // orphan
         blr x8                   // x8(0x0, 0x0, 0x0, 0x0)

    loc_0x0800f974: // orphan
         w8 = [var_d0h]           // 0x4
         if (w8 == 1)             // x26
         b.lt 0x800fa1c           // likely

    loc_0x0800f980: // orphan
         w8 = w23 ^ 1
         x9 = var_8h
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w23 = w21 | w8
         x21 = var_10ch
         jmp 0x800f9ac

    loc_0x0800f998: // orphan
         // CODE XREF from sym.hw_bp_handler_e67fb88cc2f08ac7d3de047d864fd9b9 @ 0x800fa18
         x8 = [var_d0h]           // 0x4
         x22 = x22 + 1            // x26
         x21 = var_4h
         if (x22 == x8)           // x26
         b.ge 0x800fa1c           // likely

    loc_0x0800f9ac: // orphan
         // CODE XREF from sym.hw_bp_handler_e67fb88cc2f08ac7d3de047d864fd9b9 @ 0x800f994
         ldur w24,[x21,-0x40]     // 0xdc // 220
         x0 = x29 - 0x14          // int64_t arg1
         w2 = 0x4
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         [x29 = xzr
         0x800f9c0 ()             // 0x800f9c0(0x177fec, 0x0, 0x4, 0x0)
         tbnz w23,0,0x800fa00     // unlikely

    loc_0x0800f9c8: // orphan
         if (w22 == 2)            // x26
         b.eq 0x800f9e4           // unlikely

    loc_0x0800f9d0: // orphan
         if (w22 == 1)            // x26
         b.eq 0x800f9ec           // unlikely

    loc_0x0800f9d8: // orphan
         if w22 jmp 0x800fa00     // unlikely

    loc_0x0800f9dc: // orphan
         [x29 = s8
         jmp 0x800f9f0

    loc_0x0800f9e4: // orphan
         [x29 = s10
         jmp 0x800f9f0

    loc_0x0800f9ec: // orphan
         [x29 = s9

    loc_0x0800f9f0: // orphan
         // CODE XREFS from sym.hw_bp_handler_e67fb88cc2f08ac7d3de047d864fd9b9 @ 0x800f9e0, 0x800f9e8
         x0 = x29 - 0x14          // int64_t arg1
         x1 = x29 - 0x18          // int64_t arg3
         w2 = 0x4
         0x800f9fc ()             // 0x800f9fc(0x177fec, 0x177fe8, 0x4, 0x0)

    loc_0x0800fa00: // orphan
         if (w24 == 0x1f)         // x26
         b.hi 0x800f998           // likely

    loc_0x0800fa08: // orphan
         ldur w8,[x29,-0x14]
         x9 = x20 + x24,lsl 4
         [x9 + 0xb38] = xzr
         [x9 + 0xb30] = x8
         jmp 0x800f998

    loc_0x0800fa1c: // orphan
         x8 = 0x800f000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x800fa30     // likely

    loc_0x0800fa28: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         blr x8                   // x8(0x20, 0x0, 0x0, 0x0)

    loc_0x0800fa48: // orphan
         x1 = x19 + 0xe0
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // x8(0x10, 0xf0, 0x0, 0x0)

    loc_0x0800fa60: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         blr x8                   // "(" // x8(0x20, 0x0, 0x0, 0x0)

}

/* ===== 0x0800fa98 ===== */
int sym.get_hw_bp_hits (int esi, int edx) {
    loc_0x800fa98:
        [sp, -0x60]! = (x29,2)
        [var_10h] = x27
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800fac0 ()  // 0x800fac0(0x800f000, 0x0, 0x0, 0x0)
        x8 = 0x800f000
        x8 = x8 + 0
        x24 = [x8]    // 0xcf // 207
        if (x24 == x8) // x26
        b.eq 0x800fbe4 // unlikely
            
    loc_0x800fbe4:
        w21 = ~0x1
         // do {
    loc_0x800fbe8:
        // CODE XREFS from sym.get_hw_bp_hits @ 0x800fc28, 0x800fc3c, 0x800fc50
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800fbf0 ()  // 0x800fbf0(0x800f000, 0x0, 0x0, 0x0)
        w0 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3  // x19
        (x26, 2) = 3
        x27 = [var_10h] // 0x4 // x26
        (x29, 2) = 3
        0x0800fc10
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800fae0: // orphan
             x24 = [x24]              // 0xdf // 223 // sp
             if (x24 == x8)           // x26
             b.eq 0x800fbe4           // unlikely

    loc_0x0800faec: // orphan
         // CODE XREF from sym.get_hw_bp_hits @ 0x800fadc
         w10 = [x24 + 0x10]       // 0xdf // 223 // x26
         if (w10 == w9)           // x26
         b.ne 0x800fae0           // likely

    loc_0x0800faf8: // orphan
         x10 = [x24 + 0x18]       // 0xdf // 223
         x11 = [x19 + 8]          // 0xda // 218
         if (x10 == x11)          // x26
         b.ne 0x800fae0           // likely

    loc_0x0800fb08: // orphan
         w8 = 0x250c              // '\f%'
         x21 = x24 + x8
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800fb14 ()             // 0x800fb14(0x72a9c6290000252c, 0x0, 0x0, 0x0)
         w8 = [x24 + 0x2508]      // 0xdf // 223
         w9 = [x19 + 0x18]        // 0xda // 218
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == w9)            // x26 // x26
         csel w25,w8,w9, lo
         if !w25 jmp 0x800fc14    // unlikely

    loc_0x0800fb30: // orphan
         w26 = 0x238
         umull x22,w25,w26
         w1 = 0xa20               // ' \n'
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800fb40 ()             // 0x800fb40(0x0, 0xa20, 0x0, 0x0)
         if !x0 jmp 0x800fc2c     // likely

    loc_0x0800fb48: // orphan
         w8 = [x24 + 0x2504]      // 0xdf // 223
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800fb54: // orphan
         smaddl x8,w8,w26, x24
         smaddl x0,w27,w26, x20   // int64_t arg1 // x24
         x1 = x8 + 0x180
         w2 = 0x238
         0x800fb64 ()             // 0x800fb64(0x20, 0x1a2, 0x238, 0x0)
         w8 = [x24 + 0x2504]      // 0xdf // 223
         w27 = w27 + 1            // x26
         w9 = w8 + 1
         w10 = w8 + 0x10
         if (w9 == 0)             // x26 // x26
         csinc w8,w10,w8, lt
         w8 = w8 & 0xfffffff0
         w8 = w9 - w8
         if (w27 == w25)          // x26
         [x24 + 0x2504] = w8
         b.lo 0x800fb54           // unlikely

    loc_0x0800fb94: // orphan
         w8 = [x24 + 0x2508]      // 0xdf // 223
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         w8 = w8 - w25
         [x24 + 0x2508] = w8
         0x800fba8 ()             // 0x800fba8(0x0, 0x20, 0x0, 0x0)
         x8 = x22 >> 0x1f
         if x8 jmp 0x800fc54      // unlikely

    loc_0x0800fbb4: // orphan
         x21 = [x19 + 0x10]       // 0xda // 218 // x24 // sp
         w2 = 0x1                 // x26
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800fbc4 ()             // 0x800fbc4(0x20, 0x0, 0x1, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // sp
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800fbd4 ()             // 0x800fbd4(0x178000, 0x20, 0x0, 0x0)
         if !x0 jmp 0x800fc40     // unlikely

    loc_0x0800fbdc: // orphan
         w21 = ~0xd
         jmp 0x800fc48

    loc_0x0800fc14: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         0x800fc1c ()             // 0x800fc1c(0x0, 0x20, 0x0, 0x0)
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x1c] = wzr
         jmp 0x800fbe8

    loc_0x0800fc2c: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         0x800fc34 ()             // 0x800fc34(0x0, 0x20, 0x0, 0x0)
         w21 = ~0xb
         jmp 0x800fbe8

    loc_0x0800fc40: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x1c] = w25

    loc_0x0800fc48: // orphan
         // CODE XREF from sym.get_hw_bp_hits @ 0x800fbe0
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x800fc4c ()             // 0x800fc4c(0x20, 0x0, 0x0, 0x0)
         jmp 0x800fbe8

    loc_0x0800fc54: // orphan
         brk 0x800

}

/* ===== 0x0800fc60 ===== */
int sym.clear_all_hw_bps (int esi, int edx) {
    loc_0x800fc60:
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23 // " "
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x800f000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800fc8c // likely
            
    loc_0x800fc8c:
        x0 = 0x800f000
        x0 = x0 + 0
        0x800fc94 ()  // 0x800fc94(0x800f000, 0x0, 0x0, 0x0)
        x20 = 0x800f000
        x20 = x20 + 0
        x19 = [x20]   // 0xdb // 219
        if (x19 == x20) // x26
        b.eq 0x800fd08 // unlikely
            
    loc_0x800fd08:
        x19 = 0x800f000
        x19 = x19 + 0
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800fd14 ()  // 0x800fd14(0x800f000, 0x0, 0x0, 0x0)
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x800f000
        x9 = 0x800f000
        x10 = 0x800f000
        x11 = 0x800f000
        x12 = 0x800f000
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x8] = xzr
        [x9] = (byte) wzr
        [x10] = wzr
        [x11] = wzr
        [x12] = wzr
        0x800fd48 ()  // 0x800fd48(0x800f000, 0x800f000, 0x0, 0x0)
        x0 = 0x800f000
        x0 = x0 + 0
        0x800fd54 ()  // 0x800fd54(0x800f000, 0x800f000, 0x0, 0x0)
        (x20, 2) = 3  // x19
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // x26
        (x29, 2) = 3
        0x0800fd68
         // } else {
    loc_0x800fcac:
        x21 = 0x100
        x21 = 0xdead  // '\xad\xde'
        x22 = 0x800f000
        jmp 0x800fcd8
         // } else {
        }
        return eax;
    loc_0x0800fcbc: // orphan
             // CODE XREF from sym.clear_all_hw_bps @ 0x800fd04
             x8 = x21 + 0x22
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             [x19] = (x21,2)
             0x800fcc8 ()             // 0x800fcc8(0x10, 0x0, 0x0, 0x0)
             if (x23 == x20)          // x26 // x26
             x19 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
             b.eq 0x800fd08           // likely

    loc_0x0800fcd8: // orphan
         // CODE XREF from sym.clear_all_hw_bps @ 0x800fcb8
         x0 = [x19 + 0x20]        // 0xda // 218
         x23 = [x19]              // 0xda // 218
         if !x0 jmp 0x800fcec     // unlikely

    loc_0x0800fce4: // orphan
         x8 = [x22]               // 0xdd // 221 // x26
         blr x8                   // x26 // x26(0x0, 0x0, 0x0, 0x0)

    loc_0x0800fcec: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800fcf0 ()             // 0x800fcf0(0x10, 0x0, 0x0, 0x0)
         tbz w0,0,0x800fcbc       // likely

    loc_0x0800fcf8: // orphan
         (x9, 2) = 3
         [x9 + 8] = x8            // " "
         [x8] = x9
         jmp 0x800fcbc

}

/* ===== 0x0800fd6c ===== */
int sym.hw_point_init (int esi, int edx) {
    loc_0x800fd6c:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x800f000
        x8 = [x8]     // 0xcf // 207
        if x8 jmp 0x800fd8c // unlikely
            
    loc_0x800fd8c:
        x0 = 0x800f000
        x0 = x0 + 0
        blr x8        // x8(0x800f000, 0x0, 0x0, 0x0)
        x0 = 0x800f000
        x0 = x0 + 0
        0x800fda0 ()  // 0x800fda0(0x800f000, 0x0, 0x0, 0x0)
        jmp 0x800fd80
    loc_0x0800fd80: // orphan
             // CODE XREF from sym.hw_point_init @ 0x800fda4
             w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             (x29, 2) = 3
             

}

/* ===== 0x0800fda8 ===== */
int sym.update_hw_bp (int esi, int edx) {
    loc_0x800fda8:
        [sp, -0x60]! = (x29,2)
        [var_10h] = x27
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x800ffa4 // likely
            
    loc_0x800ffa4:
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800ffac ()  // 0x800ffac(0x800f000, 0x0, 0x0, 0x0)
        w19 = ~0x15
        jmp 0x800ff30
         // do {
    loc_0x800ff30:
        // CODE XREFS from sym.update_hw_bp @ 0x800ffb4, 0x800ffe4, 0x801000c
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3  // x19
        (x26, 2) = 3
        x27 = [var_10h] // 0x4 // x26
        (x29, 2) = 3
        0x0800ff4c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800fdc8
    loc_0x800fdd8:
        w1 = [x19 + 0x10] // 0xda // 218 // x24
        if (w1 == 2)  // x26
        b.hs 0x800ffc8 // likely
            
    loc_0x800ffc8:
        x0 = 0x800f000
        x0 = x0 + 0
        jmp 0x800ffdc
         // do {
    loc_0x800ffdc:
        // CODE XREFS from sym.update_hw_bp @ 0x800ffc4, 0x800ffd0
        0x800ffdc ()  // 0x800ffdc(0x0, 0x0, 0x0, 0x0)
        w19 = ~0x15
        jmp 0x800ff30
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800fde4
    loc_0x800fdf0:
        if (w8 == 1)  // x26
        b.lt 0x800fe18 // unlikely
            
    loc_0x800fe18:
        if (w1 == 1)  // x26
        b.lt 0x800fe40 // likely
            
    loc_0x800fe40:
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800fe48 ()  // 0x800fe48(0x800f000, 0x0, 0x0, 0x0)
        x8 = 0x800f000
        x8 = x8 + 0
        x26 = [x8]    // 0xcf // 207
        if (x26 == x8)
        b.eq 0x800ff20 // unlikely
            
    loc_0x800ff20:
        w19 = ~0x1
         // do {
    loc_0x800ff24:
        // CODE XREF from sym.update_hw_bp @ 0x8010210
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800ff2c ()  // 0x800ff2c(0x800f000, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800fe00: // orphan
             w2 = [x10 + x9,lsl 2]    // 0xd0000000d1 // 893353197777
             if (w2 == 0x21)          // x26 // x26
             b.hs 0x800ffe8           // likely

    loc_0x0800fe0c: // orphan
         x9 = x9 + 1
         if (x8 == x9)            // x26
         b.ne 0x800fe00           // likely

    loc_0x0800fe28: // orphan
         w2 = [x9 + x8,lsl 2]     // 0xcf000000d0 // 889058230480
         if (w2 == 0x20)          // x26 // x26
         b.hs 0x800fff8           // likely

    loc_0x0800fe34: // orphan
         x8 = x8 + 1
         if (x1 == x8)            // x26
         b.ne 0x800fe28           // likely

    loc_0x0800fe68: // orphan
         x26 = [x26]              // 0xe1 // 225
         if (x26 == x8)
         b.eq 0x800ff20           // unlikely

    loc_0x0800fe74: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x800fe64
         w10 = [x26 + 0x10]       // 0xe1 // 225
         if (w10 == w9)           // x26
         b.ne 0x800fe68           // likely

    loc_0x0800fe80: // orphan
         x10 = [x26 + 0x18]       // 0xe1 // 225
         x11 = [x19 + 8]          // 0xda // 218
         if (x10 == x11)          // x26
         b.ne 0x800fe68           // likely

    loc_0x0800fe90: // orphan
         w8 = 0x250c              // '\f%'
         x20 = x26 + x8
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800fe9c ()             // 0x800fe9c(0x72a9c6290000250d, 0x0, 0x0, 0x0)
         w8 = [x19 + 0x10]        // 0xda // 218 // x24
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x26 + 0x38
         if (w8 == 0)             // x26
         cset w8,ne               // x26
         [x26 + 0x30] = (byte) w8
         w8 = [x19 + 0x14]        // 0xda // 218
         if (w8 == 1)             // x26
         [x26 + 0x34] = w8
         b.lt 0x8010010           // likely

    loc_0x0800fec8: // orphan
         x1 = x19 + 0x18
         x2 = x8 << 2
         0x800fed0 ()             // 0x800fed0(0x0, 0x28, 0xcaa718a400000008, 0x0)
         x8 = [x26 + 0x34]        // 0xe1 // 225
         x22 = x26 + 0x78
         x1 = x19 + 0x58
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x8 << 3
         0x800fee8 ()             // 0x800fee8(0x79, 0x68, 0x0, 0x0)
         w8 = [x26 + 0x34]        // 0xe1 // 225
         w9 = 0x1                 // x26
         [x26 + 0x31] = (byte) w9
         if (w8 == 1)             // x26
         b.lt 0x8010030           // likely

    loc_0x0800ff00: // orphan
         x23 = 0x800f000
         x24 = 0x800f000
         x25 = 0x800f000
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = x23 + 0
         x24 = x24 + 0
         x25 = x25 + 0
         jmp 0x800ff68

    loc_0x0800ff50: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x800ff54 ()             // 0x800ff54(0x20, 0x0, 0x0, 0x0)

    loc_0x0800ff58: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x800ffa0
         x8 = [x26 + 0x34]        // 0xe1 // 225
         x27 = x27 + 1            // x26
         if (x27 == x8)           // x26
         b.ge 0x8010030           // likely

    loc_0x0800ff68: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x800ff1c
         x8 = x22 + x27,lsl 2
         ldur w1,[x8,-0x40]       // 0xcf // 207
         x2 = [x22 + x27,lsl 3]   // 0xe2000000dd // 970662609117 // x26
         if (w1 == 0x1e)          // x26 // x26
         b.ls 0x800ff50           // unlikely

    loc_0x0800ff7c: // orphan
         if (w1 == 0x20)          // x26
         b.eq 0x800ff94           // unlikely

    loc_0x0800ff84: // orphan
         if (w1 == 0x1f)          // x26
         b.ne 0x800ff58           // likely

    loc_0x0800ff8c: // orphan
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800ff98

    loc_0x0800ff94: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ff98: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x800ff90
         x1 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800ff9c ()             // 0x800ff9c(0x0, 0x0, 0x0, 0x0)
         jmp 0x800ff58

    loc_0x0800ffb8: // orphan
         x0 = 0x800f000
         x0 = x0 + 0
         w1 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800ffdc

    loc_0x0800ffd4: // orphan
         x0 = 0x800f000
         x0 = x0 + 0

    loc_0x0800ffe8: // orphan
         x0 = 0x800f000
         x0 = x0 + 0
         w1 = w9                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // x9
         jmp 0x8010004

    loc_0x0800fff8: // orphan
         x0 = 0x800f000
         x0 = x0 + 0
         // XREFS(53)
         w1 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010004: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x800fff4
         0x8010004 ()             // 0x8010004(0x0, 0x0, 0x0, 0x0)
         w19 = ~0x15
         jmp 0x800ff30

    loc_0x08010010: // orphan
         w2 = 0x40                // '@' // " "
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8010018 ()             // 0x8010018(0x0, 0x0, 0x40, 0x0)
         x0 = x26 + 0x78          // int64_t arg1
         w2 = 0x80                // '\x80'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8010028 ()             // 0x8010028(0x79, 0x0, 0x80, 0x0)
         [x26 + 0x31] = (byte) wzr

    loc_0x08010030: // orphan
         w8 = [x19 + 0xd8]        // 0xda // 218
         x0 = x26 + 0xfc
         if (w8 == 1)             // x26 // x26
         [x26 + 0xf8] = w8
         b.lt 0x80100f4           // likely

    loc_0x08010044: // orphan
         x1 = x19 + 0xdc
         x2 = x8 << 2
         0x801004c ()             // 0x801004c(0x0, 0xec, 0xcaa718a400000008, 0x0)
         x8 = [x26 + 0xf8]        // 0xe1 // 225
         x0 = x26 + 0x13c         // int64_t arg1
         x1 = x19 + 0x11c
         x2 = x8 << 2
         0x8010060 ()             // 0x8010060(0x13d, 0x12c, 0xfffffffffffffffc, 0x0)
         w8 = [x26 + 0xf8]        // 0xe1 // 225
         if (w8 == 1)             // x26 // x26
         b.lt 0x8010110           // likely

    loc_0x08010070: // orphan
         x22 = 0x8010000
         x23 = 0x8010000
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x22 = x22 + 0
         x23 = x23 + 0
         jmp 0x8010098

    loc_0x08010088: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x80100f0
         x8 = [x26 + 0xf8]        // 0xe1 // 225
         x25 = x25 + 1            // x26
         if (x25 == x8)
         b.ge 0x8010110           // likely

    loc_0x08010098: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x8010084
         x8 = x26 + x25,lsl 2
         w24 = [x8 + 0xfc]        // 0xcf // 207
         [var_1ch] = wzr
         s0 = [x8 + 0x13c]        // 0xcf // 207
         x0 = var_18h             // int64_t arg1
         x1 = var_1ch
         w2 = 0x4
         [var_18h] = wzr
         [var_1ch] = s0
         0x80100bc ()             // 0x80100bc(0x178018, 0x17801c, 0x4, 0x0)
         if (w24 == 0x1f)         // x26 // x26
         b.hi 0x8010088           // likely

    loc_0x080100c8: // orphan
         w1 = [x19]               // 0xda // 218
         x2 = [x19 + 8]           // 0xda // 218
         w4 = [var_18h]           // [0x18:4]=34
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w3 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         0x80100dc ()             // 0x80100dc(0x0, 0x0, 0x22, 0x20)
         w2 = [var_18h]           // [0x18:4]=34
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         w1 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         0x80100ec ()             // 0x80100ec(0x20, 0x20, 0x0, 0x20)
         jmp 0x8010088

    loc_0x080100f4: // orphan
         w2 = 0x40                // '@' // " "
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80100fc ()             // 0x80100fc(0x0, 0x0, 0x40, 0x0)
         x0 = x26 + 0x13c         // int64_t arg1
         w2 = 0x40                // '@' // " "
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801010c ()             // 0x801010c(0x13d, 0x0, 0x40, 0x0)

    loc_0x08010110: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8010118 ()             // 0x8010118(0x20, 0x0, 0x0, 0x0)
         w20 = (byte) [x26 + 0x30] // 0xe1 // 225
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         0x8010128 ()             // 0x8010128(0x8010000, 0x0, 0x0, 0x0)
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w20 jmp 0x8010168     // likely

    loc_0x08010134: // orphan
         x8 = 0x8010000
         x9 = [x8]                // 0xcf // 207
         x10 = [x26 + 0x18]       // 0xe1 // 225
         if (x9 == x10)           // x26 // x26
         b.ne 0x80101dc           // likely

    loc_0x08010148: // orphan
         [x8] = xzr
         x8 = 0x8010000
         x9 = 0x8010000
         x10 = 0x8010000
         [x8] = (byte) wzr
         [x9] = wzr
         [x10] = wzr
         jmp 0x80101d0

    loc_0x08010168: // orphan
         x8 = [x26 + 0x18]        // 0xe1 // 225
         x9 = 0x8010000
         x10 = 0x8010000
         [x9] = x8
         w8 = [x26 + 0xf8]        // 0xe1 // 225
         if (w8 == 0)             // x26 // x26
         cset w9,gt
         [x10] = (byte) w9
         jmp ifle 0x80101c0       // likely

    loc_0x0801018c: // orphan
         s0 = [x26 + 0x13c]       // 0xe1 // 225
         x9 = 0x8010000
         if (w8 == 1)             // x26
         [x9] = s0
         b.eq 0x80101c8           // unlikely

    loc_0x080101a0: // orphan
         s0 = [x26 + 0x140]       // 0xe1 // 225
         x9 = 0x8010000
         if (w8 == 3)             // x26
         [x9] = s0
         s0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.lt 0x80101d4           // likely

    loc_0x080101b8: // orphan
         s0 = [x26 + 0x144]       // 0xe1 // 225
         jmp 0x80101d4

    loc_0x080101c0: // orphan
         x8 = 0x8010000
         [x8] = wzr

    loc_0x080101c8: // orphan
         x8 = 0x8010000
         [x8] = wzr

    loc_0x080101d0: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x8010164
         s0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080101d4: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x80101bc
         x8 = 0x8010000
         [x8] = s0

    loc_0x080101dc: // orphan
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         0x80101e4 ()             // 0x80101e4(0x8010000, 0x0, 0x0, 0x0)
         w1 = [x19]               // 0xda // 218
         x2 = [x19 + 8]           // 0xda // 218
         w3 = [x26 + 0x34]        // 0xe1 // 225
         w4 = [x26 + 0xf8]        // 0xe1 // 225
         w5 = (byte) [x26 + 0x31] // 0xe1 // 225
         w6 = (byte) [x26 + 0x30] // 0xe1 // 225
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         0x8010208 ()             // 0x8010208(0x8010000, 0x0, 0x22, 0x0)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800ff24

}

/* ===== 0x08010214 ===== */
int sym.enable_hw_bp (int esi, int edx) {
    loc_0x8010214:
        sp = sp - 0xa0
        [sp, 0x70] = (x29,2)
        [var_80h] = x21
        [sp, 0x90] = (x20,2)
        x29 = var_70h
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8010000
        x0 = x0 + 0   // int64_t arg1
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [sp, 0x60] = (xzr,2)
        [sp, 0x50] = (xzr,2)
        [sp, 0x40] = (xzr,2)
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [sp, 0x10] = (xzr,2)
        [sp] = (xzr,2)
        0x8010254 ()  // 0x8010254(0x8010000, 0x0, 0x0, 0x0)
        x8 = 0x8010000
        x8 = x8 + 0
        x21 = [x8]    // 0xcf // 207
        jmp 0x801026c
         // do {
    loc_0x801026c:
        // CODE XREF from sym.enable_hw_bp @ 0x8010264
        if (x21 == x8) // x26
        b.eq 0x801030c // unlikely
         // } while (?);
        }
        return eax;
    loc_0x8010274:
        w9 = [x21 + 0x10] // 0xdc // 220 // x19
        if (w9 == w20) // x26
        b.ne 0x8010268 // likely
            
    loc_0x8010268:
        x21 = [x21]   // 0xdc // 220 // x26
    loc_0x08010280: // orphan
             x9 = [x21 + 0x18]        // 0xdc // 220
             if (x9 == x19)           // x26
             b.ne 0x8010268           // likely

    loc_0x0801028c: // orphan
         x8 = [x21 + 0x20]        // 0xdc // 220 // x24
         if !x8 jmp 0x8010334     // unlikely

    loc_0x08010294: // orphan
         (x10, 2) = 3
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp] = (x10,2)
         (x10, 2) = 3
         (x12, 2) = 3
         [sp, 0x20] = (x10,2)
         [sp, 0x10] = (x12,2)
         (x10, 2) = 3
         (x12, 2) = 3
         [sp, 0x40] = (x10,2)
         [sp, 0x30] = (x12,2)
         x11 = [var_28h]          // 0x4
         (x9, 2) = 3
         (x12, 2) = 3
         x11 = x11 & 0xfffffffffffffffe
         [sp, 0x60] = (x9,2)
         x10 = 0x8010000
         [sp, 0x50] = (x12,2)
         [var_28h] = x11
         x8 = [x10]               // 0xd1 // 209
         x0 = [x21 + 0x20]        // 0xdc // 220 // x24
         blr x8                   // xzr(0x8000, 0x178000, 0x0, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x8010310      // likely

    loc_0x080102f4: // orphan
         x8 = [x21 + 0x20]        // 0xdc // 220 // x24
         x9 = [var_28h]           // 0x4
         x10 = [x8 + 0x108]       // 0xcf // 207
         bfxil x10,x9,0, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8 + 0x108] = x10
         jmp 0x8010310

    loc_0x0801030c: // orphan
         w19 = ~0x1

    loc_0x08010310: // orphan
         // CODE XREFS from sym.enable_hw_bp @ 0x8010308, 0x8010338
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         0x8010318 ()             // 0x8010318(0x8010000, 0x0, 0x0, 0x0)
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         (x20, 2) = 3
         x21 = [var_80h]          // 0x4
         (x29, 2) = 3
         sp = arg_a0h
         

    loc_0x08010334: // orphan
         w19 = ~0x15
         jmp 0x8010310

}

/* ===== 0x0801033c ===== */
int sym.disable_hw_bp (int esi, int edx) {
    loc_0x801033c:
        sp = sp - 0xa0
        [sp, 0x70] = (x29,2)
        [var_80h] = x21
        [sp, 0x90] = (x20,2)
        x29 = var_70h
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8010000
        x0 = x0 + 0   // int64_t arg1
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [sp, 0x60] = (xzr,2)
        [sp, 0x50] = (xzr,2)
        [sp, 0x40] = (xzr,2)
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [sp, 0x10] = (xzr,2)
        [sp] = (xzr,2)
        0x801037c ()  // 0x801037c(0x8010000, 0x0, 0x0, 0x0)
        x8 = 0x8010000
        x8 = x8 + 0
        x21 = [x8]    // 0xcf // 207
        jmp 0x8010394
         // do {
    loc_0x8010394:
        // CODE XREF from sym.disable_hw_bp @ 0x801038c
        if (x21 == x8) // x26
        b.eq 0x8010434 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x801039c:
        w9 = [x21 + 0x10] // 0xdc // 220 // x19
        if (w9 == w20) // x26
        b.ne 0x8010390 // likely
            
    loc_0x8010390:
        x21 = [x21]   // 0xdc // 220 // x26
    loc_0x080103a8: // orphan
             x9 = [x21 + 0x18]        // 0xdc // 220
             if (x9 == x19)           // x26
             b.ne 0x8010390           // likely

    loc_0x080103b4: // orphan
         x8 = [x21 + 0x20]        // 0xdc // 220 // x24
         if !x8 jmp 0x801045c     // unlikely

    loc_0x080103bc: // orphan
         (x10, 2) = 3
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp] = (x10,2)
         (x10, 2) = 3
         (x12, 2) = 3
         [sp, 0x20] = (x10,2)
         [sp, 0x10] = (x12,2)
         (x10, 2) = 3
         (x12, 2) = 3
         [sp, 0x40] = (x10,2)
         [sp, 0x30] = (x12,2)
         x11 = [var_28h]          // 0x4
         (x9, 2) = 3
         (x12, 2) = 3
         x11 = x11 | 1
         [sp, 0x60] = (x9,2)
         x10 = 0x8010000
         [sp, 0x50] = (x12,2)
         [var_28h] = x11
         x8 = [x10]               // 0xd1 // 209
         x0 = [x21 + 0x20]        // 0xdc // 220 // x24
         blr x8                   // xzr(0x8000, 0x178000, 0x0, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x8010438      // likely

    loc_0x0801041c: // orphan
         x8 = [x21 + 0x20]        // 0xdc // 220 // x24
         x9 = [var_28h]           // 0x4
         x10 = [x8 + 0x108]       // 0xcf // 207
         bfxil x10,x9,0, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8 + 0x108] = x10
         jmp 0x8010438

    loc_0x08010434: // orphan
         w19 = ~0x1

    loc_0x08010438: // orphan
         // CODE XREFS from sym.disable_hw_bp @ 0x8010430, 0x8010460
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         0x8010440 ()             // 0x8010440(0x8010000, 0x0, 0x0, 0x0)
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         (x20, 2) = 3
         x21 = [var_80h]          // 0x4
         (x29, 2) = 3
         sp = arg_a0h
         

    loc_0x0801045c: // orphan
         w19 = ~0x15
         jmp 0x8010438

}

/* ===== 0x08010464 ===== */
int sym.set_hwbp_reg_config (int esi, int edx) {
    loc_0x8010464:
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8010590 // likely
            
    loc_0x8010590:
        w19 = ~0x15
         // do {
    loc_0x8010594:
        // CODE XREF from sym.set_hwbp_reg_config @ 0x801058c
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        (x20, 2) = 3
        x21 = [var_10h] // 0x4
        (x29, 2) = 3
        0x080105a4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8010478
    loc_0x801049c:
        w9 = [x19]    // 0xda // 218
        jmp 0x80104b0
         // do {
    loc_0x80104b0:
        // CODE XREF from sym.set_hwbp_reg_config @ 0x80104a0
        w10 = [x21 + 0x10] // 0xdc // 220 // x19
        if (w10 == w9) // x26
        b.ne 0x80104a4 // likely
         // } while (?);
        }
        return eax;
    loc_0x80104bc:
        x10 = [x21 + 0x18] // 0xdc // 220
        x11 = [x19 + 8] // 0xda // 218
        if (x10 == x11) // x26 // x26
        b.ne 0x80104a4 // unlikely
    loc_0x80104a4:
        x21 = [x21]   // 0xdc // 220 // x26
        if (x21 == x8) // x26
        b.eq 0x801057c // unlikely
            
    loc_0x801057c:
        w19 = ~0x1
         // do {
    loc_0x8010580:
        // CODE XREF from sym.set_hwbp_reg_config @ 0x8010684
        x0 = 0x8010000
        x0 = x0 + 0   // int64_t arg1
        0x8010588 ()  // 0x8010588(0x8010000, 0x0, 0x0, 0x0)
        jmp 0x8010594
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080104cc: // orphan
             w8 = 0x250c              // '\f%'
             x20 = x21 + x8
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             0x80104d8 ()             // 0x80104d8(0x72a9c6290000250c, 0x0, 0x0, 0x0)
             w8 = [x19 + 0x14]        // 0xda // 218
             x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             if (w8 == 1)             // x26
             b.lt 0x80105a8           // likely

    loc_0x080104ec: // orphan
         w10 = [x21 + 0x34]       // 0xdc // 220 // x26
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x21 + 0x78
         jmp 0x801052c

    loc_0x080104fc: // orphan
         // CODE XREF from sym.set_hwbp_reg_config @ 0x8010570
         x10 = x21 + w10,sxtw 2
         [x10 + 0x38] = w12
         x10 = [x21 + 0x34]       // 0xdc // 220 // x26
         x10 = x21 + x10,lsl 3    // "\""
         [x10 + 0x78] = x11
         w10 = [x21 + 0x34]       // 0xdc // 220 // x26
         w10 = w10 + 1
         [x21 + 0x34] = w10

    loc_0x0801051c: // orphan
         // CODE XREF from sym.set_hwbp_reg_config @ 0x8010578
         x11 = [x19 + 0x14]       // 0xda // 218
         x8 = x8 + 1
         if (x8 == x11)           // x26
         b.ge 0x80105a8           // likely

    loc_0x0801052c: // orphan
         // CODE XREF from sym.set_hwbp_reg_config @ 0x80104f8
         if (w10 == 0xf)          // x26
         jmp ifgt 0x80105a8       // unlikely

    loc_0x08010534: // orphan
         x11 = x19 + x8,lsl 2
         x13 = x19 + x8,lsl 3
         w12 = [x11 + 0x18]       // 0xd2 // 210
         x11 = [x13 + 0x58]       // 0xd4 // 212
         if (w10 == 1)            // x26
         b.lt 0x80104fc           // likely

    loc_0x0801054c: // orphan
         x13 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w14 = w10                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010554: // orphan
         x15 = x9 + x13,lsl 2
         ldur w15,[x15,-0x40]     // 0xd6 // 214
         if (w15 == w12)          // x26 // x26
         b.eq 0x8010574           // unlikely

    loc_0x08010564: // orphan
         x13 = x13 + 1            // x26
         if (x14 == x13)          // x26
         b.ne 0x8010554           // likely

    loc_0x08010570: // orphan
         jmp 0x80104fc

    loc_0x08010574: // orphan
         [x9 + x13,lsl 3] = x11
         jmp 0x801051c

    loc_0x080105a8: // orphan
         w8 = [x19 + 0xd8]        // 0xda // 218
         if (w8 == 1)             // x26 // x26
         b.lt 0x801063c           // likely

    loc_0x080105b4: // orphan
         w10 = [x21 + 0xf8]       // 0xdc // 220
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x21 + 0x13c
         jmp 0x80105f4

    loc_0x080105c4: // orphan
         // CODE XREF from sym.set_hwbp_reg_config @ 0x8010630
         x10 = x21 + w10,sxtw 2
         [x10 + 0xfc] = w11
         x10 = [x21 + 0xf8]       // 0xdc // 220
         x10 = x21 + x10,lsl 2
         [x10 + 0x13c] = s0
         w10 = [x21 + 0xf8]       // 0xdc // 220
         w10 = w10 + 1
         [x21 + 0xf8] = w10

    loc_0x080105e4: // orphan
         // CODE XREF from sym.set_hwbp_reg_config @ 0x8010638
         x11 = [x19 + 0xd8]       // 0xda // 218
         x8 = x8 + 1
         if (x8 == x11)
         b.ge 0x801063c           // likely

    loc_0x080105f4: // orphan
         // CODE XREF from sym.set_hwbp_reg_config @ 0x80105c0
         if (w10 == 0xf)          // x26
         jmp ifgt 0x801063c       // unlikely

    loc_0x080105fc: // orphan
         x12 = x19 + x8,lsl 2
         w11 = [x12 + 0xdc]       // 0xd3 // 211
         s0 = [x12 + 0x11c]       // 0xd3 // 211
         if (w10 == 1)            // x26
         b.lt 0x80105c4           // likely

    loc_0x08010610: // orphan
         w12 = w10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010618: // orphan
         ldur w14,[x13,-0x40]     // 0xd4 // 212
         if (w14 == w11)          // x26 // x26
         b.eq 0x8010634           // unlikely

    loc_0x08010624: // orphan
         x12 = x12 - 1
         x13 = x13 + 4
         b.ne 0x8010618           // likely

    loc_0x08010630: // orphan
         jmp 0x80105c4

    loc_0x08010634: // orphan
         [x13] = s0
         jmp 0x80105e4

    loc_0x0801063c: // orphan
         w8 = [x21 + 0x34]        // 0xdc // 220
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         if (w8 == 0)             // x26
         cset w8,gt               // x26
         [x21 + 0x31] = (byte) w8
         w8 = [x19 + 0x10]        // 0xda // 218 // x24
         if (w8 == 0)             // x26
         cset w8,ne               // x26
         [x21 + 0x30] = (byte) w8
         0x8010660 ()             // 0x8010660(0x20, 0x0, 0x0, 0x0)
         w1 = [x19]               // 0xda // 218
         x2 = [x19 + 8]           // 0xda // 218
         w3 = [x21 + 0x34]        // 0xdc // 220
         w4 = [x21 + 0xf8]        // 0xdc // 220
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         0x801067c ()             // 0x801067c(0x8010000, 0x0, 0x22, 0x2)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010580

}

/* ===== 0x080107a4 ===== */
int sym.hw_bp_step_handler_e67fb88cc2f08ac7d3de047d864fd9b9 (int esi, int edx) {
    loc_0x80107a4:
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19 // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = (byte) [x0 + 0x108] // 0xc7 // 199 // arg1
        if ((w8 & 0xf) == 0) // x26
        b.eq 0x80107c4 // unlikely
            
    loc_0x80107c4:
        x0 = 0x8010000
        x0 = x0 + 0   // int64_t arg1
        0x80107cc ()  // "\t" // 0x80107cc(0x8010000, 0x0, 0x0, 0x0)
        x9 = 0x8010000
        x9 = x9 + 0
        x8 = [x9]     // 0xd0 // 208
        if (x8 == x9) // x26
        b.eq 0x8010838 // unlikely
            
    loc_0x8010838:
        // CODE XREF from sym.hw_bp_step_handler_e67fb88cc2f08ac7d3de047d864fd9b9 @ 0x8010800
        x0 = 0x8010000
        x0 = x0 + 0   // int64_t arg1
        0x8010840 ()  // 0x8010840(0x8010000, 0x0, 0x0, 0x0)
        x8 = 0x8010000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8010858 // likely
            
    loc_0x8010858:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x801085c:
        // CODE XREF from sym.hw_bp_step_handler_e67fb88cc2f08ac7d3de047d864fd9b9 @ 0x80107c0
        x19 = [var_10h] // 0x4
        (x29, 2) = 3
        0x08010864
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080107e8: // orphan
             x19 = x8 + x10
             w11 = (byte) [x19]       // 0xda // 218 // x8
             if w11 jmp 0x8010804     // unlikely

    loc_0x080107f4: // orphan
         x8 = [x8]                // 0xcf // 207
         if (x8 == x9)            // x26
         b.ne 0x80107e8           // likely

    loc_0x08010800: // orphan
         jmp 0x8010838

    loc_0x08010804: // orphan
         x0 = [x8 + 0x20]         // 0xcf // 207
         if !x0 jmp 0x8010834     // unlikely

    loc_0x0801080c: // orphan
         if (x0 != 1)             // x26
         b.hi 0x8010834           // unlikely

    loc_0x08010814: // orphan
         x8 = [x0 + 0x108]        // 0xc7 // 199
         x8 = x8 & 0xfffffffffffffffe
         [x0 + 0x108] = x8
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x8010834     // likely

    loc_0x0801082c: // orphan
         x1 = x0 + 0xe0
         blr x8                   // x8(0x0, 0xe0, 0x0, 0x0)

    loc_0x08010834: // orphan
         [x19] = (byte) wzr

}

/* ===== 0x08011cd0 ===== */
int sym.kp_core_hook_remove (int esi, int edx) {
    loc_0x8011cd0:
        sp = sp - 0x70
        [sp, 0x40] = (x29,2)
        [var_50h] = x21
        [sp, 0x60] = (x20,2)
        x29 = var_40h
        if !x0 jmp 0x8011db8 // likely
            
    loc_0x8011db8:
        w20 = ~0x15
         // do {
    loc_0x8011dbc:
        // CODE XREFS from sym.kp_core_hook_remove @ 0x8011db4, 0x8011df4
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        (x20, 2) = 3
        x21 = [var_50h] // 0x4
        (x29, 2) = 3
        sp = arg_70h
        0x08011dd0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8011ce8
    loc_0x8011cf4:
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [var_18h] = xzr
        [var_0h] = wzr // arg1
        [sp] = (xzr,2)
        w2 = [x19 + 0x24] // 0xda // 218
        if (w2 == 1)  // x26
        b.lt 0x8011d40 // unlikely
            
    loc_0x8011d40:
        x8 = 0x8011000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8011dd4 // unlikely
            
    loc_0x8011dd4:
        w20 = ~0x1
        jmp 0x8011de0
         // do {
    loc_0x8011de0:
        // CODE XREF from sym.kp_core_hook_remove @ 0x8011dd8
        x1 = [x19 + 8] // 0xda // 218 // int64_t arg_70h
        x0 = 0x8011000
        x0 = x0 + 0   // int64_t arg1
        w2 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        0x8011df0 ()  // 0x8011df0(0x8011000, 0x22, 0x20, 0x0)
        jmp 0x8011dbc
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08011d28: // orphan
             [x11] + 8 = x8           // "\""
             w13 = [x9] + 4           // 0xd0 // 208
             x12 = x12 - 1
             x8 = x8 + 4
             [x10] + 4 = w13          // ")\u01a9r\""
             b.ne 0x8011d28           // likely

    loc_0x08011d5c: // orphan
         w21 = [x19 + 0x20]       // 0xda // 218
         [x19 + 0x54] = (byte) wzr
         tbnz w21,0x1f,0x8011db8  // unlikely

    loc_0x08011d68: // orphan
         if (w21 == 0xf)          // x26
         jmp ifgt 0x8011da0       // unlikely

    loc_0x08011d70: // orphan
         x20 = 0x8011000
         x20 = x20 + 0
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8011d7c ()             // 0x8011d7c(0x8011000, 0x0, 0x0, 0x0)
         x8 = 0x8011000
         x9 = [x8]                // 0xcf // 207
         w10 = 0x1                // x26
         x10 = x10 << x21         // x26
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         bic x9,x9,x10            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8] = x9
         0x8011d9c ()             // 0x8011d9c(0x8011000, 0x0, 0x0, 0x0)

    loc_0x08011da0: // orphan
         w2 = 0x58                // 'X'
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8011dac ()             // 0x8011dac(0x10, 0x0, 0x58, 0x0)
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8011dbc

    loc_0x08011ddc: // orphan
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

}

/* ===== 0x08011df8 ===== */
int sym.kp_core_patch_insn (int esi, int edx) {
    loc_0x8011df8:
        sp = sp - 0x30
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x20,2)
        x29 = var_10h
        x19 = 0x8011000
        x8 = [x19]    // 0xda // 218
        [var_8h] = x0 // arg1 // (pstr 0x08047840) "sB"
        [var_4h] = w1 // arg2
        if x8 jmp 0x8011e30 // likely
            
    loc_0x8011e30:
        x20 = 0x8011000
        x9 = [x20]    // 0xdb // 219
        if !x9 jmp 0x8011e54 // unlikely
            
    loc_0x8011e54:
        x0 = 0x8011000
        x0 = x0 + 0   // int64_t arg1
        0x8011e5c ()  // 0x8011e5c(0x8011000, 0x0, 0x0, 0x0)
        x8 = [x19]    // 0xda // 218
        [x20] = x0    // x24
        if x8 jmp 0x8011e40 // unlikely
            
    loc_0x8011e40:
        x0 = var_8h
        x1 = var_4h
        w2 = 0x1      // x26
        blr x8        // x8(0x178008, 0x178004, 0x1, 0x0)
        jmp 0x8011e70
         // do {
    loc_0x8011e70:
        // CODE XREF from sym.kp_core_patch_insn @ 0x8011e50
        (x20, 2) = 3
        (x29, 2) = 3
        sp = arg_30h
        0x08011e7c
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08011f28 ===== */
int sym.hook_ptrace_39cce782030416169421eccb2b9f4387 (int esi, int edx) {
    loc_0x8011f28:
        sp = sp - 0x180
        [sp, 0x120] = (x29,2)
        [sp, 0x130] = (x28,2)
        [sp, 0x140] = (x26,2)
        [sp, 0x150] = (x24,2)
        [sp, 0x160] = (x22,2)
        [sp, 0x170] = (x20,2)
        x29 = var_120h
        x8 = [x0]     // 0xc7 // 199 // arg1
        x19 = [x0 + 0x10] // 0xc7 // 199 // arg1
        w9 = 0x4205
        x20 = x29 - 0x10
        if (x8 == x9) // x26
        b.eq 0x8012004 // unlikely
            
    loc_0x8012004:
        x8 = [x0 + 0x18] // 0xc7 // 199 // arg1
        if (x8 == 0x403) // x26
        b.eq 0x801212c // unlikely
            
    loc_0x801212c:
        x0 = var_4h   // int64_t arg1
        w2 = 0x108
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x20] = (xzr,2)
        0x801213c ()  // 0x801213c(0x178004, 0x0, 0x108, 0x0)
        x0 = x29 - 0x10 // int64_t arg1 // " "
        w2 = 0x10     // x19
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_180h
        [x29 = wzr
        0x8012150 ()  // 0x8012150(0x177ff0, 0x10, 0x10, 0x0)
        if !x0 jmp 0x8012184 // unlikely
            
    loc_0x8012184:
        x8 = [var_0h] // 0xdb // 219
        if (x8 == 8)  // x26
        b.hs 0x8012208 // unlikely
            
    loc_0x8012208:
        x0 = var_4h   // int64_t arg1
        w2 = 0x108
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w21 = 0x108
        0x8012218 ()  // 0x8012218(0x178004, 0x0, 0x108, 0x0)
        (x19, 2) = 3
        x0 = var_4h   // int64_t arg1
        w2 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x8 == 0x108) // x26
        csel x20,x8,x21, lo
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_180h
        0x8012234 ()  // 0x8012234(0x178004, 0x0, 0x0, 0x0)
        x0 = var_4h   // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_180h
        x2 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8012244 ()  // 0x8012244(0x178004, 0x0, 0x0, 0x0)
        if x0 jmp 0x8012158 // likely
    loc_0x801224c:
        x0 = x29 - 0x14 // int64_t arg1
        x1 = var_4h   // int64_t arg_180h
        w2 = 0x4      // ")\u01a9r\""
        0x8012258 ()  // 0x8012258(0x177fec, 0x178004, 0x4, 0x0)
        x0 = 0x8012000
        x0 = x0 + 0   // int64_t arg1 // "z"
        0x8012264 ()  // "!" // 0x8012264(0x8012000, 0x178004, 0x4, 0x0)
        w1 = 0x1      // x26
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x0,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8012274 ()  // 0x8012274(0x8012000, 0x1, 0x0, 0x0)
        x8 = 0x8012000
        x8 = x8 + 0   // "z"
        x20 = [x8]    // 0xcf // 207
        if (x20 == x8) // x26 // x26
        b.eq 0x80124c0 // unlikely
            
    loc_0x80124c0:
        // CODE XREFS from sym.hook_ptrace_39cce782030416169421eccb2b9f4387 @ 0x80120ec, 0x80122a4
        w19 = ~0x1
         // do {
    loc_0x80124c4:
        // CODE XREF from sym.hook_ptrace_39cce782030416169421eccb2b9f4387 @ 0x80124bc
        x0 = 0x8012000
        x0 = x0 + 0   // int64_t arg1 // "z"
        0x80124cc ()  // 0x80124cc(0x8012000, 0x0, 0x0, 0x0)
        if (w19 != 2) // x26
        b.eq 0x8012544 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8011f60
    loc_0x8011f6c:
        x8 = [x0 + 0x18] // 0xc7 // 199 // arg1
        if (x8 == 0x403) // x26
        b.eq 0x80120f0 // unlikely
            
    loc_0x80120f0:
        x0 = var_4h   // int64_t arg1
        w2 = 0x108
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x20] = (xzr,2)
        0x8012100 ()  // 0x8012100(0x178004, 0x0, 0x108, 0x0)
        x0 = x29 - 0x10 // int64_t arg1 // " "
        w2 = 0x10     // x19
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_180h
        [x29 = wzr
        0x8012114 ()  // 0x8012114(0x177ff0, 0x10, 0x10, 0x0)
        if !x0 jmp 0x8012168 // unlikely
            
    loc_0x8012168:
        x8 = [var_0h] // 0xdb // 219
        if (x8 == 8)  // x26
        b.hs 0x80121a0 // unlikely
            
    loc_0x80121a0:
        x0 = 0x8012000
        x0 = x0 + 0   // int64_t arg1 // "z"
        0x80121a8 ()  // "!" // 0x80121a8(0x8012000, 0x0, 0x0, 0x0)
        w1 = 0x1      // x26
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x0,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80121b8 ()  // "\t" // 0x80121b8(0x8012000, 0x1, 0x0, 0x0)
        x9 = 0x8012000
        x9 = x9 + 0   // "z"
        x8 = [x9]     // 0xd0 // 208
        if (x8 == x9) // x26 // x26
        b.eq 0x80121e8 // unlikely
            
    loc_0x80121e8:
        // CODE XREF from sym.hook_ptrace_39cce782030416169421eccb2b9f4387 @ 0x8012000
        x0 = 0x8012000
        x0 = x0 + 0   // int64_t arg1 // "z"
        0x80121f0 ()  // "(" // 0x80121f0(0x8012000, 0x0, 0x0, 0x0)
        w8 = ~0x1
        if (w8 != 2)  // x26 // x26
        b.eq 0x8012544 // unlikely
            
    loc_0x8012544:
        // CODE XREFS from sym.hook_ptrace_39cce782030416169421eccb2b9f4387 @ 0x8012128, 0x8012180
        w0 = 0x1f7
         // do {
    loc_0x8012548:
        // CODE XREFS from sym.hook_ptrace_39cce782030416169421eccb2b9f4387 @ 0x8012204, 0x80124dc
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_180h
        0x08012564
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8011f78
    loc_0x8011f80:
        x0 = var_4h   // int64_t arg1
        w2 = 0x108
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x20] = (xzr,2)
        0x8011f90 ()  // 0x8011f90(0x178004, 0x0, 0x108, 0x0)
        x0 = x29 - 0x10 // int64_t arg1 // " "
        w2 = 0x10     // x19
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_180h
        [x29 = wzr
        0x8011fa4 ()  // 0x8011fa4(0x177ff0, 0x10, 0x10, 0x0)
        if x0 jmp 0x801211c // likely
    loc_0x8011fac:
        x8 = [var_0h] // 0xdb // 219
        if (x8 == 8)  // x26
        b.lo 0x8012174 // likely
    loc_0x8011fb8:
        x0 = 0x8011000
        x0 = x0 + 0   // int64_t arg1
        0x8011fc0 ()  // "!" // 0x8011fc0(0x8011000, 0x0, 0x0, 0x0)
        w1 = 0x1      // x26
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x0,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8011fd0 ()  // 0x8011fd0(0x8011000, 0x1, 0x0, 0x0)
        x8 = 0x8011000
        x8 = x8 + 0
        x21 = [x8]    // 0xcf // 207
        if (x21 == x8) // x26 // x26
        b.eq 0x80121e8 // unlikely
    loc_0x8011fe8:
        w9 = [x21 + 0x10] // 0xdc // 220 // x19
        if (w9 == w0) // x26
        b.eq 0x80122a8 // unlikely
            
    loc_0x80122a8:
        if !x21 jmp 0x80121e8 // likely
    loc_0x80122ac:
        x0 = var_4h   // int64_t arg1
        w2 = 0x108
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80122b8 ()  // 0x80122b8(0x178004, 0x0, 0x108, 0x0)
        mrs x8,id_aa64dfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = (byte) [x21 + 0x14] // 0xdc // 220
        if !w8 jmp 0x80124e0 // likely
            
    loc_0x80124e0:
        x0 = var_4h   // int64_t arg1
        x1 = x29 - 0x14 // int64_t arg_180h
        w2 = 0x4      // ")\u01a9r\""
        [x29 = wzr
        0x80124f0 ()  // 0x80124f0(0x178004, 0x177fec, 0x4, 0x0)
         // do {
    loc_0x80124f4:
        // CODE XREF from sym.hook_ptrace_39cce782030416169421eccb2b9f4387 @ 0x8012354
        x0 = 0x8012000
        x0 = x0 + 0   // int64_t arg1 // "z"
        0x80124fc ()  // 0x80124fc(0x8012000, 0x0, 0x0, 0x0)
        (x19, 2) = 3
        w9 = 0x108
        x0 = var_4h
        w2 = 0x1      // x26
        if (x8 == 0x108) // x26
        csel x20,x8,x9, lo
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8011ff4
    loc_0x8012000:
        // XREFS(93)
        jmp 0x80121e8
    loc_0x08012018: // orphan
             x0 = var_4h              // int64_t arg1
             w2 = 0x108
             w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             [x20] = (xzr,2)
             0x8012028 ()             // 0x8012028(0x178004, 0x0, 0x108, 0x0)
             x0 = x29 - 0x10          // int64_t arg1 // " "
             w2 = 0x10                // x19
             x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_180h
             [x29 = wzr
             0x801203c ()             // 0x801203c(0x177ff0, 0x10, 0x10, 0x0)
             if x0 jmp 0x8012158      // likely

    loc_0x08012044: // orphan
         x8 = [var_0h]            // 0xdb // 219
         if (x8 == 8)             // x26
         b.lo 0x8012190           // likely

    loc_0x08012050: // orphan
         x0 = var_4h              // int64_t arg1
         w2 = 0x108
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = 0x108
         0x8012060 ()             // 0x8012060(0x178004, 0x0, 0x108, 0x0)
         (x19, 2) = 3
         x0 = var_4h              // int64_t arg1
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x8 == 0x108)         // x26
         csel x20,x8,x21, lo
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_180h
         0x801207c ()             // 0x801207c(0x178004, 0x0, 0x0, 0x0)
         x0 = var_4h              // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_180h
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801208c ()             // 0x801208c(0x178004, 0x0, 0x0, 0x0)
         if x0 jmp 0x8012158      // likely

    loc_0x08012094: // orphan
         x0 = x29 - 0x14          // int64_t arg1
         x1 = var_4h              // int64_t arg_180h
         w2 = 0x4                 // ")\u01a9r\""
         0x80120a0 ()             // 0x80120a0(0x177fec, 0x178004, 0x4, 0x0)
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg1 // "z"
         0x80120ac ()             // "!" // 0x80120ac(0x8012000, 0x178004, 0x4, 0x0)
         w1 = 0x1                 // x26
         x2 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x0,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80120bc ()             // 0x80120bc(0x8012000, 0x1, 0x0, 0x0)
         x8 = 0x8012000
         x8 = x8 + 0              // "z"
         x20 = [x8]               // 0xcf // 207
         if (x20 == x8)           // x26 // x26
         b.eq 0x80124c0           // unlikely

    loc_0x080120d4: // orphan
         w9 = [x20 + 0x10]        // 0xdb // 219
         if (w9 == w0)            // x26
         b.eq 0x80123a8           // unlikely

    loc_0x080120e0: // orphan
         x20 = [x20]              // 0xdb // 219 // x24
         if (x20 == x8)           // x26
         b.ne 0x80120d4           // likely

    loc_0x080120ec: // orphan
         jmp 0x80124c0

    loc_0x08012128: // orphan
         jmp 0x8012544

    loc_0x08012164: // orphan
         jmp 0x80124d8

    loc_0x08012180: // orphan
         jmp 0x8012544

    loc_0x0801219c: // orphan
         jmp 0x80124d8

    loc_0x080121dc: // orphan
         x8 = [x8]                // 0xcf // 207
         if (x8 == x9)            // x26
         b.ne 0x80121d0           // likely

    loc_0x08012298: // orphan
         x20 = [x20]              // 0xdb // 219 // x24
         if (x20 == x8)           // x26
         b.ne 0x801228c           // likely

    loc_0x080122a4: // orphan
         jmp 0x80124c0

    loc_0x080122d0: // orphan
         if (w8 == 0x10)          // x26
         w9 = 0x10                // x19
         csel w8,w8,w9, lo
         x1 = x21 + 0x18          // int64_t arg_180h // "\""
         x0 = var_4h              // int64_t arg1
         w2 = 0x4                 // ")\u01a9r\""
         [x29 = w8
         x22 = var_4h
         0x80122f0 ()             // 0x80122f0(0x178004, 0x18, 0x4, 0x0)
         ldur w8,[x29,-0x14]
         if !w8 jmp 0x80124f4     // unlikely

    loc_0x080122fc: // orphan
         x23 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x26 = 0x1

    loc_0x0801230c: // orphan
         x8 = x23 & 0xfffffff0    // x24
         x8 = x8 | 8
         x27 = x21 + x24,asr 28
         x19 = x22 + x8
         x1 = x27 + 0x28          // int64_t arg_180h
         w2 = 0x8                 // "\""
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8012328 ()             // "`\"" // 0x8012328(0x28, 0x28, 0x8, 0x0)
         x0 = var_8h              // int64_t arg1
         x1 = x27 + 0x30          // int64_t arg_180h
         w2 = 0x4                 // ")\u01a9r\""
         0x8012338 ()             // 0x8012338(0x30, 0x30, 0x4, 0x0)
         ldur w8,[x29,-0x14]
         x25 = x25 + 1            // x26
         x24 = x24 + x26
         x23 = x23 + 0x10
         if (x25 == x8)           // x26
         b.lo 0x801230c           // likely

    loc_0x08012354: // orphan
         jmp 0x80124f4

    loc_0x08012358: // orphan
         if !x8 jmp 0x80121e8     // unlikely

    loc_0x0801235c: // orphan
         x0 = var_4h              // int64_t arg1
         w2 = 0x108
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = 0x108
         0x801236c ()             // 0x801236c(0x178004, 0x0, 0x108, 0x0)
         x0 = var_4h              // int64_t arg1
         x1 = x29 - 0x14          // int64_t arg_180h
         w2 = 0x4                 // ")\u01a9r\""
         [x29 = wzr
         0x8012380 ()             // 0x8012380(0x178004, 0x177fec, 0x4, 0x0)
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg1 // "z"
         0x801238c ()             // 0x801238c(0x8012000, 0x177fec, 0x4, 0x0)
         (x19, 2) = 3
         x0 = var_4h
         w2 = 0x1                 // x26
         if (x8 == 0x108)         // x26
         csel x20,x8,x21, lo
         jmp 0x8012518

    loc_0x080123a8: // orphan
         if !x20 jmp 0x80124c0    // unlikely

    loc_0x080123ac: // orphan
         w8 = 0x1                 // x26
         [x20 + 0x14] = (byte) w8
         mrs x8,id_aa64dfr0_el1   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w8,0xc, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 + 1             // x26
         ldur w8,[x29,-0x14]
         w9 = 0x10                // x19
         if (w8 == 0x10)          // x26
         csel w8,w8,w9, lo
         [x20, 0x18] = (w10,2)
         if !w8 jmp 0x80124b8     // likely

    loc_0x080123d8: // orphan
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = var_4h
         x25 = 0x1

    loc_0x080123ec: // orphan
         x8 = x21 & 0xfffffff0
         x8 = x8 | 8              // "\""
         x26 = x20 + x22,asr 28   // x24
         x19 = x24 + x8
         x0 = x26 + 0x28          // int64_t arg1
         w2 = 0x8                 // "\""
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_180h
         0x8012408 ()             // 0x8012408(0x48, 0x28, 0x8, 0x0)
         x0 = x26 + 0x30          // int64_t arg1
         x1 = var_8h              // int64_t arg_180h
         w2 = 0x4                 // ")\u01a9r\""
         0x8012418 ()             // 0x8012418(0x50, 0x30, 0x4, 0x0)
         w8 = [x20 + 0x1c]        // 0xdb // 219
         x23 = x23 + 1
         x22 = x22 + x25
         x21 = x21 + 0x10         // x19
         if (x23 == x8)           // x26
         b.lo 0x80123ec           // unlikely

    loc_0x08012434: // orphan
         jmp 0x80124b8

    loc_0x08012438: // orphan
         if !x20 jmp 0x80124c0    // unlikely

    loc_0x0801243c: // orphan
         w8 = 0x1                 // x26
         [x20 + 0x14] = (byte) w8
         ldur w8,[x29,-0x14]
         w9 = 0x10                // x19
         if (w8 == 0x10)          // x26
         csel w8,w8,w9, lo
         [x20 + 0x20] = w8        // " "
         if !w8 jmp 0x80124b8     // likely

    loc_0x0801245c: // orphan
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = var_4h
         x25 = 0x1

    loc_0x08012470: // orphan
         x8 = x21 & 0xfffffff0
         x8 = x8 | 8              // "\""
         x26 = x20 + x22,asr 28   // x24
         x19 = x24 + x8
         x0 = x26 + 0x128         // int64_t arg1
         w2 = 0x8                 // "\""
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_180h
         0x801248c ()             // 0x801248c(0x148, 0x28, 0x8, 0x0)
         x0 = x26 + 0x130         // int64_t arg1
         x1 = var_8h              // int64_t arg_180h
         w2 = 0x4                 // ")\u01a9r\""
         0x801249c ()             // 0x801249c(0x150, 0x30, 0x4, 0x0)
         w8 = [x20 + 0x20]        // 0xdb // 219
         x23 = x23 + 1
         x22 = x22 + x25
         x21 = x21 + 0x10         // x19
         if (x23 == x8)           // x26
         b.lo 0x8012470           // unlikely

    loc_0x080124b8: // orphan
         // CODE XREF from sym.hook_ptrace_39cce782030416169421eccb2b9f4387 @ 0x8012434
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80124c4

    loc_0x080124d8: // orphan
         // CODE XREFS from sym.hook_ptrace_39cce782030416169421eccb2b9f4387 @ 0x8012164, 0x801219c
         x0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         jmp 0x8012548

    loc_0x08012518: // orphan
         // CODE XREF from sym.hook_ptrace_39cce782030416169421eccb2b9f4387 @ 0x80123a4
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_180h // x24
         0x801251c ()             // 0x801251c(0x0, 0x20, 0x0, 0x0)
         x1 = var_4h              // int64_t arg_180h
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         0x801252c ()             // 0x801252c(0x10, 0x178004, 0x20, 0x0)
         if (x0 == 0)             // x26
         w8 = ~0xd
         csel w8,wzr,w8, eq
         if (w8 != 2)             // x26 // x26
         b.ne 0x8012200           // likely

}

/* ===== 0x08012640 ===== */
int sym.ptrace_spoof_add (int esi, int edx) {
    loc_0x8012640:
        [sp, -0x30]! = (x29,2) // " "
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w0 == 1)  // arg1 // x26
        b.lt 0x80126c0 // likely
            
    loc_0x80126c0:
        w0 = ~0x15
        jmp 0x80126dc
         // do {
    loc_0x80126dc:
        // CODE XREFS from sym.ptrace_spoof_add @ 0x80126bc, 0x80126c4
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        0x080126e8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8012658
    loc_0x801267c:
        w9 = [x8 + 0x10] // 0xcf // 207
        if (w9 == w19) // x26
        b.eq 0x80126c8 // unlikely
            
    loc_0x80126c8:
        if !x8 jmp 0x8012694 // unlikely
            
    loc_0x8012694:
        x8 = 0x8012000
        x0 = [x8]     // 0xcf // 207 // int64_t arg1
        w1 = 0xdc0    // '\xc0\r'
        w2 = 0x228
        0x80126a4 ()  // 0x80126a4(0xf9400c081400007a, 0xdc0, 0x228, 0x0)
        if x0 jmp 0x80126ec // likely
            
    loc_0x80126ec:
        x22 = [x20 + 8] // 0xdb // 219
        x2 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x0 + 0x10] = w19 // x19
        x1 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x0 + 0x14] = (byte) wzr
        0x8012704 ()  // 0x8012704(0x0, 0x0, 0x20, 0x0)
        tbz w0,0,0x8012718 // likely
            
    loc_0x8012718:
        x0 = 0x8012000
        x0 = x0 + 0   // int64_t arg1 // "z"
        0x8012720 ()  // 0x8012720(0x8012000, 0x0, 0x0, 0x0)
        x0 = 0x8012000
        x0 = x0 + 0   // int64_t arg1 // "z"
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
        0x8012730 ()  // 0x8012730(0x8012000, 0x10, 0x0, 0x0)
        jmp 0x80126d8
         // do {
    loc_0x80126d8:
        // CODE XREF from sym.ptrace_spoof_add @ 0x8012734
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08012738 ===== */
int sym.ptrace_spoof_remove (int esi, int edx) {
    loc_0x8012738:
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8012000
        x0 = x0 + 0   // int64_t arg1 // "z"
        0x8012750 ()  // 0x8012750(0x8012000, 0x0, 0x0, 0x0)
        x8 = 0x8012000
        x8 = x8 + 0   // "z"
        x20 = [x8]    // 0xcf // 207
        if (x20 == x8) // x26 // x26
        b.eq 0x8012788 // unlikely
            
    loc_0x8012788:
        // CODE XREF from sym.ptrace_spoof_remove @ 0x8012780
        x0 = 0x8012000
        x0 = x0 + 0   // int64_t arg1 // "z"
        0x8012790 ()  // " " // 0x8012790(0x8012000, 0x0, 0x0, 0x0)
        w0 = ~0x1
         // do {
    loc_0x8012798:
        // CODE XREF from sym.ptrace_spoof_remove @ 0x80127f8
        (x20, 2) = 3
        (x29, 2) = 3
        0x080127a0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8012768
    loc_0x8012774:
        x20 = [x20]   // 0xdb // 219 // x24
        if (x20 == x8) // x26
        b.ne 0x8012768 // likely
    loc_0x8012780:
        jmp 0x8012788
    loc_0x08012784: // orphan
             if x20 jmp 0x80127a4     // likely

    loc_0x080127a4: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         0x80127a8 ()             // 0x80127a8(0x20, 0x0, 0x0, 0x0)
         tbz w0,0,0x80127bc       // likely

    loc_0x080127b0: // orphan
         (x9, 2) = 3
         [x9 + 8] = x8
         [x8] = x9

    loc_0x080127bc: // orphan
         x8 = 0x100
         x8 = 0xdead              // '\xad\xde'
         w9 = 0x22                // '\"'
         x9 = x8 | x9
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         [x20] = (x8,2)
         0x80127d4 ()             // 0x80127d4(0x20, 0x0, 0x0, 0x0)
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg1 // "z"
         0x80127e0 ()             // 0x80127e0(0x8012000, 0x0, 0x0, 0x0)
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg1 // "z"
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x19
         0x80127f0 ()             // 0x80127f0(0x8012000, 0x10, 0x0, 0x0)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8012798

}

/* ===== 0x08013a9c ===== */
int sym.__mmu_notifier_arch_invalidate_secondary_tlbs (int esi, int edx) {
    loc_0x8013a9c:
        // lr
         // (break)
}

/* ===== 0x08013bbc ===== */
int sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65 (int esi, int edx) {
    loc_0x8013bbc:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x0 << 8  // arg1
        x0 = x0 & x8,asr 8 // arg1
        jmp 0x8013c14
         // do {
    loc_0x8013c14:
        // CODE XREF from sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65 @ 0x8013bcc
        x8 = 0x8013000
        x8 = x8 + 0
        jmp 0x8013c78
         // } while (?);
        }
        return eax;
    loc_0x08013bec: // orphan
             jmp 0x8013c50

    loc_0x08013c08: // orphan
         // CODE XREF from sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65 @ 0x8013c60
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x29, 2) = 3
         

    loc_0x08013c20: // orphan
         // CODE XREF from sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65 @ 0x8013c8c
         0x8013c20 ()             // 0x8013c20(0x0, 0x0, 0x0, 0x0)
         if w0 jmp 0x8013bec      // unlikely

    loc_0x08013c28: // orphan
         jmp 0x8013c64

    loc_0x08013c44: // orphan
         // CODE XREF from sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65 @ 0x8013c74
         w0 = 0x1f7
         (x29, 2) = 3
         

    loc_0x08013c50: // orphan
         // CODE XREF from sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65 @ 0x8013bec
         x8 = 0x8013000
         x8 = x8 + 0
         w9 = 0x1                 // x26
         jmp 0x8013c90

    loc_0x08013c60: // orphan
         // CODE XREF from sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65 @ 0x8013ca4
         jmp 0x8013c08

    loc_0x08013c64: // orphan
         // CODE XREF from sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65 @ 0x8013c28
         x8 = 0x8013000
         x8 = x8 + 0
         w9 = 0x1                 // x26
         jmp 0x8013ca8

    loc_0x08013c74: // orphan
         // CODE XREF from sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65 @ 0x8013cbc
         jmp 0x8013c44

    loc_0x08013c78: // orphan
         // CODE XREF from sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65 @ 0x8013c1c
         prfm pstl1strm,[x8]

    loc_0x08013c7c: // orphan
         ldxr w9,[x8]
         w9 = w9 + 1              // x26
         stxr w10,w9,[x8]
         if w10 jmp 0x8013c7c     // unlikely

    loc_0x08013c8c: // orphan
         jmp 0x8013c20

    loc_0x08013c90: // orphan
         // CODE XREF from sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65 @ 0x8013c5c
         prfm pstl1strm,[x8]

    loc_0x08013c94: // orphan
         ldxr w10,[x8]
         w10 = w10 - w9
         stxr w11,w10,[x8]
         if w11 jmp 0x8013c94     // unlikely

    loc_0x08013ca4: // orphan
         jmp 0x8013c60

    loc_0x08013ca8: // orphan
         // CODE XREF from sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65 @ 0x8013c70
         prfm pstl1strm,[x8]

    loc_0x08013cac: // orphan
         ldxr w10,[x8]
         w10 = w10 - w9
         stxr w11,w10,[x8]
         if w11 jmp 0x8013cac     // unlikely

    loc_0x08013cbc: // orphan
         jmp 0x8013c74

}

/* ===== 0x0804ac84 ===== */
int sym.arm64_decode_insn (int esi, int edx) {
    loc_0x804ac84:
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x8, 0x40] = (xzr,2)
        [x8, 0x30] = (xzr,2)
        [x8, 0x20] = (xzr,2)
        [x8, 0x10] = (xzr,2)
        [x8] = (xzr,2)
        w8 = w0 >> 0x10 // arg1
        [x19] = w0    // arg1 // x8
        if w8 jmp 0x804acc8 // unlikely
            
    loc_0x804acc8:
        ubfx w8,w0,0x19, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w8 == 0xf) // x26
        b.hi 0x804ad44 // unlikely
            
    loc_0x804ad44:
        w0 = 0x3
        [x19 + 0x10] = xzr // x24
         // do {
    loc_0x804ad4c:
        // CODE XREF from sym.arm64_decode_insn @ 0x804acc4
        [x19 + 4] = w0
        if !x19 jmp 0x804adb0 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0804ad54: // orphan
             w8 = [x19 + 0x1c]        // 0xda // 218
             w9 = 0x20                // x24
             w10 = 0x2
             w10 = 0x20
             x11 = x8 & 8
             x13 = x11 >> 3
             if ((w8 & 0x10) == 0)    // x26 // x26
             w12 = w8 << 6
             x14 = x11 << 1
             bfi x9,x13,4, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
             x12 = x12 & 0x80
             csel x9,x14,x9, eq       // x24
             x9 = x9 | x12            // x24
             x10 = x9 | x10
             if ((w8 & 0x40) == 0)    // x26 // x26
             csel x9,x9,x10, eq
             tbnz w8,5,0x804adb8      // unlikely

    loc_0x0804ad98: // orphan
         x10 = x9 | 2
         if (w11 == 0)            // x26 // x26
         ubfx w8,w8,4, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x9,x9,x10, eq
         x9 = x9 | x8
         jmp 0x804adcc

    loc_0x0804adb0: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x804aed4

    loc_0x0804adb8: // orphan
         w10 = w11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 | x10
         x10 = x9 | 4
         if ((w8 & 0x10) == 0)    // x26
         csel x9,x9,x10, eq

    loc_0x0804adcc: // orphan
         // CODE XREF from sym.arm64_decode_insn @ 0x804adac
         w10 = [x19 + 0x14]       // 0xda // 218
         w8 = w10 - 1
         if (w8 == 0x2e)          // x26
         b.hi 0x804aee4           // unlikely

    loc_0x0804addc: // orphan
         x12 = 0x804a000
         x12 = x12 + 0
         x13 = 0x804adf8
         w14 = (byte) [x12 + x8]  // 0xcf000000d3 // 889058230483
         x13 = x13 + x14,lsl 2
         x8 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         br x13

    loc_0x0804aed4: // orphan
         // CODE XREFS from sym.arm64_decode_insn @ 0x804adb4, 0x804af0c, 0x804af7c, 0x804af84, 0x804af8c
         [x19 + 8] = x8           // "\""
         x19 = [var_10h]          // 0x4
         (x29, 2) = 3
         

    loc_0x0804aee4: // orphan
         w8 = [x19 + 0x10]        // 0xda // 218 // x24
         w11 = w8 - 1
         if (w11 == 2)            // x26
         b.hs 0x804af70           // likely

    loc_0x0804aef4: // orphan
         if (w10 == 0x22)         // x26
         b.eq 0x804af04           // unlikely

    loc_0x0804aefc: // orphan
         if (w10 == 0x1d)         // x26
         b.ne 0x804af88           // likely

    loc_0x0804af04: // orphan
         w8 = 0x243
         x8 = x9 | x8
         jmp 0x804aed4

    loc_0x0804af70: // orphan
         if (w8 == 5)             // x26
         b.ne 0x804af80           // likely

    loc_0x0804af78: // orphan
         x8 = x9 | 0xc
         jmp 0x804aed4

    loc_0x0804af80: // orphan
         x8 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x804aed4

    loc_0x0804af88: // orphan
         x8 = x9 | 3
         jmp 0x804aed4

}

/* ===== 0x0804b05c ===== */
int sym.arm64_decode_direct_target (int esi, int edx) {
    loc_0x804b05c:
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if !x8 jmp 0x804b0b8 // likely
            
    loc_0x804b0b8:
        // lr
         // } else {
    loc_0x804b068:
        if !x2 jmp 0x804b0b8 // likely
        }
        return eax;
    loc_0x804b06c:
        w9 = [x8 + 4] // 0xcf // 207
        if !w9 jmp 0x804b07c // likely
            
    loc_0x804b07c:
        w9 = [x8 + 0x14] // 0xcf // 207
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 0x2c) // x26
        b.hi 0x804b0b8 // unlikely
    loc_0x804b08c:
        x11 = 0xe300
        w10 = 0x1     // x26
        x11 = 0x7
        x10 = x10 << x9 // x26
        x11 = 0x1800
        if ((x10 & x11) == 0) // x26
        b.eq 0x804b0bc // unlikely
            
    loc_0x804b0bc:
        if (x9 == 0x13) // x26
        b.ne 0x804b0b8 // likely
    loc_0x804b0c4:
        x8 = [x8 + 0x28] // 0xcf // 207
        x9 = x1 & 0xfffffffffffff000 // arg2
        x8 = x8 + x9
        jmp 0x804b0b0
         // do {
    loc_0x804b0b0:
        // CODE XREF from sym.arm64_decode_direct_target @ 0x804b0d0
        w0 = 0x1      // x26
        [x2] = x8     // arg3
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0804b0d4 ===== */
int sym.arm64_decode_memory_address (int esi, int edx) {
    loc_0x804b0d4:
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if !x0 jmp 0x804b1ac // likely
            
    loc_0x804b1ac:
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // lr
         // } else {
    loc_0x804b0dc:
        if !x4 jmp 0x804b1ac // likely
        }
        return eax;
    loc_0x804b0e0:
        w8 = [x0 + 4] // 0xc7 // 199 // arg1
        if w8 jmp 0x804b12c // likely
            
    loc_0x804b12c:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // lr
         // } else {
    loc_0x804b0e8:
        // CODE XREFS from sym.arm64_decode_insn @ 0x804ace4, 0x804ace8
        w8 = [x0 + 0x10] // 0xc7 // 199 // arg1 // x19 // x19
        if (w8 == 3)  // x26
        b.ne 0x804b12c // likely
        }
        return eax;
    loc_0x804b0f4:
        [x4, 8] = (xzr,2) // arg5
        [x4] = xzr    // arg5
        w8 = [x0 + 0x30] // 0xc7 // 199 // arg1
        w8 = w8 - 1
        if (w8 == 6)  // x26
        b.hi 0x804b12c // likely
    loc_0x804b10c:
        x9 = 0x804b000
        x9 = x9 + 0
        x10 = 0x804b124
        w11 = (byte) [x9 + x8] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11,lsl 2
        br x10
         // (break)
}

/* ===== 0x0802ffc8 ===== */
int sym.brk_bp_clear_all (int esi, int edx) {
    loc_0x802ffc8:
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x802f000
        x0 = x0 + 0
        0x802ffe4 ()  // 0x802ffe4(0x802f000, 0x0, 0x0, 0x0)
        x0 = 0x802f000
        x0 = x0 + 0
        0x802fff0 ()  // 0x802fff0(0x802f000, 0x0, 0x0, 0x0)
        x22 = 0x802f000
        x22 = x22 + 0
        x19 = [x22]   // 0xdd // 221
        // XREFS(129)
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x19 == x22) // x26
        // CODE XREF from sym.brk_bp_init @ 0x8030238
        b.eq 0x8030028 // unlikely
            
    loc_0x8030028:
        x0 = 0x8030000
        x0 = x0 + 0
        // CODE XREF from sym.brk_bp_init @ 0x803023c
        0x8030030 ()  // 0x8030030(0x8030000, 0x0, 0x0, 0x0)
        if (x19 == x22) // x26
        b.eq 0x8030064 // unlikely
            
    loc_0x8030064:
        x19 = [x22]   // 0xdd // 221
        if (x19 == x22) // x26 // x26
        b.eq 0x80300d8 // likely
            
    loc_0x80300d8:
        x0 = 0x8030000
        x0 = x0 + 0
        0x80300e0 ()  // 0x80300e0(0x8030000, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4
        (x29, 2) = 3
        0x080300f4
         // } else {
    loc_0x8030070:
        x20 = 0x8030000
        x20 = x20 + 0
        jmp 0x80300a4
         // } else {
         // } else {
        }
        return eax;
    loc_0x08030014: // orphan
             [x9 + 0x7f0] = (byte) wzr
             [x9 + 0x7e0] = (byte) w8
             x9 = [x9]                // 0xd0 // 208
             if (x9 == x22)           // x26 // x26
             b.ne 0x8030014           // unlikely

    loc_0x08030050: // orphan
         x0 = 0x8030000
         x0 = x0 + 0
         0x8030058 ()             // 0x8030058(0x8030000, 0x0, 0x0, 0x0)
         [x19] = (byte) wzr

    loc_0x08030060: // orphan
         0x8030060 ()             // 0x8030060(0x0, 0x0, 0x0, 0x0)

    loc_0x0803007c: // orphan
         // CODE XREF from sym.brk_bp_clear_all @ 0x80300d4
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19] = x19
         [x19 + 8] = x19
         0x803008c ()             // 0x803008c(0x20, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8030094 ()             // 0x8030094(0x10, 0x0, 0x0, 0x0)
         if (x23 == x22)          // x26
         x19 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         b.eq 0x80300d8           // unlikely

    loc_0x080300a4: // orphan
         // CODE XREF from sym.brk_bp_clear_all @ 0x8030078
         x23 = [x19]              // 0xda // 218
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80300ac ()             // 0x80300ac(0x10, 0x0, 0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         0x80300b4 ()             // 0x80300b4(0x20, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80300c0 ()             // 0x80300c0(0x10, 0x0, 0x0, 0x0)
         tbz w0,0,0x803007c       // likely

    loc_0x080300c8: // orphan
         (x9, 2) = 3              // x19 // x19
         [x9 + 8] = x8
         [x8] = x9                // x19
         jmp 0x803007c

}

/* ===== 0x08030300 ===== */
int sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 (int esi, int edx) {
    loc_0x8030300:
        sp = sp - 0xc0
        [sp, 0x60] = (x29,2)
        [sp, 0x70] = (x28,2)
        [sp, 0x80] = (x26,2)
        [sp, 0x90] = (x24,2)
        [sp, 0xa0] = (x22,2)
        [sp, 0xb0] = (x20,2)
        x29 = var_60h
        mrs x8,ttbr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x29 = x8
        x8 = 0x8030000
        w8 = (byte) [x8] // 0xcf // 207
        if (w8 == 1)  // x26
        b.ne 0x803036c // likely
            
    loc_0x803036c:
        [x29 = wzr    // arg1
         // do {
    loc_0x8030370:
        // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x8030838
        x0 = 0x8030000
        x0 = x0 + 0   // int64_t arg1
        0x8030378 ()  // 0x8030378(0x8030000, 0x0, 0x0, 0x0)
        x8 = 0x8030000
        x8 = x8 + 0
        x22 = [x8]    // 0xcf // 207
        [x29 = x0     // " "
        if (x22 == x8) // x26 // x26
        b.eq 0x80307b8 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8030338
    loc_0x8030344:
        x8 = 0x8030000
        w8 = (byte) [x8] // 0xcf // 207
        if (w8 == 1)  // x26
        b.ne 0x803036c // likely
    loc_0x8030354:
        x8 = 0x8030000
        x20 = 0x8030000
        x19 = [x8]    // 0xcf // 207
        x8 = [x20]    // 0xdb // 219
        if (x8 == x19) // x26
        b.ne 0x8030814 // likely
            
    loc_0x8030814:
        x0 = 0x8030000
        x1 = 0x8030000
        x0 = x0 + 0   // int64_t arg1
        x1 = x1 + 0   // int64_t arg_c0h
        0x8030824 ()  // 0x8030824(0x8030000, 0x8030000, 0x0, 0x0)
        if w0 jmp 0x803083c // likely
            
    loc_0x803083c:
        x1 = [x20]    // 0xdb // 219 // int64_t arg_c0h // x24
        x0 = 0x8030000
        x0 = x0 + 0   // int64_t arg1
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x803084c ()  // 0x803084c(0x8030000, 0x400000004, 0x10, 0x0)
        jmp 0x803082c
    loc_0x08030394: // orphan
             x25 = 0x8030000
             x19 = 0x8030000
             x25 = x25 + 0

    loc_0x080303a0: // orphan
         ldur w8,[x29,-4]
         if !w8 jmp 0x80303bc     // likely

    loc_0x080303a8: // orphan
         w8 = (byte) [x22 + 0x7f0] // 0xdd // 221
         if !w8 jmp 0x80303bc     // likely

    loc_0x080303b0: // orphan
         w8 = 0x1                 // x26
         [x22 + 0x7e1] = (byte) w8
         [x22 + 0x7e0] = (byte) w8

    loc_0x080303bc: // orphan
         x23 = [x22 + 0x798]      // 0xdd // 221
         x20 = x22 + 0x798
         if (x23 == x20)          // x26 // x26
         b.ne 0x8030400           // unlikely

    loc_0x080303cc: // orphan
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080303d4: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221 // x19 // x19
         w2 = [x22 + 0x7a8]       // 0xdd // 221
         w3 = (byte) [x22 + 0x7f0] // 0xdd // 221
         w4 = (byte) [x22 + 0x7e0] // 0xdd // 221 // x26
         w5 = (byte) [x22 + 0x7e1] // 0xdd // 221 // x26
         w8 = [x22 + 0x7b4]       // 0xdd // 221
         w9 = [x22 + 0x7b8]       // 0xdd // 221
         w10 = [x22 + 0x7bc]      // 0xdd // 221
         if x22 jmp 0x8030470     // unlikely

    loc_0x080303f8: // orphan
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8030494

    loc_0x08030400: // orphan
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = x22 + 0x7ac
         jmp 0x8030424

    loc_0x08030410: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x803046c
         x23 = [x23]              // 0xde // 222 // x24
         w27 = w28 + w27
         w26 = w21 + w26          // x26
         if (x23 == x20)          // x26
         b.eq 0x80303d4           // unlikely

    loc_0x08030424: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x803040c
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8030428 ()             // 0x8030428(0x20, 0x0, 0x0, 0x0)
         w28 = [x23 + 0x2558]     // 0xde // 222
         w8 = [x23 + 0x256c]      // 0xde // 222
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x23 + 0x256c] = w28
         w21 = w28 - w8
         0x8030440 ()             // 0x8030440(0x20, 0x0, 0x0, 0x0)
         w8 = [x19]               // 0xda // 218
         if !w8 jmp 0x8030410     // unlikely

    loc_0x0803044c: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221 // x19 // x19
         x2 = [x23 + 0x18]        // 0xde // 222 // x26
         w5 = (byte) [x22 + 0x7f0] // 0xdd // 221
         w6 = (byte) [x22 + 0x7e0] // 0xdd // 221 // x26
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w3 = w28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w4 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8030468 ()             // 0x8030468(0x0, 0x10, 0x1, 0x0)
         jmp 0x8030410

    loc_0x08030470: // orphan
         x11 = [x22 + 0x20]       // 0xdd // 221 // x24
         if !x11 jmp 0x8030494    // unlikely

    loc_0x08030478: // orphan
         x12 = 0x8030000
         x12 = [x12]              // 0xd3 // 211
         x11 = x11 - x12
         ldur x12,[x29,-0x28]     // " " // x24
         x11 = x12 ^ x11,lsl 6
         if ((x11 & 0xfffffffff000) == 0) // x26
         cset w11,eq

    loc_0x08030494: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x80303fc
         x12 = 0x8030000
         w12 = [x12]              // 0xd3 // 211
         x0 = 0x8030000
         x13 = x22 + 0x7d8
         x0 = x0 + 0              // int64_t arg1
         w6 = w27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w7 = w26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26
         [var_0h] = x13
         [var_0h_2] = w12
         [var_0h_3] = w11
         [var_0h_4] = w10
         [var_0h_5] = w9
         [sp] = w8
         0x80304c8 ()             // 0x80304c8(0x8030000, 0x0, 0x0, 0x0)
         x26 = 0x8030000
         if !x22 jmp 0x8030788    // likely

    loc_0x080304d4: // orphan
         x8 = 0x8030000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x8030788     // unlikely

    loc_0x080304e0: // orphan
         x8 = [x22 + 0x18]        // 0xdd // 221 // x19
         if !x8 jmp 0x8030788     // unlikely

    loc_0x080304e8: // orphan
         x8 = [x20]               // 0xdb // 219 // x24
         if (x20 == x8)           // x26
         b.eq 0x8030788           // unlikely

    loc_0x080304f4: // orphan
         0x80304f4 ()             // 0x80304f4(0x0, 0x0, 0x0, 0x0)
         x21 = [x20]              // 0xdb // 219 // x24
         if (x21 == x20)          // x26
         b.eq 0x8030778           // unlikely

    loc_0x08030504: // orphan
         x8 = x22 + 0x98
         [var_30h] = x8
         jmp 0x8030524

    loc_0x08030510: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x803075c
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8030514 ()             // 0x8030514(0x0, 0x0, 0x0, 0x0)

    loc_0x08030518: // orphan
         x21 = [x21]              // 0xdc // 220
         if (x21 == x20)          // x26
         b.eq 0x8030778           // unlikely

    loc_0x08030524: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x803050c
         x9 = [x22 + 0x18]        // 0xdd // 221 // x19
         if !x9 jmp 0x8030518     // unlikely

    loc_0x0803052c: // orphan
         x8 = [x21 + 0x18]        // 0xdc // 220 // x19
         x28 = [x9 + 0x40]        // 0xd0 // 208
         ubfx x10,x8,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x10 << 3
         xzr = [x28 + x9]         // 0xd0000000e3 // 893353197795
         x11 = [x28 + x9]         // 0xd0000000e3 // 893353197795
         x9 = [x26]               // 0xe1 // 225
         x12 = x8 >> 0x12
         x12 = x12 & 0xff8
         x11 = x11 & 0xfffffffff000
         x11 = x11 | x12
         x12 = x11 - x9
         x11 = [x12]              // 0xd3 // 211
         tbz w11,1,0x8030518      // unlikely

    loc_0x08030564: // orphan
         x13 = x11 & 3
         if (x13 == 1)            // x26
         b.eq 0x8030518           // unlikely

    loc_0x08030570: // orphan
         x10 = [x28 + x10,lsl 3]  // 0xd1000000e3 // 897648165091
         xzr = [x12]              // 0xd3 // 211
         x13 = [x12]              // 0xd3 // 211
         x8 = x8 >> 9
         x8 = x8 & 0xff8
         x13 = x13 & 0xfffffffff000
         x8 = x13 | x8
         x13 = x8 - x9
         b.eq 0x8030518           // unlikely

    loc_0x08030594: // orphan
         x8 = 0x8030000
         x12 = [x12]              // 0xd3 // 211
         x8 = [x8]                // 0xcf // 207
         ubfx x11,x11,0xc, 0x24   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 + x11,lsl 6
         x8 = x8 + 0x28
         b.eq 0x8030518           // unlikely

    loc_0x080305b0: // orphan
         [x29, -0x20] = (x13,2)
         xzr = [x13]              // 0xd4 // 212
         w8 = [x22 + 0x790]       // 0xdd // 221
         if (w8 == 1)             // x26 // x26
         b.lt 0x80306bc           // likely

    loc_0x080305c4: // orphan
         x23 = [var_30h]          // 0x4
         x10 = x10 & 0xfffffffff000
         x11 = x12 & 0xfffffffff000
         x26 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = x10 - x9
         x27 = x11 - x9
         jmp 0x80305f0

    loc_0x080305e0: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x8030618
         x26 = x26 + 1
         if (x26 == w8)
         x23 = x23 + 0x38
         b.ge 0x803061c           // likely

    loc_0x080305f0: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x80305dc
         x9 = [x23]               // 0xde // 222 // x24
         if (x9 == x28)           // x26
         b.ne 0x80305e0           // likely

    loc_0x080305fc: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221 // x19 // x19
         x0 = 0x8030000
         x0 = x0 + 0              // int64_t arg1
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8030610 ()             // 0x8030610(0x8030000, 0x10, 0x0, 0x0)
         w8 = [x22 + 0x790]       // 0xdd // 221
         jmp 0x80305e0

    loc_0x0803061c: // orphan
         if (w8 == 1)             // x26
         b.lt 0x80306bc           // unlikely

    loc_0x08030624: // orphan
         x23 = [var_30h]          // 0x4
         x26 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8030640

    loc_0x08030630: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x8030668
         x26 = x26 + 1
         if (x26 == w8)
         x23 = x23 + 0x38
         b.ge 0x803066c           // likely

    loc_0x08030640: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x803062c
         x9 = [x23]               // 0xde // 222 // x24
         if (x9 == x24)           // x26
         b.ne 0x8030630           // likely

    loc_0x0803064c: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221 // x19 // x19
         x0 = 0x8030000
         w2 = 0x1                 // x26
         x0 = x0 + 0              // int64_t arg1
         x3 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8030660 ()             // 0x8030660(0x8030000, 0x10, 0x1, 0x20)
         w8 = [x22 + 0x790]       // 0xdd // 221
         jmp 0x8030630

    loc_0x0803066c: // orphan
         if (w8 == 1)             // x26
         b.lt 0x80306bc           // unlikely

    loc_0x08030674: // orphan
         x23 = [var_30h]          // 0x4
         x24 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8030690

    loc_0x08030680: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x80306b8
         x24 = x24 + 1
         if (x24 == w8)           // x26
         x23 = x23 + 0x38
         b.ge 0x80306bc           // likely

    loc_0x08030690: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x803067c
         x9 = [x23]               // 0xde // 222 // x24
         if (x9 == x27)           // x26
         b.ne 0x8030680           // likely

    loc_0x0803069c: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221 // x19 // x19
         x0 = 0x8030000
         w2 = 0x2
         x0 = x0 + 0              // int64_t arg1
         x3 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80306b0 ()             // 0x80306b0(0x8030000, 0x10, 0x2, 0x0)
         w8 = [x22 + 0x790]       // 0xdd // 221
         jmp 0x8030680

    loc_0x080306bc: // orphan
         ldur x27,[x29,-0x18]
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80306c4 ()             // 0x80306c4(0x0, 0x0, 0x0, 0x0)
         ldur x8,[x29,-0x20]
         x26 = 0x8030000
         x23 = [x8]               // 0xcf // 207
         x8 = 0x1                 // x26
         x8 = 0x400
         if ((x23 & x8) == 0)     // x26
         b.eq 0x8030510           // unlikely

    loc_0x080306e4: // orphan
         ubfx x0,x23,0xc, 0x24    // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80306e8 ()             // 0x80306e8(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8030510     // likely

    loc_0x080306f0: // orphan
         x8 = [x21 + 0x48]        // 0xdc // 220
         x23 = x23 & 0xfffffffff000
         x8 = x8 & 0xfffffffff000
         if (x23 == x8)           // x26
         b.eq 0x8030760           // unlikely

    loc_0x08030704: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x8030774
         x9 = 0x8030000
         x8 = [x26]               // 0xe1 // 225
         x9 = [x9]                // 0xd0 // 208
         x24 = x23 - x8
         x8 = x9 - 1
         x8 = x24 >> x8
         tbnz w8,0,0x8030510      // unlikely

    loc_0x08030720: // orphan
         x0 = x23 >> 0xc          // int64_t arg1
         0x8030724 ()             // 0x8030724(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8030510     // likely

    loc_0x0803072c: // orphan
         x2 = [x21 + 0x18]        // 0xdc // 220 // x19
         w10 = 0xd420             // ' \xd4'
         x8 = x2 & 0xfff          // x19
         w8 = [x24 + x8]          // 0xcf000000df // 889058230495
         w9 = [x21 + 0x20]        // 0xdc // 220 // x24
         w9 = w10 | w9,lsl 5
         if (w8 == w9)
         b.ne 0x8030510           // likely

    loc_0x0803074c: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221 // x19 // x19
         x0 = 0x8030000
         x0 = x0 + 0              // int64_t arg1
         0x8030758 ()             // 0x8030758(0x8030000, 0x10, 0x0, 0x0)
         jmp 0x8030510

    loc_0x08030760: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221 // x19 // x19
         x2 = [x21 + 0x18]        // 0xdc // 220 // x19
         x0 = 0x8030000
         x0 = x0 + 0              // int64_t arg1
         0x8030770 ()             // 0x8030770(0x8030000, 0x10, 0x10, 0x0)
         jmp 0x8030704

    loc_0x08030778: // orphan
         0x8030778 ()             // 0x8030778(0x0, 0x0, 0x0, 0x0)
         w8 = [x19]               // 0xda // 218
         if (w8 == 2)             // x26
         b.ge 0x80307a0           // likely

    loc_0x08030788: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x80307b4
         x22 = [x22]              // 0xdd // 221
         x8 = 0x8030000
         x8 = x8 + 0
         if (x22 == x8)           // x26
         b.ne 0x80303a0           // likely

    loc_0x0803079c: // orphan
         jmp 0x80307b8

    loc_0x080307a0: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221 // x19 // x19
         w2 = [x22 + 0x7a8]       // 0xdd // 221
         x0 = 0x8030000
         x0 = x0 + 0              // int64_t arg1
         0x80307b0 ()             // 0x80307b0(0x8030000, 0x10, 0x2, 0x0)
         jmp 0x8030788

    loc_0x080307b8: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x803079c
         ldur x1,[x29,-0x10]      // int64_t arg_c0h
         x0 = 0x8030000
         x0 = x0 + 0              // int64_t arg1
         0x80307c4 ()             // 0x80307c4(0x8030000, 0x8030000, 0x0, 0x0)
         x8 = 0x8030000
         w8 = (byte) [x8]         // 0xcf // 207
         if (w8 == 1)             // x26
         b.ne 0x80307f4           // likely

    loc_0x080307d8: // orphan
         x8 = 0x8030000
         x1 = [x8]                // 0xcf // 207 // int64_t arg_c0h
         x2 = 0x8030000
         x2 = x2 + 0
         w0 = 0x20                // x24
         w3 = 0x9c4
         0x80307f0 ()             // 0x80307f0(0x20, 0xeb16027faa0003e1, 0x8030000, 0x9c4)

    loc_0x080307f4: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_c0h
         

    loc_0x0803082c: // orphan
         // CODE XREF from sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204 @ 0x8030850
         w8 = 0x1                 // x26
         [x20] = x19              // x24
         [x29 = w8
         jmp 0x8030370

}

/* ===== 0x08030b44 ===== */
int sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 (int esi, int edx) {
    loc_0x8030b44:
        sp = sp - 0x70
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x28,2)
        [sp, 0x30] = (x26,2)
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_10h
        if !x0 jmp 0x8030dbc // likely
            
    loc_0x8030dbc:
        w0 = 0x1      // x26
         // do {
    loc_0x8030dc0:
        // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030ccc
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_70h
        0x08030ddc
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8030b68
    loc_0x8030b7c:
        x8 = [x19 + 0x108] // 0xda // 218 // x24
        x8 = x8 & 0xf
        if x8 jmp 0x8030dc0 // unlikely
    loc_0x8030b88:
        x0 = 0x8030000
        x0 = x0 + 0   // int64_t arg1
        w20 = w1 & 0xffff // arg2
        0x8030b94 ()  // 0x8030b94(0x8030000, 0x0, 0x0, 0x0)
        x25 = 0x8030000
        x25 = x25 + 0
        x21 = [x25]   // 0xe0 // 224
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x21 == x25) // x26 // x26
        b.eq 0x8030cd0 // unlikely
            
    loc_0x8030cd0:
        x21 = 0x8030000
        x21 = x21 + 0
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8030cdc ()  // 0x8030cdc(0x8030000, 0x0, 0x0, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8030ce4 ()  // 0x8030ce4(0x8030000, 0x0, 0x0, 0x0)
        x26 = [x25]   // 0xe0 // 224
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x26 == x25)
        b.eq 0x8030dac // likely
            
    loc_0x8030dac:
        x0 = 0x8030000
        x0 = x0 + 0   // int64_t arg1
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x8030db8 ()  // " " // 0x8030db8(0x8030000, 0x0, 0x0, 0x0)
    loc_0x08030bb0: // orphan
             mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
             jmp 0x8030bcc

    loc_0x08030bb8: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030c2c
         jmp 0x8030e14

    loc_0x08030bbc: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030e28
         if x21 jmp 0x8030c40     // unlikely

    loc_0x08030bc0: // orphan
         x21 = [x21]              // 0xdc // 220
         if (x21 == x25)          // x26 // x26
         b.eq 0x8030cd0           // likely

    loc_0x08030bcc: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030bb4
         w9 = (byte) [x21 + 0x7f0] // 0xdc // 220
         if !w9 jmp 0x8030bc0     // likely

    loc_0x08030bd4: // orphan
         x9 = [x21 + 0x18]        // 0xdc // 220 // x19
         x10 = [x8 + 0x4d8]       // 0xcf // 207
         if (x9 == x10)
         b.ne 0x8030bc0           // likely

    loc_0x08030be4: // orphan
         x22 = [x21 + 0x798]      // 0xdc // 220
         x9 = x21 + 0x798
         jmp 0x8030bf4

    loc_0x08030bf0: // orphan
         x22 = [x22]              // 0xdd // 221

    loc_0x08030bf4: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030bec
         if (x22 == x9)           // x26
         b.eq 0x8030bc0           // unlikely

    loc_0x08030bfc: // orphan
         w10 = [x22 + 0x10]       // 0xdd // 221 // x19 // x19
         if w10 jmp 0x8030bf0     // likely

    loc_0x08030c04: // orphan
         w10 = [x22 + 0x20]       // 0xdd // 221 // x24 // x19
         if (w10 == w20)          // x26
         b.ne 0x8030bf0           // likely

    loc_0x08030c10: // orphan
         x10 = [x19 + 0x100]      // 0xda // 218
         x11 = [x22 + 0x18]       // 0xdd // 221 // x19
         x12 = x10 << 8
         x10 = x10 & x12,asr 8
         if (x10 == x11)          // x26 // x26
         b.ne 0x8030bf0           // likely

    loc_0x08030c28: // orphan
         x23 = x21 + 0x7b4
         jmp 0x8030bb8

    loc_0x08030c40: // orphan
         x0 = 0x8030000
         x0 = x0 + 0              // int64_t arg1
         0x8030c48 ()             // "e" // 0x8030c48(0x8030000, 0x0, 0x0, 0x0)
         jmp 0x8030de0

    loc_0x08030c64: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030dec
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x8030c70 ()             // 0x8030c70(0x0, 0x0, 0x10, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8030df0

    loc_0x08030c94: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030e00
         jmp 0x8030e04

    loc_0x08030cb0: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030e10
         x0 = x21 + 0x7c0         // int64_t arg1 // " "
         w1 = 0x3
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8030cc0 ()             // 0x8030cc0(0x7c0, 0x3, 0x0, 0x0)

    loc_0x08030cc4: // orphan
         w8 = ~w19
         w0 = w8 & 1              // x26
         jmp 0x8030dc0

    loc_0x08030cf8: // orphan
         x22 = 0x8030000
         x23 = 0x8030000
         x24 = 0x8030000
         x22 = x22 + 0
         x23 = x23 + 0
         x24 = x24 + 0
         mrs x27,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8030d24

    loc_0x08030d18: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030da8
         x26 = [x26]              // 0xe1 // 225
         if (x26 == x25)
         b.eq 0x8030dac           // likely

    loc_0x08030d24: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030d14
         x8 = [x26 + 0x18]        // 0xe1 // 225
         x9 = [x27 + 0x4d8]       // 0xe2 // 226
         if (x8 == x9)
         b.ne 0x8030d18           // likely

    loc_0x08030d34: // orphan
         x28 = [x26 + 0x798]      // 0xe1 // 225
         x8 = x26 + 0x798
         jmp 0x8030d44

    loc_0x08030d40: // orphan
         x28 = [x28]              // 0xe3

    loc_0x08030d44: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030d3c
         if (x28 == x8)           // x26
         b.eq 0x8030d18           // unlikely

    loc_0x08030d4c: // orphan
         w9 = [x28 + 0x10]        // 0xe3 // x19 // x19
         if w9 jmp 0x8030d40      // likely

    loc_0x08030d54: // orphan
         x9 = [x19 + 0x100]       // 0xda // 218
         x10 = [x28 + 0x18]       // 0xe3 // 227 // x19
         x11 = x9 << 8
         x9 = x9 & x11,asr 8
         if (x9 == x10)           // x26 // x26
         b.ne 0x8030d40           // likely

    loc_0x08030d6c: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2 // x24
         0x8030d74 ()             // 0x8030d74(0x0, 0x20, 0x0, 0x0)
         if !w0 jmp 0x8030d18     // likely

    loc_0x08030d7c: // orphan
         x1 = [x19 + 0x100]       // 0xda // 218 // int64_t arg2
         w3 = [x28 + 0x20]        // 0xe3 // 227 // x24 // x19
         w4 = (byte) [x26 + 0x7f0] // 0xe1 // 225
         w5 = (byte) [x26 + 0x7e0] // 0xe1 // 225
         w6 = (byte) [x26 + 0x7e1] // 0xe1 // 225
         w7 = [x26 + 0x10]        // 0xe1 // 225
         x8 = [x28 + 0x18]        // 0xe3 // 227 // x19
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         [sp] = x8
         0x8030da4 ()             // 0x8030da4(0x20, -1, 0x20, 0x10)
         jmp 0x8030d18

    loc_0x08030de0: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030c4c
         x8 = 0x8030000
         x8 = x8 + 0
         jmp 0x8030e2c

    loc_0x08030dec: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030e40
         jmp 0x8030c64

    loc_0x08030df0: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030c78
         x8 = 0x8030000
         x8 = x8 + 0
         w9 = 0x1                 // x26
         jmp 0x8030e44

    loc_0x08030e00: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030e58
         jmp 0x8030c94

    loc_0x08030e04: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030c94
         w9 = 0x1                 // x26
         jmp 0x8030e5c

    loc_0x08030e0c: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030e74
         if w8 jmp 0x8030cc4      // likely

    loc_0x08030e10: // orphan
         jmp 0x8030cb0

    loc_0x08030e14: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030bb8
         prfm pstl1strm,[x23]

    loc_0x08030e18: // orphan
         ldxr w9,[x23]            // x24 // x19
         w9 = w9 + 1
         stxr w10,w9,[x23]
         if w10 jmp 0x8030e18     // unlikely

    loc_0x08030e28: // orphan
         jmp 0x8030bbc

    loc_0x08030e2c: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030de8
         prfm pstl1strm,[x8]

    loc_0x08030e30: // orphan
         ldxr w9,[x8]
         w9 = w9 + 1              // x26
         stxr w10,w9,[x8]
         if w10 jmp 0x8030e30     // unlikely

    loc_0x08030e40: // orphan
         jmp 0x8030dec

    loc_0x08030e44: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030dfc
         prfm pstl1strm,[x8]

    loc_0x08030e48: // orphan
         ldxr w10,[x8]
         w10 = w10 - w9
         stxr w11,w10,[x8]
         if w11 jmp 0x8030e48     // unlikely

    loc_0x08030e58: // orphan
         jmp 0x8030e00

    loc_0x08030e5c: // orphan
         // CODE XREF from sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204 @ 0x8030e08
         prfm pstl1strm,[x23]

    loc_0x08030e60: // orphan
         ldxr w8,[x23]            // x24 // x19
         w8 = w8 - w9
         stlxr w10,w8,[x23]
         if w10 jmp 0x8030e60     // unlikely

    loc_0x08030e70: // orphan
         dmb ish
         jmp 0x8030e0c

}

/* ===== 0x08049ba8 ===== */
int sym.brk_switch_to_hook_0e30e06c654f6bff65c295eded426204 (int esi, int edx) {
    loc_0x8049ba8:
        [sp, -0x10]! = (x29,2) // " "
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        jmp 0x8049bf8
         // do {
    loc_0x8049bf8:
        // CODE XREF from sym.brk_switch_to_hook_0e30e06c654f6bff65c295eded426204 @ 0x8049bb4
        x8 = 0x8049000
        x8 = x8 + 0
        jmp 0x8049c1c
         // } while (?);
        }
        return eax;
    loc_0x08049bcc: // orphan
             // CODE XREF from sym.brk_switch_to_hook_0e30e06c654f6bff65c295eded426204 @ 0x8049c04
             0x8049bcc ()             // 0x8049bcc(0x0, 0x0, 0x0, 0x0)
             jmp 0x8049c08

    loc_0x08049bec: // orphan
         // CODE XREF from sym.brk_switch_to_hook_0e30e06c654f6bff65c295eded426204 @ 0x8049c18
         w0 = 0x1f7
         (x29, 2) = 3             // x19 // x9
                                  // x9

    loc_0x08049c04: // orphan
         // CODE XREF from sym.brk_switch_to_hook_0e30e06c654f6bff65c295eded426204 @ 0x8049c30
         jmp 0x8049bcc

    loc_0x08049c08: // orphan
         // CODE XREF from sym.brk_switch_to_hook_0e30e06c654f6bff65c295eded426204 @ 0x8049bd0
         x8 = 0x8049000
         x8 = x8 + 0
         w9 = 0x1                 // x26
         jmp 0x8049c34

    loc_0x08049c18: // orphan
         // CODE XREF from sym.brk_switch_to_hook_0e30e06c654f6bff65c295eded426204 @ 0x8049c48
         jmp 0x8049bec

    loc_0x08049c1c: // orphan
         // CODE XREF from sym.brk_switch_to_hook_0e30e06c654f6bff65c295eded426204 @ 0x8049c00
         prfm pstl1strm,[x8]

    loc_0x08049c20: // orphan
         ldxr w9,[x8]
         w9 = w9 + 1              // x26
         stxr w10,w9,[x8]
         if w10 jmp 0x8049c20     // unlikely

    loc_0x08049c30: // orphan
         jmp 0x8049c04

    loc_0x08049c34: // orphan
         // CODE XREF from sym.brk_switch_to_hook_0e30e06c654f6bff65c295eded426204 @ 0x8049c14
         prfm pstl1strm,[x8]

    loc_0x08049c38: // orphan
         ldxr w10,[x8]
         w10 = w10 - w9
         stxr w11,w10,[x8]
         if w11 jmp 0x8049c38     // unlikely

    loc_0x08049c48: // orphan
         jmp 0x8049c18

}

/* ===== 0x0804a3a0 ===== */
int sym.brk_mm_fault_ret_0e30e06c654f6bff65c295eded426204 (int esi, int edx) {
    loc_0x804a3a0:
        [sp, -0x30]! = (x29,2) // " "
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x0 + 0x30 // arg1
        b.eq 0x804a510 // unlikely
            
    loc_0x804a510:
        (x20, 2) = 3
        x21 = [var_10h] // 0x4
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        (x29, 2) = 3  // x19 // x9
        // x9
         // } else {
    loc_0x804a3b8:
        x19 = [x8]    // 0xcf // 207
        [x8] = xzr
        if !x19 jmp 0x804a510 // likely
        }
        return eax;
    loc_0x804a3c4:
        x8 = 0x804a000
        w8 = (byte) [x8] // 0xcf // 207
        if (w8 == 1)  // x26
        b.ne 0x804a3f8 // likely
            
    loc_0x804a3f8:
        x20 = [x0 + 0x38] // 0xc7 // 199 // arg1 // x26
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26
        0x804a404 ()  // 0x804a404(0x10, 0x1, 0x0, 0x0)
        if !w0 jmp 0x804a4dc // unlikely
            
    loc_0x804a4dc:
        x8 = x19 + 0x7bc
        jmp 0x804a570
         // do {
    loc_0x804a570:
        // CODE XREF from sym.brk_mm_fault_ret_0e30e06c654f6bff65c295eded426204 @ 0x804a4e0
        w10 = 0x1     // x26
        jmp 0x804a59c
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0804a438: // orphan
             // CODE XREF from sym.brk_mm_fault_ret_0e30e06c654f6bff65c295eded426204 @ 0x804a55c
             x8 = x20 >> 0xc
             dsb ishst
             x8 = x8 & 0xffffffffff0
             tlbi vaae1is,x8
             x9 = x8 | 1              // x26
             tlbi vaae1is,x9
             x9 = x8 | 2
             tlbi vaae1is,x9
             x9 = x8 | 3
             tlbi vaae1is,x9
             x9 = x8 | 4
             tlbi vaae1is,x9
             w9 = 0x5
             x9 = x8 | x9
             tlbi vaae1is,x9
             x9 = x8 | 6
             tlbi vaae1is,x9
             x9 = x8 | 7
             tlbi vaae1is,x9
             x9 = x8 | 8
             tlbi vaae1is,x9
             w9 = 0x9
             x9 = x8 | x9
             tlbi vaae1is,x9
             w9 = 0xa
             x9 = x8 | x9
             tlbi vaae1is,x9
             w9 = 0xb
             x9 = x8 | x9
             tlbi vaae1is,x9
             x9 = x8 | 0xc
             tlbi vaae1is,x9
             w9 = 0xd
             x9 = x8 | x9
             tlbi vaae1is,x9
             x9 = x8 | 0xe
             tlbi vaae1is,x9
             x8 = x8 | 0xf
             tlbi vaae1is,x8
             dsb ish
             

    loc_0x0804a4fc: // orphan
         // CODE XREFS from sym.brk_mm_fault_ret_0e30e06c654f6bff65c295eded426204 @ 0x804a56c, 0x804a57c
         x0 = x19 + 0x7c0         // int64_t arg1
         w1 = 0x3
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x804a50c ()             // 0x804a50c(0x7d0, 0x3, 0x0, 0x0)

    loc_0x0804a524: // orphan
         w1 = [x19 + 0x10]        // 0xda // 218 // x24
         x8 = [x19 + 0x798]       // 0xda // 218
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x8 jmp 0x804a544     // unlikely

    loc_0x0804a534: // orphan
         x9 = x19 + 0x798
         if (x9 == x8)            // x26
         b.eq 0x804a544           // unlikely

    loc_0x0804a540: // orphan
         x3 = [x8 + 0x18]         // 0xcf // 207

    loc_0x0804a544: // orphan
         w4 = [x19 + 0x7a8]       // 0xda // 218
         x0 = 0x804a000
         x0 = x0 + 0              // int64_t arg1
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         w5 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x804a558 ()             // 0x804a558(0x804a000, 0x0, 0x20, 0x0)
         jmp 0x804a438

    loc_0x0804a560: // orphan
         // CODE XREF from sym.brk_mm_fault_ret_0e30e06c654f6bff65c295eded426204 @ 0x804a3d8
         w10 = 0x1                // x26
         jmp 0x804a580

    loc_0x0804a568: // orphan
         // CODE XREF from sym.brk_mm_fault_ret_0e30e06c654f6bff65c295eded426204 @ 0x804a598
         if w9 jmp 0x804a510      // likely

    loc_0x0804a56c: // orphan
         jmp 0x804a4fc

    loc_0x0804a578: // orphan
         // CODE XREF from sym.brk_mm_fault_ret_0e30e06c654f6bff65c295eded426204 @ 0x804a5b4
         if w9 jmp 0x804a510      // likely

    loc_0x0804a57c: // orphan
         jmp 0x804a4fc

    loc_0x0804a580: // orphan
         // CODE XREF from sym.brk_mm_fault_ret_0e30e06c654f6bff65c295eded426204 @ 0x804a564
         prfm pstl1strm,[x8]

    loc_0x0804a584: // orphan
         ldxr w9,[x8]
         w9 = w9 - w10
         stlxr w11,w9,[x8]
         if w11 jmp 0x804a584     // unlikely

    loc_0x0804a594: // orphan
         dmb ish
         jmp 0x804a568

    loc_0x0804a59c: // orphan
         // CODE XREF from sym.brk_mm_fault_ret_0e30e06c654f6bff65c295eded426204 @ 0x804a574
         prfm pstl1strm,[x8]

    loc_0x0804a5a0: // orphan
         ldxr w9,[x8]
         w9 = w9 - w10
         stlxr w11,w9,[x8]
         if w11 jmp 0x804a5a0     // unlikely

    loc_0x0804a5b0: // orphan
         dmb ish
         jmp 0x804a578

}

/* ===== 0x0804a5b8 ===== */
int sym.brk_mm_fault_entry_0e30e06c654f6bff65c295eded426204 (int esi, int edx) {
    loc_0x804a5b8:
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x0 != 0x30) // arg1 // x26
        b.eq 0x804a630 // unlikely
            
    loc_0x804a630:
        // CODE XREF from sym.brk_mm_fault_entry_0e30e06c654f6bff65c295eded426204 @ 0x804a694
        (x20, 2) = 3
        (x22, 2) = 3
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        (x29, 2) = 3
        0x0804a640
         // } else {
    loc_0x804a5d0:
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x0, 0x30] = (xzr,2) // arg1
        if !x1 jmp 0x804a630 // likely
        }
        return eax;
    loc_0x804a5dc:
        x8 = [x1]     // 0xc8 // 200 // arg2
        if !x8 jmp 0x804a630 // unlikely
    loc_0x804a5e4:
        x22 = [x8 + 0x40] // 0xcf // 207
        if !x22 jmp 0x804a630 // unlikely
    loc_0x804a5ec:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x4d8] // 0xcf // 207
        if (x22 == x8)
        b.ne 0x804a630 // likely
    loc_0x804a5fc:
        x20 = [x1 + 8] // 0xc8 // 200 // arg2
        x0 = 0x804a000
        x0 = x0 + 0   // int64_t arg1
        0x804a608 ()  // 0x804a608(0x804a000, 0x0, 0x0, 0x0)
        x8 = 0x804a000
        x8 = x8 + 0
        x21 = [x8]    // 0xcf // 207
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x21 == x8) // x26
        b.ne 0x804a650 // likely
            
    loc_0x804a650:
        w9 = (byte) [x21 + 0x7f0] // 0xdc // 220
        if !w9 jmp 0x804a644 // unlikely
    loc_0x804a644:
        x21 = [x21]   // 0xdc // 220
        if (x21 == x8) // x26 // x26
        b.eq 0x804a624 // unlikely
         // }
        }
        return eax;
    loc_0x0804a658: // orphan
             w9 = (byte) [x21 + 0x7e0] // 0xdc // 220
             if w9 jmp 0x804a644      // likely

    loc_0x0804a660: // orphan
         x9 = [x21 + 0x18]        // 0xdc // 220
         if (x9 == x22)           // x26 // x26
         b.ne 0x804a644           // likely

    loc_0x0804a66c: // orphan
         x8 = x21 + 0x7bc
         jmp 0x804a698

    loc_0x0804a680: // orphan
         // CODE XREF from sym.brk_mm_fault_entry_0e30e06c654f6bff65c295eded426204 @ 0x804a69c
         x0 = 0x804a000
         x0 = x0 + 0              // int64_t arg1
         0x804a688 ()             // 0x804a688(0x804a000, 0x0, 0x0, 0x0)
         if !x21 jmp 0x804a630    // likely

    loc_0x0804a690: // orphan
         [x19, 0x30] = (x21,2)
         jmp 0x804a630

    loc_0x0804a698: // orphan
         // CODE XREF from sym.brk_mm_fault_entry_0e30e06c654f6bff65c295eded426204 @ 0x804a670
         jmp 0x804a6a0

    loc_0x0804a69c: // orphan
         // CODE XREF from sym.brk_mm_fault_entry_0e30e06c654f6bff65c295eded426204 @ 0x804a6b4
         jmp 0x804a680

    loc_0x0804a6a0: // orphan
         // CODE XREF from sym.brk_mm_fault_entry_0e30e06c654f6bff65c295eded426204 @ 0x804a698
         prfm pstl1strm,[x8]

    loc_0x0804a6a4: // orphan
         ldxr w9,[x8]
         w9 = w9 + 1
         stxr w10,w9,[x8]
         if w10 jmp 0x804a6a4     // unlikely

    loc_0x0804a6b4: // orphan
         jmp 0x804a69c

}

/* ===== 0x0804a7e0 ===== */
int sym.brk_restore_ttbr0_cb_0e30e06c654f6bff65c295eded426204 (int esi, int edx) {
    loc_0x804a7e0:
        sp = sp - 0x50
        [sp, 0x20] = (x29,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = var_20h
        if !x0 jmp 0x804a8f0 // likely
            
    loc_0x804a8f0:
        // CODE XREFS from sym.brk_restore_ttbr0_cb_0e30e06c654f6bff65c295eded426204 @ 0x804a8d0, 0x804a938, 0x804a988
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        sp = arg_50h
        0x0804a900
         // } else {
    loc_0x804a7f8:
        mrs x19,ttbr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = [x0 + 0x20] // 0xc7 // 199 // arg1 // x24
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x11 = 0x804a000
        if !x10 jmp 0x804a824 // unlikely
        }
        return eax;
    loc_0x804a80c:
        x8 = [x11]    // 0xd2 // 210
        x8 = x10 - x8
        x8 = x19 ^ x8,lsl 6
        if ((x8 & 0xfffffffff000) == 0) // x26
        cset w8,eq
        jmp 0x804a828
         // do {
    loc_0x804a828:
        // CODE XREF from sym.brk_restore_ttbr0_cb_0e30e06c654f6bff65c295eded426204 @ 0x804a820
        jmp 0x804a9e4
         // } while (?);
        }
        return eax;
    loc_0x0804a824: // orphan
             w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x0804a834: // orphan
         // CODE XREF from sym.brk_restore_ttbr0_cb_0e30e06c654f6bff65c295eded426204 @ 0x804a9f4
         mrs x9,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = [x9 + 0x10]        // 0xd0 // 208
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if !x10 jmp 0x804a858    // likely

    loc_0x0804a844: // orphan
         x9 = [x11]               // 0xd2 // 210
         x9 = x10 - x9
         x9 = x12 ^ x9,lsl 6
         if ((x9 & 0xfffffffff000) == 0) // x26
         cset w9,eq

    loc_0x0804a858: // orphan
         w10 = w8 | w9
         tbz w10,0,0x804a8d4      // likely

    loc_0x0804a860: // orphan
         mrs x21,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x6 = [x21 + 0x4d8]       // 0xdc // 220
         if x6 jmp 0x804a874      // likely

    loc_0x0804a86c: // orphan
         x6 = [x21 + 0x4e0]       // 0xdc // 220
         if !x6 jmp 0x804a904     // unlikely

    loc_0x0804a874: // orphan
         x10 = [x20 + 0x18]       // 0xdb // 219
         if (x6 == x10)           // x26 // x26
         b.eq 0x804a904           // likely

    loc_0x0804a880: // orphan
         x11 = 0x804a000
         x11 = [x11]              // 0xd2 // 210
         x10 = [x6 + 0x40]        // 0xcd // 205
         x12 = 0x804a000
         x13 = 0x804a000
         x12 = [x12]              // 0xd3 // 211
         x13 = [x13]              // 0xd4 // 212
         x11 = x11 - 1
         x11 = x10 >> x11
         if ((x11 & 1) == 0)      // x26
         csneg x11,x12,x13, eq
         x22 = x11 + x10
         if !x22 jmp 0x804a90c    // likely

    loc_0x0804a8b4: // orphan
         x10 = 0x804a000
         w10 = [x10]              // 0xd1 // 209
         if w10 jmp 0x804a98c     // likely

    loc_0x0804a8c0: // orphan
         // CODE XREF from sym.brk_restore_ttbr0_cb_0e30e06c654f6bff65c295eded426204 @ 0x804a9e0
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_50h
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x804a8cc ()             // 0x804a8cc(0x20, 0x0, 0x0, 0x0)
         jmp 0x804a8f0

    loc_0x0804a8d4: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // x24
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x804a8dc ()             // 0x804a8dc(0x20, 0x0, 0x0, 0x0)
         x8 = 0x804a000
         w8 = [x8]                // 0xcf // 207
         if (w8 == 2)             // x26
         b.ge 0x804a93c           // likely

    loc_0x0804a904: // orphan
         x22 = [x20 + 0x80]       // 0xdb // 219
         if x22 jmp 0x804a8b4     // likely

    loc_0x0804a90c: // orphan
         x9 = 0x804a000
         x9 = x9 + 0
         w1 = [x20 + 0x10]        // 0xdb // 219
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = [x21 + 0x588]       // 0xdc // 220
         w2 = [x8 + x9]           // 0xd0000000cf // 893353197775
         x5 = [x20 + 0x18]        // 0xdb // 219
         x0 = 0x804a000
         x0 = x0 + 0              // int64_t arg1
         x4 = x6                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x804a934 ()             // 0x804a934(0x804a000, 0x0, -1, -1)
         jmp 0x804a8f0

    loc_0x0804a93c: // orphan
         x9 = 0x804a000
         x9 = x9 + 0
         w1 = [x20 + 0x10]        // 0xdb // 219
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = [x8 + x9]           // 0xd0000000cf // 893353197775
         jmp 0x804a9f8

    loc_0x0804a95c: // orphan
         // CODE XREF from sym.brk_restore_ttbr0_cb_0e30e06c654f6bff65c295eded426204 @ 0x804aa08
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x4 = [x8 + 0x10]         // 0xcf // 207

    loc_0x0804a964: // orphan
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x6 = [x8 + 0x4d8]        // 0xcf // 207
         w5 = [x8 + 0x588]        // 0xcf // 207
         if x6 jmp 0x804a978      // likely

    loc_0x0804a974: // orphan
         x6 = [x8 + 0x4e0]        // 0xcf // 207

    loc_0x0804a978: // orphan
         x0 = 0x804a000
         x0 = x0 + 0              // int64_t arg1
         x3 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x804a984 ()             // 0x804a984(0x804a000, 0x0, 0x0, 0x10)
         jmp 0x804a8f0

    loc_0x0804a98c: // orphan
         w1 = [x20 + 0x10]        // 0xdb // 219
         x10 = [x20 + 0x798]      // 0xdb // 219
         x2 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x10 jmp 0x804a9ac    // unlikely

    loc_0x0804a99c: // orphan
         x11 = x20 + 0x798
         if (x11 == x10)          // x26
         b.eq 0x804a9ac           // unlikely

    loc_0x0804a9a8: // orphan
         x2 = [x10 + 0x18]        // 0xd1 // 209

    loc_0x0804a9ac: // orphan
         x11 = 0x804a000
         x11 = x11 + 0
         w3 = [x20 + 0x7a8]       // 0xdb // 219
         mrs x10,tpidr_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w4 = [x10 + x11]         // 0xd2000000d1 // 901943132369
         w5 = [x21 + 0x588]       // 0xdc // 220
         x0 = 0x804a000
         x0 = x0 + 0              // int64_t arg1
         x7 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h] = x19
         [var_0h_2] = w9
         [sp] = w8
         0x804a9dc ()             // 0x804a9dc(0x804a000, 0x0, 0x0, -1)
         jmp 0x804a8c0

    loc_0x0804a9e4: // orphan
         // CODE XREF from sym.brk_restore_ttbr0_cb_0e30e06c654f6bff65c295eded426204 @ 0x804a828
         x9 = 0x804a000
         x12 = [x9]               // 0xd0 // 208
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbnz w12,4,0x804a858     // unlikely

    loc_0x0804a9f4: // orphan
         jmp 0x804a834

    loc_0x0804a9f8: // orphan
         // CODE XREF from sym.brk_restore_ttbr0_cb_0e30e06c654f6bff65c295eded426204 @ 0x804a950
         x8 = 0x804a000
         x8 = [x8]                // 0xcf // 207
         x4 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbnz w8,4,0x804a964      // unlikely

    loc_0x0804aa08: // orphan
         jmp 0x804a95c

}

/* ===== 0x0804ece4 ===== */
int sym.arm64_decode_sme (int esi, int edx) {
    loc_0x804ece4:
        w8 = 0x9e00
        w8 = w0 & w8  // arg1
        w9 = 0x8000   // pstate
        if (w8 == w9) // x26
        b.ne 0x804ed0c // likely
            
    loc_0x804ed0c:
        w0 = 0x4
        // lr
         // } else {
    loc_0x804ecf8:
        x8 = 0x7
        x8 = 0x31     // '1'
        w0 = 0x1      // x26
        [x1 + 0x10] = x8 // arg2 // x19
        // lr
        }
        return eax;
}

/* ===== 0x0804eca0 ===== */
int sym.arm64_decode_sve (int esi, int edx) {
    loc_0x804eca0:
        w8 = w0 & 0x1e000000 // arg1
        w9 = 0x400
        if (w8 == w9) // x26
        b.ne 0x804ecdc // likely
            
    loc_0x804ecdc:
        w0 = 0x4
        // lr
         // } else {
    loc_0x804ecb0:
        x8 = 0x6
        x8 = 0x30     // '0'
        w9 = w0 & 0x1f // arg1
        ubfx w10,w0,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        ubfx w11,w0,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = 0x1      // x26
        [x1 + 0x10] = x8 // arg2 // x19
        [x1 + 0x20] = (byte) w9 // arg2 // x24
        [x1 + 0x21] = (byte) w10 // arg2
        [x1 + 0x22] = (byte) w11 // arg2
        // lr
        }
        return eax;
}

/* ===== 0x0804b7d0 ===== */
int sym.arm64_decode_data_processing_register (int esi, int edx) {
    loc_0x804b7d0:
        w9 = 0x1f20   // ' \x1f'
        w9 = w0 & w9  // arg1
        w10 = 0xb00
        w8 = 0x2
        if (w9 == w10) // x26
        [x1 + 0x10] = w8 // arg2 // x19
        b.eq 0x804b8ac // unlikely
            
    loc_0x804b8ac:
        // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x804b7e8, 0x804b7f8
        w10 = w0 & 0x1f // arg1
        if ((w0 & 0x200000) == 0) // arg1 // x26
        w8 = 0x1a
        [x1 + 0x20] = (byte) w10 // arg2 // x24
        ubfx w10,w0,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = 0x1      // x26
        [x1 + 0x21] = (byte) w10 // arg2
        ubfx w10,w0,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        cinc w8,w8,ne
        if ((w0 & 0x40000000) == 0) // arg1 // x26
        [x1 + 0x23] = (byte) w10 // arg2
        ubfx w10,w0,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        cinc w9,w9,ne
        [x1 + 0x22] = (byte) w10 // arg2
        w10 = 0x40    // '@'
        [x1, 0x14] = (w8,2) // arg2
        w8 = 0x20     // x24
        if (w0 == 0)  // arg1 // x26 // x26
        csel w8,w8,w10, ge // x24
        [x1 + 0x27] = (byte) w8 // arg2
        tbnz w0,0x1f,0x804b97c // unlikely
            
    loc_0x804b97c:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804b8fc
        w8 = [x1 + 0x1c] // 0xc8 // 200 // arg2
        w8 = w8 | 1
        [x1 + 0x1c] = w8 // arg2
        tbz w0,0x15,0x804b904 // likely
            
    loc_0x804b904:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804b988
        ubfx w8,w0,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        ubfx w9,w0,0xa, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w8 == 3)  // x26
        [x1 + 0x40] = (byte) w8 // arg2
        [x1 + 0x41] = (byte) w9 // arg2
        b.ne 0x804b9c0 // likely
            
    loc_0x804b9c0:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804b918
        tbz w0,0xf,0x804b9a4 // likely
            
    loc_0x804b9a4:
        // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x804b9c0, 0x804b9c8
        tbz w0,0x1d,0x804b9b4 // likely
            
    loc_0x804b9b4:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804b9a4
        tbnz w0,0x1e,0x804bcec // unlikely
            
    loc_0x804bcec:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804b9b4
        w9 = [x1 + 0x1c] // 0xc8 // 200 // arg2
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w9 | 4
        [x1 + 0x1c] = w9 // arg2
        // lr
         // } else {
    loc_0x804b9b8:
        // XREFS: CODE 0x0804b890  CODE 0x0804bce8  CODE 0x0804be38
        // XREFS: CODE 0x0804be78  CODE 0x0804be7c  CODE 0x0804bf40
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // lr
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x804b7ec
    loc_0x804b7fc:
        w8 = w0 & 0x1f000000 // arg1
        w9 = 0xa00
        if (w8 == w9) // x26
        b.ne 0x804b924 // likely
            
    loc_0x804b924:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804b808
        w8 = w0 & 0x3fe00000 // arg1
        w9 = 0x1a80   // '\x80\x1a'
        if (w8 == w9) // x26
        b.ne 0x804b9cc // likely
            
    loc_0x804b9cc:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804b930
        w8 = w0 & 0x7fe00000 // arg1
        w9 = 0x1ac0   // '\xc0\x1a'
        if (w8 == w9) // x26
        b.ne 0x804ba60 // likely
            
    loc_0x804ba60:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804b9d8
        w8 = w0 & 0x7f000000 // arg1
        w9 = 0x1b00
        if (w8 == w9) // x26
        b.ne 0x804bb2c // likely
            
    loc_0x804bb2c:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804ba6c
        w8 = 0xfc00
        w8 = 0x1fe0   // '\xe0\x1f'
        w8 = w0 & w8  // arg1
        w9 = 0x1a00
        if (w8 == w9) // x26
        b.ne 0x804bbc8 // likely
            
    loc_0x804bbc8:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bb40
        w8 = 0x410
        w8 = 0x3fe0   // '\xe0?'
        w8 = w0 & w8  // arg1
        w9 = 0x3a40   // '@:'
        if (w8 == w9) // x26
        b.ne 0x804bc64 // likely
            
    loc_0x804bc64:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bbdc
        w8 = 0x6b04
        w8 = 0x3
        if (w8 == w0) // arg1 // x26
        b.ne 0x804bd8c // likely
            
    loc_0x804bd8c:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bc70
        w9 = 0xa3f    // '?\n'
        w8 = w0 | 0x400 // arg1
        w9 = 0x6d6
        if (w9 == w8) // x26
        b.ne 0x804be88 // likely
            
    loc_0x804be88:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bd9c
        w8 = w0 & 0x7fff0000 // arg1
        w9 = 0x5ac0   // '\xc0Z'
        if (w8 == w9) // x26
        b.ne 0x804bf24 // likely
            
    loc_0x804bf24:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804be94
        [x1 + 0x14] = wzr // arg2
        jmp 0x804bf18
         // do {
    loc_0x804bf18:
        // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x804bdd4, 0x804bde4, 0x804bf28
        w8 = 0x1      // x26
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26
        // lr
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x804b80c
    loc_0x804b854:
        w8 = [x1 + 0x1c] // 0xc8 // 200 // arg2
        w8 = w8 | 1
        [x1 + 0x1c] = w8 // arg2
         // do {
    loc_0x804b860:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804b850
        ubfx w8,w0,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        ubfx w9,w0,0xa, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x40] = (byte) w8 // arg2
        [x1 + 0x41] = (byte) w9 // arg2
        tbz w0,0xf,0x804b878 // likely
         // } while (?);
        }
        return eax;
    loc_0x804b874:
        tbz w0,0x1f,0x804be80 // likely
            
    loc_0x804be80:
        // XREFS: CODE 0x0804b874  CODE 0x0804b974  CODE 0x0804b9a0
        // XREFS: CODE 0x0804b9c4  CODE 0x0804bb00  CODE 0x0804bd00
        // XREFS: CODE 0x0804bd44  CODE 0x0804be3c  CODE 0x0804bf3c
        w0 = 0x3
        // lr
         // } else {
    loc_0x804b878:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804b870
        tbz w0,0x15,0x804b888 // likely
        }
        return eax;
    loc_0x804b87c:
        w8 = [x1 + 0x1c] // 0xc8 // 200 // arg2
        w8 = w8 | 0x800
        [x1 + 0x1c] = w8 // arg2
         // do {
    loc_0x804b888:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804b878
        w8 = ~w0
        if ((w8 & 0x60000000) == 0) // x26 // x26
        b.ne 0x804b9b8 // likely
         // } while (?);
        }
        return eax;
    loc_0x804b894:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bc4c
        w9 = [x1 + 0x1c] // 0xc8 // 200 // arg2
         // do {
    loc_0x804b898:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bc60
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w9 | 2
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x1 + 0x1c] = w9 // arg2
        // lr
         // } while (?);
        }
        return eax;
    loc_0x0804b974: // orphan
             tbnz w0,0xb,0x804be80    // unlikely

    loc_0x0804b978: // orphan
         jmp 0x804bb04

    loc_0x0804b9c8: // orphan
         jmp 0x804b9a4

    loc_0x0804ba1c: // orphan
         w8 = [x1 + 0x1c]         // 0xc8 // 200 // arg2
         w8 = w8 | 1
         [x1 + 0x1c] = w8         // arg2

    loc_0x0804ba28: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804ba18
         ubfx w8,w0,0xa, 6        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = w8 - 2
         if (w8 == 0x19)          // x26 // x26
         b.hi 0x804bf14           // likely

    loc_0x0804ba38: // orphan
         x10 = 0x804b000
         x10 = x10 + 0
         x11 = 0x804ba58
         w12 = (word) [x10 + x8,lsl 1] // 0xcf000000d1 // 889058230481
         x11 = x11 + x12,lsl 2
         w9 = 0x22                // '\"'
         w8 = 0x1c
         br x11

    loc_0x0804baac: // orphan
         w8 = [x1 + 0x1c]         // 0xc8 // 200 // arg2
         w8 = w8 | 1
         [x1 + 0x1c] = w8         // arg2

    loc_0x0804bab8: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804baa8
         if (w9 == 6)             // x26
         w8 = 0x3
         b.hi 0x804b91c           // likely

    loc_0x0804bac4: // orphan
         x11 = 0x804b000
         w9 = w9                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // x9
         x11 = x11 + 0
         x12 = 0x804b91c
         w13 = (word) [x11 + x9,lsl 1] // 0xd0000000d2 // 893353197778
         x12 = x12 + x13,lsl 2
         ubfx w9,w0,0xf, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         br x12

    loc_0x0804baf4: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804b970
         w8 = [x1 + 0x1c]         // 0xc8 // 200 // arg2
         w8 = w8 | 1
         [x1 + 0x1c] = w8         // arg2
         tbnz w0,0xb,0x804be80    // unlikely

    loc_0x0804bb04: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804b978
         w8 = w0 >> 0x1c          // arg1
         w8 = w8 & 2
         ubfx w9,w0,0xc, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfxil w8,w0,0xa, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x44] = (byte) w9  // arg2
         if !w8 jmp 0x804bba8     // likely

    loc_0x0804bb1c: // orphan
         if (w8 == 1)             // x26
         b.ne 0x804bbb0           // likely

    loc_0x0804bb24: // orphan
         w9 = 0x13
         jmp 0x804bbbc

    loc_0x0804bb84: // orphan
         w8 = [x1 + 0x1c]         // 0xc8 // 200 // arg2
         w8 = w8 | 1
         [x1 + 0x1c] = w8         // arg2

    loc_0x0804bb90: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bb80
         ubfx w8,w0,0x1d, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if !w8 jmp 0x804bcc0     // likely

    loc_0x0804bb98: // orphan
         if (w8 == 1)             // x26
         b.ne 0x804bcc8           // likely

    loc_0x0804bba0: // orphan
         w8 = 0x17
         jmp 0x804bcd4

    loc_0x0804bba8: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bb18
         w9 = 0x12
         jmp 0x804bbbc

    loc_0x0804bbb0: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bb20
         if (w8 == 2)             // x26 // x26
         w8 = 0x14
         cinc w9,w8,ne

    loc_0x0804bbbc: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x804bb28, 0x804bbac
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x18] = w9         // arg2
                                  // lr

    loc_0x0804bc20: // orphan
         w9 = [x1 + 0x1c]         // 0xc8 // 200 // arg2
         w9 = w9 | 1
         [x1 + 0x1c] = w9         // arg2

    loc_0x0804bc2c: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bc1c
         if ((w0 & 0x40000000) == 0) // arg1 // x26
         w9 = 0x1a
         ubfx w10,w0,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = w0 & 0xf           // arg1
         cinc w9,w9,eq
         [x1 + 0x44] = (byte) w10 // arg2
         [x1 + 0x18] = w9         // arg2
         [x1 + 0x45] = (byte) w11 // arg2
         tbz w0,0xb,0x804b894     // likely

    loc_0x0804bc50: // orphan
         w9 = [x1 + 0x1c]         // 0xc8 // 200 // arg2
         w8 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x28] = x8         // arg2
         w9 = w9 | 0x2000
         jmp 0x804b898

    loc_0x0804bcc0: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bb94
         w8 = 0x16
         jmp 0x804bcd4

    loc_0x0804bcc8: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bb9c
         if (w8 == 2)             // x26 // x26
         w8 = 0x18
         cinc w8,w8,ne

    loc_0x0804bcd4: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x804bba4, 0x804bcc4
         [x1 + 0x18] = w8         // arg2
         tbz w0,0x1d,0x804bce8    // likely

    loc_0x0804bcdc: // orphan
         w8 = [x1 + 0x1c]         // 0xc8 // 200 // arg2
         w8 = w8 | 2
         [x1 + 0x1c] = w8         // arg2

    loc_0x0804bce8: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bcd8
         tbz w0,0x1e,0x804b9b8    // likely

    loc_0x0804bdd8: // orphan
         w8 = [x1 + 0x1c]         // 0xc8 // 200 // arg2
         w8 = w8 | 1
         [x1 + 0x1c] = w8         // arg2
         jmp 0x804bf18

    loc_0x0804bed8: // orphan
         w8 = [x1 + 0x1c]         // 0xc8 // 200 // arg2
         w8 = w8 | 1
         [x1 + 0x1c] = w8         // arg2

    loc_0x0804bee4: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x804bed4
         ubfx w8,w0,0xa, 6        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w8 == 8)             // x26
         b.hi 0x804bf14           // unlikely

    loc_0x0804bef0: // orphan
         x9 = 0x804b000
         x9 = x9 + 0
         x10 = 0x804bf0c
         w11 = (byte) [x9 + x8]   // 0xcf000000d0 // 889058230480
         x10 = x10 + x11,lsl 2
         w8 = 0x32                // '2'
         br x10

    loc_0x0804bf14: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x804ba34, 0x804beec
         [x1 + 0x18] = wzr        // arg2

}

/* ===== 0x0804b1b4 ===== */
int sym.arm64_decode_data_processing_immediate (int esi, int edx) {
    loc_0x804b1b4:
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = w0 & 0x1f000000 // arg1
        w10 = 0x1000
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = 0x1      // x26
        if (w9 == w10) // x26
        [x1 + 0x10] = w8 // arg2 // x19
        b.ne 0x804b230 // likely
            
    loc_0x804b230:
        w8 = w20 & 0x1f800000
        w9 = 0x1100
        if (w8 == w9) // x26
        b.ne 0x804b2c0 // likely
            
    loc_0x804b2c0:
        w9 = w20 & 0x7ff00000
        w10 = 0x11c0  // '\xc0\x11'
        if (w9 == w10) // x26
        b.ne 0x804b36c // likely
            
    loc_0x804b36c:
        w9 = 0x1200
        if (w8 == w9) // x26
        b.ne 0x804b414 // likely
            
    loc_0x804b414:
        w9 = w20 & 0x7f800000
        w10 = 0x1300
        if (w9 == w10) // x26
        b.eq 0x804b43c // unlikely
            
    loc_0x804b43c:
        // CODE XREFS from sym.arm64_decode_data_processing_immediate @ 0x804b420, 0x804b42c
        if (w20 == 0) // x26
        w13 = 0x40    // '@'
        w14 = 0x20    // x24
        w8 = 0x17
        w9 = w20 & 0x1f
        ubfx w10,w20,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26
        ubfx w11,w20,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w12,w20,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        csel w3,w14,w13, ge // x24
        [x19 + 0x14] = w8
        [x19 + 0x20] = (byte) w9
        [x19 + 0x21] = (byte) w10
        [x19 + 0x23] = (byte) w11
        [x19 + 0x22] = (byte) w12
        [x19 + 0x27] = (byte) w3 // arg4
        tbz w20,0x1f,0x804b488 // likely
            
    loc_0x804b488:
        // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x804b478
        ubfx w0,w20,0x1d, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !w0 jmp 0x804b570 // likely
            
    loc_0x804b570:
        // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x804b48c
        w8 = 0x7
         // do {
    loc_0x804b574:
        // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x804b4a4
        if (w20 == 0) // x26
        [x19 + 0x18] = w8
        cset w8,ge    // x26
        w9 = w20 & 0x400000
        ubfx w0,w20,0x16, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w1,w20,0x10, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w8 == w9) // x26
        [x19 + 0x42] = (byte) w0
        [x19 + 0x43] = (byte) w1
        b.eq 0x804b5d4 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0804b28c: // orphan
             w8 = [x19 + 0x1c]        // 0xda // 218
             w8 = w8 | 1
             [x19 + 0x1c] = w8

    loc_0x0804b298: // orphan
         sbfx w9,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w20,0xa, 0xc     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9 & 0xc
         [x19 + 0x28] = x8
         [x19 + 0x41] = (byte) w9
         tbnz w20,0x16,0x804b33c  // unlikely

    loc_0x0804b2b0: // orphan
         tbnz w20,0x1d,0x804b348  // unlikely

    loc_0x0804b2b4: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbnz w20,0x1e,0x804b35c  // unlikely

    loc_0x0804b2bc: // orphan
         jmp 0x804b5d8

    loc_0x0804b310: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x1c] = w8

    loc_0x0804b31c: // orphan
         ubfx w9,w20,0xa, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w20,0x12, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x28] = x9
         if !w8 jmp 0x804b4a8     // likely

    loc_0x0804b32c: // orphan
         if (w8 == 1)             // x26
         b.ne 0x804b4b0           // likely

    loc_0x0804b334: // orphan
         w8 = 0x10                // x19
         jmp 0x804b4c0

    loc_0x0804b33c: // orphan
         x8 = x8 << 0xc
         [x19 + 0x28] = x8
         tbz w20,0x1d,0x804b2b4   // likely

    loc_0x0804b348: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x1c] = w8
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbz w20,0x1e,0x804b5d8   // likely

    loc_0x0804b35c: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w8 = w8 | 4
         [x19 + 0x1c] = w8
         jmp 0x804b5d8

    loc_0x0804b3c4: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x1c] = w8

    loc_0x0804b3d0: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x804b3c0
         ubfx w0,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x19 + 0x28
         ubfx w1,w20,0x10, 6      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x6 = x19 + 0x38          // " "
         w4 = 0x1                 // x26
         [x19 + 0x42] = (byte) w0
         [x19 + 0x43] = (byte) w1
         0x804b3ec ()             // 0x804b3ec(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x804b5d4     // likely

    loc_0x0804b3f4: // orphan
         w8 = ~w20
         if ((w8 & 0x60000000) == 0) // x26 // x26
         b.ne 0x804b4cc           // likely

    loc_0x0804b400: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 | 2
         [x19 + 0x1c] = w8
         jmp 0x804b5d8

    loc_0x0804b430: // orphan
         w10 = 0x3300
         if (w9 == w10)           // x26
         b.ne 0x804b4d4           // likely

    loc_0x0804b498: // orphan
         if (w0 == 1)             // x26
         w8 = 0x8
         cinc w8,w8,ne
         jmp 0x804b574

    loc_0x0804b4a8: // orphan
         w8 = 0xe
         jmp 0x804b4c0

    loc_0x0804b4b0: // orphan
         if (w8 == 2)             // x26 // x26
         w8 = 0x11
         w9 = 0xf
         csel w8,w9,w8, eq

    loc_0x0804b4c0: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_immediate @ 0x804b338, 0x804b4ac
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x18] = w8
         jmp 0x804b5d8

    loc_0x0804b4cc: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x804b3fc
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x804b5d8

    loc_0x0804b4d4: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x804b438
         w9 = 0x7fa0              // '\xa0\x7f'
         w9 = w20 & w9
         w10 = 0x1380             // '\x80\x13'
         if (w9 == w10)           // x26
         b.ne 0x804b5e4           // likely

    loc_0x0804b4e8: // orphan
         x8 = 0x18
         x8 = 0xa
         if (w20 == 0)            // x26
         w13 = 0x40               // '@'
         w14 = 0x20               // x24
         w9 = w20 & 0x1f
         ubfx w10,w20,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26
         ubfx w11,w20,0xa, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w12,w20,0x10, 5     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 = x8
         csel w8,w14,w13, ge      // x24
         [x19 + 0x20] = (byte) w9
         [x19 + 0x21] = (byte) w10
         [x19 + 0x23] = (byte) w11
         // CODE XREFS from sym.arm64_decode_memory_address @ 0x804b11c, 0x804b120
         [x19 + 0x22] = (byte) w12
         [x19 + 0x27] = (byte) w8 // u"@ "
         tbz w20,0x1f,0x804b538   // likely

    loc_0x0804b52c: // orphan
         w9 = [x19 + 0x1c]        // 0xda // 218
         w9 = w9 | 1
         [x19 + 0x1c] = w9

    loc_0x0804b538: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x804b528
         if (w20 == 0)            // x26
         ubfx w10,w20,0xa, 6      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w9,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w20 & 0x400000
         cset w12,ge              // x26
         if (w10 == w8)           // x26
         [x19 + 0x42] = (byte) w9
         w8 = w12 ^ w11,lsr 22    // x26
         cset w9,lo               // x26
         if ((w8 & w9) == 0)      // x26 // x26
         w8 = 0x3
         [x19 + 0x41] = (byte) w10
         csel w0,wzr,w8, ne
         jmp 0x804b5d8

    loc_0x0804b59c: // orphan
         tbnz w20,0x1f,0x804b5b0  // unlikely

    loc_0x0804b5a0: // orphan
         w8 = w20 >> 0xa
         w9 = w20 >> 0x10
         w8 = w9 | w8
         tbnz w8,5,0x804b5d4      // unlikely

    loc_0x0804b5b0: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x804b59c
         ubfx w2,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x19 + 0x30
         x6 = x19 + 0x38          // " "
         w4 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x804b5c0 ()             // 0x804b5c0(0x0, 0x0, 0x0, 0x0)
         if (w0 == 0)             // x26 // x26
         w8 = 0x3
         csel w0,w8,wzr, eq
         jmp 0x804b5d8

    loc_0x0804b5d4: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_immediate @ 0x804b3f0, 0x804b598, 0x804b5ac
         w0 = 0x3

    loc_0x0804b5d8: // orphan
         // XREFS: CODE 0x0804b22c  CODE 0x0804b2bc  CODE 0x0804b368  
         // XREFS: CODE 0x0804b410  CODE 0x0804b494  CODE 0x0804b4c8  
         // XREFS: CODE 0x0804b4d0  CODE 0x0804b56c  CODE 0x0804b5d0  
         // XREFS: CODE 0x0804b64c  CODE 0x0804b668  CODE 0x0804b698  
         (x20, 2) = 3             // x19
         (x29, 2) = 3             // x9
                                  // x9

    loc_0x0804b5e4: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x804b4e4
         w9 = 0x1280              // '\x80\x12'
         if (w8 == w9)            // x26
         b.ne 0x804b660           // likely

    loc_0x0804b5f0: // orphan
         w8 = 0x19
         if (w20 == 0)            // x26
         w13 = 0x40               // '@'
         w14 = 0x20               // x24
         w9 = w20 & 0x1f
         ubfx w10,w20,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26
         ubfx w11,w20,0xa, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w12,w20,0x10, 5     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x14] = w8
         csel w8,w14,w13, ge      // x24
         [x19 + 0x20] = (byte) w9
         [x19 + 0x21] = (byte) w10
         [x19 + 0x23] = (byte) w11
         [x19 + 0x22] = (byte) w12
         [x19 + 0x27] = (byte) w8 // u"  "
         tbz w20,0x1f,0x804b63c   // likely

    loc_0x0804b630: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x1c] = w8

    loc_0x0804b63c: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x804b62c
         ubfx w8,w20,0x1d, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x3
         if !w8 jmp 0x804b66c     // likely

    loc_0x0804b648: // orphan
         if (w8 == 1)             // x26
         b.eq 0x804b5d8           // unlikely

    loc_0x0804b650: // orphan
         if (w8 == 2)             // x26 // x26
         w8 = 0xc
         cinc w8,w8,ne
         jmp 0x804b670

    loc_0x0804b660: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x804b5ec
         w0 = 0x1                 // x26
         [x19 + 0x14] = wzr
         jmp 0x804b5d8

    loc_0x0804b66c: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x804b644
         w8 = 0xb

    loc_0x0804b670: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x804b65c
         w9 = w20 >> 0x11
         w9 = w9 & 0x30
         w10 = ~0
         if (w9 == 0x1f)          // x26
         [x19 + 0x18] = w8        // "\n"
         ubfx w8,w20,5, 0x10      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26
         ccmp w20,w10,4, hi
         [x19 + 0x28] = x8
         [x19 + 0x41] = (byte) w9
         csel w0,w0,wzr, gt
         jmp 0x804b5d8

}

/* ===== 0x0804bf74 ===== */
int sym.arm64_decode_branch (int esi, int edx) {
    loc_0x804bf74:
        w10 = 0x201f  // '\x1f '
        w9 = w0 & 0xfffff01f // arg1
        w10 = 0xd503
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == w10)
        b.ne 0x804bfd8 // likely
            
    loc_0x804bfd8:
        // CODE XREF from sym.arm64_decode_branch @ 0x804bf88
        w10 = 0xcfa1  // '\xa1\xcf'
        w9 = w8 & 0xfffff0ff
        w10 = 0x2afc  // '\xfc*'
        w9 = w9 + w10
        ror w9,w9,5
        if (w9 == 4)  // x26
        b.hi 0x804c03c // likely
            
    loc_0x804c03c:
        // CODE XREFS from sym.arm64_decode_branch @ 0x804bff0, 0x804bff8
        w10 = 0x2
        w9 = w8 & 0xffe0001f
        w10 = 0xd400
        if (w9 == w10)
        jmp ifle 0x804c13c // unlikely
            
    loc_0x804c13c:
        // CODE XREF from sym.arm64_decode_branch @ 0x804c04c
        w10 = 0x1     // x26
        w10 = 0xd400
        if (w9 == w10)
        b.eq 0x804c180 // unlikely
            
    loc_0x804c180:
        // CODE XREF from sym.arm64_decode_branch @ 0x804c148
        w9 = 0xa
         // do {
    loc_0x804c184:
        // CODE XREFS from sym.arm64_decode_branch @ 0x804c07c, 0x804c160, 0x804c174, 0x804c17c
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x28] = w9 // arg2
        x9 = xzr | 0x400000004
        w8 = w8 >> 5
        [x1 + 0x10] = x9 // arg2 // x19
        [x1 + 0x2c] = (half) w8
        // lr
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x804bf8c
    loc_0x804bfa0:
        x9 = 0x804b000
        x9 = x9 + 0
        x10 = 0x804bfb8
        w11 = (byte) [x9 + x8] // 0xcf000000d0 // 889058230480
        // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x804bf00, 0x804bf08
        x10 = x10 + x11,lsl 2
        br x10
         // (break)
    loc_0x0804bffc: // orphan
             x10 = 0x4
             // XREFS: STRING 0x0804c440  CODE 0x0804c448  STRING 0x0804c464  
             // XREFS: CODE 0x0804c468  DATA 0x0804ccec  DATA 0x0804ce70  
             ubfx w9,w8,8, 4          // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w8 = w8 & 0xff
             x10 = 0x3
             if (w8 == 0xbf)          // x26
             [x1 + 0x10] = x10        // arg2 // x19
             [x1 + 0x2e] = (byte) w9  // arg2
             b.eq 0x804c080           // unlikely

    loc_0x0804c01c: // orphan
         if (w8 == 0x9f)          // x26
         b.eq 0x804c090           // unlikely

    loc_0x0804c024: // orphan
         if (w8 == 0x5f)          // x26
         b.ne 0x804c0a0           // likely

    loc_0x0804c02c: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0x6
         [x1 + 0x28] = w8         // arg2
                                  // lr

    loc_0x0804c060: // orphan
         w10 = 0xd420             // ' \xd4'
         if (w9 == w10)
         b.eq 0x804c178           // unlikely

    loc_0x0804c06c: // orphan
         w10 = 0xd440             // '@\xd4'
         if (w9 == w10)
         b.ne 0x804c1a0           // likely

    loc_0x0804c078: // orphan
         w9 = 0xe
         jmp 0x804c184

    loc_0x0804c080: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c018
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0x8
         [x1 + 0x28] = w8         // arg2
                                  // lr

    loc_0x0804c090: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c020
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0x7
         [x1 + 0x28] = w8         // arg2
                                  // lr

    loc_0x0804c0a0: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c028
         if (w9 == 0xf)           // x26
         b.ne 0x804c0b8           // likely

    loc_0x0804c0a8: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0x9
         [x1 + 0x28] = w8         // arg2
                                  // lr

    loc_0x0804c0b8: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c0a4
         w0 = 0x3
                                  // lr

    loc_0x0804c15c: // orphan
         w9 = 0xb
         jmp 0x804c184

    loc_0x0804c164: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804bf9c
         w0 = 0x1                 // x26
         [x1 + 0x14] = wzr        // arg2
                                  // lr

    loc_0x0804c170: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c05c
         w9 = 0xc
         jmp 0x804c184

    loc_0x0804c178: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c068
         w9 = 0xd
         jmp 0x804c184

    loc_0x0804c1a0: // orphan
         // CODE XREFS from sym.arm64_decode_branch @ 0x804c074, 0x804c158
         w9 = 0x3e0
         w9 = 0xd69f              // '\x9f\xd6'
         w10 = w8 & 0xffdfffff
         if (w10 == w9)
         [x1 + 0x28] = wzr        // arg2 // "\t"
         b.ne 0x804c1dc           // likely

    loc_0x0804c1b8: // orphan
         x10 = 0x4
         if (w8 == w9)            // x26
         w8 = 0xf
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x10 = 0x5
         cinc w8,w8,ne            // x19
         [x1 + 0x10] = x10        // arg2 // x19
         [x1 + 0x28] = w8         // arg2
                                  // lr

    loc_0x0804c1dc: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c1b4
         w9 = w8 & 0xfff00000
         w10 = 0xd530             // '0\xd5'
         if (w9 == w10)
         b.eq 0x804c200           // unlikely

    loc_0x0804c1ec: // orphan
         w10 = 0xd510             // '\x10\xd5'
         if (w9 == w10)
         b.ne 0x804c244           // likely

    loc_0x0804c1f8: // orphan
         w9 = 0x7
         jmp 0x804c204

    loc_0x0804c200: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c1e8
         w9 = 0x6

    loc_0x0804c204: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c1fc
         w10 = 0x4
         [x1, 0x10] = (w10,2)     // arg2
         w9 = w8 & 0x1f
         [x1 + 0x24] = (byte) w9  // arg2
         ubfx w9,w8,0x13, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x2f] = (byte) w9  // arg2
         ubfx w9,w8,0x10, 3       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x30] = (byte) w9  // arg2
         ubfx w9,w8,0xc, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x31] = (byte) w9  // arg2
         ubfx w9,w8,8, 4          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w8,5, 3          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x32] = (byte) w9  // arg2
         [x1 + 0x33] = (byte) w8  // arg2
                                  // lr

    loc_0x0804c244: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c1f4
         w9 = w8 | 0x80000000
         w9 = w9 >> 0x1a          // x24
         if (w9 == 0x25)          // x26
         b.ne 0x804c284           // likely

    loc_0x0804c254: // orphan
         if (w8 == 0)             // x26
         ubfiz w8,w8,2, 0x1a      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = 0x8
         x11 = xzr | 0xfffffffff8000000
         w8 = w8 ^ loc.__crc_shadow_fault_init
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0x4
         cinc w10,w10,lt
         x8 = x8 + x11
         [x1, 0x10] = (w9,2)      // arg2
         [x1 + 0x28] = x8         // arg2
                                  // lr

    loc_0x0804c284: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c250
         w9 = 0xfc1f              // '\x1f\xfc'
         w9 = 0xffdf              // '\xdf\xff'
         w9 = w8 & w9
         w10 = 0xd61f             // '\x1f\xd6'
         if (w9 == w10)
         w9 = w8 & 0xfffffc1f
         b.eq 0x804c2ec           // unlikely

    loc_0x0804c2a0: // orphan
         w10 = w10 | 0x400000
         if (w9 == w10)           // x26
         b.eq 0x804c2ec           // unlikely

    loc_0x0804c2ac: // orphan
         w9 = 0x10                // x19
         w9 = 0xff00
         w9 = w8 & w9
         w10 = 0x5400
         if (w9 == w10)           // x26
         b.ne 0x804c324           // likely

    loc_0x0804c2c4: // orphan
         w10 = w8 & 0xf
         w8 = w8 >> 3
         x9 = 0x4
         w8 = w8 & 0x1ffffc
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x9 = 0xd
         w8 = w8 ^ 0x100000
         [x1 + 0x10] = x9         // arg2 // x19
         [x1 + 0x30] = (byte) w10 // arg2
         jmp 0x804c388

    loc_0x0804c2ec: // orphan
         // CODE XREFS from sym.arm64_decode_branch @ 0x804c29c, 0x804c2a8
         w11 = 0xd63f             // '?\xd6'
         w10 = 0x4
         ubfx w8,w8,5, 5          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == w11)
         [x1 + 0x10] = w10        // arg2 // x19
         [x1 + 0x21] = (byte) w8  // arg2
         b.eq 0x804c394           // unlikely

    loc_0x0804c308: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x804bf00, 0x804bf08
         w8 = 0xd61f              // '\x1f\xd6'
         if (w9 == w8)
         b.ne 0x804c3a4           // likely

    loc_0x0804c314: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0xa
         [x1 + 0x14] = w8         // arg2 // "\r"
                                  // lr

    loc_0x0804c324: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c2c0
         w9 = w8 & 0x7e000000
         w10 = 0x3600
         if (w9 == w10)           // x26
         b.eq 0x804c3b4           // unlikely

    loc_0x0804c334: // orphan
         w10 = 0x3400
         if (w9 == w10)           // x26
         b.ne 0x804c3fc           // likely

    loc_0x0804c340: // orphan
         if ((w8 & 0x1000000) == 0) // x26
         w10 = 0xe
         w11 = w8 >> 0x1f
         w9 = 0x4
         [x1 + 0x1c] = w11        // arg2
         w11 = w8 & 0x1f
         cinc w10,w10,ne
         [x1 + 0x24] = (byte) w11 // arg2
         w11 = 0x40               // '@'
         [x1, 0x10] = (w9,2)      // arg2
         w9 = 0x20                // x24
         if (w8 == 0)             // x26
         w8 = w8 >> 3
         csel w9,w9,w11, ge       // x24
         w8 = w8 & 0x1ffffc
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = w8 ^ 0x100000
         [x1 + 0x27] = (byte) w9  // arg2

    loc_0x0804c388: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c2e8
         x8 = x8 - 0x100,lsl 12
         [x1 + 0x28] = x8         // arg2
                                  // lr

    loc_0x0804c394: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c304
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0xb
         [x1 + 0x14] = w8         // arg2
                                  // lr

    loc_0x0804c3a4: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c310
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0xc
         [x1 + 0x14] = w8         // arg2
                                  // lr

    loc_0x0804c3b4: // orphan
         // CODE XREFS from sym.arm64_decode_branch @ 0x804bfb0, 0x804bfb4, 0x804c330
         w10 = w8 & 0x1f
         if ((w8 & 0x1000000) == 0) // x26
         [x1 + 0x24] = (byte) w10 // arg2
         w10 = 0x10               // x19
         w9 = 0x4
         cinc w10,w10,ne
         [x1, 0x10] = (w9,2)      // arg2
         w9 = w8 >> 0x1a
         w9 = w9 & 0x20
         bfxil w9,w8,0x13, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 >> 3
         w8 = w8 & 0xfffc
         w8 = w8 ^ 0x8000
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x8 = x8 - 8,lsl 12
         [x1 + 0x31] = (byte) w9  // arg2
         [x1 + 0x28] = x8         // arg2
                                  // lr

    loc_0x0804c3fc: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c33c
         w8 = w8 & 0x1c000000
         w9 = 0x1400
         if (w8 == w9)            // x26
         b.ne 0x804c41c           // likely

    loc_0x0804c40c: // orphan
         w8 = 0x4
         w0 = 0x1                 // x26
         [x1 + 0x10] = x8         // arg2 // x19
                                  // lr

    loc_0x0804c41c: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x804c408
         w0 = 0x4
                                  // lr

}

/* ===== 0x0804c424 ===== */
int sym.arm64_decode_ldst (int esi, int edx) {
    loc_0x804c424:
        x9 = 0xccff   // '\xff\xcc'
        x9 = 0xccff   // '\xff\xcc'
        x9 = 0xccff   // '\xff\xcc'
        w8 = w0 >> 0x18 // arg1
        x9 = 0xccff   // '\xff\xcc'
        x8 = x9 >> x8
        tbnz w8,0,0x804c528 // likely
            
    loc_0x804c528:
        // CODE XREFS from sym.arm64_decode_ldst @ 0x804c43c, 0x804c460
        w0 = 0x4
        // lr
         // } else {
    loc_0x804c440:
        x9 = 0x804c000
        ubfx x8,x0,0x18, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = x9 + 0
        w8 = (byte) [x9 + x8] // 0xcf000000d0 // 889058230480
        w9 = 0x3
        [x1 + 0x10] = w9 // arg2 // x19
        w8 = w8 - 1
        if (w8 == 5)  // x26
        b.hi 0x804c528 // likely
        }
        return eax;
    loc_0x804c464:
        x9 = 0x804c000
        x9 = x9 + 0
        x10 = 0x804c47c
        w11 = (word) [x9 + x8,lsl 1] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11,lsl 2
        br x10
         // (break)
}

/* ===== 0x0804d000 ===== */
int sym.arm64_decode_simd (int esi, int edx) {
    loc_0x804d000:
        // XREFS: STRING 0x0804d0e8  DATA 0x0804d0f0  STRING 0x0804d290
        // XREFS: DATA 0x0804d298  STRING 0x0804d32c  DATA 0x0804d330
        // XREFS: STRING 0x0804d6c0  DATA 0x0804d6c4  STRING 0x0804d818
        // XREFS: DATA 0x0804d81c  STRING 0x0804d97c  DATA 0x0804d980
        // XREFS: STRING 0x0804d994  DATA 0x0804d998  STRING 0x0804dd70
        // XREFS: DATA 0x0804dd78  STRING 0x0804ddc0  DATA 0x0804ddc8
        // XREFS: STRING 0x0804de9c  DATA 0x0804dea0
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x24,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = ~w0
        if ((w8 & 0xe000000) == 0) // x26 // x26
        b.ne 0x804d09c // likely
            
    loc_0x804d09c:
        // CODE XREF from sym.arm64_decode_simd @ 0x804d01c
        w0 = 0x4
        jmp 0x804d71c
         // do {
    loc_0x804d71c:
        // XREFS(30)
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3  // x19
        (x29, 2) = 3  // x9
        // x9
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x804d020
    loc_0x804d07c:
        ubfx w8,w20,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !w8 jmp 0x804d180 // likely
            
    loc_0x804d180:
        // CODE XREF from sym.arm64_decode_simd @ 0x804d080
        w10 = 0x20    // x24
         // do {
    loc_0x804d184:
        // CODE XREFS from sym.arm64_decode_simd @ 0x804d098, 0x804d17c
        x8 = 0x1      // x26
        w9 = w20 >> 0xd
        x8 = 0xb
        w11 = w10 - 1
        [x19 + 0x28] = x8
        ubfx w8,w9,7, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w10 == 0x20) // x26
        x8 = x8 << x11
        ubfx w11,w20,0x13, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0x27] = (byte) w10
        [x19 + 0x46] = (byte) w10
        [x19 + 0x45] = (byte) w9
        b.eq 0x804d1ec // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x804d084
    loc_0x804d08c:
        if (w8 == 1)  // x26
        b.ne 0x804d718 // likely
            
    loc_0x804d718:
        // XREFS: CODE 0x0804d090  CODE 0x0804d134  CODE 0x0804d144
        // XREFS: CODE 0x0804d23c  CODE 0x0804d24c  CODE 0x0804d26c
        // XREFS: CODE 0x0804d31c  CODE 0x0804d328
        w0 = 0x3
    loc_0x0804d094: // orphan
             w10 = 0x40               // '@'
             jmp 0x804d184

    loc_0x0804d0a4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d078
         w9 = 0xc00
         w9 = 0x9ff8              // '\xf8\x9f'
         w13 = 0x400
         w12 = w20 & w9
         w13 = 0xf00
         if (w12 == w13)          // x26
         b.ne 0x804d10c           // likely

    loc_0x0804d0c0: // orphan
         w9 = w20 >> 0xb
         w11 = w9 & 0xe0
         ubfx w8,w20,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w11                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w12 = 0xb
         bfxil w9,w20,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == 0xf)           // x26
         [x19 + 0x28] = w12
         [x19 + 0x45] = (byte) w9
         b.eq 0x804d438           // unlikely

    loc_0x0804d0e8: // orphan
         x11 = sym.arm64_decode_simd // pc
                                  // 0x804d000
         ubfx x10,x20,0xc, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x11 + 0            // 0x804d000
                                  // pc
         x12 = 0x804d104
         w13 = (byte) [x11 + x10] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2    // 0x804d4f8
                                  // fcn.0804d4f8
         br x12                   // fcn.0804d4f8

    loc_0x0804d10c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d0bc
         w12 = 0x7c00
         w10 = 0x8000
         w12 = 0xff20             // ' \xff'
         w10 = 0xc0               // '\xc0'
         w13 = 0x400
         w10 = w12 | w10
         w13 = 0x5e00
         w10 = w20 & w10
         if (w10 == w13)          // x26
         b.ne 0x804d21c           // likely

    loc_0x0804d134: // orphan
         if !w8 jmp 0x804d718     // unlikely

    loc_0x0804d138: // orphan
         rbit w9,w8
         clz w9,w9                // x26
         if (w9 == 3)             // x26
         b.hi 0x804d718           // unlikely

    loc_0x0804d148: // orphan
         x10 = 0x17
         w11 = 0x8
         w12 = w9 + 1
         x10 = 0x3d               // '='
         w9 = w11 << w9
         w8 = w8 >> w12           // x26
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x28] = x10
         [x19 + 0x46] = (byte) w9
         [x19 + 0x48] = (byte) w8
         [x19 + 0x27] = (byte) w9
         jmp 0x804d71c

    loc_0x0804d178: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d088
         w10 = 0x10               // x19
         jmp 0x804d184

    loc_0x0804d1b8: // orphan
         if (w10 == 0x10)         // x26
         b.ne 0x804d2b8           // likely

    loc_0x0804d1c0: // orphan
         w10 = w11 << 4
         if (w11 == 0)            // x26 // x26
         w11 = 0xc
         ubfx w12,w20,0x11, 2     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x11,xzr,x11, eq
         w10 = w10 ^ 0x10         // x19
         x11 = x11 | x12
         x10 = x11 | x10          // x19
         ubfiz w9,w9,6, 4         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi x9,x10,0xa, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x804d2e0

    loc_0x0804d1ec: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d1b4
         w10 = w11 << 7
         if (w11 == 0)            // x26 // x26
         w11 = 0x7c               // '|'
         ubfx w12,w20,0x11, 2     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x11,xzr,x11, eq
         ubfx w9,w20,0xd, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w10 ^ 0x80
         x11 = x11 | x12
         x10 = x11 | x10
         ubfiz w9,w9,0x13, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi x9,x10,0x17, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x804d2e0

    loc_0x0804d21c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d130
         w16 = 0x800
         w10 = 0x8400
         w16 = 0xe00
         w10 = 0x9fe0             // '\xe0\x9f'
         w10 = w20 & w10
         w14 = w16 - 0x400
         if (w10 == w14)          // x26
         b.ne 0x804d2f0           // likely

    loc_0x0804d23c: // orphan
         if !w8 jmp 0x804d718     // unlikely

    loc_0x0804d240: // orphan
         rbit w9,w8
         clz w10,w9               // x26
         if (w10 == 3)            // x26
         b.hi 0x804d718           // unlikely

    loc_0x0804d250: // orphan
         w9 = 0xc
         w11 = 0x8
         [x19 + 0x28] = w9
         w9 = w11 << w10
         [x19 + 0x46] = (byte) w9
         tbnz w20,0x1e,0x804d270  // unlikely

    loc_0x0804d268: // orphan
         if (w10 == 3)            // x26
         b.eq 0x804d718           // unlikely

    loc_0x0804d270: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d264
         w12 = w10 + 1            // x26
         ubfx w11,w20,0xb, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 >> w12           // x26
         [x19 + 0x48] = (byte) w8
         tbnz w20,0x1d,0x804d714  // unlikely

    loc_0x0804d284: // orphan
         if (w11 == 7)            // x26
         w0 = 0x3
         b.hi 0x804d71c           // unlikely

    loc_0x0804d290: // orphan
         x10 = sym.arm64_decode_simd // pc
                                  // 0x804d000
         w8 = w11                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 + 0            // 0x804d000
                                  // pc
         x11 = 0x804d2ac
         w12 = (word) [x10 + x8,lsl 1] // 0xcf000000d1 // 889058230481
         x11 = x11 + x12,lsl 2
         br x11

    loc_0x0804d2b8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d1bc
         if (w11 == 0)            // x26 // x26
         w10 = 0x3fc
         w9 = w11 << 0xa
         csel w10,wzr,w10, eq
         ubfx w11,w20,0xd, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9 ^ 0x400
         bfxil w10,w20,0x11, 2    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w10 | w9
         x9 = x11 << 0x30
         bfi x9,x10,0x34, 0xb     // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0804d2e0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804d1e8, 0x804d218
         x8 = x9 | x8
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x38] = x8        // " "
         jmp 0x804d71c

    loc_0x0804d2f0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d238
         w10 = 0xfc00
         w10 = 0xbf01
         w8 = w10 + 0x1e9,lsl 12
         w8 = w20 & w8
         if (w8 == w16)           // x26 // x26
         ubfx w22,w20,0x16, 2     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x804d390           // unlikely

    loc_0x0804d30c: // orphan
         w8 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         ubfx x8,x8,0xc, 3        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 - 1
         if (w8 == 6)             // x26 // x26
         b.hi 0x804d718           // likely

    loc_0x0804d320: // orphan
         w9 = 0x77                // 'w'
         w9 = w9 >> w8
         tbz w9,0,0x804d718       // unlikely

    loc_0x0804d32c: // orphan
         x9 = sym.arm64_decode_simd // pc
                                  // 0x804d000
         x9 = x9 + 0              // 0x804d000
                                  // pc
         w8 = [x9 + x8,lsl 2]     // 0xcf000000d0 // 889058230480
         [x19 + 0x2c] = w8        // "="
         tbnz w20,0x1e,0x804d348  // unlikely

    loc_0x0804d340: // orphan
         if (w22 == 3)            // x26
         b.eq 0x804d718           // unlikely

    loc_0x0804d348: // orphan
         w8 = 0xe
         if ((w20 & 0x40000000) == 0) // x26
         w9 = ~0x7f               // '\x7f'
         w10 = 0x40               // '@'
         w11 = 0x8
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x28] = w8
         csel w8,w10,w9, eq
         w9 = w11 << w22

    loc_0x0804d36c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804ea64
         [x19 + 0x27] = (byte) w8
         [x19 + 0x46] = (byte) w9
         jmp 0x804d71c

    loc_0x0804d390: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d308
         w14 = 0xe400
         w14 = 0xbf20             // ' \xbf'
         w8 = 0xc400
         w8 = 0x2e00
         w15 = w20 & w14
         if (w15 == w8)           // x26
         b.ne 0x804d47c           // likely

    loc_0x0804d3ac: // orphan
         w8 = 0x2f                // '/'
         [x19 + 0x2c] = w8
         ubfx w8,w20,0xb, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x804d4a4

    loc_0x0804d438: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d0e4
         tbnz w20,0x1d,0x804d568  // unlikely

    loc_0x0804d43c: // orphan
         w12 = 0x1                // x26
         w12 &= w12
         w13 = 0x7c               // '|'
         w12 = w12 << 7
         x11 = (char) w9
         csel x13,xzr,x13, eq
         w12 = w12 ^ 0x80
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfiz w10,w10,0x13, 4    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x11 & 0x80000000   // pstate
         x12 = x13 | x12
         x9 = x12 | x9
         x10 = x11 | x10          // pstate
         x9 = x10 | x9,lsl 23
         x9 = x9 | x9,lsl 32
         jmp 0x804d594

    loc_0x0804d47c: // orphan
         w14 = w14 + 0x800
         w14 = w20 & w14
         w8 = w8 + 2,lsl 12
         if (w14 == w8)           // x26
         b.ne 0x804d670           // likely

    loc_0x0804d490: // orphan
         w8 = 0x30                // '0'
         if ((w20 & 0x1000) == 0) // x26
         w9 = 0x3
         [x19 + 0x2c] = w8        // "/"
         csinc w8,w9,wzr, ne

    loc_0x0804d4a4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d3b8
         [x19 + 0x45] = (byte) w8
         if !w22 jmp 0x804d718    // likely

    loc_0x0804d4ac: // orphan
         tbnz w20,0x1e,0x804d4b8  // unlikely

    loc_0x0804d4b0: // orphan
         if (w22 == 3)            // x26
         b.eq 0x804d718           // unlikely

    loc_0x0804d4b8: // orphan
         w8 = 0x14                // "/"
         w9 = 0x8
         if ((w20 & 0x40000000) == 0) // x26
         w10 = ~0x7f              // '\x7f'
         w11 = 0x40               // '@'
         [x19 + 0x28] = w8
         w8 = w9 << w22
         csel w9,w11,w10, eq
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x46] = (byte) w8
         [x19 + 0x27] = (byte) w9
         jmp 0x804d71c

    loc_0x0804d568: // orphan
         ubfx w12,w20,0x11, 1     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w12 = w12 << 0xa
         w10 = w11 >> 7
         sbfx w11,w20,0x11, 1     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w13,w20,5, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff' // x26
         w12 = w12 ^ 0x400
         x13 = x13 << 0x30
         bfxil w12,w11,0, 0xa     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil w12,w9,4, 2        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi x13,x10,0x3f, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x13 | x12,lsl 52

    loc_0x0804d594: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x108, 0x804d478
         // CODE XREF from fcn.0804d4f8 @ 0x804d564
         [x19 + 0x38] = x9
         if ((w20 & 0x40000000) == 0) // x26
         w9 = ~0x7f               // '\x7f'
         w10 = 0x40               // '@'
         csel w9,w10,w9, eq
         if (w8 == 8)             // x26
         [x19 + 0x27] = (byte) w9
         b.hs 0x804d5c4           // unlikely

    loc_0x0804d5b4: // orphan
         w8 = 0x20                // x24
         [x19 + 0x46] = (byte) w8
         tbnz w20,0xc,0x804d5d8   // unlikely

    loc_0x0804d5c0: // orphan
         jmp 0x804d5fc

    loc_0x0804d5c4: // orphan
         if (w8 == 0xc)           // x26
         b.hs 0x804d5ec           // unlikely

    loc_0x0804d5cc: // orphan
         w8 = 0x10                // x19
         [x19 + 0x46] = (byte) w8
         tbz w20,0xc,0x804d5fc    // likely

    loc_0x0804d5d8: // orphan
         w8 = 0x1                 // x26
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if ((w8 & w20) == 0)     // x26
         w8 = 0x3a                // ':'
         jmp 0x804d60c

    loc_0x0804d5ec: // orphan
         if (w8 == 0xd)           // x26
         b.hi 0x804d618           // unlikely

    loc_0x0804d5f4: // orphan
         w8 = 0x20                // x24
         [x19 + 0x46] = (byte) w8

    loc_0x0804d5fc: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d5c0
         w8 = 0x1                 // x26
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if ((w8 & w20) == 0)     // x26
         w8 = 0x38                // '8'

    loc_0x0804d60c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d5e8
         cinc w8,w8,ne

    loc_0x0804d610: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d66c
         [x19 + 0x2c] = w8        // "0"
         jmp 0x804d71c

    loc_0x0804d618: // orphan
         if (w8 == 0xe)           // x26
         b.ne 0x804d644           // likely

    loc_0x0804d620: // orphan
         w8 = w20 >> 0x1d
         w9 = 0x40                // '@'
         if ((w8 & 1) == 0)       // x26
         w10 = 0x8
         csel w9,w10,w9, eq
         [x19 + 0x46] = (byte) w9
         tbz w8,0,0x804d5fc       // likely

    loc_0x0804d63c: // orphan
         w8 = 0x38                // '8'
         jmp 0x804d668

    loc_0x0804d644: // orphan
         w8 = w20 >> 0x1d
         w9 = 0x40                // '@'
         if ((w8 & 1) == 0)       // x26
         w10 = 0x20               // x24
         csel w9,w10,w9, eq
         [x19 + 0x46] = (byte) w9
         tbz w8,0,0x804d664       // likely

    loc_0x0804d660: // orphan
         tbz w20,0x1e,0x804d718   // likely

    loc_0x0804d664: // orphan
         w8 = 0xb

    loc_0x0804d668: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d640
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x804d610

    loc_0x0804d670: // orphan
         w14 = 0x400
         w14 = 0x9f20             // ' \x9f'
         w8 = 0x7c00
         w15 = w14 | 0x8000
         w15 = w20 & w15
         w8 = w16 + w8
         if (w15 == w8)           // x26
         b.ne 0x804d730           // likely

    loc_0x0804d690: // orphan
         w15 = w20 >> 0x18
         w8 = w20 >> 0x1e
         w15 = w15 & 0x20
         w17 = ~0x7f              // '\x7f'
         w18 = 0x40               // '@'
         if (w8 == 0)             // x26 // x26
         bfxil w15,w20,0xb, 5     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w18,w18,w17, eq
         w17 = w15 - 0x12
         if (w17 == 0x2d)         // x26 // x26
         [x19 + 0x27] = (byte) w18
         b.hi 0x804d730           // likely

    loc_0x0804d6c0: // orphan
         x18 = sym.arm64_decode_simd // pc
                                  // 0x804d000
         x18 = x18 + 0            // 0x804d000
                                  // pc
         x0 = 0x804d6d8
         w1 = (word) [x18 + x17,lsl 1] // 0xd8000000d9 // 927712936153
         x0 = x0 + x1,lsl 2
         br x0

    loc_0x0804d714: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d280
         tbnz w20,0x1e,0x804d7c8  // unlikely

    loc_0x0804d730: // orphan
         w8 = w14 + 0x40c,lsl 12
         w15 = wzr | 0x3ffc00     // arg1
         w23 = w20 & w8
         w24 = w16 + w15
         ubfx w8,w20,0x1d, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w23 == w24)          // x26
         ubfx w21,w20,0xb, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.eq 0x804d7e8           // unlikely

    loc_0x0804d750: // orphan
         w15 = wzr | 0x1ffc00     // arg1
         w14 = w20 & w14
         w15 = w16 + w15
         if (w14 == w15)          // x26
         b.eq 0x804d7e8           // unlikely

    loc_0x0804d764: // orphan
         w14 = 0x400
         w15 = 0x8000
         w14 = 0xdf00
         w15 = 0x20
         w15 = w14 | w15
         w15 = w20 & w15
         w17 = w13 + 8,lsl 12
         if (w15 == w17)          // x26
         b.ne 0x804d83c           // likely

    loc_0x0804d788: // orphan
         w0 = 0x3
         if !w8 jmp 0x804d71c     // unlikely

    loc_0x0804d790: // orphan
         if !w22 jmp 0x804d71c    // likely

    loc_0x0804d794: // orphan
         if (w22 == 3)            // x26
         b.eq 0x804d71c           // unlikely

    loc_0x0804d79c: // orphan
         if ((w20 & 0x800) == 0)  // x26
         w9 = 0x7e                // '~'
         w10 = 0x8
         w8 = 0x1b
         cinc w9,w9,ne
         w10 = w10 << w22
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19, 0x28] = (w8,2)
         [x19 + 0x46] = (byte) w10
         [x19 + 0x27] = (byte) w10
         jmp 0x804d71c

    loc_0x0804d7c8: // orphan
         w8 = 0x3f                // '?'
         w9 = w11 >> w10
         w10 = 0x80               // '\x80'
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x2c] = w8
         [x19 + 0x49] = (byte) w9
         [x19 + 0x27] = (byte) w10
         jmp 0x804d71c

    loc_0x0804d7e8: // orphan
         if (w23 == w24)          // x26 // x26
         w10 = 0x1                // x26
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         cset w9,ne
         if ((w10 & w20) == 0)    // x26
         csel w10,w12,w11, eq
         if (w21 == 3)            // x26
         [x19 + 0x27] = (byte) w10
         b.ne 0x804d928           // likely

    loc_0x0804d810: // orphan
         if !w9 jmp 0x804d928     // unlikely

    loc_0x0804d814: // orphan
         bfi w22,w8,2, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = sym.arm64_decode_simd // pc
                                  // 0x804d000
         x8 = x8 + 0              // 0x804d000
                                  // pc
         w8 = [x8 + w22,uxtw 2]   // 0xbe000000cf // 816043786447
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xf
         w10 = 0x8

    loc_0x0804d830: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804d9b0
         [x19, 0x28] = (w9,2)
         [x19 + 0x46] = (byte) w10
         jmp 0x804d71c

    loc_0x0804d83c: // orphan
         w15 = w14 + 0x60c,lsl 12
         w17 = 0x400
         w15 = w20 & w15
         w17 = 0x5e40             // '@^'
         if (w15 == w17)          // x26
         b.eq 0x804da1c           // unlikely

    loc_0x0804d854: // orphan
         w18 = w14 + 0x200,lsl 12
         w18 = w20 & w18
         w13 = w13 + 0x200,lsl 12
         if (w18 == w13)          // x26
         b.eq 0x804da1c           // unlikely

    loc_0x0804d868: // orphan
         w13 = w20 & w14
         w14 = 0xf00
         if (w13 == w14)          // x26
         b.eq 0x804d890           // unlikely

    loc_0x0804d878: // orphan
         w14 = 0x5f00
         if (w13 == w14)          // x26
         b.eq 0x804d890           // unlikely

    loc_0x0804d884: // orphan
         w14 = 0x4f00
         if (w13 == w14)          // x26
         b.ne 0x804e060           // likely

    loc_0x0804d890: // orphan
         ubfx w17,w20,0xc, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w14,w20,0xb, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w15,w20,0x15, 1     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w13,w20,0x14, 1     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w20,0x1d,0x804dba8   // likely

    loc_0x0804d8a4: // orphan
         w18 = 0xd
         bics wzr,w18,w20, lsr 12 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x804dba8           // likely

    loc_0x0804d8b0: // orphan
         w8 = w22 - 1
         w8 = w8 & 0xff
         if (w8 == 1)             // x26
         b.hi 0x804d718           // likely

    loc_0x0804d8c0: // orphan
         if (w17 == 0xd)          // x26
         w8 = 0x7e                // '~'
         w9 = 0x1                 // x26
         w10 = ~0x7f              // '\x7f'
         w11 = 0x40               // '@'
         cinc w8,w8,ne
         if ((w9 & w20) == 0)     // x26
         csel w10,w11,w10, eq
         if ((w9 & w20) == 0)     // x26
         w9 = 0x8
         w11 = 0x1c               // " "
         w9 = w9 << w22
         [x19 + 0x46] = (byte) w9
         cinc w11,w11,ne
         csel w9,w10,w9, eq
         if (w22 == 1)            // x26
         [x19, 0x28] = (w11,2)
         [x19 + 0x27] = (byte) w9
         b.ne 0x804df28           // likely

    loc_0x0804d90c: // orphan
         bfi w13,w15,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w20,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w13,w14,2, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x22] = (byte) w8
         [x19 + 0x48] = (byte) w13
         jmp 0x804d71c

    loc_0x0804d928: // orphan
         if (w21 == 0x17)         // x26
         cset w10,hi
         w9 = w9 ^ 1
         w9 = w10 | w9
         tbnz w9,0,0x804da74      // likely

    loc_0x0804d93c: // orphan
         bfi w21,w8,5, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w21 == 0x36)         // x26
         b.hi 0x804d718           // unlikely

    loc_0x0804d948: // orphan
         x8 = xzr | 0xfff7fff7fff7fff7
         x8 = 0xff                // '\xff'
         x8 = 0x7f                // '\x7f'
         x8 = x8 >> x21
         tbz w8,0,0x804d718       // unlikely

    loc_0x0804d95c: // orphan
         w8 = 0x1                 // x26
         if ((w8 & w20) == 0)     // x26
         cset w9,eq
         if (w22 == 3)            // x26
         cset w10,eq
         w9 = w10 & w9
         w0 = 0x3
         tbnz w9,0,0x804d71c      // unlikely

    loc_0x0804d97c: // orphan
         x9 = sym.arm64_decode_simd // pc
                                  // 0x804d000
         x9 = x9 + 0              // 0x804d000
                                  // pc
         w9 = [x9 + w21,uxtw 2]   // 0xbd000000d0 // 811748819152
         w8 = w8 << w22
         w8 = w9 & w8
         if !w8 jmp 0x804d71c     // likely

    loc_0x0804d994: // orphan
         x8 = sym.arm64_decode_simd // pc
                                  // 0x804d000
         x8 = x8 + 0              // 0x804d000
                                  // pc
         w8 = [x8 + w21,uxtw 2]   // 0xbd000000cf // 811748819151
         w10 = 0x8
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x10                // x19
         w10 = w10 << w22
         jmp 0x804d830

    loc_0x0804da1c: // orphan
         if (w15 == w17)          // x26 // x26
         b.ne 0x804dc14           // unlikely

    loc_0x0804da24: // orphan
         w2 = 0x18
         ubfx w1,w20,0x17, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil w2,w20,0xb, 3      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x804da34 ()             // 0x804da34(0x2, 0x0, 0x18, 0x0)
         w8 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w0 == 0x2b)          // x26
         w0 = 0x3
         b.hi 0x804d71c           // unlikely

    loc_0x0804da48: // orphan
         w9 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = 0x1                // x26
         x9 = x10 << x9
         x10 = 0x4
         x10 = 0xe000
         x10 = 0xce0              // '\xe0\f'
         if ((x9 & x10) == 0)     // x26
         b.eq 0x804d71c           // unlikely

    loc_0x0804da68: // orphan
         w9 = 0x10                // x19

    loc_0x0804da6c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804df08
         [x19 + 0x46] = (byte) w9
         jmp 0x804dee8

    loc_0x0804da74: // orphan
         if (w23 == w24)          // x26 // x26
         b.eq 0x804dd04           // likely

    loc_0x0804da7c: // orphan
         tbnz w22,0,0x804dd04     // unlikely

    loc_0x0804da80: // orphan
         if w8 jmp 0x804dcc8      // likely

    loc_0x0804da84: // orphan
         if (w21 == 0x1d)         // x26
         b.ne 0x804dcc8           // likely

    loc_0x0804da8c: // orphan
         if ((w22 & 2) == 0)      // x26
         w8 = 0x12
         cinc w8,w8,ne
         jmp 0x804dcec

    loc_0x0804dba8: // orphan
         tbnz w20,0x1c,0x804dda0  // unlikely

    loc_0x0804dbac: // orphan
         if (w17 == 0xe)          // x26
         b.ne 0x804dd64           // likely

    loc_0x0804dbb4: // orphan
         if (w22 == 2)            // x26
         b.ne 0x804d718           // likely

    loc_0x0804dbbc: // orphan
         if ((w20 & 0x20000000) == 0) // x26
         w8 = 0x80                // '\x80'
         cinc w8,w8,ne
         w9 = 0x8
         // STRING XREF from sym.arm64_decode_simd @ 0x804dd7c
         [x19 + 0x46] = (byte) w9
         w9 = 0x1c                // " "
         w10 = 0x20               // x24
         [x19, 0x28] = (w9,2)
         w8 = 0x1                 // x26
         [x19 + 0x47] = (byte) w10
         w9 = ~0x7f               // '\x7f'
         if ((w8 & w20) == 0)     // x26
         w8 = 0x40                // '@'
         ubfx w10,w20,0x10, 4     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w15,w14,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w10,w13,4, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w8,w8,w9, eq
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x48] = (byte) w15
         [x19 + 0x27] = (byte) w8
         [x19 + 0x22] = (byte) w10
         jmp 0x804d71c

    loc_0x0804dc14: // orphan
         w9 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w9,w8,5, 1           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9 - 1
         if (w9 == 0x36)          // x26 // x26
         b.hs 0x804dc40           // likely

    loc_0x0804dc28: // orphan
         x10 = 0x87f1             // '\xf1\x87'
         x10 = 0x21               // '!'
         x10 = 0x87f1             // '\xf1\x87'
         x10 = 0x21               // '!'
         x10 = x10 >> x9
         tbnz w10,0,0x804de9c     // likely

    loc_0x0804dc40: // orphan
         w1 = w22 >> 1
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x804dc4c ()             // 0x804dc4c(0x2, 0x0, 0x0, 0x0)
         w8 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w0 == 0x2b)          // x26
         w0 = 0x3
         b.hi 0x804d71c           // unlikely

    loc_0x0804dc60: // orphan
         w9 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = 0x1                // x26
         x9 = x10 << x9
         x10 = 0x4
         x10 = 0xe000
         x10 = 0xce0              // '\xe0\f'
         if ((x9 & x10) == 0)     // x26
         b.eq 0x804d71c           // unlikely

    loc_0x0804dc80: // orphan
         ubfx w9,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = 0x20               // x24
         w9 = w10 << w9           // x24
         [x19 + 0x46] = (byte) w9
         jmp 0x804dea8

    loc_0x0804dcc0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804e418
         [x19, 0x28] = (w9,2)
         jmp 0x804d71c

    loc_0x0804dcc8: // orphan
         if !w8 jmp 0x804dd04     // unlikely

    loc_0x0804dccc: // orphan
         if (w21 == 0x19)         // x26
         b.ne 0x804dd04           // likely

    loc_0x0804dcd4: // orphan
         w9 = [x19 + 0x40]        // 0xda // 218
         if ((w22 & 2) == 0)      // x26
         w8 = 0x12
         cinc w8,w8,ne
         w9 = w9 | 2
         [x19 + 0x40] = w9

    loc_0x0804dcec: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804da98
         w9 = 0x13
         w10 = 0x2010             // '\x10 '
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19, 0x28] = (w9,2)
         [x19 + 0x46] = (half) w10 // "  "
         jmp 0x804d71c

    loc_0x0804dd04: // orphan
         w9 = w21 + 0x18
         if (w23 == w24)          // x26 // x26
         w1 = w22 >> 1
         csel w2,w9,w21, eq
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x804dd18 ()             // 0x804dd18(0x2, 0x0, 0x18, 0x0)
         if !w0 jmp 0x804d718     // unlikely

    loc_0x0804dd20: // orphan
         w8 = 0x12
         if (w23 == w24)          // x26 // x26
         [x19, 0x28] = (w8,2)
         b.ne 0x804dd3c           // unlikely

    loc_0x0804dd30: // orphan
         w8 = 0x10                // x19
         [x19 + 0x46] = (byte) w8
         jmp 0x804dd5c

    loc_0x0804dd3c: // orphan
         ubfx w9,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = 0x20               // x24
         w8 = w20 >> 0x16
         w9 = w10 << w9           // x24
         [x19 + 0x46] = (byte) w9
         tbz w8,0,0x804dd5c       // likely

    loc_0x0804dd54: // orphan
         ubfx w8,w20,0x1e, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x804d718     // likely

    loc_0x0804dd5c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804dd38
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x804d71c

    loc_0x0804dd64: // orphan
         tbnz w20,0x1d,0x804dda0  // unlikely

    loc_0x0804dd68: // orphan
         if (w17 == 0xf)          // x26
         b.ne 0x804dda0           // likely

    loc_0x0804dd70: // orphan
         x11 = sym.arm64_decode_simd // pc
                                  // 0x804d000
         w10 = w22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x11 + 0            // 0x804d000
                                  // pc
         x12 = 0x804dbcc
         w16 = (word) [x11 + x10,lsl 1] // 0xd1000000d2 // 897648165074
         x12 = x12 + x16,lsl 2
         w9 = 0x8
         w8 = 0x83                // '\x83'
         br x12

    loc_0x0804dda0: // orphan
         w18 = 0x9400
         w18 = 0xbf00
         w0 = 0x1000
         w18 = w20 & w18
         w0 = 0x2f00
         if (w18 == w0)           // x26
         b.ne 0x804ddf4           // likely

    loc_0x0804ddbc: // orphan
         w8 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         x9 = sym.arm64_decode_simd // pc
                                  // 0x804d000
         ubfx x8,x8,0x16, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 + 0              // 0x804d000
                                  // pc
         x10 = 0x804d71c
         w11 = (word) [x9 + x8,lsl 1] // 0xcf000000d0 // 889058230480
         x10 = x10 + x11,lsl 2
         w0 = 0x3
         br x10

    loc_0x0804ddf4: // orphan
         tbz w20,0x17,0x804de78   // likely

    loc_0x0804ddf8: // orphan
         if ((w17 & 3) == 0)      // x26
         b.ne 0x804de78           // likely

    loc_0x0804de00: // orphan
         if (w8 == w17)           // x26
         b.ne 0x804de78           // likely

    loc_0x0804de08: // orphan
         w0 = 0x3
         tbnz w20,0x1c,0x804d71c  // unlikely

    loc_0x0804de10: // orphan
         if (w22 == 3)            // x26
         b.eq 0x804d71c           // unlikely

    loc_0x0804de18: // orphan
         w11 = 0x2010             // '\x10 '
         if ((w17 & 4) == 0)      // x26
         w10 = 0x12
         [x19 + 0x46] = (half) w11 // "  "
         w11 = 0x1                // x26
         w9 = 0x18
         bfi w13,w15,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w12 = ~0x7f              // '\x7f'
         cinc w10,w10,ne
         if ((w11 & w20) == 0)    // x26
         w11 = 0x40               // '@'
         bfi w13,w14,2, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w14,w20,0x10, 4     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19, 0x28] = (w9,2)
         csel w9,w11,w12, eq
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x48] = (byte) w13
         [x19 + 0x27] = (byte) w9
         [x19 + 0x22] = (byte) w14
         if !w8 jmp 0x804d71c     // unlikely

    loc_0x0804de68: // orphan
         w8 = [x19 + 0x40]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x40] = w8
         jmp 0x804d71c

    loc_0x0804de78: // orphan
         if (w17 == 9)            // x26
         b.eq 0x804dfb4           // unlikely

    loc_0x0804de80: // orphan
         if (w17 == 5)            // x26
         b.eq 0x804dfc4           // unlikely

    loc_0x0804de88: // orphan
         if (w17 == 1)            // x26
         b.ne 0x804e060           // likely

    loc_0x0804de90: // orphan
         if w8 jmp 0x804e060      // likely

    loc_0x0804de94: // orphan
         w8 = 0x10                // x19
         jmp 0x804dfcc

    loc_0x0804de9c: // orphan
         x8 = sym.arm64_decode_simd // pc
                                  // 0x804d000
         x8 = x8 + 0              // 0x804d000
                                  // pc
         w8 = [x8 + w9,sxtw 2]    // 0xb1000000cf // 760209211599

    loc_0x0804dea8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804dc90
         w9 = w21 - 6
         if (w9 == 3)             // x26 // x26
         b.lo 0x804ded8           // unlikely

    loc_0x0804deb4: // orphan
         if (w21 == 0xa)          // x26
         b.eq 0x804ded8           // unlikely

    loc_0x0804debc: // orphan
         if (w21 == 0x16)         // x26
         b.ne 0x804df0c           // likely

    loc_0x0804dec4: // orphan
         w0 = 0x3
         if !w22 jmp 0x804d71c    // likely

    loc_0x0804decc: // orphan
         if (w22 == 3)            // x26
         b.eq 0x804d71c           // unlikely

    loc_0x0804ded4: // orphan
         jmp 0x804dee0

    loc_0x0804ded8: // orphan
         if (w22 == 3)            // x26
         b.ne 0x804d718           // likely

    loc_0x0804dee0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804ded4, 0x804df24
         w9 = (byte) [x19 + 0x46] // 0xda // 218
         if !w9 jmp 0x804df00     // unlikely

    loc_0x0804dee8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804da70
         w10 = 0x1b
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x28] = w10
         [x19 + 0x2c] = w8
         [x19 + 0x27] = (byte) w9
         jmp 0x804d71c

    loc_0x0804df00: // orphan
         w9 = 0x8
         w9 = w9 << w22
         jmp 0x804da6c

    loc_0x0804df0c: // orphan
         if (w22 == 3)            // x26
         b.eq 0x804dee0           // unlikely

    loc_0x0804df14: // orphan
         w9 = w20 >> 0xb
         w9 = w9 & 0x1e
         if (w9 == 0x10)          // x26
         b.eq 0x804d718           // unlikely

    loc_0x0804df24: // orphan
         jmp 0x804dee0

    loc_0x0804df28: // orphan
         ubfx w8,w20,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w15,w14,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w8,w13,4, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x22] = (byte) w8
         [x19 + 0x48] = (byte) w15
         jmp 0x804d71c

    loc_0x0804dfb4: // orphan
         if (w8 == 0)             // x26
         w8 = 0x1                 // x26
         cinc w8,w8,ne
         jmp 0x804dfcc

    loc_0x0804dfc4: // orphan
         if w8 jmp 0x804e060      // likely

    loc_0x0804dfc8: // orphan
         w8 = 0x11

    loc_0x0804dfcc: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804de98, 0x804dfc0
         if (w22 == 1)            // x26
         [x19 + 0x2c] = w8
         b.eq 0x804d718           // unlikely

    loc_0x0804dfd8: // orphan
         tbnz w20,0x1c,0x804dfec  // unlikely

    loc_0x0804dfdc: // orphan
         if (w22 == 3)            // x26
         b.ne 0x804dfec           // likely

    loc_0x0804dfe4: // orphan
         ubfx w8,w20,0x1e, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x804d718     // likely

    loc_0x0804dfec: // orphan
         if (w22 == 3)            // x26
         b.ne 0x804dff8           // likely

    loc_0x0804dff4: // orphan
         if w15 jmp 0x804d718     // unlikely

    loc_0x0804dff8: // orphan
         w9 = 0x8
         w8 = 0x18
         // XREFS: STRING 0x0804e5b8  CODE 0x0804e5bc  STRING 0x0804e6c4  
         // XREFS: CODE 0x0804e6c8  STRING 0x0804e6fc  CODE 0x0804e700  
         // XREFS: STRING 0x0804ebac  CODE 0x0804ebb0  STRING 0x0804ed2c  
         // XREFS: CODE 0x0804ed30  STRING 0x0804ed68  CODE 0x0804ed70  
         // XREFS: STRING 0x0804ed78  CODE 0x0804ed80  STRING 0x0804eda8  
         // XREFS: CODE 0x0804edac  STRING 0x0804edb8  CODE 0x0804edbc  
         if (w22 == 0)            // x26 // x26
         w10 = 0x10               // x19
         // DATA XREF from sym.init_module @ 0x804ed40
         w11 = 0x1                // x26
         w9 = w9 << w22
         [x19 + 0x28] = w8
         w8 = ~0x7f               // '\x7f'
         csel w9,w10,w9, eq       // x19
         w10 = 0x40               // '@'
         if ((w11 & w20) == 0)    // x26
         csel w8,w10,w8, eq
         if ((w11 & w20) == 0)    // x26
         csel w8,w8,w9, eq        // x19
         [x19 + 0x46] = (byte) w9
         [x19 + 0x27] = (byte) w8
         if !w22 jmp 0x804d90c    // likely

    loc_0x0804e03c: // orphan
         ubfx w8,w20,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w15,w14,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w22 == 2)            // x26
         // CODE XREF from sym.init_module @ 0x804ed5c
         bfi w8,w13,4, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w9,w15,w14, eq
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x22] = (byte) w8
         [x19 + 0x48] = (byte) w9
         jmp 0x804d71c

    loc_0x0804e060: // orphan
         w8 = 0x9f80              // '\x80\x9f'
         w8 = w20 & w8
         w13 = 0xf00
         if (w8 == w13)           // x26
         b.ne 0x804e0b0           // likely

    loc_0x0804e074: // orphan
         w8 = w20 & 0x780000
         if !w8 jmp 0x804e0b0     // likely

    loc_0x0804e07c: // orphan
         tbz w20,0xa,0x804e094    // likely

    loc_0x0804e080: // orphan
         if w21 jmp 0x804e094     // unlikely

    loc_0x0804e084: // orphan
         if ((w20 & 0x20000000) == 0) // x26
         w8 = 0x8b                // '\x8b'
         cinc w8,w8,ne
         jmp 0x804e160

    loc_0x0804e094: // orphan
         tbnz w20,0x1d,0x804e0b0  // unlikely

    loc_0x0804e098: // orphan
         if (w21 == 0xa)          // x26
         b.ne 0x804e0b0           // likely

    loc_0x0804e0a0: // orphan
         tbnz w20,0xa,0x804e15c   // unlikely

    loc_0x0804e0a4: // orphan
         w8 = w20 & 0xc00000
         if (w8 == 0x400)         // x26
         b.eq 0x804d718           // unlikely

    loc_0x0804e0b0: // orphan
         w8 = 0xc00
         w8 = 0x8f00
         w13 = w20 & w8
         if (w13 == w16)          // x26 // x26
         b.ne 0x804e274           // unlikely

    loc_0x0804e0c4: // orphan
         w13 = w20 & 0xff0000
         if (w13 == 0xf80)        // x26
         b.eq 0x804e0ec           // unlikely

    loc_0x0804e0d0: // orphan
         if (w13 == 0xe00)        // x26
         b.eq 0x804e0f8           // unlikely

    loc_0x0804e0d8: // orphan
         if (w13 == 0xa00)        // x26
         b.ne 0x804e274           // likely

    loc_0x0804e0e0: // orphan
         w13 = 0x1                // x26
         w14 = 0x20               // x24
         jmp 0x804e100

    loc_0x0804e0ec: // orphan
         w13 = 0x1                // x26
         w14 = 0x10               // x19
         jmp 0x804e100

    loc_0x0804e0f8: // orphan
         w13 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w14 = 0x40               // '@'

    loc_0x0804e100: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804e0e8, 0x804e0f4
         w15 = 0xf000
         w15 = 0x2000
         w15 = w20 & w15
         if (w15 == 0xe)          // x26
         [x19 + 0x46] = (byte) w14
         b.lt 0x804e144           // likely

    loc_0x0804e118: // orphan
         b.eq 0x804e228           // unlikely

    loc_0x0804e11c: // orphan
         w16 = 0xd000
         w16 = 0x2000
         if (w15 == w16)          // x26
         b.eq 0x804e230           // unlikely

    loc_0x0804e12c: // orphan
         w16 = 0xc000
         w16 = 0x2000
         if (w15 == w16)          // x26
         b.ne 0x804e274           // likely

    loc_0x0804e13c: // orphan
         w15 = 0x26               // '&'
         jmp 0x804e23c

    loc_0x0804e144: // orphan
         if (w15 == 0xc)          // x26
         b.eq 0x804e238           // unlikely

    loc_0x0804e14c: // orphan
         if (w15 == 0xd)          // x26
         b.ne 0x804e274           // likely

    loc_0x0804e154: // orphan
         w15 = 0x25               // '%'
         jmp 0x804e23c

    loc_0x0804e15c: // orphan
         w8 = 0x8a                // '\x8a'

    loc_0x0804e160: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804e090
         ubfx w9,w20,0x13, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x2c] = w8
         if !w9 jmp 0x804d718     // likely

    loc_0x0804e16c: // orphan
         clz w10,w9               // x9
         w11 = 0x8
         if ((w20 & 0x40000000) == 0) // x26
         w12 = ~0x7f              // '\x7f'
         w13 = 0x40               // '@'
         w10 = w10 ^ 0x1f
         csel w12,w13,w12, eq
         w10 = w11 << w10
         [x19 + 0x27] = (byte) w12
         tbnz w20,0x1e,0x804e1a0  // unlikely

    loc_0x0804e194: // orphan
         w11 = w10 & 0xf8
         if (w11 == 0x40)         // x26
         b.eq 0x804d718           // unlikely

    loc_0x0804e1a0: // orphan
         ubfx w11,w20,0x10, 3     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w13 = w10 << 1
         bfi w11,w9,3, 4          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x46] = (byte) w10
         w9 = w11 - w10
         w10 = w13 - w11
         if (w8 == 0x8a)          // x26
         w12 = 0xd
         csel w8,w9,w10, eq
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x28] = w12
         [x19 + 0x45] = (byte) w8
         jmp 0x804d71c

    loc_0x0804e228: // orphan
         w15 = 0x29               // ')'
         jmp 0x804e23c

    loc_0x0804e230: // orphan
         w15 = 0x28               // '('
         jmp 0x804e23c

    loc_0x0804e238: // orphan
         w15 = 0x27               // ''' // " "

    loc_0x0804e23c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804e140, 0x804e158, 0x804e22c, 0x804e234
         [x19 + 0x2c] = w15
         tbnz w20,0x1c,0x804e270  // unlikely

    loc_0x0804e244: // orphan
         w8 = 0x1                 // x26
         if ((w8 & w20) == 0)     // x26
         cset w9,eq
         w10 = w13 ^ 1            // x26
         w9 = w9 & w10
         tbnz w9,0,0x804d718      // unlikely

    loc_0x0804e25c: // orphan
         if ((w8 & w20) == 0)     // x26
         w8 = 0x40                // '@'
         w9 = ~0x7f               // '\x7f'
         csel w14,w9,w8, ne
         jmp 0x804e378

    loc_0x0804e270: // orphan
         tbnz w20,0x1e,0x804e378  // unlikely

    loc_0x0804e274: // orphan
         w14 = 0xbfff             // '\xff\xbf'
         w13 = w20 & 0xfffffc00
         w14 = 0x1e22             // '\"\x1e'
         if (w13 == w14)          // x26
         jmp ifgt 0x804e2cc       // unlikely

    loc_0x0804e288: // orphan
         w14 = ~0x619e            // '\x9ea'
         if (w13 == w14)
         jmp ifle 0x804e318       // unlikely

    loc_0x0804e294: // orphan
         w14 = 0x9e62             // 'b\x9e'
         // CODE XREFS from sym.arm64_decode_simd @ 0x804e70c, 0x804e710
         if (w13 == w14)
         b.eq 0x804e38c           // unlikely

    loc_0x0804e2a0: // orphan
         w14 = 0x9e63             // 'c\x9e'
         if (w13 == w14)
         b.eq 0x804e3a0           // unlikely

    loc_0x0804e2ac: // orphan
         w14 = 0x1e22             // '\"\x1e'
         if (w13 == w14)          // x26
         b.ne 0x804e41c           // likely

    loc_0x0804e2b8: // orphan
         w8 = 0x20                // x24
         [x19 + 0x27] = (byte) w8
         [x19 + 0x46] = (byte) w8
         w8 = 0x8d                // '\x8d'
         jmp 0x804e410

    loc_0x0804e2cc: // orphan
         w14 = ~0xe19e            // '\x9e\xe1'
         if (w13 == w14)          // x26
         jmp ifle 0x804e348       // likely

    loc_0x0804e2d8: // orphan
         w14 = 0x1e62             // 'b\x1e'
         if (w13 == w14)          // x26
         b.eq 0x804e3b4           // unlikely

    loc_0x0804e2e4: // orphan
         w14 = 0x4000
         w14 = 0x1e62             // 'b\x1e'
         if (w13 == w14)          // x26
         b.eq 0x804e3cc           // unlikely

    loc_0x0804e2f4: // orphan
         w14 = 0x1e63             // 'c\x1e'
         if (w13 == w14)          // x26
         b.ne 0x804e41c           // likely

    loc_0x0804e300: // orphan
         w8 = 0x40                // '@'
         w9 = 0x20                // x24
         [x19 + 0x27] = (byte) w8 // " \r"
         [x19 + 0x46] = (byte) w9 // "  "
         w8 = 0x93                // '\x93'
         jmp 0x804e410

    loc_0x0804e318: // orphan
         w14 = 0x9e22             // '\"\x9e'
         if (w13 == w14)
         b.eq 0x804e3e4           // unlikely

    loc_0x0804e324: // orphan
         w14 = 0x9e23             // '#\x9e'
         if (w13 == w14)
         b.ne 0x804e41c           // likely

    loc_0x0804e330: // orphan
         w8 = 0x20                // x24
         w9 = 0x40                // '@'
         [x19 + 0x27] = (byte) w8 // "@\r"
         [x19 + 0x46] = (byte) w9 // "  "
         w8 = 0x92                // '\x92'
         jmp 0x804e410

    loc_0x0804e348: // orphan
         w14 = 0xc000
         w14 = 0x1e22             // '\"\x1e'
         if (w13 == w14)          // x26
         b.eq 0x804e3fc           // unlikely

    loc_0x0804e358: // orphan
         w14 = 0x1e23             // '#\x1e'
         if (w13 == w14)          // x26
         b.ne 0x804e41c           // likely

    loc_0x0804e364: // orphan
         w8 = 0x20                // x24
         [x19 + 0x27] = (byte) w8 // " \r"
         [x19 + 0x46] = (byte) w8 // "@ "
         w8 = 0x91                // '\x91'
         jmp 0x804e410

    loc_0x0804e378: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804e26c
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x27] = (byte) w14 // " \r"
         w8 = 0x19

    loc_0x0804e384: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804eb84
         [x19 + 0x28] = w8        // "\r"
         jmp 0x804d71c

    loc_0x0804e38c: // orphan
         w8 = 0x40                // '@'
         [x19 + 0x27] = (byte) w8
         [x19 + 0x46] = (byte) w8 // "  "
         w8 = 0x90                // '\x90'
         jmp 0x804e410

    loc_0x0804e3a0: // orphan
         w8 = 0x40                // '@'
         [x19 + 0x27] = (byte) w8
         [x19 + 0x46] = (byte) w8 // "@ "
         w8 = 0x94                // '\x94'
         jmp 0x804e410

    loc_0x0804e3b4: // orphan
         w8 = 0x40                // '@'
         w9 = 0x20                // x24
         [x19 + 0x27] = (byte) w8
         [x19 + 0x46] = (byte) w9 // "@ "
         w8 = 0x8f                // '\x8f'
         jmp 0x804e410

    loc_0x0804e3cc: // orphan
         w8 = 0x20                // x24
         w9 = 0x40                // '@'
         [x19 + 0x27] = (byte) w8
         [x19 + 0x46] = (byte) w9 // "  "
         w8 = 0x97                // '\x97'
         jmp 0x804e410

    loc_0x0804e3e4: // orphan
         w8 = 0x20                // x24
         w9 = 0x40                // '@'
         [x19 + 0x27] = (byte) w8
         [x19 + 0x46] = (byte) w9 // "@ "
         w8 = 0x8e                // '\x8e'
         jmp 0x804e410

    loc_0x0804e3fc: // orphan
         w8 = 0x40                // '@'
         w9 = 0x20                // x24
         [x19 + 0x27] = (byte) w8
         [x19 + 0x46] = (byte) w9 // "@ "
         w8 = 0x98                // '\x98'

    loc_0x0804e410: // orphan
         // XREFS: CODE 0x0804e2c8  CODE 0x0804e314  CODE 0x0804e344  
         // XREFS: CODE 0x0804e374  CODE 0x0804e39c  CODE 0x0804e3b0  
         // XREFS: CODE 0x0804e3c8  CODE 0x0804e3e0  CODE 0x0804e3f8  
         // XREFS: CODE 0x0804e508  CODE 0x0804e514  CODE 0x0804e5f4  
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x9
         jmp 0x804dcc0

    loc_0x0804e41c: // orphan
         w8 = w8 + 0xbff,lsl 12
         w13 = 0xd7ff             // '\xff\xd7'
         w8 = w20 & w8
         w13 = 0xe21              // '!\x0e'
         if (w8 == w13)           // x26
         jmp ifgt 0x804e46c       // unlikely

    loc_0x0804e434: // orphan
         w13 = 0xa800
         w13 = 0xe21              // '!\x0e'
         if (w8 == w13)           // x26
         b.eq 0x804e4a4           // unlikely

    loc_0x0804e444: // orphan
         w13 = 0xb800
         w13 = 0xe21              // '!\x0e'
         if (w8 == w13)           // x26
         b.eq 0x804e4ac           // unlikely

    loc_0x0804e454: // orphan
         w13 = 0xc800
         w13 = 0xe21              // '!\x0e'
         if (w8 == w13)           // x26
         b.ne 0x804e518           // likely

    loc_0x0804e464: // orphan
         w8 = 0x5
         jmp 0x804e4c8

    loc_0x0804e46c: // orphan
         w13 = 0xd800
         w13 = 0xe21              // '!\x0e'
         if (w8 == w13)           // x26
         b.eq 0x804e4b4           // unlikely

    loc_0x0804e47c: // orphan
         w13 = 0xa800
         w13 = 0xea1              // '\xa1\x0e'
         if (w8 == w13)           // x26
         b.eq 0x804e4c4           // unlikely

    loc_0x0804e48c: // orphan
         w13 = 0xb800
         w13 = 0xea1              // '\xa1\x0e'
         if (w8 == w13)           // x26
         b.ne 0x804e518           // likely

    loc_0x0804e49c: // orphan
         w8 = 0x4
         jmp 0x804e4c8

    loc_0x0804e4a4: // orphan
         w8 = 0x1                 // x26
         jmp 0x804e4c8

    loc_0x0804e4ac: // orphan
         w8 = 0x3
         jmp 0x804e4c8

    loc_0x0804e4b4: // orphan
         if ((w20 & 0x20000000) == 0) // x26
         w8 = 0x9b                // '\x9b'
         cinc w8,w8,ne
         jmp 0x804e4d8

    loc_0x0804e4c4: // orphan
         w8 = 0x2

    loc_0x0804e4c8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804e468, 0x804e4a0, 0x804e4a8, 0x804e4b0
         if ((w20 & 0x20000000) == 0) // x26
         w9 = 0x99                // '\x99'
         [x19 + 0x30] = w8
         cinc w8,w9,ne

    loc_0x0804e4d8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804e4c0
         if ((w20 & 0x400000) == 0) // x26
         w9 = 0x40                // '@'
         w10 = 0x20               // x24
         csel w10,w10,w9, eq
         [x19 + 0x46] = (byte) w10 // "  "
         tbnz w20,0x1c,0x804e50c  // unlikely

    loc_0x0804e4f0: // orphan
         if ((w20 & 0x40000000) == 0) // x26
         w10 = ~0x7f              // '\x7f'
         csel w9,w9,w10, eq
         [x19 + 0x27] = (byte) w9
         tbnz w20,0x1e,0x804e410  // unlikely

    loc_0x0804e504: // orphan
         tbnz w20,0x16,0x804d718  // unlikely

    loc_0x0804e508: // orphan
         jmp 0x804e410

    loc_0x0804e50c: // orphan
         tbz w20,0x1e,0x804d718   // likely

    loc_0x0804e510: // orphan
         [x19 + 0x27] = (byte) w10
         jmp 0x804e410

    loc_0x0804e518: // orphan
         w8 = 0xfc00
         w8 = 0x7fa0              // '\xa0\x7f'
         w13 = w20 & w8
         // CODE XREFS from sym.arm64_decode_ldst @ 0x804c474, 0x804c478
         w14 = 0x1e20             // ' \x1e'
         if (w13 == w14)          // x26
         b.ne 0x804e550           // likely

    loc_0x0804e530: // orphan
         w14 &= w20
         ubfx w13,w20,0x13, 2     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.eq 0x804e5b8           // unlikely

    loc_0x0804e53c: // orphan
         if (w14 == 0x40)         // x26
         b.ne 0x804e550           // likely

    loc_0x0804e544: // orphan
         if w13 jmp 0x804e550     // unlikely

    loc_0x0804e548: // orphan
         w8 = 0x5
         jmp 0x804e5c4

    loc_0x0804e550: // orphan
         w13 = 0xc00
         w13 = 0xff20             // ' \xff'
         w13 = w20 & w13
         if (w13 == w11)          // x26 // x26
         b.ne 0x804e580           // unlikely

    loc_0x0804e564: // orphan
         if !w22 jmp 0x804e620    // likely

    loc_0x0804e568: // orphan
         if (w22 == 3)            // x26
         b.eq 0x804e628           // unlikely

    loc_0x0804e570: // orphan
         if (w22 == 1)            // x26
         b.ne 0x804d718           // likely

    loc_0x0804e578: // orphan
         w8 = 0x40                // '@'
         jmp 0x804e62c

    loc_0x0804e580: // orphan
         w11 = 0x2000
         w11 = 0x1e20             // ' \x1e'
         w14 = w20 & w12
         w15 = w11 + 2,lsl 12
         if (w14 == w15)          // x26
         b.ne 0x804e5f8           // likely

    loc_0x0804e598: // orphan
         w0 = 0x3
         if !w22 jmp 0x804e6dc    // likely

    loc_0x0804e5a0: // orphan
         if (w22 == 3)            // x26
         b.eq 0x804e6e4           // unlikely

    loc_0x0804e5a8: // orphan
         if (w22 == 1)            // x26
         b.ne 0x804d71c           // likely

    loc_0x0804e5b0: // orphan
         w8 = 0x40                // '@'
         jmp 0x804e6e8

    loc_0x0804e5b8: // orphan
         x8 = 0x804e000
         x8 = x8 + 0
         w8 = [x8 + w13,uxtw 2]   // 0xb5000000cf // 777389080783

    loc_0x0804e5c4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804e54c
         [x19 + 0x30] = w8
         if (w20 == 0)            // x26
         w8 = 0x40                // '@'
         w9 = 0x20                // x24
         csel w11,w9,w8, ge       // x24
         if ((w20 & 0x400000) == 0) // x26
         w10 = 0x95               // '\x95'
         csel w8,w9,w8, eq
         if ((w20 & 0x10000) == 0) // x26
         [x19 + 0x46] = (byte) w8 // "@ "
         cinc w8,w10,ne
         [x19 + 0x27] = (byte) w11
         jmp 0x804e410

    loc_0x0804e5f8: // orphan
         w14 = w20 >> 0x18
         if (w14 == 0x1f)         // x26
         b.ne 0x804e658           // likely

    loc_0x0804e604: // orphan
         if !w22 jmp 0x804e75c    // likely

    loc_0x0804e608: // orphan
         if (w22 == 3)            // x26
         b.eq 0x804e764           // unlikely

    loc_0x0804e610: // orphan
         if (w22 == 1)            // x26
         b.ne 0x804d718           // likely

    loc_0x0804e618: // orphan
         w8 = 0x40                // '@'
         jmp 0x804e768

    loc_0x0804e620: // orphan
         w8 = 0x20                // x24
         jmp 0x804e62c

    loc_0x0804e628: // orphan
         w8 = 0x10                // x19

    loc_0x0804e62c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804e57c, 0x804e624
         ubfx w9,w20,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 8)             // x26
         b.ls 0x804e640           // likely

    loc_0x0804e638: // orphan
         w0 = 0x1                 // x26
         jmp 0x804d71c

    loc_0x0804e640: // orphan
         w10 = 0x2
         if (w9 == 8)             // x26
         [x19 + 0x28] = w10
         b.ne 0x804e6c4           // likely

    loc_0x0804e650: // orphan
         w9 = 0xa
         jmp 0x804e6d0

    loc_0x0804e658: // orphan
         w12 = w12 + 8,lsl 12
         w12 = w20 & w12
         if (w12 == w11)          // x26 // x26
         b.ne 0x804e720           // unlikely

    loc_0x0804e668: // orphan
         if ((w20 & 7) == 0)      // x26
         w0 = 0x3
         b.ne 0x804d71c           // likely

    loc_0x0804e674: // orphan
         if (w22 == 2)            // x26
         b.eq 0x804d71c           // unlikely

    loc_0x0804e67c: // orphan
         if ((w20 & 0x10) == 0)   // x26
         w8 = 0x20                // x24
         w9 = 0x5
         cinc w10,w8,ne
         [x19, 0x28] = (w9,2)
         tbz w20,3,0x804e6a0      // likely

    loc_0x0804e694: // orphan
         w9 = [x19 + 0x40]        // 0xda // 218
         w9 = w9 | 1
         [x19 + 0x40] = w9

    loc_0x0804e6a0: // orphan
         if (w22 == 0)            // x26 // x26
         w9 = 0x40                // '@'
         csel w8,w8,w9, eq
         if (w22 == 3)            // x26
         w9 = 0x10                // x19
         csel w8,w9,w8, eq

    loc_0x0804e6b8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804e7f4, 0x804ea24
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x27] = (byte) w8
         jmp 0x804d71c

    loc_0x0804e6c4: // orphan
         x10 = 0x804e000
         x10 = x10 + 0
         w9 = [x10 + w9,uxtw 2]   // 0xb1000000d1 // 760209211601

    loc_0x0804e6d0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804e654
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x2c] = w9        // U"!\x02"
         jmp 0x804e874

    loc_0x0804e6dc: // orphan
         w8 = 0x20                // x24
         jmp 0x804e6e8

    loc_0x0804e6e4: // orphan
         w8 = 0x10                // x19

    loc_0x0804e6e8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804e5b4, 0x804e6e0
         ubfx w9,w20,0xf, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x28] = w0
         if (w9 == 0xf)           // x26
         w0 = 0x1                 // x26
         b.hi 0x804d71c           // unlikely

    loc_0x0804e6fc: // orphan
         x10 = 0x804e000
         x10 = x10 + 0
         x11 = 0x804d71c
         w12 = (word) [x10 + x9,lsl 1] // 0xd0000000d1 // 893353197777
         x11 = x11 + x12,lsl 2
         br x11

    loc_0x0804e720: // orphan
         w11 = 0xc00
         w11 = 0x1e20             // ' \x1e'
         if (w13 == w11)          // x26
         b.eq 0x804e794           // unlikely

    loc_0x0804e730: // orphan
         w11 = 0x400
         w11 = 0x1e20             // ' \x1e'
         if (w13 == w11)          // x26
         b.ne 0x804e7b0           // likely

    loc_0x0804e740: // orphan
         if !w22 jmp 0x804e8d4    // likely

    loc_0x0804e744: // orphan
         if (w22 == 3)            // x26
         b.eq 0x804e8dc           // unlikely

    loc_0x0804e74c: // orphan
         if (w22 == 1)            // x26
         b.ne 0x804d718           // likely

    loc_0x0804e754: // orphan
         w8 = 0x40                // '@'
         jmp 0x804e8e0

    loc_0x0804e75c: // orphan
         w8 = 0x20                // x24
         jmp 0x804e768

    loc_0x0804e764: // orphan
         w8 = 0x10                // x19

    loc_0x0804e768: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804e61c, 0x804e760
         w10 = w20 >> 0x14
         w10 = w10 & 2
         w11 = 0x14               // "/"
         bfxil w10,w20,0xf, 1     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x4
         w10 = w10 | w11          // "/"
         [x19 + 0x27] = (byte) w8

    loc_0x0804e788: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804e908
         [x19, 0x28] = (w9,2)
         [x19 + 0x46] = (byte) w8 // "@ "
         jmp 0x804d71c

    loc_0x0804e794: // orphan
         if !w22 jmp 0x804e90c    // likely

    loc_0x0804e798: // orphan
         if (w22 == 3)            // x26
         b.eq 0x804e914           // unlikely

    loc_0x0804e7a0: // orphan
         if (w22 == 1)            // x26
         b.ne 0x804d718           // likely

    loc_0x0804e7a8: // orphan
         w8 = 0x40                // '@'
         jmp 0x804e918

    loc_0x0804e7b0: // orphan
         w8 = w8 + 0x1e0,lsl 12
         w8 = w20 & w8
         w11 = 0x1e26             // '&\x1e'
         if (w8 == w11)           // x26
         b.ne 0x804e880           // likely

    loc_0x0804e7c4: // orphan
         ubfx w8,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == w20)           // x26 // x26
         b.ne 0x804d718           // unlikely

    loc_0x0804e7d0: // orphan
         if ((w20 & 0x10000) == 0) // x26
         w9 = 0x35                // '5'
         w8 = 0x8
         w10 = 0x40               // '@'
         w11 = 0x20               // x24
         cinc w9,w9,eq
         if (w20 == 0)            // x26
         [x19, 0x28] = (w8,2)
         csel w8,w11,w10, ge      // x24
         jmp 0x804e6b8

    loc_0x0804e874: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804e6d8
         [x19 + 0x27] = (byte) w8
         [x19 + 0x46] = (byte) w8
         jmp 0x804d71c

    loc_0x0804e880: // orphan
         w8 = 0x8400
         w8 = 0xbfe0              // '\xe0\xbf'
         w8 = w20 & w8
         w11 = 0x2e00
         if (w8 == w11)           // x26
         b.ne 0x804e93c           // likely

    loc_0x0804e898: // orphan
         x8 = 0xa
         x8 = 0x37                // '7'
         ubfx w9,w20,0xb, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 &= w20
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         [x19 + 0x28] = x8
         csel w8,w12,w11, eq
         if (w9 == 7)             // x26
         [x19 + 0x45] = (byte) w9
         ccmp w10,0,0, hi
         w9 = 0x3
         csel w0,w9,wzr, eq
         [x19 + 0x27] = (byte) w8
         jmp 0x804d71c

    loc_0x0804e8d4: // orphan
         w8 = 0x20                // x24
         jmp 0x804e8e0

    loc_0x0804e8dc: // orphan
         w8 = 0x10                // x19

    loc_0x0804e8e0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804e758, 0x804e8d8
         if ((w20 & 0x10) == 0)   // x26
         w10 = 0x22               // '\"'
         ubfx w11,w20,0xc, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w12 = w20 & 0xf
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x6
         [x19 + 0x27] = (byte) w8
         cinc w10,w10,ne
         [x19 + 0x44] = (byte) w11
         [x19 + 0x45] = (byte) w12
         jmp 0x804e788

    loc_0x0804e90c: // orphan
         w8 = 0x20                // x24
         jmp 0x804e918

    loc_0x0804e914: // orphan
         w8 = 0x10                // x19

    loc_0x0804e918: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804e7ac, 0x804e910
         x9 = 0x7
         x9 = 0x24                // '$'
         ubfx w10,w20,0xc, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x27] = (byte) w8
         [x19 + 0x28] = x9        // U"\n7\x02"
         [x19 + 0x44] = (byte) w10
         [x19 + 0x46] = (byte) w8
         jmp 0x804d71c

    loc_0x0804e93c: // orphan
         w8 = w20 & 0xfe0000
         if (w8 == 0xf80)         // x26
         b.eq 0x804e960           // unlikely

    loc_0x0804e948: // orphan
         if (w8 == 0xe00)         // x26
         b.eq 0x804e968           // unlikely

    loc_0x0804e950: // orphan
         if (w8 == 0xa00)         // x26
         b.ne 0x804e9b0           // likely

    loc_0x0804e958: // orphan
         w8 = 0x20                // x24
         jmp 0x804e970

    loc_0x0804e960: // orphan
         w8 = 0x10                // x19
         jmp 0x804e970

    loc_0x0804e968: // orphan
         tbz w20,0x1e,0x804d718   // likely

    loc_0x0804e96c: // orphan
         w8 = 0x40                // '@'

    loc_0x0804e970: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804e95c, 0x804e964
         w11 = 0xf800
         w10 = w20 & w10
         w11 = 0xe00
         if (w10 == w11)          // x26
         [x19 + 0x46] = (byte) w8
         b.eq 0x804e9fc           // unlikely

    loc_0x0804e988: // orphan
         w8 = 0xf800
         w8 = 0x2e01
         if (w10 == w8)           // x26
         b.eq 0x804ea04           // unlikely

    loc_0x0804e998: // orphan
         w8 = 0xf800
         w8 = 0x2e00
         if (w10 == w8)           // x26
         b.ne 0x804e9b0           // likely

    loc_0x0804e9a8: // orphan
         w8 = 0xd
         jmp 0x804ea08

    loc_0x0804e9b0: // orphan
         w8 = 0xfc00
         w8 = 0xbf3f              // '?\xbf'
         w10 = 0x800
         w8 = w20 & w8
         w10 = 0x2e20             // ' .'
         if (w8 == w10)           // x26
         b.eq 0x804ea28           // unlikely

    loc_0x0804e9cc: // orphan
         w10 = 0x1800
         w10 = 0xe20              // ' \x0e'
         if (w8 == w10)           // x26
         b.eq 0x804ea38           // unlikely

    loc_0x0804e9dc: // orphan
         w10 = 0x800
         w10 = 0xe20              // ' \x0e'
         if (w8 == w10)           // x26
         b.ne 0x804ea68           // likely

    loc_0x0804e9ec: // orphan
         if (w22 == 3)            // x26
         b.eq 0x804d718           // unlikely

    loc_0x0804e9f4: // orphan
         w8 = 0x4e                // 'N'
         jmp 0x804ea40

    loc_0x0804e9fc: // orphan
         w8 = 0xc
         jmp 0x804ea08

    loc_0x0804ea04: // orphan
         w8 = 0xe

    loc_0x0804ea08: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804e9ac, 0x804ea00
         w9 = 0x15
         w10 = 0x1                // x26
         w11 = ~0x7f              // '\x7f'
         [x19, 0x28] = (w9,2)
         if ((w10 & w20) == 0)    // x26
         w8 = 0x40                // '@'
         csel w8,w8,w11, eq
         jmp 0x804e6b8

    loc_0x0804ea28: // orphan
         if (w22 == 1)            // x26
         b.hi 0x804d718           // unlikely

    loc_0x0804ea30: // orphan
         w8 = 0x4f                // 'O'
         jmp 0x804ea40

    loc_0x0804ea38: // orphan
         if w22 jmp 0x804d718     // unlikely

    loc_0x0804ea3c: // orphan
         w8 = 0x50                // 'P'

    loc_0x0804ea40: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804e9f8, 0x804ea34
         w9 = 0x16
         if ((w20 & 0x40000000) == 0) // x26
         w10 = ~0x7f              // '\x7f'
         w11 = 0x40               // '@'
         w12 = 0x8
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19, 0x28] = (w9,2)
         csel w8,w11,w10, eq
         w9 = w12 << w22
         jmp 0x804d36c

    loc_0x0804ea68: // orphan
         w8 = 0xfc00
         w8 = 0xdfbf              // '\xbf\xdf'
         w10 = 0xd800
         w8 = w20 & w8
         w10 = 0x5e30             // '0^'
         if (w8 == w10)           // x26
         b.ne 0x804ea9c           // likely

    loc_0x0804ea84: // orphan
         tbnz w20,0x1d,0x804eae0  // unlikely

    loc_0x0804ea88: // orphan
         tbnz w20,0x16,0x804d718  // unlikely

    loc_0x0804ea8c: // orphan
         w8 = 0x10                // x19
         [x19 + 0x46] = (byte) w8
         w8 = 0x20                // x24
         jmp 0x804eaf8

    loc_0x0804ea9c: // orphan
         w8 = w9 + 0x7f,lsl 12
         w9 = 0xc7ff              // '\xff\xc7'
         w8 = w20 & w8
         w9 = 0xeb0               // '\xb0\x0e'
         if (w8 == w9)            // x26
         w0 = 0x1                 // x26
         jmp ifgt 0x804eb10       // unlikely

    loc_0x0804eab8: // orphan
         w9 = 0xc800
         w9 = 0xe30               // '0\x0e'
         if (w8 == w9)            // x26
         b.eq 0x804eb38           // unlikely

    loc_0x0804eac8: // orphan
         w9 = 0xf800
         w9 = 0xe30               // '0\x0e'
         if (w8 == w9)            // x26
         b.ne 0x804d71c           // likely

    loc_0x0804ead8: // orphan
         w8 = 0x33                // '3'
         jmp 0x804eb44

    loc_0x0804eae0: // orphan
         if ((w20 & 0x400000) == 0) // x26
         w8 = 0x40                // '@'
         w9 = 0x20                // x24
         csel w8,w9,w8, eq
         [x19 + 0x46] = (byte) w8
         w8 = w8 << 1

    loc_0x0804eaf8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804ea98
         x9 = 0x1a
         x9 = 0x18
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x28] = x9
         [x19 + 0x27] = (byte) w8
         jmp 0x804d71c

    loc_0x0804eb10: // orphan
         w9 = 0xf800
         w9 = 0xeb0               // '\xb0\x0e'
         if (w8 == w9)            // x26
         b.eq 0x804eb40           // unlikely

    loc_0x0804eb20: // orphan
         w9 = 0xc800
         w9 = 0xeb0               // '\xb0\x0e'
         if (w8 == w9)            // x26
         b.ne 0x804d71c           // likely

    loc_0x0804eb30: // orphan
         w8 = 0x32                // '2'
         jmp 0x804eb44

    loc_0x0804eb38: // orphan
         w8 = 0x31                // '1'
         jmp 0x804eb44

    loc_0x0804eb40: // orphan
         w8 = 0x34                // '4'

    loc_0x0804eb44: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x804eadc, 0x804eb34, 0x804eb3c
         [x19 + 0x2c] = w8
         tbnz w20,0x1d,0x804eb68  // unlikely

    loc_0x0804eb4c: // orphan
         w8 = 0x10                // x19
         if ((w20 & 0x40000000) == 0) // x26
         w9 = ~0x7f               // '\x7f'
         w10 = 0x40               // '@'
         [x19 + 0x46] = (byte) w8 // "@ "
         csel w8,w10,w9, eq
         jmp 0x804eb78

    loc_0x0804eb68: // orphan
         tbz w20,0x1e,0x804d718   // likely

    loc_0x0804eb6c: // orphan
         w8 = 0x20                // x24
         [x19 + 0x46] = (byte) w8
         w8 = 0x80                // '\x80'

    loc_0x0804eb78: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x804eb64
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x27] = (byte) w8
         w8 = 0x1a
         jmp 0x804e384

}

/* ===== 0x0804b018 ===== */
int sym.arm64_decode_insn_has_effect (int esi, int edx) {
    loc_0x804b018:
        if !x1 jmp 0x804b054 // likely
            
    loc_0x804b054:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // lr
         // } else {
    loc_0x804b01c:
        sp = sp - 0x70
        [sp, 0x50] = (x29,2)
        [var_60h] = x19 // " "
        x29 = var_50h
        x8 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x804b034 ()  // 0x804b034(0x0, 0x0, 0x0, 0x0)
        x8 = [var_8h] // 0x4 // 4
        (x29, 2) = 3  // sp // "sB" lr
        bics xzr,x19,x8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = [var_60h] // 0x4 // 4
        cset w0,eq
        sp = arg_70h
        // lr
        }
        return eax;
}

/* ===== 0x0800c2f0 ===== */
int sym.__typeid__ZTSFbyPvmS_E_global_addr (int esi, int edx) {
    loc_0x800c2f0:
        jmp sym.__typeid__ZTSFbyPvmS_E_global_addr // pc
}

/* ===== 0x0800c2d0 ===== */
int sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204.cfi_jt (int esi, int edx) {
    loc_0x800c2d0:
        jmp sym.brk_heartbeat_fn_0e30e06c654f6bff65c295eded426204.cfi_jt // pc
}

/* ===== 0x0800c2d4 ===== */
int sym.brk_mm_fault_entry_0e30e06c654f6bff65c295eded426204.cfi_jt (int esi, int edx) {
    loc_0x800c2d4:
        jmp sym.brk_mm_fault_entry_0e30e06c654f6bff65c295eded426204.cfi_jt // pc
}

/* ===== 0x0800c2d8 ===== */
int sym.brk_mm_fault_ret_0e30e06c654f6bff65c295eded426204.cfi_jt (int esi, int edx) {
    loc_0x800c2d8:
        jmp sym.brk_mm_fault_ret_0e30e06c654f6bff65c295eded426204.cfi_jt // pc
}

/* ===== 0x0800c2e0 ===== */
int sym.brk_restore_ttbr0_cb_0e30e06c654f6bff65c295eded426204.cfi_jt (int esi, int edx) {
    loc_0x800c2e0:
        jmp sym.brk_restore_ttbr0_cb_0e30e06c654f6bff65c295eded426204.cfi_jt // pc
}

/* ===== 0x0800c2cc ===== */
int sym.brk_switch_to_hook_0e30e06c654f6bff65c295eded426204.cfi_jt (int esi, int edx) {
    loc_0x800c2cc:
        jmp sym.brk_switch_to_hook_0e30e06c654f6bff65c295eded426204.cfi_jt // pc
}

/* ===== 0x0800c2bc ===== */
int sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204.cfi_jt (int esi, int edx) {
    loc_0x800c2bc:
        jmp sym.brk_user_break_handler_0e30e06c654f6bff65c295eded426204.cfi_jt // pc
}

/* ===== 0x0800c300 ===== */
int sym.chunk_read_kmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c.cfi_jt (int esi, int edx) {
    loc_0x800c300:
        jmp sym.chunk_read_kmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c.cfi_jt // pc
}

/* ===== 0x0800c2fc ===== */
int sym.chunk_read_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c.cfi_jt (int esi, int edx) {
    loc_0x800c2fc:
        jmp sym.chunk_read_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c.cfi_jt // pc
}

/* ===== 0x0800c2f4 ===== */
int sym.chunk_read_pte_6e0ef9c12ffe46e1d24e73d5aa5ea16c.cfi_jt (int esi, int edx) {
    loc_0x800c2f4:
        jmp sym.chunk_read_pte_6e0ef9c12ffe46e1d24e73d5aa5ea16c.cfi_jt // pc
}

/* ===== 0x0800c2f8 ===== */
int sym.chunk_read_vmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c.cfi_jt (int esi, int edx) {
    loc_0x800c2f8:
        jmp sym.chunk_read_vmap_6e0ef9c12ffe46e1d24e73d5aa5ea16c.cfi_jt // pc
}

/* ===== 0x0800c304 ===== */
int sym.chunk_write_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c.cfi_jt (int esi, int edx) {
    loc_0x800c304:
        jmp sym.chunk_write_linear_6e0ef9c12ffe46e1d24e73d5aa5ea16c.cfi_jt // pc
}

/* ===== 0x0800c2b8 ===== */
int sym.cleanup_module.cfi_jt (int esi, int edx) {
    loc_0x800c2b8:
        jmp sym.cleanup_module.cfi_jt // pc
}

/* ===== 0x0800c2b0 ===== */
int sym.delayed_work_timer_fn.cfi_jt (int esi, int edx) {
    loc_0x800c2b0:
        jmp sym.delayed_work_timer_fn.cfi_jt // pc
}

/* ===== 0x0800c2ac ===== */
int sym.gyro_sendto_handler_fdb83cf1522c16a856bfbce63099cb98.cfi_jt (int esi, int edx) {
    loc_0x800c2ac:
        jmp sym.gyro_sendto_handler_fdb83cf1522c16a856bfbce63099cb98.cfi_jt // pc
}

/* ===== 0x0800c2e8 ===== */
int sym.hook_ioctl.cfi_jt (int esi, int edx) {
    loc_0x800c2e8:
        jmp sym.hook_ioctl.cfi_jt // pc
}

/* ===== 0x0800c2ec ===== */
int sym.hook_ptrace_39cce782030416169421eccb2b9f4387.cfi_jt (int esi, int edx) {
    loc_0x800c2ec:
        jmp sym.hook_ptrace_39cce782030416169421eccb2b9f4387.cfi_jt // pc
}

/* ===== 0x0800c2dc ===== */
int sym.hw_bp_handler_e67fb88cc2f08ac7d3de047d864fd9b9.cfi_jt (int esi, int edx) {
    loc_0x800c2dc:
        jmp sym.hw_bp_handler_e67fb88cc2f08ac7d3de047d864fd9b9.cfi_jt // pc
}

/* ===== 0x0800c2e4 ===== */
int sym.hw_bp_step_handler_e67fb88cc2f08ac7d3de047d864fd9b9.cfi_jt (int esi, int edx) {
    loc_0x800c2e4:
        jmp sym.hw_bp_step_handler_e67fb88cc2f08ac7d3de047d864fd9b9.cfi_jt // pc
}

/* ===== 0x0800c2c4 ===== */
int sym.init_module.cfi_jt (int esi, int edx) {
    loc_0x800c2c4:
        jmp sym.init_module.cfi_jt // pc
}

/* ===== 0x0800c2c0 ===== */
int sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65.cfi_jt (int esi, int edx) {
    loc_0x800c2c0:
        jmp sym.my_do_mem_abort_836e98042425abdcfebaaaa70ed6fa65.cfi_jt // pc
}

/* ===== 0x0800c2b4 ===== */
int sym.shadow_fault_exit.cfi_jt (int esi, int edx) {
    loc_0x800c2b4:
        jmp sym.shadow_fault_exit.cfi_jt // pc
}

/* ===== 0x0800c2c8 ===== */
int sym.shadow_fault_init.cfi_jt (int esi, int edx) {
    loc_0x800c2c8:
        jmp sym.shadow_fault_init.cfi_jt // pc
}

/* ===== 0x0800ccb4 ===== */
int sym.process_memory_rw.llvm.5561942588920149454 (int esi, int edx) {
    loc_0x800ccb4:
        sp = sp - 0xd0
        [sp, 0x70] = (x29,2)
        [sp, 0x80] = (x28,2)
        [sp, 0x90] = (x26,2)
        [sp, 0xa0] = (x24,2)
        [sp, 0xb0] = (x22,2)
        [sp, 0xc0] = (x20,2)
        x29 = var_70h
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [var_1ch] = w7 // arg8
        [sp, 0x28] = (x5,2) // arg6
        [x29, -0x10] = (xzr,2)
        [x29, -0x20] = (xzr,2)
        [x29 = xzr
        [var_20h] = x2 // arg3
        if !x2 jmp 0x800cebc // likely
            
    loc_0x800cebc:
        // CODE XREFS from sym.process_memory_rw.llvm.5561942588920149454 @ 0x800ccf4, 0x800ccfc, 0x800cd10, 0x800cea4
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_d0h
        0x0800ced8
         // } else {
    loc_0x800ccf8:
        x21 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        if !x3 jmp 0x800cebc // likely
        }
        return eax;
    loc_0x800cd00:
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w20 = w6      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg7
        x25 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x800cd0c ()  // "`\r" // 0x800cd0c(0x2, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800cebc // unlikely
    loc_0x800cd14:
        x27 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800cd18 ()  // 0x800cd18(0x0, 0x0, 0x0, 0x0)
        x0 = x27      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800cd24 ()  // 0x800cd24(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800cd38 // likely
            
    loc_0x800cd38:
        // CODE XREF from sym.process_memory_rw.llvm.5561942588920149454 @ 0x800cd28
        x26 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800cd3c:
        // CODE XREF from sym.process_memory_rw.llvm.5561942588920149454 @ 0x800cd34
        0x800cd3c ()  // 0x800cd3c(0x0, 0x0, 0x0, 0x0)
        x0 = x27      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800cd44 ()  // 0x800cd44(0x0, 0x0, 0x0, 0x0)
        if !x26 jmp 0x800cea0 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800cd4c: // orphan
             x0 = x26 + 0x68          // int64_t arg1
             [sp] = x0
             0x800cd54 ()             // 0x800cd54(0x69, 0x0, 0x0, 0x0)
             x9 = [var_30h]           // 0x4 // 4
             x8 = sym.__cfi_check     // 0x800c000
             x8 = x8 + 0              // 0x800c000
                                      // sym.__cfi_check
             x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x8 = x9 - x8
             w19 = 0x1000
             ror x8,x8,2
             [sp, 8] = (x8,2)

    loc_0x0800cd78: // orphan
         // CODE XREF from sym.process_memory_rw.llvm.5561942588920149454 @ 0x800ce6c
         x2 = x29 - 0x30          // int64_t arg3 // " "
         x4 = x29 - 0x28          // " "
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w3 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         [x29 = xzr               // " "
         0x800cd90 ()             // 0x800cd90(0x1, 0x0, 0x177fd0, 0x20)
         if w0 jmp 0x800ce90      // likely

    loc_0x0800cd98: // orphan
         x8 = x25 & 0xfff
         x21 = x21 - x27
         x8 = x19 - x8
         if (x21 == x8)           // x26
         csel x28,x21,x8, lo
         b.ls 0x800ce30           // likely

    loc_0x0800cdb0: // orphan
         w8 = [var_1ch]           // 0x4 // 4
         tbz w8,0,0x800ce30       // likely

    loc_0x0800cdb8: // orphan
         ldur x8,[x29,-0x30]
         x24 = x28                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = x8 + x28

    loc_0x0800cdc4: // orphan
         // CODE XREF from sym.process_memory_rw.llvm.5561942588920149454 @ 0x800ce28
         x22 = x21 - x28
         b.ls 0x800ce34           // likely

    loc_0x0800cdcc: // orphan
         x8 = x28 >> 0x10
         if x8 jmp 0x800ce34      // unlikely

    loc_0x0800cdd4: // orphan
         x1 = x28 + x25           // int64_t arg2
         x2 = var_38h             // int64_t arg3
         x4 = x29 - 0x28          // " "
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w3 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x24
         [var_38h] = xzr
         0x800cdec ()             // 0x800cdec(0x1, 0x0, 0x178038, 0x20)
         if w0 jmp 0x800ce34      // likely

    loc_0x0800cdf4: // orphan
         x8 = [var_38h]           // 0x4 // 4
         if (x8 == x23)           // x26
         b.ne 0x800ce34           // likely

    loc_0x0800ce00: // orphan
         w8 = 0x1
         x8 = x8 - x28
         if (x22 == x8)           // x26
         csel x8,x22,x8, lo
         if (x8 == 1)             // x26
         csel x9,x8,x19, lo
         if (x8 == 0xfff)         // x26
         x24 = x9 + x24
         x28 = x9 + x28
         x23 = x9 + x23           // x24
         b.hi 0x800cdc4           // unlikely

    loc_0x0800ce2c: // orphan
         jmp 0x800ce34

    loc_0x0800ce30: // orphan
         // CODE XREFS from sym.process_memory_rw.llvm.5561942588920149454 @ 0x800cdac, 0x800cdb4
         x24 = x28                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ce34: // orphan
         // CODE XREFS from sym.process_memory_rw.llvm.5561942588920149454 @ 0x800cdc8, 0x800cdd0, 0x800cdf0, 0x800cdfc, 0x800ce2c
         x8 = [var_8h]            // 0x4 // 4
         if (x8 == 6)             // x26
         b.hs 0x800ce74           // likely

    loc_0x0800ce40: // orphan
         // CODE XREF from sym.process_memory_rw.llvm.5561942588920149454 @ 0x800ce8c
         (x8, 2) = 3
         ldur x0,[x29,-0x30]
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x8 + x27
         x8 = [var_30h]           // 0x4 // 4
         blr x8                   // xzr(0x0, 0x0, 0x20, 0x0)
         x21 = [var_10h]          // 0x4 // 4
         tbz w0,0,0x800ce90       // likely

    loc_0x0800ce60: // orphan
         x27 = x24 + x27
         if (x27 == x21)          // x26
         x25 = x24 + x25
         b.lo 0x800cd78           // unlikely

    loc_0x0800ce70: // orphan
         jmp 0x800cea8

    loc_0x0800ce74: // orphan
         // CODE XREF from sym.process_memory_rw.llvm.5561942588920149454 @ 0x800ce3c
         x0 = 0x246e              // 'n$'
         x1 = [var_30h]           // 0x4 // 4 // int64_t arg2
         x0 = 0xd4d0              // '\xd0\xd4'
         x0 = 0xa906
         x0 = 0x7dc5              // '\xc5}' // int64_t arg1
         0x800ce88 ()             // 0x800ce88(0x7dc5a906d4d0246e, 0x0, 0x0, 0x0)
         jmp 0x800ce40

    loc_0x0800ce90: // orphan
         // CODE XREFS from sym.process_memory_rw.llvm.5561942588920149454 @ 0x800cd94, 0x800ce5c
         x0 = [sp]                // 0x4 // 4 // int64_t arg1
         0x800ce94 ()             // 0x800ce94(0x69, 0x0, 0x0, 0x0)
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800ce9c ()             // 0x800ce9c(0x1, 0x0, 0x0, 0x0)

    loc_0x0800cea0: // orphan
         // CODE XREF from sym.process_memory_rw.llvm.5561942588920149454 @ 0x800cd48
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800cebc

    loc_0x0800cea8: // orphan
         // CODE XREF from sym.process_memory_rw.llvm.5561942588920149454 @ 0x800ce70
         x0 = [sp]                // 0x4 // 4 // int64_t arg1
         0x800ceac ()             // 0x800ceac(0x69, 0x0, 0x0, 0x0)
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800ceb4 ()             // " " // 0x800ceb4(0x1, 0x0, 0x0, 0x0)
         w0 = 0x1                 // x26

}

