// 6.6.ko 内核模块伪代码 (radare2 pdc, 175 functions)


/* ===== 0x0800394c ===== */
int sym.unfuck_cfi (int esi, int edx) {
    loc_0x800394c:
        // CALL XREF from sym.install_hook @ 0x8003910
        // CALL XREF from sym.unstall_hook @ 0x8003b30
        hint 0x19
        sp = sp - 0x80
        [sp, 0x50] = (x29,2)
        [sp, 0x60] = (x22,2)
        [sp, 0x70] = (x20,2)
        x29 = var_50h
        x20 = sym..text // 0x8003000
        x21 = sym..text // 0x8003000
        w8 = (byte) [x20] // 0xdb // 219 // sym..text
        w9 = [x21]    // 0xdc // 220 // sym..text
        if (w8 == 1)
        ccmp w9,0,4, eq
        b.eq 0x8003ac4 // unlikely
            
    loc_0x8003ac4:
        // CODE XREFS from sym.unfuck_cfi @ 0x800397c, 0x8003ae8
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        sp = arg_80h
        hint 0x1d
        0x08003ad8
         // } else {
    loc_0x8003980:
        x22 = sym..text // 0x8003000
        [sp, 0x40] = (xzr,2)
        x8 = [x22]    // 0xdd // 221 // sym..text
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [sp, 8] = (xzr,2)
        [var_0h] = xzr
        if x8 jmp 0x80039cc // likely
        }
        return eax;
    loc_0x80039a0:
        x19 = sym..text // 0x8003000
        x19 = x19 + 0 // 0x8003000
        // sym..text
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h // sym..text
        0x80039ac ()  // 0x80039ac(0x8003000, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x8003adc // unlikely
            
    loc_0x8003adc:
        // CODE XREFS from sym.unfuck_cfi @ 0x80039b0, 0x80039c8, 0x80039d8
        x0 = sym..text // 0x8003000
        x0 = x0 + 0   // 0x8003000
        // sym..text // int64_t arg_80h
        0x8003ae4 ()  // 0x8003ae4(0x8003000, 0x0, 0x0, 0x0)
        jmp 0x8003ac4
    loc_0x080039b4: // orphan
             x8 = [x19 + 0x28]        // 0xda // 218
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
             [x22] = x8
             0x80039c0 ()             // 0x80039c0(0x0, 0x0, 0x0, 0x0)
             x8 = [x22]               // 0xdd // 221
             if !x8 jmp 0x8003adc     // unlikely

    loc_0x080039cc: // orphan
         // CODE XREF from sym.unfuck_cfi @ 0x800399c
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text
         blr x8                   // xzr(0x8003000, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8003adc     // unlikely

    loc_0x080039dc: // orphan
         w2 = [x21]               // 0xdc // 220
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w2 == 1)
         b.lt 0x8003aac           // likely

    loc_0x080039ec: // orphan
         x9 = sym..text           // 0x8003000
         x9 = x9 + 0              // 0x8003000
                                  // sym..text
         if (w2 == 1)
         x10 = [x9]               // 0xd0 // 208 // sym..text
         w9 = [x9 + 8]            // 0xd0 // 208
         [var_20h] = x10
         [var_8h] = w9
         b.eq 0x8003aac           // unlikely

    loc_0x08003a0c: // orphan
         x9 = sym..text           // 0x8003000
         x9 = x9 + 0              // 0x8003000
                                  // sym..text
         if (w2 == 2)
         x10 = [x9]               // 0xd0 // 208 // sym..text
         w9 = [x9 + 8]            // 0xd0 // 208
         [var_20h_2] = x10
         [var_0h_2] = w9
         b.eq 0x8003aac           // unlikely

    loc_0x08003a2c: // orphan
         x9 = sym..text           // 0x8003000
         x9 = x9 + 0              // 0x8003000
                                  // sym..text
         if (w2 == 3)
         x10 = [x9]               // 0xd0 // 208 // sym..text
         w9 = [x9 + 8]            // 0xd0 // 208
         [var_30h] = x10
         [var_8h_2] = w9
         b.eq 0x8003aac           // unlikely

    loc_0x08003a4c: // orphan
         x9 = sym..text           // 0x8003000
         x9 = x9 + 0              // 0x8003000
                                  // sym..text
         if (w2 == 4)
         x10 = [x9]               // 0xd0 // 208 // sym..text
         w9 = [x9 + 8]            // 0xd0 // 208
         [var_30h_2] = x10
         [var_0h_3] = w9
         b.eq 0x8003aac           // unlikely

    loc_0x08003a6c: // orphan
         x9 = sym..text           // 0x8003000
         x9 = x9 + 0              // 0x8003000
                                  // sym..text
         if (w2 == 5)
         x10 = [x9]               // 0xd0 // 208 // sym..text
         w9 = [x9 + 8]            // 0xd0 // 208
         [var_40h] = x10
         [var_0h] = w9
         b.eq 0x8003aac           // unlikely

    loc_0x08003a8c: // orphan
         x9 = sym..text           // 0x8003000
         x9 = x9 + 0              // 0x8003000
                                  // sym..text
         if (w2 == 6)
         x10 = [x9]               // 0xd0 // 208 // sym..text
         w9 = [x9 + 8]            // 0xd0 // 208
         [var_40h_2] = x10
         [var_0h_4] = w9
         b.ne 0x8003b00           // likely

    loc_0x08003aac: // orphan
         // XREFS: CODE 0x080039e8  CODE 0x08003a08  CODE 0x08003a28  
         // XREFS: CODE 0x08003a48  CODE 0x08003a68  CODE 0x08003a88  
         x0 = var_20h
         x1 = var_8h
         blr x8                   // xzr(0x178020, 0x178008, 0x0, 0x0)
         if w0 jmp 0x8003aec      // likely

    loc_0x08003abc: // orphan
         // CODE XREF from sym.unfuck_cfi @ 0x8003afc
         [x20] = (byte) wzr
         [x21] = wzr

    loc_0x08003aec: // orphan
         // CODE XREF from sym.unfuck_cfi @ 0x8003ab8
         w1 = [x21]               // 0xdc // 220
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text // int64_t arg_80h
         0x8003af8 ()             // 0x8003af8(0x8003000, 0x0, 0x0, 0x0)
         jmp 0x8003abc

    loc_0x08003b00: // orphan
         // CODE XREF from sym.unfuck_cfi @ 0x8003aa8
         brk 0x5512

}

/* ===== 0x08003de4 ===== */
int sym.chunk_read_linear (int esi, int edx) {
    loc_0x8003de4:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x22 = sym..text // 0x8003000
        w10 = wzr | 0x3fffffe // arg1
        x8 = [x22]    // 0xdd // 221 // sym..text
        x9 = x0 - x8  // arg1
        x20 = x9 | 0xffffff8000000000
        if (x10 == x20)
        b.ne 0x8003e9c // likely
            
    loc_0x8003e9c:
        // CODE XREFS from sym.chunk_read_linear @ 0x8003e10, 0x8003e44
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x8003ea0:
        // CODE XREFS from sym.chunk_read_linear @ 0x8003e2c, 0x8003e64, 0x8003e98
        // CODE XREF from sym.chunk_read_linear @ +0xd8
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08003eb0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8003e14
    loc_0x8003e30:
        x8 = x20 + x19
        x10 = xzr | 0xffff8000000000
        x8 = x8 - 1
        x9 = x8 & 0xffffc000000000
        if (x9 == x10)
        b.ne 0x8003e9c // likely
    loc_0x8003e48:
        x8 = x8 << 8
        x9 = [x22]    // 0xdd // 221
        x8 = x9 + x8,asr 8
        x9 = 0x80     // '\x80'
        x8 = x8 + x9
        x0 = x8 >> 0xc // int64_t arg1
        0x8003e60 ()  // 0x8003e60(0x7f00000, 0x0, 0x0, 0x0)
        if !w0 jmp 0x8003ea0 // unlikely
    loc_0x8003e68:
        x8 = x19 >> 0x1f
        if x8 jmp 0x8003eb4 // unlikely
            
    loc_0x8003eb4:
        // CODE XREF from sym.chunk_read_linear @ 0x8003e6c
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        brk 0x800
         // } else {
    loc_0x8003e70:
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = 0x1
        0x8003e7c ()  // 0x8003e7c(0x0, 0x0, 0x1, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // uint32_t arg3
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sym._copy_to_user () // sym._copy_to_user(0x0, 0x0)
        if (x0 == 0)
        cset w0,eq
        jmp 0x8003ea0
        }
        return eax;
}

/* ===== 0x08003b80 ===== */
int sym.process_memory_rw (int esi, int edx) {
    loc_0x8003b80:
        // XREFS: CALL 0x08003b6c  CALL 0x08003f30  CALL 0x0800405c
        // XREFS: CALL 0x08004298  CALL 0x080044fc  CALL 0x08004710
        // XREFS: CALL 0x08004894  CALL 0x08004918  CALL 0x08004970
        // XREFS: CALL 0x080049f4
        hint 0x19
        sp = sp - 0xd0
        [sp, 0x70] = (x29,2)
        [sp, 0x80] = (x28,2)
        [sp, 0x90] = (x26,2)
        [sp, 0xa0] = (x24,2)
        [sp, 0xb0] = (x22,2)
        [sp, 0xc0] = (x20,2)
        x29 = var_70h
        w28 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [var_34h] = w7 // arg8
        [sp, 0x20] = (x4,2) // arg6
        [x29, -0x10] = (xzr,2)
        [x29, -0x20] = (xzr,2)
        [x29 = xzr
        [var_18h] = x2 // arg3
        if !x2 jmp 0x8003d94 // likely
            
    loc_0x8003d94:
        // CODE XREFS from sym.process_memory_rw @ 0x8003bc0, 0x8003bc8, 0x8003d74
        w0 = w28      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_d0h
        hint 0x1d
        0x08003db8
         // } else {
    loc_0x8003bc4:
        x21 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        if !x3 jmp 0x8003d94 // likely
        }
        return eax;
    loc_0x8003bcc:
        w20 = w6      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg7
        x25 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x8003bd4 ()  // 0x8003bd4(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8003d70 // likely
            
    loc_0x8003d70:
        // CODE XREFS from sym.process_memory_rw @ 0x8003bd8, 0x8003c10
        w28 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x8003d94
    loc_0x08003bdc: // orphan
             x27 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8003be0 ()             // 0x8003be0(0x0, 0x0, 0x0, 0x0)
             x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8003bec ()             // 0x8003bec(0x0, 0x0, 0x0, 0x0)
             if !x0 jmp 0x8003c00     // likely

    loc_0x08003bf4: // orphan
         0x8003bf4 ()             // 0x8003bf4(0x0, 0x0, 0x0, 0x0)
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8003c04

    loc_0x08003c00: // orphan
         // CODE XREF from sym.process_memory_rw @ 0x8003bf0
         x26 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08003c04: // orphan
         // CODE XREF from sym.process_memory_rw @ 0x8003bfc
         0x8003c04 ()             // 0x8003c04(0x0, 0x0, 0x0, 0x0)
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003c0c ()             // 0x8003c0c(0x0, 0x0, 0x0, 0x0)
         if !x26 jmp 0x8003d70    // likely

    loc_0x08003c14: // orphan
         

    loc_0x08003c18: // orphan
         // CODE XREF from fcn.08003dc4 @ 0x8003dc8
         x0 = x26 + 0x90          // int64_t arg1
         [var_8h] = x0
         0x8003c20 ()             // 0x8003c20(0x90, 0x0, 0x0, 0x0)
         

    loc_0x08003c28: // orphan
         // CODE XREF from fcn.08003dd8 @ 0x8003ddc
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w19 = 0x1000
         [var_10h] = x21

    loc_0x08003c34: // orphan
         // CODE XREF from sym.process_memory_rw @ 0x8003d48
         x2 = x29 - 0x30          // int64_t arg3
         x4 = x29 - 0x28          // int64_t arg5
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // uint32_t arg2
         w3 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x29 = xzr
         sym.translate_va_to_pa () // "@\t" // sym.translate_va_to_pa(0x0, 0x0, 0x177fd0, 0x0, -1, -1)
         if w0 jmp 0x8003d78      // unlikely

    loc_0x08003c54: // orphan
         x8 = x25 & 0xfff
         x22 = x21 - x27
         w9 = [var_34h]           // 4
         x8 = x19 - x8
         if (x22 == x8)
         csel x23,x22,x8, lo
         tbz w9,0,0x8003d04       // unlikely

    loc_0x08003c70: // orphan
         if (x8 == x22)
         b.hi 0x8003d04           // unlikely

    loc_0x08003c78: // orphan
         if (x22 == x8)
         b.ls 0x8003d04           // likely

    loc_0x08003c80: // orphan
         if (x22 == 0x10)
         w8 = 0x1
         csel x24,x22,x8, lo
         if (x23 == x24)
         b.hs 0x8003d04           // likely

    loc_0x08003c94: // orphan
         ldur x8,[x29,-0x30]
         x28 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = x8 + x23

    loc_0x08003ca0: // orphan
         // CODE XREF from sym.process_memory_rw @ 0x8003d00
         x1 = x28 + x25           // uint32_t arg2
         x2 = var_38h             // int64_t arg3
         x4 = x29 - 0x28          // int64_t arg5
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w3 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_38h] = xzr
         sym.translate_va_to_pa () // sym.translate_va_to_pa(0x0, 0x0, 0x178038, 0x0, -1, -1)
         if w0 jmp 0x8003d04      // unlikely

    loc_0x08003cc0: // orphan
         x8 = [var_38h]           // 0x4 // 4
         if (x8 == x21)
         b.ne 0x8003d04           // unlikely

    loc_0x08003ccc: // orphan
         w9 = 0x1
         x8 = x22 - x28
         x9 = x9 - x28
         if (x8 == x9)
         csel x9,x8,x9, lo
         if (x9 == 1)
         csel x8,x9,x19, lo
         if (x9 == 0xfff)
         x23 = x8 + x23
         b.ls 0x8003d04           // likely

    loc_0x08003cf4: // orphan
         x28 = x8 + x28
         x21 = x8 + x21
         if (x28 == x24)
         b.lo 0x8003ca0           // unlikely

    loc_0x08003d04: // orphan
         // XREFS: CODE 0x08003c6c  CODE 0x08003c74  CODE 0x08003c7c  
         // XREFS: CODE 0x08003c90  CODE 0x08003cbc  CODE 0x08003cc8  
         // XREFS: CODE 0x08003cf0  
         x8 = [var_18h]           // 0x4 // 4
         ldur x0,[x29,-0x30]
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x8 + x27
         (x8, 2) = 3
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xde85             // '\x85\xde'
         w17 = 0x7347             // 'Gs'
         if (w16 == w17)
         b.eq 0x8003d30           // unlikely

    loc_0x08003d2c: // orphan
         brk 0x8228

    loc_0x08003d30: // orphan
         // CODE XREF from sym.process_memory_rw @ 0x8003d28
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x21 = [var_10h]          // 0x4 // 4
         tbz w0,0,0x8003d78       // likely

    loc_0x08003d3c: // orphan
         x27 = x23 + x27
         x25 = x23 + x25
         if (x27 == x21)
         b.lo 0x8003c34           // unlikely

    loc_0x08003d4c: // orphan
         w19 = 0x1
         
         w28 = 0x1
         jmp 0x8003d84

    loc_0x08003d78: // orphan
         // CODE XREFS from sym.process_memory_rw @ 0x8003c50, 0x8003d38
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         w28 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08003d84: // orphan
         // CODE XREF from sym.process_memory_rw @ 0x8003d58
         // CODE XREF from fcn.08003d64 @ 0x8003d6c
         x0 = [var_8h]            // 0x4 // 4 // int64_t arg1
         0x8003d88 ()             // 0x8003d88(0x90, 0x0, 0x0, 0x0)
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003d90 ()             // 0x8003d90(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x08004a28 ===== */
int sym.translate_va_to_pa (int esi, int edx) {
    loc_0x8004a28:
        // CALL XREFS from sym.process_memory_rw @ 0x8003c4c, 0x8003cb8
        sp = sp - 0x10
        if !w3 jmp 0x8004b5c // likely
            
    loc_0x8004b5c:
        // CODE XREF from sym.translate_va_to_pa @ 0x8004a2c
        w8 = ~0x15
        if !x0 jmp 0x8004c28 // likely
            
    loc_0x8004c28:
        // XREFS: CODE 0x08004b30  CODE 0x08004b4c  CODE 0x08004b58
        // XREFS: CODE 0x08004b60  CODE 0x08004b64  CODE 0x08004b6c
        // XREFS: CODE 0x08004c20
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = arg_10h
        // lr
         // } else {
    loc_0x8004b64:
        if !x2 jmp 0x8004c28 // likely
         // } else {
        }
        return eax;
        goto loc_0x8004a30
    loc_0x8004a38:
        if !x2 jmp 0x8004b54 // likely
    loc_0x8004b54:
        // CODE XREFS from sym.translate_va_to_pa @ 0x8004a34, 0x8004a38
        if (w3 == 1)  // arg4
        b.eq 0x8004c28 // unlikely
        }
        return eax;
    loc_0x08004a3c: // orphan
             [x2] = xzr               // arg3
             if !x4 jmp 0x8004ab4     // likely

    loc_0x08004a44: // orphan
         w8 = (byte) [x4 + 0x21]  // 0xcb // 203 // arg5
         if !w8 jmp 0x8004ab4     // unlikely

    loc_0x08004a4c: // orphan
         x8 = [x4 + 8]            // 0xcb // 203 // arg5
         x9 = x1 - x8             // arg2
         b.lo 0x8004ab4           // likely

    loc_0x08004a58: // orphan
         x8 = [x4 + 0x10]         // 0xcb // 203 // arg5
         if (x8 == x1)            // arg2
         b.ls 0x8004ab4           // unlikely

    loc_0x08004a64: // orphan
         w8 = (byte) [x4 + 0x20]  // 0xcb // 203 // arg5
         if !w8 jmp 0x8004a7c     // unlikely

    loc_0x08004a6c: // orphan
         x10 = [x4 + 0x18]        // 0xcb // 203 // arg5
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x9 = x9 + x10
         jmp 0x8004c24

    loc_0x08004a7c: // orphan
         // CODE XREF from sym.translate_va_to_pa @ 0x8004a68
         x8 = x9 >> 9
         x9 = [x4]                // 0xcb // 203 // arg5
         x8 = x8 & 0x7ffffffffffff8
         x9 = [x9 + x8]           // 0xcf000000d0 // 889058230480
         x8 = 0x1
         x8 = 0x400
         if ((x9 & x8) == 0)
         [var_0h] = x9
         b.eq 0x8004ab0           // unlikely

    loc_0x08004aa0: // orphan
         x9 = x9 & 0xfffffffff000
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfxil x9,x1,0, 0xc       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         jmp 0x8004c24

    loc_0x08004ab0: // orphan
         // CODE XREF from sym.translate_va_to_pa @ 0x8004a9c
         [x4 + 0x21] = (byte) wzr // arg5

    loc_0x08004ab4: // orphan
         // CODE XREFS from sym.translate_va_to_pa @ 0x8004a40, 0x8004a48, 0x8004a54, 0x8004a60
         x8 = [x0 + 0x70]         // 0xc7 // 199 // arg1
         ubfx x9,x1,0x1e, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         x9 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         w8 = ~w9
         if ((x8 & 3) == 0)
         b.ne 0x8004b50           // likely

    loc_0x08004acc: // orphan
         x8 = 0x8004000
         x9 = x9 & 0x7ffffff000
         ubfx x10,x1,0x15, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         x8 = [x8]                // 0xcf // 207
         x9 = x9 - x8
         x9 = x9 | 0xffffff8000000000
         x9 = [x9 + x10,lsl 3]    // 0xd1000000d0 // 897648165072
         w10 = ~w9
         if ((x10 & 3) == 0)
         b.ne 0x8004b50           // likely

    loc_0x08004af4: // orphan
         x9 = x9 & 0x7ffffff000
         ubfx x10,x1,0xc, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         x8 = x9 - x8
         x9 = x8 | 0xffffff8000000000
         x8 = x9 + x10,lsl 3
         b.eq 0x8004b50           // unlikely

    loc_0x08004b0c: // orphan
         x8 = [x8]                // 0xcf // 207
         x10 = 0x1
         x10 = 0x400
         if ((x8 & x10) == 0)
         b.eq 0x8004b50           // unlikely

    loc_0x08004b20: // orphan
         x8 = x8 & 0xfffffffff000
         bfxil x8,x1,0, 0xc       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         [x2] = x8                // arg3
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if !x4 jmp 0x8004c28     // likely

    loc_0x08004b34: // orphan
         x10 = x1 & 0xffffffffffe00000 // arg2
         [x4] = (x9,2)            // arg5
         x9 = x10 + 0x200,lsl 12
         [x4, 0x10] = (x9,2)      // arg5
         w9 = 0x100
         [x4 + 0x20] = (half) w9
         jmp 0x8004c28

    loc_0x08004b50: // orphan
         // CODE XREFS from sym.translate_va_to_pa @ 0x8004ac8, 0x8004af0, 0x8004b08, 0x8004b1c
         w8 = ~0xd

    loc_0x08004b68: // orphan
         x9 = [x0 + 0x70]         // 0xc7 // 199 // arg1
         if !x9 jmp 0x8004c28     // unlikely

    loc_0x08004b70: // orphan
         [x2] = xzr               // arg3
         x9 = 0x80                // '\x80'
         x10 = 0x8004000
         x8 = [x0 + 0x70]         // 0xc7 // 199 // arg1
         x11 = 0x8004000
         x10 = [x10]              // 0xd1 // 209
         x11 = [x11]              // 0xd2 // 210
         sbfx x8,x8,0, 0x38       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x8 + x9
         x8 = x8 - x11
         w11 = ~0xd
         x12 = x9 >> 0x26
         x9 = x9 + x10
         if (x12 == 0)
         csel x10,x9,x8, eq
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
         
         tbnz w12,0,0x8004c18     // likely

    loc_0x08004c00: // orphan
         ubfx x12,x12,0xc, 0x28   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x12 << 0xc
         x15 = x1 & 0xfff         // arg2
         x9 = x12 | x15
         w8 = 0
         jmp 0x8004c20

    loc_0x08004c18: // orphan
         // CODE XREF from sym.translate_va_to_pa @ 0x8004bfc
         w8 = w11                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0

    loc_0x08004c20: // orphan
         // CODE XREF from sym.translate_va_to_pa @ 0x8004c14
         if w8 jmp 0x8004c28      // unlikely

    loc_0x08004c24: // orphan
         // CODE XREFS from sym.translate_va_to_pa @ 0x8004a78, 0x8004aac
         [x2] = x9                // arg3

}

/* ===== 0x08004c34 ===== */
int sym._copy_to_user (int esi, int edx) {
    loc_0x8004c34:
        // CALL XREF from sym.chunk_read_linear @ 0x8003e8c
        // CALL XREF from sym.chunk_read_pte @ 0x8003fc0
        // CALL XREF from sym.chunk_read_kmap @ 0x800423c
        // CALL XREF from sym.chunk_read_vmap @ 0x8004444
        // CALL XREF from sym.chunk_read_ioremap @ 0x80046a0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w9,5,0x8004c4c // likely
            
    loc_0x8004c4c:
        // CODE XREF from sym._copy_to_user @ 0x8004c3c
        x9 = x0 << 8  // arg1
        x9 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x8004c54:
        // CODE XREF from sym._copy_to_user @ 0x8004c48
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = 0x80    // '\x80'
        if (x2 == x10) // arg3
        b.hi 0x8004ce0 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08004c6c: // orphan
             x10 = x10 - x2           // arg3
             if (x10 == x9)
             b.lo 0x8004ce0           // unlikely

    loc_0x08004c78: // orphan
         jmp 0x8004cf0

    loc_0x08004c80: // orphan
         // CODE XREF from sym._copy_to_user @ 0x8004cfc
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004ca8: // orphan
         // CODE XREF from sym._copy_to_user @ 0x8004cf8
         // CODE XREF from sym._copy_to_user @ +0xe4
         x0 = x0 & 0xff7fffffffffffff // int64_t arg1
         0x8004cac ()             // 0x8004cac(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8004d00

    loc_0x08004cbc: // orphan
         // CODE XREF from sym._copy_to_user @ 0x8004d0c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004ce0: // orphan
         // CODE XREFS from sym._copy_to_user @ 0x8004c68, 0x8004c74, 0x8004d08
         // CODE XREF from sym._copy_to_user @ +0xe8
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08004cf0: // orphan
         // CODE XREF from sym._copy_to_user @ 0x8004c78
         x9 = 0x8004000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x8004ca8   // likely

    loc_0x08004cfc: // orphan
         jmp 0x8004c80

    loc_0x08004d00: // orphan
         // CODE XREF from sym._copy_to_user @ 0x8004cb4
         x8 = 0x8004000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x8004ce0   // likely

    loc_0x08004d0c: // orphan
         jmp 0x8004cbc

}

/* ===== 0x08003f68 ===== */
int sym.chunk_read_pte (int esi, int edx) {
    loc_0x8003f68:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x1 = x3       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        x20 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        0x8003f8c ()  // "`" // 0x8003f8c(0x0, 0x0, 0x0, 0x0)
        if !w0 jmp 0x8003f9c // likely
            
    loc_0x8003f9c:
        // CODE XREF from sym.chunk_read_pte @ 0x8003f90
        x8 = x19 >> 0x1f
        if x8 jmp 0x8003fe0 // unlikely
            
    loc_0x8003fe0:
        // CODE XREF from sym.chunk_read_pte @ 0x8003fa0
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        brk 0x800
         // } else {
    loc_0x8003fa4:
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        w2 = 0x1
        0x8003fb0 ()  // 0x8003fb0(0x0, 0x0, 0x1, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sym._copy_to_user () // sym._copy_to_user(0x0, 0x0)
        if (x0 == 0)
        cset w0,eq
         // } else {
        }
        return eax;
    loc_0x08003fcc: // orphan
             // CODE XREF from sym.chunk_read_pte @ 0x8003f98
             // CODE XREF from sym.chunk_read_pte @ +0x80
             (x20, 2) = 3
             x21 = [var_10h]          // 0x4 // 4
             (x29, 2) = 3
             hint 0x1d
             

}

/* ===== 0x08004094 ===== */
int sym.chunk_read_kmap (int esi, int edx) {
    loc_0x8004094:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x24,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x0 >> 0x30 // arg1
        if !x8 jmp 0x80040bc // likely
            
    loc_0x80040bc:
        // CODE XREF from sym.chunk_read_kmap @ 0x80040b0
        x8 = 0x8004000
        x20 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x8 = [x8]     // 0xcf // 207
        x22 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        if !x8 jmp 0x80040f0 // unlikely
            
    loc_0x80040f0:
        // CODE XREFS from sym.chunk_read_kmap @ 0x80040d4, 0x80040e4
        mrs x23,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = [x23 + 0x10] // 0xde // 222
        w9 = w9 + 1
        [x23 + 0x10] = w9
        if !x8 jmp 0x800410c // likely
            
    loc_0x800410c:
        // CODE XREF from sym.chunk_read_kmap @ 0x8004100
        x8 = [x23 + 0x10] // 0xde // 222
        x8 = x8 - 1
        [x23 + 0x10] = w8
        b.eq 0x800424c // unlikely
            
    loc_0x800424c:
        // CODE XREFS from sym.chunk_read_kmap @ 0x8004118, 0x8004124
        w24 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x8004250:
        // CODE XREFS from sym.chunk_read_kmap @ 0x8004178, 0x8004180
        0x8004250 ()  // 0x8004250(0x0, 0x0, 0x0, 0x0)
        if w24 jmp 0x8004188 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080040e8: // orphan
             ubfx x9,x22,0x1b, 7      // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x8 = x8 + x9,lsl 5

    loc_0x08004128: // orphan
         // CODE XREFS from sym.chunk_read_kmap @ 0x80040b8, 0x8004248
         // CODE XREF from sym.chunk_read_kmap @ +0x1dc
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08004140: // orphan
         // CODE XREF from sym.chunk_read_kmap @ 0x8004108
         tbnz w9,3,0x8004160      // unlikely

    loc_0x08004144: // orphan
         x8 = [x8 + 8]            // 0xcf // 207
         if !x8 jmp 0x8004168     // likely

    loc_0x0800414c: // orphan
         x9 = x22 >> 0x15
         x8 = [x8 + 0x10]         // 0xcf // 207
         x8 = x8 >> x9
         w24 = w8 & 1
         jmp 0x800416c

    loc_0x08004160: // orphan
         // CODE XREF from sym.chunk_read_kmap @ 0x8004140
         w24 = 0x1
         jmp 0x800416c

    loc_0x08004168: // orphan
         // CODE XREF from sym.chunk_read_kmap @ 0x8004148
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x0800416c: // orphan
         // CODE XREFS from sym.chunk_read_kmap @ 0x800415c, 0x8004164
         x8 = [x23 + 0x10]        // 0xde // 222
         x8 = x8 - 1
         [x23 + 0x10] = w8
         b.eq 0x8004250           // unlikely

    loc_0x0800417c: // orphan
         x8 = [x23 + 0x10]        // 0xde // 222
         if !x8 jmp 0x8004250     // unlikely

    loc_0x08004184: // orphan
         if !w24 jmp 0x80040b4    // likely

    loc_0x08004188: // orphan
         // CODE XREF from sym.chunk_read_kmap @ 0x8004254
         x8 = 0x8004000
         x9 = x22 >> 0xc
         x8 = [x8]                // 0xcf // 207
         x9 = x9 << 6
         x8 = x8 >> 0xc
         x8 = x9 - x8,lsl 6
         x9 = xzr | 0xfffffffe00000000
         x8 = x8 + x9
         b.eq 0x80040b4           // unlikely

    loc_0x080041ac: // orphan
         w9 = [x23 + 0x10]        // 0xde // 222
         x10 = 0xff00
         w9 = w9 + 1
         [x23 + 0x10] = w9
         w9 = [x23 + 0xb54]       // 0xde // 222
         w9 = w9 + 1
         [x23 + 0xb54] = w9
         x9 = x22 & 0xfff
         jmp 0x80041d8

    loc_0x080041d8: // orphan
         // CODE XREF from sym.chunk_read_kmap @ 0x80041cc
         x8 = x8 << 6
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x8 = x8 & 0xfffffffffff000
         x8 = x10 | x8
         x1 = x8 + x9             // int64_t arg2
         0x80041f0 ()             // 0x80041f0(0x0, 0x0, 0x0, 0x0)
         w8 = [x23 + 0xb54]       // 0xde // 222
         w8 = w8 - 1
         [x23 + 0xb54] = w8
         x8 = [x23 + 0x10]        // 0xde // 222
         x8 = x8 - 1
         [x23 + 0x10] = w8
         b.eq 0x800425c           // unlikely

    loc_0x08004210: // orphan
         x8 = [x23 + 0x10]        // 0xde // 222
         if !x8 jmp 0x800425c     // unlikely

    loc_0x08004218: // orphan
         x8 = x19 >> 0x1f
         if x8 jmp 0x8004268      // unlikely

    loc_0x08004220: // orphan
         // CODE XREF from sym.chunk_read_kmap @ 0x8004264
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x1
         0x800422c ()             // 0x800422c(0x0, 0x0, 0x1, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym._copy_to_user ()     // sym._copy_to_user(0x0, 0x0)
         if (x0 == 0)
         cset w0,eq
         jmp 0x8004128

    loc_0x08004258: // orphan
         jmp 0x80040b4

    loc_0x0800425c: // orphan
         // CODE XREFS from sym.chunk_read_kmap @ 0x800420c, 0x8004214
         0x800425c ()             // 0x800425c(0x0, 0x0, 0x0, 0x0)
         x8 = x19 >> 0x1f
         if !x8 jmp 0x8004220     // likely

    loc_0x08004268: // orphan
         // CODE XREF from sym.chunk_read_kmap @ 0x800421c
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         brk 0x800

}

/* ===== 0x080042b0 ===== */
int sym.chunk_read_vmap (int esi, int edx) {
    loc_0x80042b0:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8004000
        x9 = 0x70f
        x10 = x0 >> 0x30 // arg1
        w8 = (byte) [x8] // 0xcf // 207
        x9 = 0x68     // 'h'
        x11 = x9 | 0x800
        if (w8 == 0)
        csel x22,x9,x11, eq
        if !x10 jmp 0x80042f4 // likely
            
    loc_0x80042f4:
        // CODE XREF from sym.chunk_read_vmap @ 0x80042e8
        x8 = 0x8004000
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8]     // 0xcf // 207
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if !x8 jmp 0x8004328 // unlikely
            
    loc_0x8004328:
        // CODE XREFS from sym.chunk_read_vmap @ 0x8004308, 0x8004318
        x9 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800432c:
        // CODE XREF from sym.chunk_read_vmap @ 0x8004324
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = [x8 + 0x10] // 0xcf // 207
        w10 = w10 + 1
        [x8 + 0x10] = w10
        if !x9 jmp 0x8004348 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800431c: // orphan
             ubfx x9,x21,0x1b, 7      // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x9 = x8 + x9,lsl 5
             jmp 0x800432c

    loc_0x08004340: // orphan
         x10 = [x9]               // 0xd0 // 208
         tbnz w10,1,0x8004380     // unlikely

    loc_0x08004348: // orphan
         // CODE XREF from sym.chunk_read_vmap @ 0x800433c
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x8004470           // unlikely

    loc_0x08004358: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if !x8 jmp 0x8004470     // unlikely

    loc_0x08004364: // orphan
         // CODE XREFS from sym.chunk_read_vmap @ 0x80042f0, 0x80043c4, 0x800446c, 0x800447c
         w0 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x23
         (x20, 2) = 3
         x23 = [var_10h]          // 0x4 // 4
         (x22, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08004380: // orphan
         // CODE XREF from sym.chunk_read_vmap @ 0x8004344
         tbnz w10,3,0x80043a0     // unlikely

    loc_0x08004384: // orphan
         x9 = [x9 + 8]            // 0xd0 // 208
         if !x9 jmp 0x80043a8     // likely

    loc_0x0800438c: // orphan
         x10 = x21 >> 0x15
         x9 = [x9 + 0x10]         // 0xd0 // 208
         x9 = x9 >> x10
         w23 = w9 & 1
         jmp 0x80043ac

    loc_0x080043a0: // orphan
         // CODE XREF from sym.chunk_read_vmap @ 0x8004380
         w23 = 0x1
         jmp 0x80043ac

    loc_0x080043a8: // orphan
         // CODE XREF from sym.chunk_read_vmap @ 0x8004388
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x080043ac: // orphan
         // CODE XREFS from sym.chunk_read_vmap @ 0x800439c, 0x80043a4
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x8004474           // unlikely

    loc_0x080043bc: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         if !x8 jmp 0x8004474     // unlikely

    loc_0x080043c4: // orphan
         if !w23 jmp 0x8004364    // unlikely

    loc_0x080043c8: // orphan
         // CODE XREF from sym.chunk_read_vmap @ 0x8004478
         x8 = 0x8004000
         x9 = x21 >> 0xc
         x8 = [x8]                // 0xcf // 207
         x9 = x9 << 6
         x8 = x8 >> 0xc
         x8 = x9 - x8,lsl 6
         x9 = xzr | 0xfffffffe00000000
         x8 = x8 + x9
         [var_18h] = x8
         b.eq 0x80042ec           // unlikely

    loc_0x080043f0: // orphan
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x80043f8 ()             // 0x80043f8(0x8004000, 0x0, 0x0, 0x0)
         x0 = var_18h             // int64_t arg1
         w1 = 0x1
         w2 = 0x4
         x3 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800440c ()             // 0x800440c(0x178018, 0x1, 0x4, 0x0)
         if !x0 jmp 0x800445c     // unlikely

    loc_0x08004414: // orphan
         x8 = x19 >> 0x1f
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if x8 jmp 0x8004480      // unlikely

    loc_0x08004420: // orphan
         x8 = x21 & 0xfff
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x1
         x21 = x22 + x8
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004434 ()             // 0x8004434(0x0, 0x0, 0x1, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym._copy_to_user ()     // sym._copy_to_user(0x0, 0x0)
         if (x0 == 0)
         cset w23,eq
         // CODE XREF from sym.chunk_read_vmap @ +0x1d8
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004454 ()             // 0x8004454(0x0, 0x0, 0x0, 0x0)
         jmp 0x8004460

    loc_0x0800445c: // orphan
         // CODE XREF from sym.chunk_read_vmap @ 0x8004410
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004460: // orphan
         // CODE XREF from sym.chunk_read_vmap @ 0x8004458
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004468 ()             // 0x8004468(0x8004000, 0x0, 0x0, 0x0)
         jmp 0x8004364

    loc_0x08004470: // orphan
         // CODE XREFS from sym.chunk_read_vmap @ 0x8004354, 0x8004360
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x08004474: // orphan
         // CODE XREFS from sym.chunk_read_vmap @ 0x80043b8, 0x80043c0
         0x8004474 ()             // 0x8004474(0x0, 0x0, 0x0, 0x0)
         if w23 jmp 0x80043c8     // likely

    loc_0x0800447c: // orphan
         jmp 0x8004364

    loc_0x08004480: // orphan
         // CODE XREF from sym.chunk_read_vmap @ 0x800441c
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         brk 0x800

}

/* ===== 0x08004534 ===== */
int sym.chunk_read_ioremap (int esi, int edx) {
    loc_0x8004534:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x0 >> 0x30 // arg1
        if !x8 jmp 0x800455c // likely
            
    loc_0x800455c:
        // CODE XREF from sym.chunk_read_ioremap @ 0x8004550
        x8 = 0x8004000
        x20 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x8 = [x8]     // 0xcf // 207
        x22 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        if !x8 jmp 0x8004594 // unlikely
            
    loc_0x8004594:
        // CODE XREFS from sym.chunk_read_ioremap @ 0x8004574, 0x8004584
        x9 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8004598:
        // CODE XREF from sym.chunk_read_ioremap @ 0x8004590
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = [x8 + 0x10] // 0xcf // 207
        w10 = w10 + 1
        [x8 + 0x10] = w10
        if !x9 jmp 0x80045b4 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08004588: // orphan
             ubfx x9,x22,0x1b, 7      // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x9 = x8 + x9,lsl 5
             jmp 0x8004598

    loc_0x080045ac: // orphan
         x10 = [x9]               // 0xd0 // 208
         tbnz w10,1,0x80045d8     // unlikely

    loc_0x080045b4: // orphan
         // CODE XREF from sym.chunk_read_ioremap @ 0x80045a8
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x80045d0           // unlikely

    loc_0x080045c4: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if x8 jmp 0x80046b8      // likely

    loc_0x080045d0: // orphan
         // CODE XREF from sym.chunk_read_ioremap @ 0x80045c0
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x80046d4

    loc_0x080045d8: // orphan
         // CODE XREF from sym.chunk_read_ioremap @ 0x80045b0
         tbnz w10,3,0x80045f8     // unlikely

    loc_0x080045dc: // orphan
         x9 = [x9 + 8]            // 0xd0 // 208
         if !x9 jmp 0x8004600     // likely

    loc_0x080045e4: // orphan
         x10 = x22 >> 0x15
         x9 = [x9 + 0x10]         // 0xd0 // 208
         x9 = x9 >> x10
         w23 = w9 & 1
         jmp 0x8004604

    loc_0x080045f8: // orphan
         // CODE XREF from sym.chunk_read_ioremap @ 0x80045d8
         w23 = 0x1
         jmp 0x8004604

    loc_0x08004600: // orphan
         // CODE XREF from sym.chunk_read_ioremap @ 0x80045e0
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x08004604: // orphan
         // CODE XREFS from sym.chunk_read_ioremap @ 0x80045f4, 0x80045fc
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x80046d4           // unlikely

    loc_0x08004614: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         if !x8 jmp 0x80046d4     // unlikely

    loc_0x0800461c: // orphan
         if !w23 jmp 0x80046b8    // unlikely

    loc_0x08004620: // orphan
         // CODE XREF from sym.chunk_read_ioremap @ 0x80046d8
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         x23 = x22 & 0xfffffffffffff000
         0x800462c ()             // 0x800462c(0x8004000, 0x0, 0x0, 0x0)
         x8 = 0x8004000
         x9 = 0x70f
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w8 = (byte) [x8]         // 0xcf // 207
         x9 = 0x68                // 'h'
         w1 = 0x1000
         x10 = x9 | 0x800
         if (w8 == 0)
         csel x2,x9,x10, eq       // int64_t arg3
         0x8004654 ()             // 0x8004654(0x0, 0x1000, 0x68000000000f0f, 0x0)
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x0 jmp 0x80046ac     // likely

    loc_0x08004660: // orphan
         x8 = x22 & 0xfff
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x1 = x23 + x8            // int64_t arg2
         0x8004670 ()             // 0x8004670(0x0, 0x8033000, 0x0, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004678 ()             // 0x8004678(0x8033000, 0x8033000, 0x0, 0x0)
         x8 = x19 >> 0x1f
         if x8 jmp 0x80046e0      // unlikely

    loc_0x08004684: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x1
         0x8004690 ()             // 0x8004690(0x0, 0x0, 0x1, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym._copy_to_user ()     // sym._copy_to_user(0x0, 0x0)
         if (x0 == 0)
         cset w23,eq

    loc_0x080046ac: // orphan
         // CODE XREF from sym.chunk_read_ioremap @ 0x800465c
         // CODE XREF from sym.chunk_read_ioremap @ +0x1b4
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x80046b4 ()             // 0x80046b4(0x8004000, 0x0, 0x0, 0x0)

    loc_0x080046b8: // orphan
         // CODE XREFS from sym.chunk_read_ioremap @ 0x8004558, 0x80045cc, 0x800461c, 0x80046dc
         w0 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x23
         (x20, 2) = 3
         x23 = [var_10h]          // 0x4 // 4
         (x22, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x080046d4: // orphan
         // CODE XREFS from sym.chunk_read_ioremap @ 0x80045d4, 0x8004610, 0x8004618
         0x80046d4 ()             // 0x80046d4(0x0, 0x0, 0x0, 0x0)
         if w23 jmp 0x8004620     // likely

    loc_0x080046dc: // orphan
         jmp 0x80046b8

    loc_0x080046e0: // orphan
         // CODE XREF from sym.chunk_read_ioremap @ 0x8004680
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         brk 0x800

}

/* ===== 0x08004728 ===== */
int sym.chunk_write_linear (int esi, int edx) {
    loc_0x8004728:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x2 >> 0x1f // arg3
        if x8 jmp 0x800482c // unlikely
            
    loc_0x800482c:
        // CODE XREF from sym.chunk_write_linear @ 0x8004740
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        brk 0x800
         // } else {
    loc_0x8004744:
        x8 = 0x8004000
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8]     // 0xcf // 207
        x1 = x2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = x0 - x8  // arg1
        x20 = x8 | 0xffffff8000000000
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8004768 ()  // 0x8004768(0xffffff8256fcb00c, 0x0, 0x0, 0x0)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w9,5,0x8004784 // likely
        }
        return eax;
    loc_0x8004778:
        x10 = [x8]    // 0xcf // 207
        x9 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        tbz w10,0x1a,0x800478c // likely
            
    loc_0x800478c:
        // CODE XREF from sym.chunk_write_linear @ 0x8004780
        x10 = 0x80    // '\x80'
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = x10 - x19
        if (x10 == x9)
        b.lo 0x8004810 // unlikely
            
    loc_0x8004810:
        // CODE XREFS from sym.chunk_write_linear @ 0x800479c, 0x8004868
        // CODE XREF from sym._copy_to_user @ +0xe0
        if x2 jmp 0x8004838 // unlikely
            
    loc_0x8004838:
        // CODE XREF from sym.chunk_write_linear @ 0x8004810
        x8 = x19 - x2
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x20 + x8 // int64_t arg1
        0x8004844 ()  // 0x8004844(0x0, 0x0, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x8004818
         // do {
    loc_0x8004818:
        // CODE XREFS from sym.chunk_write_linear @ 0x10c, 0x800484c
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08004828
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080047a8: // orphan
             // CODE XREF from sym.chunk_write_linear @ 0x800485c
             mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
             msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x8 = [x8 + 8]            // 0xcf // 207
             mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
             msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
             msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
             
             msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080047d0: // orphan
         // CODE XREF from sym.chunk_write_linear @ 0x8004858
         // CODE XREF from sym._copy_to_user @ +0xdc
         x1 = x21 & 0xff7fffffffffffff // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x80047dc ()             // 0x80047dc(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8004860

    loc_0x080047ec: // orphan
         // CODE XREF from sym.chunk_write_linear @ 0x800486c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004850: // orphan
         // CODE XREF from sym.chunk_write_linear @ 0x80047a0
         x9 = 0x8004000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x80047d0   // likely

    loc_0x0800485c: // orphan
         jmp 0x80047a8

    loc_0x08004860: // orphan
         // CODE XREF from sym.chunk_write_linear @ 0x80047e4
         x8 = 0x8004000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x8004810   // likely

    loc_0x0800486c: // orphan
         jmp 0x80047ec

}

/* ===== 0x0800537c ===== */
int sym._copy_from_user (int esi, int edx) {
    loc_0x800537c:
        // CALL XREF from sym.do_config_gyro_hook @ 0x80051f0
        // CALL XREF from sym.gyro_sendto_handler @ 0x8005614
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        tbnz w9,5,0x80053b0 // likely
            
    loc_0x80053b0:
        x9 = x1 << 8  // arg2
        x9 = x1 & x9,asr 8 // arg2
         // do {
    loc_0x80053b8:
        x10 = 0x80    // '\x80'
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = x10 - x19
        if (x10 == x9)
        b.lo 0x800543c // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080053cc: // orphan
             jmp 0x8005470

    loc_0x080053d4: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800547c
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080053fc: // orphan
         x1 = x1 & 0xff7fffffffffffff // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x8005408 ()             // 0x8005408(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8005480

    loc_0x08005418: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800548c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800543c: // orphan
         if x21 jmp 0x8005458     // unlikely

    loc_0x08005440: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800546c
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08005458: // orphan
         x8 = x19 - x21
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = x20 + x8            // int64_t arg1
         0x8005468 ()             // 0x8005468(0x0, 0x0, 0x0, 0x0)
         jmp 0x8005440

    loc_0x08005470: // orphan
         // CODE XREF from sym._copy_from_user @ 0x80053cc
         x9 = 0x8005000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x80053fc   // likely

    loc_0x0800547c: // orphan
         jmp 0x80053d4

    loc_0x08005480: // orphan
         // CODE XREF from sym._copy_from_user @ 0x8005410
         x8 = 0x8005000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x800543c   // likely

    loc_0x0800548c: // orphan
         jmp 0x8005418

}

/* ===== 0x08005490 ===== */
int sym._copy_to_user_1 (int esi, int edx) {
    loc_0x8005490:
        // CALL XREF from sym.do_config_gyro_hook @ 0x8005270
        // CALL XREF from sym.gyro_sendto_handler @ 0x80059b0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w9,5,0x80054a8 // likely
            
    loc_0x80054a8:
        x9 = x0 << 8  // arg1
        x9 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x80054b0:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = 0x80    // '\x80'
        x10 = x10 - x2 // arg3
        if (x10 == x9)
        b.lo 0x8005534 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080054cc: // orphan
             jmp 0x8005544

    loc_0x080054d4: // orphan
         // CODE XREF from sym._copy_to_user_1 @ 0x8005550
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080054fc: // orphan
         x0 = x0 & 0xff7fffffffffffff // int64_t arg1
         0x8005500 ()             // 0x8005500(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8005554

    loc_0x08005510: // orphan
         // CODE XREF from sym._copy_to_user_1 @ 0x8005560
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005534: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08005544: // orphan
         // CODE XREF from sym._copy_to_user_1 @ 0x80054cc
         x9 = 0x8005000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x80054fc   // likely

    loc_0x08005550: // orphan
         jmp 0x80054d4

    loc_0x08005554: // orphan
         // CODE XREF from sym._copy_to_user_1 @ 0x8005508
         x8 = 0x8005000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x8005534   // likely

    loc_0x08005560: // orphan
         jmp 0x8005510

}

/* ===== 0x08005568 ===== */
int sym.gyro_sendto_handler (int esi, int edx) {
    loc_0x8005568:
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8005000
        x8 = [x1]     // 0xc8 // 200 // arg2
        w9 = (byte) [x9] // 0xd0 // 208
        if !w9 jmp 0x80059c0 // likely
            
    loc_0x80059c0:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x080059e0
         // } else {
    loc_0x8005598:
        if !x8 jmp 0x80059c0 // likely
        }
        return eax;
    loc_0x800559c:
        x19 = [x8 + 8] // 0xcf // 207
        if !x19 jmp 0x80059c0 // likely
    loc_0x80055a4:
        x20 = [x8 + 0x10] // 0xcf // 207
        if !x20 jmp 0x80059c0 // unlikely
    loc_0x80055ac:
        x8 = 0x4ec5   // '\xc5N'
        w9 = 0x68     // 'h'
        x8 = 0xc4ec   // '\xec\xc4'
        x8 = 0xec4e   // 'N\xec'
        x8 = 0x4ec4   // '\xc4N'
        umulh x8,x20,x8
        x8 = x8 >> 5
        msub x8,x8,x9, x20
        if x8 jmp 0x80059c0 // unlikely
    loc_0x80055d0:
        if (x20 == 0x200)
        b.hi 0x80059c0 // unlikely
    loc_0x80055d8:
        x8 = 0x8005000
        x8 = x8 + 0
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w22 = [x8]    // 0xcf // 207
        w23 = [x8 + 4] // 0xcf // 207
        w24 = [x8 + 8] // 0xcf // 207
        0x80055f0 ()  // 0x80055f0(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x80059c0 // likely
    loc_0x80055f8:
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8005604 ()  // 0x8005604(0x0, 0x0, 0x0, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        x2 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        sym._copy_from_user () // sym._copy_from_user(0x0, 0x0, 0x0)
        if x0 jmp 0x80059b8 // unlikely
            
    loc_0x80059b8:
        // CODE XREF from sym.gyro_sendto_handler @ 0x80059f4
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x80059bc ()  // 0x80059bc(0x0, 0x0, 0x0, 0x0)
    loc_0x0800561c: // orphan
             if (w20 == 0x68)
             b.lo 0x80059b8           // likely

    loc_0x08005624: // orphan
         w8 = 0xec4f              // 'O\xec'
         x10 = x20 & 0xffffffff
         w12 = 0x80               // '\x80'
         w8 = 0x4ec4              // '\xc4N'
         w13 = 0x80               // '\x80'
         ubfx w11,w23,0x17, 8     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         umull x10,w10,w8
         w15 = w24 >> 0x1f
         ubfx w16,w24,0x17, 8     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil w13,w23,0, 0x17    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil w12,w24,0, 0x17    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w5 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w23 & 0x7fffffff    // x23
         w14 = w24 & 0x7fffffff
         x17 = x10 >> 0x25
         w10 = w23 >> 0x1f
         x0 = x21 + 0x1c
         w1 = 0x68                // 'h'
         if (w17 == 1)
         csinc w17,w17,wzr, hi
         x17 = !x17

    loc_0x0800567c: // orphan
         x6 = x9 * x1
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x4 = x9 + 1
         x26 = ~0x7
         x7 = x0 + x6
         x25 = x20 - x6

    loc_0x08005694: // orphan
         x27 = x6 + x3
         x27 = x27 + 8
         b.mi 0x80059f8           // likely

    loc_0x080056a0: // orphan
         if (x20 == x27)
         b.lo 0x80059f8           // unlikely

    loc_0x080056a8: // orphan
         x27 = x25 + x26
         if (x27 == 4)
         b.lo 0x80059f8           // likely

    loc_0x080056b4: // orphan
         x27 = x7 + x3
         ubfx w28,w22,1, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w27,[x27,-0x14]     // 0xe2 // 226
         if (w27 == 4)
         cset w30,eq
         if (w27 == 0x10)
         w30 = w30 & w22
         csel w27,wzr,w28, ne
         tbnz w30,0,0x80056f8     // unlikely

    loc_0x080056d8: // orphan
         if w27 jmp 0x80056f8     // unlikely

    loc_0x080056dc: // orphan
         x4 = x4 + 1
         x3 = x3 + 0x68
         x26 = x26 - 0x68
         x2 = x17 + x4
         if (x2 == 1)
         b.ne 0x8005694           // unlikely

    loc_0x080056f4: // orphan
         jmp 0x8005990

    loc_0x080056f8: // orphan
         x7 = x9 * x1
         x5 = x7 + x3
         x6 = x5 + 0x18
         tbnz x6,0x3f,0x80059f8   // unlikely

    loc_0x08005708: // orphan
         if (x20 == x6)
         b.lo 0x80059f8           // unlikely

    loc_0x08005710: // orphan
         x7 = x20 - x7
         x7 = x7 - x3
         x7 = x7 - 0x18
         if (x7 == 4)
         b.lo 0x80059f8           // unlikely

    loc_0x08005724: // orphan
         x5 = x5 + x0
         ldur w27,[x5,-4]         // 0xcc // 204
         w7 &= w27
         csel w26,w23,w27, eq
         if !w7 jmp 0x8005818     // unlikely

    loc_0x08005738: // orphan
         if !w8 jmp 0x8005818     // likely

    loc_0x0800573c: // orphan
         ubfx w7,w27,0x17, 8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = 0x80               // '\x80'
         bfxil w25,w27,0, 0x17    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w28 = w7 - w11
         b.ls 0x8005764           // likely

    loc_0x08005750: // orphan
         if (w28 == 0x18)
         w26 = w27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp ifgt 0x8005818       // unlikely

    loc_0x0800575c: // orphan
         w26 = w13 >> w28
         jmp 0x8005788

    loc_0x08005764: // orphan
         w28 = w11 - w7
         w26 = w13                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ls 0x8005788           // likely

    loc_0x08005770: // orphan
         if (w28 == 0x18)
         w26 = w23                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x23
         jmp ifgt 0x8005818       // unlikely

    loc_0x0800577c: // orphan
         w25 = w25 >> w28
         w7 = w11                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = w13                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005788: // orphan
         // CODE XREF from sym.gyro_sendto_handler @ 0x8005760
         w27 = w27 >> 0x1f
         if (w27 == w10)
         b.ne 0x80057b0           // unlikely

    loc_0x08005794: // orphan
         w26 = w26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = x26 + w25,uxtw
         tbz w25,0x18,0x80057a8   // likely

    loc_0x080057a0: // orphan
         x25 = x25 >> 1
         w7 = w7 + 1

    loc_0x080057a8: // orphan
         w26 = w10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80057e8

    loc_0x080057b0: // orphan
         w28 = w25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w30 = w26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w25 == w26)
         x2 = x28 - x30
         x28 = x30 - x28
         csel w26,w10,w27, lo
         csel x25,x28,x2, lo
         if !x25 jmp 0x8005814    // likely

    loc_0x080057d0: // orphan
         tbnz w25,0x17,0x80057e8  // unlikely

    loc_0x080057d4: // orphan
         x27 = x25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = x25 << 1
         w7 = w7 - 1
         if !x25 jmp 0x80057e8    // likely

    loc_0x080057e4: // orphan
         tbz w27,0x16,0x80057d4   // likely

    loc_0x080057e8: // orphan
         // CODE XREF from sym.gyro_sendto_handler @ 0x80057ac
         if (w7 == 0xff)
         b.lt 0x80057fc           // unlikely

    loc_0x080057f0: // orphan
         w2 = 0x7f80              // '\x80\x7f'
         w26 = w2 | w26,lsl 31
         jmp 0x8005818

    loc_0x080057fc: // orphan
         w26 = w26 << 0x1f
         if (w7 == 1)
         b.lt 0x8005818           // unlikely

    loc_0x08005808: // orphan
         bfi w25,w7,0x17, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = w25 | w26
         jmp 0x8005818

    loc_0x08005814: // orphan
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005818: // orphan
         // CODE XREFS from sym.gyro_sendto_handler @ 0x80057f8, 0x8005810
         tbnz x6,0x3f,0x80059f8   // unlikely

    loc_0x0800581c: // orphan
         if (x20 == x6)
         b.lo 0x80059f8           // unlikely

    loc_0x08005824: // orphan
         msub x2,x9,x1, x20
         x2 = x2 - x3
         x2 = x2 - 0x18
         if (x2 == 4)
         b.lo 0x80059f8           // unlikely

    loc_0x08005838: // orphan
         x7 = x9 * x1
         [x5 = w26
         x2 = x7 + x3
         x6 = x2 + 0x1c
         tbnz x6,0x3f,0x80059f8   // unlikely

    loc_0x0800584c: // orphan
         if (x20 == x6)
         b.lo 0x80059f8           // unlikely

    loc_0x08005854: // orphan
         x2 = x20 - x7
         x2 = x2 - x3
         x2 = x2 - 0x1c
         if (x2 == 4)
         b.lo 0x80059f8           // unlikely

    loc_0x08005868: // orphan
         x5 = x0 + x7
         w27 = [x5 + x3]          // 0xca000000cc // 867583393996
         w2 &= w27
         csel w26,w24,w27, eq
         if !w2 jmp 0x8005958     // unlikely

    loc_0x0800587c: // orphan
         if !w14 jmp 0x8005958    // likely

    loc_0x08005880: // orphan
         ubfx w7,w27,0x17, 8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = 0x80               // '\x80'
         bfxil w25,w27,0, 0x17    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w28 = w7 - w16
         b.ls 0x80058a8           // likely

    loc_0x08005894: // orphan
         if (w28 == 0x18)
         w26 = w27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp ifgt 0x8005958       // unlikely

    loc_0x080058a0: // orphan
         w26 = w12 >> w28
         jmp 0x80058cc

    loc_0x080058a8: // orphan
         w28 = w16 - w7
         w26 = w12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ls 0x80058cc           // likely

    loc_0x080058b4: // orphan
         if (w28 == 0x18)
         w26 = w24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp ifgt 0x8005958       // unlikely

    loc_0x080058c0: // orphan
         w25 = w25 >> w28
         w7 = w16                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = w12                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080058cc: // orphan
         // CODE XREF from sym.gyro_sendto_handler @ 0x80058a4
         w27 = w27 >> 0x1f
         w28 = w26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w27 == w15)
         b.ne 0x80058f4           // unlikely

    loc_0x080058dc: // orphan
         x25 = x28 + w25,uxtw
         tbz w25,0x18,0x80058ec   // likely

    loc_0x080058e4: // orphan
         x25 = x25 >> 1
         w7 = w7 + 1

    loc_0x080058ec: // orphan
         w26 = w15                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8005928

    loc_0x080058f4: // orphan
         w2 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w25 == w26)
         x30 = x2 - x28
         x2 = x28 - x2
         csel w26,w15,w27, lo
         csel x25,x2,x30, lo
         if !x25 jmp 0x8005954    // likely

    loc_0x08005910: // orphan
         tbnz w25,0x17,0x8005928  // unlikely

    loc_0x08005914: // orphan
         x27 = x25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = x25 << 1
         w7 = w7 - 1
         if !x25 jmp 0x8005928    // likely

    loc_0x08005924: // orphan
         tbz w27,0x16,0x8005914   // likely

    loc_0x08005928: // orphan
         // CODE XREF from sym.gyro_sendto_handler @ 0x80058f0
         if (w7 == 0xff)
         b.lt 0x800593c           // unlikely

    loc_0x08005930: // orphan
         w2 = 0x7f80              // '\x80\x7f'
         w26 = w2 | w26,lsl 31
         jmp 0x8005958

    loc_0x0800593c: // orphan
         w26 = w26 << 0x1f
         if (w7 == 1)
         b.lt 0x8005958           // unlikely

    loc_0x08005948: // orphan
         bfi w25,w7,0x17, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = w25 | w26
         jmp 0x8005958

    loc_0x08005954: // orphan
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005958: // orphan
         // CODE XREFS from sym.gyro_sendto_handler @ 0x8005938, 0x8005950
         tbnz x6,0x3f,0x80059f8   // unlikely

    loc_0x0800595c: // orphan
         if (x20 == x6)
         b.lo 0x80059f8           // unlikely

    loc_0x08005964: // orphan
         msub x9,x9,x1, x20
         x9 = x9 - x3
         x9 = x9 - 0x1c
         if (x9 == 4)
         b.lo 0x80059f8           // unlikely

    loc_0x08005978: // orphan
         if (x17 != x4)
         [x5 + x3] = w26
         w5 = 0x1
         x9 = x4                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x800567c           // unlikely

    loc_0x0800598c: // orphan
         jmp 0x8005994

    loc_0x08005990: // orphan
         // CODE XREF from sym.gyro_sendto_handler @ 0x80056f4
         tbz w5,0,0x80059b8       // likely

    loc_0x08005994: // orphan
         // CODE XREF from sym.gyro_sendto_handler @ 0x800598c
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x1
         0x80059a0 ()             // 0x80059a0(0x0, 0x0, 0x1, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym._copy_to_user_1 ()   // sym._copy_to_user_1(0x0, 0x0)
         if x0 jmp 0x80059e4      // unlikely

    loc_0x080059e4: // orphan
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         0x80059f0 ()             // 0x80059f0(0x8005000, 0x0, 0x0, 0x0)
         jmp 0x80059b8

    loc_0x080059f8: // orphan
         brk 0x1

}

/* ===== 0x08006164 ===== */
int sym._copy_from_user_1 (int esi, int edx) {
    loc_0x8006164:
        // XREFS: CALL 0x08005aa8  CALL 0x08005ae0  CALL 0x08005b2c
        // XREFS: CALL 0x08005b54  CALL 0x08005b84  CALL 0x08005bb4
        // XREFS: CALL 0x08005bf4  CALL 0x08005c08  CALL 0x08005c64
        // XREFS: CALL 0x08005c94  CALL 0x08005cc4  CALL 0x08005cf4
        // XREFS: CALL 0x08005d24  CALL 0x08005d5c  CALL 0x08005d8c
        // XREFS: CALL 0x08005dc0  CALL 0x08005df0  CALL 0x08005e1c
        // XREFS: CALL 0x08005e54  CALL 0x08005e8c
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        tbnz w9,5,0x8006198 // likely
            
    loc_0x8006198:
        x9 = x1 << 8  // arg2
        x9 = x1 & x9,asr 8 // arg2
         // do {
    loc_0x80061a0:
        x10 = 0x80    // '\x80'
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = x10 - x19
        if (x10 == x9)
        b.lo 0x8006224 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080061b4: // orphan
             jmp 0x8006258

    loc_0x080061bc: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x8006264
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080061e4: // orphan
         x1 = x1 & 0xff7fffffffffffff // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x80061f0 ()             // 0x80061f0(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8006268

    loc_0x08006200: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x8006274
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006224: // orphan
         if x21 jmp 0x8006240     // unlikely

    loc_0x08006228: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x8006254
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08006240: // orphan
         x8 = x19 - x21
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = x20 + x8            // int64_t arg1
         0x8006250 ()             // 0x8006250(0x0, 0x0, 0x0, 0x0)
         jmp 0x8006228

    loc_0x08006258: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x80061b4
         x9 = 0x8006000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x80061e4   // likely

    loc_0x08006264: // orphan
         jmp 0x80061bc

    loc_0x08006268: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x80061f8
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x8006224   // likely

    loc_0x08006274: // orphan
         jmp 0x8006200

}

/* ===== 0x08006278 ===== */
int sym._copy_to_user_2 (int esi, int edx) {
    loc_0x8006278:
        // CALL XREF from fcn.08005aec @ 0x8005b00
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w9,5,0x8006290 // likely
            
    loc_0x8006290:
        x9 = x0 << 8  // arg1
        x9 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x8006298:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = 0x80    // '\x80'
        x10 = x10 - x2 // arg3
        if (x10 == x9)
        b.lo 0x800631c // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080062b4: // orphan
             jmp 0x800632c

    loc_0x080062bc: // orphan
         // CODE XREF from sym._copy_to_user_2 @ 0x8006338
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080062e4: // orphan
         x0 = x0 & 0xff7fffffffffffff // int64_t arg1
         0x80062e8 ()             // 0x80062e8(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800633c

    loc_0x080062f8: // orphan
         // CODE XREF from sym._copy_to_user_2 @ 0x8006348
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800631c: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0800632c: // orphan
         // CODE XREF from sym._copy_to_user_2 @ 0x80062b4
         x9 = 0x8006000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x80062e4   // likely

    loc_0x08006338: // orphan
         jmp 0x80062bc

    loc_0x0800633c: // orphan
         // CODE XREF from sym._copy_to_user_2 @ 0x80062f0
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x800631c   // likely

    loc_0x08006348: // orphan
         jmp 0x80062f8

}

/* ===== 0x08006930 ===== */
int sym.put_task_struct (int esi, int edx) {
    loc_0x8006930:
        // CALL XREFS from sym.install_hw_bp @ 0x8006718, 0x80067e4
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = x0 + 0x40 // arg1
        jmp 0x8006968
         // do {
    loc_0x8006968:
        // CODE XREF from sym.put_task_struct @ 0x8006944
        w10 = 0x1
        prfm pstl1strm,[x0]
         // } while (?);
        }
        return eax;
    loc_0x08006958: // orphan
             dmb ishld
             x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             0x8006960 ()             // 0x8006960(0x0, 0x0, 0x0, 0x0)
             jmp 0x8006990

    loc_0x08006970: // orphan
         ldxr w9,[x0]
         w11 = w9 - w10
         stlxr w12,w11,[x0]       // arg1
         if w12 jmp 0x8006970     // unlikely

    loc_0x08006980: // orphan
         if (w9 == 1)
         b.eq 0x8006958           // unlikely

    loc_0x08006988: // orphan
         if (w9 == 0)
         jmp ifle 0x800699c       // likely

    loc_0x08006990: // orphan
         // CODE XREFS from sym.put_task_struct @ 0x8006964, 0x80069a4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0800699c: // orphan
         w1 = 0x3
         0x80069a0 ()             // 0x80069a0(0x0, 0x3, 0x0, 0x0)
         jmp 0x8006990

}

/* ===== 0x080069ac ===== */
int sym.hw_bp_handler (int esi, int edx) {
    loc_0x80069ac:
        hint 0x19
        sp = sp - 0x1d0
        [sp, 0x170] = (x29,2)
        [sp, 0x180] = (x28,2)
        [sp, 0x190] = (x26,2)
        [sp, 0x1a0] = (x24,2)
        [sp, 0x1b0] = (x22,2)
        [sp, 0x1c0] = (x20,2)
        x29 = var_170h
        if !x2 jmp 0x8006d30 // likely
            
    loc_0x8006d30:
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_1d0h
        hint 0x1d
        0x08006d50
         // } else {
    loc_0x80069d4:
        x27 = [x0 + 0x3f8] // 0xc7 // 199 // arg1
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if !x27 jmp 0x8006d30 // unlikely
        }
        return eax;
    loc_0x80069e0:
        w8 = 0x2510   // '\x10%'
        x25 = x27 + x8
        w8 = (byte) [x25] // 0xe0 // 224
        if w8 jmp 0x8006d30 // likely
    loc_0x80069f0:
        movi v0.2d,0000000000000000
        w8 = 0x250c   // '\f%'
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x27 + x8
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        [sp, 0x20] = (q0,2)
        [sp, 0x40] = (q0,2)
        [sp, 0x60] = (q0,2)
        [sp, 0x80] = (q0,2)
        [sp, 0xa0] = (q0,2)
        [sp, 0xc0] = (q0,2)
        [sp, 0xe0] = (q0,2)
        [sp, 0x100] = (q0,2)
        [sp, 0x120] = (q0,2)
        [sp, 0x140] = (q0,2)
        [sp + 0x10] = q0
        0x8006a30 ()  // 0x8006a30(0x250c, 0x0, 0x0, 0x0)
        w8 = [x27 + 0x34] // 0xe2 // 226
        w24 = (byte) [x27 + 0x31] // 0xe2 // 226
        w23 = 0x10
        w9 = (byte) [x27 + 0x30] // 0xe2 // 226
        x22 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        bic w8,w8,w8, asr 31 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [var_10h] = (byte) w24
        [var_8h] = w9
        if (w8 == 0x10)
        [var_0h_2] = (byte) w9
        csel w28,w8,w23, lt
        [var_0h_3] = w28
        if !w28 jmp 0x8006a8c // likely
            
    loc_0x8006a8c:
        w8 = [x27 + 0xf8] // 0xe2 // 226
        bic w8,w8,w8, asr 31 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w8 == 0x10)
        csel w26,w8,w23, lt
        [var_0h_4] = w26
        if !w26 jmp 0x8006ad0 // likely
            
    loc_0x8006ad0:
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        0x8006ad8 ()  // 0x8006ad8(0x0, 0x0, 0x0, 0x0)
        if !w24 jmp 0x8006ba4 // likely
            
    loc_0x8006ba4:
        mrs x28,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !w26 jmp 0x8006cf0 // likely
            
    loc_0x8006cf0:
        x9 = [x19 + 0x100] // 0xda // 218
        x8 = 0x8006000
        x8 = [x8]     // 0xcf // 207
        x9 = x9 | 1
        [x19 + 0x100] = x9
        if !x8 jmp 0x8006d14 // unlikely
            
    loc_0x8006d14:
        x8 = 0x8006000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8006d28 // unlikely
            
    loc_0x8006d28:
        w8 = 0x1
        [x25] = (byte) w8
    loc_0x08006a68: // orphan
             w2 = w28 << 2
             x26 = var_10h
             x1 = x27 + 0x38          // int64_t arg3
             x0 = x26 | 8             // int64_t arg1
             0x8006a78 ()             // 0x8006a78(0x178018, 0x38, 0x0, 0x0)
             w2 = w28 << 3
             x1 = x27 + 0x78          // int64_t arg3
             x0 = var_48h             // int64_t arg1
             0x8006a88 ()             // 0x8006a88(0x178058, 0x78, 0x0, 0x0)

    loc_0x08006aa4: // orphan
         w23 = w26 << 2
         x8 = var_10h
         x1 = x27 + 0xfc          // int64_t arg3
         x0 = var_cch             // int64_t arg1
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_1d0h
         0x8006ab8 ()             // 0x8006ab8(0x1780dc, 0xfc, 0x0, 0x0)
         x8 = var_10h
         x1 = x27 + 0x13c         // int64_t arg3
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_1d0h
         x0 = var_10ch            // int64_t arg1
         0x8006acc ()             // 0x8006acc(0x17811c, 0x13c, 0x0, 0x0)

    loc_0x08006ae0: // orphan
         if !w28 jmp 0x8006ba4    // likely

    loc_0x08006ae4: // orphan
         x8 = var_10h
         x23 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x21,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x22 = var_48h
         jmp 0x8006b08

    loc_0x08006af8: // orphan
         [x20 + x8,lsl 3] = x24

    loc_0x08006afc: // orphan
         // CODE XREFS from sym.hw_bp_handler @ 0x8006b38, 0x8006b70, 0x8006ba0
         x23 = x23 + 1
         if (x28 == x23)
         b.eq 0x8006ba4           // unlikely

    loc_0x08006b08: // orphan
         // CODE XREF from sym.hw_bp_handler @ 0x8006af4
         if (x23 == 0x10)
         b.eq 0x8006d54           // unlikely

    loc_0x08006b10: // orphan
         x8 = x22 + x23,lsl 2
         x24 = [x22 + x23,lsl 3]  // 0xde000000dd // 953482739933
         ldur w8,[x8,-0x40]       // 0xcf // 207
         if (w8 == 0x1e)
         b.ls 0x8006af8           // unlikely

    loc_0x08006b24: // orphan
         if (w8 == 0x20)
         b.eq 0x8006b3c           // unlikely

    loc_0x08006b2c: // orphan
         if (w8 == 0x1f)
         b.ne 0x8006afc           // likely

    loc_0x08006b34: // orphan
         [x20 + 0xf8] = x24
         jmp 0x8006afc

    loc_0x08006b3c: // orphan
         x8 = [x20 + 0x108]       // 0xdb // 219
         x9 = x24 & 3
         x8 = x8 & 0xf
         x8 = x8 | x9
         if x8 jmp 0x8006b74      // likely

    loc_0x08006b50: // orphan
         x8 = [x21]               // 0xdc // 220
         x9 = 0x80                // '\x80'
         if ((x8 & 0x400000) == 0)
         w8 = ~0xfff              // '\xff\x0f'
         csel x8,x9,x8, eq
         if (x8 == x24)
         b.ls 0x8006b74           // unlikely

    loc_0x08006b6c: // orphan
         [x20 + 0x100] = x24
         jmp 0x8006afc

    loc_0x08006b74: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         x1 = 0x8006000
         x1 = x1 + 0              // int64_t arg3
         0x8006b84 ()             // 0x8006b84(0x8006000, 0x8006000, 0x0, 0x0)
         if !w0 jmp 0x8006afc     // unlikely

    loc_0x08006b8c: // orphan
         w2 = [x21 + 0x618]       // 0xdc // 220
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x8006b9c ()             // 0x8006b9c(0x8006000, 0x0, -1, 0x0)
         jmp 0x8006afc

    loc_0x08006bac: // orphan
         w8 = [var_8h]            // 0x4 // 4
         if !w8 jmp 0x8006c2c     // unlikely

    loc_0x08006bb4: // orphan
         x8 = [x27 + 0x18]        // 0xe2 // 226
         x21 = 0x8006000
         x21 = x21 + 0
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [sp] = (x8,2)
         0x8006bc8 ()             // 0x8006bc8(0x8006000, 0x0, 0x0, 0x0)
         x8 = 0x8006000
         x9 = 0x8006000
         x10 = 0x8006000
         w20 = (byte) [x8]        // 0xcf // 207
         x8 = 0x8006000
         x11 = 0x8006000
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x28 = [x8]               // 0xcf // 207
         w23 = [x9]               // 0xd0 // 208
         if (w20 == 0)
         w22 = [x10]              // 0xd1 // 209
         w24 = [x11]              // 0xd2 // 210
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         cset w27,ne
         0x8006c04 ()             // "5" // 0x8006c04(0x8006000, 0x8006000, 0x0, 0x0)
         w21 = 0x1
         if !x28 jmp 0x8006c44    // unlikely

    loc_0x08006c10: // orphan
         x8 = [sp]                // 0x4 // 4
         if (x28 == x8)
         b.ne 0x8006c44           // unlikely

    loc_0x08006c1c: // orphan
         x28 = [var_8h]           // 0x4 // 4
         if !w20 jmp 0x8006cf0    // likely

    loc_0x08006c24: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8006c48

    loc_0x08006c2c: // orphan
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = 0x1
         jmp 0x8006c48

    loc_0x08006c44: // orphan
         x28 = [var_8h]           // 0x4 // 4

    loc_0x08006c48: // orphan
         // CODE XREFS from sym.hw_bp_handler @ 0x8006c28, 0x8006c40
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x8006c58     // unlikely

    loc_0x08006c54: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)

    loc_0x08006c58: // orphan
         w9 = w27 ^ 1
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x28 + 0xec0
         w9 = w21 | w9
         x11 = var_10h
         jmp 0x8006c7c

    loc_0x08006c70: // orphan
         // CODE XREF from sym.hw_bp_handler @ 0x8006cd8
         x8 = x8 + 1
         if (x8 == x26)
         b.hs 0x8006cdc           // likely

    loc_0x08006c7c: // orphan
         // CODE XREF from sym.hw_bp_handler @ 0x8006c6c
         if (x8 == 0x10)
         b.eq 0x8006d54           // unlikely

    loc_0x08006c84: // orphan
         x12 = x11 + x8,lsl 2
         w14 = [var_10ch]         // 0xd3 // 211
         tbz w9,0,0x8006c98       // likely

    loc_0x08006c90: // orphan
         w13 = w14                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8006cc0

    loc_0x08006c98: // orphan
         if (w8 == 2)
         b.eq 0x8006cbc           // unlikely

    loc_0x08006ca0: // orphan
         if (w8 == 1)
         w13 = w22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.eq 0x8006cc0           // unlikely

    loc_0x08006cac: // orphan
         w13 = w14                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w8 jmp 0x8006cc0      // unlikely

    loc_0x08006cb4: // orphan
         w13 = w23                // '\xff\xff\xff\xff\xff\xff\xff\xff' // x23
         jmp 0x8006cc0

    loc_0x08006cbc: // orphan
         w13 = w24                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006cc0: // orphan
         // CODE XREFS from sym.hw_bp_handler @ 0x8006c94, 0x8006cb8
         w12 = [var_cch]          // 0xd3 // 211
         if (w12 == 0x1f)
         b.hi 0x8006c70           // likely

    loc_0x08006ccc: // orphan
         x12 = x10 + x12,lsl 4
         w13 = w13                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x12] = (x13,2)
         jmp 0x8006c70

    loc_0x08006cdc: // orphan
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x8006cf0     // unlikely

    loc_0x08006ce8: // orphan
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)

    loc_0x08006d08: // orphan
         x1 = x19 + 0xd8
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // xzr(0x0, 0xd8, 0x0, 0x0)

    loc_0x08006d20: // orphan
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // "(" // xzr(0x0, 0x0, 0x0, 0x0)

    loc_0x08006d54: // orphan
         brk 0x5512

}

/* ===== 0x08006d58 ===== */
int sym.list_add (int esi, int edx) {
    loc_0x8006d58:
        // CALL XREF from sym.install_hw_bp @ 0x800680c
        x8 = 0x8006000
        x9 = 0x8006000
        x9 = x9 + 0
        x2 = [x8]     // 0xcf // 207
        x10 = [x2 + 8] // 0xc9 // 201
        if (x2 == x0) // arg1
        ccmp x0,x9,4, ne // arg1
        ccmp x10,x9,0, ne
        b.ne 0x8006d8c // likely
            
    loc_0x8006d8c:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = 0x8006000
        x1 = x1 + 0
        0x8006da0 ()  // 0x8006da0(0x0, 0x8006000, 0x0, 0x0)
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        // lr
         // } else {
    loc_0x8006d7c:
        [x2 + 8] = x0 // arg1
        [x0] = (x2,2) // arg1
        [x8] = x0     // arg1
        // lr
        }
        return eax;
}

/* ===== 0x08008218 ===== */
int sym.hw_bp_step_handler (int esi, int edx) {
    loc_0x8008218:
        w8 = (byte) [x0 + 0x108] // 0xc7 // 199 // arg1
        if ((w8 & 0xf) == 0)
        b.eq 0x800822c // unlikely
            
    loc_0x800822c:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8008000
        x0 = x0 + 0   // int64_t arg1
        0x8008244 ()  // 0x8008244(0x8008000, 0x0, 0x0, 0x0)
        x8 = 0x8008000
        x8 = x8 + 0
        w10 = 0x2510  // '\x10%'
        x9 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8008258:
        x9 = [x9]     // 0xd0 // 208
        if (x9 == x8)
        b.eq 0x80082a4 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08008264: // orphan
             x19 = x9 + x10
             w11 = (byte) [x19]       // 0xda // 218
             if !w11 jmp 0x8008258    // likely

    loc_0x08008270: // orphan
         x0 = [x9 + 0x20]         // 0xd0 // 208
         if !x0 jmp 0x80082a0     // unlikely

    loc_0x08008278: // orphan
         if (x0 != 1)
         b.hi 0x80082a0           // unlikely

    loc_0x08008280: // orphan
         x9 = [x0 + 0x100]        // 0xc7 // 199
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         x9 = x9 & 0xfffffffffffffffe
         [x0 + 0x100] = x9
         if !x8 jmp 0x80082a0     // unlikely

    loc_0x08008298: // orphan
         x1 = x0 + 0xd8
         blr x8                   // xzr(0x0, 0xd8, 0x0, 0x0)

    loc_0x080082a0: // orphan
         [x19] = (byte) wzr

    loc_0x080082a4: // orphan
         x0 = 0x8008000
         x0 = x0 + 0              // int64_t arg1
         0x80082ac ()             // 0x80082ac(0x8008000, 0x0, 0x0, 0x0)
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x80082c4     // unlikely

    loc_0x080082bc: // orphan
         mrs x0,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)

    loc_0x080082c4: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x19 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

}

/* ===== 0x08008c50 ===== */
int sym.kp_follow_entry (int esi, int edx) {
    loc_0x8008c50:
        // CALL XREF from sym.kp_core_hook_install @ 0x8008adc
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = [x0]     // 0xc7 // 199 // arg1
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        ubfx x9,x8,0x1a, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w9 == 5)
        b.ne 0x8008c8c // likely
            
    loc_0x8008c8c:
        w9 = 0x245f   // '_$'
        w9 = 0xd503
        if (w8 == w9)
        b.eq 0x8008cbc // unlikely
            
    loc_0x8008cbc:
        x19 = x1 + 4
         // do {
    loc_0x8008cc0:
        // CODE XREF from sym.kp_follow_entry @ 0x8008c88
        w8 = [x19]    // 0xda // 218
        ubfx x9,x8,0x1a, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w9 == 5)
        b.ne 0x8008ce8 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08008cac: // orphan
             w9 = 0x249f              // '\x9f$'
             w9 = 0xd503
             if (w8 == w9)
             b.ne 0x8008f28           // likely

    loc_0x08008cd0: // orphan
         x9 = xzr | 0xfffffffff8000000
         ubfiz x8,x8,2, 0x1a      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x19 + x9
         x8 = x8 ^ loc.__kcfi_typeid_delayed_work_timer_fn // loc.imp.param_ops_int
         x19 = x9 + x8
         jmp 0x8008d14

    loc_0x08008ce8: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         b.ne 0x8008f0c           // likely

    loc_0x08008d10: // orphan
         x19 = x19 + 4

    loc_0x08008d14: // orphan
         // CODE XREF from sym.kp_follow_entry @ 0x8008ce4
         w8 = [x19]               // 0xda // 218
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)
         b.ne 0x8008d3c           // likely

    loc_0x08008d24: // orphan
         x9 = xzr | 0xfffffffff8000000
         ubfiz x8,x8,2, 0x1a      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x19 + x9
         x8 = x8 ^ loc.__kcfi_typeid_delayed_work_timer_fn // loc.imp.param_ops_int
         x19 = x9 + x8
         jmp 0x8008d68

    loc_0x08008d3c: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         b.ne 0x8008f0c           // likely

    loc_0x08008d64: // orphan
         x19 = x19 + 4

    loc_0x08008d68: // orphan
         // CODE XREF from sym.kp_follow_entry @ 0x8008d38
         w8 = [x19]               // 0xda // 218
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)
         b.ne 0x8008d90           // likely

    loc_0x08008d78: // orphan
         x9 = xzr | 0xfffffffff8000000
         ubfiz x8,x8,2, 0x1a      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x19 + x9
         x8 = x8 ^ loc.__kcfi_typeid_delayed_work_timer_fn // loc.imp.param_ops_int
         x19 = x9 + x8
         jmp 0x8008dbc

    loc_0x08008d90: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         b.ne 0x8008f0c           // likely

    loc_0x08008db8: // orphan
         x19 = x19 + 4

    loc_0x08008dbc: // orphan
         // CODE XREF from sym.kp_follow_entry @ 0x8008d8c
         w8 = [x19]               // 0xda // 218
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)
         b.ne 0x8008de4           // likely

    loc_0x08008dcc: // orphan
         x9 = xzr | 0xfffffffff8000000
         ubfiz x8,x8,2, 0x1a      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x19 + x9
         x8 = x8 ^ loc.__kcfi_typeid_delayed_work_timer_fn // loc.imp.param_ops_int
         x19 = x9 + x8
         jmp 0x8008e10

    loc_0x08008de4: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         b.ne 0x8008f0c           // likely

    loc_0x08008e0c: // orphan
         x19 = x19 + 4

    loc_0x08008e10: // orphan
         // CODE XREF from sym.kp_follow_entry @ 0x8008de0
         w8 = [x19]               // 0xda // 218
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)
         b.ne 0x8008e38           // likely

    loc_0x08008e20: // orphan
         x9 = xzr | 0xfffffffff8000000
         ubfiz x8,x8,2, 0x1a      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x19 + x9
         x8 = x8 ^ loc.__kcfi_typeid_delayed_work_timer_fn // loc.imp.param_ops_int
         x19 = x9 + x8
         jmp 0x8008e64

    loc_0x08008e38: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         b.ne 0x8008f0c           // likely

    loc_0x08008e60: // orphan
         x19 = x19 + 4

    loc_0x08008e64: // orphan
         // CODE XREF from sym.kp_follow_entry @ 0x8008e34
         w8 = [x19]               // 0xda // 218
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)
         b.ne 0x8008e8c           // likely

    loc_0x08008e74: // orphan
         x9 = xzr | 0xfffffffff8000000
         ubfiz x8,x8,2, 0x1a      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x19 + x9
         x8 = x8 ^ loc.__kcfi_typeid_delayed_work_timer_fn // loc.imp.param_ops_int
         x19 = x9 + x8
         jmp 0x8008eb8

    loc_0x08008e8c: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         b.ne 0x8008f0c           // likely

    loc_0x08008eb4: // orphan
         x19 = x19 + 4

    loc_0x08008eb8: // orphan
         // CODE XREF from sym.kp_follow_entry @ 0x8008e88
         w8 = [x19]               // 0xda // 218
         ubfx x9,x8,0x1a, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 5)
         b.ne 0x8008ee0           // likely

    loc_0x08008ec8: // orphan
         x9 = xzr | 0xfffffffff8000000
         ubfiz x8,x8,2, 0x1a      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x19 + x9
         x8 = x8 ^ loc.__kcfi_typeid_delayed_work_timer_fn // loc.imp.param_ops_int
         x19 = x9 + x8
         jmp 0x8008f0c

    loc_0x08008ee0: // orphan
         w9 = 0x245f              // '_$'
         w9 = 0xd503
         if (w8 == w9)
         w9 = 0x24df              // '\xdf$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         w9 = 0x249f              // '\x9f$'
         w9 = 0xd503
         ccmp w8,w9,4, ne
         b.ne 0x8008f0c           // likely

    loc_0x08008f08: // orphan
         x19 = x19 + 4

    loc_0x08008f0c: // orphan
         // CODE XREF from sym.kp_follow_entry @ 0x8008edc
         if (x19 == x1)
         b.ne 0x8008f30           // unlikely

    loc_0x08008f14: // orphan
         // CODE XREFS from sym.kp_follow_entry @ 0x8008f2c, 0x8008f40
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x19 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08008f28: // orphan
         x19 = x1                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8008f14

    loc_0x08008f30: // orphan
         x0 = 0x8008000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8008f3c ()             // 0x8008f3c(0x8008000, 0x0, 0x0, 0x0)
         jmp 0x8008f14

}

/* ===== 0x08008f44 ===== */
int sym.kp_alloc_slot (int esi, int edx) {
    loc_0x8008f44:
        // CALL XREF from sym.kp_core_hook_install @ 0x8008af4
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8008000
        x0 = x0 + 0
        0x8008f5c ()  // 0x8008f5c(0x8008000, 0x0, 0x0, 0x0)
        x8 = 0x8008000
        x9 = [x8]     // 0xcf // 207
        tbnz w9,0,0x8008f78 // unlikely
            
    loc_0x8008f78:
        tbnz w9,1,0x8008f88 // unlikely
            
    loc_0x8008f88:
        tbnz w9,2,0x8008f98 // unlikely
            
    loc_0x8008f98:
        tbnz w9,3,0x8008fa8 // unlikely
            
    loc_0x8008fa8:
        tbnz w9,4,0x8008fb8 // unlikely
            
    loc_0x8008fb8:
        tbnz w9,5,0x8008fc8 // unlikely
            
    loc_0x8008fc8:
        tbnz w9,6,0x8008fd8 // unlikely
            
    loc_0x8008fd8:
        tbnz w9,7,0x8008fe8 // unlikely
            
    loc_0x8008fe8:
        tbnz w9,8,0x8008ff8 // unlikely
            
    loc_0x8008ff8:
        tbnz w9,9,0x8009008 // unlikely
            
    loc_0x8009008:
        tbnz w9,0xa,0x8009018 // unlikely
            
    loc_0x8009018:
        tbnz w9,0xb,0x8009028 // unlikely
            
    loc_0x8009028:
        tbnz w9,0xc,0x8009038 // unlikely
            
    loc_0x8009038:
        tbnz w9,0xd,0x8009048 // unlikely
            
    loc_0x8009048:
        tbnz w9,0xe,0x8009058 // unlikely
            
    loc_0x8009058:
        tbnz w9,0xf,0x800908c // unlikely
            
    loc_0x800908c:
        w19 = ~0x1b
        jmp 0x800906c
         // do {
    loc_0x800906c:
        // CODE XREF from sym.kp_alloc_slot @ 0x8009090
        x0 = 0x8009000
        x0 = x0 + 0
        0x8009074 ()  // 0x8009074(0x8009000, 0x0, 0x0, 0x0)
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08009088
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
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08009064: // orphan
             // XREFS: CODE 0x08008f74  CODE 0x08008f84  CODE 0x08008f94  
             // XREFS: CODE 0x08008fa4  CODE 0x08008fb4  CODE 0x08008fc4  
             // XREFS: CODE 0x08008fd4  CODE 0x08008fe4  CODE 0x08008ff4  
             // XREFS: CODE 0x08009004  CODE 0x08009014  CODE 0x08009024  
             // XREFS: CODE 0x08009034  CODE 0x08009044  CODE 0x08009054  
             x9 = x9 | x10
             [x8] = x9

}

/* ===== 0x08009094 ===== */
int sym.kp_restore_kprobe_insn (int esi, int edx) {
    loc_0x8009094:
        // CALL XREF from sym.kp_core_hook_install @ 0x8008b48
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8009000
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8]     // 0xcf // 207
        if x8 jmp 0x80090c0 // likely
            
    loc_0x80090c0:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        blr x8        // xzr(0x0, 0x0, 0x0, 0x0)
        if x0 jmp 0x80090e8 // unlikely
            
    loc_0x80090e8:
        w1 = [x0 + 0x50] // 0xc7 // 199
        x0 = 0x8009000
        x0 = x0 + 0   // int64_t arg1
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x20] = w1
        0x80090fc ()  // 0x80090fc(0x8009000, -1, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8009104:
        // CODE XREF from sym.kp_restore_kprobe_insn @ 0x80090e4
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08009110
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080090d8: // orphan
             // CODE XREF from sym.kp_restore_kprobe_insn @ 0x80090bc
             x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
             0x80090dc ()             // " " // 0x80090dc(0x0, 0x0, 0x0, 0x0)
             w0 = ~0x1
             jmp 0x8009104

}

/* ===== 0x08009114 ===== */
int sym.kp_build_patch (int esi, int edx) {
    loc_0x8009114:
        // CALL XREF from sym.kp_core_hook_install @ 0x8008b74
        x9 = [x0 + 0x20] // 0xc7 // 199 // arg1
        (x12, 2) = 3  // arg1
        w8 = 0x70     // 'p'
        x11 = 0x8009000
        x11 = x11 + 0
        smaddl x8,w9,w8, x11
        w11 = 0x220
        w9 = 0x51     // 'Q'
        if (x10 == x12)
        w10 = 0x201f  // '\x1f '
        w11 = 0xd65f  // '_\xd6'
        w13 = 0x5
        w10 = 0xd503
        w9 = 0x5800
        [x0 + 0x24] = w13 // arg1
        b.ne 0x8009168 // likely
            
    loc_0x8009168:
        [x0 + 0x48] = w8 // arg1
        x8 = x8 >> 0x20
        w11 = 0x51    // 'Q'
        w9 = 0x220
        w11 = 0x5800
        [x0 + 0x50] = w10 // arg1
        w9 = 0xd65f   // '_\xd6'
         // do {
    loc_0x8009184:
        // CODE XREF from sym.kp_build_patch @ 0x8009164
        [x0, 0x40] = (w11,2) // arg1
        [x0 + 0x4c] = w8 // arg1
        // lr
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08009190 ===== */
int sym.kp_relocate_insn (int esi, int edx) {
    loc_0x8009190:
        // CALL XREF from sym.kp_core_hook_install @ 0x8008b8c
        if (w2 == 5)  // arg3
        b.hs 0x80094c4 // unlikely
            
    loc_0x80094c4:
        brk 0x5512
         // } else {
    loc_0x8009198:
        x8 = x0 + w2,uxtw 2 // arg3
        w9 = 0x1400
        w8 = [x8 + 0x2c] // 0xcf // 207
        w10 = w8 & 0xfc000000
        if (w10 == w9)
        w9 = w2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        b.ne 0x8009200 // likely
        }
        return eax;
    loc_0x80091b4:
        w11 = w2 + 0xf // arg3
        x12 = [x0 + 8] // 0xc7 // 199 // arg1
        ubfiz x8,x8,2, 0x1a // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = x9 - x11
        x11 = 0x8009000
        x11 = x11 + 0
        x8 = x8 ^ loc.__kcfi_typeid_delayed_work_timer_fn // loc.imp.param_ops_int
        x8 = x8 - x11
        x11 = [x0 + 0x20] // 0xc7 // 199 // arg1
        x8 = x8 + x9,lsl 2
        x9 = ~0x6f    // 'o'
        x8 = x8 + x12
        smaddl x8,w11,w9, x8
        x9 = xzr | 0xfffffffff0000000
        x11 = x8 + x9
        if (x11 == x9)
        b.hs 0x8009260 // likely
            
    loc_0x8009260:
        x9 = xzr | 0xfffffffff8000000
        x8 = x8 + x9
        w9 = 0x1400
        if (w10 == w9)
        w9 = 0x9400
        ubfx w8,w8,2, 0x1a // '\xff\xff\xff\xff\xff\xff\xff\xff'
        csel w9,w10,w9, eq
        w8 = w8 | w9
        jmp 0x800943c
         // do {
    loc_0x800943c:
        // CODE XREFS from sym.kp_relocate_insn @ 0x8009280, 0x8009394, 0x80093a8, 0x80094c0
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1] = w8     // arg2
        // lr
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08009200: // orphan
             w11 = w8 & 0xfffffff0
             w12 = 0x5400
             w11 = w11 & 0xff00001f
             if (w11 == w12)
             b.ne 0x8009284           // likely

    loc_0x08009214: // orphan
         x10 = x8 >> 3
         w11 = w2 + 0xf           // arg3
         x12 = [x0 + 8]           // 0xc7 // 199 // arg1
         x9 = x9 - x11
         x11 = 0x8009000
         x11 = x11 + 0
         x10 = x10 & 0x1ffffc
         x10 = x10 ^ 0x100000
         x10 = x10 - x11
         x11 = [x0 + 0x20]        // 0xc7 // 199 // arg1
         x9 = x10 + x9,lsl 2
         x10 = ~0x6f              // 'o'
         x9 = x9 + x12
         smaddl x9,w11,w10, x9
         x10 = x9 - 0x200,lsl 12
         if (x10 != 0x200)
         b.hs 0x8009430           // likely

    loc_0x08009258: // orphan
         w0 = ~0x21               // '!'
                                  // lr

    loc_0x08009284: // orphan
         w11 = 0x9400
         if (w10 == w11)
         b.eq 0x80091b4           // unlikely

    loc_0x08009290: // orphan
         w10 = 0x9f00
         w11 = 0x9000
         w10 = w8 & w10
         if (w10 == w11)
         b.eq 0x80092b8           // unlikely

    loc_0x080092a4: // orphan
         w11 = 0x1000
         if (w10 == w11)
         b.ne 0x8009348           // likely

    loc_0x080092b0: // orphan
         w10 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x80092bc

    loc_0x080092b8: // orphan
         w10 = 0x1

    loc_0x080092bc: // orphan
         // CODE XREF from sym.kp_relocate_insn @ 0x80092b4
         x11 = [x0 + 0x20]        // 0xc7 // 199 // arg1
         w12 = w2 + 0xf           // arg3
         x13 = 0x8009000
         x13 = x13 + 0
         x14 = x8 >> 0x11
         w15 = 0x70               // 'p'
         x16 = [x0 + 8]           // 0xc7 // 199 // arg1
         x17 = x8 >> 5
         x12 = x13 + w12,uxtw 2
         smaddl x11,w11,w15, x12
         x12 = x14 & 0x3000
         w8 = w8 & 0x1f
         x9 = x16 + x9,lsl 2
         bfi x12,x17,0xe, 0x13    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w10 jmp 0x8009328    // likely

    loc_0x080092f8: // orphan
         x10 = x12 << 0x1f
         x9 = x9 + x10,asr 31
         x10 = x11 & 0xfffffffffffff000
         x11 = xzr | 0xfffffffe00000000
         x9 = x9 & 0xfffffffffffff000
         x9 = x9 - x10
         x10 = xzr | 0xffffffff00000000
         x10 = x9 + x10
         if (x10 == x11)
         b.hs 0x8009378           // likely

    loc_0x08009320: // orphan
         w0 = ~0x21               // '!'
                                  // lr

    loc_0x08009328: // orphan
         x10 = x12 ^ 0x100000
         x9 = x10 + x9
         x9 = x9 - x11
         x10 = x9 - 0x200,lsl 12
         if (x10 != 0x200)
         b.hs 0x8009398           // likely

    loc_0x08009340: // orphan
         w0 = ~0x21               // '!'
                                  // lr

    loc_0x08009348: // orphan
         w10 = w8 & 0xff000000
         w11 = ~0xe800
         if (w10 == w11)
         jmp ifle 0x80093ac       // likely

    loc_0x08009358: // orphan
         w11 = ~0xa800
         if (w10 == w11)
         jmp ifgt 0x80093cc       // unlikely

    loc_0x08009364: // orphan
         w11 = 0x1800
         if (w10 == w11)
         b.eq 0x80093e4           // unlikely

    loc_0x08009370: // orphan
         w11 = 0x1c00
         jmp 0x80093dc

    loc_0x08009378: // orphan
         x10 = x9 >> 9
         w9 = w9 >> 0xc
         w10 = w10 & 0xffffe0
         bfi w10,w9,0x1d, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x9000
         w8 = w8 | w9
         w8 = w10 | w8
         jmp 0x800943c

    loc_0x08009398: // orphan
         x9 = x9 - 0x100,lsl 12
         w9 = w9 >> 2
         bfi w8,w9,5, 0x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 | 0x10000000
         jmp 0x800943c

    loc_0x080093ac: // orphan
         w11 = 0x9800
         if (w10 == w11)
         b.eq 0x80093e4           // unlikely

    loc_0x080093b8: // orphan
         w11 = 0x9c00
         if (w10 == w11)
         b.eq 0x80093e4           // unlikely

    loc_0x080093c4: // orphan
         w11 = 0xd800
         jmp 0x80093dc

    loc_0x080093cc: // orphan
         w11 = 0x5800
         if (w10 == w11)
         b.eq 0x80093e4           // unlikely

    loc_0x080093d8: // orphan
         w11 = 0x5c00

    loc_0x080093dc: // orphan
         // CODE XREFS from sym.kp_relocate_insn @ 0x8009374, 0x80093c8
         if (w10 == w11)
         b.ne 0x8009448           // unlikely

    loc_0x080093e4: // orphan
         x10 = x8 >> 3
         w11 = w2 + 0xf           // arg3
         x12 = [x0 + 8]           // 0xc7 // 199 // arg1
         x9 = x9 - x11
         x11 = 0x8009000
         x11 = x11 + 0
         x10 = x10 & 0x1ffffc
         x10 = x10 ^ 0x100000
         x10 = x10 - x11
         x11 = [x0 + 0x20]        // 0xc7 // 199 // arg1
         x9 = x10 + x9,lsl 2
         x10 = ~0x6f              // 'o'
         x9 = x9 + x12
         smaddl x9,w11,w10, x9
         x10 = x9 - 0x200,lsl 12
         if (x10 != 0x200)
         b.hs 0x8009430           // likely

    loc_0x08009428: // orphan
         w0 = ~0x21               // '!'
                                  // lr

    loc_0x08009430: // orphan
         x9 = x9 - 0x100,lsl 12
         w9 = w9 >> 2
         bfi w8,w9,5, 0x13        // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08009448: // orphan
         w10 = w8 & 0x7f000000
         w11 = 0xcc00
         w10 = w10 + w11
         w10 = w10 >> 0x18
         w10 = w10 - 2
         b.lo 0x8009214           // likely

    loc_0x08009460: // orphan
         if (w10 == 2)
         b.hs 0x800943c           // unlikely

    loc_0x08009468: // orphan
         x10 = x8 >> 3
         w11 = w2 + 0xf           // arg3
         x12 = [x0 + 8]           // 0xc7 // 199 // arg1
         x9 = x9 - x11
         x11 = 0x8009000
         x11 = x11 + 0
         x10 = x10 & 0xfffc
         x10 = x10 ^ 0x8000
         x10 = x10 - x11
         x11 = [x0 + 0x20]        // 0xc7 // 199 // arg1
         x9 = x10 + x9,lsl 2
         x10 = ~0x6f              // 'o'
         x9 = x9 + x12
         smaddl x9,w11,w10, x9
         x9 = x9 - 8,lsl 12
         if (x9 == w9)
         b.eq 0x80094b4           // unlikely

    loc_0x080094ac: // orphan
         w0 = ~0x21               // '!'
                                  // lr

    loc_0x080094b4: // orphan
         w9 = w9 >> 2
         w8 = w8 & 0xffe0001f
         bfi w8,w9,5, 0xe         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800943c

}

/* ===== 0x080094c8 ===== */
int sym.kp_patch_frame (int esi, int edx) {
    loc_0x80094c8:
        // CALL XREF from sym.kp_core_hook_install @ 0x8008bb4
        w8 = [x0 + 0x20] // 0xc7 // 199 // arg1
        tbnz w8,0x1f,0x80095c4 // likely
            
    loc_0x80095c4:
        w0 = ~0x15
        // lr
         // } else {
    loc_0x80094d0:
        hint 0x19
        sp = sp - 0x170
        [sp, 0x150] = (x29,2)
        [var_160h] = x28
        x29 = var_150h
        x9 = 0x8009000
        x9 = x9 + 0
        w10 = 0x70    // 'p'
        umaddl x9,w8,w10, x9
        x10 = [x1 + 8] // 0xc8 // 200 // arg2
        (w11, 2) = 3  // arg2
        [var_0h] = x10
        x10 = x9 + 0x40 // "\n"
        x12 = x9 + 0x48
        [sp] = (w11,2)
        x8 = x9 + 0x3c
        x11 = x9 + 0x44
        [sp, 0x70] = (x8,2)
        w8 = [x1 + 0x10] // 0xc8 // 200 // arg2
        [sp, 0x80] = (x11,2)
        x11 = x9 + 0x4c
        [var_0h_4] = w8
        (x10, 2) = 3  // arg1
        x10 = x10 + 0x14
        [sp = x8
        x8 = 0x8009000
        [sp = x10
        x10 = x9 + 0x60 // "\n"
        x8 = [x8]     // 0xcf // 207
        [sp, 0x90] = (x11,2)
        x10 = x9 + 0x64
        x11 = x9 + 0x68
        x9 = x9 + 0x6c
        [sp, 0xa0] = (x10,2)
        [var_0h_7] = x9
        if !x8 jmp 0x80095cc // unlikely
        }
        return eax;
    loc_0x8009560:
        x9 = var_70h
        x10 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = var_70h
        x9 = var_48h
        x10 = var_24h
        x1 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x9
        [x9, 0x88] = (xzr,2)
        [x9, 0x78] = (xzr,2)
        [x9, 0x68] = (xzr,2)
        [x9, 0x58] = (xzr,2)
        [x9, 0x48] = (xzr,2)
        [x9, 0x38] = (xzr,2)
        [x9, 0x28] = (xzr,2)
        [x9, 0x18] = (xzr,2)
        [x9, 8] = (xzr,2)
        [x9] = xzr
        [var_0h_8] = wzr
        [x10, 0x38] = (xzr,2)
        [x10, 0x28] = (xzr,2)
        [x10, 0x18] = (xzr,2)
        [x10, 8] = (xzr,2)
        [x10] = xzr
        blr x8        // xzr(0x178070, 0x178000, 0x9, 0x0)
        jmp 0x80095d0
         // do {
    loc_0x80095d0:
        // CODE XREF from sym.kp_patch_frame @ 0x80095c0
        (x29, 2) = 3
        x28 = [var_160h] // 0x4 // 4
        sp = arg_170h
        hint 0x1d
        0x080095e0
         // } while (?);
        }
        return eax;
    loc_0x080095cc: // orphan
             w0 = ~0x1

}

/* ===== 0x080095e4 ===== */
int sym.kp_apply_patch (int esi, int edx) {
    loc_0x80095e4:
        // CALL XREF from sym.kp_core_hook_install @ 0x8008bc8
        hint 0x19
        sp = sp - 0x50
        [sp, 0x40] = (x29,2)
        x29 = var_40h
        w2 = [x0 + 0x24] // 0xc7 // 199 // arg1
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        if (w2 == 1)
        [var_18h] = xzr
        [var_0h] = wzr // arg1
        [sp] = (xzr,2)
        b.lt 0x800968c // unlikely
            
    loc_0x800968c:
        x8 = 0x8009000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x80096a8 // unlikely
            
    loc_0x80096a8:
        w0 = ~0x1
         // do {
    loc_0x80096ac:
        // CODE XREF from sym.kp_apply_patch @ 0x80096a4
        (x29, 2) = 3
        sp = arg_50h
        hint 0x1d
        0x080096b8
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8009614
    loc_0x800962c:
        w10 = [x1 + 4] // 0xc8 // 200 // arg2
        x9 = x8 + 4
        if (w2 == 2)
        [var_20h] = x9
        [var_0h_4] = w10
        b.eq 0x800968c // unlikely
    loc_0x8009644:
        w10 = [x1 + 8] // 0xc8 // 200 // arg2
        x9 = x8 + 8
        if (w2 == 3)
        [var_20h_2] = x9
        [var_0h_3] = w10
        b.eq 0x800968c // unlikely
    loc_0x800965c:
        w10 = [x1 + 0xc] // 0xc8 // 200 // arg2
        x9 = x8 + 0xc
        if (w2 == 4)
        [var_30h] = x9
        [var_0h_5] = w10
        b.eq 0x800968c // unlikely
    loc_0x8009674:
        w9 = [x1 + 0x10] // 0xc8 // 200 // arg2
        x8 = x8 + 0x10
        if (w2 == 5)
        [var_30h_2] = x8
        [var_0h] = w9
        b.ne 0x80096bc // likely
            
    loc_0x80096bc:
        brk 0x5512
         // } else {
        }
        return eax;
}

/* ===== 0x080096c0 ===== */
int sym.kp_free_slot (int esi, int edx) {
    loc_0x80096c0:
        // CALL XREF from sym.kp_core_hook_install @ 0x8008c28
        if (w0 == 0xf) // arg1
        jmp ifgt 0x8009718 // unlikely
            
    loc_0x8009718:
        // lr
         // } else {
    loc_0x80096c8:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x8009000
        x20 = x20 + 0
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x80096e8 ()  // "(" // 0x80096e8(0x8009000, 0x0, 0x0, 0x0)
        w8 = 0x1
        x9 = 0x8009000
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x8 = x8 << x19
        x10 = [x9]    // 0xd0 // 208
        bic x8,x10,x8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x9] = x8
        0x8009708 ()  // 0x8009708(0x8009000, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        }
        return eax;
}

/* ===== 0x08009adc ===== */
int sym.hook_ptrace (int esi, int edx) {
    loc_0x8009adc:
        hint 0x19
        sp = sp - 0x150
        [sp, 0x120] = (x29,2)
        [sp, 0x130] = (x28,2)
        [sp, 0x140] = (x20,2)
        x29 = var_120h
        x8 = [x0]     // 0xc7 // 199 // arg1
        w9 = 0x4205
        x1 = [x0 + 0x10] // 0xc7 // 199 // arg1
        if (x8 == x9)
        b.eq 0x8009bec // unlikely
            
    loc_0x8009bec:
        x8 = [x0 + 0x18] // 0xc7 // 199 // arg1
        if (x8 == 0x403)
        b.eq 0x8009dc4 // unlikely
            
    loc_0x8009dc4:
        x0 = x29 - 0x10 // int64_t arg1
        w2 = 0x10
        [x29, -0x10] = (xzr,2)
        sym._copy_from_user_2 () // "`" // sym._copy_from_user_2(0x177ff0, 0x0, 0x10)
        if !x0 jmp 0x8009de0 // unlikely
            
    loc_0x8009de0:
        ldur x20,[x29,-8]
        if (x20 == 8)
        b.hs 0x8009df4 // unlikely
            
    loc_0x8009df4:
        x0 = var_sp_8h // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x108
        w21 = 0x108
        0x8009e04 ()  // 0x8009e04(0x178008, 0x0, 0x108, 0x0)
        if (x20 == 0x108)
        ldur x19,[x29,-0x10]
        x0 = var_sp_8h // int64_t arg1
        csel x20,x20,x21, lo
        w2 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_150h
        0x8009e20 ()  // 0x8009e20(0x178008, 0x0, 0x0, 0x0)
        x0 = var_sp_8h // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        x2 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        sym._copy_from_user_2 () // sym._copy_from_user_2(0x178008, 0x0, 0x0)
        if x0 jmp 0x8009dd8 // likely
    loc_0x8009e38:
        w19 = [var_sp_8h] // 0x4 // 4
        x0 = 0x8009000
        x0 = x0 + 0   // int64_t arg1
        0x8009e44 ()  // "!" // 0x8009e44(0x8009000, 0x0, 0x0, 0x0)
        w1 = 0x1
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x0,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8009e54 ()  // "\t" // 0x8009e54(0x8009000, 0x1, 0x0, 0x0)
        x9 = 0x8009000
        x9 = x9 + 0
        x8 = x9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8009e64:
        x8 = [x8]     // 0xcf // 207
        if (x8 == x9)
        b.eq 0x8009f00 // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8009b08
    loc_0x8009b14:
        x8 = [x0 + 0x18] // 0xc7 // 199 // arg1
        if (x8 == 0x403)
        b.eq 0x8009d30 // unlikely
            
    loc_0x8009d30:
        x0 = x29 - 0x10 // int64_t arg1
        w2 = 0x10
        [x29, -0x10] = (xzr,2)
        sym._copy_from_user_2 () // sym._copy_from_user_2(0x177ff0, 0x0, 0x10)
        if x0 jmp 0x8009dd8 // likely
    loc_0x8009d44:
        ldur x8,[x29,-8]
        if (x8 == 8)
        b.lo 0x8009dec // likely
    loc_0x8009d50:
        x0 = 0x8009000
        x0 = x0 + 0   // int64_t arg1
        0x8009d58 ()  // "!" // 0x8009d58(0x8009000, 0x0, 0x0, 0x0)
        w1 = 0x1
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x0,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8009d68 ()  // 0x8009d68(0x8009000, 0x1, 0x0, 0x0)
        x8 = 0x8009000
        x8 = x8 + 0
        x9 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8009d78:
        x9 = [x9]     // 0xd0 // 208
        if (x9 == x8)
        b.eq 0x8009f00 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8009b20
    loc_0x8009b28:
        x0 = x29 - 0x10 // int64_t arg1
        w2 = 0x10
        [x29, -0x10] = (xzr,2)
        sym._copy_from_user_2 () // sym._copy_from_user_2(0x177ff0, 0x0, 0x10)
        if x0 jmp 0x8009dd8 // likely
    loc_0x8009b3c:
        ldur x8,[x29,-8]
        if (x8 == 8)
        b.lo 0x8009dec // likely
    loc_0x8009b48:
        x0 = 0x8009000
        x0 = x0 + 0   // int64_t arg1
        0x8009b50 ()  // "!" // 0x8009b50(0x8009000, 0x0, 0x0, 0x0)
        w1 = 0x1
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x0,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8009b60 ()  // 0x8009b60(0x8009000, 0x1, 0x0, 0x0)
        x8 = 0x8009000
        x8 = x8 + 0
        x19 = x8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8009b70:
        x19 = [x19]   // 0xda // 218
        if (x19 == x8)
        b.eq 0x8009f00 // likely
         // } while (?);
        }
        return eax;
    loc_0x8009b7c:
        w9 = [x19 + 0x10] // 0xda // 218
        if (w9 == w0)
        b.ne 0x8009b70 // likely
    loc_0x8009b88:
        if !x19 jmp 0x8009f00 // likely
            
    loc_0x8009f00:
        x0 = 0x8009000
        x0 = x0 + 0   // int64_t arg1
        0x8009f08 ()  // 0x8009f08(0x8009000, 0x0, 0x0, 0x0)
        w0 = 0x1f7
        jmp 0x8009f60
         // do {
    loc_0x8009f60:
        // CODE XREFS from sym.hook_ptrace @ 0x8009d2c, 0x8009ddc, 0x8009df0, 0x8009efc, 0x8009f10
        (x20, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_150h
        hint 0x1d
        0x08009f74
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8009b8c
    loc_0x8009ba8:
        w8 = [x19 + 0x1c] // 0xda // 218
        if !w8 jmp 0x8009f14 // likely
            
    loc_0x8009f14:
        [var_sp_8h] = wzr
         // do {
    loc_0x8009f18:
        // CODE XREF from sym.hook_ptrace @ 0x8009be8
        x0 = 0x8009000
        x0 = x0 + 0   // int64_t arg1
        0x8009f20 ()  // 0x8009f20(0x8009000, 0x0, 0x0, 0x0)
        (x19, 2) = 3
        w9 = 0x108
        if (x8 == 0x108)
        csel x20,x8,x9, lo
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08009bd0: // orphan
             ldur x11,[x9,-8]         // 0xd0 // 208
             x8 = x8 - 1
             [x10 = x11
             w11 = [x9] + 0x10        // 0xd0 // 208
             [x10] + 0x10 = w11
             b.ne 0x8009bd0           // likely

    loc_0x08009be8: // orphan
         jmp 0x8009f18

    loc_0x08009c00: // orphan
         x0 = x29 - 0x10          // int64_t arg1
         w2 = 0x10
         [x29, -0x10] = (xzr,2)
         sym._copy_from_user_2 () // sym._copy_from_user_2(0x177ff0, 0x0, 0x10)
         if x0 jmp 0x8009dd8      // likely

    loc_0x08009c14: // orphan
         ldur x20,[x29,-8]
         if (x20 == 8)
         b.lo 0x8009dec           // likely

    loc_0x08009c20: // orphan
         x0 = var_sp_8h           // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x108
         w21 = 0x108
         0x8009c30 ()             // 0x8009c30(0x178008, 0x0, 0x108, 0x0)
         if (x20 == 0x108)
         ldur x19,[x29,-0x10]
         x0 = var_sp_8h           // int64_t arg1
         csel x20,x20,x21, lo
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_150h
         0x8009c4c ()             // 0x8009c4c(0x178008, 0x0, 0x0, 0x0)
         x0 = var_sp_8h           // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         sym._copy_from_user_2 () // sym._copy_from_user_2(0x178008, 0x0, 0x0)
         if x0 jmp 0x8009dd8      // likely

    loc_0x08009c64: // orphan
         w19 = [var_sp_8h]        // 0x4 // 4
         x0 = 0x8009000
         x0 = x0 + 0              // int64_t arg1
         0x8009c70 ()             // "!" // 0x8009c70(0x8009000, 0x0, 0x0, 0x0)
         w1 = 0x1
         x2 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x0,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8009c80 ()             // "\t" // 0x8009c80(0x8009000, 0x1, 0x0, 0x0)
         x9 = 0x8009000
         x9 = x9 + 0
         x8 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08009c90: // orphan
         x8 = [x8]                // 0xcf // 207
         if (x8 == x9)
         b.eq 0x8009f00           // likely

    loc_0x08009c9c: // orphan
         w10 = [x8 + 0x10]        // 0xcf // 207
         if (w10 == w0)
         b.ne 0x8009c90           // likely

    loc_0x08009ca8: // orphan
         if !x8 jmp 0x8009f00     // likely

    loc_0x08009cac: // orphan
         w9 = 0x1
         if (w19 == 0x10)
         w10 = 0x10
         [x8 + 0x14] = (byte) w9
         mrs x9,id_aa64dfr0_el1   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w10,w19,w10, lo
         ubfx w9,w9,0xc, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9 + 1
         [x8, 0x18] = (w9,2)
         if !w10 jmp 0x8009eec    // likely

    loc_0x08009cd4: // orphan
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = var_sp_8h

    loc_0x08009ce0: // orphan
         if (x9 == 0x100)
         b.eq 0x8009f7c           // unlikely

    loc_0x08009ce8: // orphan
         b.eq 0x8009f78           // unlikely

    loc_0x08009cec: // orphan
         x12 = x11 + x9
         if (x10 == 0xf)
         x13 = [var_0h]           // 0xd3 // 211
         x12 = x8 + x9
         [x12 + 0x28] = x13
         b.hi 0x8009f78           // unlikely

    loc_0x08009d04: // orphan
         x13 = x11 + x9
         w14 = [x8 + 0x1c]        // 0xcf // 207
         x10 = x10 + 1
         w13 = [var_sp_10h]       // 0xd4 // 212
         x9 = x9 + 0x10
         if (x10 == x14)
         [x12 + 0x30] = w13
         b.lo 0x8009ce0           // unlikely

    loc_0x08009d24: // orphan
         jmp 0x8009eec

    loc_0x08009d28: // orphan
         w0 = 0x1f7
         jmp 0x8009f60

    loc_0x08009d84: // orphan
         w10 = [x9 + 0x10]        // 0xd0 // 208
         if (w10 == w0)
         b.ne 0x8009d78           // likely

    loc_0x08009d90: // orphan
         if !x9 jmp 0x8009f00     // likely

    loc_0x08009d94: // orphan
         x0 = var_sp_8h           // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x108
         w20 = 0x108
         0x8009da4 ()             // 0x8009da4(0x178008, 0x0, 0x108, 0x0)
         x0 = 0x8009000
         x0 = x0 + 0              // int64_t arg1
         0x8009db0 ()             // 0x8009db0(0x8009000, 0x0, 0x108, 0x0)
         (x19, 2) = 3
         if (x8 == 0x108)
         csel x20,x8,x20, lo
         jmp 0x8009f34

    loc_0x08009e70: // orphan
         w10 = [x8 + 0x10]        // 0xcf // 207
         if (w10 == w0)
         b.ne 0x8009e64           // likely

    loc_0x08009e7c: // orphan
         if !x8 jmp 0x8009f00     // likely

    loc_0x08009e80: // orphan
         w9 = 0x1
         if (w19 == 0x10)
         w10 = 0x10
         [x8 + 0x14] = (byte) w9
         csel w9,w19,w10, lo
         [x8 + 0x20] = w9
         if !w9 jmp 0x8009eec     // likely

    loc_0x08009e9c: // orphan
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = var_sp_8h

    loc_0x08009ea8: // orphan
         if (x9 == 0x100)
         b.eq 0x8009f7c           // unlikely

    loc_0x08009eb0: // orphan
         b.eq 0x8009f78           // unlikely

    loc_0x08009eb4: // orphan
         x12 = x11 + x9
         if (x10 == 0xf)
         x13 = [var_0h]           // 0xd3 // 211
         x12 = x8 + x9
         [x12 + 0x128] = x13
         b.hi 0x8009f78           // unlikely

    loc_0x08009ecc: // orphan
         x13 = x11 + x9
         w14 = [x8 + 0x20]        // 0xcf // 207
         x10 = x10 + 1
         w13 = [var_sp_10h]       // 0xd4 // 212
         x9 = x9 + 0x10
         if (x10 == x14)
         [x12 + 0x130] = w13
         b.lo 0x8009ea8           // unlikely

    loc_0x08009eec: // orphan
         // CODE XREF from sym.hook_ptrace @ 0x8009d24
         x0 = 0x8009000
         x0 = x0 + 0              // int64_t arg1
         0x8009ef4 ()             // 0x8009ef4(0x8009000, 0x0, 0x0, 0x0)
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8009f60

    loc_0x08009f34: // orphan
         // CODE XREF from sym.hook_ptrace @ 0x8009dc0
         x0 = var_sp_8h           // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_150h
         w2 = 0x1
         0x8009f40 ()             // 0x8009f40(0x178008, 0x0, 0x1, 0x0)
         x1 = var_sp_8h           // uint32_t arg3
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym._copy_to_user_3 ()   // sym._copy_to_user_3(0x0, 0x178008)
         x8 = ~0xd
         if (x0 == 0)
         csel x0,xzr,x8, eq

    loc_0x08009f78: // orphan
         brk 0x1

    loc_0x08009f7c: // orphan
         brk 0x5512

}

/* ===== 0x0800a284 ===== */
int sym._copy_from_user_2 (int esi, int edx) {
    loc_0x800a284:
        // XREFS: CALL 0x08009b34  CALL 0x08009c0c  CALL 0x08009c5c
        // XREFS: CALL 0x08009d3c  CALL 0x08009dd0  CALL 0x08009e30
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        tbnz w9,5,0x800a2b8 // unlikely
            
    loc_0x800a2b8:
        x9 = x1 << 8  // arg2
        x9 = x1 & x9,asr 8 // arg2
         // do {
    loc_0x800a2c0:
        x10 = 0x80    // '\x80'
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x19 == x10)
        b.hi 0x800a350 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800a2d0: // orphan
             x10 = x10 - x19
             x21 = x19                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             if (x10 == x9)
             b.lo 0x800a350           // unlikely

    loc_0x0800a2e0: // orphan
         jmp 0x800a384

    loc_0x0800a2e8: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x800a390
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a310: // orphan
         x1 = x1 & 0xff7fffffffffffff // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800a31c ()             // 0x800a31c(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800a394

    loc_0x0800a32c: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x800a3a0
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a350: // orphan
         if x21 jmp 0x800a36c     // unlikely

    loc_0x0800a354: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x800a380
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0800a36c: // orphan
         x8 = x19 - x21
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = x20 + x8            // int64_t arg1
         0x800a37c ()             // 0x800a37c(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a354

    loc_0x0800a384: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x800a2e0
         x9 = 0x800a000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x800a310   // likely

    loc_0x0800a390: // orphan
         jmp 0x800a2e8

    loc_0x0800a394: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x800a324
         x8 = 0x800a000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x800a350   // likely

    loc_0x0800a3a0: // orphan
         jmp 0x800a32c

}

/* ===== 0x0800a3a4 ===== */
int sym._copy_to_user_3 (int esi, int edx) {
    loc_0x800a3a4:
        // CALL XREF from sym.hook_ptrace @ 0x8009f50
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w9,5,0x800a3bc // unlikely
            
    loc_0x800a3bc:
        x9 = x0 << 8  // arg1
        x9 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x800a3c4:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = 0x80    // '\x80'
        if (x2 == x10) // arg3
        b.hi 0x800a450 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800a3dc: // orphan
             x10 = x10 - x2           // arg3
             if (x10 == x9)
             b.lo 0x800a450           // unlikely

    loc_0x0800a3e8: // orphan
         jmp 0x800a460

    loc_0x0800a3f0: // orphan
         // CODE XREF from sym._copy_to_user_3 @ 0x800a46c
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a418: // orphan
         x0 = x0 & 0xff7fffffffffffff // int64_t arg1
         0x800a41c ()             // 0x800a41c(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800a470

    loc_0x0800a42c: // orphan
         // CODE XREF from sym._copy_to_user_3 @ 0x800a47c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a450: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0800a460: // orphan
         // CODE XREF from sym._copy_to_user_3 @ 0x800a3e8
         x9 = 0x800a000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x800a418   // likely

    loc_0x0800a46c: // orphan
         jmp 0x800a3f0

    loc_0x0800a470: // orphan
         // CODE XREF from sym._copy_to_user_3 @ 0x800a424
         x8 = 0x800a000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x800a450   // likely

    loc_0x0800a47c: // orphan
         jmp 0x800a42c

}

/* ===== 0x0800a148 ===== */
int sym.list_add_tail (int esi, int edx) {
    loc_0x800a148:
        // CALL XREF from sym.ptrace_spoof_add @ 0x800a124
        x8 = 0x800a000
        x8 = x8 + 0
        x1 = [x8 + 8] // 0xcf // 207
        if (x0 == x8) // arg1
        b.eq 0x800a180 // unlikely
            
    loc_0x800a180:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x2 = 0x800a000
        x2 = x2 + 0
        0x800a194 ()  // 0x800a194(0x0, 0x0, 0x800a000, 0x0)
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        // lr
         // } else {
    loc_0x800a15c:
        if (x1 == x0) // arg1
        b.eq 0x800a180 // likely
        }
        return eax;
    loc_0x800a164:
        x9 = [x1]     // 0xc8 // 200
        if (x9 == x8)
        b.ne 0x800a180 // unlikely
    loc_0x800a170:
        [x8 + 8] = x0 // arg1
        [x0] = (x8,2) // arg1
        [x1] = x0     // arg1
        // lr
         // (break)
}

/* ===== 0x0800a530 ===== */
int sym.hide_kgsl_dir (int esi, int edx) {
    loc_0x800a530:
        // CALL XREFS from sym.hide_kgsl @ 0x800a510, 0x800a51c
        hint 0x19
        sp = sp - 0x40
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = var_10h
        if !x0 jmp 0x800a5f8 // likely
            
    loc_0x800a5f8:
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        sp = arg_40h
        hint 0x1d
        0x0800a60c
         // } else {
    loc_0x800a54c:
        x22 = [x0 + 0x30] // 0xc7 // 199 // arg1
        if !x22 jmp 0x800a5f8 // unlikely
        }
        return eax;
    loc_0x800a554:
        w8 = (word) [x22 + 0x70] // 0xdd // 221
        w8 = w8 & 0xf
        if (w8 == 1)
        b.ne 0x800a5f8 // likely
    loc_0x800a564:
        x20 = x22 + 0x48
        w19 = w1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800a570 ()  // 0x800a570(0x48, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800a5f8 // unlikely
    loc_0x800a578:
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800a590
         // do {
    loc_0x800a590:
        // CODE XREF from sym.hide_kgsl_dir @ 0x800a57c
        ldur x0,[x21,-8] // 0xdc // 220
        [x29 = wzr
        if !x0 jmp 0x800a580 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800a59c:
        x2 = x29 - 4  // int64_t arg_40h
        w1 = 0xa
        0x800a5a4 ()  // 0x800a5a4(0x0, 0xa, 0x177ffc, 0x0)
        if w0 jmp 0x800a580 // unlikely
    loc_0x800a580:
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800a584 ()  // 0x800a584(0x0, 0x0, 0x0, 0x0)
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x800a5f8 // likely
        }
        return eax;
    loc_0x0800a5ac: // orphan
             ldur w8,[x29,-4]
             if (w8 == w19)
             b.ne 0x800a580           // unlikely

    loc_0x0800a5b8: // orphan
         x8 = 0x800a000
         x19 = x21 - 0x18
         x8 = [x8]                // 0xcf // 207
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // 0x2a1f03e094000000(0xffffffffffffffe8, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x800a5d4 ()             // 0x800a5d4(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a610

    loc_0x0800a5e8: // orphan
         // CODE XREF from sym.hide_kgsl_dir @ 0x800a62c
         x8 = 0x800a000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         blr x8                   // 0x2a1f03e094000000(0x0, 0x0, 0x0, 0x0)

    loc_0x0800a610: // orphan
         // CODE XREF from sym.hide_kgsl_dir @ 0x800a5d8
         x8 = x22 + 0x40
         w9 = 0x1
         prfm pstl1strm,[x8]

    loc_0x0800a61c: // orphan
         ldxr x10,[x8]
         x10 = x10 - x9
         stxr w11,x10,[x8]
         if w11 jmp 0x800a61c     // unlikely

    loc_0x0800a62c: // orphan
         jmp 0x800a5e8

}

/* ===== 0x0800abb4 ===== */
int sym.pfn_valid (int esi, int edx) {
    loc_0x800abb4:
        // CALL XREF from sym.shadow_entry_add @ 0x800a8c0
        // CALL XREF from sym.shadow_write_user_pte @ 0x800ae90
        x8 = 0x800a000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800abe0 // unlikely
            
    loc_0x800abe0:
        x9 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800abe4:
        // CODE XREF from sym.pfn_valid @ 0x800abdc
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = [x8 + 0x10] // 0xcf // 207
        w10 = w10 + 1
        [x8 + 0x10] = w10
        if !x9 jmp 0x800ac10 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800ac08: // orphan
             x10 = [x9]               // 0xd0 // 208
             tbnz w10,1,0x800ac30     // unlikely

    loc_0x0800ac10: // orphan
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x800ac88           // unlikely

    loc_0x0800ac20: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if x8 jmp 0x800ac74      // likely

    loc_0x0800ac2c: // orphan
         jmp 0x800ac8c

    loc_0x0800ac30: // orphan
         tbnz w10,3,0x800ac50     // unlikely

    loc_0x0800ac34: // orphan
         x9 = [x9 + 8]            // 0xd0 // 208
         if !x9 jmp 0x800ac58     // likely

    loc_0x0800ac3c: // orphan
         x10 = x0 >> 9            // arg1
         x9 = [x9 + 0x10]         // 0xd0 // 208
         x9 = x9 >> x10
         w19 = w9 & 1
         jmp 0x800ac5c

    loc_0x0800ac50: // orphan
         w19 = 0x1
         jmp 0x800ac5c

    loc_0x0800ac58: // orphan
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x0800ac5c: // orphan
         // CODE XREFS from sym.pfn_valid @ 0x800ac4c, 0x800ac54
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x800ac8c           // unlikely

    loc_0x0800ac6c: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         if !x8 jmp 0x800ac8c     // unlikely

    loc_0x0800ac74: // orphan
         // CODE XREF from sym.pfn_valid @ 0x800ac90
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x19 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0800ac88: // orphan
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x0800ac8c: // orphan
         // CODE XREF from sym.pfn_valid @ 0x800ac2c
         0x800ac8c ()             // 0x800ac8c(0x0, 0x0, 0x0, 0x0)
         jmp 0x800ac74

}

/* ===== 0x0800aefc ===== */
int sym.shadow_entry_fill_reg_config (int esi, int edx) {
    loc_0x800aefc:
        // CALL XREFS from sym.shadow_entry_add @ 0x800a920, 0x800aaa4
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x24,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = [x1 + 0x10] // 0xc8 // 200 // arg2
        w24 = 0x10
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        bic w8,w8,w8, asr 31 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w8 == 0x10)
        csel w8,w8,w24, lt
        [x0 + 0x48] = w8 // arg1
        if !w8 jmp 0x800af7c // likely
            
    loc_0x800af7c:
        // CODE XREF from sym.shadow_entry_fill_reg_config @ 0x800af34
        w8 = [x19 + 0xd8] // 0xda // 218
        bic w8,w8,w8, asr 31 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w8 == 0x10)
        csel w8,w8,w24, lt
        [x20 + 0x110] = w8
        if !w8 jmp 0x800afd8 // likely
            
    loc_0x800afd8:
        // CODE XREF from sym.shadow_entry_fill_reg_config @ 0x800af90
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800afec
         // } else {
    loc_0x800af94:
        w2 = w8 << 2
        x0 = x20 + 0x114 // int64_t arg1
        x1 = x19 + 0xdc // int64_t arg2
        0x800afa0 ()  // 0x800afa0(0x114, 0xdc, 0x0, 0x0)
        x8 = [x20 + 0x110] // 0xdb // 219
        x20 = x20 + 0x154
        x19 = x19 + 0x11c
        x21 = x8 << 2
        if (x21 == 0x41)
        b.lo 0x800afc8 // likely
         // } else {
        }
        return eax;
        goto loc_0x800af38
    loc_0x800af60:
        x8 = 0x800a000
        w9 = (byte) [x8] // 0xcf // 207
        tbz w9,0,0x800aff0 // likely
            
    loc_0x800aff0:
        // CODE XREF from sym.shadow_entry_fill_reg_config @ 0x800af68
        w9 = 0x1
        x0 = 0x800a000
        x0 = x0 + 0   // int64_t arg1
        x2 = 0x800a000
        // XREFS(103)
        x2 = x2 + 0
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w3 = 0x80     // '\x80'
        [x8] = (byte) w9
        0x800b010 ()  // 0x800b010(0x800a000, 0x0, 0x800a000, 0x80)
        brk 0x800
         // } else {
    loc_0x800af6c:
        // CODE XREF from sym.shadow_entry_fill_reg_config @ 0x800af5c
        // CODE XREF from sym.shadow_entry_fill_reg_config @ +0x11c
        x0 = x23      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        x2 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800af78 ()  // 0x800af78(0x8033000, 0x0, 0x0, 0x0)
        }
        return eax;
    loc_0x0800afbc: // orphan
             x8 = 0x800a000
             w9 = (byte) [x8]         // 0xcf // 207
             tbz w9,0,0x800b01c       // likely

    loc_0x0800afc8: // orphan
         // CODE XREF from sym.shadow_entry_fill_reg_config @ 0x800afb8
         // CODE XREF from sym.shadow_entry_fill_reg_config @ +0x148
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800afd4 ()             // 0x800afd4(0x0, 0x0, 0x0, 0x0)

    loc_0x0800b01c: // orphan
         // CODE XREF from sym.shadow_entry_fill_reg_config @ 0x800afc4
         w9 = 0x1
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg1 // "B"
         x2 = 0x800b000
         x2 = x2 + 0              // "B"
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w3 = 0x40                // '@'
         [x8] = (byte) w9
         0x800b03c ()             // 0x800b03c(0x800b000, 0x0, 0x800b000, 0x40)
         brk 0x800

}

/* ===== 0x0800adbc ===== */
int sym.shadow_write_user_pte (int esi, int edx) {
    loc_0x800adbc:
        // CALL XREFS from sym.shadow_entry_add @ 0x800a95c, 0x800a9c4
        // CALL XREF from sym.shadow_entry_del @ 0x800b2b8
        // CALL XREF from sym.shadow_fault_exit @ 0x800b80c
        // CALL XREF from sym.shadow_allow_native_execution @ 0x801dcf4
        if !x0 jmp 0x800aed0 // likely
            
    loc_0x800aed0:
        w0 = ~0x15
        // lr
         // } else {
    loc_0x800adc0:
        hint 0x19
        sp = sp - 0x40
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = var_10h
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x800ade4 ()  // 0x800ade4(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800aee0 // likely
        }
        return eax;
    loc_0x800adec:
        x8 = [x0]     // 0xc7 // 199
        if (x8 == x19)
        b.hi 0x800aee0 // likely
            
    loc_0x800aee0:
        w0 = ~0xd
         // do {
    loc_0x800aee4:
        // CODE XREF from sym.shadow_write_user_pte @ 0x800aecc
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        sp = arg_40h
        hint 0x1d
        0x0800aef8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800adf8
    loc_0x800ae10:
        x8 = 0x800a000
        x9 = x9 & 0x7ffffff000
        ubfx x10,x19,0x15, 9 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8]     // 0xcf // 207
        x9 = x9 - x8
        x9 = x9 | 0xffffff8000000000
        x9 = [x9 + x10,lsl 3] // 0xd1000000d0 // 897648165072
        w10 = ~w9
        if ((x10 & 3) == 0)
        b.ne 0x800aee0 // likely
    loc_0x800ae38:
        x10 = x9 & 0x7ffffff000
        ubfx x11,x19,0xc, 9 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = x10 - x8
        x10 = x10 | 0xffffff8000000000
        x21 = x10 + x11,lsl 3
        b.eq 0x800aee0 // unlikely
    loc_0x800ae50:
        ubfx x9,x9,0xc, 0x24 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x8 >> 0xc
        x9 = x9 << 6
        x8 = x9 - x8,lsl 6
        x9 = xzr | 0xfffffffe00000000
        x9 = 0x28     // '('
        x22 = x8 + x9
        x0 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800ae70 ()  // 0x800ae70(0xfffffffe00000028, 0x0, 0x0, 0x0)
        x8 = [x21]    // 0xdc // 220
        x9 = 0x1
        x9 = 0x400
        if ((x8 & x9) == 0)
        [var_8h] = x8
        b.eq 0x800aed8 // unlikely
            
    loc_0x800aed8:
        // CODE XREFS from sym.shadow_write_user_pte @ 0x800ae88, 0x800ae94
        x0 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800aedc ()  // 0x800aedc(0x0, 0x0, 0x0, 0x0)
    loc_0x0800ae8c: // orphan
             ubfx x0,x8,0xc, 0x24     // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             sym.pfn_valid ()         // sym.pfn_valid(0x0)
             if !w0 jmp 0x800aed8     // likely

    loc_0x0800ae98: // orphan
         x1 = [var_8h]            // 0x4
         x8 = x20 >> 0x36
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         bfi x1,x8,0x36, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.set_pte ()           // sym.set_pte(0x0, 0x1, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800aeb0 ()             // 0x800aeb0(0x0, 0x1, 0x0, 0x0)
         ubfx x8,x19,0xc, 0x2c    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         dsb ishst
         tlbi vaale1is,x8
         dsb ish
         
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800aee4

}

/* ===== 0x0800ac94 ===== */
int sym.shadow_pte_matches (int esi, int edx) {
    loc_0x800ac94:
        // CALL XREF from sym.shadow_entry_add @ 0x800a9a8
        // CALL XREF from sym.shadow_entry_del @ 0x800b29c
        // CALL XREF from sym.shadow_fault_exit @ 0x800b7f0
        // CALL XREF from sym.handle_shadow_page_fault @ 0x800bd58
        x8 = 0x1
        x8 = 0x400
        if ((x1 & x8) == 0) // arg2
        b.eq 0x800ad2c // unlikely
            
    loc_0x800ad2c:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // lr
         // } else {
    loc_0x800aca4:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x800a000
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8]     // 0xcf // 207
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if !x8 jmp 0x800ace8 // unlikely
        }
        return eax;
    loc_0x800acd0:
        ubfx x9,x19,0x22, 0xe // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + x9,lsl 3] // 0xd0000000cf // 893353197775
        if !x8 jmp 0x800ace8 // unlikely
            
    loc_0x800ace8:
        x9 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800acec:
        // CODE XREF from sym.shadow_pte_matches @ 0x800ace4
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = [x8 + 0x10] // 0xcf // 207
        w10 = w10 + 1
        [x8 + 0x10] = w10
        if !x9 jmp 0x800ad08 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800ad00: // orphan
             x10 = [x9]               // 0xd0 // 208
             tbnz w10,1,0x800ad34     // unlikely

    loc_0x0800ad08: // orphan
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x800ad24           // unlikely

    loc_0x0800ad18: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if x8 jmp 0x800ada8      // likely

    loc_0x0800ad24: // orphan
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x800ad9c

    loc_0x0800ad34: // orphan
         tbnz w10,3,0x800ad54     // unlikely

    loc_0x0800ad38: // orphan
         x9 = [x9 + 8]            // 0xd0 // 208
         if !x9 jmp 0x800ad5c     // likely

    loc_0x0800ad40: // orphan
         x10 = x19 >> 0x15
         x9 = [x9 + 0x10]         // 0xd0 // 208
         x9 = x9 >> x10
         w22 = w9 & 1
         jmp 0x800ad60

    loc_0x0800ad54: // orphan
         w22 = 0x1
         jmp 0x800ad60

    loc_0x0800ad5c: // orphan
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x0800ad60: // orphan
         // CODE XREFS from sym.shadow_pte_matches @ 0x800ad50, 0x800ad58
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x800ad9c           // unlikely

    loc_0x0800ad70: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         if !x8 jmp 0x800ad9c     // unlikely

    loc_0x0800ad78: // orphan
         if !w22 jmp 0x800ada4    // likely

    loc_0x0800ad7c: // orphan
         x8 = [x21 + 0x28]        // 0xdc // 220
         x9 = ~0x400
         x9 = 0xff7f              // '\x7f\xff'
         x8 = x8 | x20
         x8 = x8 ^ x19
         if ((x8 & x9) == 0)
         cset w0,eq
         jmp 0x800ada8

    loc_0x0800ad9c: // orphan
         // CODE XREF from sym.shadow_pte_matches @ 0x800ad28
         0x800ad9c ()             // 0x800ad9c(0x0, 0x0, 0x0, 0x0)
         if w22 jmp 0x800ad7c     // unlikely

    loc_0x0800ada4: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ada8: // orphan
         // CODE XREF from sym.shadow_pte_matches @ 0x800ad98
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

}

/* ===== 0x0800ab14 ===== */
int sym.mmap_read_unlock (int esi, int edx) {
    loc_0x800ab14:
        // XREFS: CALL 0x0800a9d0  CALL 0x0800aa00  CALL 0x0800aa20
        // XREFS: CALL 0x0800aa80  CALL 0x0800aacc  CALL 0x0800bd64
        hint 0x19
        sp = sp - 0x20
        [sp, 0x10] = (x29,2)
        x29 = var_10h
        0x0800ab24
         // do {
    loc_0x800ab28:
        // CODE XREF from fcn.0800ab48 @ 0x800ab50
        x0 = x0 + 0x90 // int64_t arg1
        0x800ab2c ()  // 0x800ab2c(0x90, 0x0, 0x0, 0x0)
        (x29, 2) = 3
        sp = arg_20h
        hint 0x1d
        0x0800ab3c
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800b048 ===== */
int sym.list_add_tail_1 (int esi, int edx) {
    loc_0x800b048:
        // CALL XREF from sym.shadow_entry_add @ 0x800aa60
        x8 = 0x800b000
        x8 = x8 + 0   // "B"
        x1 = [x8 + 8] // 0xcf // 207
        if (x0 == x8) // arg1
        b.eq 0x800b080 // unlikely
            
    loc_0x800b080:
        // CODE XREFS from sym.list_add_tail_1 @ 0x800b058, 0x800b060, 0x800b06c
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x2 = 0x800b000
        x2 = x2 + 0   // "B"
        0x800b094 ()  // 0x800b094(0x0, 0x0, 0x800b000, 0x0)
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        // lr
         // } else {
    loc_0x800b05c:
        if (x1 == x0) // arg1
        b.eq 0x800b080 // likely
        }
        return eax;
    loc_0x800b064:
        x9 = [x1]     // 0xc8 // 200
        if (x9 == x8)
        b.ne 0x800b080 // likely
    loc_0x800b070:
        [x8 + 8] = x0 // arg1
        [x0] = (x8,2) // arg1
        [x1] = x0     // arg1
        // lr
         // (break)
}

/* ===== 0x0800ab54 ===== */
int sym.shadow_find_user_pte (int esi, int edx) {
    loc_0x800ab54:
        // CALL XREF from sym.handle_shadow_page_fault @ 0x800bd40
        x8 = [x0 + 0x70] // 0xc7 // 199 // arg1
        ubfx x9,x1,0x1e, 9 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x9 = [x8 + x9,lsl 3] // 0xd0000000cf // 893353197775
        w8 = ~w9
        if ((x8 & 3) == 0)
        b.ne 0x800abac // likely
            
    loc_0x800abac:
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // lr
         // } else {
    loc_0x800ab6c:
        x8 = 0x800a000
        x9 = x9 & 0x7ffffff000
        ubfx x10,x1,0x15, 9 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8]     // 0xcf // 207
        x9 = x9 - x8
        x9 = x9 | 0xffffff8000000000
        x9 = [x9 + x10,lsl 3] // 0xd1000000d0 // 897648165072
        w10 = ~w9
        if ((x10 & 3) == 0)
        b.ne 0x800abac // likely
        }
        return eax;
    loc_0x800ab94:
        x9 = x9 & 0x7ffffff000
        x8 = x9 - x8
        ubfx x9,x1,0xc, 9 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = x8 | 0xffffff8000000000
        x0 = x8 + x9,lsl 3
        // lr
         // (break)
}

/* ===== 0x0800b93c ===== */
int sym.set_pte (int esi, int edx) {
    loc_0x800b93c:
        // CALL XREF from sym.shadow_write_user_pte @ 0x800aea8
        sp = sp - 0x10
        x8 = [x0]     // 0xc7 // 199 // arg1
        x9 = 0x1
        x9 = 0x10
        bics xzr,x9,x8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [var_8h] = x8
        b.eq 0x800b990 // unlikely
            
    loc_0x800b990:
        // CODE XREF from sym.set_pte @ 0x800b954
        brk 0x800
         // } else {
    loc_0x800b958:
        // CODE XREF from sym.set_pte @ +0x58
        x8 = x1 & 0xffefffffffffffff // arg2
        x9 = 0x1
        [var_8h] = x8
        x9 = 0x40     // '@'
        x8 = [var_8h] // 0x4 // 4
        x10 = x9 | 0x40
        x10 = x8 & x10
        [x0] = x8     // arg1
        if (x10 == x9)
        b.ne 0x800b988 // likely
        }
        return eax;
    loc_0x800b980:
        dsb ishst
        0x0800b984
         // do {
    loc_0x800b988:
        // CODE XREF from sym.set_pte @ 0x800b97c
        sp = arg_10h
        // lr
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800b998 ===== */
int sym._copy_to_user_4 (int esi, int edx) {
    loc_0x800b998:
        // CALL XREF from sym.shadow_entry_get_hits @ 0x800b4c0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w9,5,0x800b9b0 // likely
            
    loc_0x800b9b0:
        // CODE XREF from sym._copy_to_user_4 @ 0x800b9a0
        x9 = x0 << 8  // arg1
        x9 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x800b9b8:
        // CODE XREF from sym._copy_to_user_4 @ 0x800b9ac
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = 0x80    // '\x80'
        if (x2 == x10) // arg3
        b.hi 0x800ba44 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800b9d0: // orphan
             x10 = x10 - x2           // arg3
             if (x10 == x9)
             b.lo 0x800ba44           // unlikely

    loc_0x0800b9dc: // orphan
         jmp 0x800ba54

    loc_0x0800b9e4: // orphan
         // CODE XREF from sym._copy_to_user_4 @ 0x800ba60
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ba0c: // orphan
         // CODE XREF from sym._copy_to_user_4 @ 0x800ba5c
         x0 = x0 & 0xff7fffffffffffff // int64_t arg1
         0x800ba10 ()             // 0x800ba10(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800ba64

    loc_0x0800ba20: // orphan
         // CODE XREF from sym._copy_to_user_4 @ 0x800ba70
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ba44: // orphan
         // CODE XREFS from sym._copy_to_user_4 @ 0x800b9cc, 0x800b9d8, 0x800ba6c
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0800ba54: // orphan
         // CODE XREF from sym._copy_to_user_4 @ 0x800b9dc
         x9 = 0x800b000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x800ba0c   // likely

    loc_0x0800ba60: // orphan
         jmp 0x800b9e4

    loc_0x0800ba64: // orphan
         // CODE XREF from sym._copy_to_user_4 @ 0x800ba18
         x8 = 0x800b000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x800ba44   // likely

    loc_0x0800ba70: // orphan
         jmp 0x800ba20

}

/* ===== 0x0800bb00 ===== */
int sym.my_do_mem_abort (int esi, int edx) {
    loc_0x800bb00:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x0 << 8  // arg1
        x0 = x0 & x8,asr 8 // arg1
        jmp 0x800bb4c
         // do {
    loc_0x800bb4c:
        // CODE XREF from sym.my_do_mem_abort @ 0x800bb14
        x8 = 0x800b000
        x8 = x8 + 0   // "B"
        prfm pstl1strm,[x8]
         // } while (?);
        }
        return eax;
    loc_0x0800bb30: // orphan
             // CODE XREF from sym.my_do_mem_abort @ 0x800bb6c
             jmp 0x800bb94

    loc_0x0800bb58: // orphan
         // CODE XREF from sym.my_do_mem_abort @ 0x800bb64
         ldxr w9,[x8]
         w9 = w9 + 1
         stxr w10,w9,[x8]
         if w10 jmp 0x800bb58     // unlikely

    loc_0x0800bb68: // orphan
         sym.handle_shadow_page_fault () // sym.handle_shadow_page_fault(0x0, 0x0, 0x0)
         if w0 jmp 0x800bb30      // unlikely

    loc_0x0800bb70: // orphan
         // CODE XREF from sym.my_do_mem_abort @ +0x2c
         jmp 0x800bbbc

    loc_0x0800bb84: // orphan
         // CODE XREF from sym.my_do_mem_abort @ 0x800bbdc
         w0 = 0x1f7

    loc_0x0800bb88: // orphan
         // CODE XREFS from sym.my_do_mem_abort @ 0x48, 0x800bbb8
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0800bb94: // orphan
         // CODE XREF from sym.my_do_mem_abort @ 0x800bb30
         w8 = 0x1
         x9 = 0x800b000
         x9 = x9 + 0              // "B"
         prfm pstl1strm,[x9]

    loc_0x0800bba4: // orphan
         // CODE XREF from sym.my_do_mem_abort @ 0x800bbb0
         ldxr w10,[x9]
         w10 = w10 - w8
         stxr w11,w10,[x9]
         if w11 jmp 0x800bba4     // unlikely

    loc_0x0800bbb4: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800bb88

    loc_0x0800bbbc: // orphan
         // CODE XREF from sym.my_do_mem_abort @ 0x800bb70
         w8 = 0x1
         x9 = 0x800b000
         x9 = x9 + 0              // "B"
         prfm pstl1strm,[x9]

    loc_0x0800bbcc: // orphan
         // CODE XREF from sym.my_do_mem_abort @ 0x800bbd8
         ldxr w10,[x9]
         w10 = w10 - w8
         stxr w11,w10,[x9]
         if w11 jmp 0x800bbcc     // unlikely

    loc_0x0800bbdc: // orphan
         jmp 0x800bb84

}

/* ===== 0x0800bbe0 ===== */
int sym.handle_shadow_page_fault (int esi, int edx) {
    loc_0x800bbe0:
        // CALL XREFS from sym.my_do_mem_abort @ 0x28, 0x800bb68
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x500
        mrs x23,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x25 = [x23 + 0x5a0] // 0xde // 222
        [var_0h] = xzr
        if !x25 jmp 0x800c154 // unlikely
            
    loc_0x800c154:
        // XREFS: CODE 0x0800bc10  CODE 0x0800bc60  CODE 0x0800bcf8
        // XREFS: CODE 0x0800c1a4  CODE 0x0800c1c0  CODE 0x0801c850
        w26 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // chop
         // do {
    loc_0x800c158:
        // CODE XREFS from sym.handle_shadow_page_fault @ 0x800bc2c, 0x800bc3c, 0x800c2f0
        // CODE XREF from fcn.0801a09c @ 0x800ce8c
        w0 = w26      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = arg_500h
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800c17c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800bc14
    loc_0x800bc30:
        x8 = [x2 + 0x108] // 0xc9 // 201 // arg3
        x21 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x8 = x8 & 0xf
        if x8 jmp 0x800c158 // fcn.0801a09c-0xdf44 // likely
        // chop
    loc_0x800bc40:
        x8 = [x21 + 0x100] // 0xdc // 220
        x9 = x0 << 8  // arg1
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x10 = x8 << 8
        x9 = x0 & x9,asr 8 // arg1
        x8 = x8 & x10,asr 8
        x8 = x8 ^ x9
        if (x8 == 0xfff)
        b.hi 0x800c154 // likely
    loc_0x800bc64:
        x0 = 0x800b000
        x0 = x0 + 0   // int64_t arg1 // "B"
        0x800bc6c ()  // 0x800bc6c(0x800b000, 0x0, 0x0, 0x0)
        x8 = 0x800b000
        x8 = x8 + 0   // "B"
        x26 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // "B"
        x24 = [x8]    // 0xcf // 207
        if (x24 == x8)
        b.eq 0x800c144 // unlikely
            
    loc_0x800c144:
        // CODE XREFS from sym.handle_shadow_page_fault @ 0x800bc84, 0x800bc9c
        x0 = 0x800c000 // x7
        x0 = x0 + 0   // int64_t arg1 // x7
        x1 = x26      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800c150 ()  // 0x800c150(0x800c000, 0x0, 0x0, 0x0)
    loc_0x0800bc88: // orphan
             x27 = x21 + 0x100
             x9 = x20 & 0xfffffffffffff000
             jmp 0x800bca0

    loc_0x0800bc94: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x800bca8, 0x800bcb0, 0x800bcc0
         x24 = [x24]              // 0xdf // 223
         if (x24 == x8)
         b.eq 0x800c144           // unlikely

    loc_0x0800bca0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800bc90
         ldur x10,[x24,-0x20]     // 0xdf // 223
         if (x10 == x25)
         b.ne 0x800bc94           // likely

    loc_0x0800bcac: // orphan
         w10 = (byte) [x24 + 0x14] // 0xdf // 223
         if !w10 jmp 0x800bc94    // unlikely

    loc_0x0800bcb4: // orphan
         x22 = x24 - 0x30
         x10 = [x22]              // 0xdd // 221
         if (x10 == x9)
         b.ne 0x800bc94           // likely

    loc_0x0800bcc4: // orphan
         x0 = var_120h            // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x158
         0x800bcd0 ()             // 0x800bcd0(0x178120, 0x0, 0x158, 0x0)
         jmp 0x801c024

    loc_0x0800bce8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801c040
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg1 // "B"
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x800bcf4 ()             // 0x800bcf4(0x800b000, 0x0, 0x0, 0x0)
         if !x22 jmp 0x800c154    // likely

    loc_0x0800bcfc: // orphan
         [var_118h] = x27
         

    loc_0x0800bd04: // orphan
         // CODE XREF from fcn.0801c808 @ 0x801c80c
         x26 = x25 + 0x90
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800bd0c ()             // 0x800bd0c(0x90, 0x0, 0x0, 0x0)
         w27 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         if !w27 jmp 0x800c18c    // unlikely

    loc_0x0800bd1c: // orphan
         // CODE XREF from fcn.0801c820 @ 0x801c824
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x800bd24 ()             // 0x800bd24(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800c180     // likely

    loc_0x0800bd2c: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x8 == x20)
         b.hi 0x800c180           // likely

    loc_0x0800bd38: // orphan
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.shadow_find_user_pte () // sym.shadow_find_user_pte(0x0, 0x0)
         if !x0 jmp 0x800c180     // likely

    loc_0x0800bd48: // orphan
         x1 = [x0]                // 0xc7 // 199 // int64_t arg2
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = 0x40                // '@' // int64_t arg3
         [var_0h] = x1
         sym.shadow_pte_matches () // " !" // "(" // sym.shadow_pte_matches(0x0, 0xffffffff00000000, 0x40000000000000)
         tbz w0,0,0x800c180       // likely

    loc_0x0800bd60: // orphan
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock ()  // sym.mmap_read_unlock(0x0, 0x0)
         x26 = x24 + 0x10
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800bd70 ()             // 0x800bd70(0x10, 0x0, 0x0, 0x0)
         w25 = [x24 + 0x18]       // 0xdf // 223
         ldur x8,[x24,-0x28]      // 0xdf // 223
         if (w25 == 1)
         [sp, 0x108] = (x0,2)
         [var_120h] = x8
         [var_128h] = w25
         b.lt 0x800be00           // likely

    loc_0x0800bd90: // orphan
         if (w25 == 0x54)
         b.hs 0x800f904           // unlikely

    loc_0x0800bd98: // orphan
         x27 = x25 << 2
         if (w25 == 0x11)
         x28 = x24 + 0x1c
         b.lo 0x800bdb4           // likely

    loc_0x0800bda8: // orphan
         x8 = 0x800b000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x800d4a4       // likely

    loc_0x0800bdb4: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800bda4
         x8 = var_120h
         x1 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = var_44h             // int64_t arg1
         0x800bdc4 ()             // 0x800bdc4(0x17812c, 0x0, 0x0, 0x0)
         if (w25 == 0x22)
         b.hs 0x800f904           // unlikely

    loc_0x0800bdd0: // orphan
         x27 = x25 << 3
         if (w25 == 0x11)
         x28 = x24 + 0x60
         b.lo 0x800bdec           // likely

    loc_0x0800bde0: // orphan
         x8 = 0x800b000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x800d4d0       // likely

    loc_0x0800bdec: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800bddc
         x8 = var_120h
         x1 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = var_50h_4           // int64_t arg1
         0x800bdfc ()             // 0x800bdfc(0x178170, 0x0, 0x0, 0x0)

    loc_0x0800be00: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800bd8c
         w25 = [x24 + 0xe0]       // 0xdf // 223
         if (w25 == 1)
         [var_1f0h] = w25
         b.lt 0x800be7c           // likely

    loc_0x0800be10: // orphan
         if (w25 == 0x22)
         b.hs 0x800f904           // unlikely

    loc_0x0800be18: // orphan
         x27 = x25 << 2
         if (w25 == 0x11)
         x28 = x24 + 0xe4
         b.lo 0x800be34           // likely

    loc_0x0800be28: // orphan
         x8 = 0x800b000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x800d4fc       // likely

    loc_0x0800be34: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800be24
         x8 = var_120h
         x1 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = var_d4h             // int64_t arg1
         0x800be44 ()             // "?K" // 0x800be44(0x1781f4, 0x0, 0x0, 0x0)
         if (w25 == 0x12)
         b.hs 0x800f904           // unlikely

    loc_0x0800be50: // orphan
         if (w25 == 0x11)
         x28 = x24 + 0x124
         b.lo 0x800be68           // likely

    loc_0x0800be5c: // orphan
         x8 = 0x800b000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x800d528       // likely

    loc_0x0800be68: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800be58
         x8 = var_120h
         x1 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = var_114h            // int64_t arg1
         0x800be78 ()             // 0x800be78(0x178234, 0x0, 0x0, 0x0)

    loc_0x0800be7c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800be0c
         x1 = [var_108h]          // 0x4 // 4 // int64_t arg2
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800be84 ()             // 0x800be84(0x0, 0x10, 0x0, 0x0)
         x8 = [var_118h]          // 0x4 // 4
         x25 = [x8]               // 0xcf // 207
         x8 = x25 << 8
         x8 = x25 & x8,asr 8
         x9 = x8 & 0xfffffffffffffffc
         x8 = [var_110h]          // 0x4 // 4
         [var_0h_2] = x9
         if (x9 == x8)
         b.ne 0x800c1c4           // likely

    loc_0x0800beac: // orphan
         0x800beac ()             // 0x800beac(0x0, 0x0, 0x0, 0x0)
         w8 = [x23 + 0x10]        // 0xde // 222
         x27 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 + 1
         [x23 + 0x10] = w8
         x8 = 0x800b000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x800bed0     // unlikely

    loc_0x0800becc: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)

    loc_0x0800bed0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800bec8
         x8 = [x23 + 0xec0]       // 0xde // 222
         x9 = [x23 + 0xee0]       // 0xde // 222
         x28 = [x23 + 0xed0]      // 0xde // 222
         [var_8h] = x8
         x8 = [x23 + 0xef0]       // 0xde // 222
         [sp, 0xf0] = (x8,2)
         x9 = [x23 + 0xf00]       // 0xde // 222
         x8 = [x23 + 0xf10]       // 0xde // 222
         [sp, 0xe0] = (x8,2)
         x9 = [x23 + 0xf20]       // 0xde // 222
         x8 = [x23 + 0xf30]       // 0xde // 222
         [sp, 0xd0] = (x8,2)
         x9 = [x23 + 0xf40]       // 0xde // 222
         x8 = [x23 + 0xf50]       // 0xde // 222
         [sp, 0xc0] = (x8,2)
         x9 = [x23 + 0xf60]       // 0xde // 222
         x8 = [x23 + 0xf70]       // 0xde // 222
         [sp, 0xb0] = (x8,2)
         x9 = [x23 + 0xf80]       // 0xde // 222
         x8 = [x23 + 0xf90]       // 0xde // 222
         [sp, 0xa0] = (x8,2)
         x9 = [x23 + 0xfa0]       // 0xde // 222
         x8 = [x23 + 0xfb0]       // 0xde // 222
         [sp, 0x90] = (x8,2)
         x9 = [x23 + 0xfc0]       // 0xde // 222
         x8 = [x23 + 0xfd0]       // 0xde // 222
         [sp, 0x80] = (x8,2)
         x9 = [x23 + 0xfe0]       // 0xde // 222
         x8 = [x23 + 0xff0]       // 0xde // 222
         [sp, 0x70] = (x8,2)
         x9 = [x23 + 0x1000]      // 0xde // 222
         x8 = [x23 + 0x1010]      // 0xde // 222
         [sp, 0x60] = (x8,2)
         x9 = [x23 + 0x1020]      // 0xde // 222
         x8 = [x23 + 0x1030]      // 0xde // 222
         [sp, 0x50] = (x8,2)
         x9 = [x23 + 0x1040]      // 0xde // 222
         x8 = [x23 + 0x1050]      // 0xde // 222
         [sp, 0x40] = (x8,2)
         x9 = [x23 + 0x1060]      // 0xde // 222
         x8 = [x23 + 0x1070]      // 0xde // 222
         [sp, 0x30] = (x8,2)
         x9 = [x23 + 0x1080]      // 0xde // 222
         x8 = [x23 + 0x1090]      // 0xde // 222
         [sp, 0x20] = (x8,2)
         x9 = [x23 + 0x10a0]      // 0xde // 222
         x8 = [x23 + 0x10b0]      // 0xde // 222
         [sp, 0x10] = (x8,2)
         x8 = [x23 + 0x10]        // 0xde // 222
         x8 = x8 - 1
         [x23 + 0x10] = w8
         b.eq 0x800d554           // unlikely

    loc_0x0800bfa0: // orphan
         x8 = [x23 + 0x10]        // 0xde // 222
         if !x8 jmp 0x800d554     // unlikely

    loc_0x0800bfa8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800d558
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800bfac ()             // 0x800bfac(0x0, 0x0, 0x0, 0x0)
         w8 = [x24 + 0x24e8]      // 0xdf // 223
         [var_108h] = x0
         if (w8 == 0x10)
         b.hi 0x801d6ac           // likely

    loc_0x0800bfc0: // orphan
         w9 = 0x238
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0xf8                // '\xf8'
         umaddl x25,w8,w9, x22
         x8 = [x23 + 0x618]       // 0xde // 222
         [x25 + 0x198] = x8
         x0 = x25 + 0x1b0         // int64_t arg1
         x8 = [x21 + 0x100]       // 0xdc // 220
         [x25, 0x1a0] = (x8,2)
         0x800bfe4 ()             // 0x800bfe4(0x1b0, 0x0, 0xf8, 0x0)
         x27 = x21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [var_8h]            // 0x4 // 4
         x8 = [x27 + 0xf8]!       // 0xe2 // 226
         [x25 + 0x2a8] = x8
         x8 = [x21 + 0x100]       // 0xdc // 220
         [x25 + 0x2b0] = x8
         // XREFS: STRING 0x0800c144  CODE 0x0800c148  STRING 0x0800c290  
         // XREFS: STRING 0x0800c3b8  CODE 0x0800c3bc  STRING 0x0800c3c0  
         // XREFS: CODE 0x0800c3c4  DATA 0x0800c418  DATA 0x0800c428  
         // XREFS: STRING 0x0800c5e4  CODE 0x0800c5e8  DATA 0x0800c69c  
         // XREFS: DATA 0x0800c82c  DATA 0x0800cd5c  STRING 0x0800cd8c  
         // XREFS: DATA 0x0800cdb8  DATA 0x0800ce10  DATA 0x0800ce24  
         // XREFS: STRING 0x0800ce54  CODE 0x0800ce58  
         x8 = [x27 + 0x10]        // 0xe2 // 226
         [x25 + 0x2b8] = x8
         x8 = [x27 + 0x18]        // 0xe2 // 226
         [x25 + 0x2c0] = x8
         x8 = [x27 + 0x20]        // 0xe2 // 226
         [x25 + 0x2d0] = x9
         [x25 + 0x2d8] = x28
         [x25 + 0x2c8] = x8
         x8 = [var_f8h]           // 0x4 // 4
         [x25 + 0x2e0] = x8
         x8 = [var_f0h]           // 0x4 // 4
         [x25 + 0x2e8] = x8
         x8 = [var_e8h]           // 0x4 // 4
         [x25 + 0x2f0] = x8
         x8 = [var_e0h]           // 0x4 // 4
         [x25 + 0x2f8] = x8
         x8 = [var_d8h]           // 0x4 // 4
         [x25 + 0x300] = x8
         x8 = [var_d0h]           // 0x4 // 4
         [x25 + 0x308] = x8
         x8 = [var_c8h]           // 0x4 // 4
         [x25 + 0x310] = x8
         x8 = [var_c0h]           // 0x4 // 4
         [x25 + 0x318] = x8
         x8 = [var_b8h]           // 0x4 // 4
         [x25 + 0x320] = x8
         x8 = [var_b0h]           // 0x4 // 4
         [x25 + 0x328] = x8
         x8 = [var_a8h]           // 0x4 // 4
         [x25 + 0x330] = x8
         x8 = [var_a0h]           // 0x4 // 4
         [x25 + 0x338] = x8
         x8 = [var_98h]           // 0x4 // 4
         [x25 + 0x340] = x8
         x8 = [var_90h]           // 0x4 // 4 // tmp
         [x25 + 0x348] = x8
         x8 = [var_88h]           // 0x4 // 4
         [x25 + 0x350] = x8
         x8 = [var_80h]           // 0x4 // 4
         [x25 + 0x358] = x8
         x8 = [var_78h]           // 0x4 // 4
         [x25 + 0x360] = x8
         x8 = [var_70h]           // 0x4 // 4
         [x25 + 0x368] = x8
         x8 = [var_68h]           // 0x4 // 4
         [x25 + 0x370] = x8
         x8 = [var_60h]           // 0x4 // 4
         [x25 + 0x378] = x8
         x8 = [var_58h]           // 0x4 // 4
         [x25 + 0x380] = x8
         x8 = [var_50h_2]         // 0x4 // 4
         [x25 + 0x388] = x8
         x8 = [var_48h]           // 4
         [x25 + 0x390] = x8
         x8 = [var_40h_2]         // 4
         [x25 + 0x398] = x8
         x8 = [var_38h]           // 0x4 // 4
         [x25 + 0x3a0] = x8
         x8 = [var_30h_2]         // 0x4 // 4
         [x25 + 0x3a8] = x8
         x8 = [var_28h]           // 0x4 // 4
         [x25 + 0x3b0] = x8
         x8 = [var_20h_2]         // 0x4 // 4
         [x25 + 0x3b8] = x8
         x8 = [var_18h]           // 0x4 // 4
         [x25 + 0x3c0] = x8
         x8 = [var_10h_2]         // 0x4 // 4
         [x25 + 0x3c8] = x8
         w8 = [x24 + 0x24e8]      // 0xdf // 223
         w9 = w8 + 1
         w8 = [x24 + 0x24f0]      // 0xdf // 223
         negs w10,w9
         w9 = w9 & 0xf
         w10 = w10 & 0xf
         csneg w9,w9,w10, mi
         if (w8 == 0xf)
         [x24 + 0x24e8] = w9
         jmp ifgt 0x800c1d0       // unlikely

    loc_0x0800c138: // orphan
         w8 = w8 + 1
         [x24 + 0x24f0] = w8
         jmp 0x800c1ec

    loc_0x0800c180: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x800bd28, 0x800bd34, 0x800bd44, 0x800bd5c
         

    loc_0x0800c184: // orphan
         // CODE XREF from fcn.0801d538 @ 0x801d53c
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c188 ()             // 0x800c188(0x0, 0x0, 0x0, 0x0)

    loc_0x0800c18c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800bd18
         // CODE XREF from fcn.0801c820 @ 0x801c828
         jmp 0x801c82c

    loc_0x0800c1a8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801c854
         w8 = 0x2508
         w1 = 0x3
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x24 + x8            // int64_t arg1
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_500h
         0x800c1bc ()             // 0x800c1bc(0x2508, 0x3, 0x0, 0x0)
         jmp 0x800c154

    loc_0x0800c1c4: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800bea8
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800c2fc

    loc_0x0800c1d0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c134
         w8 = [x24 + 0x24ec]      // 0xdf // 223
         w8 = w8 + 1
         negs w9,w8
         w8 = w8 & 0xf
         w9 = w9 & 0xf
         csneg w8,w8,w9, mi
         [x24 + 0x24ec] = w8

    loc_0x0800c1ec: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c140
         x1 = [var_108h]          // 0x4 // 4 // int64_t arg2
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c1f4 ()             // 0x800c1f4(0x0, 0x0, 0x0, 0x0)
         w8 = [var_128h]          // 0x4 // 4
         if (w8 == 1)
         b.lt 0x800c26c           // likely

    loc_0x0800c204: // orphan
         x10 = var_120h
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = var_50h_4
         jmp 0x800c22c

    loc_0x0800c218: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c244
         x12 = x21 + x12,lsl 3

    loc_0x0800c21c: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x800c260, 0x800c268
         [x12] = x11

    loc_0x0800c220: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c254
         x9 = x9 + 1
         if (x8 == x9)
         b.eq 0x800c270           // unlikely

    loc_0x0800c22c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c214
         if (x9 == 0x10)
         b.eq 0x801d6ac           // unlikely

    loc_0x0800c234: // orphan
         x11 = x10 + x9,lsl 2
         ldur w12,[x11,-0x44]     // 0xd2 // 210
         x11 = [x10 + x9,lsl 3]   // 0xd0000000d1 // 893353197777
         if (w12 == 0x1e)
         b.ls 0x800c218           // unlikely

    loc_0x0800c248: // orphan
         if (w12 == 0x1f)
         b.eq 0x800c264           // unlikely

    loc_0x0800c250: // orphan
         if (w12 == 0x20)
         b.ne 0x800c220           // likely

    loc_0x0800c258: // orphan
         x12 = [var_118h]         // 0x4 // 4
         w24 = 0x1
         jmp 0x800c21c

    loc_0x0800c264: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c24c
         x12 = x27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800c21c

    loc_0x0800c26c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c200
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800c270: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c228
         w8 = [var_1f0h]          // 0x4 // 4
         if (w8 == 1)
         b.lt 0x800c2d8           // likely

    loc_0x0800c27c: // orphan
         w8 = [x23 + 0x10]        // 0xde // 222
         x0 = var_120h            // int64_t arg1
         w8 = w8 + 1
         [x23 + 0x10] = w8
         sym.shadow_apply_fp_reg_config () // sym.shadow_apply_fp_reg_config(0x178120)
         x8 = 0x800c000           // x7
         if (w0 == 0)
         x8 = [x8]                // 0xcf // 207 // x7
         cset w26,gt
         if (x8 == 0)
         csel w27,wzr,w26, eq
         if (w27 == 1)
         b.ne 0x800c2b8           // unlikely

    loc_0x0800c2b0: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // xzr(0x8033000, 0x0, 0x0, 0x0)

    loc_0x0800c2b8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c2ac
         x8 = [x23 + 0x10]        // 0xde // 222
         x8 = x8 - 1
         [x23 + 0x10] = w8
         b.eq 0x800c2d0           // unlikely

    loc_0x0800c2c8: // orphan
         x8 = [x23 + 0x10]        // 0xde // 222
         if x8 jmp 0x800c2e0      // likely

    loc_0x0800c2d0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c2c4
         0x800c2d0 ()             // 0x800c2d0(0x0, 0x0, 0x0, 0x0)
         jmp 0x800c2e0

    loc_0x0800c2d8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c278
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800c2e0: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x800c2cc, 0x800c2d4
         tbz w24,0,0x800c2f4      // likely

    loc_0x0800c2e4: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.shadow_entry_put_fault () // ":" // sym.shadow_entry_put_fault(0x0)
         w26 = 0x1
         jmp 0x800c158            // fcn.0801a09c-0xdf44

    loc_0x0800c2f4: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c2e0
         x8 = [var_118h]          // 0x4 // 4
         x25 = [x8]               // 0xcf // 207

    loc_0x0800c2fc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c1cc
         w8 = (byte) [x23 + 0x46] // 0xde // 222
         [var_108h] = w26
         tbnz w8,5,0x800c314      // unlikely

    loc_0x0800c308: // orphan
         x9 = [x23]               // 0xde // 222
         x8 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x800c31c    // unlikely

    loc_0x0800c314: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c304
         x8 = x25 << 8
         x8 = x25 & x8,asr 8

    loc_0x0800c31c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c310
         x9 = xzr | 0x7ffffffffc
         x26 = x23 + 0x44
         x24 = x25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x8 == x9)
         b.hi 0x800c350           // unlikely

    loc_0x0800c330: // orphan
         x24 = x25 & 0xff7fffffffffffff
         sym.uaccess_ttbr0_enable ()
         w28 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800c350: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c32c
         [var_0h_3] = xzr
         [var_0h_4] = xzr
         w8 = (byte) [x26 + 2]    // 0xe1 // 225
         [var_0h_5] = xzr
         [var_0h_6] = xzr
         [var_0h_7] = xzr
         [var_0h_8] = xzr
         [var_0h_9] = xzr
         [var_0h_10] = xzr
         [var_0h_11] = xzr
         [var_0h_12] = xzr
         tbnz w8,5,0x800c38c      // unlikely

    loc_0x0800c380: // orphan
         x9 = [x23]               // 0xde // 222
         x8 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x800c394    // unlikely

    loc_0x0800c38c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c37c
         x8 = x24 << 8
         x8 = x24 & x8,asr 8

    loc_0x0800c394: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c388
         x9 = xzr | 0x7ffffffffc
         if (x8 == x9)
         b.hi 0x800c3b8           // unlikely

    loc_0x0800c3a0: // orphan
         x27 = x24 & 0xff7fffffffffffff
         sym.uaccess_ttbr0_enable ()
         w28 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0800c3b8: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c39c
         x0 = 0x800c000           // x7
         x0 = x0 + 0              // int64_t arg1 // x7
         x1 = 0x800c000           // x7
         x1 = x1 + 0              // int64_t arg2 // x7
         0x800c3c8 ()             // 0x800c3c8(0x800c000, 0x800c000, 0x0, 0x0)
         if w0 jmp 0x800c5e4      // likely

    loc_0x0800c3d0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c5f4
         w9 = [var_108h]          // 0x4 // 4
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w28 = 0x1
         w27 = 0x3
         jmp 0x800cd8c            // fcn.0801a09c-0xd310

    loc_0x0800c5e4: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c3cc
         x0 = 0x800c000           // x7
         x0 = x0 + 0              // int64_t arg1 // x7
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x800c5f0 ()             // 0x800c5f0(0x800c000, 0x0, 0x0, 0x0)
         jmp 0x800c3d0

    loc_0x0800d4a4: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800bdb0
         w9 = 0x1
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1 // "//"
         x2 = 0x800d000
         x2 = x2 + 0              // int64_t arg3 // "//"
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w3 = 0x40                // '@'
         [x8] = (byte) w9
         0x800d4c4 ()             // 0x800d4c4(0x800d000, 0x0, 0x800d000, 0x40)
         brk 0x800

    loc_0x0800d4d0: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800bde8
         w9 = 0x1
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1 // "//"
         x2 = 0x800d000
         x2 = x2 + 0              // int64_t arg3 // "//"
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w3 = 0x80                // '\x80'
         [x8] = (byte) w9
         0x800d4f0 ()             // 0x800d4f0(0x800d000, 0x0, 0x800d000, 0x80)
         brk 0x800

    loc_0x0800d4fc: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800be30
         w9 = 0x1
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1 // "//"
         x2 = 0x800d000
         x2 = x2 + 0              // int64_t arg3 // "//"
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w3 = 0x40                // '@'
         [x8] = (byte) w9
         0x800d51c ()             // 0x800d51c(0x800d000, 0x0, 0x800d000, 0x40)
         brk 0x800

    loc_0x0800d528: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800be64
         w9 = 0x1
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1 // "//"
         x2 = 0x800d000
         x2 = x2 + 0              // int64_t arg3 // "//"
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w3 = 0x40                // '@'
         [x8] = (byte) w9
         0x800d548 ()             // 0x800d548(0x800d000, 0x0, 0x800d000, 0x40)
         brk 0x800

    loc_0x0800d554: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x800bf9c, 0x800bfa4
         0x800d554 ()             // 0x800d554(0x0, 0x0, 0x0, 0x0)
         jmp 0x800bfa8

    loc_0x0800f904: // orphan
         // CODE XREFS from sym.handle_shadow_page_fault @ 0x800bd94, 0x800bdcc, 0x800be14, 0x800be4c
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f90c ()             // 0x800f90c(0x800f000, 0x0, 0x0, 0x0)
         b.hs 0x801d6ac           // unlikely

    loc_0x0800f914: // orphan
         x8 = [x21 + x8,lsl 3]    // 0xcf000000dc // 889058230492
         [var_c0h] = x8
         x8 = [var_d8h]           // 0x4 // 4
         w27 = 0x3
         w8 = w8 - 1
         if (w8 == 0xf)
         b.hi fcn.0801a09c        // likely

    loc_0x0800f930: // orphan
         x9 = 0x800f000
         x9 = x9 + 0
         x10 = 0x800f938
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

    loc_0x0801c024: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800bcd4
         w8 = 0x2500
         x8 = x24 + x8
         prfm pstl1strm,[x8]

    loc_0x0801c030: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801c03c
         ldxr w9,[x8]
         w9 = w9 + 1
         stxr w10,w9,[x8]
         if w10 jmp 0x801c030     // unlikely

    loc_0x0801c040: // orphan
         jmp 0x800bce8

    loc_0x0801c82c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x800c18c
         w8 = 0x2500
         w10 = 0x1
         x9 = x24 + x8
         prfm pstl1strm,[x9]

    loc_0x0801c83c: // orphan
         // CODE XREF from sym.handle_shadow_page_fault @ 0x801c848
         ldxr w8,[x9]
         w8 = w8 - w10
         stlxr w11,w8,[x9]
         if w11 jmp 0x801c83c     // unlikely

    loc_0x0801c84c: // orphan
         dmb ish
         if w8 jmp 0x800c154      // unlikely

    loc_0x0801c854: // orphan
         jmp 0x800c1a8

    loc_0x0801d6ac: // orphan
         // XREFS(135)
         brk 0x5512

}

/* ===== 0x0800ba74 ===== */
int sym.uaccess_ttbr0_enable (int esi, int edx) {
    loc_0x800ba74:
        // XREFS(133)
        jmp 0x800baac
         // do {
    loc_0x800baac:
        // CODE XREF from sym.uaccess_ttbr0_enable @ 0x800ba74
        x8 = 0x800b000
        x8 = [x8]     // 0xcf // 207
        tbnz x8,0x26,0x800baa8 // likely
         // } while (?);
        }
        return eax;
    loc_0x800bab8:
        jmp 0x800ba7c
         // do {
    loc_0x800ba7c:
        // CODE XREF from sym.uaccess_ttbr0_enable @ 0x800bab8
        mrs x8,daif   // '\xff\xff\xff\xff\xff\xff\xff\xff'
        msr daifset,3 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = [x9 + 8] // 0xd0 // 208
        mrs x10,ttbr1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = x9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        bfxil x11,x10,0, 0x30 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        msr ttbr1_el1,x11 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        msr ttbr0_el1,x9 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x0800baa0
        msr daif,x8   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // } while (?);
        }
        return eax;
    loc_0x0800baa8: // orphan
             // CODE XREF from sym.uaccess_ttbr0_enable @ 0x800bab4
                                      // lr

}

/* ===== 0x0800babc ===== */
int sym.uaccess_ttbr0_disable (int esi, int edx) {
    loc_0x800babc:
        // XREFS(117)
        jmp 0x800baec
         // do {
    loc_0x800baec:
        // CODE XREF from sym.uaccess_ttbr0_disable @ 0x800babc
        x8 = 0x800b000
        x8 = [x8]     // 0xcf // 207
        tbnz x8,0x26,0x800bae8 // likely
         // } while (?);
        }
        return eax;
    loc_0x800baf8:
        jmp 0x800bac4
         // do {
    loc_0x800bac4:
        // CODE XREF from sym.uaccess_ttbr0_disable @ 0x800baf8
        mrs x8,daif   // '\xff\xff\xff\xff\xff\xff\xff\xff'
        msr daifset,3 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x9,ttbr1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = x9 & 0xffffffffffff
        x10 = x9 - 1,lsl 12
        msr ttbr0_el1,x10 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        msr ttbr1_el1,x9 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x0800bae0
        msr daif,x8   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // } while (?);
        }
        return eax;
    loc_0x0800bae8: // orphan
             // CODE XREF from sym.uaccess_ttbr0_disable @ 0x800baf4
                                      // lr

}

/* ===== 0x0801d6b0 ===== */
int sym.shadow_apply_fp_reg_config (int esi, int edx) {
    loc_0x801d6b0:
        // CALL XREF from sym.handle_shadow_page_fault @ 0x800c28c
        // CALL XREF from fcn.0801a09c @ 0x800cdb4
        w10 = [x0 + 0xd0] // 0xc7 // 199 // arg1
        if (w10 == 1)
        b.lt 0x801d710 // likely
            
    loc_0x801d710:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // lr
         // } else {
    loc_0x801d6bc:
        x9 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x11,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x801d6d8
        }
        return eax;
    loc_0x0801d6cc: // orphan
             // CODE XREF from sym.shadow_apply_fp_reg_config @ 0x801d704
             x9 = x9 + 1
             if (x9 == w10)
             b.ge 0x801d708           // likely

    loc_0x0801d6d8: // orphan
         // CODE XREF from sym.shadow_apply_fp_reg_config @ 0x801d6c8
         if (x9 == 0x10)
         b.eq 0x801d718           // unlikely

    loc_0x0801d6e0: // orphan
         x13 = x0 + x9,lsl 2      // arg1
         w12 = [x13 + 0xd4]       // 212
         if (w12 == 0x1f)
         b.hi 0x801d6cc           // likely

    loc_0x0801d6f0: // orphan
         w10 = [x13 + 0x114]      // 0xd4 // 212
         x12 = x11 + x12,lsl 4
         w8 = w8 + 1
         [x12 + 0xec0] = w10
         w10 = [x0 + 0xd0]        // 0xc7 // 199 // arg1
         jmp 0x801d6cc

    loc_0x0801d708: // orphan
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
                                  // lr

    loc_0x0801d718: // orphan
         brk 0x5512

}

/* ===== 0x0801d71c ===== */
int sym.shadow_entry_put_fault (int esi, int edx) {
    loc_0x801d71c:
        // CALL XREF from sym.handle_shadow_page_fault @ 0x800c2e8
        // CALL XREF from fcn.0801a09c @ 0x800ce88
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x801d768
         // do {
    loc_0x801d768:
        // CODE XREF from sym.shadow_entry_put_fault @ 0x801d728
        w8 = 0x2530   // '0%'
        w10 = 0x1
        x9 = x0 + x8  // arg1
        prfm pstl1strm,[x9]
         // } while (?);
        }
        return eax;
    loc_0x0801d744: // orphan
             // CODE XREF from sym.shadow_entry_put_fault @ 0x801d790
             w8 = 0x2538              // '8%'
             w1 = 0x3
             w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             x0 = x0 + x8             // int64_t arg1
             x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x801d758 ()             // 0x801d758(0x2538, 0x3, 0x0, 0x0)

    loc_0x0801d75c: // orphan
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0801d778: // orphan
         ldxr w8,[x9]
         w8 = w8 - w10
         stlxr w11,w8,[x9]
         if w11 jmp 0x801d778     // unlikely

    loc_0x0801d788: // orphan
         dmb ish
         if w8 jmp 0x801d75c      // unlikely

    loc_0x0801d790: // orphan
         jmp 0x801d744

}

/* ===== 0x0801d794 ===== */
int sym.shadow_insn_touches_fpsimd (int esi, int edx) {
    loc_0x801d794:
        // CALL XREF from x7 @ +0x3ec
        w8 = 0xc0     // '\xc0'
        w9 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        bics wzr,w8,w0 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        b.ne 0x801d7e0 // likely
            
    loc_0x801d7e0:
        w8 = w9 & 0xfffffc00
        w10 = 0x27ff  // '\xff''
        w0 = 0x1
        w8 = w8 & 0xff3fffff
        w10 = 0x4e21  // '!N'
        if (w8 == w10)
        jmp ifgt 0x801d828 // unlikely
            
    loc_0x801d828:
        w10 = 0x27ff  // '\xff''
        w10 = 0x6e21  // '!n'
        if (w8 == w10)
        jmp ifgt 0x801d870 // unlikely
            
    loc_0x801d870:
        w10 = 0x2800
        w10 = 0x6e21  // '!n'
        if (w8 == w10)
        b.eq 0x801dac8 // unlikely
            
    loc_0x801dac8:
        // lr
         // } else {
    loc_0x801d880:
        w10 = 0x4800
        w10 = 0x6e21  // '!n'
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x801d7a4
    loc_0x801d7c0:
        tbnz w9,0x16,0x801d8d0 // unlikely
            
    loc_0x801d8d0:
        w10 = 0xb7ff  // '\xff\xb7'
        w8 = w9 & 0xfffffc00
        w0 = 0x1
        w10 = 0x4e31  // '1N'
        if (w8 == w10)
        jmp ifle 0x801d934 // likely
            
    loc_0x801d934:
        w10 = 0xa7ff  // '\xff\xa7'
        w10 = 0x2e30  // '0.'
        if (w8 == w10)
        jmp ifgt 0x801d9bc // unlikely
            
    loc_0x801d9bc:
        w10 = 0xa7ff  // '\xff\xa7'
        w10 = 0x2e71  // 'q.'
        if (w8 == w10)
        jmp ifgt 0x801da7c // unlikely
            
    loc_0x801da7c:
        w10 = 0xa800
        w10 = 0x2e71  // 'q.'
        if (w8 == w10)
        b.eq 0x801dac8 // unlikely
    loc_0x801da8c:
        w10 = 0xa800
        w10 = 0x4e30  // '0N'
        if (w8 == w10)
        b.eq 0x801dac8 // unlikely
    loc_0x801da9c:
        w10 = 0xa800
        w10 = 0x4e31  // '1N'
        jmp 0x801dac0
         // do {
    loc_0x801dac0:
        // XREFS: CODE 0x0801d930  CODE 0x0801d97c  CODE 0x0801d9b8
        // XREFS: CODE 0x0801d9f4  CODE 0x0801da20  CODE 0x0801da4c
        // XREFS: CODE 0x0801da78  CODE 0x0801daa4
        if (w8 == w10)
        b.ne 0x801dacc // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801d7c4
    loc_0x801d7cc:
        tbnz w9,0x15,0x801d894 // unlikely
            
    loc_0x801d894:
        w10 = 0x2
        jmp 0x801d8a0
         // do {
    loc_0x801d8a0:
        // CODE XREFS from sym.shadow_insn_touches_fpsimd @ 0x801d7dc, 0x801d898
        ubfx w11,w9,0x10, 3 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w12 = 0x8
        w8 = w11 | w8,lsl 3
        w11 = w12 << w10
        if (w8 == w11)
        b.lo 0x801d8d0 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801d7d0
    loc_0x801d7d4:
        tbz w9,0x13,0x801d8d0 // likely
    loc_0x801d7d8:
        w10 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x801d8a0
    loc_0x0801d80c: // orphan
             w10 = 0x2800
             w10 = 0xe21              // '!\x0e'
             if (w8 == w10)
             b.eq 0x801dac8           // unlikely

    loc_0x0801d81c: // orphan
         w10 = 0x4800
         w10 = 0xe21              // '!\x0e'
         jmp 0x801d888

    loc_0x0801d848: // orphan
         w10 = 0x4800
         w10 = 0x4e21             // '!N'
         jmp 0x801d888

    loc_0x0801d854: // orphan
         w10 = 0x2800
         w10 = 0x2e21             // '!.'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801d864: // orphan
         w10 = 0x4800
         w10 = 0x2e21             // '!.'
         jmp 0x801d888

    loc_0x0801d888: // orphan
         // CODE XREFS from sym.shadow_insn_touches_fpsimd @ 0x801d824, 0x801d850, 0x801d86c
         if (w8 == w10)
         b.eq 0x801dac8           // likely

    loc_0x0801d890: // orphan
         jmp 0x801d7a4

    loc_0x0801d89c: // orphan
         w10 = 0x1

    loc_0x0801d8b8: // orphan
         w11 = 0x10
         w10 = w11 << w10
         if (w8 == w10)
         b.hs 0x801d8d0           // unlikely

    loc_0x0801d8c8: // orphan
         w0 = 0x1
                                  // lr

    loc_0x0801d8f8: // orphan
         w10 = 0xa7ff             // '\xff\xa7'
         w10 = 0x6e70             // 'pn'
         if (w8 == w10)
         jmp ifle 0x801d9f8       // likely

    loc_0x0801d908: // orphan
         w10 = 0xa7ff             // '\xff\xa7'
         w10 = 0x6eb0             // '\xb0n'
         if (w8 == w10)
         jmp ifgt 0x801daa8       // unlikely

    loc_0x0801d918: // orphan
         w10 = 0xa800
         w10 = 0x6e70             // 'pn'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801d928: // orphan
         w10 = 0xa800
         w10 = 0x6e71             // 'qn'
         jmp 0x801dac0

    loc_0x0801d954: // orphan
         w10 = 0xa800
         w10 = 0xe30              // '0\x0e'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801d964: // orphan
         w10 = 0xa800
         w10 = 0xe31              // '1\x0e'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801d974: // orphan
         w10 = 0xb800
         w10 = 0xe31              // '1\x0e'
         jmp 0x801dac0

    loc_0x0801d980: // orphan
         w10 = 0xb7ff             // '\xff\xb7'
         w10 = 0x4e71             // 'qN'
         if (w8 == w10)
         jmp ifgt 0x801da50       // unlikely

    loc_0x0801d990: // orphan
         w10 = 0xb800
         w10 = 0x4e31             // '1N'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801d9a0: // orphan
         w10 = 0xa800
         w10 = 0x4e70             // 'pN'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801d9b0: // orphan
         w10 = 0xa800
         w10 = 0x4e71             // 'qN'
         jmp 0x801dac0

    loc_0x0801d9dc: // orphan
         w10 = 0xa800
         w10 = 0x2e31             // '1.'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801d9ec: // orphan
         w10 = 0xa800
         w10 = 0x2e70             // 'p.'
         jmp 0x801dac0

    loc_0x0801d9f8: // orphan
         w10 = 0xb800
         w10 = 0x4eb1             // '\xb1N'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801da08: // orphan
         w10 = 0xa800
         w10 = 0x6e30             // '0n'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801da18: // orphan
         w10 = 0xa800
         w10 = 0x6e31             // '1n'
         jmp 0x801dac0

    loc_0x0801da24: // orphan
         w10 = 0xa800
         w10 = 0xe70              // 'p\x0e'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801da34: // orphan
         w10 = 0xa800
         w10 = 0xe71              // 'q\x0e'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801da44: // orphan
         w10 = 0xb800
         w10 = 0xe71              // 'q\x0e'
         jmp 0x801dac0

    loc_0x0801da50: // orphan
         w10 = 0xb800
         w10 = 0x4e71             // 'qN'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801da60: // orphan
         w10 = 0xa800
         w10 = 0x4eb0             // '\xb0N'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801da70: // orphan
         w10 = 0xa800
         w10 = 0x4eb1             // '\xb1N'
         jmp 0x801dac0

    loc_0x0801daa8: // orphan
         w10 = 0xa800
         w10 = 0x6eb0             // '\xb0n'
         if (w8 == w10)
         b.eq 0x801dac8           // unlikely

    loc_0x0801dab8: // orphan
         w10 = 0xa800
         w10 = 0x6eb1             // '\xb1n'

    loc_0x0801dacc: // orphan
         w8 = 0xfc00
         w10 = 0xf200
         w8 = 0xbf20              // ' \xbf'
         w8 = w9 & w8
         w10 = w8 + w10
         extr w8,w8,w10, 0xc
         if (w8 == 8)
         b.lo 0x801dac8           // unlikely

    loc_0x0801daec: // orphan
         hint 0x19
         sp = sp - 0x60
         [sp, 0x50] = (x29,2)
         x29 = var_50h
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = w9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801db04 ()             // 0x801db04(0x0, 0x0, 0x0, 0x0)
         w8 = [var_4h]            // 4
         if !w8 jmp 0x801db18     // likely

    loc_0x0801db10: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801db78

    loc_0x0801db18: // orphan
         x8 = [var_8h]            // 0x4 // 4
         if ((x8 & 0xc) == 0)
         b.eq 0x801db2c           // unlikely

    loc_0x0801db24: // orphan
         w0 = 0x1
         jmp 0x801db78

    loc_0x0801db2c: // orphan
         w8 = [var_14h]           // 4
         w8 = w8 & 0xfffffffe
         if (w8 == 6)
         b.ne 0x801db10           // likely

    loc_0x0801db3c: // orphan
         w8 = (byte) [var_2fh]    // 0x4 // 4
         w9 = (byte) [var_30h]    // 0x4 // 4
         w10 = (byte) [var_31h]   // 0x4 // 4
         w8 = w8 & 3
         w8 = w8 << 0xe
         bfi w8,w9,0xb, 3         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = (byte) [var_32h]    // 0x4 // 4
         bfi w8,w10,7, 4          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = (byte) [var_33h]   // 0x4 // 4
         bfi w8,w9,3, 4           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w10 & 6
         w8 = w8 | w9
         w9 = 0xda20              // ' \xda'
         if (w8 == w9)
         cset w0,eq

    loc_0x0801db78: // orphan
         // CODE XREFS from sym.shadow_insn_touches_fpsimd @ 0x801db14, 0x801db28
         (x29, 2) = 3
         sp = arg_60h
         hint 0x1d
         

}

/* ===== 0x0801db88 ===== */
int sym.shadow_allow_native_execution (int esi, int edx) {
    loc_0x801db88:
        // CALL XREF from fcn.0801a09c @ 0x800ce08
        hint 0x19
        sp = sp - 0x30
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x20,2)
        x29 = var_10h
        x20 = [x0 + 0x10] // 0xc7 // 199 // arg1
        [var_0h_2] = xzr
        if !x20 jmp 0x801dd7c // unlikely
            
    loc_0x801dd7c:
        // CODE XREF from sym.shadow_allow_native_execution @ 0x801dd10
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        sp = arg_30h
        hint 0x1d
        0x0801dd90
         // } else {
    loc_0x801dba8:
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801dbac
        }
        return eax;
    loc_0x0801dbb0: // orphan
             // CODE XREF from fcn.0801dd50 @ 0x801dd54
             x0 = x20 + 0x90          // int64_t arg1
             0x801dbb4 ()             // 0x801dbb4(0x90, 0x0, 0x0, 0x0)
             
             if !w0 jmp 0x801dd78     // unlikely

    loc_0x0801dbc0: // orphan
         x9 = [x19 + 0x10]        // 0xda // 218
         x8 = [x19]               // 0xda // 218
         x9 = [x9 + 0x70]         // 0xd0 // 208
         ubfx x10,x8,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x9 + x10,lsl 3]   // 0xd1000000d0 // 897648165072
         w9 = ~w10
         if ((x9 & 3) == 0)
         b.ne 0x801dcfc           // likely

    loc_0x0801dbe0: // orphan
         x9 = 0x801d000
         x10 = x10 & 0x7ffffff000
         ubfx x11,x8,0x15, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x9]                // 0xd0 // 208
         x10 = x10 - x9
         x10 = x10 | 0xffffff8000000000
         x10 = [x10 + x11,lsl 3]  // 0xd2000000d1 // 901943132369
         w11 = ~w10
         if ((x11 & 3) == 0)
         b.ne 0x801dcfc           // likely

    loc_0x0801dc08: // orphan
         x10 = x10 & 0x7ffffff000
         ubfx x8,x8,0xc, 9        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x10 - x9
         x9 = x9 | 0xffffff8000000000
         x8 = x9 + x8,lsl 3
         b.eq 0x801dcfc           // unlikely

    loc_0x0801dc20: // orphan
         x8 = [x8]                // 0xcf // 207
         x9 = 0x1
         x9 = 0x400
         if ((x8 & x9) == 0)
         [var_0h_2] = x8
         b.eq 0x801dcfc           // unlikely

    loc_0x0801dc38: // orphan
         x9 = 0x801d000
         x9 = [x9]                // 0xd0 // 208
         if !x9 jmp 0x801dc5c     // unlikely

    loc_0x0801dc44: // orphan
         ubfx x10,x8,0x22, 0xe    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x9 + x10,lsl 3]    // 0xd1000000d0 // 897648165072
         if !x9 jmp 0x801dc5c     // unlikely

    loc_0x0801dc50: // orphan
         ubfx x10,x8,0x1b, 7      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x9 + x10,lsl 5
         jmp 0x801dc60

    loc_0x0801dc5c: // orphan
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801dc60: // orphan
         // CODE XREF from sym.shadow_allow_native_execution @ 0x801dc58
         mrs x9,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = [x9 + 0x10]        // 0xd0 // 208
         w11 = w11 + 1
         [x9 + 0x10] = w11
         if !x10 jmp 0x801dc7c    // likely

    loc_0x0801dc74: // orphan
         x11 = [x10]              // 0xd1 // 209
         tbnz w11,1,0x801dca0     // unlikely

    loc_0x0801dc7c: // orphan
         x10 = [x9 + 0x10]        // 0xd0 // 208
         x10 = x10 - 1
         [x9 + 0x10] = w10
         b.eq 0x801dc98           // unlikely

    loc_0x0801dc8c: // orphan
         x9 = [x9 + 0x10]         // 0xd0 // 208
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if x9 jmp 0x801dd00      // likely

    loc_0x0801dc98: // orphan
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801dd34

    loc_0x0801dca0: // orphan
         tbnz w11,3,0x801dcc0     // unlikely

    loc_0x0801dca4: // orphan
         x10 = [x10 + 8]          // 0xd1 // 209
         if !x10 jmp 0x801dcc8    // unlikely

    loc_0x0801dcac: // orphan
         x11 = x8 >> 0x15
         x10 = [x10 + 0x10]       // 0xd1 // 209
         x10 = x10 >> x11
         w20 = w10 & 1
         jmp 0x801dccc

    loc_0x0801dcc0: // orphan
         w20 = 0x1
         jmp 0x801dccc

    loc_0x0801dcc8: // orphan
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801dccc: // orphan
         // CODE XREFS from sym.shadow_allow_native_execution @ 0x801dcbc, 0x801dcc4
         x10 = [x9 + 0x10]        // 0xd0 // 208
         x10 = x10 - 1
         [x9 + 0x10] = w10
         b.eq 0x801dd34           // unlikely

    loc_0x0801dcdc: // orphan
         x9 = [x9 + 0x10]         // 0xd0 // 208
         if !x9 jmp 0x801dd34     // unlikely

    loc_0x0801dce4: // orphan
         if !w20 jmp 0x801dd00    // likely

    loc_0x0801dce8: // orphan
         x0 = [x19 + 0x10]        // 0xda // 218 // int64_t arg1
         x1 = [x19]               // 0xda // 218 // int64_t arg2
         x2 = x8 & 0xffbfffffffffffff // int64_t arg3
         sym.shadow_write_user_pte () // sym.shadow_write_user_pte(0xfffffffffffffffe, 0x20001, 0x0, 0x0)
         if !w0 jmp 0x801dd14     // unlikely

    loc_0x0801dcfc: // orphan
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801dd00: // orphan
         // CODE XREFS from sym.shadow_allow_native_execution @ 0x801dd30, 0x801dd44
         x19 = [x19 + 0x10]       // 0xda // 218
         

    loc_0x0801dd08: // orphan
         // CODE XREF from fcn.0801dd9c @ 0x801dda0
         x0 = x19 + 0x90          // int64_t arg1
         0x801dd0c ()             // 0x801dd0c(0x90, 0x0, 0x0, 0x0)
         jmp 0x801dd7c

    loc_0x0801dd14: // orphan
         x20 = x19 + 0x40
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801dd1c ()             // 0x801dd1c(0x40, 0x0, 0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x19 + 0x44] = (byte) wzr
         0x801dd28 ()             // "4" // 0x801dd28(0x40, 0x0, 0x0, 0x0)
         w20 = 0x1
         jmp 0x801dd00

    loc_0x0801dd34: // orphan
         // CODE XREF from sym.shadow_allow_native_execution @ 0x801dc9c
         [sp] = x8
         0x801dd38 ()             // 0x801dd38(0x0, 0x0, 0x0, 0x0)
         x8 = [sp]                // 0x4 // 4
         if w20 jmp 0x801dce8     // unlikely

    loc_0x0801dd44: // orphan
         jmp 0x801dd00

    loc_0x0801dd78: // orphan
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

}

/* ===== 0x0801dda4 ===== */
int sym.shadow_log_emu_failure (int esi, int edx) {
    loc_0x801dda4:
        // CALL XREFS from fcn.0801a09c @ 0x800ce48, 0x800ce7c
        hint 0x19
        sp = sp - 0x70
        [sp, 0x20] = (x29,2)
        [sp, 0x30] = (x26,2)
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_20h
        x22 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x26 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x801d000
        x0 = x0 + 0   // int64_t arg1 // "//"
        x1 = 0x801d000
        x1 = x1 + 0   // int64_t arg2 // "//"
        x19 = x7      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg8
        w25 = w6      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg7
        w21 = w5      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg6
        w24 = w4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg5
        x23 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        0x801ddf4 ()  // 0x801ddf4(0x801d000, 0x801d000, 0x0, 0x0)
        if w0 jmp 0x801de1c // likely
            
    loc_0x801de1c:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = [x8 + 0x618] // 0xcf // 207
        if (w21 == 3)
        b.hi 0x801de3c // unlikely
            
    loc_0x801de3c:
        x2 = 0x801d000
        x2 = x2 + 0   // "//"
         // do {
    loc_0x801de44:
        // CODE XREF from sym.shadow_log_emu_failure @ 0x801de38
        x8 = 0x801d000
        x8 = x8 + 0   // "//"
        if ((w25 & 1) == 0)
        x9 = [x26 + 0x100] // 0xe1 // 225
        x10 = 0x801d000
        x10 = x10 + 0 // "//"
        csel x5,x10,x8, ne // "//"
        x0 = 0x801d000
        x0 = x0 + 0   // int64_t arg1 // "//"
        w3 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x4 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x6 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x7 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [var_0h] = w24
        [sp] = (x9,2)
        0x801de80 ()  // 0x801de80(0x801d000, 0x0, 0x0, 0x0)
        jmp 0x801ddfc
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0801eb28 ===== */
int sym.mmap_read_lock (int esi, int edx) {
    loc_0x801eb28:
        // XREFS: CALL 0x0801e234  CALL 0x0801e2d8  CALL 0x0801e584
        // XREFS: CALL 0x0801e964  CALL 0x080210d0  CALL 0x080211c4
        // XREFS: CALL 0x080215f8
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801eb3c
         // do {
    loc_0x801eb40:
        // CODE XREF from fcn.0801eb64 @ 0x801eb68
        x0 = x19 + 0x90 // int64_t arg1
        0x801eb44 ()  // 0x801eb44(0x90, 0x0, 0x0, 0x0)
        0x0801eb48
         // } while (?);
        }
        return eax;
    loc_0x0801eb4c: // orphan
             // CODE XREF from fcn.0801eb78 @ 0x801eb7c
             x19 = [var_10h]          // 0x4 // 4
             (x29, 2) = 3             // x23
             hint 0x1d
                                      // x23

}

/* ===== 0x0801eb80 ===== */
int sym.mmap_read_unlock_1 (int esi, int edx) {
    loc_0x801eb80:
        // XREFS: CALL 0x0801e260  CALL 0x0801e304  CALL 0x0801e5b0
        // XREFS: CALL 0x0801e71c  CALL 0x0801e780  CALL 0x0801e7b0
        // XREFS: CALL 0x0801e8d0  CALL 0x0801e97c  CALL 0x0801ea14
        // XREFS: CALL 0x0801eaec  CALL 0x080210fc  CALL 0x080211f0
        // XREFS: CALL 0x0802129c  CALL 0x08021338  CALL 0x0802145c
        // XREFS: CALL 0x08021480  CALL 0x08021548  CALL 0x0802158c
        // XREFS: CALL 0x08021610
        hint 0x19
        sp = sp - 0x20
        [sp, 0x10] = (x29,2)
        x29 = var_10h
        0x0801eb90
         // do {
    loc_0x801eb94:
        // CODE XREF from fcn.0801ebb4 @ 0x801ebbc
        x0 = x0 + 0x90 // int64_t arg1
        0x801eb98 ()  // 0x801eb98(0x90, 0x0, 0x0, 0x0)
        (x29, 2) = 3
        sp = arg_20h
        hint 0x1d
        0x0801eba8
         // } while (?);
        }
        return eax;
}

/* ===== 0x080208f8 ===== */
int sym.brk_destroy_entry (int esi, int edx) {
    loc_0x80208f8:
        // CALL XREF from sym.brk_bp_add @ 0x801e658
        // CALL XREF from sym.brk_bp_memwrite @ 0x802122c
        // CALL XREF from sym.brk_bp_del @ 0x8021a38
        // CALL XREF from sym.brk_bp_clear_all @ 0x8022180
        hint 0x19
        sp = sp - 0x90
        [sp, 0x40] = (x29,2)
        [var_50h] = x25
        [sp, 0x60] = (x24,2)
        [sp, 0x70] = (x22,2)
        [sp, 0x80] = (x20,2)
        x29 = var_40h
        w8 = [x0 + 0x790] // 0xc7 // 199 // arg1
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w8 == 1)
        b.lt 0x8020968 // likely
            
    loc_0x8020968:
        x20 = [x19 + 0x798] // 0xda // 218
        x21 = x19 + 0x798
        [x19 + 0x790] = wzr // arg1
        [x19 + 0x60] = wzr // arg1
        if (x20 == x21)
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [sp, 0x10] = (xzr,2)
        [sp] = (xzr,2)
        b.eq 0x8020ae8 // unlikely
            
    loc_0x8020ae8:
        // CODE XREF from sym.brk_destroy_entry @ 0x8020ab8
        x0 = [x19 + 0x18] // 0xda // 218
        [x19 + 0x7a8] = wzr
        if !x0 jmp 0x8020afc // unlikely
            
    loc_0x8020afc:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8020b00 ()  // 0x8020b00(0x0, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        x25 = [var_50h] // 0x4 // 4
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        sp = arg_90h  // tmp
        hint 0x1d
        0x08020b20
         // } else {
    loc_0x8020af4:
        0x8020af4 ()  // 0x8020af4(0x0, 0x0, 0x0, 0x0)
        [x19 + 0x18] = xzr
         // } else {
         // } else {
        }
        return eax;
    loc_0x08020934: // orphan
             // CODE XREF from sym.brk_destroy_entry @ 0x8020964
             x20 = x20 + 1
             x21 = x21 + 0x38
             if (x20 == w8)
             b.ge 0x8020968           // likely

    loc_0x08020944: // orphan
         // CODE XREF from sym.brk_destroy_entry @ 0x8020930
         if (x20 == 0x20)
         b.eq 0x8020b24           // unlikely

    loc_0x0802094c: // orphan
         x0 = [x21]               // 0xdc // 220
         if !x0 jmp 0x8020934     // unlikely

    loc_0x08020954: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8020958 ()             // 0x8020958(0x0, 0x0, 0x0, 0x0)
         [x21] = xzr
         w8 = [x19 + 0x790]       // 0xda // 218
         jmp 0x8020934

    loc_0x080209a0: // orphan
         x0 = [x20 + 0x38]        // 0xdb // 219
         x25 = [x20]              // 0xdb // 219
         if !x0 jmp 0x8020a74     // unlikely

    loc_0x080209ac: // orphan
         if (w22 == 1)
         b.lt 0x8020a4c           // likely

    loc_0x080209b4: // orphan
         x8 = [sp]                // 0x4 // 4
         if (x8 == x0)
         b.eq 0x8020a70           // likely

    loc_0x080209c0: // orphan
         if (x22 == 1)
         b.eq 0x8020a40           // unlikely

    loc_0x080209c8: // orphan
         x8 = [var_8h]            // 0x4 // 4
         if (x8 == x0)
         b.eq 0x8020a70           // likely

    loc_0x080209d4: // orphan
         if (x22 == 2)
         b.eq 0x8020a40           // unlikely

    loc_0x080209dc: // orphan
         x8 = [var_10h]           // 0x4 // 4
         if (x8 == x0)
         b.eq 0x8020a70           // likely

    loc_0x080209e8: // orphan
         if (x22 == 3)
         b.eq 0x8020a40           // unlikely

    loc_0x080209f0: // orphan
         x8 = [var_18h]           // 0x4 // 4
         if (x8 == x0)
         b.eq 0x8020a70           // likely

    loc_0x080209fc: // orphan
         if (x22 == 4)
         b.eq 0x8020a40           // unlikely

    loc_0x08020a04: // orphan
         x8 = [var_20h]           // 0x4 // 4
         if (x8 == x0)
         b.eq 0x8020a70           // likely

    loc_0x08020a10: // orphan
         if (x22 == 5)
         b.eq 0x8020a40           // unlikely

    loc_0x08020a18: // orphan
         x8 = [var_28h]           // 0x4 // 4
         if (x8 == x0)
         b.eq 0x8020a70           // likely

    loc_0x08020a24: // orphan
         if (x22 == 6)
         b.eq 0x8020a40           // unlikely

    loc_0x08020a2c: // orphan
         x8 = [var_30h]           // 0x4 // 4
         if (x8 == x0)
         b.eq 0x8020a70           // likely

    loc_0x08020a38: // orphan
         if (x22 == 7)
         b.ne 0x8020ac8           // likely

    loc_0x08020a40: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8020a44 ()             // 0x8020a44(0x0, 0x0, 0x0, 0x0)
         jmp 0x8020a58

    loc_0x08020a4c: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8020a50 ()             // 0x8020a50(0x0, 0x0, 0x0, 0x0)
         if x22 jmp 0x8020b24     // unlikely

    loc_0x08020a58: // orphan
         // CODE XREF from sym.brk_destroy_entry @ 0x8020a48
         if (x22 == 7)
         b.hi 0x8020b28           // unlikely

    loc_0x08020a60: // orphan
         x8 = [x20 + 0x38]        // 0xdb // 219
         x9 = x22 + 1
         [x24 + x22,lsl 3] = x8
         x22 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08020a70: // orphan
         // CODE XREF from sym.brk_destroy_entry @ 0x8020ae4
         [x20 + 0x38] = xzr

    loc_0x08020a74: // orphan
         x8 = [x20 + 8]           // 0xdb // 219
         x9 = [x8]                // 0xcf // 207
         if (x9 == x20)
         b.ne 0x8020abc           // likely

    loc_0x08020a84: // orphan
         x9 = [x20]               // 0xdb // 219
         x10 = [x9 + 8]           // 0xd0 // 208
         if (x10 == x20)
         b.ne 0x8020abc           // likely

    loc_0x08020a94: // orphan
         [x9 + 8] = x8
         [x8] = x9

    loc_0x08020a9c: // orphan
         // CODE XREF from sym.brk_destroy_entry @ 0x8020ac4
         x8 = x23 + 0x22
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x20] = (x23,2)
         0x8020aa8 ()             // 0x8020aa8(0x0, 0x0, 0x0, 0x0)
         if (x25 == x21)
         x20 = x25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x80209a0           // unlikely

    loc_0x08020ab8: // orphan
         jmp 0x8020ae8

    loc_0x08020abc: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8020ac0 ()             // 0x8020ac0(0x0, 0x0, 0x0, 0x0)
         jmp 0x8020a9c

    loc_0x08020ac8: // orphan
         x8 = [var_38h]           // 0x4 // 4
         if (x8 == x0)
         b.eq 0x8020a70           // likely

    loc_0x08020ad4: // orphan
         if (x22 == 8)
         b.ne 0x8020b24           // likely

    loc_0x08020adc: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8020ae0 ()             // 0x8020ae0(0x0, 0x0, 0x0, 0x0)
         jmp 0x8020a70

    loc_0x08020b24: // orphan
         brk 0x5512

    loc_0x08020b28: // orphan
         brk 0x1

}

/* ===== 0x0801ebc0 ===== */
int sym.pfn_valid_1 (int esi, int edx) {
    loc_0x801ebc0:
        // CALL XREF from sym.brk_bp_add @ 0x801e6dc
        x8 = 0x801e000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x801ebec // unlikely
            
    loc_0x801ebec:
        x9 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x801ebf0:
        // CODE XREF from sym.pfn_valid_1 @ 0x801ebe8
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = [x8 + 0x10] // 0xcf // 207
        w10 = w10 + 1
        [x8 + 0x10] = w10
        if !x9 jmp 0x801ec1c // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0801ec14: // orphan
             x10 = [x9]               // 0xd0 // 208 // x23
             tbnz w10,1,0x801ec3c     // unlikely

    loc_0x0801ec1c: // orphan
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x801ec94           // unlikely

    loc_0x0801ec2c: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if x8 jmp 0x801ec80      // likely

    loc_0x0801ec38: // orphan
         jmp 0x801ec98

    loc_0x0801ec3c: // orphan
         tbnz w10,3,0x801ec5c     // unlikely

    loc_0x0801ec40: // orphan
         x9 = [x9 + 8]            // 0xd0 // 208
         if !x9 jmp 0x801ec64     // unlikely

    loc_0x0801ec48: // orphan
         x10 = x0 >> 9            // arg1
         x9 = [x9 + 0x10]         // 0xd0 // 208
         x9 = x9 >> x10
         w19 = w9 & 1
         jmp 0x801ec68

    loc_0x0801ec5c: // orphan
         w19 = 0x1
         jmp 0x801ec68

    loc_0x0801ec64: // orphan
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x0801ec68: // orphan
         // CODE XREFS from sym.pfn_valid_1 @ 0x801ec58, 0x801ec60
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x801ec98           // unlikely

    loc_0x0801ec78: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         if !x8 jmp 0x801ec98     // unlikely

    loc_0x0801ec80: // orphan
         // CODE XREF from sym.pfn_valid_1 @ 0x801ec9c
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x19 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0801ec94: // orphan
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x0801ec98: // orphan
         // CODE XREF from sym.pfn_valid_1 @ 0x801ec38
         0x801ec98 ()             // 0x801ec98(0x0, 0x0, 0x0, 0x0)
         jmp 0x801ec80

}

/* ===== 0x0801ee0c ===== */
int sym.brk_build_clone (int esi, int edx) {
    loc_0x801ee0c:
        // CALL XREFS from sym.brk_bp_add @ 0x801e770, 0x801e8a4
        // CALL XREFS from sym.brk_bp_memwrite @ 0x8021250, 0x8021414
        hint 0x19
        sp = sp - 0x170
        [sp, 0x110] = (x29,2)
        [sp, 0x120] = (x28,2)
        [sp, 0x130] = (x26,2)
        [sp, 0x140] = (x24,2)
        [sp, 0x150] = (x22,2)
        [sp, 0x160] = (x20,2)
        x29 = var_110h
        x8 = [x3 + 0x40] // 0xca // 202 // arg4
        [x29 = xzr
        [sp, 0x88] = (xzr,2)
        [sp, 0x78] = (xzr,2)
        [sp, 0x68] = (xzr,2)
        [sp, 0x58] = (xzr,2)
        [var_50h] = xzr
        if !x8 jmp 0x801f130 // unlikely
            
    loc_0x801f130:
        w24 = ~0x15
         // do {
    loc_0x801f134:
        // CODE XREFS from sym.brk_build_clone @ 0x801f160, 0x801f37c
        w0 = w24      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_170h
        hint 0x1d
        0x0801f158
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801ee50
    loc_0x801ee5c:
        if !x0 jmp 0x801f130 // likely
    loc_0x801ee60:
        ubfx x11,x1,0x1e, 9 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x12 = [x0 + 0x70] // 0xc7 // 199 // arg1
        ubfx x10,x1,0x15, 9 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = x11 << 3
        [x29 = x12
        x13 = [x12 + x8] // 0xcf000000d3 // 889058230483
        [x29 = x13
        x9 = [x12 + x8] // 0xcf000000d3 // 889058230483
        x8 = 0x801e000
        [x29 = x13
        x8 = [x8]     // 0xcf // 207
        [x29 = x11
        x9 = x9 & 0x7ffffff000
        x9 = x9 - x8
        x9 = x9 | 0xffffff8000000000
        x14 = [x9 + x10,lsl 3] // 0xd1000000d0 // 897648165072
        w14 = ~w14
        if ((x14 & 3) == 0)
        b.ne 0x801f15c // likely
            
    loc_0x801f15c:
        w24 = ~0xd
        jmp 0x801f134
    loc_0x0801eeb0: // orphan
             x13 = x29 - 0x48
             x14 = x29 - 0x60
             x13 = var_8h
             [x14, 8]! = (xzr,2)
             [x13, 8] = (xzr,2)
             [x13] = xzr
             x11 = [x12 + x11,lsl 3]  // 0xd2000000d3 // 901943132371 // x23
             x12 = x11 & 0x7ffffff000 // x23
             [x29 = x11
             x12 = x12 - x8           // x23
             x11 = x12 | 0xffffff8000000000
             x12 = x10 << 3
             [x29 = x11
             x13 = [x9 + x12]         // 0xd3000000d0 // 906238099664 // x23
             [x29 = x13
             x11 = [x9 + x12]         // 0xd3000000d0 // 906238099664 // x23
             [x29 = x13
             [x29 = x10
             x11 = x11 & 0x7ffffff000 // x23
             x14 = x11 - x8           // x23
             ubfx x11,x21,0xc, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x14 = x14 | 0xffffff8000000000
             x13 = x14 + x11,lsl 3
             b.eq 0x801f15c           // unlikely

    loc_0x0801ef10: // orphan
         x10 = [x9 + x12]         // 0xd3000000d0 // 906238099664 // x23
         x20 = x2                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         x24 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w28 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x26 = x2 + 0xb0          // arg3
         [x29 = x10
         x10 = x10 & 0x7ffffff000 // x23
         x23 = x2 + 0xa0          // arg3
         x9 = [x9 + x12]          // 0xd3000000d0 // 906238099664 // x23
         x10 = x10 - x8           // x23
         x8 = x8 >> 0xc
         x10 = x10 | 0xffffff8000000000
         x12 = xzr | 0xfffffffe00000000
         x27 = var_78h
         ubfx x9,x9,0xc, 0x24     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x38] = (x10,2)
         x22 = var_58h
         [x29 = x10
         x9 = x9 << 6
         x10 = [x13]              // 0xd4 // 212 // x23
         x8 = x9 - x8,lsl 6
         w9 = 0x28                // '('
         [var_50h] = x10
         [x19 + 0x28] = w11
         x8 = x8 + x12
         x8 = x8 | x9
         [var_sp_48h] = x8

    loc_0x0801ef80: // orphan
         if !x24 jmp 0x801f010    // likely

    loc_0x0801ef84: // orphan
         x10 = x24 - 1
         x8 = x10 << 3
         if (x8 == 0x17)
         b.hi 0x801f680           // likely

    loc_0x0801ef94: // orphan
         w9 = [x20 + 0x790]       // 0xdb // 219
         if (w9 == 1)
         b.lt 0x801f044           // likely

    loc_0x0801efa0: // orphan
         x11 = x29 - 0x78
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x11 + x10,lsl 3]  // 0xd1000000d2 // 897648165074
         x11 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801efc4

    loc_0x0801efb4: // orphan
         x8 = x8 + 1
         x11 = x11 + 0x38
         if (x9 == x8)
         b.eq 0x801f044           // unlikely

    loc_0x0801efc4: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x801efb0
         if (x8 == 0x21)
         b.eq 0x801f664           // unlikely

    loc_0x0801efcc: // orphan
         ldur w12,[x11,-0x10]     // 0xd2 // 210
         if (x24 == x12)
         b.ne 0x801efb4           // likely

    loc_0x0801efd8: // orphan
         x12 = [x11]              // 0xd2 // 210 // x23
         if (x12 == x25)
         b.ne 0x801efb4           // likely

    loc_0x0801efe4: // orphan
         ldur x12,[x11,-8]        // 0xd2 // 210
         if (x12 == x10)
         b.ne 0x801efb4           // likely

    loc_0x0801eff0: // orphan
         w9 = 0x38                // '8'
         madd x9,x8,x9, x20
         if (x9 != 0x90)
         b.eq 0x801f044           // unlikely

    loc_0x0801f000: // orphan
         // XREFS(39)
         w9 = 0x38                // '8'
         madd x8,x8,x9, x20
         x25 = [x8 + 0x98]        // 0xcf // 207
         jmp 0x801f0c0

    loc_0x0801f010: // orphan
         w9 = [x20 + 0x790]       // 0xdb // 219
         if (w9 == 1)
         b.lt 0x801f044           // likely

    loc_0x0801f01c: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801f024: // orphan
         if (x8 == 0x20)
         b.eq 0x801f664           // unlikely

    loc_0x0801f02c: // orphan
         w11 = [x10]              // 0xd1 // 209 // x23
         if !w11 jmp 0x801eff0    // unlikely

    loc_0x0801f034: // orphan
         x8 = x8 + 1
         x10 = x10 + 0x38
         if (x9 == x8)
         b.ne 0x801f024           // likely

    loc_0x0801f044: // orphan
         if (w28 == 3)
         jmp ifgt 0x801f164       // unlikely

    loc_0x0801f04c: // orphan
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg4
         0x801f060 ()             // 0x801f060(0xcc0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x801f180     // unlikely

    loc_0x0801f068: // orphan
         if (w28 == 3)
         b.hi 0x801f664           // unlikely

    loc_0x0801f070: // orphan
         x8 = w28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x8 << 3
         if (x9 == 0x20)
         b.hi 0x801f680           // unlikely

    loc_0x0801f080: // orphan
         x10 = x0 << 6
         w11 = 0xff               // '\xff'
         [x27 + x8,lsl 3] = x0
         jmp 0x801f09c

    loc_0x0801f09c: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x801f08c
         if (x9 == 0x20)
         b.hi 0x801f680           // unlikely

    loc_0x0801f0a4: // orphan
         if (w28 == 4)
         b.eq 0x801f680           // unlikely

    loc_0x0801f0ac: // orphan
         x9 = x10 & 0xfffffffffff000
         x9 = x9 | x11,lsl 56
         [x22 + x8,lsl 3] = x9
         if !x9 jmp 0x801f178     // likely

    loc_0x0801f0bc: // orphan
         w28 = w28 + 1

    loc_0x0801f0c0: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x801f00c
         x24 = x24 + 1
         if (x24 == 3)
         b.ne 0x801ef80           // likely

    loc_0x0801f0cc: // orphan
         x23 = x20 + 0x7b0
         w27 = [x20 + 0x790]      // 0xdb // 219
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801f0d8 ()             // 0x801f0d8(0x7b0, 0x0, 0x0, 0x0)
         0x801f0dc ()             // 0x801f0dc(0x7b0, 0x0, 0x0, 0x0)
         x22 = [var_sp_48h]       // 4
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801f0e8 ()             // 0x801f0e8(0xfffffffe00200ce8, 0x0, 0x0, 0x0)
         x8 = [var_40h]           // 4
         x9 = [x8]                // 0xcf // 207
         x8 = 0x1
         x8 = 0x400
         if ((x9 & x8) == 0)
         [var_50h] = x9
         [x19 + 0x30] = x9
         b.eq 0x801f1cc           // unlikely

    loc_0x0801f10c: // orphan
         x8 = 0x801f000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x801f194     // unlikely

    loc_0x0801f118: // orphan
         ubfx x10,x9,0x22, 0xe    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + x10,lsl 3]    // 0xd1000000cf // 897648165071
         if !x8 jmp 0x801f194     // likely

    loc_0x0801f124: // orphan
         ubfx x10,x9,0x1b, 7      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x8 + x10,lsl 5
         jmp 0x801f198

    loc_0x0801f164: // orphan
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = ~0x1b
         if (w25 == w28)
         b.lt 0x801f1f4           // unlikely

    loc_0x0801f174: // orphan
         jmp 0x801f218

    loc_0x0801f178: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801f17c ()             // 0x801f17c(0x0, 0x0, 0x0, 0x0)

    loc_0x0801f180: // orphan
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = ~0xb
         if (w25 == w28)
         b.lt 0x801f1f4           // unlikely

    loc_0x0801f190: // orphan
         jmp 0x801f218

    loc_0x0801f194: // orphan
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801f198: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x801f12c
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = [x8 + 0x10]        // 0xcf // 207
         w11 = w11 + 1
         [x8 + 0x10] = w11
         if !x10 jmp 0x801f1b4    // likely

    loc_0x0801f1ac: // orphan
         x11 = [x10]              // 0xd1 // 209
         tbnz w11,1,0x801f240     // unlikely

    loc_0x0801f1b4: // orphan
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x801f668           // unlikely

    loc_0x0801f1c4: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         if !x8 jmp 0x801f668     // unlikely

    loc_0x0801f1cc: // orphan
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801f1d0: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x801f67c
         w24 = ~0xd

    loc_0x0801f1d4: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x801f600, 0x801f660
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801f1d8 ()             // 0x801f1d8(0x0, 0x0, 0x0, 0x0)
         0x801f1dc ()             // 0x801f1dc(0x0, 0x0, 0x0, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801f1e4 ()             // 0x801f1e4(0x8033000, 0x0, 0x0, 0x0)
         dsb ishst
         if (w25 == w28)
         b.ge 0x801f218           // likely

    loc_0x0801f1f4: // orphan
         x22 = var_78h

    loc_0x0801f1f8: // orphan
         w28 = w28 - 1
         if (w28 == 3)
         b.hi 0x801f664           // likely

    loc_0x0801f204: // orphan
         x0 = [x22 + w28,uxtw 3]  // 0xc4000000dd // 841813590237 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801f20c ()             // 0x801f20c(0x0, 0x0, 0x0, 0x0)
         if (w25 == w28)
         b.lt 0x801f1f8           // unlikely

    loc_0x0801f218: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x801f174, 0x801f190
         if w24 jmp 0x801f134     // unlikely

    loc_0x0801f21c: // orphan
         x8 = 0x801f000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x801f134     // unlikely

    loc_0x0801f228: // orphan
         x8 = [x20 + 0x20]        // 0xdb // 219
         w1 = [x20 + 0x10]        // 0xdb // 219
         w4 = [x19 + 0x28]        // 0xda // 218
         if x8 jmp 0x801f260      // likely

    loc_0x0801f238: // orphan
         x5 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801f280

    loc_0x0801f240: // orphan
         tbnz w11,3,0x801f370     // unlikely

    loc_0x0801f244: // orphan
         x10 = [x10 + 8]          // 0xd1 // 209
         if !x10 jmp 0x801f380    // unlikely

    loc_0x0801f24c: // orphan
         x9 = x9 >> 0x15
         x10 = [x10 + 0x10]       // 0xd1 // 209
         x9 = x10 >> x9
         w22 = w9 & 1
         jmp 0x801f384

    loc_0x0801f260: // orphan
         x9 = 0x801f000
         x10 = xzr | 0xfffffffe00000000
         x9 = [x9]                // 0xd0 // 208
         x9 = x9 >> 6
         x9 = x9 & 0x3ffffffffffffc0
         x9 = x9 - x10
         x8 = x8 + x9
         x5 = x8 << 6

    loc_0x0801f280: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x801f23c
         w10 = [x20 + 0x790]      // 0xdb // 219
         x6 = [x19 + 0x58]        // 0xda // 218
         x0 = 0x801f000
         x0 = x0 + 0              // int64_t arg1
         x7 = [x20 + 0x88]        // 0xdb // 219
         x8 = [x19 + 0x30]        // 0xda // 218
         w9 = [x20 + 0x7a8]       // 0xdb // 219
         [var_0h_8] = w10
         w10 = 0x8
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         w3 = 0x3
         [var_0h_9] = w10
         [var_0h_10] = w9
         [sp] = x8
         0x801f2b8 ()             // 0x801f2b8(0x801f000, 0x0, 0x0, 0x3)
         w8 = [x20 + 0x790]       // 0xdb // 219
         if (w8 == 1)
         b.lt 0x801f378           // likely

    loc_0x0801f2c8: // orphan
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = x20 + 0xc0
         x21 = 0x801f000
         x21 = x21 + 0
         jmp 0x801f330

    loc_0x0801f2dc: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801f2e0: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x801f364, 0x801f36c
         x8 = 0x801f000
         ldur x9,[x23,-0x30]      // 0xde // 222
         x10 = xzr | 0xfffffffe00000000
         x8 = [x8]                // 0xcf // 207
         (x6, 2) = 3
         ldur w4,[x23,-0x20]      // 0xde // 222
         x7 = [x23]               // 0xde // 222
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x8 = x8 >> 6
         x8 = x8 & 0x3ffffffffffffc0
         x8 = x8 - x10
         x8 = x9 + x8
         x3 = x8 << 6             // int64_t arg4
         0x801f314 ()             // 0x801f314(0x0, 0x0, 0x0, 0x33b25997c2805880)
         w8 = [x20 + 0x790]       // 0xdb // 219

    loc_0x0801f31c: // orphan
         x22 = x22 + 1
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = x23 + 0x38
         if (x22 == w8)
         b.ge 0x801f134           // likely

    loc_0x0801f330: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x801f2d8
         if (x22 == 0x21)
         b.eq 0x801f664           // unlikely

    loc_0x0801f338: // orphan
         ldur x2,[x23,-0x28]      // 0xde // 222
         x9 = [x19 + 0x60]        // 0xda // 218
         if (x9 == x2)
         b.eq 0x801f2dc           // unlikely

    loc_0x0801f348: // orphan
         x9 = [x19 + 0x68]        // 0xda // 218
         if (x9 == x2)
         b.eq 0x801f368           // unlikely

    loc_0x0801f354: // orphan
         x9 = [x19 + 0x70]        // 0xda // 218
         if (x9 == x2)
         b.ne 0x801f31c           // likely

    loc_0x0801f360: // orphan
         w1 = 0x2
         jmp 0x801f2e0

    loc_0x0801f368: // orphan
         w1 = 0x1
         jmp 0x801f2e0

    loc_0x0801f370: // orphan
         w22 = 0x1
         jmp 0x801f384

    loc_0x0801f378: // orphan
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801f134

    loc_0x0801f380: // orphan
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801f384: // orphan
         // CODE XREFS from sym.brk_build_clone @ 0x801f25c, 0x801f374
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x801f66c           // unlikely

    loc_0x0801f394: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         if !x8 jmp 0x801f66c     // unlikely

    loc_0x0801f39c: // orphan
         if !w22 jmp 0x801f674    // likely

    loc_0x0801f3a0: // orphan
         x9 = [var_50h]           // 0x4 // 4
         x8 = 0x801f000
         w10 = wzr | 0x3fffffe
         x8 = [x8]                // 0xcf // 207
         x9 = x9 & 0x7ffffff000
         x9 = x9 - x8
         x26 = x9 | 0xffffff8000000000
         if (x10 == x26)
         b.ne 0x801f674           // likely

    loc_0x0801f3c4: // orphan
         x9 = x9 & 0x7fffffffff
         x8 = x9 + x8
         x0 = x8 >> 0xc           // int64_t arg1
         0x801f3d0 ()             // 0x801f3d0(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x801f674     // likely

    loc_0x0801f3d8: // orphan
         x0 = [x19 + 0x40]        // 0xda // 218 // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x1000
         0x801f3e4 ()             // 0x801f3e4(0xffffff00ffffffff, 0x0, 0x1000, 0x0)
         x8 = x21 & 0xfff
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = [x26 + x8]          // 0xcf000000e1 // 889058230497
         x24 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x20 + 0xb0
         x9 = x20 + 0xa0
         [sp, 0x20] = (x9,2)
         [x19 + 0x24] = w8
         jmp 0x801f434

    loc_0x0801f410: // orphan
         w9 = 0x38                // '8'
         madd x8,x8,x9, x20
         x26 = [x8 + 0x98]        // 0xcf // 207

    loc_0x0801f41c: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x801f5ec
         x8 = x19 + x22,lsl 3
         x22 = x22 + 1
         x24 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x22 == 3)
         [x8 + 0x60] = x26
         b.eq 0x801f604           // unlikely

    loc_0x0801f434: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x801f40c
         if !x22 jmp 0x801f4b8    // likely

    loc_0x0801f438: // orphan
         x10 = x22 - 1
         x8 = x10 << 3
         if (x8 == 0x17)
         b.hi 0x801f680           // likely

    loc_0x0801f448: // orphan
         w9 = [x20 + 0x790]       // 0xdb // 219
         if (w9 == 1)
         b.lt 0x801f4ec           // likely

    loc_0x0801f454: // orphan
         x11 = x29 - 0x78
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x11 + x10,lsl 3]  // 0xd1000000d2 // 897648165074
         x11 = [var_28h]          // 0x4 // 4
         jmp 0x801f478

    loc_0x0801f468: // orphan
         x8 = x8 + 1
         x11 = x11 + 0x38
         if (x9 == x8)
         b.eq 0x801f4ec           // unlikely

    loc_0x0801f478: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x801f464
         if (x8 == 0x21)
         b.eq 0x801f664           // unlikely

    loc_0x0801f480: // orphan
         ldur w12,[x11,-0x10]     // 0xd2 // 210
         if (x22 == x12)
         b.ne 0x801f468           // likely

    loc_0x0801f48c: // orphan
         x12 = [x11]              // 0xd2 // 210
         if (x12 == x24)
         b.ne 0x801f468           // unlikely

    loc_0x0801f498: // orphan
         ldur x12,[x11,-8]        // 0xd2 // 210
         if (x12 == x10)
         b.ne 0x801f468           // likely

    loc_0x0801f4a4: // orphan
         w9 = 0x38                // '8'
         madd x9,x8,x9, x20
         if (x9 != 0x90)
         b.ne 0x801f410           // likely

    loc_0x0801f4b4: // orphan
         jmp 0x801f4ec

    loc_0x0801f4b8: // orphan
         w9 = [x20 + 0x790]       // 0xdb // 219
         if (w9 == 1)
         b.lt 0x801f4ec           // likely

    loc_0x0801f4c4: // orphan
         x10 = [var_20h]          // 0x4 // 4
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801f4cc: // orphan
         if (x8 == 0x20)
         b.eq 0x801f664           // unlikely

    loc_0x0801f4d4: // orphan
         w11 = [x10]              // 0xd1 // 209
         if !w11 jmp 0x801f4a4    // likely

    loc_0x0801f4dc: // orphan
         x8 = x8 + 1
         x10 = x10 + 0x38
         if (x9 == x8)
         b.ne 0x801f4cc           // likely

    loc_0x0801f4ec: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x801f4b4
         if (w25 == w28)
         b.ge 0x801f678           // likely

    loc_0x0801f4f4: // orphan
         if (x25 == 3)
         b.hi 0x801f664           // unlikely

    loc_0x0801f4fc: // orphan
         x8 = x25 << 3
         x9 = var_78h
         w2 = 0x1000
         x9 = [x9 + x8]           // 0xcf000000d0 // 889058230480
         [var_40h] = x9
         x9 = var_58h
         x26 = [x9 + x8]          // 0xcf000000d0 // 889058230480
         x8 = x29 - 0x48
         x1 = [x8 + x22,lsl 3]    // 0xdd000000cf // 949187772623 // int64_t arg2
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [var_30h] = x1
         0x801f528 ()             // 0x801f528(0x17ffe1723d800120, -1, 0x1000, 0x0)
         if !x22 jmp 0x801f548    // likely

    loc_0x0801f530: // orphan
         w8 = w22 - 1
         if (w8 == 2)
         b.hi 0x801f680           // likely

    loc_0x0801f53c: // orphan
         x9 = x29 - 0x78
         x8 = [x9 + x8,lsl 3]     // 0xcf000000d0 // 889058230480
         jmp 0x801f54c

    loc_0x0801f548: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801f54c: // orphan
         // CODE XREF from sym.brk_build_clone @ 0x801f544
         w9 = [x20 + 0x790]       // 0xdb // 219
         x0 = [var_40h]           // 4
         x25 = x25 + 1
         if (w9 == 0x1f)
         jmp ifgt 0x801f5f0       // unlikely

    loc_0x0801f560: // orphan
         w10 = w9 + 1
         if (w9 == 0x21)
         [x20 + 0x790] = w10
         b.hs 0x801f664           // unlikely

    loc_0x0801f570: // orphan
         w10 = 0x38               // '8'
         umaddl x9,w9,w10, x20
         [x9, 0x90]! = (x0,2)
         [x9, 0x18] = (x8,2)
         x8 = [var_30h]           // 0x4
         [x9 + 0x10] = w22
         [x9, 0x28] = (x21,2)
         if !x9 jmp 0x801f5f0     // unlikely

    loc_0x0801f590: // orphan
         if w27 jmp 0x801f5a0     // unlikely

    loc_0x0801f594: // orphan
         x8 = x20 + x22,lsl 3
         [x8 + 0x20] = x0
         [x8 + 0x40] = x26

    loc_0x0801f5a0: // orphan
         if !x22 jmp 0x801f41c    // likely

    loc_0x0801f5a4: // orphan
         w8 = w22 - 1
         if (w8 == 2)
         b.hi 0x801f680           // likely

    loc_0x0801f5b0: // orphan
         x9 = 0x801f000
         x10 = xzr | 0xfffffffe00000000
         x8 = x8 << 3
         x9 = [x9]                // 0xd0 // 208
         x11 = x29 - 0x78
         x9 = x9 >> 6
         x9 = x9 & 0x3ffffffffc0
         x9 = x9 - x10
         x10 = x29 - 0x60
         x9 = x0 + x9
         x10 = [x10 + x8]         // 0xcf000000d1 // 889058230481
         x8 = [x11 + x8]          // 0xcf000000d2 // 889058230482
         x9 = x9 >> 6
         bfi x10,x9,0xc, 0x24     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x24 + x8,lsl 3] = x10
         jmp 0x801f41c

    loc_0x0801f5f0: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801f5f4 ()             // 0x801f5f4(0x0, 0x0, 0x0, 0x0)
         x22 = [var_sp_48h]
         w24 = ~0x1b
         jmp 0x801f1d4

    loc_0x0801f604: // orphan
         x22 = [var_sp_48h]
         x11 = [var_38h]          // 0x4
         if w27 jmp 0x801f624     // unlikely

    loc_0x0801f610: // orphan
         (x9, 2) = 3
         w8 = 0x3
         [x20 + 0x88] = x11
         [x20 + 0x60] = w8
         [x20, 0x68] = (x9,2)

    loc_0x0801f624: // orphan
         x0 = [x19 + 0x70]        // 0xda // 218 // int64_t arg1
         w1 = [x19 + 0x28]        // 0xda // 218
         [x19, 0x50] = (x11,2)
         sym.brk_break_contiguous_group_at_kva () // sym.brk_break_contiguous_group_at_kva(0x0, 0x0)
         x8 = [x19 + 0x30]        // 0xda // 218
         x9 = [x19 + 0x48]        // 0xda // 218
         x10 = 0xfff              // '\xff\x0f'
         x10 = 0xffef             // '\xef\xff'
         x11 = [x19 + 0x58]       // 0xda // 218
         x12 = [x19 + 0x28]       // 0xda // 218
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 & x10
         x9 = x9 & 0xfffffffff000
         x8 = x9 | x8
         [x11 + x12,lsl 3] = x8
         jmp 0x801f1d4

    loc_0x0801f664: // orphan
         brk 0x5512

    loc_0x0801f668: // orphan
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801f66c: // orphan
         0x801f66c ()             // 0x801f66c(0x0, 0x0, 0x0, 0x0)
         if w22 jmp 0x801f3a0     // unlikely

    loc_0x0801f674: // orphan
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801f678: // orphan
         x22 = [var_sp_48h]
         jmp 0x801f1d0

    loc_0x0801f680: // orphan
         brk 0x1

}

/* ===== 0x0801ed48 ===== */
int sym.brk_cache_maintenance (int esi, int edx) {
    loc_0x801ed48:
        // XREFS: CALL 0x0801e7b8  CALL 0x0801e8d8  CALL 0x0801eaf4
        // XREFS: CALL 0x080212fc  CALL 0x08021344  CALL 0x08021598
        // XREFS: CALL 0x08021b48  CALL 0x08021c58
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x801e000
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x801ed6c // unlikely
            
    loc_0x801ed6c:
        x8 = 0x801e000
        x1 = x19 + 1,lsl 12
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x801ed88 // unlikely
            
    loc_0x801ed88:
        mrs x8,ctr_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx x9,x8,0x10, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = 0x4
        x8 = x8 & 0xf
        x9 = x11 << x9
        x8 = x11 << x8
        x10 = !x9
        x10 = x10 & x19
        if (x10 == x1)
        b.hs 0x801edc0 // likely
            
    loc_0x801edc0:
        dsb ish
        x9 = !x8
        x9 = x9 & x19
        if (x9 == x1)
        b.hs 0x801ede4 // likely
            
    loc_0x801ede4:
        dsb ish
        0x0801ede8
         // do {
    loc_0x801edec:
        // CODE XREF from sym.brk_cache_maintenance @ 0x801ed84
        x8 = 0x801e000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x801edfc // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0801edf8: // orphan
             blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)

    loc_0x0801edfc: // orphan
         x19 = [var_10h]          // 0x4
         (x29, 2) = 3
         hint 0x1d
         

}

/* ===== 0x0801f684 ===== */
int sym.list_add_tail_2 (int esi, int edx) {
    loc_0x801f684:
        // XREFS: CALL 0x0801e7c4  CALL 0x0801e804  CALL 0x0801e8f4
        // XREFS: CALL 0x08021350  CALL 0x08021384  CALL 0x080215b4
        x2 = x1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x1 = [x1 + 8] // 0xc8 // 200 // arg2
        if (x0 == x2) // arg1
        b.eq 0x801f6b8 // likely
            
    loc_0x801f6b8:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x801f6c4 ()  // 0x801f6c4(0x0, 0x0, 0x0, 0x0)
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        // lr
         // } else {
    loc_0x801f694:
        if (x1 == x0) // arg2
        b.eq 0x801f6b8 // likely
        }
        return eax;
    loc_0x801f69c:
        x8 = [x1]     // 0xc8 // 200 // arg2
        if (x8 == x2)
        b.ne 0x801f6b8 // likely
    loc_0x801f6a8:
        [x2 + 8] = x0 // arg1
        [x0] = (x2,2) // arg2
        [x1] = x0     // arg2
        // lr
         // (break)
}

/* ===== 0x08020360 ===== */
int sym.brk_install_debug_hook (int esi, int edx) {
    loc_0x8020360:
        // CALL XREF from sym.brk_bp_add @ 0x801e814
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8020000
        w8 = (byte) [x19] // 0xda // 218
        tbz w8,0,0x8020384 // unlikely
            
    loc_0x8020384:
        x8 = 0x8020000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x80203c8 // unlikely
            
    loc_0x80203c8:
        w0 = ~0x5
         // do {
    loc_0x80203cc:
        // CODE XREFS from sym.brk_install_debug_hook @ 0x8020380, 0x80203c4
        x19 = [var_10h] // 0x4
        (x29, 2) = 3
        hint 0x1d
        0x080203d8
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x080203dc ===== */
int sym.brk_install_switch_hook (int esi, int edx) {
    loc_0x80203dc:
        // CALL XREF from sym.brk_bp_add @ 0x801e820
        // CALL XREF from sym.brk_bp_memwrite @ 0x8021394
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = 0x8020000
        w8 = (byte) [x21] // 0xdc // 220
        tbz w8,0,0x8020404 // likely
            
    loc_0x8020404:
        x0 = 0x8020000
        x0 = x0 + 0   // int64_t arg1
        0x802040c ()  // 0x802040c(0x8020000, 0x0, 0x0, 0x0)
        if !x0 jmp 0x802045c // unlikely
            
    loc_0x802045c:
        x0 = 0x8020000
        x0 = x0 + 0   // int64_t arg1
        0x8020464 ()  // "3" // 0x8020464(0x8020000, 0x0, 0x0, 0x0)
        w19 = ~0x1
        jmp 0x8020444
         // do {
    loc_0x8020444:
        // CODE XREFS from sym.brk_install_switch_hook @ 0x8020400, 0x802046c, 0x8020484
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x21 = [var_10h] // 0x4
        (x29, 2) = 3
        hint 0x1d
        0x08020458
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0802043c: // orphan
             w8 = 0x1
             [x21] = (byte) w8

    loc_0x08020470: // orphan
         x0 = 0x8020000
         x0 = x0 + 0              // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8020480 ()             // 0x8020480(0x8020000, 0x0, 0x0, 0x0)
         jmp 0x8020444

}

/* ===== 0x080204f0 ===== */
int sym.list_del (int esi, int edx) {
    loc_0x80204f0:
        // CALL XREF from sym.brk_bp_add @ 0x801e848
        // CALL XREF from sym.brk_bp_memwrite @ 0x80213bc
        // CALL XREFS from sym.brk_bp_del @ 0x8021abc, 0x8021b8c, 0x8021c70
        x8 = [x0 + 8] // 0xc7 // 199 // arg1
        x9 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x10 = [x8]    // 0xcf // 207
        if (x10 == x0) // arg1
        b.ne 0x8020534 // likely
            
    loc_0x8020534:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x9       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8020544 ()  // 0x8020544(0x0, 0x0, 0x0, 0x0)
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        jmp 0x802051c
         // do {
    loc_0x802051c:
        // CODE XREF from sym.list_del @ 0x8020550
        x8 = 0x100
        w10 = 0x22    // '\"'
        x8 = 0xdead   // '\xad\xde'
        x10 = x8 | x10
        [x9] = (x8,2)
        // lr
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8020504
    loc_0x8020514:
        [x10 + 8] = x8
        [x8] = x10
}

/* ===== 0x08020554 ===== */
int sym.brk_quiesce_entry (int esi, int edx) {
    loc_0x8020554:
        // CALL XREF from sym.brk_bp_add @ 0x801e85c
        // CALL XREF from sym.brk_bp_memwrite @ 0x80213d0
        // CALL XREF from sym.brk_bp_del @ 0x8021890
        // CALL XREF from sym.brk_bp_clear_all @ 0x8022130
        hint 0x19
        sp = sp - 0x60
        [sp, 0x30] = (x29,2)
        [var_40h] = x21
        [sp, 0x50] = (x20,2)
        x29 = var_30h
        x20 = 0x8020000
        x20 = x20 + 0
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x802057c ()  // 0x802057c(0x8020000, 0x0, 0x0, 0x0)
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
        w8 = 0x1
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        [x19 + 0x7f0] = (byte) wzr
        [x19 + 0x7e0] = (byte) w8
        0x8020594 ()  // 0x8020594(0x8020000, 0x8020000, 0x0, 0x0)
        if !x19 jmp 0x8020644 // likely
            
    loc_0x8020644:
        if !x19 jmp 0x802070c // likely
            
    loc_0x802070c:
        w21 = 0x1
        w8 = [x19 + 0x7b4] // 0xda // 218
        if !w8 jmp 0x80206d8 // unlikely
            
    loc_0x80206d8:
        w8 = [x19 + 0x7b8] // 0xda // 218
        if w8 jmp 0x8020718 // likely
    loc_0x80206e0:
        w8 = [x19 + 0x7bc] // 0xda // 218
        if w8 jmp 0x8020718 // likely
    loc_0x80206e8:
        tbnz w21,0,0x80206f4 // unlikely
            
    loc_0x80206f4:
        // CODE XREF from sym.brk_quiesce_entry @ 0x8020774
        (x20, 2) = 3
        x21 = [var_40h]
        (x29, 2) = 3
        sp = arg_60h
        hint 0x1d
        0x08020708
         // } else {
    loc_0x80206ec:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        sym.brk_call_all_cpus () // sym.brk_call_all_cpus(0x0)
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x802059c
    loc_0x80205a8:
        x20 = [x19 + 0x18] // 0xda // 218
        if !x20 jmp 0x8020648 // likely
    loc_0x80205b0:
        w8 = [x19 + 0x790] // 0xda // 218
        if (w8 == 1)
        b.lt 0x8020648 // unlikely
    loc_0x80205bc:
        0x080205bc
         // do {
    loc_0x80205c0:
        // CODE XREF from fcn.08020780 @ 0x8020784
        x0 = x20 + 0x90 // int64_t arg1
        0x80205c4 ()  // 0x80205c4(0x90, 0x0, 0x0, 0x0)
        0x080205c8
         // } while (?);
        }
        return eax;
    loc_0x080205cc: // orphan
             // CODE XREF from fcn.08020794 @ 0x8020798
             x8 = [x19 + 0x798]       // 0xda // 218
             x21 = x19 + 0x798
             x1 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             if (x8 == x21)
             b.eq 0x80205e8           // unlikely

    loc_0x080205e0: // orphan
         if !x8 jmp 0x80205e8     // likely

    loc_0x080205e4: // orphan
         x1 = [x8 + 0x18]         // 0xcf // 207

    loc_0x080205e8: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_sync_clone_tree () // sym.brk_sync_clone_tree(0x0, 0x0, 0x0)
         x8 = [x19 + 0x18]        // 0xda // 218
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x080205fc: // orphan
         // CODE XREF from fcn.080207a8 @ 0x80207b0
         x0 = x8 + 0x90           // int64_t arg1
         0x8020600 ()             // 0x8020600(0x90, 0x0, 0x0, 0x0)
         x8 = 0x8020000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x8020648     // unlikely

    loc_0x08020610: // orphan
         w1 = [x19 + 0x10]        // 0xda // 218
         x8 = [x19 + 0x798]       // 0xda // 218
         x2 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x8 == x21)
         b.eq 0x802062c           // unlikely

    loc_0x08020624: // orphan
         if !x8 jmp 0x802062c     // likely

    loc_0x08020628: // orphan
         x2 = [x8 + 0x18]         // 0xcf // 207

    loc_0x0802062c: // orphan
         w3 = [x19 + 0x7a8]       // 0xda // 218
         x0 = 0x8020000
         x0 = x0 + 0              // int64_t arg1
         w4 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802063c ()             // 0x802063c(0x8020000, 0x0, 0x0, 0x0)
         jmp 0x8020648

    loc_0x0802067c: // orphan
         x0 = var_8h              // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x20] = (xzr,2)
         [sp, 0x10] = (xzr,2)
         [var_8h] = xzr
         0x8020690 ()             // 0x8020690(0x178008, 0x0, 0x0, 0x0)
         x20 = x19 + 0x7c0

    loc_0x08020698: // orphan
         // CODE XREF from sym.brk_quiesce_entry @ 0x80206b4
         x1 = var_8h              // int64_t arg_60h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x2
         0x80206a4 ()             // 0x80206a4(0x0, 0x178008, 0x2, 0x0)
         w8 = [x19 + 0x7b8]       // 0xda // 218
         if !w8 jmp 0x80206b8     // unlikely

    loc_0x080206b0: // orphan
         0x80206b0 ()             // 0x80206b0(0x0, 0x0, 0x0, 0x0)
         jmp 0x8020698

    loc_0x080206b8: // orphan
         x1 = var_8h              // int64_t arg_60h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80206c0 ()             // 0x80206c0(0x0, 0x178008, 0x0, 0x0)

    loc_0x080206c4: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_call_all_cpus () // sym.brk_call_all_cpus(0x0)
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = [x19 + 0x7b4]       // 0xda // 218
         if w8 jmp 0x8020718      // likely

    loc_0x08020738: // orphan
         0x8020738 ()             // 0x8020738(0x0, 0x0, 0x0, 0x0)

    loc_0x0802073c: // orphan
         // CODE XREF from sym.brk_quiesce_entry @ 0x8020734
         x1 = var_8h              // int64_t arg_60h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x2
         0x8020748 ()             // 0x8020748(0x0, 0x178008, 0x2, 0x0)
         w8 = [x19 + 0x7b4]       // 0xda // 218
         if w8 jmp 0x8020738      // likely

    loc_0x08020754: // orphan
         w8 = [x19 + 0x7b8]       // 0xda // 218
         if w8 jmp 0x8020738      // likely

    loc_0x0802075c: // orphan
         w8 = [x19 + 0x7bc]       // 0xda // 218
         if w8 jmp 0x8020738      // likely

    loc_0x08020764: // orphan
         x1 = var_8h              // int64_t arg_60h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802076c ()             // 0x802076c(0x0, 0x178008, 0x0, 0x0)
         tbz w21,0,0x80206ec      // likely

    loc_0x08020774: // orphan
         jmp 0x80206f4

}

/* ===== 0x080207b4 ===== */
int sym.brk_uninstall_switch_hook (int esi, int edx) {
    loc_0x80207b4:
        // CALL XREF from sym.brk_bp_add @ 0x801e868
        // CALL XREF from sym.brk_bp_memwrite @ 0x80213dc
        // CALL XREF from sym.brk_bp_del @ 0x8021a0c
        // CALL XREF from sym.brk_bp_clear_all @ 0x80220dc
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8020000
        w8 = (byte) [x19] // 0xda // 218
        if (w8 == 1)
        b.ne 0x8020824 // likely
            
    loc_0x8020824:
        // CODE XREF from sym.brk_uninstall_switch_hook @ 0x8020854
        x19 = [var_10h] // 0x4
        (x29, 2) = 3
        hint 0x1d
        0x08020830
         // } else {
    loc_0x80207d4:
        x0 = 0x8020000
        x0 = x0 + 0
        0x80207dc ()  // 0x80207dc(0x8020000, 0x0, 0x0, 0x0)
        if w0 jmp 0x8020834 // likely
        }
        return eax;
    loc_0x80207e4:
        x8 = 0x8020000
        [x19] = (byte) wzr
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x80207f8 // unlikely
            
    loc_0x80207f8:
        x19 = 0x8020000
        w8 = [x19]    // 0xda // 218
        if !w8 jmp 0x8020814 // unlikely
    loc_0x8020814:
        x0 = 0x8020000
        x0 = x0 + 0
        0x802081c ()  // 0x802081c(0x8020000, 0x0, 0x0, 0x0)
        if w0 jmp 0x8020844 // likely
            
    loc_0x8020844:
        w1 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8020000
        x0 = x0 + 0
         // do {
    loc_0x8020850:
        // CODE XREF from sym.brk_uninstall_switch_hook @ 0x8020840
        0x8020850 ()  // 0x8020850(0x0, 0x0, 0x0, 0x0)
        jmp 0x8020824
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08020804: // orphan
             w0 = 0x1
             0x8020808 ()             // 0x8020808(0x1, 0x0, 0x0, 0x0)
             w8 = [x19]               // 0xda // 218
             if w8 jmp 0x8020804      // unlikely

    loc_0x08020834: // orphan
         w1 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x8020000
         x0 = x0 + 0
         jmp 0x8020850

}

/* ===== 0x08020858 ===== */
int sym.brk_uninstall_debug_hook (int esi, int edx) {
    loc_0x8020858:
        // CALL XREF from sym.brk_bp_add @ 0x801e88c
        // CALL XREF from sym.brk_bp_del @ 0x8021a30
        // CALL XREF from sym.brk_bp_clear_all @ 0x8022100
        // CALL XREF from sym.brk_bp_exit @ 0x8022a90
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8020000
        w8 = (byte) [x19] // 0xda // 218
        if (w8 == 1)
        b.ne 0x80208d0 // likely
            
    loc_0x80208d0:
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x080208e0
         // } else {
    loc_0x802087c:
        x8 = 0x8020000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8020894 // unlikely
        }
        return eax;
    loc_0x8020888:
        x0 = 0x8020000
        x0 = x0 + 0
        blr x8        // xzr(0x8020000, 0x0, 0x0, 0x0)
         // do {
    loc_0x8020894:
        x20 = 0x8020000
        w8 = [x20]    // 0xdb // 219
        if !w8 jmp 0x80208c4 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x80208a0:
        w21 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w22 = 0x1387  // '\x87\x13'
         // do {
    loc_0x80208a8:
        w0 = 0x1
        0x80208ac ()  // 0x80208ac(0x1, 0x0, 0x0, 0x0)
        w8 = [x20]    // 0xdb // 219
        if !w8 jmp 0x80208c4 // likely
         // } while (?);
        }
        return eax;
    loc_0x80208b8:
        if (w21 == w22)
        w21 = w21 + 1
        b.lo 0x80208a8 // unlikely
    loc_0x80208c4:
        w8 = [x20]    // 0xdb // 219
        if w8 jmp 0x80208e4 // unlikely
            
    loc_0x80208e4:
        w1 = [x20]    // 0xdb // 219
        x0 = 0x8020000
        x0 = x0 + 0   // int64_t arg1
        0x80208f0 ()  // 0x80208f0(0x8020000, 0x0, 0x0, 0x0)
        jmp 0x80208cc
    loc_0x080208cc: // orphan
             // CODE XREF from sym.brk_uninstall_debug_hook @ 0x80208f4
             [x19] = (byte) wzr

}

/* ===== 0x0801eca0 ===== */
int sym.brk_flush_tlb_group (int esi, int edx) {
    loc_0x801eca0:
        // XREFS: CALL 0x0801e8c8  CALL 0x0801eae4  CALL 0x080212f4
        // XREFS: CALL 0x08021330  CALL 0x08021584  CALL 0x08021a9c
        // XREFS: CALL 0x08021b40  CALL 0x08021c4c
        x8 = x0 >> 0xc // arg1
        dsb ishst
        w10 = 0x5
        x8 = x8 & 0xffffffffff0
        tlbi vaae1is,x8
        x9 = x8 | 1
        tlbi vaae1is,x9
        x9 = x8 | 2
        tlbi vaae1is,x9
        x9 = x8 | 3
        tlbi vaae1is,x9
        x9 = x8 | 4
        tlbi vaae1is,x9
        x9 = x8 | x10
        tlbi vaae1is,x9
        w10 = 0x9
        x9 = x8 | 6
        tlbi vaae1is,x9
        x9 = x8 | 7
        tlbi vaae1is,x9
        x9 = x8 | 8
        tlbi vaae1is,x9
        x9 = x8 | x10
        w10 = 0xa
        tlbi vaae1is,x9
        x9 = x8 | x10
        w10 = 0xb
        tlbi vaae1is,x9
        x9 = x8 | x10
        tlbi vaae1is,x9
        w10 = 0xd
        x9 = x8 | 0xc
        tlbi vaae1is,x9
        x9 = x8 | x10
        tlbi vaae1is,x9
        x9 = x8 | 0xe
        tlbi vaae1is,x9
        x8 = x8 | 0xf
        tlbi vaae1is,x8
        dsb ish
        0x0801ed40
        // lr
         // (break)
}

/* ===== 0x0801f6d4 ===== */
int sym.brk_resume_clone (int esi, int edx) {
    loc_0x801f6d4:
        // CALL XREFS from sym.brk_bp_add @ 0x801e950, 0x801ea9c
        // CALL XREFS from sym.brk_bp_memwrite @ 0x802151c, 0x80215e4
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x801f000
        x0 = x0 + 0   // int64_t arg1
        0x801f6f0 ()  // 0x801f6f0(0x801f000, 0x0, 0x0, 0x0)
        w8 = (byte) [x19 + 0x7f0] // 0xda // 218
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !w8 jmp 0x801f704 // likely
            
    loc_0x801f704:
        x0 = 0x801f000
        x0 = x0 + 0   // int64_t arg1
        0x801f70c ()  // 0x801f70c(0x801f000, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4
        (x29, 2) = 3
        hint 0x1d
        0x0801f71c
         // } else {
    loc_0x801f700:
        [x19 + 0x7e0] = (byte) wzr
        }
        return eax;
}

/* ===== 0x0801f720 ===== */
int sym.brk_sync_clone_tree (int esi, int edx) {
    loc_0x801f720:
        // CALL XREF from sym.brk_bp_add @ 0x801e970
        // CALL XREF from sym.brk_quiesce_entry @ 0x80205ec
        // CALL XREF from sym.brk_bp_memwrite @ 0x8021604
        // CALL XREF from sym.brk_switch_to_hook @ 0x8035e68
        // CALL XREF from sym.brk_mm_fault_ret @ 0x80363a8
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x270
        x8 = [x0 + 0x18] // 0xc7 // 199 // arg1
        [x29, -0x70] = (xzr,2)
        [x29, -0x80] = (xzr,2)
        [sp, 0x1e0] = (xzr,2)
        [sp, 0x1d0] = (xzr,2)
        [sp, 0x1c0] = (xzr,2)
        [sp, 0x1b0] = (xzr,2)
        [sp, 0x1a0] = (xzr,2)
        [sp, 0x190] = (xzr,2)
        [sp, 0x180] = (xzr,2)
        [sp, 0x170] = (xzr,2)
        [sp, 0x160] = (xzr,2)
        [sp, 0x150] = (xzr,2)
        [sp, 0x140] = (xzr,2)
        [sp, 0x130] = (xzr,2)
        [sp, 0x120] = (xzr,2)
        [sp, 0x110] = (xzr,2)
        [sp, 0x100] = (xzr,2)
        [sp, 0xf0] = (xzr,2)
        [sp, 0xe0] = (xzr,2)
        [sp, 0xd0] = (xzr,2)
        [sp, 0xc0] = (xzr,2)
        [sp, 0xb0] = (xzr,2)
        [sp, 0xa0] = (xzr,2)
        [sp, 0x90] = (xzr,2)
        [sp, 0x80] = (xzr,2)
        [sp, 0x70] = (xzr,2)
        if !x8 jmp 0x801f7f8 // likely
            
    loc_0x801f7f8:
        w25 = ~0x15
        jmp 0x801fe60
         // do {
    loc_0x801fe60:
        // CODE XREFS from sym.brk_sync_clone_tree @ 0x801f7fc, 0x8020328, 0x8020330
        w0 = w25      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = arg_270h
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0801fe84
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801f7b4
    loc_0x801f7c4:
        x9 = x8 << 6
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x24 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x9 - x8,lsl 3
         // do {
    loc_0x801f7d4:
        if (x24 == 0x700)
        b.eq 0x8020358 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x801f7dc:
        x9 = x19 + x24
        w10 = [x9 + 0xa0] // 0xd0 // 208
        if !w10 jmp 0x801f800 // likely
            
    loc_0x801f800:
        x21 = x9 + 0x90
        b.eq 0x801fe5c // unlikely
            
    loc_0x801fe5c:
        // CODE XREF from sym.brk_sync_clone_tree @ 0x801f7f4
        w25 = ~0xd
    loc_0x0801f7e8: // orphan
             x24 = x24 + 0x38
             if (x8 == x24)
             b.ne 0x801f7d4           // likely

    loc_0x0801f7f4: // orphan
         jmp 0x801fe5c

    loc_0x0801f808: // orphan
         x26 = x19 + x24
         x8 = [x26 + 0x98]        // 0xe1 // 225
         if !x8 jmp 0x801fe5c     // likely

    loc_0x0801f814: // orphan
         x23 = x19 + 0x7b0
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801f81c ()             // 0x801f81c(0x7b0, 0x0, 0x0, 0x0)
         0x801f820 ()             // 0x801f820(0x7b0, 0x0, 0x0, 0x0)
         w8 = [x19 + 0x790]       // 0xda // 218
         if (w8 == 1)
         b.lt 0x801fea4           // unlikely

    loc_0x0801f830: // orphan
         [sp, 0x20] = (x21,2)
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = x19 + 0x798
         x8 = x19 + x24
         x23 = 0x801f000
         x23 = x23 + 0
         w25 = 0x38               // '8'
         x12 = var_f0h
         [sp, 0x48] = (xzr,2)
         [var_44h] = wzr
         [sp, 8] = (x8,2)
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_60h] = x8
         [var_0h] = x20
         jmp 0x801f88c

    loc_0x0801f870: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x801fe1c
         x21 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = 0x38               // '8'
         x12 = var_f0h

    loc_0x0801f87c: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x801fe58
         x8 = [x19 + 0x790]       // 0xda // 218
         x22 = x22 + 1
         if (x22 == x8)
         b.ge 0x801fe88           // likely

    loc_0x0801f88c: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x801f86c
         if (x22 == 0x21)
         b.eq 0x8020358           // unlikely

    loc_0x0801f894: // orphan
         madd x8,x22,x25, x19
         [var_0h_2] = xzr
         w8 = [x8 + 0xa0]         // 0xcf // 207
         if !w8 jmp 0x801f87c     // likely

    loc_0x0801f8a4: // orphan
         if (w21 == 1)
         b.lt 0x801f8e8           // likely

    loc_0x0801f8ac: // orphan
         madd x8,x22,x25, x19
         x9 = x21 << 3
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0xb8]         // 0xcf // 207

    loc_0x0801f8bc: // orphan
         if (x10 == 0x100)
         b.eq 0x8020358           // unlikely

    loc_0x0801f8c4: // orphan
         b.eq 0x802035c           // unlikely

    loc_0x0801f8c8: // orphan
         x11 = [x12 + x10]        // 0xd1000000d3 // 897648165075
         if (x11 == x8)
         b.eq 0x801f87c           // likely

    loc_0x0801f8d4: // orphan
         x10 = x10 + 8
         if (x9 == x10)
         b.ne 0x801f8bc           // likely

    loc_0x0801f8e0: // orphan
         if (w21 == 0x20)
         b.ge 0x801f908           // unlikely

    loc_0x0801f8e8: // orphan
         if (x21 == 0x1f)
         b.hi 0x8020358           // unlikely

    loc_0x0801f8f0: // orphan
         madd x8,x22,x25, x19
         x2 = [x8 + 0xb8]         // 0xcf // 207
         x8 = x21 + 1
         [x12 + x21,lsl 3] = x2
         x21 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801f910

    loc_0x0801f908: // orphan
         madd x8,x22,x25, x19
         x2 = [x8 + 0xb8]         // 0xcf // 207

    loc_0x0801f910: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x801f904
         x8 = [x19 + 0x798]       // 0xda // 218
         if (x8 == x27)
         b.eq 0x801f93c           // unlikely

    loc_0x0801f91c: // orphan
         x8 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801f920: // orphan
         x8 = [x8]                // 0xcf // 207
         if (x8 == x27)
         b.eq 0x801f93c           // likely

    loc_0x0801f92c: // orphan
         x9 = [x8 + 0x18]         // 0xcf // 207
         if (x9 == x2)
         b.ne 0x801f920           // unlikely

    loc_0x0801f938: // orphan
         jmp 0x801f940

    loc_0x0801f93c: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801f940: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x801f938
         madd x10,x22,x25, x19
         x9 = [x19 + 0x18]        // 0xda // 218
         x10 = x10 + 0xb8
         [var_58h] = x10
         if !x9 jmp 0x801fa74     // likely

    loc_0x0801f954: // orphan
         ubfx x11,x2,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = [x9 + 0x70]        // 0xd0 // 208
         ubfx x13,x2,0x15, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x11 << 3
         [x29 = x12
         x10 = [x12 + x9]         // 0xd0000000d3 // 893353197779
         [x29 = x10
         x10 = [x12 + x9]         // 0xd0000000d3 // 893353197779
         x9 = 0x801f000
         x9 = [x9]                // 0xd0 // 208
         x10 = x10 & 0x7ffffff000
         x10 = x10 - x9
         x10 = x10 | 0xffffff8000000000
         x14 = [x10 + x13,lsl 3]  // 0xd4000000d1 // 910533066961
         x14 = x14 & 3
         if (x14 == 3)
         b.ne 0x801fa80           // unlikely

    loc_0x0801f998: // orphan
         x11 = [x12 + x11,lsl 3]  // 0xd2000000d3 // 901943132371
         x12 = x11 & 0x7ffffff000
         [x29 = x11
         x11 = x13 << 3
         x12 = x12 - x9
         ubfx x13,x2,0xc, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x12 | 0xffffff8000000000
         [x29 = x12
         x12 = [x10 + x11]        // 0xd2000000d1 // 901943132369
         [x29 = x12
         x12 = [x10 + x11]        // 0xd2000000d1 // 901943132369
         x12 = x12 & 0x7ffffff000
         x12 = x12 - x9
         x12 = x12 | 0xffffff8000000000
         x12 = x12 + x13,lsl 3
         b.eq 0x801fdc8           // unlikely

    loc_0x0801f9d8: // orphan
         x13 = [x10 + x11]        // 0xd2000000d1 // 901943132369
         x14 = x13 & 0x7ffffff000
         [x29 = x13
         x14 = x14 - x9
         x10 = [x10 + x11]        // 0xd2000000d1 // 901943132369
         x13 = x14 | 0xffffff8000000000
         [x29 = x13
         x11 = [x12]              // 0xd3 // 211
         [var_0h_2] = x11
         w11 = [x19 + 0x60]       // 0xda // 218
         if (w11 == 3)
         b.ne 0x801fe20           // unlikely

    loc_0x0801fa08: // orphan
         ubfx x8,x10,0xc, 0x24    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 >> 0xc
         x8 = x8 << 6
         x8 = x8 - x9,lsl 6
         x9 = xzr | 0xfffffffe00000000
         x9 = 0x28                // '('
         x0 = x8 + x9             // int64_t arg1
         [var_18h] = x0
         0x801fa28 ()             // 0x801fa28(0xfffffffe00000028, 0x0, 0x0, 0x0)
         w8 = [var_44h]
         tbnz w8,0,0x801fa58      // unlikely

    loc_0x0801fa34: // orphan
         x8 = [x19 + 0x18]        // 0xda // 218
         x1 = [var_20h_2]         // 0x4 // int64_t arg2
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = [x8 + 0x70]         // 0xcf // 207 // int64_t arg3
         sym.brk_sync_tbl_node () // sym.brk_sync_tbl_node(0x0, 0x0, 0x0, 0x0)
         x8 = [x19 + 0x18]        // 0xda // 218
         x9 = [var_8h]            // 0x4
         x8 = [x8 + 0x70]         // 0xcf // 207
         [x9 + 0xc0] = x8

    loc_0x0801fa58: // orphan
         x8 = [x19 + 0x790]       // 0xda // 218
         x23 = [var_58h]          // 0x4
         if (x22 == x8)
         b.ge 0x801fe40           // unlikely

    loc_0x0801fa68: // orphan
         x26 = x22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_30h_2] = x21
         jmp 0x801facc

    loc_0x0801fa74: // orphan
         x26 = x21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = ~0x15
         jmp 0x801fdd8

    loc_0x0801fa80: // orphan
         if (x14 == 1)
         x9 = 0x801f000
         x9 = x9 + 0
         x10 = 0x801f000
         x10 = x10 + 0
         x26 = x21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x23,x10,x9, eq
         w21 = ~0xd
         jmp 0x801fdd8

    loc_0x0801faa4: // orphan
         x1 = x10 + 0x90          // int64_t arg2
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         sym.brk_sync_tbl_node () // sym.brk_sync_tbl_node(0x0, 0x90, 0x0, 0x0)

    loc_0x0801fab4: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x801fc2c
         madd x8,x26,x25, x19
         [x8 + 0xc0] = x28
         w8 = [x19 + 0x790]       // 0xda // 218

    loc_0x0801fac0: // orphan
         x26 = x26 + 1
         if (x26 == w8)
         b.ge 0x801fe40           // likely

    loc_0x0801facc: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x801fa70
         if (x26 == 0x21)
         b.eq 0x8020358           // unlikely

    loc_0x0801fad4: // orphan
         madd x10,x26,x25, x19
         w11 = [x10 + 0xa0]       // 0xd1 // 209
         if !w11 jmp 0x801fac0    // likely

    loc_0x0801fae0: // orphan
         madd x9,x26,x25, x19
         x12 = [x23]              // 0xde // 222
         x9 = [x9 + 0xb8]         // 0xd0 // 208
         if (x9 == x12)
         b.ne 0x801fac0           // likely

    loc_0x0801faf4: // orphan
         if (w11 == 3)
         b.hi 0x8020358           // unlikely

    loc_0x0801fafc: // orphan
         w8 = [x19 + 0x60]        // 0xda // 218
         x12 = x29 - 0x80
         x28 = [x12 + x11,lsl 3]  // 0xd2000000d3 // 901943132371
         w8 = w8 - 1
         if (w11 == w8)
         b.lt 0x801faa4           // likely

    loc_0x0801fb14: // orphan
         madd x8,x26,x25, x19
         x12 = x29 - 0x48
         x8 = [x8 + 0xc0]         // 0xcf // 207
         if !x8 jmp 0x801fb54     // likely

    loc_0x0801fb24: // orphan
         if (x8 == x28)
         b.eq 0x801fb54           // likely

    loc_0x0801fb2c: // orphan
         x8 = [var_48h]
         if (w8 == 7)
         jmp ifgt 0x801fb54       // unlikely

    loc_0x0801fb38: // orphan
         if (x8 == 7)
         b.hi 0x8020358           // unlikely

    loc_0x0801fb40: // orphan
         x10 = [var_48h]
         x11 = var_b0h
         x8 = x10 + 1
         [x11 + x10,lsl 3] = x9
         [var_48h] = x8

    loc_0x0801fb54: // orphan
         if !x28 jmp 0x801fc20    // likely

    loc_0x0801fb58: // orphan
         w8 = 0x38                // '8'
         madd x25,x26,x8, x19
         x23 = [x25 + 0x98]!      // 0xe0 // 224
         if !x23 jmp 0x801fc20    // likely

    loc_0x0801fb68: // orphan
         x8 = [x27]               // 0xe2 // 226
         [x29, -0x18] = (xzr,2)
         [x29, -0x28] = (xzr,2)
         if (x8 == x27)
         [x29, -0x38] = (xzr,2)
         [x29, -0x48] = (xzr,2)
         b.ne 0x801fbe8           // unlikely

    loc_0x0801fb84: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801fb98

    loc_0x0801fb8c: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x801fbc0
         x8 = x8 + 1
         if (x8 == 0x200)
         b.eq 0x801fc10           // unlikely

    loc_0x0801fb98: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x801fb88
         x9 = x8 >> 3
         x10 = x9 & 0x1ffffffffffffff8
         x9 = [x28 + x8,lsl 3]    // 0xcf000000e3 // 889058230499
         x10 = [x12 + x10]        // 0xd1000000d3 // 897648165075
         x10 = x10 >> x8
         tbnz w10,0,0x801fb8c     // unlikely

    loc_0x0801fbb0: // orphan
         x10 = [x23 + x8,lsl 3]   // 0xcf000000de // 889058230494
         if (x10 == x9)
         b.eq 0x801fb8c           // unlikely

    loc_0x0801fbbc: // orphan
         [x23 + x8,lsl 3] = x9
         jmp 0x801fb8c

    loc_0x0801fbc4: // orphan
         x10 = x10 << 3
         w13 = 0x1
         x9 = x13 << x9
         x11 = [x12 + x10]        // 0xd1000000d3 // 897648165075
         x9 = x11 | x9
         [x12 + x10] = x9

    loc_0x0801fbdc: // orphan
         x8 = [x8]                // 0xcf // 207
         if (x8 == x27)
         b.eq 0x801fb84           // unlikely

    loc_0x0801fbe8: // orphan
         x9 = [x8 + 0x58]         // 0xcf // 207
         if (x9 == x23)
         b.ne 0x801fbdc           // likely

    loc_0x0801fbf4: // orphan
         w9 = [x8 + 0x28]         // 0xcf // 207
         if (w9 == 0x1ff)
         b.hi 0x801fbdc           // unlikely

    loc_0x0801fc00: // orphan
         x10 = x9 >> 6
         if (x10 == 8)
         b.ne 0x801fbc4           // likely

    loc_0x0801fc0c: // orphan
         jmp 0x802035c

    loc_0x0801fc10: // orphan
         x20 = [x27]              // 0xe2 // 226
         x11 = [var_60h]          // 0x4
         if (x20 == x27)
         b.ne 0x801fc58           // likely

    loc_0x0801fc20: // orphan
         (x21, 2) = 3
         w25 = 0x38               // '8'
         x23 = [var_58h]          // 0x4
         jmp 0x801fab4

    loc_0x0801fc30: // orphan
         x10 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = w9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x20 + 0x18]        // 0xdb // 219
         w10 = w10 + 1
         [var_50h_2] = x10
         x10 = var_70h
         [x10 + x8,lsl 3] = x9

    loc_0x0801fc4c: // orphan
         x20 = [x20]              // 0xdb // 219
         if (x20 == x27)
         b.eq 0x801fc20           // unlikely

    loc_0x0801fc58: // orphan
         x8 = [x20 + 0x58]        // 0xdb // 219
         x9 = [x25]               // 0xe0 // 224
         if (x8 == x9)
         b.ne 0x801fc4c           // likely

    loc_0x0801fc68: // orphan
         x8 = [x20 + 0x28]        // 0xdb // 219
         x21 = [x28 + x8,lsl 3]   // 0xcf000000e3 // 889058230499
         x8 = 0x1
         x8 = 0x400
         if ((x21 & x8) == 0)
         [x20 + 0x30] = x21
         b.eq 0x801fcd4           // unlikely

    loc_0x0801fc84: // orphan
         x8 = 0x801f000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x801fca4     // unlikely

    loc_0x0801fc90: // orphan
         ubfx x9,x21,0x22, 0xe    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         if !x8 jmp 0x801fca4     // unlikely

    loc_0x0801fc9c: // orphan
         ubfx x9,x21,0x1b, 7      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 + x9,lsl 5

    loc_0x0801fca4: // orphan
         w9 = [x11 + 0x10]        // 0xd2 // 210
         w9 = w9 + 1
         [x11 + 0x10] = w9
         if !x8 jmp 0x801fcbc     // likely

    loc_0x0801fcb4: // orphan
         x9 = [x8]                // 0xcf // 207
         tbnz w9,1,0x801fd20      // unlikely

    loc_0x0801fcbc: // orphan
         x8 = [x11 + 0x10]        // 0xd2 // 210
         x8 = x8 - 1
         [x11 + 0x10] = w8
         b.eq 0x801fdb0           // unlikely

    loc_0x0801fccc: // orphan
         x8 = [x11 + 0x10]        // 0xd2 // 210
         if !x8 jmp 0x801fdb0     // unlikely

    loc_0x0801fcd4: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x801fdc4
         x0 = 0x801f000
         x0 = x0 + 0              // int64_t arg1
         x1 = 0x801f000
         x1 = x1 + 0              // int64_t arg2
         0x801fce4 ()             // 0x801fce4(0x801f000, 0x801f000, 0x0, 0x0)
         if w0 jmp 0x801fd48      // likely

    loc_0x0801fcec: // orphan
         // CODE XREFS from sym.brk_sync_clone_tree @ 0x801fd64, 0x801fdac
         x8 = [x20 + 0x28]        // 0xdb // 219
         x9 = [x23 + x8,lsl 3]    // 0xcf000000de // 889058230494
         x11 = [var_60h]          // 0x4
         if (x9 == x21)
         b.eq 0x801fc4c           // likely

    loc_0x0801fd00: // orphan
         x9 = [var_50h_2]         // 0x4
         [x23 + x8,lsl 3] = x21
         if (w9 == 7)
         jmp ifgt 0x801fc4c       // unlikely

    loc_0x0801fd10: // orphan
         sbfiz x8,x9,3, 0x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x8 == 0x40)
         b.ls 0x801fc30           // likely

    loc_0x0801fd1c: // orphan
         jmp 0x802035c

    loc_0x0801fd20: // orphan
         tbnz w9,3,0x801fd40      // unlikely

    loc_0x0801fd24: // orphan
         x8 = [x8 + 8]            // 0xcf // 207
         if !x8 jmp 0x801fd68     // likely

    loc_0x0801fd2c: // orphan
         x9 = x21 >> 0x15
         x8 = [x8 + 0x10]         // 0xcf // 207
         x8 = x8 >> x9
         w9 = w8 & 1
         jmp 0x801fd6c

    loc_0x0801fd40: // orphan
         w9 = 0x1
         jmp 0x801fd6c

    loc_0x0801fd48: // orphan
         x2 = [x20 + 0x18]        // 0xdb // 219 // int64_t arg_270h
         w1 = [x19 + 0x10]        // 0xda // 218
         x0 = 0x801f000
         x0 = x0 + 0              // int64_t arg1
         x3 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x4 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801fd60 ()             // 0x801fd60(0x801f000, 0xfffffffd, 0x0, 0x0)
         jmp 0x801fcec

    loc_0x0801fd68: // orphan
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801fd6c: // orphan
         // CODE XREFS from sym.brk_sync_clone_tree @ 0x801fd3c, 0x801fd44
         x8 = [x11 + 0x10]        // 0xd2 // 210
         x8 = x8 - 1
         [x11 + 0x10] = w8
         b.eq 0x801fdb4           // unlikely

    loc_0x0801fd7c: // orphan
         x8 = [x11 + 0x10]        // 0xd2 // 210
         if !x8 jmp 0x801fdb4     // unlikely

    loc_0x0801fd84: // orphan
         if !w9 jmp 0x801fcd4     // likely

    loc_0x0801fd88: // orphan
         x0 = [x25]               // 0xe0 // 224 // int64_t arg1
         w1 = [x20 + 0x28]        // 0xdb // 219
         sym.brk_break_contiguous_group_at_kva () // sym.brk_break_contiguous_group_at_kva(0x1, 0x0)
         x8 = [x20 + 0x48]        // 0xdb // 219
         x9 = 0xfff               // '\xff\x0f'
         x9 = 0xffef              // '\xef\xff'
         x9 = x21 & x9
         x8 = x8 & 0xfffffffff000
         x21 = x8 | x9
         jmp 0x801fcec

    loc_0x0801fdb0: // orphan
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801fdb4: // orphan
         [var_44h] = w9
         0x801fdb8 ()             // 0x801fdb8(0x0, 0x0, 0x0, 0x0)
         w9 = [var_44h]
         if w9 jmp 0x801fd88      // unlikely

    loc_0x0801fdc4: // orphan
         jmp 0x801fcd4

    loc_0x0801fdc8: // orphan
         x26 = x21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = ~0xd
         x23 = 0x801f000
         x23 = x23 + 0

    loc_0x0801fdd8: // orphan
         // CODE XREFS from sym.brk_sync_clone_tree @ 0x801fa7c, 0x801faa0
         w25 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x28 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if x8 jmp 0x801fefc      // unlikely

    loc_0x0801fde4: // orphan
         x0 = 0x801f000
         x0 = x0 + 0              // int64_t arg1
         x1 = 0x801f000
         x1 = x1 + 0              // int64_t arg2
         0x801fdf4 ()             // 0x801fdf4(0x801f000, 0x801f000, 0x0, 0x0)
         if !w0 jmp 0x801f870     // unlikely

    loc_0x0801fdfc: // orphan
         x8 = [var_58h]           // 0x4
         w2 = [x19 + 0x10]        // 0xda // 218
         x0 = 0x801f000
         x0 = x0 + 0              // int64_t arg1
         w3 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x4 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = [x8]                // 0xcf // 207 // int64_t arg2
         0x801fe18 ()             // 0x801fe18(0x801f000, 0x0, 0xfffffffc, 0x0)
         jmp 0x801f870

    loc_0x0801fe20: // orphan
         x26 = x21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = ~0xd
         x28 = 0x801f000
         x28 = x28 + 0
         if !x8 jmp 0x801fde4     // likely

    loc_0x0801fe3c: // orphan
         jmp 0x801fefc

    loc_0x0801fe40: // orphan
         x0 = [var_18h]           // 0x4 // int64_t arg1
         0x801fe44 ()             // 0x801fe44(0xfffffffe00000028, 0x0, 0x0, 0x0)
         x12 = var_f0h
         x23 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x1
         [var_44h] = w8
         jmp 0x801f87c

    loc_0x0801fe88: // orphan
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = [var_44h]
         tbnz w8,0,0x801ff10      // likely

    loc_0x0801fe94: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x8020354
         (x21, 2) = 3             // x23
         x22 = [var_48h]
         x26 = [var_10h_2]        // 0x4
         jmp 0x801feb0

    loc_0x0801fea4: // orphan
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_50h_2] = xzr

    loc_0x0801feb0: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x801fea0
         x8 = [x19 + 0x798]       // 0xda // 218
         x9 = x19 + 0x798
         if (x8 == x9)
         b.eq 0x801fec8           // unlikely

    loc_0x0801fec0: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801ff1c

    loc_0x0801fec8: // orphan
         x8 = [x26 + 0x98]        // 0xe1 // 225
         if !x8 jmp 0x801fec0     // likely

    loc_0x0801fed0: // orphan
         x8 = [x19 + 0x18]        // 0xda // 218
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = [x8 + 0x70]         // 0xcf // 207 // int64_t arg3
         sym.brk_sync_tbl_node () // sym.brk_sync_tbl_node(0x0, 0x0, 0x0, 0x0)
         x8 = [x19 + 0x18]        // 0xda // 218
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x19 + x24
         x8 = [x8 + 0x70]         // 0xcf // 207
         [x9 + 0xc0] = x8
         jmp 0x801ff1c

    loc_0x0801fefc: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x801fe3c
         x8 = 0x801f000
         w8 = [x8]                // 0xcf // 207
         if w8 jmp 0x8020334      // likely

    loc_0x0801ff08: // orphan
         w8 = [var_44h]
         tbz w8,0,0x801fe94       // unlikely

    loc_0x0801ff10: // orphan
         x22 = [var_48h]
         x23 = [var_28h]          // 0x4
         w21 = 0x1

    loc_0x0801ff1c: // orphan
         // CODE XREFS from sym.brk_sync_clone_tree @ 0x801fec4, 0x801fef8
         dsb ishst
         0x801ff20 ()             // 0x801ff20(0x0, 0x0, 0x0, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801ff28 ()             // 0x801ff28(0x8033000, 0x0, 0x0, 0x0)
         if (w22 == 1)
         b.lt 0x80200f8           // likely

    loc_0x0801ff34: // orphan
         x9 = [var_b0h]           // 0x4
         dsb ishst
         x11 = x22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 >> 0xc
         x9 = x9 & 0xffffffffe00

    loc_0x0801ff4c: // orphan
         x10 = x9 + x8
         x8 = x8 + 1
         tlbi vaae1is,x10
         if (x8 == 0x200)
         b.ne 0x801ff4c           // likely

    loc_0x0801ff60: // orphan
         dsb ish
         
         if (x11 == 1)
         b.eq 0x80200f8           // unlikely

    loc_0x0801ff70: // orphan
         x9 = [var_b8h]           // 0x4
         dsb ishst
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 >> 0xc
         x9 = x9 & 0xffffffffe00

    loc_0x0801ff84: // orphan
         x10 = x9 + x8
         x8 = x8 + 1
         tlbi vaae1is,x10
         if (x8 == 0x200)
         b.ne 0x801ff84           // likely

    loc_0x0801ff98: // orphan
         dsb ish
         
         if (x11 == 2)
         b.eq 0x80200f8           // unlikely

    loc_0x0801ffa8: // orphan
         x9 = [var_c0h]           // 0x4
         dsb ishst
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 >> 0xc
         x9 = x9 & 0xffffffffe00

    loc_0x0801ffbc: // orphan
         x10 = x9 + x8
         x8 = x8 + 1
         tlbi vaae1is,x10
         if (x8 == 0x200)
         b.ne 0x801ffbc           // likely

    loc_0x0801ffd0: // orphan
         dsb ish
         
         if (x11 == 3)
         b.eq 0x80200f8           // unlikely

    loc_0x0801ffe0: // orphan
         x9 = [var_c8h]           // 0x4
         dsb ishst
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 >> 0xc
         x9 = x9 & 0xffffffffe00

    loc_0x0801fff4: // orphan
         x10 = x9 + x8
         x8 = x8 + 1
         tlbi vaae1is,x10
         // XREFS(84)
         stxrb w2,w0,[x0]
         

    loc_0x08020008: // orphan
         stxrb w2,w0,[x0]
         
         stxrb w2,w0,[x0]
         

    loc_0x08020018: // orphan
         
         
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 >> 0xc
         x9 = x9 & 0xffffffffe00

    loc_0x0802002c: // orphan
         x10 = x9 + x8
         x8 = x8 + 1
         tlbi vaae1is,x10
         if (x8 == 0x200)
         b.ne 0x802002c           // likely

    loc_0x08020040: // orphan
         dsb ish
         
         if (x11 == 5)
         b.eq 0x80200f8           // unlikely

    loc_0x08020050: // orphan
         x9 = [var_d8h]           // 0x4
         dsb ishst
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 >> 0xc
         x9 = x9 & 0xffffffffe00

    loc_0x08020064: // orphan
         x10 = x9 + x8
         x8 = x8 + 1
         tlbi vaae1is,x10
         if (x8 == 0x200)
         b.ne 0x8020064           // likely

    loc_0x08020078: // orphan
         dsb ish
         
         if (x11 == 6)
         b.eq 0x80200f8           // unlikely

    loc_0x08020088: // orphan
         x9 = [var_e0h]           // 0x4
         dsb ishst
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 >> 0xc
         x9 = x9 & 0xffffffffe00

    loc_0x0802009c: // orphan
         x10 = x9 + x8
         x8 = x8 + 1
         tlbi vaae1is,x10
         if (x8 == 0x200)
         b.ne 0x802009c           // likely

    loc_0x080200b0: // orphan
         dsb ish
         
         if (x11 == 7)
         b.eq 0x80200f8           // unlikely

    loc_0x080200c0: // orphan
         x9 = [var_e8h]           // 0x4
         dsb ishst
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 >> 0xc
         x9 = x9 & 0xffffffffe00

    loc_0x080200d4: // orphan
         x10 = x9 + x8
         x8 = x8 + 1
         tlbi vaae1is,x10
         if (x8 == 0x200)
         b.ne 0x80200d4           // likely

    loc_0x080200e8: // orphan
         dsb ish
         
         if (x11 == 8)
         b.ne 0x8020358           // likely

    loc_0x080200f8: // orphan
         x8 = x20 >> 0xc
         dsb ishst
         w10 = 0x5
         x8 = x8 & 0xffffffffff0
         tlbi vaae1is,x8
         x9 = x8 | 1
         tlbi vaae1is,x9
         x9 = x8 | 2
         tlbi vaae1is,x9
         x9 = x8 | 3
         tlbi vaae1is,x9
         x9 = x8 | 4
         tlbi vaae1is,x9
         x9 = x8 | x10
         tlbi vaae1is,x9
         w10 = 0x9
         x9 = x8 | 6
         tlbi vaae1is,x9
         x9 = x8 | 7
         tlbi vaae1is,x9
         x9 = x8 | 8
         tlbi vaae1is,x9
         x9 = x8 | x10
         w10 = 0xa
         tlbi vaae1is,x9
         x9 = x8 | x10
         w10 = 0xb
         tlbi vaae1is,x9
         x9 = x8 | x10
         tlbi vaae1is,x9
         w10 = 0xd
         x9 = x8 | 0xc
         tlbi vaae1is,x9
         x9 = x8 | x10
         tlbi vaae1is,x9
         x9 = x8 | 0xe
         tlbi vaae1is,x9
         x8 = x8 | 0xf
         tlbi vaae1is,x8
         dsb ish
         
         x9 = [var_50h_2]         // 0x4
         if (w9 == 1)
         b.lt 0x8020284           // likely

    loc_0x080201a8: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = var_70h
         w11 = 0x5
         ubfiz x9,x9,3, 0x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w12 = 0x9
         w13 = 0xa
         w14 = 0xb
         w15 = 0xd
         jmp 0x80201d8

    loc_0x080201cc: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x8020280
         x8 = x8 + 8
         if (x9 == x8)
         b.eq 0x8020284           // unlikely

    loc_0x080201d8: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x80201c8
         if (x8 == 0x40)
         b.eq 0x8020358           // unlikely

    loc_0x080201e0: // orphan
         b.eq 0x802035c           // unlikely

    loc_0x080201e4: // orphan
         x16 = [x10 + x8]         // 0xcf000000d1 // 889058230481
         if (x16 == x20)
         b.eq 0x80201cc           // likely

    loc_0x080201f0: // orphan
         x16 = x16 >> 0xc
         dsb ishst
         x16 = x16 & 0xffffffffff0
         tlbi vaae1is,x16
         x17 = x16 | 1
         tlbi vaae1is,x17
         x17 = x16 | 2
         tlbi vaae1is,x17
         x17 = x16 | 3
         tlbi vaae1is,x17
         x17 = x16 | 4
         tlbi vaae1is,x17
         x17 = x16 | x11
         tlbi vaae1is,x17
         x17 = x16 | 6
         tlbi vaae1is,x17
         x17 = x16 | 7
         tlbi vaae1is,x17
         x17 = x16 | 8
         tlbi vaae1is,x17
         x17 = x16 | x12
         tlbi vaae1is,x17
         x17 = x16 | x13
         tlbi vaae1is,x17
         x17 = x16 | x14
         tlbi vaae1is,x17
         x17 = x16 | 0xc
         tlbi vaae1is,x17
         x17 = x16 | x15
         tlbi vaae1is,x17
         x17 = x16 | 0xe
         tlbi vaae1is,x17
         x16 = x16 | 0xf
         tlbi vaae1is,x16
         dsb ish
         
         jmp 0x80201cc

    loc_0x08020284: // orphan
         if w25 jmp 0x801fe60     // unlikely

    loc_0x08020288: // orphan
         x8 = 0x8020000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x801fe60     // unlikely

    loc_0x08020294: // orphan
         w1 = [x19 + 0x10]        // 0xda // 218
         w3 = [x19 + 0x7a8]       // 0xda // 218
         x0 = 0x8020000
         x0 = x0 + 0              // int64_t arg1
         w4 = [x19 + 0x790]       // 0xda // 218
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_270h
         w5 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80202b0 ()             // 0x80202b0(0x8020000, 0xfffffffc, 0x0, 0x0)
         x21 = [x19 + 0x798]      // 0xda // 218
         x22 = x19 + 0x798
         if (x21 == x22)
         b.eq 0x802032c           // unlikely

    loc_0x080202c4: // orphan
         x20 = 0x8020000
         x20 = x20 + 0

    loc_0x080202cc: // orphan
         x3 = [x21 + 0x58]        // 0xdc // 220
         x8 = x3                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if x3 jmp 0x8020300      // unlikely

    loc_0x080202d8: // orphan
         w8 = [x19 + 0x60]        // 0xda // 218
         w8 = w8 - 1
         if (w8 == 3)
         b.hi 0x8020358           // unlikely

    loc_0x080202e8: // orphan
         x8 = x19 + w8,uxtw 3
         x8 = [x8 + 0x40]         // 0xcf // 207
         if x8 jmp 0x8020300      // unlikely

    loc_0x080202f4: // orphan
         w2 = [x21 + 0x28]        // 0xdc // 220
         x4 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8020308

    loc_0x08020300: // orphan
         x2 = [x21 + 0x28]        // 0xdc // 220
         x4 = [x8 + x2,lsl 3]     // 0xc9000000cf // 863288426703

    loc_0x08020308: // orphan
         // CODE XREF from sym.brk_sync_clone_tree @ 0x80202fc
         x1 = [x21 + 0x18]        // 0xdc // 220 // int64_t arg2
         x5 = [x21 + 0x48]        // 0xdc // 220
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8020314 ()             // 0x8020314(0x0, 0x0, 0x0, 0x0)
         x21 = [x21]              // 0xdc // 220
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x21 == x22)
         b.ne 0x80202cc           // unlikely

    loc_0x08020328: // orphan
         jmp 0x801fe60

    loc_0x0802032c: // orphan
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801fe60

    loc_0x08020334: // orphan
         w1 = [x19 + 0x10]        // 0xda // 218
         x0 = 0x8020000
         x0 = x0 + 0              // int64_t arg1
         w3 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x4 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8020348 ()             // 0x8020348(0x8020000, 0xfffffffc, 0x0, 0x0)
         w8 = [var_44h]
         tbnz w8,0,0x801ff10      // likely

    loc_0x08020354: // orphan
         jmp 0x801fe94

    loc_0x08020358: // orphan
         brk 0x5512

    loc_0x0802035c: // orphan
         // CODE XREFS from sym.brk_sync_clone_tree @ 0x801fc0c, 0x801fd1c
         brk 0x1

}

/* ===== 0x08020488 ===== */
int sym.brk_install_mm_fault_kprobe (int esi, int edx) {
    loc_0x8020488:
        // CALL XREF from sym.brk_bp_add @ 0x801ea6c
        // CALL XREF from sym.brk_bp_memwrite @ 0x80214ec
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x8020000
        w8 = (byte) [x20] // 0xdb // 219
        tbz w8,0,0x80204ac // likely
            
    loc_0x80204ac:
        x0 = 0x8020000
        x0 = x0 + 0   // int64_t arg1
        0x80204b4 ()  // 0x80204b4(0x8020000, 0x0, 0x0, 0x0)
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if w0 jmp 0x80204dc // likely
            
    loc_0x80204dc:
        x0 = 0x8020000
        x0 = x0 + 0   // int64_t arg1
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80204e8 ()  // 0x80204e8(0x8020000, 0x0, 0x0, 0x0)
        jmp 0x80204c8
         // do {
    loc_0x80204c8:
        // CODE XREFS from sym.brk_install_mm_fault_kprobe @ 0x80204a8, 0x80204ec
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x080204d8
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08022ad8 ===== */
int sym.brk_break_contiguous_group_at_kva (int esi, int edx) {
    loc_0x8022ad8:
        // CALL XREF from sym.brk_build_clone @ 0x801f630
        // CALL XREF from sym.brk_sync_clone_tree @ 0x801fd90
        if !x0 jmp 0x8022c08 // likely
            
    loc_0x8022c08:
        // CODE XREFS from sym.brk_break_contiguous_group_at_kva @ 0x8022ad8, 0x8022ae0, 0x8022af0
        // lr
         // } else {
    loc_0x8022adc:
        if (w1 == 0x1ff) // arg2
        b.hi 0x8022c08 // unlikely
        }
        return eax;
    loc_0x8022ae4:
        w8 = w1 & 0xfffffff0 // arg2
        w9 = w8 + 0x10
        if (w9 == 0x200)
        jmp ifgt 0x8022c08 // unlikely
    loc_0x8022af4:
        sbfiz x8,x8,3, 0x20 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = 0x28    // '('
        x9 = [x0 + x8] // 0xcf000000c7 // 889058230471 // arg1
        x9 = x9 & 0xffefffffffffffff
        [x0 + x8] = x9 // arg1
        x9 = x8 | 8
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        x9 = x8 | 0x10
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
        x9 = x8 | x11
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        w11 = 0x48    // 'H'
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
        x9 = x8 | x11
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        w11 = 0x50    // 'P'
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        x9 = x8 | x11
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        w11 = 0x58    // 'X'
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        x9 = x8 | x11
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        w11 = 0x68    // 'h'
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        x9 = x8 | 0x60
        x10 = [x0 + x9] // 0xd0000000c7 // 893353197767 // arg1
        x10 = x10 & 0xffefffffffffffff
        [x0 + x9] = x10 // arg1
        x9 = x8 | x11
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

/* ===== 0x08022c0c ===== */
int sym.brk_sync_tbl_node (int esi, int edx) {
    loc_0x8022c0c:
        // CALL XREFS from sym.brk_sync_clone_tree @ 0x801fa44, 0x801fab0, 0x801fee0
        sp = sp - 0x110
        [var_100h] = x29
        if !x2 jmp 0x8022d6c // likely
            
    loc_0x8022d6c:
        // CODE XREFS from sym.brk_sync_tbl_node @ 0x8022c14, 0x8022c1c, 0x8022cf0
        x29 = [var_100h] // 0x4
        sp = arg_110h
        // lr
         // } else {
    loc_0x8022c18:
        x8 = [x1 + 8] // 0xc8 // 200 // arg2
        if !x8 jmp 0x8022d6c // likely
        }
        return eax;
    loc_0x8022c20:
        w10 = [x0 + 0x790] // 0xc7 // 199 // arg1
        x9 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0xf0] = (xzr,2)
        [sp, 0xe0] = (xzr,2)
        if (w10 == 1)
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
        b.lt 0x8022cd0 // unlikely
            
    loc_0x8022cd0:
        // CODE XREFS from sym.brk_sync_tbl_node @ 0x8022c6c, 0x8022cbc
        x11 = x9 << 3
        x10 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x12 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x13 = 0x8022000
        x14 = 0x80    // '\x80'
        jmp 0x8022cf4
         // do {
    loc_0x8022cf4:
        // CODE XREF from sym.brk_sync_tbl_node @ 0x8022ce4
        x15 = [x2 + x10,lsl 3] // 0xd1000000c9 // 897648165065 // arg3
        if (w9 == 1)
        b.lt 0x8022d58 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08022c7c: // orphan
             // CODE XREF from sym.brk_sync_tbl_node @ 0x8022ccc
             if (x12 == 0x22)
             b.eq 0x8022d78           // unlikely

    loc_0x08022c84: // orphan
         w14 = [x1 + 0x10]        // 0xc8 // 200 // arg2
         w15 = [x11 + 0x10]       // 0xd2 // 210
         w14 = w14 + 1
         if (w15 == w14)
         b.ne 0x8022cb8           // likely

    loc_0x08022c98: // orphan
         x14 = [x11 + 0x20]       // 0xd2 // 210
         if (x14 == x8)
         b.ne 0x8022cb8           // unlikely

    loc_0x08022ca4: // orphan
         if (x9 == 0x1f)
         b.hi 0x8022d78           // unlikely

    loc_0x08022cac: // orphan
         x14 = x9 + 1
         [x13 + x9,lsl 3] = x11
         x9 = x14                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08022cb8: // orphan
         // CODE XREFS from sym.brk_sync_tbl_node @ 0x8022c94, 0x8022ca0
         if (x12 == x10)
         b.hs 0x8022cd0           // likely

    loc_0x08022cc0: // orphan
         if (w9 == 0x20)
         x12 = x12 + 1
         x11 = x11 + 0x38
         b.lt 0x8022c7c           // likely

    loc_0x08022ce8: // orphan
         // CODE XREFS from sym.brk_sync_tbl_node @ 0x8022d60, 0x8022d68
         x10 = x10 + 1
         if (x10 == 0x200)
         b.eq 0x8022d6c           // unlikely

    loc_0x08022d00: // orphan
         x16 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08022d04: // orphan
         // CODE XREF from sym.brk_sync_tbl_node @ 0x8022d28
         if (x16 == 0x100)
         b.eq 0x8022d78           // unlikely

    loc_0x08022d0c: // orphan
         b.eq 0x8022d7c           // unlikely

    loc_0x08022d10: // orphan
         x17 = [x12 + x16]        // 0xd7000000d3 // 923417968851
         x0 = [x17 + 0x18]        // 0xd8 // 216
         if (x0 == x10)
         b.eq 0x8022d30           // likely

    loc_0x08022d20: // orphan
         x16 = x16 + 8
         if (x11 == x16)
         b.ne 0x8022d04           // likely

    loc_0x08022d2c: // orphan
         jmp 0x8022d58

    loc_0x08022d30: // orphan
         // CODE XREF from sym.brk_sync_tbl_node @ 0x8022d1c
         w16 = ~w15
         if ((x16 & 3) == 0)
         b.ne 0x8022d58           // likely

    loc_0x08022d3c: // orphan
         x16 = [x13]              // 0xd4 // 212
         x17 = [x17]              // 0xd8 // 216
         x16 = !x16
         x16 = x17 - x16,lsl 6
         x16 = x14 + x16,lsl 6
         x16 = x16 >> 0xc
         bfi x15,x16,0xc, 0x24    // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08022d58: // orphan
         // CODE XREFS from sym.brk_sync_tbl_node @ 0x8022cfc, 0x8022d2c, 0x8022d38
         x16 = [x8 + x10,lsl 3]   // 0xd1000000cf // 897648165071
         if (x16 == x15)
         b.eq 0x8022ce8           // likely

    loc_0x08022d64: // orphan
         [x8 + x10,lsl 3] = x15
         jmp 0x8022ce8

    loc_0x08022d78: // orphan
         // CODE XREFS from sym.brk_sync_tbl_node @ 0x8022c80, 0x8022ca8, 0x8022d08
         brk 0x5512

    loc_0x08022d7c: // orphan
         // CODE XREF from sym.brk_sync_tbl_node @ 0x8022d0c
         brk 0x1

}

/* ===== 0x08022d84 ===== */
int sym.brk_user_break_handler (int esi, int edx) {
    loc_0x8022d84:
        hint 0x19
        sp = sp - 0x70
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x28,2)
        [sp, 0x30] = (x26,2)
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_10h
        if !x0 jmp 0x8022ffc // likely
            
    loc_0x8022ffc:
        // CODE XREF from sym.brk_user_break_handler @ 0x8022da8
        w0 = 0x1
         // do {
    loc_0x8023000:
        // XREFS(44)
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_70h
        hint 0x1d
        0x08023020
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8022dac
    loc_0x8022dc4:
        x8 = [x19 + 0x108] // 0xda // 218
        x8 = x8 & 0xf
        if x8 jmp 0x8023000 // likely
    loc_0x8022dd0:
        x0 = 0x8022000
        x0 = x0 + 0   // int64_t arg1
        w20 = w1 & 0xffff // arg2
        0x8022ddc ()  // 0x8022ddc(0x8022000, 0x0, 0x0, 0x0)
        x25 = 0x8022000
        x25 = x25 + 0
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = [x25]   // 0xe0 // 224
        if (x21 == x25)
        b.eq 0x8022f10 // unlikely
            
    loc_0x8022f10:
        // CODE XREFS from sym.brk_user_break_handler @ 0x8022df4, 0x8022e24
        x21 = 0x8022000
        x21 = x21 + 0
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8022f1c ()  // 0x8022f1c(0x8022000, 0x0, 0x0, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8022f24 ()  // 0x8022f24(0x8022000, 0x0, 0x0, 0x0)
        x26 = [x25]   // 0xe0 // 224
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x26 == x25)
        b.eq 0x8022fec // likely
            
    loc_0x8022fec:
        // CODE XREFS from sym.brk_user_break_handler @ 0x8022f34, 0x8022f60
        x0 = 0x8022000
        x0 = x0 + 0   // int64_t arg1
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x8022ff8 ()  // " " // 0x8022ff8(0x8022000, 0x0, 0x0, 0x0)
    loc_0x08022df8: // orphan
             w9 = 0x1
             mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
             jmp 0x8022e28

    loc_0x08022e04: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8022e88
         prfm pstl1strm,[x23]

    loc_0x08022e08: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8022e14
         ldxr w10,[x23]
         w10 = w10 + 1
         stxr w11,w10,[x23]
         if w11 jmp 0x8022e08     // unlikely

    loc_0x08022e18: // orphan
         if x21 jmp 0x8022e94     // unlikely

    loc_0x08022e1c: // orphan
         // CODE XREFS from sym.brk_user_break_handler @ 0x8022e2c, 0x8022e3c, 0x8022e54
         // CODE XREF from sym.brk_user_break_handler @ +0x10c
         x21 = [x21]              // 0xdc // 220
         if (x21 == x25)
         b.eq 0x8022f10           // unlikely

    loc_0x08022e28: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8022e00
         w10 = (byte) [x21 + 0x7f0] // 0xdc // 220
         if !w10 jmp 0x8022e1c    // likely

    loc_0x08022e30: // orphan
         x10 = [x21 + 0x18]       // 0xdc // 220
         x11 = [x8 + 0x5a0]       // 0xcf // 207
         if (x10 == x11)
         b.ne 0x8022e1c           // likely

    loc_0x08022e40: // orphan
         x22 = [x21 + 0x798]      // 0xdc // 220
         x10 = x21 + 0x798
         jmp 0x8022e50

    loc_0x08022e4c: // orphan
         // CODE XREFS from sym.brk_user_break_handler @ 0x8022e5c, 0x8022e68, 0x8022e80
         x22 = [x22]              // 0xdd // 221

    loc_0x08022e50: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8022e48
         if (x22 == x10)
         b.eq 0x8022e1c           // likely

    loc_0x08022e58: // orphan
         w11 = [x22 + 0x10]       // 0xdd // 221
         if w11 jmp 0x8022e4c     // likely

    loc_0x08022e60: // orphan
         w11 = [x22 + 0x20]       // 0xdd // 221
         if (w11 == w20)
         b.ne 0x8022e4c           // unlikely

    loc_0x08022e6c: // orphan
         x11 = [x19 + 0x100]      // 0xda // 218
         x12 = x11 << 8
         x11 = x11 & x12,asr 8
         x12 = [x22 + 0x18]       // 0xdd // 221
         if (x11 == x12)
         b.ne 0x8022e4c           // likely

    loc_0x08022e84: // orphan
         x23 = x21 + 0x7b4
         jmp 0x8022e04

    loc_0x08022e94: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8022e18
         x0 = 0x8022000
         x0 = x0 + 0              // int64_t arg1
         0x8022e9c ()             // "a" // 0x8022e9c(0x8022000, 0x0, 0x0, 0x0)
         jmp 0x8023024

    loc_0x08022eb4: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8023040
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         sym.brk_bp_handle_hit () // sym.brk_bp_handle_hit(0x0, 0x0, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8023044

    loc_0x08022edc: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8023064
         jmp 0x8023068

    loc_0x08022ef0: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8023088
         x0 = x21 + 0x7c0         // int64_t arg1
         w1 = 0x3
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8022f00 ()             // "(" // 0x8022f00(0x7c0, 0x3, 0x0, 0x0)

    loc_0x08022f04: // orphan
         // CODE XREFS from sym.brk_user_break_handler @ 0x168, 0x8023084
         w8 = 0x1
         bic w0,w8,w19            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8023000

    loc_0x08022f38: // orphan
         x22 = 0x8022000
         x22 = x22 + 0
         x23 = 0x8022000
         x23 = x23 + 0
         x24 = 0x8022000
         x24 = x24 + 0
         mrs x27,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8022f64

    loc_0x08022f58: // orphan
         // CODE XREFS from sym.brk_user_break_handler @ 0x8022f70, 0x8022f88, 0x8022fb8, 0x8022fe8
         x26 = [x26]              // 0xe1 // 225
         if (x26 == x25)
         b.eq 0x8022fec           // unlikely

    loc_0x08022f64: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8022f54
         x8 = [x26 + 0x18]        // 0xe1 // 225
         x9 = [x27 + 0x5a0]       // 0xe2 // 226
         if (x8 == x9)
         b.ne 0x8022f58           // likely

    loc_0x08022f74: // orphan
         x28 = [x26 + 0x798]      // 0xe1 // 225
         x8 = x26 + 0x798
         jmp 0x8022f84

    loc_0x08022f80: // orphan
         // CODE XREFS from sym.brk_user_break_handler @ 0x8022f90, 0x8022fa8
         x28 = [x28]              // 0xe3 // 227

    loc_0x08022f84: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8022f7c
         if (x28 == x8)
         b.eq 0x8022f58           // likely

    loc_0x08022f8c: // orphan
         w9 = [x28 + 0x10]        // 0xe3 // 227
         if w9 jmp 0x8022f80      // likely

    loc_0x08022f94: // orphan
         x9 = [x19 + 0x100]       // 0xda // 218
         x10 = x9 << 8
         x9 = x9 & x10,asr 8
         x10 = [x28 + 0x18]       // 0xe3 // 227
         if (x9 == x10)
         b.ne 0x8022f80           // likely

    loc_0x08022fac: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x8022fb4 ()             // 0x8022fb4(0x0, 0x8033000, 0x0, 0x0)
         if !w0 jmp 0x8022f58     // likely

    loc_0x08022fbc: // orphan
         x1 = [x19 + 0x100]       // 0xda // 218 // int64_t arg2
         w3 = [x28 + 0x20]        // 0xe3 // 227
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w4 = (byte) [x26 + 0x7f0] // 0xe1 // 225
         w5 = (byte) [x26 + 0x7e0] // 0xe1 // 225
         w2 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w6 = (byte) [x26 + 0x7e1] // 0xe1 // 225
         w7 = [x26 + 0x10]        // 0xe1 // 225
         x8 = [x28 + 0x18]        // 0xe3 // 227
         [sp] = x8
         0x8022fe4 ()             // 0x8022fe4(0x0, -1, 0x0, 0x0)
         jmp 0x8022f58

    loc_0x08023024: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8022ea0
         x8 = 0x8023000
         x8 = x8 + 0
         prfm pstl1strm,[x8]

    loc_0x08023030: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x802303c
         ldxr w9,[x8]
         w9 = w9 + 1
         stxr w10,w9,[x8]
         if w10 jmp 0x8023030     // unlikely

    loc_0x08023040: // orphan
         jmp 0x8022eb4

    loc_0x08023044: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8022ec8
         w8 = 0x1
         x9 = 0x8023000
         x9 = x9 + 0
         prfm pstl1strm,[x9]

    loc_0x08023054: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8023060
         ldxr w10,[x9]
         w10 = w10 - w8
         stxr w11,w10,[x9]
         if w11 jmp 0x8023054     // unlikely

    loc_0x08023064: // orphan
         jmp 0x8022edc

    loc_0x08023068: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x8022edc
         w9 = 0x1
         prfm pstl1strm,[x23]

    loc_0x08023070: // orphan
         // CODE XREF from sym.brk_user_break_handler @ 0x802307c
         ldxr w8,[x23]
         w8 = w8 - w9
         stlxr w10,w8,[x23]
         if w10 jmp 0x8023070     // unlikely

    loc_0x08023080: // orphan
         dmb ish
         if w8 jmp 0x8022f04      // unlikely

    loc_0x08023088: // orphan
         jmp 0x8022ef0

}

/* ===== 0x08035b80 ===== */
int sym.brk_switch_to_hook (int esi, int edx) {
    loc_0x8035b80:
        hint 0x19
        sp = sp - 0xe0
        [sp, 0x80] = (x29,2)
        [sp, 0x90] = (x28,2)
        [sp, 0xa0] = (x26,2)
        [sp, 0xb0] = (x24,2)
        [sp, 0xc0] = (x22,2)
        [sp, 0xd0] = (x20,2)
        x29 = var_80h
        x24 = x30     // '\xff\xff\xff\xff\xff\xff\xff\xff' // lr
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        jmp 0x8036278
         // do {
    loc_0x8036278:
        // CODE XREF from sym.brk_switch_to_hook @ 0x8035bac
        x8 = 0x8036000
        x8 = x8 + 0
        prfm pstl1strm,[x8]
         // } while (?);
        }
        return eax;
    loc_0x08035bc4: // orphan
             x9 = 0x8035000
             x9 = x9 + 0
             x21 = [x19 + 0x5a0]      // 0xda // 218
             mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w22 = [x8 + x9]          // 0xd0000000cf // 893353197775
             x0 = 0x8035000
             x0 = x0 + 0              // int64_t arg2
             0x8035be0 ()             // 0x8035be0(0x8035000, 0x0, 0x0, 0x0)
             x8 = 0x8035000
             x8 = x8 + 0
             x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x20 = [x8]               // 0xcf // 207
             if (x20 == x8)
             b.eq 0x8035c5c           // unlikely

    loc_0x08035bfc: // orphan
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8035c14

    loc_0x08035c04: // orphan
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08035c08: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8035c50
         x20 = [x20]              // 0xdb // 219
         if (x20 == x8)
         b.eq 0x8035c54           // unlikely

    loc_0x08035c14: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8035c00
         w9 = (byte) [x20 + 0x7f0] // 0xdb // 219
         if !w9 jmp 0x8035c34     // likely

    loc_0x08035c1c: // orphan
         w9 = (byte) [x20 + 0x7e0] // 0xdb // 219
         if w9 jmp 0x8035c34      // unlikely

    loc_0x08035c24: // orphan
         if !x21 jmp 0x8035c34    // likely

    loc_0x08035c28: // orphan
         x9 = [x20 + 0x18]        // 0xdb // 219
         if (x9 == x21)
         b.eq 0x8035d48           // likely

    loc_0x08035c34: // orphan
         if x27 jmp 0x8035c08     // unlikely

    loc_0x08035c38: // orphan
         if !x21 jmp 0x8035c08    // likely

    loc_0x08035c3c: // orphan
         w9 = (byte) [x20 + 0x7f0] // 0xdb // 219
         if !w9 jmp 0x8035c04     // likely

    loc_0x08035c44: // orphan
         x9 = [x20 + 0x18]        // 0xdb // 219
         if (x9 == x21)
         csel x27,x20,xzr, eq
         jmp 0x8035c08

    loc_0x08035c54: // orphan
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8035c64

    loc_0x08035c5c: // orphan
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08035c64: // orphan
         // CODE XREFS from sym.brk_switch_to_hook @ 0x8035c58, 0x8036324
         w9 = 0x1
         x10 = x22 >> 6
         x11 = x9 << x22
         x9 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08035c74: // orphan
         x9 = [x9]                // 0xd0 // 208
         if (x9 == x8)
         cset w26,ne
         b.eq 0x8035cac           // unlikely

    loc_0x08035c84: // orphan
         x12 = x9 + x10,lsl 3
         x12 = [x12 + 0x7d8]      // 0xd3 // 211
         if ((x12 & x11) == 0)
         b.eq 0x8035c74           // unlikely

    loc_0x08035c94: // orphan
         jmp 0x80362e8

    loc_0x08035ca4: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8036300
         x20 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8035cb0

    loc_0x08035cac: // orphan
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08035cb0: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8035ca8
         if (x21 == 0)
         cset w13,ne
         if x20 jmp 0x8035cfc     // unlikely

    loc_0x08035cbc: // orphan
         if !x21 jmp 0x8035cfc    // likely

    loc_0x08035cc0: // orphan
         x20 = [x8]               // 0xcf // 207
         jmp 0x8035ccc

    loc_0x08035cc8: // orphan
         x20 = [x20]              // 0xdb // 219

    loc_0x08035ccc: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8035cc4
         if (x20 == x8)
         b.eq 0x8035d40           // likely

    loc_0x08035cd4: // orphan
         w10 = (byte) [x20 + 0x7f0] // 0xdb // 219
         if !w10 jmp 0x8035cc8    // likely

    loc_0x08035cdc: // orphan
         x10 = [x20 + 0x18]       // 0xdb // 219
         if (x10 == x21)
         b.ne 0x8035cc8           // unlikely

    loc_0x08035ce8: // orphan
         jmp 0x8036328

    loc_0x08035cf8: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8036340
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08035cfc: // orphan
         if (x20 == 0)
         [x29 = w13
         cset w25,ne
         if (x9 == x8)
         b.eq 0x8035d74           // likely

    loc_0x08035d10: // orphan
         if !x20 jmp 0x8035d74    // likely

    loc_0x08035d14: // orphan
         x8 = [x20 + 0x18]        // 0xdb // 219
         if (x21 == x8)
         b.ne 0x8035d34           // unlikely

    loc_0x08035d20: // orphan
         w8 = (byte) [x20 + 0x7f0] // 0xdb // 219
         if !w8 jmp 0x8035d34     // likely

    loc_0x08035d28: // orphan
         w8 = (byte) [x20 + 0x7e0] // 0xdb // 219
         if (w8 == 0)
         csel w23,wzr,w23, eq

    loc_0x08035d34: // orphan
         w25 = 0x1
         w26 = 0x1
         jmp 0x8035d74

    loc_0x08035d40: // orphan
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8035d64

    loc_0x08035d48: // orphan
         jmp 0x8036304

    loc_0x08035d60: // orphan
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08035d64: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8035d44
         if (x20 == 0)
         w8 = 0x1
         cset w25,ne
         [x29 = w8

    loc_0x08035d74: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8035d3c
         x0 = 0x8035000
         x0 = x0 + 0              // int64_t arg2
         0x8035d7c ()             // 0x8035d7c(0x8035000, 0x0, 0x0, 0x0)
         x12 = 0x8035000
         if !w25 jmp 0x8035d90    // likely

    loc_0x08035d88: // orphan
         w8 = [x12]               // 0xd3 // 211
         if w8 jmp 0x8035ee0      // likely

    loc_0x08035d90: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8036270
         if x20 jmp 0x8035e28     // unlikely

    loc_0x08035d94: // orphan
         if !x27 jmp 0x8035e28    // likely

    loc_0x08035d98: // orphan
         x8 = 0x8035000
         x9 = 0x8035000
         x10 = [x8]               // 0xcf // 207
         x11 = [x9]               // 0xd0 // 208
         if (x10 == x11)
         b.pl 0x8035e28           // likely

    loc_0x08035db0: // orphan
         x9 = [x9]                // 0xd0 // 208
         x30 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 + 0x4e2
         [x8] = x9
         hint 0x7
         x9 = x27 + 0x798
         [x29 = x30
         x8 = [x27 + 0x798]       // 0xe2 // 226
         if (x8 == x9)
         b.eq 0x8035de4           // unlikely

    loc_0x08035ddc: // orphan
         if !x8 jmp 0x8035de4     // likely

    loc_0x08035de0: // orphan
         x10 = [x8 + 0x18]        // 0xcf // 207

    loc_0x08035de4: // orphan
         if (x8 == x9)
         x24 = x12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x28 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x29 = x10
         b.eq 0x8035e0c           // likely

    loc_0x08035df8: // orphan
         x10 = [x8 + 0x2560]      // 0xcf // 207
         x8 = [x8]                // 0xcf // 207
         if (x8 == x9)
         x28 = x10 + x28
         b.ne 0x8035df8           // likely

    loc_0x08035e0c: // orphan
         x0 = 0x8035000
         x0 = x0 + 0              // int64_t arg2
         x1 = 0x8035000
         x1 = x1 + 0              // int64_t arg_e0h
         0x8035e1c ()             // 0x8035e1c(0x8035000, 0x8035000, 0x0, 0x0)
         x12 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x80360dc      // likely

    loc_0x08035e28: // orphan
         if !w25 jmp 0x8036200    // likely

    loc_0x08035e2c: // orphan
         x8 = 0x8035000
         w8 = (byte) [x8]         // 0xcf // 207
         w8 = w23 & w8
         if (w8 == 1)
         b.ne 0x8035eb4           // likely

    loc_0x08035e40: // orphan
         x8 = [x20 + 0x798]       // 0xdb // 219
         x9 = x20 + 0x798
         x24 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = x12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x8 == x9)
         b.eq 0x8035e60           // unlikely

    loc_0x08035e58: // orphan
         if !x8 jmp 0x8035e60     // likely

    loc_0x08035e5c: // orphan
         x24 = [x8 + 0x18]        // 0xcf // 207

    loc_0x08035e60: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.brk_sync_clone_tree () // sym.brk_sync_clone_tree(0x0, 0x0, 0x0)
         if !w0 jmp 0x8035eac     // likely

    loc_0x08035e70: // orphan
         w25 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x8035000
         x0 = x0 + 0              // int64_t arg2
         x1 = 0x8035000
         x1 = x1 + 0              // int64_t arg_e0h
         0x8035e84 ()             // 0x8035e84(0x8035000, 0x8035000, 0x0, 0x0)
         if !w0 jmp 0x8036158     // unlikely

    loc_0x08035e8c: // orphan
         w1 = [x20 + 0x10]        // 0xdb // 219
         w3 = [x20 + 0x7a8]       // 0xdb // 219
         x0 = 0x8035000
         x0 = x0 + 0              // int64_t arg2
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w4 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8035ea4 ()             // 0x8035ea4(0x8035000, 0xfffffffc, 0x0, 0x0)
         jmp 0x8036158

    loc_0x08035eac: // orphan
         w8 = [x27]               // 0xe2 // 226
         if w8 jmp 0x8036138      // likely

    loc_0x08035eb4: // orphan
         if !w23 jmp 0x8036158    // unlikely

    loc_0x08035eb8: // orphan
         x8 = 0x8035000
         x9 = [x20 + 0x20]        // 0xdb // 219
         x10 = xzr | 0xfffffffe00000000
         x8 = [x8]                // 0xcf // 207
         x8 = x8 >> 6
         x8 = x8 & 0x3ffffffffffffc0
         x8 = x8 - x10
         x8 = x9 + x8
         x1 = x8 << 6
         jmp 0x80361c8

    loc_0x08035ee0: // orphan
         x8 = [x20 + 0x798]       // 0xdb // 219
         x28 = x20 + 0x798
         x5 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x8 == x28)
         csel x8,xzr,x8, eq
         [x29 = x8
         if !x8 jmp 0x8035f04     // unlikely

    loc_0x08035efc: // orphan
         ldur x8,[x29,-0x18]
         x5 = [x8 + 0x18]         // 0xcf // 207

    loc_0x08035f04: // orphan
         mrs x8,ttbr0_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x20 + 0x20]       // 0xdb // 219
         if x10 jmp 0x8035f18     // unlikely

    loc_0x08035f10: // orphan
         x16 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8035f38

    loc_0x08035f18: // orphan
         x9 = 0x8035000
         x11 = xzr | 0xfffffffe00000000
         x9 = [x9]                // 0xd0 // 208
         x9 = x9 >> 6
         x9 = x9 & 0x3ffffffffffffc0
         x9 = x9 - x11
         x9 = x10 + x9
         x16 = x9 << 6

    loc_0x08035f38: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8035f14
         w2 = [x19 + 0x618]       // 0xda // 218
         w4 = [x20 + 0x10]        // 0xdb // 219
         w13 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w6 = [x20 + 0x7a8]       // 0xdb // 219
         w9 = (byte) [x20 + 0x7f0] // 0xdb // 219
         w11 = (byte) [x20 + 0x7e0] // 0xdb // 219
         w12 = (byte) [x20 + 0x7e1] // 0xdb // 219
         [x29 = x24
         if !x20 jmp 0x8035f88    // likely

    loc_0x08035f5c: // orphan
         if !x10 jmp 0x8035f88    // likely

    loc_0x08035f60: // orphan
         x13 = 0x8035000
         x14 = xzr | 0xfffffffe00000000
         x13 = [x13]              // 0xd4 // 212
         x13 = x13 >> 6
         x13 = x13 & 0x3ffffffffc0
         x13 = x13 - x14
         x10 = x10 + x13
         x10 = x8 ^ x10,lsl 6
         if ((x10 & 0xfffffffff000) == 0)
         cset w13,eq

    loc_0x08035f88: // orphan
         x10 = 0x8035000
         x14 = x20 + 0x7d8
         x15 = x20 + 0x7e8
         w10 = [x10]              // 0xd1 // 209
         x0 = 0x8035000
         x0 = x0 + 0              // int64_t arg2
         w1 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w7 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x23
         [var_0h_4] = x15
         [var_0h_5] = w10
         [var_0h_6] = x14
         [var_0h_7] = w10
         [x29 = x16
         [var_0h_8] = x16
         [var_0h_9] = w13
         [var_0h_10] = x8
         [var_sp_18h] = w12
         [var_0h] = w11
         [var_0h_2] = w9
         [sp] = w26
         0x8035fdc ()             // 0x8035fdc(0x8035000, 0x0, 0x0, 0x0)
         ldur x8,[x29,-0x18]
         if !x8 jmp 0x8036080     // unlikely

    loc_0x08035fe8: // orphan
         x24 = [x28]              // 0xe3 // 227
         jmp 0x8036024

    loc_0x08035ff0: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x803607c
         x8 = x3 & 0x10000000000000
         w1 = [x20 + 0x10]        // 0xdb // 219
         x2 = [x24 + 0x18]        // 0xdf // 223
         x6 = x8 >> 0x34
         // XREFS(72)
         w7 = [x20 + 0x7b4]       // 0xdb // 219
         w8 = [x20 + 0x7b8]       // 0xdb // 219
         w9 = [x20 + 0x7bc]       // 0xdb // 219
         x0 = 0x8036000
         x0 = x0 + 0              // int64_t arg2
         [sp] = w8
         [var_0h_2] = w9
         0x803601c ()             // 0x803601c(0x8036000, 0xfffffffc, 0x0, 0x0)

    loc_0x08036020: // orphan
         x24 = [x24]              // 0xdf // 223

    loc_0x08036024: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8035fec
         if (x24 == x28)
         b.eq 0x8036080           // likely

    loc_0x0803602c: // orphan
         x8 = [x24 + 0x58]        // 0xdf // 223
         if !x8 jmp 0x8036040     // likely

    loc_0x08036034: // orphan
         x9 = [x24 + 0x28]        // 0xdf // 223
         x3 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         jmp 0x8036064

    loc_0x08036040: // orphan
         w9 = [x20 + 0x60]        // 0xdb // 219
         w8 = w9 - 1
         b.lt 0x8036060           // likely

    loc_0x0803604c: // orphan
         if (w9 == 4)
         b.hi 0x8036274           // unlikely

    loc_0x08036054: // orphan
         x8 = x20 + w8,uxtw 3
         x8 = [x8 + 0x40]         // 0xcf // 207
         if x8 jmp 0x8036034      // unlikely

    loc_0x08036060: // orphan
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08036064: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x803603c
         x5 = [x24 + 0x48]        // 0xdf // 223
         x4 = x5 & 0xfffffffff000
         tbnz x3,0x34,0x8035ff0   // unlikely

    loc_0x08036070: // orphan
         x8 = x3 & 0xfffffffff000
         if (x8 == x4)
         b.eq 0x8036020           // likely

    loc_0x0803607c: // orphan
         jmp 0x8035ff0

    loc_0x08036080: // orphan
         x12 = 0x8036000
         ldur x24,[x29,-0x20]
         w8 = [x12]               // 0xd3 // 211
         if (w8 == 2)
         b.lt 0x8035d90           // likely

    loc_0x08036094: // orphan
         x8 = [x20 + 0x18]        // 0xdb // 219
         if !x8 jmp 0x8035d90     // likely

    loc_0x0803609c: // orphan
         ldur x9,[x29,-0x18]
         if !x9 jmp 0x8035d90     // unlikely

    loc_0x080360a4: // orphan
         w9 = [x20 + 0x60]        // 0xdb // 219
         if (w9 == 1)
         b.lt 0x8035d90           // unlikely

    loc_0x080360b0: // orphan
         ldur x9,[x29,-0x18]
         x10 = [x8 + 0x70]        // 0xcf // 207
         x8 = [x20 + 0x40]        // 0xdb // 219
         x9 = [x9 + 0x18]         // 0xd0 // 208
         ubfx x9,x9,0x1e, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = [x10 + x9,lsl 3]    // 0xd0000000d1 // 893353197777
         [x29 = x2
         if !x8 jmp 0x803623c     // likely

    loc_0x080360d0: // orphan
         x9 = [x20 + 0x68]        // 0xdb // 219
         x3 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         jmp 0x8036240

    loc_0x080360dc: // orphan
         w2 = [x27 + 0x10]        // 0xe2 // 226
         w4 = [x27 + 0x7a8]       // 0xe2 // 226
         x0 = 0x8036000
         x0 = x0 + 0              // int64_t arg2
         w5 = (byte) [x27 + 0x7f0] // 0xe2 // 226
         w6 = (byte) [x27 + 0x7e0] // 0xe2 // 226
         w7 = (byte) [x27 + 0x7e1] // 0xe2 // 226
         w8 = [x27 + 0x7b4]       // 0xe2 // 226
         x1 = 0x8036000
         x1 = x1 + 0              // int64_t arg_e0h
         w9 = [x27 + 0x7bc]       // 0xe2 // 226
         w10 = [x27 + 0x7b8]      // 0xe2 // 226
         ldur x11,[x29,-0x20]
         ldur x3,[x29,-0x18]
         x24 = x12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h] = w10
         [sp, 0x18] = (x28,2)
         [var_0h_2] = w9
         [sp] = w8
         0x8036128 ()             // 0x8036128(0x8036000, 0x8036000, 0xfffffffc, -1)
         x12 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w25 jmp 0x8035e2c     // unlikely

    loc_0x08036134: // orphan
         jmp 0x8036200

    loc_0x08036138: // orphan
         w1 = [x20 + 0x10]        // 0xdb // 219
         w3 = [x20 + 0x7a8]       // 0xdb // 219
         x0 = 0x8036000
         x0 = x0 + 0              // int64_t arg2
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w4 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8036150 ()             // 0x8036150(0x8036000, 0xfffffffc, 0x0, 0x0)
         if w23 jmp 0x8035eb8     // likely

    loc_0x08036158: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8035ea8
         ldur w8,[x29,-0xc]
         tbnz w8,0,0x8036170      // likely

    loc_0x08036160: // orphan
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = [x8 + 0x5a0]       // 0xcf // 207
         if x21 jmp 0x8036174     // likely

    loc_0x0803616c: // orphan
         x21 = [x8 + 0x5a8]       // 0xcf // 207

    loc_0x08036170: // orphan
         if !x21 jmp 0x80361ac    // likely

    loc_0x08036174: // orphan
         x8 = [x21 + 0x70]        // 0xdc // 220
         x9 = 0x80                // '\x80'
         x10 = 0x8036000
         x11 = 0x8036000
         x10 = [x10]              // 0xd1 // 209
         sbfx x8,x8,0, 0x38       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = [x11]              // 0xd2 // 210
         x9 = x8 + x9
         x8 = x8 - x11
         x12 = x9 >> 0x26
         x9 = x9 + x10
         if (x12 == 0)
         csel x1,x9,x8, eq
         jmp 0x80361b0

    loc_0x080361ac: // orphan
         x1 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080361b0: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x80361a8
         if (x1 == 0)
         w8 = w26 ^ 1
         csinc w8,w8,wzr, eq
         tbnz w8,0,0x80361c4      // likely

    loc_0x080361c0: // orphan
         x1 = [x20 + 0x80]        // 0xdb // 219

    loc_0x080361c4: // orphan
         if !x1 jmp 0x80361d4     // likely

    loc_0x080361c8: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8035edc
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         sym.brk_write_ttbr0 ()   // "//" // sym.brk_write_ttbr0(0x0, 0x0, 0x0, 0x0)

    loc_0x080361d4: // orphan
         jmp 0x80362c0

    loc_0x080361ec: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x80362e4
         x0 = x20 + 0x7c0         // int64_t arg2
         w1 = 0x3
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80361fc ()             // "'" // 0x80361fc(0x7c0, 0x3, 0x0, 0x0)

    loc_0x08036200: // orphan
         // CODE XREFS from sym.brk_switch_to_hook @ 0x8036134, 0x8036298
         jmp 0x803629c

    loc_0x08036214: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x80362bc
         w0 = 0x1f7
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_e0h
         hint 0x1d
         

    loc_0x0803623c: // orphan
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08036240: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x80360d8
         ldur x8,[x29,-0x28]
         x4 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 >> 0xc
         bfi x4,x8,0xc, 0x24      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x3 == x4)
         b.eq 0x8035d90           // likely

    loc_0x08036258: // orphan
         w1 = [x20 + 0x10]        // 0xdb // 219
         x5 = [x20 + 0x68]        // 0xdb // 219
         x0 = 0x8036000
         x0 = x0 + 0              // int64_t arg2
         0x8036268 ()             // 0x8036268(0x8036000, 0xfffffffc, 0x0, 0x0)
         x12 = 0x8036000
         jmp 0x8035d90

    loc_0x08036274: // orphan
         brk 0x5512

    loc_0x08036284: // orphan
         ldxr w9,[x8]
         w9 = w9 + 1
         stxr w10,w9,[x8]
         if w10 jmp 0x8036284     // unlikely

    loc_0x08036294: // orphan
         if x19 jmp 0x8035bc4     // unlikely

    loc_0x08036298: // orphan
         jmp 0x8036200

    loc_0x0803629c: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8036200
         w8 = 0x1
         x9 = 0x8036000
         x9 = x9 + 0
         prfm pstl1strm,[x9]

    loc_0x080362ac: // orphan
         ldxr w10,[x9]
         w10 = w10 - w8
         stxr w11,w10,[x9]
         if w11 jmp 0x80362ac     // unlikely

    loc_0x080362bc: // orphan
         jmp 0x8036214

    loc_0x080362c0: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x80361d4
         x9 = x20 + 0x7b8
         w10 = 0x1
         prfm pstl1strm,[x9]

    loc_0x080362cc: // orphan
         ldxr w8,[x9]
         w8 = w8 - w10
         stlxr w11,w8,[x9]
         if w11 jmp 0x80362cc     // unlikely

    loc_0x080362dc: // orphan
         dmb ish
         if w8 jmp 0x8036200      // unlikely

    loc_0x080362e4: // orphan
         jmp 0x80361ec

    loc_0x080362e8: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8035c94
         x10 = x9 + 0x7b8
         prfm pstl1strm,[x10]

    loc_0x080362f0: // orphan
         ldxr w11,[x10]
         w11 = w11 + 1
         stxr w12,w11,[x10]
         if w12 jmp 0x80362f0     // unlikely

    loc_0x08036300: // orphan
         jmp 0x8035ca4

    loc_0x08036304: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8035d48
         x9 = x20 + 0x7b8
         prfm pstl1strm,[x9]

    loc_0x0803630c: // orphan
         ldxr w10,[x9]
         w10 = w10 + 1
         stxr w11,w10,[x9]
         if w11 jmp 0x803630c     // unlikely

    loc_0x0803631c: // orphan
         w23 = 0x1
         if x20 jmp 0x8035d60     // unlikely

    loc_0x08036324: // orphan
         jmp 0x8035c64

    loc_0x08036328: // orphan
         // CODE XREF from sym.brk_switch_to_hook @ 0x8035ce8
         x10 = x20 + 0x7b8
         prfm pstl1strm,[x10]

    loc_0x08036330: // orphan
         ldxr w11,[x10]
         w11 = w11 + 1
         stxr w12,w11,[x10]
         if w12 jmp 0x8036330     // unlikely

    loc_0x08036340: // orphan
         jmp 0x8035cf8

}

/* ===== 0x08036648 ===== */
int sym.brk_call_all_cpus (int esi, int edx) {
    loc_0x8036648:
        // CALL XREFS from sym.brk_quiesce_entry @ 0x8020670, 0x80206c8, 0x80206f0
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x27,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = [x27 + 0x10] // 0xe2 // 226
        x9 = 0x8036000
        x9 = x9 + 0
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 + 1
        [x27 + 0x10] = w8
        mrs x8,tpidr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = [x8 + x9] // 0xd0000000cf // 893353197775
        sym.brk_restore_ttbr0_cb () // "7" // sym.brk_restore_ttbr0_cb(0x0, 0x0)
        w23 = 0x1
        w21 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x22 = 0x8036000
        x22 = x22 + 0
        x28 = 0x8036000
        w25 = 0x1
        x24 = 0x8036000
        x24 = x24 + 0
        w23 = 0x41    // 'A'
        jmp 0x80366d8
         // do {
    loc_0x80366d8:
        // CODE XREF from sym.brk_call_all_cpus @ 0x80366b4
        if (w19 == w21)
        b.eq 0x80366cc // likely
         // } while (?);
        }
        return eax;
    loc_0x80366e0:
        x8 = [x28]    // 0xe3 // 227
        if !x8 jmp 0x8036738 // unlikely
            
    loc_0x8036738:
        x8 = [x27 + 0x10] // 0xe2 // 226
        x8 = x8 - 1
        [x27 + 0x10] = w8
        b.eq 0x8036770 // unlikely
            
    loc_0x8036770:
        0x8036770 ()  // 0x8036770(0x0, 0x0, 0x0, 0x0)
        jmp 0x8036750
         // do {
    loc_0x8036750:
        // CODE XREF from sym.brk_call_all_cpus @ 0x8036774
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0803676c
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80366e8
    loc_0x803670c:
        w8 = w25 << w8
        if ((w8 & w23) == 0)
        b.ne 0x80366cc // likely
    loc_0x80366cc:
        // CODE XREF from sym.brk_call_all_cpus @ 0x8036734
        w21 = w21 + 1
        if (w21 == 0x20)
        b.eq 0x8036738 // unlikely
        }
        return eax;
    loc_0x080366b8: // orphan
             // CODE XREF from sym.brk_call_all_cpus @ 0x8036718
             x0 = 0x8036000
             x0 = x0 + 0              // int64_t arg1
             x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x80366c4 ()             // 0x80366c4(0x8036000, 0x0, 0x0, 0x0)
             if w0 jmp 0x803671c      // likely

    loc_0x08036718: // orphan
         jmp 0x80366b8

    loc_0x0803671c: // orphan
         x0 = 0x8036000
         x0 = x0 + 0              // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8036730 ()             // 0x8036730(0x8036000, 0x0, 0x0, 0x0)
         jmp 0x80366cc

}

/* ===== 0x080369cc ===== */
int sym._copy_from_user_3 (int esi, int edx) {
    loc_0x80369cc:
        // CALL XREFS from sym.brk_bp_memwrite @ 0x8020f88, 0x8021290, 0x8021450
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        tbnz w9,5,0x8036a00 // unlikely
            
    loc_0x8036a00:
        x9 = x1 << 8  // arg2
        x9 = x1 & x9,asr 8 // arg2
         // do {
    loc_0x8036a08:
        x10 = 0x80    // '\x80'
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x19 == x10)
        b.hi 0x8036a98 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08036a18: // orphan
             x10 = x10 - x19
             x21 = x19                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             if (x10 == x9)
             b.lo 0x8036a98           // unlikely

    loc_0x08036a28: // orphan
         jmp 0x8036acc

    loc_0x08036a30: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x8036ad8
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08036a58: // orphan
         x1 = x1 & 0xff7fffffffffffff // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x8036a64 ()             // 0x8036a64(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8036adc

    loc_0x08036a74: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x8036ae8
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08036a98: // orphan
         if x21 jmp 0x8036ab4     // unlikely

    loc_0x08036a9c: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x8036ac8
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_10h]          // 0x4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08036ab4: // orphan
         x8 = x19 - x21
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = x20 + x8            // int64_t arg1
         0x8036ac4 ()             // 0x8036ac4(0x0, 0x0, 0x0, 0x0)
         jmp 0x8036a9c

    loc_0x08036acc: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x8036a28
         x9 = 0x8036000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x8036a58   // unlikely

    loc_0x08036ad8: // orphan
         jmp 0x8036a30

    loc_0x08036adc: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x8036a6c
         x8 = 0x8036000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x8036a98   // unlikely

    loc_0x08036ae8: // orphan
         jmp 0x8036a74

}

/* ===== 0x08021cb4 ===== */
int sym.brk_collect_current_path (int esi, int edx) {
    loc_0x8021cb4:
        // CALL XREF from sym.brk_bp_del @ 0x8021968
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = ~0x15
        if !x8 jmp 0x8021e20 // likely
            
    loc_0x8021e20:
        // lr
         // } else {
    loc_0x8021cc0:
        if !x2 jmp 0x8021e20 // likely
        }
        return eax;
    loc_0x8021cc4:
        if !x3 jmp 0x8021e20 // likely
    loc_0x8021cc8:
        if !x4 jmp 0x8021e20 // likely
    loc_0x8021ccc:
        if !x5 jmp 0x8021e20 // likely
    loc_0x8021cd0:
        if !x6 jmp 0x8021e20 // likely
    loc_0x8021cd4:
        if !x7 jmp 0x8021e20 // unlikely
    loc_0x8021cd8:
        sp = sp - 0x20
        x10 = [arg_20h] // 0x4 // sp
        if !x10 jmp 0x8021e1c // unlikely
            
    loc_0x8021e1c:
        // CODE XREF from sym.brk_collect_current_path @ 0x8021dec
        sp = arg_20h_2
    loc_0x08021ce4: // orphan
             x9 = [arg_28h]           // 0x4
             if !x9 jmp 0x8021e1c     // likely

    loc_0x08021cec: // orphan
         x11 = [arg_30h]          // 0x4
         if !x11 jmp 0x8021e1c    // likely

    loc_0x08021cf4: // orphan
         [x11] = xzr
         ubfx x13,x1,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         ubfx x15,x1,0x15, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         x14 = [x8 + 0x70]        // 0xcf // 207
         x8 = x13 << 3
         [x2] = x14               // arg3
         x12 = [x14 + x8]         // 0xcf000000d5 // 889058230485
         [var_0h] = x12
         [x3] = x12               // arg4
         [x4] = x13               // arg5
         x12 = [x14 + x8]         // 0xcf000000d5 // 889058230485
         x8 = 0x8021000
         x16 = [x8]               // 0xcf // 207
         x12 = x12 & 0x7ffffff000
         x12 = x12 - x16
         x12 = x12 | 0xffffff8000000000
         x17 = [x12 + x15,lsl 3]  // 0xd6000000d3 // 919123001555
         x17 = x17 & 3
         if (x17 == 3)
         b.ne 0x8021df0           // unlikely

    loc_0x08021d44: // orphan
         x14 = [x14 + x13,lsl 3]  // 0xd4000000d5 // 910533066965
         x13 = x14 & 0x7ffffff000
         [var_0h_2] = x14
         x16 = x13 - x16
         x13 = x15 << 3
         x14 = x16 | 0xffffff8000000000
         [x2 + 8] = x14           // arg3
         x14 = [x12 + x13]        // 0xd4000000d3 // 910533066963
         [var_0h_3] = x14
         [x3 + 8] = x14           // arg4
         [x4 + 8] = x15           // arg5
         ubfx x15,x1,0xc, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         x14 = [x12 + x13]        // 0xd4000000d3 // 910533066963
         x16 = [x8]               // 0xcf // 207
         x14 = x14 & 0x7ffffff000
         x14 = x14 - x16
         x14 = x14 | 0xffffff8000000000
         x14 = x14 + x15,lsl 3
         b.eq 0x8021e0c           // unlikely

    loc_0x08021d90: // orphan
         x11 = [x12 + x13]        // 0xd4000000d3 // 910533066963
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x17 = x11 & 0x7ffffff000
         [sp] = x11
         x16 = x17 - x16
         x11 = x16 | 0xffffff8000000000
         [x2 + 0x10] = x11        // arg3
         w11 = 0x3
         [x5] = w11               // arg6
         [x6] = w15               // arg7
         [x10] = x14
         x10 = [x12 + x13]        // 0xd4000000d3 // 910533066963
         x8 = [x8]                // 0xcf // 207
         ubfx x10,x10,0xc, 0x24   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 >> 0xc
         x10 = x10 << 6
         x8 = x10 - x8,lsl 6
         x10 = xzr | 0xfffffffe00000000
         x10 = 0x28               // '('
         x8 = x8 + x10
         [x9] = x8
         x8 = [x14]               // 0xd5 // 213
         [x7] = x8                // arg8
         jmp 0x8021e1c

    loc_0x08021df0: // orphan
         x8 = 0x8021000
         x8 = x8 + 0
         if (x17 == 1)
         x9 = 0x8021000
         x9 = x9 + 0
         csel x8,x9,x8, eq
         jmp 0x8021e14

    loc_0x08021e0c: // orphan
         x8 = 0x8021000
         x8 = x8 + 0

    loc_0x08021e14: // orphan
         // CODE XREF from sym.brk_collect_current_path @ 0x8021e08
         [x11] = x8
         w0 = ~0xd

}

/* ===== 0x08036aec ===== */
int sym._copy_to_user_5 (int esi, int edx) {
    loc_0x8036aec:
        // CALL XREF from sym.brk_bp_get_hits @ 0x8021fe4
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w9,5,0x8036b04 // unlikely
            
    loc_0x8036b04:
        x9 = x0 << 8  // arg1
        x9 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x8036b0c:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = 0x80    // '\x80'
        if (x2 == x10) // arg3
        b.hi 0x8036b98 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08036b24: // orphan
             x10 = x10 - x2           // arg3
             if (x10 == x9)
             b.lo 0x8036b98           // unlikely

    loc_0x08036b30: // orphan
         jmp 0x8036ba8

    loc_0x08036b38: // orphan
         // CODE XREF from sym._copy_to_user_5 @ 0x8036bb4
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08036b60: // orphan
         x0 = x0 & 0xff7fffffffffffff // int64_t arg1
         0x8036b64 ()             // 0x8036b64(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8036bb8

    loc_0x08036b74: // orphan
         // CODE XREF from sym._copy_to_user_5 @ 0x8036bc4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08036b98: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08036ba8: // orphan
         // CODE XREF from sym._copy_to_user_5 @ 0x8036b30
         x9 = 0x8036000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x8036b60   // unlikely

    loc_0x08036bb4: // orphan
         jmp 0x8036b38

    loc_0x08036bb8: // orphan
         // CODE XREF from sym._copy_to_user_5 @ 0x8036b6c
         x8 = 0x8036000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x8036b98   // unlikely

    loc_0x08036bc4: // orphan
         jmp 0x8036b74

}

/* ===== 0x080223f4 ===== */
int sym.brk_heartbeat_fn (int esi, int edx) {
    loc_0x80223f4:
        hint 0x19
        sp = sp - 0xf0
        [sp, 0x90] = (x29,2)
        [sp, 0xa0] = (x28,2)
        [sp, 0xb0] = (x26,2)
        [sp, 0xc0] = (x24,2)
        [sp, 0xd0] = (x22,2)
        [sp, 0xe0] = (x20,2)
        x29 = var_90h
        x8 = 0x8022000
        mrs x9,ttbr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [var_sp_38h] = x9
        w8 = (byte) [x8] // 0xcf // 207
        if (w8 == 1)
        b.ne 0x8022464 // likely
            
    loc_0x8022464:
        w25 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x8022468:
        // CODE XREF from sym.brk_heartbeat_fn @ 0x8022a44
        x0 = 0x8022000
        x0 = x0 + 0   // int64_t arg1
        0x8022470 ()  // 0x8022470(0x8022000, 0x0, 0x0, 0x0)
        x8 = 0x8022000
        x8 = x8 + 0
        [var_48h] = x0
        x22 = [x8]    // 0xcf // 207
        if (x22 == x8)
        b.eq 0x80229c4 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8022430
    loc_0x802243c:
        x8 = 0x8022000
        w8 = (byte) [x8] // 0xcf // 207
        if (w8 == 1)
        b.ne 0x8022464 // likely
    loc_0x802244c:
        x8 = 0x8022000
        x20 = 0x8022000
        x19 = [x8]    // 0xcf // 207
        x8 = [x20]    // 0xdb // 219
        if (x8 == x19)
        b.ne 0x8022a24 // likely
            
    loc_0x8022a24:
        x0 = 0x8022000
        x0 = x0 + 0   // int64_t arg1
        x1 = 0x8022000
        x1 = x1 + 0   // int64_t arg_f0h
        0x8022a34 ()  // 0x8022a34(0x8022000, 0x8022000, 0x0, 0x0)
        if w0 jmp 0x8022a48 // likely
            
    loc_0x8022a48:
        // CODE XREF from sym.brk_heartbeat_fn @ 0x8022a38
        x1 = [x20]    // 0xdb // 219 // int64_t arg_f0h
        x0 = 0x8022000
        x0 = x0 + 0   // int64_t arg1
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8022a58 ()  // 0x8022a58(0x8022000, 0x0, 0x0, 0x0)
        jmp 0x8022a3c
    loc_0x0802248c: // orphan
             x19 = 0x8022000
             mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
             [x29 = x8

    loc_0x08022498: // orphan
         if !w25 jmp 0x80224b0    // likely

    loc_0x0802249c: // orphan
         w8 = (byte) [x22 + 0x7f0] // 0xdd // 221
         if !w8 jmp 0x80224b0     // likely

    loc_0x080224a4: // orphan
         w8 = 0x1
         [x22 + 0x7e1] = (byte) w8
         [x22 + 0x7e0] = (byte) w8

    loc_0x080224b0: // orphan
         x21 = [x22 + 0x798]      // 0xdd // 221
         x20 = x22 + 0x798
         if (x21 == x20)
         b.ne 0x80224f4           // likely

    loc_0x080224c0: // orphan
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080224c8: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221
         w2 = [x22 + 0x7a8]       // 0xdd // 221
         w3 = (byte) [x22 + 0x7f0] // 0xdd // 221
         w4 = (byte) [x22 + 0x7e0] // 0xdd // 221
         w5 = (byte) [x22 + 0x7e1] // 0xdd // 221
         w8 = [x22 + 0x7b4]       // 0xdd // 221
         w9 = [x22 + 0x7b8]       // 0xdd // 221
         w10 = [x22 + 0x7bc]      // 0xdd // 221
         if x22 jmp 0x8022568     // unlikely

    loc_0x080224ec: // orphan
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802259c

    loc_0x080224f4: // orphan
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x28 = x22 + 0x7ac
         jmp 0x8022518

    loc_0x08022504: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x8022564
         x21 = [x21]              // 0xdc // 220
         w27 = w24 + w27
         w26 = w23 + w26          // x23
         if (x21 == x20)
         b.eq 0x80224c8           // likely

    loc_0x08022518: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x8022500
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802251c ()             // 0x802251c(0x0, 0x0, 0x0, 0x0)
         w24 = [x21 + 0x2558]     // 0xdc // 220
         w8 = [x21 + 0x256c]      // 0xdc // 220
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w23 = w24 - w8
         [x21 + 0x256c] = w24
         0x8022534 ()             // 0x8022534(0x0, 0x0, 0x0, 0x0)
         w8 = [x19]               // 0xda // 218
         if !w8 jmp 0x8022504     // likely

    loc_0x08022540: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221
         x2 = [x21 + 0x18]        // 0xdc // 220
         x0 = 0x8022000
         x0 = x0 + 0              // int64_t arg1
         w5 = (byte) [x22 + 0x7f0] // 0xdd // 221
         w6 = (byte) [x22 + 0x7e0] // 0xdd // 221
         w3 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w4 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x23
         0x8022560 ()             // 0x8022560(0x8022000, 0x0, 0x0, 0x0)
         jmp 0x8022504

    loc_0x08022568: // orphan
         x11 = [x22 + 0x20]       // 0xdd // 221
         if !x11 jmp 0x802259c    // likely

    loc_0x08022570: // orphan
         x12 = 0x8022000
         x13 = xzr | 0xfffffffe00000000
         x12 = [x12]              // 0xd3 // 211
         x12 = x12 >> 6
         x12 = x12 & 0x3ffffffffc0
         x12 = x12 - x13
         x11 = x11 + x12
         x12 = [var_sp_38h]       // 0x4
         x11 = x12 ^ x11,lsl 6
         if ((x11 & 0xfffffffff000) == 0)
         cset w11,eq

    loc_0x0802259c: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x80224f0
         x12 = 0x8022000
         x13 = x22 + 0x7d8
         x0 = 0x8022000
         x0 = x0 + 0              // int64_t arg1
         w12 = [x12]              // 0xd3 // 211
         w6 = w27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w7 = w26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h] = x13
         [var_0h_2] = w12
         [var_0h_3] = w11
         [var_0h_4] = w10
         [var_0h_5] = w9
         [sp] = w8
         0x80225d0 ()             // 0x80225d0(0x8022000, 0x0, 0x0, 0x0)
         x8 = 0x8022000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x8022994     // unlikely

    loc_0x080225e0: // orphan
         [x29 = xzr
         if !x22 jmp 0x8022994    // likely

    loc_0x080225e8: // orphan
         x8 = [x22 + 0x18]        // 0xdd // 221
         if !x8 jmp 0x8022994     // likely

    loc_0x080225f0: // orphan
         x8 = [x20]               // 0xdb // 219
         if (x8 == x20)
         b.eq 0x8022994           // likely

    loc_0x080225fc: // orphan
         0x80225fc ()             // 0x80225fc(0x0, 0x0, 0x0, 0x0)
         x23 = [x20]              // 0xdb // 219
         if (x23 == x20)
         b.eq 0x8022984           // likely

    loc_0x0802260c: // orphan
         x8 = x22 + 0x98
         [var_34h] = w25
         [var_sp_40h] = x8
         jmp 0x8022650

    loc_0x0802261c: // orphan
         ldur x9,[x29,-0x30]
         x8 = [x9 + 0x10]         // 0xd0 // 208
         x8 = x8 - 1
         [x9 + 0x10] = w8
         b.eq 0x8022974           // unlikely

    loc_0x08022630: // orphan
         x8 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x9 + 0x10]         // 0xd0 // 208
         if !x8 jmp 0x8022974     // unlikely

    loc_0x0802263c: // orphan
         // CODE XREFS from sym.brk_heartbeat_fn @ 0x8022954, 0x8022980
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8022640 ()             // 0x8022640(0x0, 0x0, 0x0, 0x0)

    loc_0x08022644: // orphan
         x23 = [x23]              // 0xde // 222
         if (x23 == x20)
         b.eq 0x8022984           // likely

    loc_0x08022650: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x8022618
         x9 = [x22 + 0x18]        // 0xdd // 221
         if !x9 jmp 0x8022644     // likely

    loc_0x08022658: // orphan
         x8 = [x23 + 0x18]        // 0xde // 222
         x27 = [x9 + 0x70]        // 0xd0 // 208
         ubfx x10,x8,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x10 << 3
         x11 = [x27 + x9]         // 0xd0000000e2 // 893353197794
         [x29 = x11
         x11 = 0x8022000
         x9 = [x27 + x9]          // 0xd0000000e2 // 893353197794
         x24 = [x11]              // 0xd2 // 210
         ubfx x11,x8,0x15, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0x7ffffff000
         x9 = x9 - x24
         x9 = x9 | 0xffffff8000000000
         x12 = [x9 + x11,lsl 3]   // 0xd2000000d0 // 901943132368
         w12 = ~w12
         if ((x12 & 3) == 0)
         b.ne 0x8022644           // likely

    loc_0x0802269c: // orphan
         x10 = [x27 + x10,lsl 3]  // 0xd1000000e2 // 897648165090
         x11 = x11 << 3
         ubfx x8,x8,0xc, 9        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x29 = x10
         x12 = [x9 + x11]         // 0xd2000000d0 // 901943132368
         [x29 = x12
         x12 = [x9 + x11]         // 0xd2000000d0 // 901943132368
         x12 = x12 & 0x7ffffff000
         x12 = x12 - x24
         x12 = x12 | 0xffffff8000000000
         x8 = x12 + x8,lsl 3
         b.eq 0x8022644           // unlikely

    loc_0x080226cc: // orphan
         x12 = [x9 + x11]         // 0xd2000000d0 // 901943132368
         [x29 = x12
         x9 = [x9 + x11]          // 0xd2000000d0 // 901943132368
         [x29, -0x40] = (x9,2)
         x8 = [x8]                // 0xcf // 207
         [x29 = x8
         w8 = [x22 + 0x790]       // 0xdd // 221
         if (w8 == 1)
         b.lt 0x8022808           // unlikely

    loc_0x080226f0: // orphan
         x9 = x10 & 0x7ffffff000
         x10 = x12 & 0x7ffffff000
         x25 = [var_sp_40h]
         x9 = x9 - x24
         x10 = x10 - x24
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x28 = x9 | 0xffffff8000000000
         x26 = x10 | 0xffffff8000000000
         jmp 0x8022724

    loc_0x08022714: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x8022754
         x21 = x21 + 1
         x25 = x25 + 0x38
         if (x21 == w8)
         b.ge 0x8022758           // likely

    loc_0x08022724: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x8022710
         if (x21 == 0x20)
         b.eq 0x8022a60           // unlikely

    loc_0x0802272c: // orphan
         x9 = [x25]               // 0xe0 // 224
         if (x9 == x27)
         b.ne 0x8022714           // unlikely

    loc_0x08022738: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221
         x0 = 0x8022000
         x0 = x0 + 0              // int64_t arg1
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802274c ()             // 0x802274c(0x8022000, -1, 0x0, 0x0)
         w8 = [x22 + 0x790]       // 0xdd // 221
         jmp 0x8022714

    loc_0x08022758: // orphan
         if (w8 == 1)
         b.lt 0x8022808           // likely

    loc_0x08022760: // orphan
         x25 = [var_sp_40h]
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802277c

    loc_0x0802276c: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x80227ac
         x21 = x21 + 1
         x25 = x25 + 0x38
         if (x21 == w8)
         b.ge 0x80227b0           // likely

    loc_0x0802277c: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x8022768
         if (x21 == 0x20)
         b.eq 0x8022a60           // unlikely

    loc_0x08022784: // orphan
         x9 = [x25]               // 0xe0 // 224
         if (x9 == x28)
         b.ne 0x802276c           // unlikely

    loc_0x08022790: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221
         x0 = 0x8022000
         x0 = x0 + 0              // int64_t arg1
         w2 = 0x1
         x3 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80227a4 ()             // 0x80227a4(0x8022000, -1, 0x1, 0x0)
         w8 = [x22 + 0x790]       // 0xdd // 221
         jmp 0x802276c

    loc_0x080227b0: // orphan
         if (w8 == 1)
         b.lt 0x8022808           // likely

    loc_0x080227b8: // orphan
         x25 = [var_sp_40h]
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80227d4

    loc_0x080227c4: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x8022804
         x21 = x21 + 1
         x25 = x25 + 0x38
         if (x21 == w8)
         b.ge 0x8022808           // likely

    loc_0x080227d4: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x80227c0
         if (x21 == 0x20)
         b.eq 0x8022a60           // unlikely

    loc_0x080227dc: // orphan
         x9 = [x25]               // 0xe0 // 224
         if (x9 == x26)
         b.ne 0x80227c4           // unlikely

    loc_0x080227e8: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221
         x0 = 0x8022000
         x0 = x0 + 0              // int64_t arg1
         w2 = 0x2
         x3 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80227fc ()             // 0x80227fc(0x8022000, -1, 0x2, 0x0)
         w8 = [x22 + 0x790]       // 0xdd // 221
         jmp 0x80227c4

    loc_0x08022808: // orphan
         x8 = x24 >> 0xc
         x9 = xzr | 0xfffffffe00000000
         x8 = x9 - x8,lsl 6
         ldur x9,[x29,-0x40]
         ubfx x9,x9,0xc, 0x24     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 + x9,lsl 6
         x26 = x8 + 0x28
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8022828 ()             // 0x8022828(0xfffffffe00000028, 0x0, 0x0, 0x0)
         ldur x8,[x29,-0x38]
         x9 = 0x1
         x9 = 0x400
         x8 = [x8]                // 0xcf // 207
         [x29 = x8
         if ((x8 & x9) == 0)
         w25 = [var_34h]
         b.eq 0x802263c           // unlikely

    loc_0x0802284c: // orphan
         x9 = 0x8022000
         x9 = [x9]                // 0xd0 // 208
         if !x9 jmp 0x802286c     // unlikely

    loc_0x08022858: // orphan
         ubfx x10,x8,0x22, 0xe    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x9 + x10,lsl 3]    // 0xd1000000d0 // 897648165072
         if !x9 jmp 0x802286c     // likely

    loc_0x08022864: // orphan
         ubfx x10,x8,0x1b, 7      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 + x10,lsl 5

    loc_0x0802286c: // orphan
         ldur x11,[x29,-0x30]
         w10 = [x11 + 0x10]       // 0xd2 // 210
         w10 = w10 + 1
         [x11 + 0x10] = w10
         if !x9 jmp 0x802261c     // likely

    loc_0x08022880: // orphan
         x10 = [x9]               // 0xd0 // 208
         tbz w10,1,0x802261c      // likely

    loc_0x08022888: // orphan
         tbnz w10,3,0x80228a8     // unlikely

    loc_0x0802288c: // orphan
         x9 = [x9 + 8]            // 0xd0 // 208
         if !x9 jmp 0x80228b0     // likely

    loc_0x08022894: // orphan
         x8 = x8 >> 0x15
         x9 = [x9 + 0x10]         // 0xd0 // 208
         x8 = x9 >> x8
         w21 = w8 & 1
         jmp 0x80228b4

    loc_0x080228a8: // orphan
         w21 = 0x1
         jmp 0x80228b4

    loc_0x080228b0: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080228b4: // orphan
         // CODE XREFS from sym.brk_heartbeat_fn @ 0x80228a4, 0x80228ac
         ldur x8,[x29,-0x30]
         x8 = [x8 + 0x10]         // 0xcf // 207
         ldur x9,[x29,-0x30]
         x8 = x8 - 1
         [x9 + 0x10] = w8
         ldur x8,[x29,-0x30]
         b.eq 0x8022978           // unlikely

    loc_0x080228d0: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         if !x8 jmp 0x8022978     // unlikely

    loc_0x080228d8: // orphan
         if !w21 jmp 0x802263c    // likely

    loc_0x080228dc: // orphan
         ldur x8,[x29,-0x28]
         x9 = [x23 + 0x48]        // 0xde // 222
         x9 = x9 ^ x8
         if ((x9 & 0xfffffffff000) == 0)
         b.eq 0x8022958           // unlikely

    loc_0x080228f0: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x8022970
         x9 = 0x8022000
         x8 = x8 & 0x7ffffff000
         w10 = wzr | 0x3fffffe
         x9 = [x9]                // 0xd0 // 208
         x8 = x8 - x9
         x21 = x8 | 0xffffff8000000000
         if (x10 == x21)
         b.ne 0x802263c           // likely

    loc_0x08022910: // orphan
         x8 = x8 & 0x7fffffffff
         x8 = x8 + x9
         x0 = x8 >> 0xc           // int64_t arg1
         0x802291c ()             // 0x802291c(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x802263c     // likely

    loc_0x08022924: // orphan
         x2 = [x23 + 0x18]        // 0xde // 222
         w10 = 0xd420             // ' \xd4'
         x8 = x2 & 0xfff
         w8 = [x21 + x8]          // 0xcf000000dc // 889058230492
         w9 = [x23 + 0x20]        // 0xde // 222
         w9 = w10 | w9,lsl 5
         if (w8 == w9)
         b.ne 0x802263c           // likely

    loc_0x08022944: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221
         x0 = 0x8022000
         x0 = x0 + 0              // int64_t arg1
         0x8022950 ()             // 0x8022950(0x8022000, -1, 0x0, 0x0)
         jmp 0x802263c

    loc_0x08022958: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221
         x2 = [x23 + 0x18]        // 0xde // 222
         x0 = 0x8022000
         x0 = x0 + 0              // int64_t arg1
         0x8022968 ()             // 0x8022968(0x8022000, -1, 0x3dc0014117ffe575, 0x0)
         ldur x8,[x29,-0x28]
         jmp 0x80228f0

    loc_0x08022974: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08022978: // orphan
         0x8022978 ()             // 0x8022978(0x0, 0x0, 0x0, 0x0)
         if w21 jmp 0x80228dc     // unlikely

    loc_0x08022980: // orphan
         jmp 0x802263c

    loc_0x08022984: // orphan
         0x8022984 ()             // 0x8022984(0x0, 0x0, 0x0, 0x0)
         w8 = [x19]               // 0xda // 218
         if (w8 == 2)
         b.ge 0x80229ac           // unlikely

    loc_0x08022994: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x80229c0
         x22 = [x22]              // 0xdd // 221
         x8 = 0x8022000
         x8 = x8 + 0
         if (x22 == x8)
         b.ne 0x8022498           // likely

    loc_0x080229a8: // orphan
         jmp 0x80229c4

    loc_0x080229ac: // orphan
         w1 = [x22 + 0x10]        // 0xdd // 221
         w2 = [x22 + 0x7a8]       // 0xdd // 221
         x0 = 0x8022000
         x0 = x0 + 0              // int64_t arg1
         0x80229bc ()             // 0x80229bc(0x8022000, -1, 0x0, 0x0)
         jmp 0x8022994

    loc_0x080229c4: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x80229a8
         x1 = [var_48h]           // int64_t arg_f0h
         x0 = 0x8022000
         x0 = x0 + 0              // int64_t arg1
         0x80229d0 ()             // 0x80229d0(0x8022000, 0x8022000, 0x0, 0x0)
         x8 = 0x8022000
         w8 = (byte) [x8]         // 0xcf // 207
         if (w8 == 1)
         b.ne 0x8022a00           // likely

    loc_0x080229e4: // orphan
         x8 = 0x8022000
         x2 = 0x8022000
         x2 = x2 + 0
         x1 = [x8]                // 0xcf // 207 // int64_t arg_f0h
         w0 = 0x20
         w3 = 0x9c4
         0x80229fc ()             // 0x80229fc(0x20, 0x9100000090000000, 0x8022000, 0x9c4)

    loc_0x08022a00: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x80229e0
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_f0h
         hint 0x1d
         

    loc_0x08022a3c: // orphan
         // CODE XREF from sym.brk_heartbeat_fn @ 0x8022a5c
         w25 = 0x1
         [x20] = x19
         jmp 0x8022468

    loc_0x08022a60: // orphan
         brk 0x5512

}

/* ===== 0x0802308c ===== */
int sym.brk_bp_handle_hit (int esi, int edx) {
    loc_0x802308c:
        // CALL XREF from sym.brk_user_break_handler @ 0x8022ec0
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x470
        if !x1 jmp 0x8023384 // likely
            
    loc_0x8023384:
        // CODE XREFS from sym.brk_bp_handle_hit @ 0x80230b0, 0x80230bc, 0x80230d4
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        jmp 0x80243ac // fcn.080339b4-0xf608
        // chop
         // do {
    loc_0x80243ac:
        // CODE XREF from sym.brk_bp_handle_hit @ 0x8023388
        sp = arg_470h
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x080243cc
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80230b4
    loc_0x80230c0:
        mrs x9,tpidr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = 0x8023000
        x10 = x10 + 0
        x9 = [x9 + x10] // 0xd1000000d0 // 897648165072
        x27 = [x8 + x9,lsl 3] // 0xd0000000cf // 893353197775
        if !x27 jmp 0x8023384 // unlikely
    loc_0x80230d8:
        x25 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [var_98h] = x2 // arg3
        x0 = var_a0h  // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x150
        0x80230f0 ()  // 0x80230f0(0x1780a0, 0x0, 0x150, 0x0)
        x26 = x19 + 0x7ac
        [var_68h] = x19
        x0 = x26      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8023100 ()  // 0x8023100(0x7ac, 0x0, 0x150, 0x0)
        w24 = [x25 + 0x80] // 0xe0 // 224
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w24 == 1)
        [var_a0h] = w24
        b.lt 0x8023188 // likely
            
    loc_0x8023188:
        // CODE XREF from sym.brk_bp_handle_hit @ 0x8023114
        w23 = [x25 + 0x148] // 0xe0 // 224
        x19 = w23     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w23 == 1)
        [var_0h] = w23
        b.lt 0x8023208 // likely
            
    loc_0x8023208:
        // CODE XREF from sym.brk_bp_handle_hit @ 0x8023198
        x0 = x26      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x8023210 ()  // 0x8023210(0x0, 0x0, 0x0, 0x0)
        mrs x20,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = [x20 + 0x10] // 0xdb // 219
        w8 = w8 + 1
        [x20 + 0x10] = w8
        x8 = 0x8023000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8023234 // unlikely
            
    loc_0x8023234:
        // CODE XREF from sym.brk_bp_handle_hit @ 0x802322c
        x8 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = x20 + 0xec0
        x11 = 0x8023000
        [var_70h] = x9
         // do {
    loc_0x8023244:
        // CODE XREF from sym.brk_bp_handle_hit @ 0x8023260
        jmp 0x8023268
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8023118
    loc_0x8023120:
        x21 = x24 << 2
        if (w24 == 0x11)
        x22 = x25 + 0x84
        b.lo 0x802313c // likely
            
    loc_0x802313c:
        // CODE XREF from sym.brk_bp_handle_hit @ 0x802312c
        x8 = var_a0h
        x1 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        x2 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        x0 = x8 | 4   // int64_t arg1
        0x802314c ()  // 0x802314c(0x1780a4, 0x0, 0x0, 0x0)
        if (w24 == 0x22)
        b.hs 0x80271a8 // unlikely
            
    loc_0x80271a8:
        // CODE XREFS from sym.brk_bp_handle_hit @ 0x802311c, 0x8023154, 0x80231a0, 0x80231d8
        x0 = 0x8027000
        x0 = x0 + 0   // int64_t arg1 // "?}"
        0x80271b0 ()  // 0x80271b0(0x8027000, 0x0, 0x0, 0x0)
        w10 = (byte) [var_211h] // 0x4
        if (x10 == 0x20)
        b.hi 0x80352f8 // fcn.080339b4+0x1944 // unlikely
        // chop
            
    loc_0x80352f8:
        // XREFS(141)
        brk 0x5512
         // } else {
    loc_0x80271c0:
        x11 = var_260h
        if (w9 == 0x40)
        x10 = x11 + x10,lsl 4
        b.eq 0x80292c8 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8023130
    loc_0x8024bb4:
        // CODE XREF from sym.brk_bp_handle_hit @ 0x8023138
        w9 = 0x1
        x0 = 0x8024000
        x0 = x0 + 0   // int64_t arg1
        x2 = 0x8024000
        x2 = x2 + 0   // int64_t arg3
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w3 = 0x40     // '@'
        [x8] = (byte) w9
        0x8024bd4 ()  // 0x8024bd4(0x8024000, 0x0, 0x8024000, 0x40)
        brk 0x800
         // (break)
    loc_0x08023168: // orphan
             x8 = 0x8023000
             w9 = (byte) [x8]         // 0xcf // 207
             tbz w9,0,0x8024be0       // likely

    loc_0x08023174: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023164
         x8 = var_a0h
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = var_48h             // int64_t arg1
         0x8023184 ()             // 0x8023184(0x1780e8, 0x0, 0x0, 0x0)

    loc_0x080231a4: // orphan
         x21 = x23 << 2
         if (w19 == 0x11)
         x22 = x25 + 0x14c
         b.lo 0x80231c0           // likely

    loc_0x080231b4: // orphan
         x8 = 0x8023000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x8024c0c       // likely

    loc_0x080231c0: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80231b0
         x8 = var_a0h
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = var_cch             // int64_t arg1
         0x80231d0 ()             // 0x80231d0(0x17816c, 0x0, 0x0, 0x0)
         if (w19 == 0x12)
         b.hs 0x80271a8           // unlikely

    loc_0x080231dc: // orphan
         if (w23 == 0x11)
         x22 = x25 + 0x18c
         b.ne 0x80231f4           // likely

    loc_0x080231e8: // orphan
         x8 = 0x8023000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x8024c38       // likely

    loc_0x080231f4: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80231e4
         x8 = var_a0h
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = var_10ch            // int64_t arg1
         0x8023204 ()             // 0x8023204(0x1781ac, 0x0, 0x0, 0x0)

    loc_0x0802324c: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x802326c, 0x8023274, 0x802327c
         x9 = x20 + x8,lsl 4
         x9 = [x9 + 0xec0]        // 0xd0 // 208

    loc_0x08023254: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023298
         [x27 + x8,lsl 3] = x9
         x8 = x8 + 1
         if (x8 == 0x20)
         b.ne 0x8023244           // likely

    loc_0x08023264: // orphan
         jmp 0x802329c

    loc_0x08023268: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023244
         x9 = [x11]               // 0xd2 // 210
         tbz x9,0x3f,0x802324c    // likely

    loc_0x08023270: // orphan
         x9 = [x20]               // 0xdb // 219
         tbz w9,0x17,0x802324c    // likely

    loc_0x08023278: // orphan
         x9 = [x20 + 0x10d8]      // 0xdb // 219
         if !x9 jmp 0x802324c     // unlikely

    loc_0x08023280: // orphan
         mrs x9,s3_0_c1_c2_0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x20 + 0x10d8]     // 0xdb // 219
         ubfiz x9,x9,4, 9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 + 0x10
         x9 = x9 * x8
         x9 = [x10 + x9]          // 0xd0000000d1 // 893353197777
         jmp 0x8023254

    loc_0x0802329c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023264
         [var_80h] = x27
         x8 = [x20 + 0x10]        // 0xdb // 219
         x8 = x8 - 1
         [x20 + 0x10] = w8
         b.eq 0x8024bac           // unlikely

    loc_0x080232b0: // orphan
         x8 = [x20 + 0x10]        // 0xdb // 219
         if !x8 jmp 0x8024bac     // unlikely

    loc_0x080232b8: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8024bb0
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [var_90h] = x20          // tmp
         0x80232c0 ()             // 0x80232c0(0x0, 0x0, 0x0, 0x0)
         w8 = [x25 + 0x2550]      // 0xe0 // 224
         x22 = [var_98h]          // 0x4
         if (w8 == 0x10)
         b.hi 0x80352f8           // fcn.080339b4+0x1944 // likely

    loc_0x080232d4: // orphan
         w9 = 0x238
         x21 = [var_90h]          // 0x4 // tmp
         x27 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         umaddl x20,w8,w9, x25
         x8 = [x21 + 0x618]       // 0xdc // 220
         [x20 + 0x1d0] = x8
         x8 = [x22 + 0x100]       // 0xdd // 221
         [x20 + 0x1d8] = x8
         0x80232f4 ()             // 0x80232f4(0x0, 0x0, 0x0, 0x0)
         x8 = x20 + 0x1e8
         [x20 + 0x1e0] = x0
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0xf8                // '\xf8'
         0x802330c ()             // 0x802330c(0x1e8, 0x0, 0xf8, 0x0)
         x9 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = [var_80h]           // 0x4 // int64_t arg2
         x0 = x20 + 0x308         // int64_t arg1
         x8 = [x9 + 0xf8]!        // 0xd0 // 208
         w2 = 0x100
         [var_88h] = x9
         [x20 + 0x2e0] = x8
         x8 = [x22 + 0x100]       // 0xdd // 221
         [x20 + 0x2e8] = x8
         x8 = [x9 + 0x10]         // 0xd0 // 208
         [x20 + 0x2f0] = x8
         x8 = [x9 + 0x18]         // 0xd0 // 208
         [x20 + 0x2f8] = x8
         x8 = [x9 + 0x20]         // 0xd0 // 208
         [x20 + 0x300] = x8
         0x802334c ()             // 0x802334c(0x308, 0x0, 0x100, 0x0)
         w8 = [x25 + 0x2550]      // 0xe0 // 224
         w9 = w8 + 1
         w8 = [x25 + 0x2558]      // 0xe0 // 224
         negs w10,w9
         w9 = w9 & 0xf
         w10 = w10 & 0xf
         csneg w9,w9,w10, mi
         if (w8 == 0xf)
         [x25 + 0x2550] = w9
         jmp ifgt 0x802338c       // unlikely

    loc_0x08023378: // orphan
         w8 = w8 + 1
         [x25 + 0x2558] = w8
         jmp 0x80233a8

    loc_0x0802338c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023374
         w8 = [x25 + 0x2554]      // 0xe0 // 224
         w8 = w8 + 1
         negs w9,w8
         w8 = w8 & 0xf
         w9 = w9 & 0xf
         csneg w8,w8,w9, mi
         [x25 + 0x2554] = w8

    loc_0x080233a8: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023380
         x8 = [x25 + 0x2560]      // 0xe0 // 224
         x10 = 0xf7cf             // '\xcf\xf7'
         x11 = [var_98h]          // 0x4
         x10 = 0xe353             // 'S\xe3'
         x9 = x8 + 1
         x10 = 0x9ba5             // '\xa5\x9b'
         x11 = x11 + 0x100
         x8 = x9 >> 3
         x10 = 0x20c4             // '\xc4 '
         [var_78h] = x11
         [x25 + 0x2560] = x9
         umulh x8,x8,x10
         w10 = 0x3e8
         x8 = x8 >> 4
         msub x20,x8,x10, x9
         w8 = 0x2568              // 'h%'
         x8 = x25 + x8
         w10 = (byte) [x8]        // 0xcf // 207
         if !w10 jmp 0x80234e8    // unlikely

    loc_0x080233f4: // orphan
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x80233fc ()             // 0x80233fc(0x0, 0x0, 0x0, 0x0)
         x1 = [var_98h]           // 0x4
         if !x20 jmp 0x802353c    // likely

    loc_0x08023408: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023538
         if (w24 == 1)
         b.lt 0x8023594           // likely

    loc_0x08023410: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023590
         x8 = var_a0h
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x26 = 0x8023000
         x26 = x26 + 0
         x28 = var_48h
         x27 = 0x8023000
         x27 = x27 + 0
         jmp 0x8023444

    loc_0x08023434: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x802345c
         [x1 + x8,lsl 3] = x22

    loc_0x08023438: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x802346c, 0x8023478, 0x80234b0, 0x80234c8
         x21 = x21 + 1
         if (x24 == x21)
         b.eq 0x8023598           // unlikely

    loc_0x08023444: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023430
         if (x21 == 0x10)
         b.eq 0x80352f8           // fcn.080339b4+0x1944 // unlikely

    loc_0x0802344c: // orphan
         x8 = x28 + x21,lsl 2
         x22 = [x28 + x21,lsl 3]  // 0xdc000000e3 // 944892805347
         ldur w8,[x8,-0x44]       // 0xcf // 207
         if (w8 == 0x1e)
         b.ls 0x8023434           // unlikely

    loc_0x08023460: // orphan
         if (w8 == 0x20)
         b.eq 0x802347c           // unlikely

    loc_0x08023468: // orphan
         if (w8 == 0x1f)
         b.ne 0x8023438           // likely

    loc_0x08023470: // orphan
         x8 = [var_88h]           // 0x4
         [x8] = x22
         jmp 0x8023438

    loc_0x0802347c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023464
         if ((x22 & 3) == 0)
         b.ne 0x80234b4           // likely

    loc_0x08023484: // orphan
         x8 = [var_90h]           // 0x4 // tmp
         x9 = 0x80                // '\x80'
         x8 = [x8]                // 0xcf // 207
         if ((x8 & 0x400000) == 0)
         w8 = ~0xfff              // '\xff\x0f'
         csel x8,x9,x8, eq
         if (x8 == x22)
         b.ls 0x80234b4           // unlikely

    loc_0x080234a4: // orphan
         x8 = [var_78h]           // 0x4
         w20 = 0x1
         [x8] = x22
         jmp 0x8023438

    loc_0x080234b4: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8023480, 0x80234a0
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x80234bc ()             // "`" // 0x80234bc(0x0, 0x0, 0x0, 0x0)
         if w0 jmp 0x80234cc      // unlikely

    loc_0x080234c4: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80234e4
         x1 = [var_98h]           // 0x4
         jmp 0x8023438

    loc_0x080234cc: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80234c0
         x8 = [var_68h]           // 0x4
         x0 = 0x8023000
         x0 = x0 + 0              // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = [x8 + 0x10]         // 0xcf // 207
         0x80234e0 ()             // 0x80234e0(0x8023000, 0x0, -1, 0x0)
         jmp 0x80234c4

    loc_0x080234e8: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80233f0
         w9 = 0x1
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x8] = (byte) w9
         0x80234f8 ()             // 0x80234f8(0x0, 0x0, 0x0, 0x0)
         x8 = [var_68h]           // 0x4
         w2 = [x21 + 0x618]       // 0xdc // 220
         x9 = 0x8023000
         x9 = x9 + 0
         x0 = 0x8023000
         x0 = x0 + 0              // int64_t arg1
         w1 = [x8 + 0x10]         // 0xcf // 207
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = [x8 + x9]           // 0xd0000000cf // 893353197775
         x8 = [var_78h]           // 0x4
         w5 = [x25 + 0x24]        // 0xe0 // 224
         x6 = [x25 + 0x18]        // 0xe0 // 224
         x4 = [x8]                // 0xcf // 207
         0x8023530 ()             // 0x8023530(0x8023000, -1, -1, 0xa9464ff4)
         x1 = [var_98h]           // 0x4
         if x20 jmp 0x8023408     // unlikely

    loc_0x0802353c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023404
         x9 = [var_68h]           // 0x4
         x1 = [x25 + 0x2560]      // 0xe0 // 224 // int64_t arg2
         x0 = 0x8023000
         x0 = x0 + 0              // int64_t arg1
         w3 = [x21 + 0x618]       // 0xdc // 220
         w2 = [x9 + 0x10]         // 0xd0 // 208
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [var_78h]          // 0x4
         x6 = [x25 + 0x18]        // 0xe0 // 224
         x5 = [x10]               // 0xd1 // 209
         x10 = 0x8023000
         x10 = x10 + 0
         w4 = [x8 + x10]          // 0xd1000000cf // 897648165071
         w7 = (byte) [x9 + 0x7f0] // 0xd0 // 208
         w8 = (byte) [x9 + 0x7e0] // 0xd0 // 208
         w9 = (byte) [x9 + 0x7e1] // 0xd0 // 208
         [sp] = w8
         [var_0h_16] = w9
         0x8023584 ()             // 0x8023584(0x8023000, 0x0, -1, -1)
         x1 = [var_98h]           // 0x4
         if (w24 == 1)
         b.ge 0x8023410           // unlikely

    loc_0x08023594: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x802340c
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08023598: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023440
         if (w23 == 1)
         b.lt 0x802365c           // unlikely

    loc_0x080235a0: // orphan
         x21 = [var_90h]          // 0x4 // tmp
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = [x21 + 0x10]       // 0xdc // 220
         w10 = w10 + 1
         [x21 + 0x10] = w10
         x10 = var_a0h
         x22 = [var_70h]          // 0x4
         x27 = [var_80h]          // 0x4
         jmp 0x80235d4

    loc_0x080235c8: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x80235e8, 0x80235fc
         x9 = x9 + 1
         if (x9 == x19)
         b.ge 0x8023600           // likely

    loc_0x080235d4: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80235c4
         if (x9 == 0x10)
         b.eq 0x80352f8           // fcn.080339b4+0x1944 // unlikely

    loc_0x080235dc: // orphan
         x11 = x10 + x9,lsl 2
         w12 = [var_cch]          // 0xd2 // 210
         if (w12 == 0x1f)
         b.hi 0x80235c8           // likely

    loc_0x080235ec: // orphan
         x12 = x12 << 4
         w11 = [var_10ch]         // 0xd2 // 210
         w8 = w8 + 1
         [x22 + x12] = w11
         jmp 0x80235c8

    loc_0x08023600: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80235d0
         if (w8 == 0)
         cset w19,gt
         if (w8 == 1)
         b.lt 0x8023638           // likely

    loc_0x08023610: // orphan
         jmp 0x80352fc

    loc_0x08023618: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8035308, 0x8035314, 0x8035358
         x8 = 0x8023000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x8023638     // unlikely

    loc_0x08023624: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x1 = [var_98h]           // 0x4
         w24 = 0x1
         jmp 0x802363c

    loc_0x08023638: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x802360c, 0x8023620
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802363c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023634
         x8 = [x21 + 0x10]        // 0xdc // 220
         x8 = x8 - 1
         [x21 + 0x10] = w8
         b.eq 0x8024c64           // unlikely

    loc_0x0802364c: // orphan
         x8 = [x21 + 0x10]        // 0xdc // 220
         if !x8 jmp 0x8024c64     // unlikely

    loc_0x08023654: // orphan
         tbnz w20,0,0x80243a8     // fcn.080339b4-0xf60c // unlikely

    loc_0x08023658: // orphan
         jmp 0x8023674

    loc_0x0802365c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x802359c
         x21 = [var_90h]          // 0x4 // tmp
         x22 = [var_70h]          // 0x4
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = [var_80h]          // 0x4
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbnz w20,0,0x80243a8     // fcn.080339b4-0xf60c // unlikely

    loc_0x08023674: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023658
         x20 = [var_68h]          // 0x4
         w8 = (byte) [x20 + 0x7e1] // 0xdb // 219
         if !w8 jmp 0x80236ac     // unlikely

    loc_0x08023680: // orphan
         x0 = 0x8023000
         x0 = x0 + 0              // int64_t arg1
         x1 = 0x8023000
         x1 = x1 + 0              // int64_t arg2
         0x8023690 ()             // 0x8023690(0x8023000, 0x8023000, 0x0, 0x0)
         if w0 jmp 0x8023800      // likely

    loc_0x08023698: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x802382c
         x1 = 0x8023000
         x1 = x1 + 0              // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_disable_emulation () // sym.brk_disable_emulation(0x0, 0x8023000, 0x0)
         jmp 0x80243a8            // fcn.080339b4-0xf60c

    loc_0x080236ac: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x802367c
         x28 = [x1 + 0x100]       // 0xc8 // 200
         w25 = [x25 + 0x24]       // 0xe0 // 224
         x0 = x27 + 0x300         // int64_t arg1
         w2 = 0x150
         [var_0h_2] = w19
         [var_0h_3] = x0
         0x80236c4 ()             // 0x80236c4(0x300, 0x0, 0x150, 0x0)
         x8 = var_260h
         w0 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80236d0 ()             // 0x80236d0(0x0, 0x0, 0x150, 0x0)
         x8 = [var_268h]          // 0x4
         w9 = [var_264h]
         if ((x8 & 0x30) == 0)
         ccmp w9,0,0, ne
         cset w8,eq
         [var_0h_4] = w8
         b.ne 0x8023700           // likely

    loc_0x080236f0: // orphan
         x1 = [x20 + 0x80]        // 0xdb // 219 // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         sym.brk_write_ttbr0 ()   // sym.brk_write_ttbr0(0x0, -1, 0x0, 0x0)

    loc_0x08023700: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80236ec
         w8 = 0xc0                // '\xc0'
         w19 = 0x9f80             // '\x80\x9f'
         x23 = 0x8023000
         bics wzr,w8,w25          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x802374c           // likely

    loc_0x08023714: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80237fc
         w8 = w19 + 0xe,lsl 12
         w9 = 0x8000
         w8 = w25 & w8
         w9 = 0xf00
         if (w8 == w9)
         b.ne 0x802386c           // likely

    loc_0x0802372c: // orphan
         tbnz w25,0x16,0x802386c  // unlikely

    loc_0x08023730: // orphan
         ubfx w8,w25,0x13, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x802386c     // likely

    loc_0x08023738: // orphan
         tbnz w25,0x15,0x8023830  // unlikely

    loc_0x0802373c: // orphan
         tbnz w25,0x14,0x8023838  // unlikely

    loc_0x08023740: // orphan
         tbz w25,0x13,0x802386c   // likely

    loc_0x08023744: // orphan
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802383c

    loc_0x0802374c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023710
         w8 = w25 & 0xfffffc00
         w9 = 0x27ff              // '\xff''
         w26 = 0x1
         w8 = w8 & 0xff3fffff
         w9 = 0x4e21              // '!N'
         if (w8 == w9)
         jmp ifgt 0x8023794       // unlikely

    loc_0x08023768: // orphan
         w9 = 0x27ff              // '\xff''
         w9 = 0x2e21              // '!.'
         if (w8 == w9)
         jmp ifgt 0x80237c0       // unlikely

    loc_0x08023778: // orphan
         w9 = 0x2800
         w9 = 0xe21               // '!\x0e'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x08023788: // orphan
         w9 = 0x4800
         w9 = 0xe21               // '!\x0e'
         jmp 0x80237f4

    loc_0x08023794: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023764
         w9 = 0x27ff              // '\xff''
         w9 = 0x6e21              // '!n'
         if (w8 == w9)
         jmp ifgt 0x80237dc       // unlikely

    loc_0x080237a4: // orphan
         w9 = 0x2800
         w9 = 0x4e21              // '!N'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x080237b4: // orphan
         w9 = 0x4800
         w9 = 0x4e21              // '!N'
         jmp 0x80237f4

    loc_0x080237c0: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023774
         w9 = 0x2800
         w9 = 0x2e21              // '!.'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x080237d0: // orphan
         w9 = 0x4800
         w9 = 0x2e21              // '!.'
         jmp 0x80237f4

    loc_0x080237dc: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80237a0
         w9 = 0x2800
         w9 = 0x6e21              // '!n'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x080237ec: // orphan
         w9 = 0x4800
         w9 = 0x6e21              // '!n'

    loc_0x080237f4: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8023790, 0x80237bc, 0x80237d8
         if (w8 == w9)
         b.eq 0x8023a64           // likely

    loc_0x080237fc: // orphan
         jmp 0x8023714

    loc_0x08023800: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023694
         w1 = [x20 + 0x10]        // 0xdb // 219
         w2 = [x21 + 0x618]       // 0xdc // 220
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x8023000
         x9 = x9 + 0
         x0 = 0x8023000
         x0 = x0 + 0              // int64_t arg1
         w3 = [x8 + x9]           // 0xd0000000cf // 893353197775
         x8 = [var_78h]           // 0x4
         x4 = [x8]                // 0xcf // 207
         0x8023828 ()             // 0x8023828(0x8023000, -1, -1, 0xa9464ff4)
         jmp 0x8023698

    loc_0x08023830: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023738
         w9 = 0x2
         jmp 0x802383c

    loc_0x08023838: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x802373c
         w9 = 0x1

    loc_0x0802383c: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8023748, 0x8023834
         ubfx w10,w25,0x10, 3     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = 0x8
         w8 = w10 | w8,lsl 3
         w10 = w11 << w9
         if (w8 == w10)
         b.lo 0x802386c           // likely

    loc_0x08023854: // orphan
         w10 = 0x10
         w9 = w10 << w9
         if (w8 == w9)
         b.hs 0x802386c           // unlikely

    loc_0x08023864: // orphan
         w26 = 0x1
         jmp 0x8023a64

    loc_0x0802386c: // orphan
         // XREFS: CODE 0x08023728  CODE 0x0802372c  CODE 0x08023734  
         // XREFS: CODE 0x08023740  CODE 0x08023850  CODE 0x08023860  
         w9 = 0xb7ff              // '\xff\xb7'
         w8 = w25 & 0xfffffc00
         w26 = 0x1
         w9 = 0x4e31              // '1N'
         if (w8 == w9)
         jmp ifle 0x80238d0       // likely

    loc_0x08023884: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4eb1              // '\xb1N'
         if (w8 == w9)
         jmp ifle 0x8023958       // likely

    loc_0x08023894: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x6e70              // 'pn'
         if (w8 == w9)
         jmp ifle 0x8023a18       // likely

    loc_0x080238a4: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x6eb0              // '\xb0n'
         if (w8 == w9)
         jmp ifgt 0x8023a44       // unlikely

    loc_0x080238b4: // orphan
         w9 = 0xa800
         w9 = 0x6e70              // 'pn'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x080238c4: // orphan
         w9 = 0xa800
         w9 = 0x6e71              // 'qn'
         jmp 0x8023a5c

    loc_0x080238d0: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023880
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e30              // '0.'
         if (w8 == w9)
         jmp ifgt 0x802391c       // unlikely

    loc_0x080238e0: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0xe70               // 'p\x0e'
         if (w8 == w9)
         jmp ifgt 0x8023994       // unlikely

    loc_0x080238f0: // orphan
         w9 = 0xa800
         w9 = 0xe30               // '0\x0e'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x08023900: // orphan
         w9 = 0xa800
         w9 = 0xe31               // '1\x0e'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x08023910: // orphan
         w9 = 0xb800
         w9 = 0xe31               // '1\x0e'
         jmp 0x8023a5c

    loc_0x0802391c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80238dc
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e71              // 'q.'
         if (w8 == w9)
         jmp ifgt 0x80239c0       // unlikely

    loc_0x0802392c: // orphan
         w9 = 0xa800
         w9 = 0x2e30              // '0.'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x0802393c: // orphan
         w9 = 0xa800
         w9 = 0x2e31              // '1.'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x0802394c: // orphan
         w9 = 0xa800
         w9 = 0x2e70              // 'p.'
         jmp 0x8023a5c

    loc_0x08023958: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023890
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4e71              // 'qN'
         if (w8 == w9)
         jmp ifgt 0x80239ec       // unlikely

    loc_0x08023968: // orphan
         w9 = 0xb800
         w9 = 0x4e31              // '1N'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x08023978: // orphan
         w9 = 0xa800
         w9 = 0x4e70              // 'pN'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x08023988: // orphan
         w9 = 0xa800
         w9 = 0x4e71              // 'qN'
         jmp 0x8023a5c

    loc_0x08023994: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80238ec
         w9 = 0xa800
         w9 = 0xe70               // 'p\x0e'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x080239a4: // orphan
         w9 = 0xa800
         w9 = 0xe71               // 'q\x0e'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x080239b4: // orphan
         w9 = 0xb800
         w9 = 0xe71               // 'q\x0e'
         jmp 0x8023a5c

    loc_0x080239c0: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023928
         w9 = 0xa800
         w9 = 0x2e71              // 'q.'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x080239d0: // orphan
         w9 = 0xa800
         w9 = 0x4e30              // '0N'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x080239e0: // orphan
         w9 = 0xa800
         w9 = 0x4e31              // '1N'
         jmp 0x8023a5c

    loc_0x080239ec: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023964
         w9 = 0xb800
         w9 = 0x4e71              // 'qN'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x080239fc: // orphan
         w9 = 0xa800
         w9 = 0x4eb0              // '\xb0N'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x08023a0c: // orphan
         w9 = 0xa800
         w9 = 0x4eb1              // '\xb1N'
         jmp 0x8023a5c

    loc_0x08023a18: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80238a0
         w9 = 0xb800
         w9 = 0x4eb1              // '\xb1N'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x08023a28: // orphan
         w9 = 0xa800
         w9 = 0x6e30              // '0n'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x08023a38: // orphan
         w9 = 0xa800
         w9 = 0x6e31              // '1n'
         jmp 0x8023a5c

    loc_0x08023a44: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80238b0
         w9 = 0xa800
         w9 = 0x6eb0              // '\xb0n'
         if (w8 == w9)
         b.eq 0x8023a64           // unlikely

    loc_0x08023a54: // orphan
         w9 = 0xa800
         w9 = 0x6eb1              // '\xb1n'

    loc_0x08023a5c: // orphan
         // XREFS: CODE 0x080238cc  CODE 0x08023918  CODE 0x08023954  
         // XREFS: CODE 0x08023990  CODE 0x080239bc  CODE 0x080239e8  
         // XREFS: CODE 0x08023a14  CODE 0x08023a40  
         if (w8 == w9)
         b.ne 0x80244c8           // unlikely

    loc_0x08023a64: // orphan
         // XREFS(24)
         w8 = w26 ^ 1
         w8 = w24 | w8
         tbz w8,0,0x8023a7c       // unlikely

    loc_0x08023a70: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8024500
         w14 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w15 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8023ac8

    loc_0x08023a7c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023a6c
         w8 = [x21 + 0x10]        // 0xdc // 220
         w8 = w8 + 1
         [x21 + 0x10] = w8
         x8 = [x23]               // 0xde // 222
         if !x8 jmp 0x8023a98     // likely

    loc_0x08023a90: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)

    loc_0x08023a98: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023a8c
         x0 = x27 + 0x100         // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x200
         0x8023aa4 ()             // 0x8023aa4(0x100, 0x0, 0x200, 0x0)
         w15 = [x21 + 0x10c0]     // 0xdc // 220
         w14 = [x21 + 0x10c4]     // 0xdc // 220
         x8 = [x21 + 0x10]        // 0xdc // 220
         x8 = x8 - 1
         [x21 + 0x10] = w8
         b.eq 0x8024eac           // unlikely

    loc_0x08023ac0: // orphan
         x8 = [x21 + 0x10]        // 0xdc // 220
         if !x8 jmp 0x8024eac     // unlikely

    loc_0x08023ac8: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8023a78, 0x8024ec0
         x8 = [var_78h]           // 0x4
         ubfx x1,x25,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h_5] = xzr
         [var_0h_6] = xzr
         x27 = [x8]               // 0xcf // 207
         if (w1 == 3)
         [var_0h_7] = xzr
         [var_0h_8] = xzr
         [var_0h_9] = xzr
         [var_210h] = xzr
         [var_0h_10] = xzr
         [sp, 0x1f8] = (xzr,2)
         [var_0h_11] = xzr
         b.ne 0x8023b98           // likely

    loc_0x08023b00: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8023c6c, 0x8023d70
         w8 = w25 & w19
         w9 = 0xf00
         if (w8 == w9)
         b.ne 0x8023b20           // likely

    loc_0x08023b10: // orphan
         ubfx w10,w25,0xb, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w10 - 0x14
         if (w8 != 4)
         b.hs 0x8023c78           // likely

    loc_0x08023b20: // orphan
         // XREFS: CODE 0x08023b0c  CODE 0x08023c78  CODE 0x08023c80  
         // XREFS: CODE 0x08023c8c  CODE 0x0802451c  CODE 0x0802452c  
         // XREFS: CODE 0x08024538  
         w8 = 0xb7ff              // '\xff\xb7'
         w10 = w25 & 0xfffffc00
         w8 = 0x4e31              // '1N'
         if (w10 == w8)
         w8 = 0x1
         jmp ifle 0x8023be0       // likely

    loc_0x08023b38: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4eb1              // '\xb1N'
         if (w10 == w9)
         jmp ifle 0x8023ce8       // likely

    loc_0x08023b48: // orphan
         w8 = 0xa7ff              // '\xff\xa7'
         w8 = 0x6e70              // 'pn'
         if (w10 == w8)
         jmp ifle 0x8024024       // likely

    loc_0x08023b58: // orphan
         w8 = 0xa7ff              // '\xff\xa7'
         w8 = 0x6eb0              // '\xb0n'
         if (w10 == w8)
         jmp ifgt 0x8024064       // unlikely

    loc_0x08023b68: // orphan
         w8 = 0xa800
         w8 = 0x6e70              // 'pn'
         if (w10 == w8)
         b.eq 0x80241b4           // unlikely

    loc_0x08023b78: // orphan
         w8 = 0xa800
         w8 = 0x6e71              // 'qn'
         if (w10 == w8)
         b.ne 0x80243d0           // likely

    loc_0x08023b88: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x8
         w12 = 0x10
         jmp 0x8024240

    loc_0x08023b98: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023afc
         w8 = w25 & 0xfffffc00
         w9 = 0x27ff              // '\xff''
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 & 0xff3fffff
         w9 = 0x4e21              // '!N'
         if (w8 == w9)
         jmp ifgt 0x8023c3c       // unlikely

    loc_0x08023bb4: // orphan
         w9 = 0x27ff              // '\xff''
         w9 = 0x2e21              // '!.'
         if (w8 == w9)
         jmp ifgt 0x8023d34       // unlikely

    loc_0x08023bc4: // orphan
         w9 = 0x2800
         w9 = 0xe21               // '!\x0e'
         if (w8 == w9)
         b.eq 0x8023d80           // unlikely

    loc_0x08023bd4: // orphan
         w9 = 0x4800
         w9 = 0xe21               // '!\x0e'
         jmp 0x8023c64

    loc_0x08023be0: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023b34
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e30              // '0.'
         if (w10 == w9)
         w9 = 0x8
         jmp ifgt 0x8023c98       // unlikely

    loc_0x08023bf4: // orphan
         w11 = 0xa7ff             // '\xff\xa7'
         w11 = 0xe70              // 'p\x0e'
         if (w10 == w11)
         jmp ifgt 0x8023f68       // unlikely

    loc_0x08023c04: // orphan
         w11 = 0xa800
         w11 = 0xe30              // '0\x0e'
         if (w10 == w11)
         b.eq 0x80240a4           // unlikely

    loc_0x08023c14: // orphan
         w8 = 0xa800
         w8 = 0xe31               // '1\x0e'
         if (w10 == w8)
         b.eq 0x802409c           // unlikely

    loc_0x08023c24: // orphan
         w8 = 0xb800
         w8 = 0xe31               // '1\x0e'
         if (w10 == w8)
         w8 = 0x8
         b.eq 0x80241d4           // unlikely

    loc_0x08023c38: // orphan
         jmp 0x80243d0

    loc_0x08023c3c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023bb0
         w9 = 0x27ff              // '\xff''
         w9 = 0x6e21              // '!n'
         if (w8 == w9)
         jmp ifgt 0x8023d50       // unlikely

    loc_0x08023c4c: // orphan
         w9 = 0x2800
         w9 = 0x4e21              // '!N'
         if (w8 == w9)
         b.eq 0x8023d80           // unlikely

    loc_0x08023c5c: // orphan
         w9 = 0x4800
         w9 = 0x4e21              // '!N'

    loc_0x08023c64: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023bdc
         x20 = [var_68h]          // 0x4
         if (w8 == w9)
         b.ne 0x8023b00           // unlikely

    loc_0x08023c70: // orphan
         w20 = 0x1
         jmp 0x8023d80

    loc_0x08023c78: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023b1c
         tbnz w25,0x16,0x8023b20  // unlikely

    loc_0x08023c7c: // orphan
         ubfx w8,w25,0x13, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x8023b20     // likely

    loc_0x08023c84: // orphan
         tbnz w25,0x15,0x8024094  // unlikely

    loc_0x08023c88: // orphan
         tbnz w25,0x14,0x8024504  // unlikely

    loc_0x08023c8c: // orphan
         tbz w25,0x13,0x8023b20   // likely

    loc_0x08023c90: // orphan
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8024508

    loc_0x08023c98: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023bf0
         w11 = 0xa7ff             // '\xff\xa7'
         w11 = 0x2e71             // 'q.'
         if (w10 == w11)
         jmp ifgt 0x8023fa4       // unlikely

    loc_0x08023ca8: // orphan
         w11 = 0xa800
         w12 = w9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = 0x2e30             // '0.'
         if (w10 == w11)
         b.eq 0x8024240           // unlikely

    loc_0x08023cbc: // orphan
         w8 = 0xa800
         w8 = 0x2e31              // '1.'
         if (w10 == w8)
         b.eq 0x80240b4           // unlikely

    loc_0x08023ccc: // orphan
         w8 = 0xa800
         w8 = 0x2e70              // 'p.'
         if (w10 == w8)
         b.ne 0x80243d0           // likely

    loc_0x08023cdc: // orphan
         w9 = 0x4
         w12 = 0x10
         jmp 0x802423c

    loc_0x08023ce8: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023b44
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0x4e71              // 'qN'
         if (w10 == w9)
         jmp ifgt 0x8023fdc       // unlikely

    loc_0x08023cf8: // orphan
         w8 = 0xb800
         w8 = 0x4e31              // '1N'
         if (w10 == w8)
         b.eq 0x80240e8           // unlikely

    loc_0x08023d08: // orphan
         w8 = 0xa800
         w8 = 0x4e70              // 'pN'
         if (w10 == w8)
         b.eq 0x80240f4           // unlikely

    loc_0x08023d18: // orphan
         w8 = 0xa800
         w8 = 0x4e71              // 'qN'
         if (w10 == w8)
         b.ne 0x80243d0           // likely

    loc_0x08023d28: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x8
         jmp 0x80240fc

    loc_0x08023d34: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023bc0
         w9 = 0x2800
         w9 = 0x2e21              // '!.'
         if (w8 == w9)
         b.eq 0x8023d7c           // unlikely

    loc_0x08023d44: // orphan
         w9 = 0x4800
         w9 = 0x2e21              // '!.'
         jmp 0x8023d68

    loc_0x08023d50: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023c48
         w9 = 0x2800
         w9 = 0x6e21              // '!n'
         if (w8 == w9)
         b.eq 0x8023d7c           // unlikely

    loc_0x08023d60: // orphan
         w9 = 0x4800
         w9 = 0x6e21              // '!n'

    loc_0x08023d68: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023d4c
         x20 = [var_68h]          // 0x4
         if (w8 == w9)
         b.ne 0x8023b00           // unlikely

    loc_0x08023d74: // orphan
         w20 = 0x2
         jmp 0x8023d80

    loc_0x08023d7c: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8023d40, 0x8023d5c
         w20 = 0x3

    loc_0x08023d80: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8023bd0, 0x8023c58, 0x8023c74, 0x8023d78
         w8 = 0x10
         w10 = 0x40               // '@'
         w11 = w25 << 1
         x8 = x8 << x1
         [var_0h_12] = w26
         x26 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx x9,x8,1, 0x1f       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w5 = (unsigned) w10 / w9
         ubfx x10,x25,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x17 = x22 + x10,lsl 4
         x10 = x25 & 0x1f
         w4 = w5 & w11,asr 31
         x11 = [x17 + 8]          // 0xd8 // 216
         tbnz w25,0x1e,0x8023dc4  // unlikely

    loc_0x08023db8: // orphan
         x12 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x13 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8023dcc

    loc_0x08023dc4: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023db4
         x12 = x22 + x10,lsl 4
         (x12, 2) = 3

    loc_0x08023dcc: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023dc0
         x3 = ~0
         w16 = w9 - 1
         w0 = w1 | 4
         x2 = x3 << x9
         x6 = x3 << x8
         x16 = x3 << x16
         if (w1 == 2)
         w4 = w4 * w9
         x17 = [x17]              // 0xd8 // 216
         x1 = ~x2
         csinv x3,x3,x6, eq
         if (w5 == 1)
         x6 = x11 << 1
         x7 = x1 >> 1
         w14 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w15 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = ~x16
         csinc w5,w5,wzr, hi
         w19 = w20                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = 0x8023000
         x20 = x20 + 0
         jmp 0x8023e8c

    loc_0x08023e8c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023e20
         w21 = w14 << w0
         w23 = ~w21
         x24 = x17 >> x21
         x25 = x11 >> x21
         x23 = x6 << x23
         if ((x21 & 0x40) == 0)
         x23 = x23 | x24
         csel x21,x25,x23, ne
         x23 = 0x8023eac
         x24 = [x20 + x19,lsl 2]  // 0xda000000db // 936302870747
         x23 = x23 + x24
         x21 = x3 & x21
         br x23

    loc_0x08023f68: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023c00
         w9 = 0xa800
         w9 = 0xe70               // 'p\x0e'
         if (w10 == w9)
         b.eq 0x80240c8           // unlikely

    loc_0x08023f78: // orphan
         w8 = 0xa800
         w8 = 0xe71               // 'q\x0e'
         if (w10 == w8)
         b.eq 0x80240c4           // unlikely

    loc_0x08023f88: // orphan
         w8 = 0xb800
         w8 = 0xe71               // 'q\x0e'
         if (w10 == w8)
         b.ne 0x80243d0           // likely

    loc_0x08023f98: // orphan
         w8 = 0x4
         w9 = 0x10
         jmp 0x80241d4

    loc_0x08023fa4: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023ca4
         w8 = 0xa800
         w8 = 0x2e71              // 'q.'
         if (w10 == w8)
         b.eq 0x8024198           // unlikely

    loc_0x08023fb4: // orphan
         w8 = 0xa800
         w8 = 0x4e30              // '0N'
         if (w10 == w8)
         b.eq 0x80240d0           // unlikely

    loc_0x08023fc4: // orphan
         w8 = 0xa800
         w8 = 0x4e31              // '1N'
         if (w10 == w8)
         b.ne 0x80243d0           // likely

    loc_0x08023fd4: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80240d4

    loc_0x08023fdc: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023cf4
         w9 = 0xb800
         w9 = 0x4e71              // 'qN'
         if (w10 == w9)
         b.eq 0x80241a8           // unlikely

    loc_0x08023fec: // orphan
         w9 = 0xa800
         w9 = 0x4eb0              // '\xb0N'
         if (w10 == w9)
         b.eq 0x8024010           // unlikely

    loc_0x08023ffc: // orphan
         w8 = 0xa800
         // XREFS(35)
         w8 = 0x4eb1              // '\xb1N'
         if (w10 == w8)
         b.ne 0x80243d0           // likely

    loc_0x0802400c: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08024010: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023ff8
         w11 = 0x20
         w9 = 0x4
         w10 = ~0
         w12 = 0x20
         jmp 0x8024108

    loc_0x08024024: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023b54
         w8 = 0xb800
         w8 = 0x4eb1              // '\xb1N'
         if (w10 == w8)
         b.eq 0x80241cc           // unlikely

    loc_0x08024034: // orphan
         w8 = 0xa800
         w8 = 0x6e30              // '0n'
         if (w10 == w8)
         b.eq 0x8024234           // unlikely

    loc_0x08024044: // orphan
         w8 = 0xa800
         w8 = 0x6e31              // '1n'
         if (w10 == w8)
         b.ne 0x80243d0           // likely

    loc_0x08024054: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x10
         w12 = 0x8
         jmp 0x8024240

    loc_0x08024064: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023b64
         w8 = 0xa800
         w8 = 0x6eb0              // '\xb0n'
         if (w10 == w8)
         b.eq 0x80241c0           // unlikely

    loc_0x08024074: // orphan
         w8 = 0xa800
         w8 = 0x6eb1              // '\xb1n'
         if (w10 == w8)
         b.ne 0x80243d0           // likely

    loc_0x08024084: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x4
         w12 = 0x20
         jmp 0x8024240

    loc_0x08024094: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023c84
         w19 = 0x2
         jmp 0x8024508

    loc_0x0802409c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023c20
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x8

    loc_0x080240a4: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023c10
         w11 = 0x38               // '8'
         w10 = 0xff               // '\xff'
         w12 = 0x8
         jmp 0x8024108

    loc_0x080240b4: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023cc8
         w12 = 0x8
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w12                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8024240

    loc_0x080240c4: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023f84
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080240c8: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023f74
         w9 = 0x4
         jmp 0x80240fc

    loc_0x080240d0: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023fc0
         w8 = 0x1

    loc_0x080240d4: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023fd8
         w12 = 0x8
         w9 = 0x10
         w11 = 0x38               // '8'
         w10 = 0xff               // '\xff'
         jmp 0x8024108

    loc_0x080240e8: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023d04
         w8 = 0x10
         w9 = 0x8
         jmp 0x80241d4

    loc_0x080240f4: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023d14
         w9 = 0x8
         w8 = 0x1

    loc_0x080240fc: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8023d30, 0x80240cc
         w12 = 0x10
         w11 = 0x30               // '0'
         w10 = 0xffff             // '\xff\xff'

    loc_0x08024108: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8024020, 0x80240b0, 0x80240e4
         ubfx w13,w25,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9 - 1
         w16 = w12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x14 = x22 + w13,uxtw 4
         (x13, 2) = 3
         x15 = x10 & x13
         x15 = x15 << x11
         x11 = x15 >> x11
         x15 = x14 << 1

    loc_0x0802412c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8024190
         w17 = w16                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = ~w16
         w16 = w16 + w12
         x1 = x13 >> x17
         x0 = x15 << x0
         x2 = x14 >> x17
         if ((x17 & 0x40) == 0)
         x0 = x0 | x1
         csel x17,x2,x0, ne
         if (w12 == 8)
         x0 = x10 & x17
         x17 = (char) w17
         x1 = (short) w0          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x17,x0,x17, ne
         if (w12 == 0x10)
         csel x17,x1,x17, eq
         if (w12 == 0x20)
         csel x17,x2,x17, eq
         if (x17 == x11)
         csel x0,x17,x11, gt
         csel x11,x17,x11, lt
         if (w8 == 0)
         csel x11,x0,x11, ne
         w9 = w9 - 1
         b.ne 0x802412c           // unlikely

    loc_0x08024194: // orphan
         jmp 0x80242ac

    loc_0x08024198: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023fb0
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x4
         w12 = 0x10
         jmp 0x8024240

    loc_0x080241a8: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023fe8
         w8 = 0x8
         w9 = 0x10
         jmp 0x80241d4

    loc_0x080241b4: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023b74
         w9 = 0x8
         w12 = 0x10
         jmp 0x802423c

    loc_0x080241c0: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8024070
         w9 = 0x4
         w12 = 0x20
         jmp 0x802423c

    loc_0x080241cc: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8024030
         w8 = 0x4
         w9 = 0x20

    loc_0x080241d4: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8023c34, 0x8023fa0, 0x80240f0, 0x80241b0
         ubfx x10,x25,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x14 = ~0
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x16 = x14 << x9
         x11 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x22 + x10,lsl 4
         (x14, 2) = 3
         x10 = ~x16
         x15 = x13 << 1

    loc_0x080241f8: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x802422c
         w16 = w12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w17 = ~w12
         w12 = w12 + w9
         x0 = x14 >> x16
         x17 = x15 << x17
         x1 = x13 >> x16
         if ((x16 & 0x40) == 0)
         x17 = x17 | x0
         csel x16,x1,x17, ne
         w8 = w8 - 1
         x16 = x16 & x10
         x11 = x16 + x11
         x11 = x11 & x10
         b.ne 0x80241f8           // likely

    loc_0x08024230: // orphan
         jmp 0x80242ac

    loc_0x08024234: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8024040
         w9 = 0x10
         w12 = 0x8

    loc_0x0802423c: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8023ce4, 0x80241bc, 0x80241c8
         w8 = 0x1

    loc_0x08024240: // orphan
         // XREFS: CODE 0x08023b94  CODE 0x08023cb8  CODE 0x08024060  
         // XREFS: CODE 0x08024090  CODE 0x080240c0  CODE 0x080241a4  
         ubfx w10,w25,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = ~0
         w9 = w9 - 1
         x11 = x11 << x12
         w16 = w12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x22 + w10,uxtw 4
         (x14, 2) = 3
         x10 = ~x11
         x15 = x13 << 1
         bic x11,x14,x11          // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08024268: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80242a8
         w17 = w16                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = ~w16
         w16 = w16 + w12
         x1 = x14 >> x17
         x0 = x15 << x0
         x2 = x13 >> x17
         if ((x17 & 0x40) == 0)
         x0 = x0 | x1
         csel x17,x2,x0, ne
         x17 = x17 & x10
         if (x17 == x11)
         csel x0,x17,x11, hi
         csel x11,x17,x11, lo
         if (w8 == 0)
         csel x11,x0,x11, ne
         w9 = w9 - 1
         b.ne 0x8024268           // unlikely

    loc_0x080242ac: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8024194, 0x8024230
         x8 = x25 & 0x1f
         x9 = x11 & x10
         x10 = x27 + 4
         x8 = x22 + x8,lsl 4
         [x8] = (x9,2)
         x8 = [var_78h]           // 0x4
         [x8] = x10

    loc_0x080243d0: // orphan
         // XREFS: CODE 0x08023b84  CODE 0x08023c38  CODE 0x08023cd8  
         // XREFS: CODE 0x08023d24  CODE 0x08023f94  CODE 0x08023fd0  
         // XREFS: CODE 0x08024008  CODE 0x08024050  CODE 0x08024080  
         w8 = 0xfc00
         w9 = 0xf200
         w8 = 0xbf20              // ' \xbf'
         w8 = w25 & w8
         w9 = w8 + w9
         extr w11,w8,w9, 0xc
         if (w11 == 8)
         b.hs 0x8024564           // likely

    loc_0x080243f0: // orphan
         ubfx x8,x25,5, 5         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_298h] = xzr
         ubfx x10,x25,0x10, 5     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_290h] = xzr
         if ((w25 & 0x40000000) == 0)
         w13 = 0x8
         x8 = x22 + x8,lsl 4
         [var_288h] = xzr
         [var_280h] = xzr
         [var_278h] = xzr
         [var_270h] = xzr
         x9 = [x8]                // 0xcf // 207
         [var_260h] = x9
         ubfx w9,w25,0xd, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = [x8 + 8]           // 0xcf // 207
         w8 = 0x10
         csel w8,w13,w8, eq
         [var_268h] = x12
         if !w9 jmp 0x80244a8     // likely

    loc_0x0802443c: // orphan
         x12 = x25 >> 5
         w13 = w12 + 1            // 0x8000000
                                  // loc.imp.param_ops_int
         w13 = w13 & 0x1f
         x14 = x22 + w13,uxtw 4
         x13 = [x14]              // 0xd5 // 213
         [var_270h] = x13
         w13 = w9 + 1
         x14 = [x14 + 8]          // 0xd5 // 213
         if (w13 == 2)
         [var_278h] = x14
         b.eq 0x80244a8           // unlikely

    loc_0x08024468: // orphan
         w14 = w12 + 2
         if (w13 == 3)
         w14 = w14 & 0x1f
         x14 = x22 + w14,uxtw 4
         x15 = [x14]              // 0xd5 // 213
         [var_280h] = x15
         x14 = [x14 + 8]          // 0xd5 // 213
         [var_288h] = x14
         b.eq 0x80244a8           // unlikely

    loc_0x0802448c: // orphan
         w12 = w12 + 3
         w12 = w12 & 0x1f
         x12 = x22 + w12,uxtw 4
         x13 = [x12]              // 0xd3 // 211
         [var_290h] = x13
         x12 = [x12 + 8]          // 0xd3 // 211
         [var_298h] = x12

    loc_0x080244a8: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8024438, 0x8024464, 0x8024488
         x15 = x22 + x10,lsl 4
         w14 = w9 << 4
         x9 = x25 & 0x1f
         x10 = [x15 + 8]          // 0xd6 // 214
         tbnz w11,0,0x8024890     // unlikely

    loc_0x080244bc: // orphan
         x11 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80248a0

    loc_0x080244c8: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023a60
         w8 = 0xfc00
         w9 = 0xf200
         w8 = 0xbf20              // ' \xbf'
         w8 = w25 & w8
         w9 = w8 + w9
         extr w8,w8,w9, 0xc
         if (w8 == 8)
         b.lo 0x8023a64           // unlikely

    loc_0x080244e8: // orphan
         x8 = var_260h
         w0 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80244f0 ()             // 0x80244f0(0x0, 0x0, 0x0, 0x0)
         w8 = [var_264h]
         if !w8 jmp 0x8024a44     // likely

    loc_0x080244fc: // orphan
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8023a70

    loc_0x08024504: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023c88
         w19 = 0x1

    loc_0x08024508: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8023c94, 0x8024098
         ubfx w9,w25,0x10, 3      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = 0x8
         w2 = w11 << w19
         w9 = w9 | w8,lsl 3
         if (w9 == w2)
         b.lo 0x8023b20           // likely

    loc_0x08024520: // orphan
         w8 = 0x10
         w8 = w8 << w19
         w9 = w8 - w9
         b.ls 0x8023b20           // likely

    loc_0x08024530: // orphan
         w10 = w10 - 0x10
         if (w10 == 3)
         b.hi 0x8023b20           // likely

    loc_0x0802453c: // orphan
         x11 = 0x8024000
         x11 = x11 + 0
         x12 = 0x8024544
         x13 = [x11 + x10,lsl 2]  // 0xd1000000d2 // 897648165074
         x12 = x12 + x13
         w10 = w25 & 0x20000000
         [sp, 0x38] = (w15,2)
         br x12

    loc_0x08024564: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80243ec
         x8 = var_260h
         w0 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x38] = (w15,2)
         0x8024570 ()             // 0x8024570(0x0, 0x0, 0x0, 0x0)
         x8 = [var_290h]          // 0x4
         x9 = [var_298h]          // 0x4
         x10 = [var_2a8h]         // 0x4
         x11 = [var_268h]         // 0x4
         [var_0h_13] = x28
         [var_0h_8] = x8
         x8 = [var_2a0h]          // 0x4
         [var_0h_7] = x9
         x9 = [var_270h]          // 0x4
         [var_0h_6] = x8
         x8 = [var_278h]          // 0x4
         [var_0h_5] = x10
         x10 = [var_260h]         // 0x4
         [var_200h] = x9
         x9 = [var_288h]          // 0x4
         [var_0h_10] = x8
         x8 = [var_280h]          // 0x4
         [sp, 0x1f0] = (x10,2)
         x10 = x10 >> 0x20
         [var_210h] = x8
         [var_0h_9] = x9
         if !w10 jmp 0x802499c    // likely

    loc_0x080245cc: // orphan
         // CODE XREF from fcn.080257ec @ 0x8025800
         w19 = 0x1
         jmp 0x8024ab8            // fcn.080339b4-0xeefc

    loc_0x08024890: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80244b8
         x11 = x22 + x9,lsl 4
         if ((w25 & 0x40000000) == 0)
         (x11, 2) = 3
         csel x12,xzr,x12, eq

    loc_0x080248a0: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80244c4
         x15 = [x15]              // 0xd6 // 214
         x16 = x10 << 1
         w13 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w14 = w14 + 0x10
         x17 = var_260h
         w0 = 0x7f                // '\x7f'
         w1 = 0xff                // '\xff'
         jmp 0x8024944

    loc_0x080248c0: // orphan
         x4 = x3 & 0xf0
         w3 = w3 << 3
         x4 = x17 + x4
         (x4, 2) = 3
         w6 = w3 & 0x78
         w3 = ~w3
         x19 = x6 & 0x38
         if ((x6 & 0x40) == 0)
         x6 = x1 << x2
         x7 = x5 << 1
         x4 = x4 >> x19
         x5 = x5 >> x19
         x3 = x7 << x3
         x3 = x3 | x4
         w4 = ~w13
         csel x3,x5,x3, ne
         x5 = x0 >> x4
         if ((x2 & 0x40) == 0)
         ubfx x7,x3,1, 7          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x3 & 0xff
         x2 = x3 << x2
         csel x5,x6,x5, ne
         csel x3,xzr,x6, ne
         x4 = x7 >> x4
         bic x12,x12,x5           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bic x11,x11,x3           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x3,x2,x4, ne
         csel x2,xzr,x2, ne
         x12 = x3 | x12
         x11 = x2 | x11

    loc_0x08024938: // orphan
         w8 = w8 - 1
         w13 = w13 + 8
         b.eq 0x8024984           // unlikely

    loc_0x08024944: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80248bc
         w2 = w13                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = ~w13
         x4 = x15 >> x2
         x3 = x16 << x3
         x5 = x10 >> x2
         if ((x2 & 0x40) == 0)
         x3 = x3 | x4
         csel x4,x5,x3, ne
         x3 = x4 & 0xff
         if (w14 == w3)
         b.ls 0x8024938           // likely

    loc_0x08024970: // orphan
         if (x3 == 0x3f)
         b.hi 0x80352f8           // fcn.080339b4+0x1944 // unlikely

    loc_0x08024978: // orphan
         if ((x4 & 0xc0) == 0)
         b.eq 0x80248c0           // unlikely

    loc_0x08024980: // orphan
         brk 0x1

    loc_0x08024984: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8024940
         x8 = x22 + w9,uxtw 4
         x9 = x27 + 4
         [x8] = (x11,2)
         x8 = [var_78h]           // 0x4
         [x8] = x9
         jmp 0x80242c8            // fcn.080339b4-0xf6ec

    loc_0x0802499c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80245c8
         w8 = [var_200h]          // 0x4
         w8 = w8 - 1
         if (w8 == 4)
         b.hi 0x80245cc           // likely

    loc_0x080249ac: // orphan
         x9 = 0x8024000
         x9 = x9 + 0
         x10 = 0x80249b4
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

    loc_0x08024a44: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80244f8
         x8 = [var_268h]          // 0x4
         if ((x8 & 0xc) == 0)
         b.ne 0x8023a64           // likely

    loc_0x08024a50: // orphan
         w8 = [var_274h]
         w8 = w8 & 0xfffffffe
         if (w8 == 6)
         b.ne 0x80244fc           // likely

    loc_0x08024a60: // orphan
         w8 = (byte) [var_28fh]   // 0x4
         w9 = (byte) [var_290h]   // 0x4
         w10 = (byte) [var_291h]  // 0x4
         w8 = w8 & 3
         w8 = w8 << 0xe
         bfi w8,w9,0xb, 3         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = (byte) [var_292h]   // 0x4
         bfi w8,w10,7, 4          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = (byte) [var_293h]  // 0x4
         bfi w8,w9,3, 4           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w10 & 6
         w8 = w8 | w9
         w9 = 0xda20              // ' \xda'
         if (w8 == w9)
         cset w26,eq
         jmp 0x8023a64

    loc_0x08024bac: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x80232ac, 0x80232b4
         0x8024bac ()             // 0x8024bac(0x0, 0x0, 0x0, 0x0)
         jmp 0x80232b8

    loc_0x08024be0: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023170
         w9 = 0x1
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         x2 = 0x8024000
         x2 = x2 + 0              // int64_t arg3
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w3 = 0x80                // '\x80'
         [x8] = (byte) w9
         0x8024c00 ()             // 0x8024c00(0x8024000, 0x0, 0x8024000, 0x80)
         brk 0x800

    loc_0x08024c0c: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80231bc
         w9 = 0x1
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         x2 = 0x8024000
         x2 = x2 + 0              // int64_t arg3
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w3 = 0x40                // '@'
         [x8] = (byte) w9
         0x8024c2c ()             // 0x8024c2c(0x8024000, 0x0, 0x8024000, 0x40)
         brk 0x800

    loc_0x08024c38: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80231f0
         w9 = 0x1
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         x2 = 0x8024000
         x2 = x2 + 0              // int64_t arg3
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w3 = 0x40                // '@'
         [x8] = (byte) w9
         0x8024c58 ()             // 0x8024c58(0x8024000, 0x0, 0x8024000, 0x40)
         brk 0x800

    loc_0x08024c64: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8023648, 0x8023650
         0x8024c64 ()             // 0x8024c64(0x0, 0x0, 0x0, 0x0)
         x1 = [var_98h]           // 0x4
         tbz w20,0,0x8023674      // likely

    loc_0x08024c70: // orphan
         jmp 0x80243a8            // fcn.080339b4-0xf60c

    loc_0x08024eac: // orphan
         // CODE XREFS from sym.brk_bp_handle_hit @ 0x8023abc, 0x8023ac4
         w24 = w14                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = w15                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8024eb4 ()             // 0x8024eb4(0x0, 0x0, 0x0, 0x0)
         w15 = w27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w14 = w24                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8023ac8

    loc_0x080271d0: // orphan
         if (w9 == 0x20)
         b.ne 0x80339b0           // likely

    loc_0x080271d8: // orphan
         q1 = [x10]               // 0xd1 // 209
         w10 = s1                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80292d0

    loc_0x080292c8: // orphan
         q1 = [x10]               // 0xd1 // 209
         x10 = d1                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080292d0: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x80271e4
         w11 = (byte) [var_210h]  // 0x4
         if (w11 == 0x1f)
         b.eq 0x802c5ec           // unlikely

    loc_0x080292dc: // orphan
         b.hs 0x80352f8           // fcn.080339b4+0x1944 // unlikely

    loc_0x080292e0: // orphan
         x12 = x10 & 0xffffffff
         if (w9 == 0x40)
         csel x9,x10,x12, eq
         x10 = [var_98h]          // 0x4
         [x10 + x11,lsl 3] = x9
         jmp 0x802c5ec

    loc_0x0802c5ec: // orphan
         // XREFS(367)
         mrs x10,fpsr             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x15 = [var_70h]          // 0x4
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = var_260h

    loc_0x0802c5fc: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x802c61c
         x12 = x11 + x9
         x14 = x15 + x9
         x9 = x9 + 0x10
         x13 = [var_268h]         // 0xd3 // 211
         if (x9 == 0x200)
         [x14 + 8] = x13
         x12 = [x12]              // 0xd3 // 211
         [x14] = x12
         b.ne 0x802c5fc           // likely

    loc_0x0802c620: // orphan
         x11 = [var_90h]          // 0x4 // tmp
         x9 = x10 & 0xffffffff
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x11 + 0x10c0] = w10
         msr fpsr,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x27 + 4
         [x11 + 0x10c4] = w8
         msr fpcr,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [var_78h]           // 0x4
         [x8] = x10
         jmp fcn.080339b4         // fcn.080339b4(0x0, 0x0)

    loc_0x080339b0: // orphan
         // XREFS(52)
         w1 = 0x1

    loc_0x080352fc: // orphan
         // CODE XREF from sym.brk_bp_handle_hit @ 0x8023610
         x8 = 0x8035000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x3f,0x803530c   // unlikely

    loc_0x08035308: // orphan
         jmp 0x8023618

    loc_0x0803530c: // orphan
         x8 = [x21]               // 0xdc // 220
         tbnz w8,0x17,0x8035318   // unlikely

    loc_0x08035314: // orphan
         jmp 0x8023618

    loc_0x08035318: // orphan
         x8 = [x21 + 0x10d8]      // 0xdc // 220
         if !x8 jmp 0x8023618     // unlikely

    loc_0x08035320: // orphan
         mrs x10,s3_0_c1_c2_0     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfiz x10,x10,4, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 + 0x10

    loc_0x08035334: // orphan
         x12 = x22 + x9
         x11 = [x21 + 0x10d8]     // 0xdc // 220
         x9 = x9 + 0x10
         (x12, 2) = 3
         if (x9 == 0x200)
         x11 = x11 + x8
         x8 = x8 + x10
         [x11] = (x12,2)
         b.ne 0x8035334           // likely

    loc_0x08035358: // orphan
         jmp 0x8023618

}

/* ===== 0x08035428 ===== */
int sym.brk_disable_emulation (int esi, int edx) {
    loc_0x8035428:
        // CALL XREF from sym.brk_bp_handle_hit @ 0x80236a4
        // CALL XREF from fcn.080339b4 @ 0x8024b84
        // CALL XREF from sym.brk_mm_fault_ret @ 0x80363c0
        hint 0x19
        sp = sp - 0x70
        [sp, 0x30] = (x29,2)
        [var_40h] = x23
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_30h
        x22 = 0x8035000
        x22 = x22 + 0
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x20 = x30     // '\xff\xff\xff\xff\xff\xff\xff\xff' // lr
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x803545c ()  // 0x803545c(0x8035000, 0x0, 0x0, 0x0)
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w8 = 0x1
        w23 = (byte) [x19 + 0x7e1] // 0xda // 218
        x0 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        [x19 + 0x7e1] = (byte) w8
        [x19 + 0x7e0] = (byte) w8
        0x8035478 ()  // 0x8035478(0x8035000, 0x8035000, 0x0, 0x0)
        x1 = [x19 + 0x80] // 0xda // 218 // int64_t arg2
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        mrs x2,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sym.brk_write_ttbr0 () // sym.brk_write_ttbr0(0x0, -1, 0x0, 0x0)
        if !w23 jmp 0x80354ac // unlikely
            
    loc_0x80354ac:
        x8 = [x19 + 0x798] // 0xda // 218
        x22 = x19 + 0x798
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x8 == x22)
        b.eq 0x80354c8 // unlikely
            
    loc_0x80354c8:
        w1 = [x19 + 0x10] // 0xda // 218
        w3 = [x19 + 0x7a8] // 0xda // 218
        mrs x8,tpidr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8035000
        x9 = x9 + 0
        if (x21 == 0)
        w5 = [x8 + x9] // 0xd0000000cf // 893353197775
        x8 = 0x8035000
        x8 = x8 + 0
        csel x4,x8,x21, eq
        x0 = 0x8035000
        x0 = x0 + 0   // int64_t arg1
        0x80354f8 ()  // 0x80354f8(0x8035000, -1, 0x0, 0x0)
        x30 = x20     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        hint 0x7
        x8 = [x19 + 0x798] // 0xda // 218
        if (x8 == x22)
        x21 = x30     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        b.eq 0x8035520 // unlikely
            
    loc_0x8035520:
        if (x8 == x22)
        b.eq 0x8035544 // likely
            
    loc_0x8035544:
        x23 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8035548:
        // CODE XREF from sym.brk_disable_emulation @ 0x8035540
        x0 = 0x8035000
        x0 = x0 + 0   // int64_t arg1
        x1 = 0x8035000
        x1 = x1 + 0   // int64_t arg2
        0x8035558 ()  // 0x8035558(0x8035000, 0x8035000, 0x0, 0x0)
        if !w0 jmp 0x8035490 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080354c4: // orphan
             x2 = [x8 + 0x18]         // 0xcf // 207

    loc_0x0803551c: // orphan
         x20 = [x8 + 0x18]        // 0xcf // 207

    loc_0x0803552c: // orphan
         x9 = [x8 + 0x2560]       // 0xcf // 207
         x8 = [x8]                // 0xcf // 207
         if (x8 == x22)
         x23 = x9 + x23
         b.ne 0x803552c           // unlikely

    loc_0x08035540: // orphan
         jmp 0x8035548

    loc_0x08035560: // orphan
         w2 = [x19 + 0x10]        // 0xda // 218
         w4 = [x19 + 0x7a8]       // 0xda // 218
         x0 = 0x8035000
         x0 = x0 + 0              // int64_t arg1
         w5 = (byte) [x19 + 0x7f0] // 0xda // 218
         w6 = (byte) [x19 + 0x7e0] // 0xda // 218
         w7 = (byte) [x19 + 0x7e1] // 0xda // 218
         w8 = [x19 + 0x7b4]       // 0xda // 218
         x1 = 0x8035000
         x1 = x1 + 0              // int64_t arg2
         w9 = [x19 + 0x7bc]       // 0xda // 218
         w10 = [x19 + 0x7b8]      // 0xda // 218
         x3 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x18] = (x23,2)
         [var_0h] = w10
         [var_0h_2] = w9
         [sp] = w8
         0x80355a4 ()             // 0x80355a4(0x8035000, 0x8035000, -1, 0x0)
         jmp 0x8035490

}

/* ===== 0x080355ac ===== */
int sym.brk_write_ttbr0 (int esi, int edx) {
    loc_0x80355ac:
        // CALL XREF from sym.brk_bp_handle_hit @ 0x80236fc
        // CALL XREF from fcn.080339b4 @ 0x80243a4
        // CALL XREF from sym.brk_disable_emulation @ 0x8035488
        // CALL XREF from sym.brk_switch_to_hook @ 0x80361d0
        // CALL XREF from sym.brk_restore_ttbr0_cb @ 0x8036888
        hint 0x19
        sp = sp - 0x80
        [sp, 0x30] = (x29,2)
        [var_40h] = x25
        [sp, 0x50] = (x24,2)
        [sp, 0x60] = (x22,2)
        [sp, 0x70] = (x20,2)
        x29 = var_30h
        if !x1 jmp 0x803580c // likely
            
    loc_0x803580c:
        (x20, 2) = 3
        x25 = [var_40h]
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        sp = arg_80h
        hint 0x1d
        0x08035828
         // } else {
    loc_0x80355d0:
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = x2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        if x2 jmp 0x80355e8 // unlikely
        }
        return eax;
    loc_0x80355e0:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x8 jmp 0x80355f8 // likely
            
    loc_0x80355f8:
        mrs x25,ttbr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x80355fc:
        x24 = x1 & 0xfffffffff000 // arg2
        x8 = x25 & 0xffff000000000fff
        x21 = x8 | x24
        if !x21 jmp 0x80357e4 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080355f0: // orphan
             // CODE XREF from sym.brk_write_ttbr0 @ 0x80358b8
             x25 = [x8 + 8]           // 0xcf // 207
             if x25 jmp 0x80355fc     // unlikely

    loc_0x0803560c: // orphan
         mrs x22,ttbr0_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x22 == x21)
         b.eq 0x8035704           // likely

    loc_0x08035618: // orphan
         x8 = x22 ^ x25
         x8 = x8 >> 0x30
         if x8 jmp 0x8035638      // unlikely

    loc_0x08035624: // orphan
         x8 = x25 & 0xffff000000000000
         dsb ishst
         tlbi aside1is,x8
         dsb ish
         

    loc_0x08035638: // orphan
         msr ttbr0_el1,x21        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         x9 = x20 + 0x798
         x8 = [x20 + 0x798]       // 0xdb // 219
         if (x8 == x9)
         b.eq 0x8035738           // unlikely

    loc_0x08035650: // orphan
         w10 = 0x5
         w11 = 0x9
         w12 = 0xa
         w13 = 0xb
         w14 = 0xd

    loc_0x08035664: // orphan
         x15 = [x8 + 0x18]        // 0xcf // 207
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
         
         x8 = [x8]                // 0xcf // 207
         if (x8 == x9)
         b.ne 0x8035664           // unlikely

    loc_0x08035704: // orphan
         if !x20 jmp 0x80357c8    // likely

    loc_0x08035708: // orphan
         x8 = [x20 + 0x20]        // 0xdb // 219
         if !x8 jmp 0x80357c8     // likely

    loc_0x08035710: // orphan
         x9 = 0x8035000
         x9 = [x9]                // 0xd0 // 208
         x9 = !x9
         x8 = x8 - x9,lsl 6
         x9 = 0x80                // '\x80'
         x8 = x9 + x8,lsl 6
         x8 = x8 ^ x1
         if ((x8 & 0xfffffffff000) == 0)
         cset w23,eq
         jmp 0x80357cc

    loc_0x08035738: // orphan
         dsb ishst
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tlbi vaae1is,x8
         w8 = 0x1
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
         
         if x20 jmp 0x8035708     // unlikely

    loc_0x080357c8: // orphan
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x080357cc: // orphan
         // CODE XREF from sym.brk_write_ttbr0 @ 0x8035734
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x23
         sym.brk_mark_clone_cpu () // sym.brk_mark_clone_cpu(0x0, 0x8033000)
         x8 = 0x8035000
         w8 = [x8]                // 0xcf // 207
         if w8 jmp 0x803582c      // likely

    loc_0x080357e4: // orphan
         if x19 jmp 0x80357f0     // unlikely

    loc_0x080357e8: // orphan
         // CODE XREF from sym.brk_write_ttbr0 @ 0x80358a8
         mrs x19,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x19 jmp 0x803580c    // likely

    loc_0x080357f0: // orphan
         x8 = [x19 + 0x5a0]       // 0xda // 218
         x9 = [x20 + 0x18]        // 0xdb // 219
         if (x8 == x9)
         b.ne 0x803580c           // likely

    loc_0x08035800: // orphan
         jmp 0x80358bc

    loc_0x08035808: // orphan
         // CODE XREF from sym.brk_write_ttbr0 @ 0x80358c8
         [x19 + 8] = x21

    loc_0x0803582c: // orphan
         x10 = [x20 + 0x798]      // 0xdb // 219
         x8 = x20 + 0x798
         x2 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x7 = x22 & 0xfffffffff000
         x9 = x25 & 0xffff000000000000
         if (x10 == x8)
         x8 = x22 & 0xffff000000000000
         b.eq 0x8035854           // unlikely

    loc_0x0803584c: // orphan
         if !x10 jmp 0x8035854    // likely

    loc_0x08035850: // orphan
         x2 = [x10 + 0x18]        // 0xd1 // 209

    loc_0x08035854: // orphan
         w1 = [x20 + 0x10]        // 0xdb // 219
         w3 = [x20 + 0x7a8]       // 0xdb // 219
         mrs x10,tpidr_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = 0x8035000
         x11 = x11 + 0
         if (x22 == x21)
         w4 = [x10 + x11]         // 0xd2000000d1 // 901943132369
         x10 = 0x8035000
         x10 = x10 + 0
         x11 = 0x8035000
         x11 = x11 + 0
         x0 = 0x8035000
         x0 = x0 + 0              // int64_t arg1
         csel x10,x11,x10, eq
         x5 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x6 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h] = w23
         [sp, 0x10] = (x9,2)
         [sp] = (x24,2)
         0x80358a0 ()             // 0x80358a0(0x8035000, -1, 0x0, 0x0)
         if x19 jmp 0x80357f0     // unlikely

    loc_0x080358a8: // orphan
         jmp 0x80357e8

    loc_0x080358ac: // orphan
         // CODE XREF from sym.brk_write_ttbr0 @ 0x80355e8
         x9 = 0x8035000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x80355f8   // unlikely

    loc_0x080358b8: // orphan
         jmp 0x80355f0

    loc_0x080358bc: // orphan
         // CODE XREF from sym.brk_write_ttbr0 @ 0x8035800
         x8 = 0x8035000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x803580c   // unlikely

    loc_0x080358c8: // orphan
         jmp 0x8035808

}

/* ===== 0x080353bc ===== */
int sym.brk_sync_fpsimd_to_sve (int esi, int edx) {
    loc_0x80353bc:
        // CALL XREF from fcn.080339b4 @ 0x8024b1c
        jmp 0x80353c8
         // do {
    loc_0x80353c8:
        // CODE XREF from sym.brk_sync_fpsimd_to_sve @ 0x80353bc
        x8 = 0x8035000
        x8 = [x8]     // 0xcf // 207
        tbz x8,0x3f,0x80353c4 // likely
         // } while (?);
        }
        return eax;
    loc_0x80353d4:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = [x8]     // 0xcf // 207
        tbz w9,0x17,0x80353c4 // likely
            
    loc_0x80353c4:
        // CODE XREF from sym.brk_sync_fpsimd_to_sve @ 0x8035424
        // lr
         // } else {
    loc_0x80353e0:
        x9 = [x8 + 0x10d8] // 0xcf // 207
        if !x9 jmp 0x80353c4 // unlikely
        }
        return eax;
    loc_0x80353e8:
        mrs x11,s3_0_c1_c2_0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x12 = x8 + 0xec0
        ubfiz x11,x11,4, 9 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = x11 + 0x10
         // do {
    loc_0x8035400:
        x14 = x12 + x10
        x13 = [x8 + 0x10d8] // 0xcf // 207
        x10 = x10 + 0x10
        (x14, 2) = 3
        if (x10 == 0x200)
        x13 = x13 + x9
        x9 = x9 + x11
        [x13] = (x14,2)
        b.ne 0x8035400 // likely
         // } while (?);
        }
        return eax;
    loc_0x8035424:
        jmp 0x80353c4
}

/* ===== 0x08035af4 ===== */
int sym.uaccess_ttbr0_enable_1 (int esi, int edx) {
    loc_0x8035af4:
        // XREFS(131)
        jmp 0x8035b2c
         // do {
    loc_0x8035b2c:
        // CODE XREF from sym.uaccess_ttbr0_enable_1 @ 0x8035af4
        x8 = 0x8035000
        x8 = [x8]     // 0xcf // 207
        tbnz x8,0x26,0x8035b28 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x8035b38:
        jmp 0x8035afc
         // do {
    loc_0x8035afc:
        // CODE XREF from sym.uaccess_ttbr0_enable_1 @ 0x8035b38
        mrs x8,daif   // '\xff\xff\xff\xff\xff\xff\xff\xff'
        msr daifset,3 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = [x9 + 8] // 0xd0 // 208
        mrs x10,ttbr1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = x9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        bfxil x11,x10,0, 0x30 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        msr ttbr1_el1,x11 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        msr ttbr0_el1,x9 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x08035b20
        msr daif,x8   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // } while (?);
        }
        return eax;
    loc_0x08035b28: // orphan
                                      // lr

}

/* ===== 0x08035b3c ===== */
int sym.uaccess_ttbr0_disable_1 (int esi, int edx) {
    loc_0x8035b3c:
        // XREFS(131)
        jmp 0x8035b6c
         // do {
    loc_0x8035b6c:
        // CODE XREF from sym.uaccess_ttbr0_disable_1 @ 0x8035b3c
        x8 = 0x8035000
        x8 = [x8]     // 0xcf // 207
        tbnz x8,0x26,0x8035b68 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x8035b78:
        jmp 0x8035b44
         // do {
    loc_0x8035b44:
        // CODE XREF from sym.uaccess_ttbr0_disable_1 @ 0x8035b78
        mrs x8,daif   // '\xff\xff\xff\xff\xff\xff\xff\xff'
        msr daifset,3 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x9,ttbr1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = x9 & 0xffffffffffff
        x10 = x9 - 1,lsl 12
        msr ttbr0_el1,x10 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        msr ttbr1_el1,x9 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x08035b60
        msr daif,x8   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // } while (?);
        }
        return eax;
    loc_0x08035b68: // orphan
                                      // lr

}

/* ===== 0x080358cc ===== */
int sym.brk_mark_clone_cpu (int esi, int edx) {
    loc_0x80358cc:
        // CALL XREF from sym.brk_write_ttbr0 @ 0x80357d4
        // CALL XREF from sym.brk_restore_ttbr0_cb @ 0x8036898
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8035000
        x9 = x9 + 0
        mrs x8,tpidr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = [x8 + x9] // 0xd0000000cf // 893353197775
        x22 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8035000
        x0 = x0 + 0   // int64_t arg1
        w20 = w1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x8035900 ()  // "(" // 0x8035900(0x8035000, 0x0, 0x0, 0x0)
        w8 = 0x1
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x8 << x19 // pstate
        tbz w20,0,0x8035940 // likely
            
    loc_0x8035940:
        x9 = x19 >> 6
        x10 = x22 + 0x7d8
        jmp 0x8035aa0
         // do {
    loc_0x8035aa0:
        // CODE XREF from sym.brk_mark_clone_cpu @ 0x8035948
        x9 = x10 + x9,lsl 3
        prfm pstl1strm,[x9]
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8035914
    loc_0x803592c:
        x10 = x22 + 0x7d8
        jmp 0x8035a84
         // do {
    loc_0x8035a84:
        // CODE XREF from sym.brk_mark_clone_cpu @ 0x8035930
        x9 = x10 + x9,lsl 3
        prfm pstl1strm,[x9]
         // } while (?);
        }
        return eax;
    loc_0x08035954: // orphan
             // CODE XREFS from sym.brk_mark_clone_cpu @ 0x8035a9c, 0x8035ab8
             x9 = x19 >> 3
             x8 = x22 + 0x7e8
             w10 = w20 & 1
             x9 = x9 & 0x1ffffff8
             x9 = [x8 + x9]           // 0xd0000000cf // 893353197775
             x9 = x9 >> x19
             w9 = w9 & 1
             if (w9 == w10)
             b.eq 0x80359b8           // unlikely

    loc_0x08035978: // orphan
         w9 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx x10,x19,6, 0x1a     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = 0x1
         x9 = x11 << x9
         w10 = w10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w20,0,0x80359a0      // likely

    loc_0x08035990: // orphan
         jmp 0x8035abc

    loc_0x080359a0: // orphan
         jmp 0x8035ad8

    loc_0x080359ac: // orphan
         // CODE XREFS from sym.brk_mark_clone_cpu @ 0x8035ad4, 0x8035af0
         x8 = 0x8035000
         w8 = [x8]                // 0xcf // 207
         if w8 jmp 0x80359dc      // likely

    loc_0x080359b8: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8035a08
         x0 = 0x8035000
         x0 = x0 + 0              // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x80359c4 ()             // 0x80359c4(0x8035000, 0x0, 0x0, 0x0)
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x080359dc: // orphan
         x8 = 0x8035000
         x8 = x8 + 0
         if ((w20 & 1) == 0)
         w3 = [x22 + 0x10]        // 0xdd // 221
         x9 = 0x8035000
         x9 = x9 + 0
         csel x2,x9,x8, ne
         x0 = 0x8035000
         x0 = x0 + 0              // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8035a04 ()             // 0x8035a04(0x8035000, 0x0, 0x8035000, -1)
         jmp 0x80359b8

    loc_0x08035a0c: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8035a4c
         x12 = x12 + x9,lsl 3
         prfm pstl1strm,[x12]

    loc_0x08035a14: // orphan
         ldxr x13,[x12]
         bic x13,x13,x8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w14,x13,[x12]
         if w14 jmp 0x8035a14     // unlikely

    loc_0x08035a24: // orphan
         x11 = [x11]              // 0xd2 // 210
         if (x11 == x10)
         b.eq 0x803592c           // unlikely

    loc_0x08035a30: // orphan
         if (x11 == x22)
         b.eq 0x8035a24           // likely

    loc_0x08035a38: // orphan
         x12 = x11 + 0x7d8
         jmp 0x8035a68

    loc_0x08035a48: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8035a80
         x12 = x11 + 0x7e8
         jmp 0x8035a0c

    loc_0x08035a68: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8035a3c
         x12 = x12 + x9,lsl 3
         prfm pstl1strm,[x12]

    loc_0x08035a70: // orphan
         ldxr x13,[x12]
         bic x13,x13,x8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w14,x13,[x12]
         if w14 jmp 0x8035a70     // unlikely

    loc_0x08035a80: // orphan
         jmp 0x8035a48

    loc_0x08035a8c: // orphan
         ldxr x10,[x9]
         x10 = x10 | x8
         stxr w11,x10,[x9]
         if w11 jmp 0x8035a8c     // unlikely

    loc_0x08035a9c: // orphan
         jmp 0x8035954

    loc_0x08035aa8: // orphan
         ldxr x10,[x9]
         bic x10,x10,x8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w11,x10,[x9]
         if w11 jmp 0x8035aa8     // unlikely

    loc_0x08035ab8: // orphan
         jmp 0x8035954

    loc_0x08035abc: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x8035990
         x8 = x8 + x10,lsl 3
         prfm pstl1strm,[x8]

    loc_0x08035ac4: // orphan
         ldxr x10,[x8]
         x10 = x10 | x9
         stxr w11,x10,[x8]
         if w11 jmp 0x8035ac4     // unlikely

    loc_0x08035ad4: // orphan
         jmp 0x80359ac

    loc_0x08035ad8: // orphan
         // CODE XREF from sym.brk_mark_clone_cpu @ 0x80359a0
         x8 = x8 + x10,lsl 3
         prfm pstl1strm,[x8]

    loc_0x08035ae0: // orphan
         ldxr x10,[x8]
         bic x10,x10,x9           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w11,x10,[x8]
         if w11 jmp 0x8035ae0     // unlikely

    loc_0x08035af0: // orphan
         jmp 0x80359ac

}

/* ===== 0x08036348 ===== */
int sym.brk_mm_fault_ret (int esi, int edx) {
    loc_0x8036348:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x0 + 0x30 // arg1
        b.eq 0x80364ac // unlikely
            
    loc_0x80364ac:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x080364c0
         // } else {
    loc_0x8036364:
        x19 = [x8]    // 0xcf // 207
        [x8] = xzr
        if !x19 jmp 0x80364ac // unlikely
        }
        return eax;
    loc_0x8036370:
        x8 = 0x8036000
        w8 = (byte) [x8] // 0xcf // 207
        if (w8 == 1)
        b.ne 0x803639c // likely
            
    loc_0x803639c:
        x20 = [x0 + 0x38] // 0xc7 // 199 // arg1
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        sym.brk_sync_clone_tree () // sym.brk_sync_clone_tree(0x0, -1, 0x0)
        if !w0 jmp 0x8036480 // likely
            
    loc_0x8036480:
        x8 = x19 + 0x7bc
        jmp 0x8036524
         // do {
    loc_0x8036524:
        // CODE XREF from sym.brk_mm_fault_ret @ 0x8036484
        w10 = 0x1
        prfm pstl1strm,[x8]
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080363dc: // orphan
             // CODE XREF from sym.brk_mm_fault_ret @ 0x80364fc
             x8 = x20 >> 0xc
             dsb ishst
             w10 = 0x5
             x8 = x8 & 0xffffffffff0
             tlbi vaae1is,x8
             x9 = x8 | 1
             tlbi vaae1is,x9
             x9 = x8 | 2
             tlbi vaae1is,x9
             x9 = x8 | 3
             tlbi vaae1is,x9
             x9 = x8 | 4
             tlbi vaae1is,x9
             x9 = x8 | x10
             tlbi vaae1is,x9
             w10 = 0x9
             x9 = x8 | 6
             tlbi vaae1is,x9
             x9 = x8 | 7
             tlbi vaae1is,x9
             x9 = x8 | 8
             tlbi vaae1is,x9
             x9 = x8 | x10
             w10 = 0xa
             tlbi vaae1is,x9
             x9 = x8 | x10
             w10 = 0xb
             tlbi vaae1is,x9
             x9 = x8 | x10
             tlbi vaae1is,x9
             w10 = 0xd
             x9 = x8 | 0xc
             tlbi vaae1is,x9
             x9 = x8 | x10
             tlbi vaae1is,x9
             x9 = x8 | 0xe
             tlbi vaae1is,x9
             x8 = x8 | 0xf
             tlbi vaae1is,x8
             dsb ish
             

    loc_0x08036498: // orphan
         // CODE XREFS from sym.brk_mm_fault_ret @ 0x8036520, 0x8036544
         x0 = x19 + 0x7c0         // int64_t arg1
         w1 = 0x3
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80364a8 ()             // 0x80364a8(0x7c0, 0x3, 0x0, 0x0)

    loc_0x080364c4: // orphan
         w1 = [x19 + 0x10]        // 0xda // 218
         x8 = [x19 + 0x798]       // 0xda // 218
         x9 = x19 + 0x798
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x8 == x9)
         b.eq 0x80364e4           // unlikely

    loc_0x080364dc: // orphan
         if !x8 jmp 0x80364e4     // likely

    loc_0x080364e0: // orphan
         x3 = [x8 + 0x18]         // 0xcf // 207

    loc_0x080364e4: // orphan
         w4 = [x19 + 0x7a8]       // 0xda // 218
         x0 = 0x8036000
         x0 = x0 + 0              // int64_t arg1
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w5 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80364f8 ()             // 0x80364f8(0x8036000, 0x0, 0x0, 0x0)
         jmp 0x80363dc

    loc_0x08036500: // orphan
         // CODE XREF from sym.brk_mm_fault_ret @ 0x8036384
         w9 = 0x1
         prfm pstl1strm,[x8]

    loc_0x08036508: // orphan
         ldxr w10,[x8]
         w10 = w10 - w9
         stlxr w11,w10,[x8]
         if w11 jmp 0x8036508     // unlikely

    loc_0x08036518: // orphan
         dmb ish
         if w10 jmp 0x80364ac     // unlikely

    loc_0x08036520: // orphan
         jmp 0x8036498

    loc_0x0803652c: // orphan
         ldxr w9,[x8]
         w9 = w9 - w10
         stlxr w11,w9,[x8]
         if w11 jmp 0x803652c     // unlikely

    loc_0x0803653c: // orphan
         dmb ish
         if w9 jmp 0x80364ac      // unlikely

    loc_0x08036544: // orphan
         jmp 0x8036498

}

/* ===== 0x0803654c ===== */
int sym.brk_mm_fault_entry (int esi, int edx) {
    loc_0x803654c:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x0 + 0x30 // arg1
        b.eq 0x80365c8 // unlikely
            
    loc_0x80365c8:
        // CODE XREF from sym.brk_mm_fault_entry @ 0x803662c
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x080365dc
         // } else {
    loc_0x8036568:
        [x8] = (xzr,2)
        // CODE XREF from sym.arm64_simd_decode_fp_3same_operation @ +0x118
        if !x1 jmp 0x80365c8 // likely
        }
        return eax;
    loc_0x8036570:
        x8 = [x1]     // 0xc8 // 200 // arg2
        if !x8 jmp 0x80365c8 // likely
    loc_0x8036578:
        x22 = [x8 + 0x10] // 0xcf // 207
        if !x22 jmp 0x80365c8 // unlikely
    loc_0x8036580:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5a0] // 0xcf // 207
        if (x22 == x8)
        b.ne 0x80365c8 // likely
    loc_0x8036590:
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x20 = [x1 + 8] // 0xc8 // 200 // arg2
        x0 = 0x8036000
        x0 = x0 + 0   // int64_t arg1
        0x80365a0 ()  // 0x80365a0(0x8036000, 0x0, 0x0, 0x0)
        x8 = 0x8036000
        x8 = x8 + 0
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = [x8]    // 0xcf // 207
        // CODE XREF from sym.arm64_decode_sve @ +0x44
        if (x21 == x8)
        b.ne 0x80365ec // likely
            
    loc_0x80365ec:
        w9 = (byte) [x21 + 0x7f0] // 0xdc // 220
        if !w9 jmp 0x80365e0 // unlikely
    loc_0x80365e0:
        x21 = [x21]   // 0xdc // 220
        if (x21 == x8)
        b.eq 0x80365bc // likely
         // }
        }
        return eax;
    loc_0x080365f4: // orphan
             w9 = (byte) [x21 + 0x7e0] // 0xdc // 220
             if w9 jmp 0x80365e0      // likely

    loc_0x080365fc: // orphan
         x9 = [x21 + 0x18]        // 0xdc // 220
         if (x9 == x22)
         b.ne 0x80365e0           // likely

    loc_0x08036608: // orphan
         x8 = x21 + 0x7bc
         jmp 0x8036630

    loc_0x08036618: // orphan
         // CODE XREF from sym.brk_mm_fault_entry @ 0x8036644
         x0 = 0x8036000
         x0 = x0 + 0              // int64_t arg1
         0x8036620 ()             // 0x8036620(0x8036000, 0x0, 0x0, 0x0)
         if !x21 jmp 0x80365c8    // likely

    loc_0x08036628: // orphan
         [x19, 0x30] = (x21,2)
         jmp 0x80365c8

    loc_0x08036630: // orphan
         // CODE XREF from sym.brk_mm_fault_entry @ 0x803660c
         prfm pstl1strm,[x8]

    loc_0x08036634: // orphan
         ldxr w9,[x8]
         w9 = w9 + 1
         stxr w10,w9,[x8]
         if w10 jmp 0x8036634     // unlikely

    loc_0x08036644: // orphan
         jmp 0x8036618

}

/* ===== 0x0803677c ===== */
int sym.brk_restore_ttbr0_cb (int esi, int edx) {
    loc_0x803677c:
        // CALL XREF from sym.brk_call_all_cpus @ 0x803668c
        hint 0x19
        sp = sp - 0x50
        [sp, 0x20] = (x29,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = var_20h
        if !x0 jmp 0x80368ac // likely
            
    loc_0x80368ac:
        // CODE XREFS from sym.brk_restore_ttbr0_cb @ 0x803688c, 0x80368f8, 0x8036948
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        sp = arg_50h
        hint 0x1d
        0x080368c0
         // } else {
    loc_0x8036798:
        mrs x19,ttbr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x0 + 0x20] // 0xc7 // 199 // arg1
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x10 = 0x8036000
        if !x8 jmp 0x80367d0 // unlikely
        }
        return eax;
    loc_0x80367ac:
        x9 = [x10]    // 0xd1 // 209
        x11 = xzr | 0xfffffffe00000000
        x9 = x9 >> 6
        x9 = x9 & 0x3ffffffffc0
        x9 = x9 - x11
        x8 = x8 + x9
        x8 = x19 ^ x8,lsl 6
        if ((x8 & 0xfffffffff000) == 0)
        cset w8,eq
         // do {
    loc_0x80367d0:
        jmp 0x80369a4
         // } while (?);
        }
        return eax;
    loc_0x080367dc: // orphan
             // CODE XREF from sym.brk_restore_ttbr0_cb @ 0x80369b4
             mrs x9,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x11 = [x9 + 8]           // 0xd0 // 208
             x12 = [x20 + 0x20]       // 0xdb // 219
             w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             if !x12 jmp 0x8036814    // unlikely

    loc_0x080367f0: // orphan
         x9 = [x10]               // 0xd1 // 209
         x13 = xzr | 0xfffffffe00000000
         x9 = x9 >> 6
         x9 = x9 & 0x3ffffffffc0
         x9 = x9 - x13
         x9 = x12 + x9
         x9 = x11 ^ x9,lsl 6
         if ((x9 & 0xfffffffff000) == 0)
         cset w9,eq

    loc_0x08036814: // orphan
         w11 = w8 | w9
         tbz w11,0,0x8036890      // likely

    loc_0x0803681c: // orphan
         mrs x21,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x6 = [x21 + 0x5a0]       // 0xdc // 220
         if x6 jmp 0x8036830      // likely

    loc_0x08036828: // orphan
         x6 = [x21 + 0x5a8]       // 0xdc // 220
         if !x6 jmp 0x80368c4     // unlikely

    loc_0x08036830: // orphan
         x11 = [x20 + 0x18]       // 0xdb // 219
         if (x6 == x11)
         b.eq 0x80368c4           // unlikely

    loc_0x0803683c: // orphan
         x11 = [x6 + 0x70]        // 0xcd // 205
         x12 = 0x80               // '\x80'
         x13 = 0x8036000
         x10 = [x10]              // 0xd1 // 209
         x13 = [x13]              // 0xd4 // 212
         sbfx x11,x11,0, 0x38     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x11 + x12
         x11 = x11 - x13
         x14 = x12 >> 0x26
         x10 = x12 + x10
         if (x14 == 0)
         csel x22,x10,x11, eq
         if !x22 jmp 0x80368cc    // unlikely

    loc_0x08036870: // orphan
         x10 = 0x8036000
         w10 = [x10]              // 0xd1 // 209
         if w10 jmp 0x803694c     // likely

    loc_0x0803687c: // orphan
         // CODE XREF from sym.brk_restore_ttbr0_cb @ 0x80369a0
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         sym.brk_write_ttbr0 ()   // sym.brk_write_ttbr0(0x0, 0x0, 0x0, 0x0)
         jmp 0x80368ac

    loc_0x08036890: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.brk_mark_clone_cpu () // sym.brk_mark_clone_cpu(0x0, 0x0)
         x8 = 0x8036000
         w8 = [x8]                // 0xcf // 207
         if (w8 == 2)
         b.ge 0x80368fc           // unlikely

    loc_0x080368c4: // orphan
         x22 = [x20 + 0x80]       // 0xdb // 219
         if x22 jmp 0x8036870     // likely

    loc_0x080368cc: // orphan
         x9 = 0x8036000
         x9 = x9 + 0
         w1 = [x20 + 0x10]        // 0xdb // 219
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = [x8 + x9]           // 0xd0000000cf // 893353197775
         w3 = [x21 + 0x618]       // 0xdc // 220
         x5 = [x20 + 0x18]        // 0xdb // 219
         x0 = 0x8036000
         x0 = x0 + 0              // int64_t arg1
         x4 = x6                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80368f4 ()             // 0x80368f4(0x8036000, -1, 0xb947b687, -1)
         jmp 0x80368ac

    loc_0x080368fc: // orphan
         x9 = 0x8036000
         x9 = x9 + 0
         w1 = [x20 + 0x10]        // 0xdb // 219
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = [x8 + x9]           // 0xd0000000cf // 893353197775
         jmp 0x80369b8

    loc_0x0803691c: // orphan
         // CODE XREF from sym.brk_restore_ttbr0_cb @ 0x80369c8
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x4 = [x8 + 8]            // 0xcf // 207

    loc_0x08036924: // orphan
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x6 = [x8 + 0x5a0]        // 0xcf // 207
         w5 = [x8 + 0x618]        // 0xcf // 207
         if x6 jmp 0x8036938      // likely

    loc_0x08036934: // orphan
         x6 = [x8 + 0x5a8]        // 0xcf // 207

    loc_0x08036938: // orphan
         x0 = 0x8036000
         x0 = x0 + 0              // int64_t arg1
         x3 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8036944 ()             // 0x8036944(0x8036000, 0x0, 0x0, 0x0)
         jmp 0x80368ac

    loc_0x0803694c: // orphan
         w1 = [x20 + 0x10]        // 0xdb // 219
         x10 = [x20 + 0x798]      // 0xdb // 219
         x11 = x20 + 0x798
         x2 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x10 == x11)
         b.eq 0x803696c           // unlikely

    loc_0x08036964: // orphan
         if !x10 jmp 0x803696c    // likely

    loc_0x08036968: // orphan
         x2 = [x10 + 0x18]        // 0xd1 // 209

    loc_0x0803696c: // orphan
         x11 = 0x8036000
         x11 = x11 + 0
         w3 = [x20 + 0x7a8]       // 0xdb // 219
         mrs x10,tpidr_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w4 = [x10 + x11]         // 0xd2000000d1 // 901943132369
         w5 = [x21 + 0x618]       // 0xdc // 220
         x0 = 0x8036000
         x0 = x0 + 0              // int64_t arg1
         x7 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h] = x19
         [var_0h_2] = w9
         [sp] = w8
         0x803699c ()             // 0x803699c(0x8036000, 0x0, 0x0, -1)
         jmp 0x803687c

    loc_0x080369a4: // orphan
         // CODE XREF from sym.brk_restore_ttbr0_cb @ 0x80367d0
         x9 = 0x8036000
         x11 = [x9]               // 0xd0 // 208
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbnz x11,0x26,0x8036814  // unlikely

    loc_0x080369b4: // orphan
         jmp 0x80367dc

    loc_0x080369b8: // orphan
         // CODE XREF from sym.brk_restore_ttbr0_cb @ 0x8036910
         x8 = 0x8036000
         x4 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x8036924   // unlikely

    loc_0x080369c8: // orphan
         jmp 0x803691c

}

/* ===== 0x0803765c ===== */
int sym.arm64_decode_bit_masks (int esi, int edx) {
    loc_0x803765c:
        // CALL XREFS from sym.arm64_decode_data_processing_immediate @ 0x80373c4, 0x8037564
        w8 = w2 & 0x3f // arg3
        bfi w8,w0,6, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 ^ 0x3f
        if !w8 jmp 0x80376ac // unlikely
            
    loc_0x80376ac:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // lr
         // } else {
    loc_0x803766c:
        clz w8,w8
        w8 = w8 ^ 0x1f
        if !w8 jmp 0x80376ac // unlikely
        }
        return eax;
    loc_0x8037678:
        w9 = w3 & 0xff // arg4
        if (w9 == 0x20)
        b.ne 0x803768c // likely
            
    loc_0x803768c:
        w9 = 0x1
        w8 = w9 << w8
        w10 = w8 + 0xff
        w9 = w10 & w2 // arg3
        if !w4 jmp 0x80376b4 // likely
            
    loc_0x80376b4:
        w12 = w9 + 1
        x15 = ~0
        w13 = w8 & 0xfe
        x14 = x15 << x12
        if ((w12 & 0xc0) == 0)
        x12 = x15 << x13
        w11 = w10 & w1 // arg2
        w9 = w9 & 0xff
        w16 = w8 - 1
        csinv x17,x15,x14, ne
        if ((w8 & 0xc0) == 0)
        w14 = w11 & w16
        w11 = w9 - w11,uxtb
        csinv x9,x15,x12, ne
        if ((w14 & 0xff) == 0)
        x12 = x17 & x9
        b.eq 0x803770c // unlikely
            
    loc_0x803770c:
        if ((w3 & 0xff) == 0) // arg4
        w10 = w11 & w10
        b.eq 0x8037740 // unlikely
            
    loc_0x8037740:
        x11 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8037744:
        // CODE XREF from sym.arm64_decode_bit_masks @ 0x803773c
        w10 = w10 + 1
        x12 = ~0
        w14 = w3 & 0xff // arg4
        x13 = x12 << x10
        if ((w10 & 0xc0) == 0)
        [x5] = x11    // arg6
        csinv x12,x12,x13, ne
        if !w14 jmp 0x803778c // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08037724: // orphan
             w14 = w13 + w8
             x15 = x12 << x13
             w13 = w14 & 0xff
             if (w13 == w3)           // arg4
             x11 = x15 | x11
             b.lo 0x8037724           // unlikely

    loc_0x0803773c: // orphan
         jmp 0x8037744

    loc_0x08037764: // orphan
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x12 & x9

    loc_0x08037770: // orphan
         w12 = w11 + w8
         x13 = x9 << x11
         w11 = w12 & 0xff
         if (w11 == w3)           // arg4
         x10 = x13 | x10
         b.lo 0x8037770           // unlikely

    loc_0x08037788: // orphan
         jmp 0x8037790

    loc_0x0803778c: // orphan
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08037790: // orphan
         // CODE XREF from sym.arm64_decode_bit_masks @ 0x8037788
         w0 = 0x1
         [x6] = x10               // arg7
                                  // lr

}

/* ===== 0x08037610 ===== */
int sym.arm64_decode_base_registers (int esi, int edx) {
    loc_0x8037610:
        // XREFS: CALL 0x080374d4  CALL 0x080375a8  CALL 0x08037b40
        // XREFS: CALL 0x08037ba4  CALL 0x08037bf8  CALL 0x08037d00
        // XREFS: CALL 0x08037dc4
        ubfx w10,w0,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w0 & 0x1f // arg1
        w8 = 0x40     // '@'
        ubfx w11,w0,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x20] = (byte) w9 // arg2
        ubfx w9,w0,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x21] = (byte) w10 // arg2
        w10 = 0x20
        if (w0 == 0)  // arg1
        csel w8,w10,w8, ge
        [x1 + 0x23] = (byte) w11 // arg2
        [x1 + 0x22] = (byte) w9 // arg2
        [x1 + 0x27] = (byte) w8 // arg2
        tbnz w0,0x1f,0x803764c // unlikely
            
    loc_0x803764c:
        w8 = [x1 + 0x1c] // 0xc8 // 200 // arg2
        w8 = w8 | 1
        [x1 + 0x1c] = w8 // arg2
        // lr
         // } else {
    loc_0x8037648:
        // lr
        }
        return eax;
}

/* ===== 0x08039a60 ===== */
int sym.arm64_simd_decode_complex_vector (int esi, int edx) {
    loc_0x8039a60:
        // CALL XREF from sym.arm64_decode_simd @ 0x80392ac
        w9 = 0xe400
        w8 = 0xc400
        w9 = 0xbf20   // ' \xbf'
        w8 = 0x2e00
        w10 = w0 & w9 // arg1
        if (w10 == w8)
        b.ne 0x8039a8c // likely
            
    loc_0x8039a8c:
        w9 = w9 + 0x800
        w8 = w8 + 2,lsl 12
        w9 = w0 & w9  // arg1
        if (w9 == w8)
        b.ne 0x8039ad4 // likely
            
    loc_0x8039ad4:
        w0 = 0x4
        // lr
         // } else {
    loc_0x8039aa0:
        w8 = 0x30     // '0'
        if ((w0 & 0x1000) == 0) // arg1
        w9 = 0x3
        [x1 + 0x2c] = w8 // arg2
        csinc w8,w9,wzr, ne
         // } else {
        }
        return eax;
    loc_0x08039ab4: // orphan
             // CODE XREF from sym.arm64_simd_decode_complex_vector @ 0x8039a88
             ubfx w9,w0,0x16, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             [x1 + 0x45] = (byte) w8  // arg2
             if !w9 jmp 0x8039acc     // likely

    loc_0x08039ac0: // orphan
         tbnz w0,0x1e,0x8039adc   // unlikely

    loc_0x08039ac4: // orphan
         if (w9 == 3)
         b.ne 0x8039adc           // likely

    loc_0x08039acc: // orphan
         w0 = 0x3
                                  // lr

    loc_0x08039adc: // orphan
         w10 = 0x8
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if ((w0 & 0x40000000) == 0) // arg1
         w9 = w10 << w9
         w10 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         w11 = 0x14
         csel w10,w12,w10, eq
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x28] = w11        // arg2
         [x1 + 0x46] = (byte) w9  // arg2
         [x1 + 0x27] = (byte) w10 // arg2
                                  // lr

}

/* ===== 0x08039b10 ===== */
int sym.arm64_simd_decode_vector_3same_extra (int esi, int edx) {
    loc_0x8039b10:
        // CALL XREF from sym.arm64_decode_simd @ 0x80392c0
        w9 = 0x8400
        w10 = 0x8400
        w9 = 0x9f20   // ' \x9f'
        w10 = 0xe00
        w9 = w0 & w9  // arg1
        if (w9 == w10)
        b.ne 0x8039bbc // likely
            
    loc_0x8039bbc:
        w0 = 0x4
        // lr
         // } else {
    loc_0x8039b2c:
        w9 = w0 >> 0x18 // arg1
        if ((w0 & 0x40000000) == 0) // arg1
        w10 = ~0x7f   // '\x7f'
        w12 = 0x40    // '@'
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w9 & 0x20
        csel w10,w12,w10, eq
        bfxil w9,w0,0xb, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = 0x4
        [x1 + 0x27] = (byte) w10 // arg2
        w11 = w9 - 0x12
        if (w11 == 0x2d)
        b.hi 0x8039cf0 // likely
        }
        return eax;
    loc_0x8039b60:
        x12 = 0x8039000
        x12 = x12 + 0
        w10 = w8 >> 0x1e
        x13 = 0x8039b7c
        w14 = (byte) [x12 + x11] // 0xd2000000d3 // 901943132371
        x13 = x13 + x14,lsl 2 // "P"
        br x13
         // (break)
    loc_0x08039cf0: // orphan
                                      // lr

}

/* ===== 0x08039cf4 ===== */
int sym.arm64_simd_decode_vector_3same (int esi, int edx) {
    loc_0x8039cf4:
        // CALL XREF from sym.arm64_decode_simd @ 0x80392d4
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = 0xc000
        w8 = 0x400
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = 0x40     // '@'
        w8 = 0x9f20   // ' \x9f'
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w10 = w8 | w9
        w9 = 0x400
        w9 = 0xe20    // ' \x0e'
        w22 = w0 & w10 // arg1
        w23 = w9 + 0x200,lsl 12
        if (w22 == w23)
        b.eq 0x8039d54 // unlikely
            
    loc_0x8039d54:
        w10 = w20 >> 0x1d
        ubfx w8,w20,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((w20 & 0x40000000) == 0)
        w11 = ~0x7f   // '\x7f'
        w12 = 0x40    // '@'
        ubfx w9,w20,0xb, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        csel w11,w12,w11, eq
        if (w22 == w23)
        [x19 + 0x27] = (byte) w11
        b.eq 0x8039db0 // unlikely
            
    loc_0x8039db0:
        w21 = w20 >> 0x1e
        if (w22 == w23)
        b.eq 0x8039e34 // unlikely
            
    loc_0x8039e34:
        ubfx w0,w20,0x1d, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        tbnz w20,0x16,0x8039e94 // unlikely
            
    loc_0x8039e94:
        ubfx w1,w20,0x17, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w9 + 0x18
        if (w22 == w23)
        csel w2,w8,w9, eq
        sym.arm64_simd_decode_fp_3same_operation () // sym.arm64_simd_decode_fp_3same_operation(0x0, 0x0, 0x0)
        if !w0 jmp 0x8039ee8 // likely
            
    loc_0x8039ee8:
        w0 = 0x3
         // do {
    loc_0x8039eec:
        // CODE XREFS from sym.arm64_simd_decode_vector_3same @ 0x8039d50, 0x8039dac, 0x8039e30, 0x8039e90, 0x8039ec8
        (x20, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08039f00
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8039d40
    loc_0x8039d4c:
        w0 = 0x4
        jmp 0x8039eec
    loc_0x08039d84: // orphan
             w9 = 0xf
             bfi w8,w10,2, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             [x19 + 0x28] = w9
             x9 = 0x8039000
             x9 = x9 + 0
             w8 = [x9 + w8,uxtw 2]    // 0xb0000000d0 // 755914244304
             w9 = 0x8
             [x19 + 0x46] = (byte) w9
             [x19 + 0x2c] = w8
             jmp 0x8039eec

    loc_0x08039dc4: // orphan
         bfi w9,w10,5, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 0x36)
         b.hi 0x8039ee8           // unlikely

    loc_0x08039dd0: // orphan
         x11 = xzr | 0xfff7fff7fff7fff7
         w10 = w9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = 0xff               // '\xff'
         x11 = 0x7f               // '\x7f'
         x10 = x11 >> x10
         tbz w10,0,0x8039ee8      // unlikely

    loc_0x08039de8: // orphan
         ubfiz x9,x9,2, 0x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = 0x8039000
         x10 = x10 + 0
         w10 = [x10 + x9]         // 0xd0000000d1 // 893353197777
         w10 = w10 >> w8
         tbz w10,0,0x8039ee8      // likely

    loc_0x08039e00: // orphan
         x10 = 0x8039000
         x10 = x10 + 0
         if (w8 == 3)
         w9 = [x10 + x9]          // 0xd0000000d1 // 893353197777
         b.ne 0x8039e18           // likely

    loc_0x08039e14: // orphan
         tbz w21,0,0x8039ee8      // likely

    loc_0x08039e18: // orphan
         w11 = 0x8
         w10 = 0x10
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = w11 << w8
         [x19, 0x28] = (w10,2)
         [x19 + 0x46] = (byte) w8
         jmp 0x8039eec

    loc_0x08039e44: // orphan
         if w0 jmp 0x8039e58      // unlikely

    loc_0x08039e48: // orphan
         if (w8 == 2)
         w8 = 0x12
         cinc w8,w8,hs
         jmp 0x8039e7c

    loc_0x08039e58: // orphan
         tbz w20,0x1d,0x8039e94   // likely

    loc_0x08039e5c: // orphan
         if (w9 == 0x19)
         b.ne 0x8039e94           // likely

    loc_0x08039e64: // orphan
         w9 = [x19 + 0x40]        // 0xda // 218
         if (w8 == 2)
         w8 = 0x12
         cinc w8,w8,hs
         w9 = w9 | 2
         [x19 + 0x40] = w9

    loc_0x08039e7c: // orphan
         // CODE XREF from sym.arm64_simd_decode_vector_3same @ 0x8039e54
         w9 = 0x13
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19, 0x28] = (w9,2)
         w9 = 0x2010              // '\x10 '
         [x19 + 0x46] = (half) w9
         jmp 0x8039eec

    loc_0x08039ebc: // orphan
         w8 = 0x10
         [x19 + 0x46] = (byte) w8

    loc_0x08039ec4: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8039eec

    loc_0x08039ecc: // orphan
         ubfx w8,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x20
         w10 = w20 >> 0x16
         w8 = w9 << w8
         [x19 + 0x46] = (byte) w8
         tbz w10,0,0x8039ec4      // likely

    loc_0x08039ee4: // orphan
         tbnz w21,0,0x8039ec4     // unlikely

}

/* ===== 0x08039f04 ===== */
int sym.arm64_simd_decode_scalar_3same (int esi, int edx) {
    loc_0x8039f04:
        // CALL XREF from sym.arm64_decode_simd @ 0x80392e8
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = 0x400
        w9 = 0x8400
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = 0xdf20   // ' \xdf'
        w9 = 0x5e00
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w10 = w8 | 0x8000
        w10 = w0 & w10 // arg1
        ubfx w0,w0,0x1d, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w10 == w9)
        b.ne 0x8039f50 // likely
            
    loc_0x8039f50:
        w10 = w8 + 0x40c,lsl 12
        w11 = w9 + 0x3f8,lsl 12
        w10 = w20 & w10
        if (w10 == w11)
        b.eq 0x8039fb4 // unlikely
            
    loc_0x8039fb4:
        if (w10 == w11)
        b.ne 0x803a028 // unlikely
            
    loc_0x803a028:
        ubfx w21,w20,0xb, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w20 >> 0x1d
        w9 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        bfi w9,w8,5, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x9 - 1
        if (w8 == 0x36)
        b.hs 0x803a05c // likely
            
    loc_0x803a05c:
        ubfx w1,w20,0x17, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // CODE XREF from sym.init_module @ 0x803aeb0
        w2 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sym.arm64_simd_decode_fp_3same_operation () // sym.arm64_simd_decode_fp_3same_operation(0x0, 0x0, 0x0)
        if (w0 == 0x2b)
        w8 = 0x3
        b.hi 0x803a010 // unlikely
            
    loc_0x803a010:
        // CODE XREFS from sym.arm64_simd_decode_scalar_3same @ 0x8039f4c, 0x8039f78
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x0803a024
         // } else {
    loc_0x803a074:
        w9 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = 0x1
        x9 = x10 << x9
        x10 = 0x4
        x10 = 0xe000
        x10 = 0xce0   // '\xe0\f'
        if ((x9 & x10) == 0)
        b.eq 0x803a010 // unlikely
         // } else {
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x8039f44
    loc_0x8039f48:
        w8 = 0x3
        jmp 0x803a010
    loc_0x08039f74: // orphan
             w8 = 0x4
             // CODE XREFS from sym.arm64_simd_decode_vector_3same_extra @ 0x8039b74, 0x8039b78
             jmp 0x803a010

    loc_0x08039f7c: // orphan
         ubfx w9,w20,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x3
         if !w9 jmp 0x803a010     // likely

    loc_0x08039f88: // orphan
         if (w9 == 3)
         b.eq 0x803a010           // unlikely

    loc_0x08039f90: // orphan
         w11 = 0x8
         if ((w20 & 0x800) == 0)
         w10 = 0x7e               // '~'
         w9 = w11 << w9
         w8 = 0x1b
         cinc w10,w10,ne
         [x19, 0x28] = (w8,2)
         [x19 + 0x46] = (byte) w9
         jmp 0x803a008

    loc_0x08039fd8: // orphan
         w9 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = 0x1
         x9 = x10 << x9
         x10 = 0x4
         x10 = 0xe000
         x10 = 0xce0              // '\xe0\f'
         if ((x9 & x10) == 0)
         b.eq 0x803a010           // unlikely

    loc_0x08039ff8: // orphan
         w9 = 0x10

    loc_0x08039ffc: // orphan
         // CODE XREF from sym.arm64_simd_decode_scalar_3same @ 0x803a120
         [x19 + 0x46] = (byte) w9

    loc_0x0803a000: // orphan
         // XREFS: STRING 0x0803a0c4  CODE 0x0803a0c8  STRING 0x0803a220  
         // XREFS: CODE 0x0803a224  STRING 0x0803a9a8  CODE 0x0803a9ac  
         // XREFS: STRING 0x0803acc8  CODE 0x0803accc  STRING 0x0803ae58  
         // XREFS: CODE 0x0803ae5c  STRING 0x0803ae90  CODE 0x0803ae94  
         // XREFS: STRING 0x0803ae9c  CODE 0x0803aea0  STRING 0x0803aec8  
         // XREFS: CODE 0x0803aecc  STRING 0x0803af00  CODE 0x0803af04  
         // XREFS: STRING 0x0803af10  CODE 0x0803af14  
         w8 = 0x1b
         [x19, 0x28] = (w8,2)

    loc_0x0803a008: // orphan
         // CODE XREF from sym.arm64_simd_decode_scalar_3same @ 0x8039fb0
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x27] = (byte) w9

    loc_0x0803a094: // orphan
         ubfx w8,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x20
         w8 = w9 << w8
         [x19 + 0x46] = (byte) w8
         if (w21 == 0x16)
         b.ne 0x803a0d8           // likely

    loc_0x0803a0ac: // orphan
         ubfx w9,w20,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x3
         if !w9 jmp 0x803a010     // likely

    loc_0x0803a0b8: // orphan
         if (w9 == 3)
         b.eq 0x803a010           // unlikely

    loc_0x0803a0c0: // orphan
         jmp 0x803a10c

    loc_0x0803a0c4: // orphan
         x9 = 0x803a000
         x9 = x9 + 0
         w0 = [x9 + x8,lsl 2]     // 0xcf000000d0 // 889058230480
         if (w21 == 0x16)
         b.eq 0x803a0ac           // unlikely

    loc_0x0803a0d8: // orphan
         w8 = w20 & 0xf000
         w9 = 0xe800
         w10 = 0x4000
         if (w8 == 3)
         w9 = w20 & w9
         ccmp w9,w10,4, ne
         w9 = 0x8000
         ccmp w8,w9,4, ne
         w9 = 0xc0                // '\xc0'
         cset w8,eq
         bics wzr,w9,w20          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.eq 0x803a10c           // unlikely

    loc_0x0803a108: // orphan
         tbnz w8,0,0x8039f48      // unlikely

    loc_0x0803a10c: // orphan
         // CODE XREF from sym.arm64_simd_decode_scalar_3same @ 0x803a0c0
         w9 = (byte) [x19 + 0x46] // 0xda // 218
         if w9 jmp 0x803a000      // likely

    loc_0x0803a114: // orphan
         ubfx w8,w20,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x8
         w9 = w9 << w8
         jmp 0x8039ffc

}

/* ===== 0x0803a124 ===== */
int sym.arm64_simd_decode_by_element (int esi, int edx) {
    loc_0x803a124:
        // CALL XREF from sym.arm64_decode_simd @ 0x803932c
        ubfx w12,w0,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        ubfx w8,w0,0xc, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w11 = w0 >> 0xb // arg1
        w15 = w0 >> 0x15 // arg1
        ubfx w10,w0,0x15, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w0 >> 0x14 // arg1
        ubfx w13,w0,0x14, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        tbz w0,0x1d,0x803a1c8 // likely
            
    loc_0x803a1c8:
        tbnz w0,0x1c,0x803a24c // unlikely
            
    loc_0x803a24c:
        w14 = 0x9400
        w17 = 0x1000
        w14 = 0xbf00
        w17 = 0x2f00
        w16 = w0 & w14 // arg1
        ubfx w14,w0,0xb, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w16 == w17)
        b.ne 0x803a298 // likely
            
    loc_0x803a298:
        w16 = w0 & 0xfff000 // arg1
        w17 = w16 & 0xff803fff
        w16 = w0 >> 0x1d // arg1
        if (w17 == 0x800)
        b.ne 0x803a328 // likely
            
    loc_0x803a328:
        if (w8 == 9)
        b.eq 0x803a3e0 // unlikely
            
    loc_0x803a3e0:
        if ((w0 & 0x20000000) == 0) // arg1
        w8 = 0x1
        cinc w8,w8,ne
        jmp 0x803a3f8
         // do {
    loc_0x803a3f8:
        // CODE XREFS from sym.arm64_simd_decode_by_element @ 0x803a348, 0x803a3ec
        if (w12 == 1)
        [x1 + 0x2c] = w8 // arg2
        b.eq 0x803a420 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803a144
    loc_0x803a150:
        w14 = w12 - 3
        if (w14 != 2)
        b.lo 0x803a420 // unlikely
            
    loc_0x803a420:
        w0 = 0x3
        // lr
         // } else {
    loc_0x803a15c:
        if (w8 == 0xd)
        w8 = 0x7e     // '~'
        w14 = 0x80    // '\x80'
        w16 = 0x8
        cinc w8,w8,ne
        if ((w0 & 0x40000000) == 0) // arg1
        w17 = 0x40    // '@'
        w16 = w16 << w12
        csel w14,w17,w14, eq
        if ((w0 & 0x10000000) == 0) // arg1
        w17 = 0x1c
        cinc w17,w17,ne
        [x1 + 0x46] = (byte) w16 // arg2
        [x1, 0x28] = (w17,2) // arg2
        csel w8,w14,w16, eq
        if (w12 == 1)
        [x1 + 0x27] = (byte) w8 // arg2
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        b.ne 0x803a34c // likely
        }
        return eax;
    loc_0x803a1a8:
        ubfiz w9,w15,1, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x803a1ac:
        // CODE XREF from sym.arm64_simd_decode_by_element @ 0x803a4ec
        ubfx w10,w0,0x10, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        bfi w9,w11,2, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x1 + 0x22] = (byte) w10 // arg2
        w9 = w9 | w13
         // } while (?);
        }
        return eax;
    loc_0x0803a1bc: // orphan
             // CODE XREF from sym.arm64_simd_decode_by_element @ 0x803a4e4
             [x1 + 0x48] = (byte) w9  // arg2
             w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
                                      // lr

    loc_0x0803a1d4: // orphan
         w8 = w0 & 0xc00000       // arg1
         if (w8 == 0x800)
         b.ne 0x803a420           // likely

    loc_0x0803a1e0: // orphan
         if ((w0 & 0x20000000) == 0) // arg1
         w8 = 0x80                // '\x80'
         w14 = 0x8
         cinc w16,w8,ne
         // STRING XREF from sym.arm64_simd_decode_by_element @ 0x803a22c
         w12 = 0x1c
         bfi w10,w11,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w11,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 0x28] = (w12,2)     // arg2
         w12 = 0x20
         [x1 + 0x46] = (byte) w14 // arg2
         [x1 + 0x47] = (byte) w12 // arg2 // " "
         jmp 0x803a3b8

    loc_0x0803a214: // orphan
         tbnz w0,0x1d,0x803a24c   // unlikely

    loc_0x0803a218: // orphan
         if (w8 == 0xf)
         b.ne 0x803a24c           // likely

    loc_0x0803a220: // orphan
         x8 = 0x803a000
         x8 = x8 + 0
         w14 = 0x8
         x17 = 0x803a1f0
         w2 = (byte) [x8 + x12]   // 0xd3000000cf // 906238099663
         x17 = x17 + x2,lsl 2
         w16 = 0x83               // '\x83'
         br x17

    loc_0x0803a274: // orphan
         if (w12 == 3)
         b.eq 0x803a37c           // unlikely

    loc_0x0803a27c: // orphan
         w13 = w0 >> 0x1e         // arg1
         if (w12 == 2)
         b.ne 0x803a368           // likely

    loc_0x0803a288: // orphan
         tbnz w0,0x15,0x803a37c   // unlikely

    loc_0x0803a28c: // orphan
         tbz w13,0,0x803a37c      // likely

    loc_0x0803a290: // orphan
         w11 = 0x1
         jmp 0x803a384

    loc_0x0803a2b4: // orphan
         w8 = 0x3
         tbnz w0,0x1c,0x803a37c   // unlikely

    loc_0x0803a2bc: // orphan
         if (w12 == 3)
         b.eq 0x803a37c           // unlikely

    loc_0x0803a2c4: // orphan
         if ((w0 & 0x4000) == 0)  // arg1
         w9 = 0x12
         w8 = 0x18
         cinc w9,w9,ne
         ubfiz w10,w11,2, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if ((w0 & 0x40000000) == 0) // arg1
         [x1, 0x28] = (w8,2)      // arg2
         w8 = 0x2010              // '\x10 '
         w9 = ~0x7f               // '\x7f'
         w11 = 0x40               // '@'
         [x1 + 0x46] = (half) w8
         bfi w10,w15,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w8,w11,w9, eq
         [x1 + 0x27] = (byte) w8  // arg2
         ubfx w8,w0,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = w10 | w13
         [x1 + 0x48] = (byte) w9  // arg2
         [x1 + 0x22] = (byte) w8  // arg2
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbz w16,0,0x803a37c      // likely

    loc_0x0803a314: // orphan
         w9 = [x1 + 0x40]         // 0xc8 // 200 // arg2
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9 | 2
         [x1 + 0x40] = w9         // arg2
                                  // lr

    loc_0x0803a338: // orphan
         if (w8 == 1)
         b.ne 0x803a428           // likely

    loc_0x0803a340: // orphan
         tbnz w16,0,0x803a428     // unlikely

    loc_0x0803a344: // orphan
         w8 = 0x10
         jmp 0x803a3f8

    loc_0x0803a34c: // orphan
         ubfx w12,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w10,w11,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w12,w9,4, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x48] = (byte) w10 // arg2
         [x1 + 0x22] = (byte) w12 // arg2
                                  // lr

    loc_0x0803a368: // orphan
         if (w12 == 1)
         cset w11,ne
         b.ne 0x803a384           // likely

    loc_0x0803a374: // orphan
         if !w14 jmp 0x803a384    // likely

    loc_0x0803a378: // orphan
         tbnz w13,0,0x803a384     // unlikely

    loc_0x0803a37c: // orphan
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
                                  // lr

    loc_0x0803a384: // orphan
         // CODE XREF from sym.arm64_simd_decode_by_element @ 0x803a294
         w16 = 0x8
         x13 = 0x18
         ubfx w15,w0,0xd, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // CODE XREFS from sym.arm64_simd_decode_by_element @ 0x803a234, 0x803a23c
         w12 = w16 << w12
         w10 = w10 | w14,lsl 1
         x13 = 0x2f               // '/'
         if (w11 == 0)
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x28] = x13        // arg2
         [x1 + 0x45] = (byte) w15 // arg2
         ubfx w11,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         csel w10,w14,w10, ne
         [x1 + 0x46] = (byte) w12 // arg2

    loc_0x0803a3b8: // orphan
         // CODE XREF from sym.arm64_simd_decode_by_element @ 0x803a210
         if ((w0 & 0x40000000) == 0) // arg1
         w12 = ~0x7f              // '\x7f'
         w13 = 0x40               // '@'
         bfi w11,w9,4, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x48] = (byte) w10 // arg2
         csel w10,w13,w12, eq
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x27] = (byte) w10 // arg2
         [x1 + 0x22] = (byte) w11 // arg2
                                  // lr

    loc_0x0803a3f0: // orphan
         tbnz w16,0,0x803a428     // unlikely

    loc_0x0803a3f4: // orphan
         w8 = 0x11

    loc_0x0803a404: // orphan
         w8 = 0x5000
         if ((w0 & w8) == 0)      // arg1
         ccmp w10,0,0, ne
         cset w8,ne
         if (w12 == 3)
         b.ne 0x803a488           // likely

    loc_0x0803a41c: // orphan
         tbz w8,0,0x803a488       // likely

    loc_0x0803a428: // orphan
         w0 = 0x4
                                  // lr

    loc_0x0803a488: // orphan
         w8 = 0x8
         if (w12 == 0)
         w15 = 0x10
         w8 = w8 << w12
         w17 = 0x40               // '@'
         w16 = 0x18
         [x1 + 0x28] = w16        // arg2
         csel w8,w15,w8, eq
         if ((w0 & 0x40000000) == 0) // arg1
         w15 = ~0x7f              // '\x7f'
         csel w15,w17,w15, eq
         if ((w0 & 0x10000000) == 0) // arg1
         [x1 + 0x46] = (byte) w8  // arg2
         csel w8,w15,w8, eq
         [x1 + 0x27] = (byte) w8  // arg2
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if !w12 jmp 0x803a4e8    // likely

    loc_0x0803a4cc: // orphan
         ubfx w13,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w10,w11,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w12 == 2)
         bfi w13,w9,4, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w9,w10,w14, eq
         [x1 + 0x22] = (byte) w13 // arg2
         jmp 0x803a1bc

    loc_0x0803a4e8: // orphan
         w9 = w10 << 1
         jmp 0x803a1ac

}

/* ===== 0x0803a4f0 ===== */
int sym.arm64_simd_decode_shift_immediate (int esi, int edx) {
    loc_0x803a4f0:
        // CALL XREF from sym.arm64_decode_simd @ 0x803935c
        ubfx w9,w0,0xb, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        tbz w0,0xa,0x803a50c // likely
            
    loc_0x803a50c:
        w8 = 0x4
        tbnz w0,0x1d,0x803a5b4 // unlikely
            
    loc_0x803a5b4:
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // lr
         // } else {
    loc_0x803a514:
        if (w9 == 0xa)
        b.ne 0x803a5b4 // likely
         // } else {
        }
        return eax;
        goto loc_0x803a4f8
    loc_0x803a4fc:
        if ((w0 & 0x20000000) == 0) // arg1
        w8 = 0x8b     // '\x8b'
        cinc w9,w8,ne
        jmp 0x803a538
         // do {
    loc_0x803a538:
        // CODE XREF from sym.arm64_simd_decode_shift_immediate @ 0x803a508
        if ((w0 & 0x780000) == 0) // arg1
        [x1 + 0x2c] = w9 // arg2 // "/"
        b.eq 0x803a57c // unlikely
         // } while (?);
        }
        return eax;
    loc_0x803a544:
        ubfx w11,w0,0x13, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w10 = 0x8
        if ((w0 & 0x40000000) == 0) // arg1
        w12 = 0x40    // '@'
        clz w8,w11
        w8 = ~w8
        w10 = w10 << w8
        w8 = ~0x7f    // '\x7f'
        csel w8,w12,w8, eq
        w12 = w10 & 0xf8
        [x1 + 0x27] = (byte) w8 // arg2
        tbnz w0,0x1e,0x803a584 // unlikely
            
    loc_0x803a584:
        // CODE XREFS from sym.arm64_simd_decode_shift_immediate @ 0x803a570, 0x803a578
        ubfx w13,w0,0x10, 3 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w12 = w12 << 1
        if (w9 == 0x8a)
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x46] = (byte) w10 // arg2
        w11 = w13 | w11,lsl 3
        w13 = 0xd
        [x1 + 0x28] = w13 // arg2
        w13 = w11 - w10
        w11 = w12 - w11
        csel w9,w13,w11, eq
        [x1 + 0x45] = (byte) w9 // arg2
    loc_0x0803a51c: // orphan
             tbnz w0,0xa,0x803a534    // unlikely

    loc_0x0803a520: // orphan
         w8 = w0 & 0xc00000       // arg1
         if (w8 == 0x400)
         w8 = 0x3
         cinc w0,w8,ne
                                  // lr

    loc_0x0803a534: // orphan
         w9 = 0x8a                // '\x8a'

    loc_0x0803a574: // orphan
         if (w12 == 0x40)
         b.ne 0x803a584           // likely

    loc_0x0803a57c: // orphan
         // CODE XREF from sym.arm64_simd_decode_shift_immediate @ 0x803a540
         w0 = 0x3
                                  // lr

}

/* ===== 0x0803a5bc ===== */
int sym.arm64_simd_decode_fp_compare_zero (int esi, int edx) {
    loc_0x803a5bc:
        // CALL XREF from sym.arm64_decode_simd @ 0x8039370
        w8 = 0xc00
        w9 = 0x800
        w8 = 0x8f00
        w9 = 0xe00
        w8 = w0 & w8  // arg1
        if (w8 == w9)
        b.ne 0x803a6f0 // likely
            
    loc_0x803a6f0:
        // CODE XREFS from sym.arm64_simd_decode_fp_compare_zero @ 0x803a5d4, 0x803a5f0, 0x803a6d4
        w0 = 0x4
        // lr
         // } else {
    loc_0x803a5d8:
        w8 = w0 & 0xff0000 // arg1
        if (w8 == 0xf80)
        b.eq 0x803a60c // unlikely
        }
        return eax;
    loc_0x803a5e4:
        if (w8 == 0xe00)
        b.eq 0x803a600 // unlikely
            
    loc_0x803a600:
        // CODE XREF from sym.arm64_simd_decode_fp_compare_zero @ 0x803a5e8
        w9 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w10 = 0x40    // '@'
        jmp 0x803a614
         // do {
    loc_0x803a614:
        // CODE XREFS from sym.arm64_simd_decode_fp_compare_zero @ 0x803a5fc, 0x803a608
        w8 = w0 & 0x3ffff000 // arg1
        [x1 + 0x46] = (byte) w10 // arg2
        w11 = w8 & 0xe000ffff
        w8 = 0x4
        if (w11 == 0xe)
        b.lt 0x803a660 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803a5ec
    loc_0x803a5f4:
        w9 = 0x1
        w10 = 0x20
        jmp 0x803a614
    loc_0x0803a60c: // orphan
             // CODE XREF from sym.arm64_simd_decode_fp_compare_zero @ 0x803a5e0
             w9 = 0x1
             w10 = 0x10

    loc_0x0803a62c: // orphan
         b.eq 0x803a680           // unlikely

    loc_0x0803a630: // orphan
         w12 = 0xd000
         w12 = 0x2000
         if (w11 == w12)
         b.eq 0x803a6b8           // unlikely

    loc_0x0803a640: // orphan
         w12 = 0xc000
         w12 = 0x2000
         if (w11 == w12)
         b.ne 0x803a6e8           // likely

    loc_0x0803a650: // orphan
         w8 = 0x26                // '&'
         [x1 + 0x2c] = w8         // arg2
         tbnz w0,0x1c,0x803a6d4   // unlikely

    loc_0x0803a65c: // orphan
         jmp 0x803a68c

    loc_0x0803a660: // orphan
         // CODE XREF from sym.arm64_simd_decode_fp_compare_zero @ 0x803a628
         if (w11 == 0xc)
         b.eq 0x803a6c8           // unlikely

    loc_0x0803a668: // orphan
         if (w11 == 0xd)
         b.ne 0x803a6e8           // likely

    loc_0x0803a670: // orphan
         w8 = 0x25                // '%'
         [x1 + 0x2c] = w8         // arg2 // "&"
         tbnz w0,0x1c,0x803a6d4   // unlikely

    loc_0x0803a67c: // orphan
         jmp 0x803a68c

    loc_0x0803a680: // orphan
         // CODE XREF from sym.arm64_simd_decode_fp_compare_zero @ 0x803a62c
         w8 = 0x29                // ')'
         [x1 + 0x2c] = w8         // arg2 // "%"
         tbnz w0,0x1c,0x803a6d4   // unlikely

    loc_0x0803a68c: // orphan
         // CODE XREFS from sym.arm64_simd_decode_fp_compare_zero @ 0x803a65c, 0x803a67c, 0x803a6c0, 0x803a6d0
         if ((w0 & 0x40000000) == 0) // arg1
         w8 = w9 ^ 1
         csel w8,wzr,w8, ne
         tbnz w8,0,0x803a6b0      // unlikely

    loc_0x0803a69c: // orphan
         if ((w0 & 0x40000000) == 0) // arg1
         w8 = ~0x7f               // '\x7f'
         w9 = 0x40                // '@'
         csel w10,w9,w8, eq
         jmp 0x803a6d8

    loc_0x0803a6b0: // orphan
         // CODE XREF from sym.arm64_simd_decode_fp_compare_zero @ 0x803a698
         w0 = 0x3
                                  // lr

    loc_0x0803a6b8: // orphan
         // CODE XREF from sym.arm64_simd_decode_fp_compare_zero @ 0x803a63c
         w8 = 0x28                // '(' // U"\r)"
         [x1 + 0x2c] = w8         // arg2 // ")"
         tbz w0,0x1c,0x803a68c    // likely

    loc_0x0803a6c4: // orphan
         jmp 0x803a6d4

    loc_0x0803a6c8: // orphan
         // CODE XREF from sym.arm64_simd_decode_fp_compare_zero @ 0x803a664
         w8 = 0x27                // '''
         [x1 + 0x2c] = w8         // arg2 // "("
         tbz w0,0x1c,0x803a68c    // likely

    loc_0x0803a6d4: // orphan
         // CODE XREFS from sym.arm64_simd_decode_fp_compare_zero @ 0x803a658, 0x803a678, 0x803a688, 0x803a6c4
         tbz w0,0x1e,0x803a6f0    // likely

    loc_0x0803a6d8: // orphan
         // CODE XREF from sym.arm64_simd_decode_fp_compare_zero @ 0x803a6ac
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0x19
         [x1 + 0x27] = (byte) w10 // arg2
         [x1 + 0x28] = w9         // arg2 // U"\r'"

    loc_0x0803a6e8: // orphan
         // CODE XREFS from sym.arm64_simd_decode_fp_compare_zero @ 0x803a64c, 0x803a66c
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
                                  // lr

}

/* ===== 0x0803a6f8 ===== */
int sym.arm64_simd_decode_conversion (int esi, int edx) {
    loc_0x803a6f8:
        // CALL XREF from sym.arm64_decode_simd @ 0x8039388
        w9 = 0xbfff   // '\xff\xbf'
        w8 = w0 & 0xfffffc00 // arg1
        w9 = 0x1e22   // '\"\x1e'
        if (w8 == w9)
        jmp ifgt 0x803a748 // unlikely
            
    loc_0x803a748:
        // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a708
        w9 = ~0xe19e  // '\x9e\xe1'
        if (w8 == w9)
        jmp ifle 0x803a7b4 // likely
            
    loc_0x803a7b4:
        // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a750
        w9 = 0xc000
        w9 = 0x1e22   // '\"\x1e'
        if (w8 == w9)
        b.eq 0x803a82c // unlikely
            
    loc_0x803a82c:
        // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a7c0
        w8 = 0x40     // '@'
        w9 = 0x20
        w0 = 0x98     // '\x98'
         // do {
    loc_0x803a838:
        // CODE XREFS from sym.arm64_simd_decode_conversion @ 0x803a788, 0x803a7b0, 0x803a808, 0x803a818, 0x803a828
        [x1 + 0x27] = (byte) w8 // arg2
        [x1 + 0x46] = (byte) w9 // arg2
        // lr
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803a70c
    loc_0x803a718:
        w9 = 0x9e62   // 'b\x9e'
        if (w8 == w9)
        b.eq 0x803a7dc // unlikely
            
    loc_0x803a7dc:
        // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a720
        w8 = 0x40     // '@'
        w0 = 0x90     // '\x90'
        jmp 0x803a7f0
         // do {
    loc_0x803a7f0:
        // CODE XREFS from sym.arm64_simd_decode_conversion @ 0x803a744, 0x803a7d8, 0x803a7e4
        [x1 + 0x27] = (byte) w8 // arg2
        [x1 + 0x46] = (byte) w8 // arg2
        // lr
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803a724
    loc_0x803a730:
        w9 = 0x1e22   // '\"\x1e'
        if (w8 == w9)
        b.ne 0x803a844 // likely
            
    loc_0x803a844:
        // CODE XREFS from sym.arm64_simd_decode_conversion @ 0x803a738, 0x803a778, 0x803a7a0, 0x803a7cc
        w8 = 0xfc00
        w9 = 0xd7ff   // '\xff\xd7'
        w8 = 0x8fbf   // '\xbf\x8f'
        w9 = 0xe21    // '!\x0e'
        w8 = w0 & w8  // arg1
        if (w8 == w9)
        jmp ifgt 0x803a898 // unlikely
            
    loc_0x803a898:
        // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a85c
        w9 = 0xd800
        w9 = 0xe21    // '!\x0e'
        if (w8 == w9)
        b.eq 0x803a8e0 // unlikely
            
    loc_0x803a8e0:
        // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a8a4
        if ((w0 & 0x20000000) == 0) // arg1
        w8 = 0x9b     // '\x9b'
        cinc w8,w8,ne
        jmp 0x803a904
         // do {
    loc_0x803a904:
        // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a8ec
        if ((w0 & 0x400000) == 0) // arg1
        w9 = 0x40     // '@'
        w10 = 0x20
        csel w10,w10,w9, eq
        [x1 + 0x46] = (byte) w10 // arg2
        tbnz w0,0x1c,0x803a944 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0803a760: // orphan
             w9 = 0x4000
             w9 = 0x1e62              // 'b\x1e'
             if (w8 == w9)
             b.eq 0x803a80c           // unlikely

    loc_0x0803a770: // orphan
         w9 = 0x1e63              // 'c\x1e'
         if (w8 == w9)
         b.ne 0x803a844           // likely

    loc_0x0803a77c: // orphan
         w8 = 0x40                // '@'
         w9 = 0x20
         w0 = 0x93                // '\x93'
         jmp 0x803a838

    loc_0x0803a78c: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a714
         w9 = 0x9e22              // '\"\x9e'
         if (w8 == w9)
         b.eq 0x803a81c           // unlikely

    loc_0x0803a798: // orphan
         w9 = 0x9e23              // '#\x9e'
         if (w8 == w9)
         b.ne 0x803a844           // likely

    loc_0x0803a7a4: // orphan
         w8 = 0x20
         w9 = 0x40                // '@'
         w0 = 0x92                // '\x92'
         jmp 0x803a838

    loc_0x0803a7d0: // orphan
         w8 = 0x20
         w0 = 0x91                // '\x91'
         jmp 0x803a7f0

    loc_0x0803a7e8: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a72c
         w8 = 0x40                // '@'
         w0 = 0x94                // '\x94'

    loc_0x0803a7fc: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a75c
         w8 = 0x40                // '@'
         w9 = 0x20
         w0 = 0x8f                // '\x8f'
         jmp 0x803a838

    loc_0x0803a80c: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a76c
         w8 = 0x20
         w9 = 0x40                // '@'
         w0 = 0x97                // '\x97'
         jmp 0x803a838

    loc_0x0803a81c: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a794
         w8 = 0x20
         w9 = 0x40                // '@'
         w0 = 0x8e                // '\x8e'
         jmp 0x803a838

    loc_0x0803a870: // orphan
         w9 = 0xb800
         w9 = 0xe21               // '!\x0e'
         if (w8 == w9)
         b.eq 0x803a8d8           // unlikely

    loc_0x0803a880: // orphan
         w9 = 0xc800
         w9 = 0xe21               // '!\x0e'
         if (w8 == w9)
         b.ne 0x803a964           // likely

    loc_0x0803a890: // orphan
         w8 = 0x5
         jmp 0x803a8f4

    loc_0x0803a8b8: // orphan
         w9 = 0xb800
         w9 = 0xea1               // '\xa1\x0e'
         if (w8 == w9)
         b.ne 0x803a964           // likely

    loc_0x0803a8c8: // orphan
         w8 = 0x4
         jmp 0x803a8f4

    loc_0x0803a8d0: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a86c
         w8 = 0x1
         jmp 0x803a8f4

    loc_0x0803a8d8: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a87c
         w8 = 0x3
         jmp 0x803a8f4

    loc_0x0803a8f0: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a8b4
         w8 = 0x2

    loc_0x0803a8f4: // orphan
         // CODE XREFS from sym.arm64_simd_decode_conversion @ 0x803a894, 0x803a8cc, 0x803a8d4, 0x803a8dc
         if ((w0 & 0x20000000) == 0) // arg1
         w9 = 0x99                // '\x99'
         [x1 + 0x30] = w8         // arg2
         cinc w8,w9,ne

    loc_0x0803a91c: // orphan
         w10 = 0x4040             // '@@'
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = ~0x7f              // '\x7f'
         w10 = w0 & w10           // arg1
         csel w9,w9,w11, eq
         if (w10 == 0x400)
         [x1 + 0x27] = (byte) w9  // arg2
         b.eq 0x803a948           // unlikely

    loc_0x0803a93c: // orphan
         // CODE XREFS from sym.arm64_simd_decode_conversion @ 0x803a990, 0x803a994
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
                                  // lr

    loc_0x0803a944: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a918
         tbnz w0,0x1e,0x803a958   // unlikely

    loc_0x0803a948: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a938
         w9 = 0x1
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x2] = (byte) w9         // arg3
                                  // lr

    loc_0x0803a958: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a944
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x27] = (byte) w10 // arg2
                                  // lr

    loc_0x0803a964: // orphan
         // CODE XREFS from sym.arm64_simd_decode_conversion @ 0x803a88c, 0x803a8c4
         w8 = 0xfc00
         w9 = 0x1e20              // ' \x1e'
         w8 = 0x7fa0              // '\xa0\x7f'
         w8 = w0 & w8             // arg1
         if (w8 == w9)
         b.ne 0x803a9a0           // likely

    loc_0x0803a97c: // orphan
         ubfx w9,w0,0x13, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 &= w0                 // arg1
         b.eq 0x803a9a8           // unlikely

    loc_0x0803a988: // orphan
         if (w8 == 0x40)
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         b.ne 0x803a93c           // likely

    loc_0x0803a994: // orphan
         if w9 jmp 0x803a93c      // unlikely

    loc_0x0803a998: // orphan
         w8 = 0x5
         jmp 0x803a9b4

    loc_0x0803a9a0: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a978
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
                                  // lr

    loc_0x0803a9a8: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a984
         x8 = 0x803a000
         x8 = x8 + 0
         w8 = [x8 + w9,uxtw 2]    // 0xb1000000cf // 760209211599

    loc_0x0803a9b4: // orphan
         // CODE XREF from sym.arm64_simd_decode_conversion @ 0x803a99c
         if (w0 == 0)             // arg1
         w9 = 0x40                // '@'
         w10 = 0x20
         [x1 + 0x30] = w8         // arg2
         csel w8,w10,w9, ge
         if ((w0 & 0x400000) == 0) // arg1
         [x1 + 0x27] = (byte) w8  // arg2
         csel w8,w10,w9, eq
         if ((w0 & 0x10000) == 0) // arg1
         w9 = 0x95                // '\x95'
         [x1 + 0x46] = (byte) w8  // arg2 // "@ "
         cinc w8,w9,ne
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
                                  // lr

}

/* ===== 0x0803a9ec ===== */
int sym.arm64_simd_decode_fp_vector_2reg (int esi, int edx) {
    loc_0x803a9ec:
        // CALL XREF from sym.arm64_decode_simd @ 0x8039a28
        w8 = w0 & 0xfe0000 // arg1
        if (w8 == 0xf80)
        b.eq 0x803aa10 // unlikely
            
    loc_0x803aa10:
        // CODE XREF from sym.arm64_simd_decode_fp_vector_2reg @ 0x803a9f4
        w8 = 0x10
        jmp 0x803aa28
         // do {
    loc_0x803aa28:
        // CODE XREFS from sym.arm64_simd_decode_fp_vector_2reg @ 0x803aa0c, 0x803aa14
        w9 = 0xfc00
        w10 = 0xf800
        [x1 + 0x46] = (byte) w8 // arg2 // "@ "
        w9 = 0xbf01
        w10 = 0xe00
        w9 = w0 & w9  // arg1
        if (w9 == w10)
        b.eq 0x803aa78 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803a9f8
    loc_0x803aa00:
        if (w8 == 0xa00)
        b.ne 0x803aa70 // likely
            
    loc_0x803aa70:
        // CODE XREFS from sym.arm64_simd_decode_fp_vector_2reg @ 0x803aa04, 0x803aa64
        w0 = 0x4
        // lr
         // } else {
    loc_0x803aa08:
        w8 = 0x20
        jmp 0x803aa28
        }
        return eax;
    loc_0x0803aa18: // orphan
             // CODE XREF from sym.arm64_simd_decode_fp_vector_2reg @ 0x803a9fc
             tbnz w0,0x1e,0x803aa24   // unlikely

    loc_0x0803aa1c: // orphan
         w0 = 0x3
                                  // lr

    loc_0x0803aa24: // orphan
         // CODE XREF from sym.arm64_simd_decode_fp_vector_2reg @ 0x803aa18
         w8 = 0x40                // '@'

    loc_0x0803aa48: // orphan
         w8 = 0xf800
         w8 = 0x2e01
         if (w9 == w8)
         b.eq 0x803aa80           // unlikely

    loc_0x0803aa58: // orphan
         w8 = 0xf800
         w8 = 0x2e00
         if (w9 == w8)
         b.ne 0x803aa70           // likely

    loc_0x0803aa68: // orphan
         w9 = 0xd
         jmp 0x803aa84

    loc_0x0803aa78: // orphan
         // CODE XREF from sym.arm64_simd_decode_fp_vector_2reg @ 0x803aa44
         w9 = 0xc
         jmp 0x803aa84

    loc_0x0803aa80: // orphan
         // CODE XREF from sym.arm64_simd_decode_fp_vector_2reg @ 0x803aa54
         w9 = 0xe

    loc_0x0803aa84: // orphan
         // CODE XREFS from sym.arm64_simd_decode_fp_vector_2reg @ 0x803aa6c, 0x803aa7c
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = 0x15
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         [x1, 0x28] = (w10,2)     // arg2
         csel w9,w12,w11, eq
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x27] = (byte) w9  // arg2
                                  // lr

}

/* ===== 0x0803aaac ===== */
int sym.arm64_simd_decode_rev (int esi, int edx) {
    loc_0x803aaac:
        // CALL XREF from sym.arm64_decode_simd @ 0x8039a3c
        w8 = 0xfc00
        w10 = 0x800
        ubfx w9,w0,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = 0xbf3f   // '?\xbf'
        w10 = 0x2e20  // ' .'
        w8 = w0 & w8  // arg1
        if (w8 == w10)
        b.eq 0x803aafc // unlikely
            
    loc_0x803aafc:
        // CODE XREF from sym.arm64_simd_decode_rev @ 0x803aac8
        if (w9 == 1)
        b.ls 0x803ab28 // likely
            
    loc_0x803ab28:
        // CODE XREF from sym.arm64_simd_decode_rev @ 0x803ab00
        w10 = 0x4f    // 'O'
        jmp 0x803ab34
         // do {
    loc_0x803ab34:
        // CODE XREFS from sym.arm64_simd_decode_rev @ 0x803ab24, 0x803ab2c
        w14 = 0x8
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w11 = 0x16
        if ((w0 & 0x40000000) == 0) // arg1
        w12 = ~0x7f   // '\x7f'
        w13 = 0x40    // '@'
        w9 = w14 << w9
        [x1, 0x28] = (w11,2) // arg2
        csel w10,w13,w12, eq
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x1 + 0x27] = (byte) w10 // arg2
        [x1 + 0x46] = (byte) w9 // arg2
        // lr
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803aacc
    loc_0x803aadc:
        w10 = 0x800
        w10 = 0xe20   // ' \x0e'
        if (w8 == w10)
        b.ne 0x803ab18 // likely
            
    loc_0x803ab18:
        // CODE XREF from sym.arm64_simd_decode_rev @ 0x803aae8
        w0 = 0x4
        // lr
         // } else {
    loc_0x803aaec:
        if (w9 == 3)
        b.ne 0x803ab20 // likely
        }
        return eax;
    loc_0x803aaf4:
        w0 = 0x3
        // lr
         // (break)
    loc_0x0803ab0c: // orphan
             // CODE XREF from sym.arm64_simd_decode_rev @ 0x803aad8
             if !w9 jmp 0x803ab30     // likely

    loc_0x0803ab10: // orphan
         w0 = 0x3
                                  // lr

    loc_0x0803ab20: // orphan
         // CODE XREF from sym.arm64_simd_decode_rev @ 0x803aaf0
         w10 = 0x4e               // 'N'
         jmp 0x803ab34

    loc_0x0803ab30: // orphan
         // CODE XREF from sym.arm64_simd_decode_rev @ 0x803ab0c
         w10 = 0x50               // 'P'

}

/* ===== 0x0803ab68 ===== */
int sym.arm64_simd_decode_fp_reduce (int esi, int edx) {
    loc_0x803ab68:
        // CALL XREF from sym.arm64_decode_simd @ 0x8039a50
        w8 = 0xfc00
        w9 = 0xd800
        w8 = 0xdfbf   // '\xbf\xdf'
        w9 = 0x5e30   // '0^'
        w8 = w0 & w8  // arg1
        if (w8 == w9)
        b.ne 0x803ab98 // likely
            
    loc_0x803ab98:
        // CODE XREF from sym.arm64_simd_decode_fp_reduce @ 0x803ab80
        w8 = w0 & 0xfffffc00 // arg1
        w9 = w8 & 0x9fffffff
        w8 = 0xc7ff   // '\xff\xc7'
        w8 = 0xeb0    // '\xb0\x0e'
        if (w9 == w8)
        w8 = 0x4
        jmp ifgt 0x803ac28 // unlikely
            
    loc_0x803ac28:
        // CODE XREF from sym.arm64_simd_decode_fp_reduce @ 0x803abb0
        w10 = 0xf800
        w10 = 0xeb0   // '\xb0\x0e'
        if (w9 == w10)
        b.eq 0x803ac94 // unlikely
            
    loc_0x803ac94:
        // CODE XREF from sym.arm64_simd_decode_fp_reduce @ 0x803ac34
        w8 = 0x34     // '4'
        [x1 + 0x2c] = w8 // arg2
        tbnz w0,0x1d,0x803ac54 // unlikely
            
    loc_0x803ac54:
        // CODE XREFS from sym.arm64_simd_decode_fp_reduce @ 0x803abdc, 0x803ac90, 0x803ac9c
        tbnz w0,0x1e,0x803ac60 // unlikely
            
    loc_0x803ac60:
        // CODE XREF from sym.arm64_simd_decode_fp_reduce @ 0x803ac54
        w8 = 0x20
        w9 = 0x80     // '\x80'
         // do {
    loc_0x803ac68:
        // CODE XREF from sym.arm64_simd_decode_fp_reduce @ 0x803abf4
        [x1 + 0x46] = (byte) w8 // arg2
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x27] = (byte) w9 // arg2
        w9 = 0x1a
        [x1 + 0x28] = w9 // arg2
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803ab84
    loc_0x803ab88:
        tbnz w0,0x16,0x803ac58 // unlikely
    loc_0x803ab8c:
        w8 = 0x10
        w9 = 0x20
        jmp 0x803ac0c
         // do {
    loc_0x803ac0c:
        // CODE XREF from sym.arm64_simd_decode_fp_reduce @ 0x803ab94
        [x1 + 0x46] = (byte) w8 // arg2
        x10 = 0x1a
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x27] = (byte) w9 // arg2
        x10 = 0x18
        [x1 + 0x28] = x10 // arg2
        // lr
         // } while (?);
        }
        return eax;
    loc_0x0803abc4: // orphan
             w10 = 0xf800
             w10 = 0xe30              // '0\x0e'
             if (w9 == w10)
             b.ne 0x803ac7c           // likely

    loc_0x0803abd4: // orphan
         w8 = 0x33                // '3'
         [x1 + 0x2c] = w8         // arg2
         tbnz w0,0x1d,0x803ac54   // unlikely

    loc_0x0803abe0: // orphan
         // CODE XREFS from sym.arm64_simd_decode_fp_reduce @ 0x803ac50, 0x803ac8c, 0x803aca0
         if ((w0 & 0x40000000) == 0) // arg1
         w9 = ~0x7f               // '\x7f'
         w10 = 0x40               // '@'
         w8 = 0x10
         csel w9,w10,w9, eq
         jmp 0x803ac68

    loc_0x0803abf8: // orphan
         // CODE XREF from sym.arm64_simd_decode_fp_reduce @ 0x803ab84
         if ((w0 & 0x400000) == 0) // arg1
         w8 = 0x40                // '@'
         w9 = 0x20
         csel w8,w9,w8, eq
         w9 = w8 << 1

    loc_0x0803ac48: // orphan
         w8 = 0x32                // '2'
         [x1 + 0x2c] = w8         // arg2 // "3"
         tbz w0,0x1d,0x803abe0    // likely

    loc_0x0803ac7c: // orphan
         // CODE XREFS from sym.arm64_simd_decode_fp_reduce @ 0x803abd0, 0x803ac44
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
                                  // lr

    loc_0x0803ac84: // orphan
         // CODE XREF from sym.arm64_simd_decode_fp_reduce @ 0x803abc0
         w8 = 0x31                // '1'
         [x1 + 0x2c] = w8         // arg2 // "2"
         tbz w0,0x1d,0x803abe0    // likely

    loc_0x0803ac90: // orphan
         jmp 0x803ac54

}

/* ===== 0x0803aca4 ===== */
int sym.arm64_simd_decode_fp_3same_operation (int esi, int edx) {
    loc_0x803aca4:
        // CALL XREF from sym.arm64_simd_decode_vector_3same @ 0x8039ea4
        // CALL XREFS from sym.arm64_simd_decode_scalar_3same @ 0x8039fc8, 0x803a064
        w8 = w1 & 0xff // arg2
        w9 = w0 & 0xff // arg1
        w8 = w8 << 5
        w8 = w8 | w9,lsl 6
        w9 = w2 & 0xff // arg3
        w8 = w8 | w9
        w8 = w8 - 0x18
        if (w8 == 0x67)
        b.hi 0x803ad04 // likely
            
    loc_0x803ad04:
        // CODE XREF from sym.arm64_simd_decode_fp_3same_operation @ 0x803acc4
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // lr
         // } else {
    loc_0x803acc8:
        x9 = 0x803a000
        x9 = x9 + 0
        w0 = 0x8
        x10 = 0x803ace4
        w11 = (byte) [x9 + x8] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11,lsl 2
        br x10
        }
        return eax;
}

/* ===== 0x0803ae3c ===== */
int sym.init_module (int esi, int edx) {
    loc_0x803ae3c:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x1d
        0x803ae50 ()  // 0x803ae50(0x1d, 0x0, 0x0, 0x0)
        if w0 jmp 0x803ae8c // likely
            
    loc_0x803ae8c:
        // CODE XREF from sym.init_module @ 0x803ae54
        w19 = ~0
        x0 = 0x803a000
        x0 = x0 + 0
        jmp 0x803aed0
         // do {
    loc_0x803aed0:
        // CODE XREF from sym.init_module @ 0x803ae98
        0x803aed0 ()  // 0x803aed0(0x0, 0x0, 0x0, 0x0)
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x0803aee4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803ae58
    loc_0x803ae70:
        x10 = [x9]    // 0xd0 // 208
        x11 = [x10 + 8] // 0xd1 // 209
        if (x11 == x9)
        b.ne 0x803ae9c // likely
            
    loc_0x803ae9c:
        // CODE XREFS from sym.init_module @ 0x803ae6c, 0x803ae7c
        x0 = 0x803a000
        x0 = x0 + 0
        0x803aea4 ()  // 0x803aea4(0x803a000, 0x0, 0x0, 0x0)
         // do {
    loc_0x803aea8:
        // CODE XREF from sym.init_module @ 0x803ae88
        x8 = 0x100
        w10 = 0x22    // '\"'
        x0 = x9 + 0x60
        x8 = 0xdead   // '\xad\xde'
        x10 = x8 | x10
        [x9] = (x8,2)
        0x803aec0 ()  // 0x803aec0(0x60, 0x0, 0x0, 0x0)
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x803a000
        x0 = x0 + 0
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x080038e0 ===== */
int sym.install_hook (int esi, int edx) {
    loc_0x80038e0:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80038ec ()  // 0x80038ec(0x0, 0x0, 0x0, 0x0)
        0x80038f0 ()  // 0x80038f0(0x0, 0x0, 0x0, 0x0)
        0x80038f4 ()  // 0x80038f4(0x0, 0x0, 0x0, 0x0)
        if w0 jmp 0x8003910 // unlikely
            
    loc_0x8003910:
        // CODE XREF from sym.install_hook @ 0x80038f8
        sym.unfuck_cfi () // sym.unfuck_cfi(0x0)
        w0 = ~0
         // do {
    loc_0x8003918:
        // CODE XREF from sym.install_hook @ 0x8003948
        (x29, 2) = 3
        hint 0x1d
        0x08003920
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80038fc
    loc_0x8003904:
        0x8003904 ()  // 0x8003904(0x0, 0x0, 0x0, 0x0)
        if !w0 jmp 0x800393c // likely
            
    loc_0x800393c:
        // CODE XREF from sym.install_hook @ 0x8003908
        0x800393c ()  // 0x800393c(0x0, 0x0, 0x0, 0x0)
        0x8003940 ()  // 0x8003940(0x0, 0x0, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x8003918
    loc_0x0800390c: // orphan
             // CODE XREF from sym.install_hook @ 0x8003938
             0x800390c ()             // 0x800390c(0x0, 0x0, 0x0, 0x0)

    loc_0x08003924: // orphan
         // CODE XREF from sym.install_hook @ 0x8003900
         w1 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text
         0x8003930 ()             // 0x8003930(0x8003000, 0x0, 0x0, 0x0)
         0x8003934 ()             // 0x8003934(0x8003000, 0x0, 0x0, 0x0)
         if w0 jmp 0x800390c      // likely

}

/* ===== 0x0803aeec ===== */
int sym.cleanup_module (int esi, int edx) {
    loc_0x803aeec:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x803aef8 ()  // 0x803aef8(0x0, 0x0, 0x0, 0x0)
        if !w0 jmp 0x803af0c // likely
            
    loc_0x803af0c:
        // CODE XREF from sym.cleanup_module @ 0x803aefc
        0x803af0c ()  // 0x803af0c(0x0, 0x0, 0x0, 0x0)
        x0 = 0x803a000
        x0 = x0 + 0
        0x803af18 ()  // 0x803af18(0x803a000, 0x0, 0x0, 0x0)
        (x29, 2) = 3
        hint 0x1d
        0x0803af24
         // } else {
    loc_0x803af00:
        x0 = 0x803a000
        x0 = x0 + 0
        0x803af08 ()  // 0x803af08(0x803a000, 0x0, 0x0, 0x0)
        }
        return eax;
}

/* ===== 0x08003b08 ===== */
int sym.unstall_hook (int esi, int edx) {
    loc_0x8003b08:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8003b18 ()  // 0x8003b18(0x0, 0x0, 0x0, 0x0)
        0x8003b1c ()  // 0x8003b1c(0x0, 0x0, 0x0, 0x0)
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8003b24 ()  // 0x8003b24(0x0, 0x0, 0x0, 0x0)
        0x8003b28 ()  // 0x8003b28(0x0, 0x0, 0x0, 0x0)
        0x8003b2c ()  // 0x8003b2c(0x0, 0x0, 0x0, 0x0)
        sym.unfuck_cfi () // sym.unfuck_cfi(0x0)
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        // lr
         // (break)
}

/* ===== 0x08004fcc ===== */
int sym.pte_control_exit (int esi, int edx) {
    loc_0x8004fcc:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8004000
        x0 = x0 + 0
        0x8004fe4 ()  // 0x8004fe4(0x8004000, 0x0, 0x0, 0x0)
        x19 = 0x8004000
        x0 = [x19]    // 0xda // 218
        if !x0 jmp 0x8004ff8 // unlikely
            
    loc_0x8004ff8:
        x8 = 0x8004000
        x0 = 0x8004000
        // XREFS(49)
        x0 = x0 + 0
        [x19] = xzr
        [x8] = xzr
        0x800500c ()  // 0x800500c(0x8004000, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x0800501c
         // } else {
    loc_0x8004ff4:
        0x8004ff4 ()  // 0x8004ff4(0x0, 0x0, 0x0, 0x0)
        }
        return eax;
}

/* ===== 0x08003004 ===== */
int sym.util_find_kallsyms (int esi, int edx) {
    loc_0x8003004:
        // DATA XREFS from sym.fuck_cfi @ 0x800354c, 0x8003660, 0x8003760
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        // CODE XREFS from sym.fuck_cfi @ 0x8003690, 0x8003768
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = sym..text // 0x8003000
        x19 = [x21]   // 0xdc // 220 // sym..text
        if x19 jmp 0x8003050 // likely
            
    loc_0x8003050:
        // CODE XREFS from sym.util_find_kallsyms @ 0x8003020, 0x8003048
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08003064
         // } else {
    loc_0x8003024:
        x20 = sym..text // 0x8003000
        x20 = x20 + 0 // 0x8003000
        // sym..text
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // sym..text
        0x8003030 ()  // 0x8003030(0x8003000, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x800304c // unlikely
        }
        return eax;
    loc_0x8003038:
        x19 = [x20 + 0x28] // 0xdb // 219
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x21] = x19
        0x8003044 ()  // 0x8003044(0x0, 0x0, 0x0, 0x0)
        jmp 0x8003050
    loc_0x0800304c: // orphan
             // CODE XREF from sym.util_find_kallsyms @ 0x8003034
             x19 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

}

/* ===== 0x0800306c ===== */
int sym.util_kallsyms_lookup_name (int esi, int edx) {
    loc_0x800306c:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = sym..text // 0x8003000
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x21]    // 0xdc // 220 // sym..text
        if !x8 jmp 0x800309c // unlikely
            
    loc_0x800309c:
        // CODE XREF from sym.util_kallsyms_lookup_name @ 0x800308c
        x20 = sym..text // 0x8003000
        x20 = x20 + 0 // 0x8003000
        // sym..text
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // sym..text
        0x80030a8 ()  // 0x80030a8(0x8003000, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x80030c8 // unlikely
            
    loc_0x80030c8:
        // CODE XREF from sym.util_kallsyms_lookup_name @ 0x80030ac
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x80030cc:
        // CODE XREF from sym.util_kallsyms_lookup_name @ 0x8003098
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x080030dc
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x080030e4 ===== */
int sym.init_page_util (int esi, int edx) {
    loc_0x80030e4:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = sym..text // 0x8003000
        x8 = [x20]    // 0xdb // 219 // sym..text
        if x8 jmp 0x8003128 // likely
            
    loc_0x8003128:
        // CODE XREFS from sym.init_page_util @ 0x8003100, 0x8003114
        mrs x8,tcr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx x9,x8,0x1e, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = 0xc
        w11 = 0x10
        ubfx x8,x8,0x10, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = sym..text // 0x8003000
        if (x9 == 3)
        csel x10,x11,x10, eq
        if (x9 == 1)
        w9 = 0xe
        csel x9,x9,x10, eq
        w10 = 0x3c    // '<'
        x8 = x10 - x8
        x10 = x9 - 3
        [x21] = x9    // sym..text
        x10 = (unsigned) x8 / x10
        x8 = [x20]    // 0xdb // 219
        x9 = sym..text // 0x8003000
        [x9] = x10    // sym..text
        if !x8 jmp 0x800319c // unlikely
            
    loc_0x800319c:
        // CODE XREF from sym.init_page_util @ 0x8003174
        x19 = sym..text // 0x8003000
        x19 = x19 + 0 // 0x8003000
        // sym..text
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // sym..text
        0x80031a8 ()  // 0x80031a8(0x8003000, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x80031c8 // unlikely
            
    loc_0x80031c8:
        // CODE XREFS from sym.init_page_util @ 0x800318c, 0x8003198, 0x80031ac
        mrs x8,ttbr1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = [x21]    // 0xdc // 220
        x10 = ~0
        x9 = x10 << x9
        x10 = sym..text // 0x8003000
        x10 = [x10]   // 0xd1 // 209 // sym..text
        x8 = x9 & x8
        x8 = x8 - x10
        x8 = x8 | 0xffffff8000000000
         // do {
    loc_0x80031ec:
        // CODE XREF from sym.init_page_util @ 0x8003194
        x9 = sym..text // 0x8003000
        [x9] = x8     // sym..text
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08003204
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8003104
    loc_0x8003118:
        x8 = [x19 + 0x28] // 0xda // 218
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x20] = x8
        0x8003124 ()  // 0x8003124(0x0, 0x0, 0x0, 0x0)
    loc_0x08003190: // orphan
             x8 = [x0 + 0x70]         // 0xc7 // 199
             if x8 jmp 0x80031ec      // likely

    loc_0x08003198: // orphan
         jmp 0x80031c8

}

/* ===== 0x0800320c ===== */
int sym.pgtable_entry (int esi, int edx) {
    loc_0x800320c:
        hint 0x19
        sp = sp - 0x70
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x28,2)
        [sp, 0x30] = (x26,2)
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_10h
        x22 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8003410 // likely
            
    loc_0x8003410:
        // XREFS: CODE 0x08003234  CODE 0x08003240  CODE 0x0800324c
        // XREFS: CODE 0x08003254  CODE 0x0800328c  CODE 0x080033a0
        // XREFS: CODE 0x080033a8
        x0 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_70h
        hint 0x1d
        0x08003434
         // } else {
    loc_0x8003238:
        x24 = sym..text // 0x8003000
        x9 = [x24]    // 0xdf // 223 // sym..text // sym..text
        if !x9 jmp 0x8003410 // unlikely
        }
        return eax;
    loc_0x8003244:
        x8 = sym..text // 0x8003000
        x8 = [x8]     // 0xcf // 207 // sym..text // sym..text
        if !x8 jmp 0x8003410 // unlikely
    loc_0x8003250:
        if (x8 == 5)
        b.hi 0x8003410 // unlikely
    loc_0x8003258:
        x10 = x9 - 3
        w11 = w8 - 1
        x25 = ~0
        madd x9,x10,x11, x9
        x10 = x25 << x10
        x11 = 0xffff  // '\xff\xff'
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x22 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [var_8h] = xzr
        x9 = x1 >> x9 // arg2
        bic x9,x9,x10 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = x0 + x9,lsl 3 // arg1
        if (x9 == x11)
        b.lo 0x8003410 // likely
    loc_0x8003290:
        x26 = ~x10
        w27 = w8 - 2
        x28 = sym..text // 0x8003000
        x23 = sym..text // 0x8003000
        x21 = ~0x1
        x22 = x9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x80032a8:
        // CODE XREF from sym.pgtable_entry @ 0x80033f8
        x8 = [x28]    // 0xe3 // 227
        if x8 jmp 0x8003360 // likely
         // } while (?);
        }
        return eax;
    loc_0x80032b0:
        x8 = sym..text // 0x8003000
        x8 = [x8]     // 0xcf // 207 // sym..text // sym..text
        if !x8 jmp 0x80032d8 // unlikely
            
    loc_0x80032d8:
        // CODE XREF from sym.pgtable_entry @ 0x80032b8
        x0 = sym..text // 0x8003000
        x0 = x0 + 0   // 0x8003000
        // sym..text // int64_t arg1
        0x80032e0 ()  // 0x80032e0(0x8003000, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x800330c // unlikely
            
    loc_0x800330c:
        // CODE XREFS from sym.pgtable_entry @ 0x80032c8, 0x80032e4
        x8 = sym..text // 0x8003000
        x8 = [x8]     // 0xcf // 207 // sym..text // sym..text
        if x8 jmp 0x8003348 // likely
            
    loc_0x8003348:
        // CODE XREF from sym.pgtable_entry @ 0x8003314
        x0 = sym..text // 0x8003000
        x0 = x0 + 0   // 0x8003000
        // sym..text
        blr x8        // xzr(0x8003000, 0x0, 0x0, 0x0)
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // sym..text
        [x28] = x0
        if !x0 jmp 0x8003404 // unlikely
            
    loc_0x8003404:
        // CODE XREF from sym.pgtable_entry @ 0x800335c
        x20 = x22     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x8003390
         // do {
    loc_0x8003390:
        // CODE XREF from sym.pgtable_entry @ 0x8003408
        x8 = [x20]    // 0xdb // 219 // sym..text
        x9 &= x8
        b.eq 0x800340c // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80032bc
    loc_0x80032cc:
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x28] = x0
        jmp 0x8003360
    loc_0x08003308: // orphan
             jmp 0x8003318

    loc_0x08003328: // orphan
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text // int64_t arg1
         x20 = sym..text          // 0x8003000
         x8 = [x0 + 0x28]         // 0xc7 // 199
         [x20] = x8               // sym..text
         0x800333c ()             // 0x800333c(0x8003000, 0x0, 0x0, 0x0)
         x8 = [x20]               // 0xdb // 219 // sym..text
         if !x8 jmp 0x8003400     // unlikely

    loc_0x08003384: // orphan
         brk 0x8228

    loc_0x08003388: // orphan
         // CODE XREF from sym.pgtable_entry @ 0x8003380
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         if x0 jmp 0x800340c      // unlikely

    loc_0x0800339c: // orphan
         if (w27 != 1)
         b.eq 0x8003410           // unlikely

    loc_0x080033a4: // orphan
         if (x9 == 1)
         b.eq 0x8003410           // unlikely

    loc_0x080033ac: // orphan
         if (x9 == 3)
         b.ne 0x800340c           // likely

    loc_0x080033b4: // orphan
         x9 = [x24]               // 0xdf // 223
         x10 = x25 << x9
         x8 = x8 & x10
         x8 &= x8
         b.eq 0x800340c           // unlikely

    loc_0x080033c8: // orphan
         w10 = w27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9 - 3
         w27 = w27 - 1
         madd x9,x11,x10, x9
         x10 = [x23]              // 0xde // 222
         [var_8h] = xzr
         x8 = x8 - x10
         x8 = x8 | 0xffffff8000000000
         x9 = x19 >> x9
         x9 = x9 & x26
         x22 = x8 + x9,lsl 3
         if (x22 == x21)
         b.hi 0x80032a8           // likely

    loc_0x080033fc: // orphan
         jmp 0x800340c

    loc_0x08003400: // orphan
         // CODE XREFS from sym.pgtable_entry @ 0x8003324, 0x8003344
         [x28] = xzr

    loc_0x0800340c: // orphan
         // CODE XREFS from sym.pgtable_entry @ 0x800338c, 0x8003398, 0x80033b0, 0x80033c4, 0x80033fc
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

}

/* ===== 0x0800343c ===== */
int sym.pgtable_entry_kernel (int esi, int edx) {
    loc_0x800343c:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = sym..text // 0x8003000
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x20]    // 0xdb // 219 // sym..text
        if x8 jmp 0x8003468 // likely
            
    loc_0x8003468:
        // CODE XREF from sym.pgtable_entry_kernel @ 0x8003458
        x0 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8003470 ()  // 0x8003470(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x8003474:
        // CODE XREF from sym.pgtable_entry_kernel @ 0x8003488
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08003480
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800345c
    loc_0x8003484:
        // CODE XREF from sym.pgtable_entry_kernel @ 0x8003464
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x8003474
}

/* ===== 0x08003490 ===== */
int sym.fuck_cfi (int esi, int edx) {
    loc_0x8003490:
        hint 0x19
        sp = sp - 0x90
        [sp, 0x50] = (x29,2)
        [var_60h] = x23
        [sp, 0x70] = (x22,2)
        [sp, 0x80] = (x20,2)
        x29 = var_50h
        x22 = sym..text // 0x8003000
        w8 = (byte) [x22] // 0xdd // 221 // sym..text
        tbnz w8,0,0x80036f4 // unlikely
            
    loc_0x80036f4:
        // XREFS: CODE 0x080034b4  CODE 0x0800371c  CODE 0x080037cc
        // XREFS: CODE 0x080037fc  CODE 0x0800382c  CODE 0x0800385c
        // XREFS: CODE 0x0800388c  CODE 0x080038bc  CODE 0x080038d4
        (x20, 2) = 3
        x23 = [var_60h] // 0x4 // 4
        (x22, 2) = 3
        (x29, 2) = 3
        sp = arg_90h  // tmp
        hint 0x1d
        0x0800370c
         // } else {
    loc_0x80034b8:
        x23 = sym..text // 0x8003000
        [sp, 0x40] = (xzr,2)
        x8 = [x23]    // 0xde // 222 // sym..text
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [sp, 8] = (xzr,2)
        [var_0h] = xzr
        if x8 jmp 0x8003504 // likely
        }
        return eax;
    loc_0x80034d8:
        x19 = sym..text // 0x8003000
        x19 = x19 + 0 // 0x8003000
        // sym..text
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_90h // sym..text
        0x80034e4 ()  // 0x80034e4(0x8003000, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x8003710 // unlikely
            
    loc_0x8003710:
        // CODE XREFS from sym.fuck_cfi @ 0x80034e8, 0x8003500, 0x8003510
        x0 = sym..text // 0x8003000
        x0 = x0 + 0   // 0x8003000
        // sym..text // int64_t arg_90h
        0x8003718 ()  // 0x8003718(0x8003000, 0x0, 0x0, 0x0)
        jmp 0x80036f4
    loc_0x080034ec: // orphan
             x8 = [x19 + 0x28]        // 0xda // 218
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_90h
             [x23] = x8
             0x80034f8 ()             // 0x80034f8(0x0, 0x0, 0x0, 0x0)
             x8 = [x23]               // 0xde // 222
             if !x8 jmp 0x8003710     // unlikely

    loc_0x08003504: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x80034d4
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text
         blr x8                   // xzr(0x8003000, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8003710     // unlikely

    loc_0x08003514: // orphan
         x8 = [x23]               // 0xde // 222
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x8 jmp 0x8003598     // unlikely

    loc_0x08003520: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x80035c0
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text
         blr x8                   // xzr(0x8003000, 0x0, 0x0, 0x0)
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x0 jmp 0x800358c     // unlikely

    loc_0x08003534: // orphan
         x8 = 0x30                // '0'
         x8 = x0 + x8
         x8 = x8 >> 0x25
         if !x8 jmp 0x800358c     // unlikely

    loc_0x08003544: // orphan
         w8 = 0x245f              // '_$'
         [var_20h] = x0
         x10 = x0 + 4             // 0x8003004
                                  // sym.util_find_kallsyms
         w8 = 0xd503
         w20 = 0x2
         [var_8h] = w8
         x8 = sym..text           // 0x8003000
         x8 = x8 + 0              // 0x8003000
                                  // sym..text
         [x8] = x0                // sym..text
         w9 = [x0]                // 0xc7 // 199
         [var_20h_2] = x10
         [x8 + 0x10] = x10
         [x8 + 8] = w9
         w9 = 0x3c0
         w9 = 0xd65f              // '_\xd6'
         [var_0h_2] = w9
         w9 = [x0 + 4]            // 0xc7 // 199
         [x8 + 0x18] = w9

    loc_0x0800358c: // orphan
         // CODE XREFS from sym.fuck_cfi @ 0x8003530, 0x8003540
         x8 = [x23]               // 0xde // 222
         if x8 jmp 0x8003604      // likely

    loc_0x08003594: // orphan
         jmp 0x80035d8

    loc_0x08003598: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x800351c
         x20 = sym..text          // 0x8003000
         x20 = x20 + 0            // 0x8003000
                                  // sym..text
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_90h // sym..text
         0x80035a4 ()             // 0x80035a4(0x8003000, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x80035cc   // unlikely

    loc_0x080035ac: // orphan
         x8 = [x20 + 0x28]        // 0xdb // 219
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_90h
         [x23] = x8
         0x80035b8 ()             // 0x80035b8(0x0, 0x0, 0x0, 0x0)
         x8 = [x23]               // 0xde // 222
         if x8 jmp 0x8003520      // likely

    loc_0x080035c4: // orphan
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80035d8

    loc_0x080035cc: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x80035a8
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x23]               // 0xde // 222
         if x8 jmp 0x8003604      // likely

    loc_0x080035d8: // orphan
         // CODE XREFS from sym.fuck_cfi @ 0x8003594, 0x80035c8
         x21 = sym..text          // 0x8003000
         x21 = x21 + 0            // 0x8003000
                                  // sym..text
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_90h // sym..text
         0x80035e4 ()             // 0x80035e4(0x8003000, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x800369c   // unlikely

    loc_0x080035ec: // orphan
         x8 = [x21 + 0x28]        // 0xdc // 220
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_90h
         [x23] = x8
         0x80035f8 ()             // 0x80035f8(0x0, 0x0, 0x0, 0x0)
         x8 = [x23]               // 0xde // 222
         if !x8 jmp 0x80036a4     // unlikely

    loc_0x08003604: // orphan
         // CODE XREFS from sym.fuck_cfi @ 0x8003590, 0x80035d4
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text
         blr x8                   // xzr(0x8003000, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800369c     // unlikely

    loc_0x08003614: // orphan
         x8 = 0x30                // '0'
         x8 = x0 + x8
         x8 = x8 >> 0x25
         if !x8 jmp 0x800369c     // unlikely

    loc_0x08003624: // orphan
         x8 = sym..text           // 0x8003000
         x8 = x8 + 0              // 0x8003000
                                  // sym..text
         x11 = var_20h
         x12 = x8 + w20,uxtw 4    // 0x8003000
                                  // sym..text
         x10 = var_8h
         w9 = 0x245f              // '_$'
         [x11 + w20,uxtw 3] = x0
         w9 = 0xd503
         [x10 + w20,uxtw 2] = w9
         w9 = w20 | 1
         [x12] = x0               // sym..text
         if (w9 == 6)
         w13 = [x0]               // 0xc7 // 199
         [x12 + 8] = w13
         b.hi 0x80038d8           // unlikely

    loc_0x08003660: // orphan
         x12 = x0 + 4             // 0x8003004
                                  // sym.util_find_kallsyms
         [x11 + x9,lsl 3] = x12
         x11 = x9 << 4
         w13 = 0x8
         w14 = 0x3c0
         w14 = 0xd65f             // '_\xd6'
         [x10 + x9,lsl 2] = w14
         bfi x13,x9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8 + x11] = x12
         w10 = [x0 + 4]           // 0xc7 // 199
         if (x13 == 0x60)
         b.hi 0x80038d8           // unlikely

    loc_0x08003690: // orphan
         x8 = x8 + x9,lsl 4
         w20 = w20 + 2
         [x8 + 8] = w10

    loc_0x0800369c: // orphan
         // CODE XREFS from sym.fuck_cfi @ 0x80035e8, 0x8003610, 0x8003620
         x8 = [x23]               // 0xde // 222
         if x8 jmp 0x80036d0      // likely

    loc_0x080036a4: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x8003600
         x21 = sym..text          // 0x8003000
         x21 = x21 + 0            // 0x8003000
                                  // sym..text
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_90h // sym..text
         0x80036b0 ()             // 0x80036b0(0x8003000, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x80036f0   // unlikely

    loc_0x080036b8: // orphan
         x8 = [x21 + 0x28]        // 0xdc // 220
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_90h
         [x23] = x8
         0x80036c4 ()             // 0x80036c4(0x0, 0x0, 0x0, 0x0)
         x8 = [x23]               // 0xde // 222
         if !x8 jmp 0x80036f0     // unlikely

    loc_0x080036d0: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x80036a0
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text
         blr x8                   // xzr(0x8003000, 0x0, 0x0, 0x0)
         if !x0 jmp 0x80036f0     // unlikely

    loc_0x080036e0: // orphan
         x8 = 0x30                // '0'
         x8 = x0 + x8
         x8 = x8 >> 0x25
         if x8 jmp 0x8003720      // likely

    loc_0x080036f0: // orphan
         // CODE XREFS from sym.fuck_cfi @ 0x80036b4, 0x80036cc, 0x80036dc
         if w20 jmp 0x800377c     // unlikely

    loc_0x08003720: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x80036ec
         x9 = sym..text           // 0x8003000
         x9 = x9 + 0              // 0x8003000
                                  // sym..text
         w12 = 0x245f             // '_$'
         x11 = x9 + w20,uxtw 4    // 0x8003000
                                  // sym..text
         x8 = var_20h
         x10 = var_8h
         w12 = 0xd503
         [x8 + w20,uxtw 3] = x0
         w13 = 0x3c0
         [x10 + w20,uxtw 2] = w12
         w12 = w20 + 1
         w13 = 0xd65f             // '_\xd6'
         [x11] = x0               // sym..text
         w20 = w20 + 2
         w14 = [x0]               // 0xc7 // 199
         [x10 + w12,uxtw 2] = w13
         x10 = x0 + 4             // 0x8003004
                                  // sym.util_find_kallsyms
         [x8 + w12,uxtw 3] = x10
         x8 = x9 + w12,uxtw 4
         [x11 + 8] = w14
         [x8] = x10
         w9 = [x0 + 4]            // 0xc7 // 199
         [x8 + 8] = w9

    loc_0x0800377c: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x80036f0
         x0 = var_20h
         x1 = var_8h
         w2 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x19                  // xzr(0x178020, 0x178008, 0x0, 0x0)
         if w0 jmp 0x80038c4      // likely

    loc_0x08003790: // orphan
         x9 = sym..text           // 0x8003000
         x9 = x9 + 0              // 0x8003000
                                  // sym..text
         x19 = sym..text          // 0x8003000
         x1 = [x9]                // 0xd0 // 208 // sym..text
         w2 = [x9 + 8]            // 0xd0 // 208
         w8 = 0x1
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text // int64_t arg_90h
         x3 = sym..text           // 0x8003000
         x3 = x3 + 0              // 0x8003000
                                  // sym..text
         [x19] = w20              // sym..text
         [x22] = (byte) w8
         0x80037c0 ()             // 0x80037c0(0x8003000, 0x0, 0x4, 0x8003000)
         w8 = [x19]               // 0xda // 218 // sym..text
         if (w8 == 2)
         b.lt 0x80036f4           // likely

    loc_0x080037d0: // orphan
         x8 = sym..text           // 0x8003000
         x8 = x8 + 0              // 0x8003000
                                  // sym..text
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text // int64_t arg_90h
         x1 = [x8]                // 0xcf // 207 // sym..text
         w2 = [x8 + 8]            // 0xcf // 207
         x3 = sym..text           // 0x8003000
         x3 = x3 + 0              // 0x8003000
                                  // sym..text
         0x80037f0 ()             // 0x80037f0(0x8003000, 0x0, 0x4, 0x8003000)
         w8 = [x19]               // 0xda // 218
         if (w8 == 3)
         b.lt 0x80036f4           // likely

    loc_0x08003800: // orphan
         x8 = sym..text           // 0x8003000
         x8 = x8 + 0              // 0x8003000
                                  // sym..text
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text // int64_t arg_90h
         x1 = [x8]                // 0xcf // 207 // sym..text
         w2 = [x8 + 8]            // 0xcf // 207
         x3 = sym..text           // 0x8003000
         x3 = x3 + 0              // 0x8003000
                                  // sym..text
         0x8003820 ()             // 0x8003820(0x8003000, 0x0, 0x4, 0x8003000)
         w8 = [x19]               // 0xda // 218
         if (w8 == 4)
         b.lt 0x80036f4           // likely

    loc_0x08003830: // orphan
         x8 = sym..text           // 0x8003000
         x8 = x8 + 0              // 0x8003000
                                  // sym..text
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text // int64_t arg_90h
         x1 = [x8]                // 0xcf // 207 // sym..text
         w2 = [x8 + 8]            // 0xcf // 207
         x3 = sym..text           // 0x8003000
         x3 = x3 + 0              // 0x8003000
                                  // sym..text
         0x8003850 ()             // 0x8003850(0x8003000, 0x0, 0x4, 0x8003000)
         w8 = [x19]               // 0xda // 218
         if (w8 == 5)
         b.lt 0x80036f4           // likely

    loc_0x08003860: // orphan
         x8 = sym..text           // 0x8003000
         x8 = x8 + 0              // 0x8003000
                                  // sym..text
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text // int64_t arg_90h
         x1 = [x8]                // 0xcf // 207 // sym..text
         w2 = [x8 + 8]            // 0xcf // 207
         x3 = sym..text           // 0x8003000
         x3 = x3 + 0              // 0x8003000
                                  // sym..text
         0x8003880 ()             // 0x8003880(0x8003000, 0x0, 0x4, 0x8003000)
         w8 = [x19]               // 0xda // 218
         if (w8 == 6)
         b.lt 0x80036f4           // likely

    loc_0x08003890: // orphan
         x8 = sym..text           // 0x8003000
         x8 = x8 + 0              // 0x8003000
                                  // sym..text
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text // int64_t arg_90h
         x1 = [x8]                // 0xcf // 207 // sym..text
         w2 = [x8 + 8]            // 0xcf // 207
         x3 = sym..text           // 0x8003000
         x3 = x3 + 0              // 0x8003000
                                  // sym..text
         0x80038b0 ()             // 0x80038b0(0x8003000, 0x0, 0x4, 0x8003000)
         w8 = [x19]               // 0xda // 218
         if (w8 == 6)
         jmp ifle 0x80036f4       // likely

    loc_0x080038c0: // orphan
         brk 0x5512

    loc_0x080038c4: // orphan
         // CODE XREF from sym.fuck_cfi @ 0x800378c
         x0 = sym..text           // 0x8003000
         x0 = x0 + 0              // 0x8003000
                                  // sym..text // int64_t arg_90h
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80038d0 ()             // 0x80038d0(0x8003000, 0x0, 0x0, 0x0)
         jmp 0x80036f4

    loc_0x080038d8: // orphan
         // CODE XREFS from sym.fuck_cfi @ 0x800365c, 0x800368c
         brk 0x1

}

/* ===== 0x0800a494 ===== */
int sym.init_hide_list (int esi, int edx) {
    loc_0x800a494:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800a000
        x0 = x0 + 0
        0x800a4a8 ()  // 0x800a4a8(0x800a000, 0x0, 0x0, 0x0)
        x8 = 0x800a000
        [x8] = x0
        x0 = 0x800a000
        x0 = x0 + 0
        0x800a4bc ()  // 0x800a4bc(0x800a000, 0x0, 0x0, 0x0)
        x8 = 0x800a000
        [x8] = x0
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        // lr
         // (break)
}

/* ===== 0x0800b548 ===== */
int sym.shadow_fault_init (int esi, int edx) {
    loc_0x800b548:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800b000
        x0 = x0 + 0   // "B"
        0x800b560 ()  // 0x800b560(0x800b000, 0x0, 0x0, 0x0)
        x19 = 0x800b000
        [x19] = x0    // "B"
        x0 = 0x800b000
        x0 = x0 + 0
        0x800b574 ()  // 0x800b574(0x800b000, 0x0, 0x0, 0x0)
        x8 = [x19]    // 0xda // 218
        x9 = 0x800b000
        [x9] = x0
        if x8 jmp 0x800b594 // likely
            
    loc_0x800b594:
        // CODE XREF from sym.shadow_fault_init @ 0x800b584
        if x0 jmp 0x800b5ac // unlikely
            
    loc_0x800b5ac:
        // CODE XREF from sym.shadow_fault_init @ 0x800b594
        x0 = 0x800b000
        x0 = x0 + 0
        0x800b5b4 ()  // 0x800b5b4(0x800b000, 0x0, 0x0, 0x0)
        if x0 jmp 0x800b5d0 // likely
            
    loc_0x800b5d0:
        // CODE XREF from sym.shadow_fault_init @ 0x800b5b8
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800b000
        x0 = x0 + 0
        x2 = 0x800b000
        x2 = x2 + 0
        x3 = 0x800b000
        x3 = x3 + 0
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800b5f0 ()  // 0x800b5f0(0x800b000, 0x0, 0x800b000, 0x800b000)
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if w0 jmp 0x800b610 // likely
            
    loc_0x800b610:
        // CODE XREF from sym.shadow_fault_init @ 0x800b5f8
        x0 = 0x800b000
        x0 = x0 + 0
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800b620 ()  // 0x800b620(0x800b000, 0x0, 0x0, 0x0)
         // do {
    loc_0x800b624:
        // CODE XREF from sym.shadow_fault_init @ 0x800b5cc
        x0 = 0x800b000
        x0 = x0 + 0
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800b630 ()  // 0x800b630(0x800b000, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800b5a0: // orphan
             // CODE XREF from sym.shadow_fault_init @ 0x800b590
             0x800b5a0 ()             // 0x800b5a0(0x0, 0x0, 0x0, 0x0)
             w19 = ~0x5
             jmp 0x800b634

    loc_0x0800b634: // orphan
         // CODE XREFS from sym.shadow_fault_init @ 0x800b5a8, 0x800b60c
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

}

/* ===== 0x080221c4 ===== */
int sym.brk_bp_init (int esi, int edx) {
    loc_0x80221c4:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = 0x8022000
        x0 = 0x8022000
        x0 = x0 + 0
        [x21] = (byte) wzr
        0x80221e8 ()  // 0x80221e8(0x8022000, 0x0, 0x0, 0x0)
        x19 = 0x8022000
        [x19] = x0
        x0 = 0x8022000
        x0 = x0 + 0
        0x80221fc ()  // 0x80221fc(0x8022000, 0x0, 0x0, 0x0)
        x8 = [x19]    // 0xda // 218
        x9 = 0x8022000
        [x9] = x0
        if !x8 jmp 0x802236c // unlikely
            
    loc_0x802236c:
        x0 = 0x8022000
        x0 = x0 + 0
        jmp 0x802238c
         // do {
    loc_0x802238c:
        // CODE XREFS from sym.brk_bp_init @ 0x8022374, 0x8022380
        0x802238c ()  // 0x802238c(0x0, 0x0, 0x0, 0x0)
        w19 = ~0x5
        jmp 0x8022354
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8022210
    loc_0x8022214:
        x0 = 0x8022000
        x0 = x0 + 0
        0x802221c ()  // 0x802221c(0x8022000, 0x0, 0x0, 0x0)
        x8 = 0x8022000
        [x8] = x0
        x0 = 0x8022000
        x0 = x0 + 0
        0x8022230 ()  // 0x8022230(0x8022000, 0x0, 0x0, 0x0)
        x8 = 0x8022000
        [x8] = x0
        x0 = 0x8022000
        x0 = x0 + 0
        0x8022244 ()  // 0x8022244(0x8022000, 0x0, 0x0, 0x0)
        x8 = 0x8022000
        [x8] = x0
        x0 = 0x8022000
        x0 = x0 + 0
        0x8022258 ()  // 0x8022258(0x8022000, 0x0, 0x0, 0x0)
        x8 = 0x8022000
        [x8] = x0
        if !x0 jmp 0x8022378 // unlikely
            
    loc_0x8022378:
        x0 = 0x8022000
        x0 = x0 + 0
        jmp 0x802238c
    loc_0x08022268: // orphan
             x0 = 0x8022000
             x0 = x0 + 0
             0x8022270 ()             // 0x8022270(0x8022000, 0x0, 0x0, 0x0)
             x19 = 0x8022000
             [x19] = x0
             x0 = 0x8022000
             x0 = x0 + 0
             0x8022284 ()             // 0x8022284(0x8022000, 0x0, 0x0, 0x0)
             x8 = [x19]               // 0xda // 218
             x9 = 0x8022000
             [x9] = x0
             if !x8 jmp 0x8022384     // unlikely

    loc_0x08022298: // orphan
         if !x0 jmp 0x8022384     // likely

    loc_0x0802229c: // orphan
         x8 = 0x8022000
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x100
         x0 = [x8]                // 0xcf // 207
         0x80222ac ()             // " \t" // 0x80222ac(0x8022000, 0xdc0, 0x100, 0x0)
         if !x0 jmp 0x80223d4     // unlikely

    loc_0x080222b4: // orphan
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x22 = 0x8022000

    loc_0x080222c0: // orphan
         x0 = [x22]               // 0xdd // 221
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x450
         0x80222cc ()             // 0x80222cc(0x1, 0xdc0, 0x450, 0x0)
         [x19 + x20,lsl 3] = x0
         if !x0 jmp 0x8022398     // unlikely

    loc_0x080222d8: // orphan
         x20 = x20 + 1
         if (x20 == 0x20)
         b.ne 0x80222c0           // likely

    loc_0x080222e4: // orphan
         x8 = 0x8022000
         x20 = 0x8022000
         x20 = x20 + 0
         [x8] = x19
         x8 = xzr | 0xfffffffe0
         w9 = 0x1
         [x20] = x8
         x8 = x20 + 8
         x0 = x20 + 0x30
         [x21] = (byte) w9
         x1 = 0x8022000
         x1 = x1 + 0
         [x20 + 8] = x8
         w2 = 0x20
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20 + 0x10] = x8
         x8 = 0x8022000
         x8 = x8 + 0
         x4 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20 + 0x18] = x8
         0x8022334 ()             // 0x8022334(0x8022030, 0x8022000, 0x200000, 0x0)
         x8 = 0x8022000
         w0 = 0x20
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = [x8]                // 0xcf // 207
         w3 = 0x9c4
         0x802234c ()             // 0x802234c(0x20, 0xfffffffe0, 0x8022000, 0x9c4)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08022354: // orphan
         // CODE XREFS from sym.brk_bp_init @ 0x8022394, 0x80223e8
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08022384: // orphan
         x0 = 0x8022000
         x0 = x0 + 0

    loc_0x08022398: // orphan
         if !x20 jmp 0x80223cc    // likely

    loc_0x0802239c: // orphan
         x21 = x20 + 1
         x20 = x20 - 1

    loc_0x080223a4: // orphan
         if (w20 == 0x1f)
         b.hi 0x80223ec           // unlikely

    loc_0x080223ac: // orphan
         w8 = w21 - 2
         if (w8 == 0x1f)
         b.hi 0x80223ec           // likely

    loc_0x080223b8: // orphan
         x0 = [x19 + x8,lsl 3]    // 0xcf000000da // 889058230490
         0x80223bc ()             // 0x80223bc(0x1, 0x0, 0x0, 0x0)
         x21 = x21 - 1
         if (x21 == 1)
         b.hi 0x80223a4           // likely

    loc_0x080223cc: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80223d0 ()             // 0x80223d0(0x0, 0x0, 0x0, 0x0)

    loc_0x080223d4: // orphan
         x0 = 0x8022000
         x0 = x0 + 0
         w1 = ~0xb
         w19 = ~0xb
         0x80223e4 ()             // 0x80223e4(0x8022000, 0xfffffff4, 0x0, 0x0)
         jmp 0x8022354

    loc_0x080223ec: // orphan
         brk 0x1

}

/* ===== 0x08005f70 ===== */
int sym.ioctl_hook_install (int esi, int edx) {
    loc_0x8005f70:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = 0x8005000
        w8 = (byte) [x21] // 0xdc // 220
        tbz w8,0,0x8005fac // likely
            
    loc_0x8005fac:
        x0 = 0x8005000
        x0 = x0 + 0   // int64_t arg1
        0x8005fb4 ()  // 0x8005fb4(0x8005000, 0x0, 0x0, 0x0)
        if x0 jmp 0x8005fd0 // likely
            
    loc_0x8005fd0:
        x22 = 0x8005000
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x22] = x0
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = [x0]     // 0xc7 // 199
        x0 = 0x8005000
        x0 = x0 + 0   // int64_t arg1
        0x8005fec ()  // 0x8005fec(0x8005000, 0x0, 0x1, 0x0)
        x0 = 0x8005000
        x0 = x0 + 0   // int64_t arg1
        x2 = 0x8005000
        x2 = x2 + 0
        // XREFS(138)
        x3 = 0x8006000
        x3 = x3 + 0
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800600c ()  // 0x800600c(0x8005000, 0x0, 0x8005000, 0x8006000)
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if w0 jmp 0x8006038 // likely
            
    loc_0x8006038:
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        w1 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8006044 ()  // 0x8006044(0x8006000, 0x0, 0x0, 0x0)
        x8 = 0x8006000
        [x22] = xzr
        [x8] = xzr
        jmp 0x8005f94
         // do {
    loc_0x8005f94:
        // CODE XREFS from sym.ioctl_hook_install @ 0x8005fcc, 0x8006034, 0x8006054
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08005fa8
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800b64c ===== */
int sym.shadow_fault_exit (int esi, int edx) {
    loc_0x800b64c:
        hint 0x19
        sp = sp - 0x90
        [sp, 0x40] = (x29,2)
        [var_50h] = x25
        [sp, 0x60] = (x24,2)
        [sp, 0x70] = (x22,2)
        [sp, 0x80] = (x20,2)
        x29 = var_40h
        x8 = 0x800b000
        x9 = var_8h
        w8 = (byte) [x8] // 0xcf // 207
        [sp, 8] = (x9,2)
        if w8 jmp 0x800b890 // unlikely
            
    loc_0x800b890:
        // CODE XREF from sym.shadow_fault_exit @ 0x800b67c
        x0 = 0x800b000
        x0 = x0 + 0   // int64_t arg_90h
        0x800b898 ()  // 0x800b898(0x800b000, 0x0, 0x0, 0x0)
        if w0 jmp 0x800b920 // likely
            
    loc_0x800b920:
        // CODE XREF from sym.shadow_fault_exit @ 0x800b89c
        w1 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800b000
        x0 = x0 + 0   // int64_t arg_90h
        0x800b92c ()  // 0x800b92c(0x800b000, 0x0, 0x0, 0x0)
        jmp 0x800b680
    loc_0x0800b680: // orphan
             // CODE XREFS from sym.shadow_fault_exit @ 0x800b91c, 0x800b930
             x0 = 0x800b000
             x0 = x0 + 0              // int64_t arg_90h
             0x800b688 ()             // 0x800b688(0x800b000, 0x0, 0x0, 0x0)
             x0 = 0x800b000
             x0 = x0 + 0              // int64_t arg_90h
             0x800b694 ()             // 0x800b694(0x800b000, 0x0, 0x0, 0x0)
             x8 = 0x800b000
             x8 = x8 + 0
             x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x9 = [x8]                // 0xcf // 207
             if (x9 == x8)
             b.eq 0x800b6d4           // likely

    loc_0x0800b6b0: // orphan
         x10 = [var_8h]           // 0x4 // 4
         x11 = [x8 + 8]           // 0xcf // 207
         x12 = var_8h
         [var_8h] = x9
         [x9 + 8] = x12
         [x11] = x10
         [x10 + 8] = x11
         [x8] = x8
         [x8 + 8] = x8

    loc_0x0800b6d4: // orphan
         // CODE XREF from sym.shadow_fault_exit @ 0x800b6ac
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg_90h
         0x800b6dc ()             // 0x800b6dc(0x800b000, 0x0, 0x0, 0x0)
         x24 = [var_8h]           // 4
         x21 = var_8h
         if (x24 == x21)
         b.eq 0x800b864           // unlikely

    loc_0x0800b6f0: // orphan
         x22 = 0x800b000
         w23 = 0x2508
         jmp 0x800b710

    loc_0x0800b6fc: // orphan
         // CODE XREFS from sym.shadow_fault_exit @ 0x800b76c, 0x800b828
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_90h
         0x800b700 ()             // 0x800b700(0x0, 0x0, 0x0, 0x0)
         if (x25 == x21)
         x24 = x25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.eq 0x800b864           // likely

    loc_0x0800b710: // orphan
         // CODE XREF from sym.shadow_fault_exit @ 0x800b6f8
         x25 = [x24]              // 0xdf // 223
         w8 = [x24 + 0x2500]      // 0xdf // 223
         if !w8 jmp 0x800b764     // unlikely

    loc_0x0800b71c: // orphan
         x0 = var_18h             // int64_t arg_90h
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x30] = (xzr,2)
         [sp, 0x20] = (xzr,2)
         [var_18h] = xzr
         0x800b730 ()             // 0x800b730(0x178018, 0x0, 0x0, 0x0)
         x19 = x24 + x23

    loc_0x0800b738: // orphan
         // CODE XREF from sym.shadow_fault_exit @ 0x800b754
         x1 = var_18h
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_90h
         w2 = 0x2
         0x800b744 ()             // 0x800b744(0x0, 0x178018, 0x2, 0x0)
         w8 = [x24 + 0x2500]      // 0xdf // 223
         if !w8 jmp 0x800b758     // unlikely

    loc_0x0800b750: // orphan
         0x800b750 ()             // 0x800b750(0x0, 0x0, 0x0, 0x0)
         jmp 0x800b738

    loc_0x0800b758: // orphan
         // CODE XREF from sym.shadow_fault_exit @ 0x800b74c
         x1 = var_18h
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_90h
         0x800b760 ()             // 0x800b760(0x0, 0x178018, 0x0, 0x0)

    loc_0x0800b764: // orphan
         // CODE XREF from sym.shadow_fault_exit @ 0x800b718
         ldur x20,[x24,-0x20]     // 0xdf // 223
         x19 = x24 - 0x30
         if !x20 jmp 0x800b6fc    // unlikely

    loc_0x0800b770: // orphan
         

    loc_0x0800b774: // orphan
         // CODE XREF from fcn.0800b834 @ 0x800b838
         x0 = x20 + 0x90          // int64_t arg_90h
         0x800b778 ()             // 0x800b778(0x90, 0x0, 0x0, 0x0)
         

    loc_0x0800b780: // orphan
         // CODE XREF from fcn.0800b848 @ 0x800b84c
         ldur x0,[x24,-0x20]      // 0xdf // 223
         ldur x8,[x24,-0x30]      // 0xdf // 223
         x9 = [x0 + 0x70]         // 0xc7 // 199
         ubfx x10,x8,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x9 + x10,lsl 3]   // 0xd1000000d0 // 897648165072
         w9 = ~w10
         if ((x9 & 3) == 0)
         b.ne 0x800b814           // likely

    loc_0x0800b7a0: // orphan
         x9 = [x22]               // 0xdd // 221
         x10 = x10 & 0x7ffffff000
         ubfx x11,x8,0x15, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 - x9
         x10 = x10 | 0xffffff8000000000
         x10 = [x10 + x11,lsl 3]  // 0xd2000000d1 // 901943132369
         w11 = ~w10
         if ((x11 & 3) == 0)
         b.ne 0x800b814           // likely

    loc_0x0800b7c4: // orphan
         x10 = x10 & 0x7ffffff000
         ubfx x8,x8,0xc, 9        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x10 - x9
         x9 = x9 | 0xffffff8000000000
         x20 = x9 + x8,lsl 3
         b.eq 0x800b814           // unlikely

    loc_0x0800b7dc: // orphan
         x1 = [x20]               // 0xdb // 219 // int64_t arg2
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [var_0h] = x1
         w8 = (byte) [x24 + 0x14] // 0xdf // 223
         x2 = x8 << 0x36          // int64_t arg3
         sym.shadow_pte_matches () // "(" // sym.shadow_pte_matches(0x0, 0x0, 0x3fc0000000000000)
         w8 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur x0,[x24,-0x20]      // 0xdf // 223
         tbz w8,0,0x800b814       // likely

    loc_0x0800b800: // orphan
         x8 = [x20]               // 0xdb // 219
         ldur x1,[x24,-0x30]      // 0xdf // 223 // int64_t arg2
         x2 = x8 & 0xffbfffffffffffff // int64_t arg3
         sym.shadow_write_user_pte () // sym.shadow_write_user_pte(0x0, -1, 0x0, 0x0)
         ldur x0,[x24,-0x20]      // 0xdf // 223

    loc_0x0800b814: // orphan
         // CODE XREFS from sym.shadow_fault_exit @ 0x800b79c, 0x800b7c0, 0x800b7d8, 0x800b7fc
         

    loc_0x0800b818: // orphan
         // CODE XREF from fcn.0800b858 @ 0x800b860
         x0 = x0 + 0x90           // int64_t arg_90h
         0x800b81c ()             // 0x800b81c(0x90, 0x0, 0x0, 0x0)
         ldur x0,[x24,-0x20]      // 0xdf // 223 // int64_t arg_90h
         0x800b824 ()             // 0x800b824(-1, 0x0, 0x0, 0x0)
         jmp 0x800b6fc

    loc_0x0800b864: // orphan
         // CODE XREFS from sym.shadow_fault_exit @ 0x800b6ec, 0x800b70c
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg_90h
         0x800b86c ()             // 0x800b86c(0x800b000, 0x0, 0x0, 0x0)
         (x20, 2) = 3
         x25 = [var_50h]          // 0x4 // 4
         (x22, 2) = 3
         (x24, 2) = 3
         (x29, 2) = 3
         sp = arg_90h             // tmp
         hint 0x1d
         

    loc_0x0800b8a0: // orphan
         x19 = 0x800b000
         w8 = [x19]               // 0xda // 218
         if !w8 jmp 0x800b8d0     // unlikely

    loc_0x0800b8ac: // orphan
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w21 = 0x1387             // '\x87\x13'

    loc_0x0800b8b4: // orphan
         // CODE XREF from sym.shadow_fault_exit @ 0x800b8cc
         w0 = 0x1
         0x800b8b8 ()             // 0x800b8b8(0x1, 0x0, 0x0, 0x0)
         w8 = [x19]               // 0xda // 218
         if !w8 jmp 0x800b8d0     // likely

    loc_0x0800b8c4: // orphan
         if (w20 == w21)
         w20 = w20 + 1
         b.lo 0x800b8b4           // unlikely

    loc_0x0800b8d0: // orphan
         // CODE XREFS from sym.shadow_fault_exit @ 0x800b8a8, 0x800b8c0
         w8 = [x19]               // 0xda // 218
         if !w8 jmp 0x800b8e8     // likely

    loc_0x0800b8d8: // orphan
         w1 = [x19]               // 0xda // 218
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg_90h
         0x800b8e4 ()             // 0x800b8e4(0x800b000, 0x0, 0x0, 0x0)

    loc_0x0800b8e8: // orphan
         // CODE XREF from sym.shadow_fault_exit @ 0x800b8d4
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg_90h
         0x800b8f0 ()             // 0x800b8f0(0x800b000, 0x0, 0x0, 0x0)
         if !w0 jmp 0x800b908     // unlikely

    loc_0x0800b8f8: // orphan
         w1 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg_90h
         0x800b904 ()             // 0x800b904(0x800b000, 0x0, 0x0, 0x0)

    loc_0x0800b908: // orphan
         // CODE XREF from sym.shadow_fault_exit @ 0x800b8f4
         x8 = 0x800b000
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg_90h
         [x8] = xzr
         0x800b918 ()             // 0x800b918(0x800b000, 0x0, 0x0, 0x0)
         jmp 0x800b680

}

/* ===== 0x08009a28 ===== */
int sym.ptrace_hook_install (int esi, int edx) {
    loc_0x8009a28:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x8009000
        x8 = [x20]    // 0xdb // 219
        if !x8 jmp 0x8009a5c // unlikely
            
    loc_0x8009a5c:
        x0 = 0x8009000
        x0 = x0 + 0   // int64_t arg1
        0x8009a64 ()  // 0x8009a64(0x8009000, 0x0, 0x0, 0x0)
        [x20] = x0
        if x0 jmp 0x8009a84 // likely
            
    loc_0x8009a84:
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8009000
        x0 = x0 + 0   // int64_t arg1
        x2 = 0x8009000
        x2 = x2 + 0
        x3 = 0x8009000
        x3 = x3 + 0
        0x8009aa0 ()  // 0x8009aa0(0x8009000, 0x0, 0x8009000, 0x8009000)
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if w0 jmp 0x8009ac0 // likely
            
    loc_0x8009ac0:
        x0 = 0x8009000
        x0 = x0 + 0   // int64_t arg1
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8009acc ()  // 0x8009acc(0x8009000, 0x0, 0x0, 0x0)
        [x20] = xzr
        jmp 0x8009a48
         // do {
    loc_0x8009a48:
        // CODE XREFS from sym.ptrace_hook_install @ 0x8009a80, 0x8009abc, 0x8009ad4
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08009a58
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x080052a0 ===== */
int sym.paradise_gyro_init (int esi, int edx) {
    loc_0x80052a0:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x8005000
        w8 = (byte) [x20] // 0xdb // 219
        tbz w8,0,0x80052d4 // likely
            
    loc_0x80052d4:
        x0 = 0x8005000
        x0 = x0 + 0   // int64_t arg1
        0x80052dc ()  // 0x80052dc(0x8005000, 0x0, 0x0, 0x0)
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if w0 jmp 0x8005308 // likely
            
    loc_0x8005308:
        x0 = 0x8005000
        x0 = x0 + 0   // int64_t arg1
        x1 = 0x8005000
        x1 = x1 + 0
        w2 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800531c ()  // 0x800531c(0x8005000, 0x8005000, 0x0, 0x0)
        jmp 0x80052c0
         // do {
    loc_0x80052c0:
        // CODE XREFS from sym.paradise_gyro_init @ 0x8005304, 0x8005320
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x080052d0
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08009f84 ===== */
int sym.ptrace_hook_remove (int esi, int edx) {
    loc_0x8009f84:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8009000
        w8 = (byte) [x8] // 0xcf // 207
        if !w8 jmp 0x8009fcc // unlikely
            
    loc_0x8009fcc:
        x0 = 0x8009000
        x0 = x0 + 0
        0x8009fd4 ()  // 0x8009fd4(0x8009000, 0x0, 0x0, 0x0)
        x19 = 0x8009000
        x19 = x19 + 0
        x9 = [x19]    // 0xda // 218
        if (x9 == x19)
        b.ne 0x800a01c // likely
            
    loc_0x800a01c:
        x20 = 0x100
        x20 = 0xdead  // '\xad\xde'
        jmp 0x800a04c
         // do {
    loc_0x800a04c:
        // CODE XREF from sym.ptrace_hook_remove @ 0x800a024
        (x21, 2) = 3
        x10 = [x8]    // 0xcf // 207
        if (x10 == x9)
        // CODE XREF from sym.hide_cts @ 0x800a6ac
        b.ne 0x800a028 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800a028: // orphan
             x0 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800a02c ()             // 0x800a02c(0x0, 0x0, 0x0, 0x0)

    loc_0x0800a030: // orphan
         // CODE XREF from sym.ptrace_hook_remove @ 0x800a070
         x8 = x20 + 0x22
         x0 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x9] = (x20,2)
         0x800a03c ()             // 0x800a03c(0x0, 0x0, 0x0, 0x0)
         if (x21 == x19)
         x9 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.eq 0x8009fec           // likely

    loc_0x0800a05c: // orphan
         x10 = [x21 + 8]          // 0xdc // 220
         if (x10 == x9)
         b.ne 0x800a028           // likely

    loc_0x0800a068: // orphan
         [x21 + 8] = x8           // "\""
         [x8] = x21
         jmp 0x800a030

}

/* ===== 0x0800605c ===== */
int sym.ioctl_hook_remove (int esi, int edx) {
    loc_0x800605c:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = 0x8006000
        x20 = 0x8006000
        w8 = (byte) [x21] // 0xdc // 220
        x9 = [x20]    // 0xdb // 219
        if (w8 == 1)
        ccmp x9,0,4, eq
        b.ne 0x8006094 // likely
            
    loc_0x8006094:
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x800609c ()  // 0x800609c(0x8006000, 0x0, 0x0, 0x0)
        if w0 jmp 0x8006138 // likely
            
    loc_0x8006138:
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8006148 ()  // 0x8006148(0x8006000, 0x0, 0x0, 0x0)
         // do {
    loc_0x800614c:
        // CODE XREF from sym.ioctl_hook_remove @ 0x8006134
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08006160
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080060b4: // orphan
             w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w22 = 0x1387             // '\x87\x13'

    loc_0x080060bc: // orphan
         w0 = 0x1
         0x80060c0 ()             // 0x80060c0(0x1, 0x0, 0x0, 0x0)
         w8 = [x19]               // 0xda // 218
         if !w8 jmp 0x80060d8     // likely

    loc_0x080060cc: // orphan
         if (w21 == w22)
         w21 = w21 + 1
         b.lo 0x80060bc           // unlikely

    loc_0x080060d8: // orphan
         w8 = [x19]               // 0xda // 218
         if !w8 jmp 0x80060f0     // likely

    loc_0x080060e0: // orphan
         w1 = [x19]               // 0xda // 218
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x80060ec ()             // 0x80060ec(0x8006000, 0x0, 0x0, 0x0)

    loc_0x080060f0: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x80060f8 ()             // 0x80060f8(0x8006000, 0x0, 0x0, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x8006114     // unlikely

    loc_0x08006104: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006110 ()             // 0x8006110(0x8006000, 0x0, 0x0, 0x0)

    loc_0x08006114: // orphan
         x8 = 0x8006000
         [x20] = xzr
         [x8] = xzr

    loc_0x08006120: // orphan
         // CODE XREF from sym.ioctl_hook_remove @ 0x8006090
         x8 = 0x8006000
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         [x8] = (byte) wzr
         0x8006130 ()             // 0x8006130(0x8006000, 0x0, 0x0, 0x0)
         jmp 0x800614c

}

/* ===== 0x08022a68 ===== */
int sym.brk_bp_exit (int esi, int edx) {
    loc_0x8022a68:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8022000
        x0 = 0x8022000
        x0 = x0 + 0
        [x8] = (byte) wzr
        0x8022a88 ()  // 0x8022a88(0x8022000, 0x0, 0x0, 0x0)
        0x8022a8c ()  // 0x8022a8c(0x8022000, 0x0, 0x0, 0x0)
        sym.brk_uninstall_debug_hook () // sym.brk_uninstall_debug_hook(0x8022000)
        x19 = 0x8022000
        x8 = [x19]    // 0xda // 218
        if !x8 jmp 0x8022ac8 // unlikely
            
    loc_0x8022ac8:
        // CODE XREF from sym.brk_bp_exit @ 0x8022a9c
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08022ad4
         // } else {
    loc_0x8022aa0:
        x20 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        }
        return eax;
    loc_0x08022aa4: // orphan
             // CODE XREF from sym.brk_bp_exit @ 0x8022ab8
             x8 = [x19]               // 0xda // 218
             x0 = [x8 + x20]          // 0xdb000000cf // 940597838031
             0x8022aac ()             // 0x8022aac(-1, 0x0, 0x0, 0x0)
             x20 = x20 + 8
             if (x20 == 0x100)
             b.ne 0x8022aa4           // likely

    loc_0x08022abc: // orphan
         x0 = [x19]               // 0xda // 218
         0x8022ac0 ()             // 0x8022ac0(-1, 0x0, 0x0, 0x0)
         [x19] = xzr

}

/* ===== 0x08005328 ===== */
int sym.paradise_gyro_exit (int esi, int edx) {
    loc_0x8005328:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8005000
        w8 = (byte) [x19] // 0xda // 218
        if (w8 == 1)
        b.ne 0x8005358 // likely
            
    loc_0x8005358:
        x8 = 0x8005000
        x0 = 0x8005000
        x0 = x0 + 0
        [x8] = (byte) wzr
        0x8005368 ()  // 0x8005368(0x8005000, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08005378
         // } else {
    loc_0x8005348:
        x0 = 0x8005000
        x0 = x0 + 0
        0x8005350 ()  // 0x8005350(0x8005000, 0x0, 0x0, 0x0)
        [x19] = (byte) wzr
        }
        return eax;
}

/* ===== 0x08003b4c ===== */
int sym.read_process_memory_common (int esi, int edx) {
    loc_0x8003b4c:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x4 = sym..text // 0x8003000
        x4 = x4 + 0   // 0x8003000
        // sym..text
        x5 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w6 = 0x2
        w7 = 0x1
        sym.process_memory_rw () // sym.process_memory_rw(0x0, 0x0, 0x0, 0x0, -1, -1, -1, -1, -1)
        w0 = w0 & 1
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        // lr
         // (break)
}

/* ===== 0x08003ec4 ===== */
int sym.read_process_memory_pte (int esi, int edx) {
    loc_0x8003ec4:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = sym..text // 0x8003000
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8]     // 0xcf // 207 // sym..text
        w23 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x1000
        x19 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x0 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8003f00 ()  // 0x8003f00(0xd503233ff1132b8b, 0xcc0, 0x1000, 0x0)
        if !x0 jmp 0x8003f44 // unlikely
            
    loc_0x8003f44:
        // CODE XREF from sym.read_process_memory_pte @ 0x8003f04
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8003f48:
        // CODE XREF from sym.read_process_memory_pte @ 0x8003f40
        w0 = w19 & 1
        (x20, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08003f60
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08004d24 ===== */
int sym.pte_read_physical (int esi, int edx) {
    loc_0x8004d24:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x24,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = var_10h
        w22 = ~0x15
        if !x1 jmp 0x8004dc4 // likely
            
    loc_0x8004dc4:
        // CODE XREFS from sym.pte_read_physical @ 0x8004d44, 0x8004d4c, 0x8004e40, 0x8004fac
        w0 = w22      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        sp = arg_50h
        hint 0x1d
        0x08004de0
         // } else {
    loc_0x8004d48:
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        if !x2 jmp 0x8004dc4 // likely
        }
        return eax;
    loc_0x8004d50:
        x8 = x0 >> 0x30 // arg1
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if x8 jmp 0x8004dc0 // unlikely
            
    loc_0x8004dc0:
        // CODE XREFS from sym.pte_read_physical @ 0x8004d58, 0x8004e28, 0x8004fbc
        w22 = ~0xd
    loc_0x08004d5c: // orphan
             x8 = 0x8004000
             x20 = x1                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
             x8 = [x8]                // 0xcf // 207
             if !x8 jmp 0x8004d88     // unlikely

    loc_0x08004d6c: // orphan
         x9 = x21 >> 0x1f
         x9 = x9 & 0x1fffffff8
         x8 = [x8 + x9]           // 0xd0000000cf // 893353197775
         if !x8 jmp 0x8004d88     // likely

    loc_0x08004d7c: // orphan
         ubfx x9,x21,0x1b, 7      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x8 + x9,lsl 5
         jmp 0x8004d8c

    loc_0x08004d88: // orphan
         // CODE XREFS from sym.pte_read_physical @ 0x8004d68, 0x8004d78
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004d8c: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x8004d84
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = [x8 + 0x10]        // 0xcf // 207
         w10 = w10 + 1
         [x8 + 0x10] = w10
         if !x9 jmp 0x8004da8     // likely

    loc_0x08004da0: // orphan
         x10 = [x9]               // 0xd0 // 208
         tbnz w10,1,0x8004de4     // unlikely

    loc_0x08004da8: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x8004d9c
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x8004fb0           // unlikely

    loc_0x08004db8: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         if !x8 jmp 0x8004fb0     // unlikely

    loc_0x08004de4: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x8004da4
         tbnz w10,3,0x8004e04     // unlikely

    loc_0x08004de8: // orphan
         x9 = [x9 + 8]            // 0xd0 // 208
         if !x9 jmp 0x8004e0c     // unlikely

    loc_0x08004df0: // orphan
         x10 = x21 >> 0x15
         x9 = [x9 + 0x10]         // 0xd0 // 208
         x9 = x9 >> x10
         w22 = w9 & 1
         jmp 0x8004e10

    loc_0x08004e04: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x8004de4
         w22 = 0x1
         jmp 0x8004e10

    loc_0x08004e0c: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x8004dec
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x08004e10: // orphan
         // CODE XREFS from sym.pte_read_physical @ 0x8004e00, 0x8004e08
         x9 = [x8 + 0x10]         // 0xcf // 207
         x9 = x9 - 1
         [x8 + 0x10] = w9
         b.eq 0x8004fb4           // unlikely

    loc_0x08004e20: // orphan
         x8 = [x8 + 0x10]         // 0xcf // 207
         if !x8 jmp 0x8004fb4     // unlikely

    loc_0x08004e28: // orphan
         if !w22 jmp 0x8004dc0    // likely

    loc_0x08004e2c: // orphan
         x23 = x21 & 0xfff
         x8 = x23 + x19
         if (x8 == 1)
         b.ls 0x8004e44           // likely

    loc_0x08004e3c: // orphan
         w22 = ~0x15
         jmp 0x8004dc4

    loc_0x08004e44: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x8004e38
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004e4c ()             // 0x8004e4c(0x8004000, 0x0, 0x0, 0x0)
         x24 = 0x8004000
         x8 = [x24]               // 0xdf // 223
         if !x8 jmp 0x8004eec     // unlikely

    loc_0x08004e5c: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x8004f88
         x10 = [x8]               // 0xcf // 207
         x9 = x21 & 0xfffffffffffff000
         x11 = 0x1
         x12 = 0x70b
         x11 = 0x10
         x9 = x9 & 0xff8fffffffffffff
         x12 = 0x60               // '`'
         bics xzr,x11,x10         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_8h] = x10
         x9 = x9 | x12
         b.eq 0x8004fc0           // unlikely

    loc_0x08004e88: // orphan
         [var_8h] = x9
         x10 = 0x1
         x9 = [var_8h]            // 0x4 // 4
         x10 = 0x40               // '@'
         x11 = x10 | 0x40
         x11 = x9 & x11
         [x8] = x9
         if (x11 == x10)
         b.ne 0x8004eb4           // likely

    loc_0x08004eac: // orphan
         dsb ishst
         

    loc_0x08004eb4: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x8004ea8
         x8 = 0x8004000
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x9 = [x8]                // 0xcf // 207
         x9 = x9 >> 0xc
         dsb ishst
         tlbi vaae1is,x9
         dsb ish
         
         x8 = [x8]                // 0xcf // 207
         x1 = x8 + x23            // int64_t arg2
         0x8004ee0 ()             // 0x8004ee0(0x0, 0x910003fdb1067ff4, 0x0, 0x0)
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8004fa0

    loc_0x08004eec: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x8004e58
         w0 = 0x1000
         0x8004ef0 ()             // 0x8004ef0(0x1000, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8004f9c     // unlikely

    loc_0x08004ef8: // orphan
         w1 = 0xaa                // '\xaa'
         w2 = 0x1000
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8004f04 ()             // 0x8004f04(0x0, 0xaa, 0x1000, 0x0)
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004f10 ()             // 0x8004f10(0x8004000, 0xaa, 0x1000, 0x0)
         if !x0 jmp 0x8004f8c     // unlikely

    loc_0x08004f18: // orphan
         x8 = [x0 + 0x70]         // 0xc7 // 199
         if !x8 jmp 0x8004f8c     // unlikely

    loc_0x08004f20: // orphan
         ubfx x9,x22,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         w8 = ~w9
         if ((x8 & 3) == 0)
         b.ne 0x8004f8c           // likely

    loc_0x08004f34: // orphan
         x8 = 0x8004000
         x9 = x9 & 0x7ffffff000
         ubfx x10,x22,0x15, 9     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         x9 = x9 - x8
         x9 = x9 | 0xffffff8000000000
         x9 = [x9 + x10,lsl 3]    // 0xd1000000d0 // 897648165072
         w10 = ~w9
         if ((x10 & 3) == 0)
         b.ne 0x8004f8c           // likely

    loc_0x08004f5c: // orphan
         x9 = x9 & 0x7ffffff000
         x8 = x9 - x8
         ubfx x9,x22,0xc, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 | 0xffffff8000000000
         x8 = x8 + x9,lsl 3
         b.eq 0x8004f8c           // unlikely

    loc_0x08004f74: // orphan
         x9 = [x8]                // 0xcf // 207
         if !x9 jmp 0x8004f8c     // likely

    loc_0x08004f7c: // orphan
         x9 = 0x8004000
         [x24] = x8
         [x9] = x22
         jmp 0x8004e5c

    loc_0x08004f8c: // orphan
         // XREFS: CODE 0x08004f14  CODE 0x08004f1c  CODE 0x08004f30  
         // XREFS: CODE 0x08004f58  CODE 0x08004f70  CODE 0x08004f78  
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004f90 ()             // 0x8004f90(0x0, 0x0, 0x0, 0x0)
         w22 = ~0xd
         jmp 0x8004fa0

    loc_0x08004f9c: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x8004ef4
         w22 = ~0xb

    loc_0x08004fa0: // orphan
         // CODE XREFS from sym.pte_read_physical @ 0x8004ee8, 0x8004f98
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004fa8 ()             // 0x8004fa8(0x8004000, 0x0, 0x0, 0x0)
         jmp 0x8004dc4

    loc_0x08004fb0: // orphan
         // CODE XREFS from sym.pte_read_physical @ 0x8004db4, 0x8004dbc
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x08004fb4: // orphan
         // CODE XREFS from sym.pte_read_physical @ 0x8004e1c, 0x8004e24
         0x8004fb4 ()             // 0x8004fb4(0x0, 0x0, 0x0, 0x0)
         if w22 jmp 0x8004e2c     // unlikely

    loc_0x08004fbc: // orphan
         jmp 0x8004dc0

    loc_0x08004fc0: // orphan
         // CODE XREF from sym.pte_read_physical @ 0x8004e84
         brk 0x800

}

/* ===== 0x08003ff0 ===== */
int sym.read_process_memory_kmap (int esi, int edx) {
    loc_0x8003ff0:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        // XREFS(60)
        0x08004000
        0x08004004
        x8 = 0x8004000
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8]     // 0xcf // 207
        w23 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x1000
        x19 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x0 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800402c ()  // 0x800402c(0x0, 0xcc0, 0x1000, 0x0)
        if !x0 jmp 0x8004070 // likely
            
    loc_0x8004070:
        // CODE XREF from sym.read_process_memory_kmap @ 0x8004030
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8004074:
        // CODE XREF from sym.read_process_memory_kmap @ 0x800406c
        w0 = w19 & 1
        (x20, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800408c
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08004278 ===== */
int sym.read_process_memory_nocache_vmap (int esi, int edx) {
    loc_0x8004278:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x4 = 0x8004000
        x4 = x4 + 0
        x5 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w6 = 0x2
        w7 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        sym.process_memory_rw () // sym.process_memory_rw(0x0, 0x0, 0x0, 0x0, -1, -1, -1, -1, -1)
        w0 = w0 & 1
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        // lr
         // (break)
}

/* ===== 0x08004490 ===== */
int sym.read_process_memory_nocache_ioremap (int esi, int edx) {
    loc_0x8004490:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8004000
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8]     // 0xcf // 207
        w23 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x1000
        x19 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x0 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x80044cc ()  // 0x80044cc(0x0, 0xcc0, 0x1000, 0x0)
        if !x0 jmp 0x8004510 // likely
            
    loc_0x8004510:
        // CODE XREF from sym.read_process_memory_nocache_ioremap @ 0x80044d0
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8004514:
        // CODE XREF from sym.read_process_memory_nocache_ioremap @ 0x800450c
        w0 = w19 & 1
        (x20, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800452c
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x080046f0 ===== */
int sym.write_process_memory (int esi, int edx) {
    loc_0x80046f0:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x4 = 0x8004000
        x4 = x4 + 0
        x5 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w6 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w7 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        sym.process_memory_rw () // sym.process_memory_rw(0x0, 0x0, 0x0, 0x0, -1, -1, -1, -1, -1)
        w0 = w0 & 1
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        // lr
         // (break)
}

/* ===== 0x08004874 ===== */
int sym.read_process_memory_common_manual (int esi, int edx) {
    loc_0x8004874:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x4 = 0x8004000
        x4 = x4 + 0
        x5 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w6 = 0x1
        w7 = 0x1
        sym.process_memory_rw () // sym.process_memory_rw(0x0, 0x0, 0x0, 0x0, -1, -1, -1, -1, -1)
        w0 = w0 & 1
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        // lr
         // (break)
}

/* ===== 0x080048ac ===== */
int sym.read_process_memory_kmap_manual (int esi, int edx) {
    loc_0x80048ac:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8004000
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8]     // 0xcf // 207
        w23 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x1000
        x19 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x0 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x80048e8 ()  // 0x80048e8(0x0, 0xcc0, 0x1000, 0x0)
        if !x0 jmp 0x800492c // likely
            
    loc_0x800492c:
        // CODE XREF from sym.read_process_memory_kmap_manual @ 0x80048ec
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8004930:
        // CODE XREF from sym.read_process_memory_kmap_manual @ 0x8004928
        w0 = w19 & 1
        (x20, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08004948
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08004950 ===== */
int sym.read_process_memory_nocache_vmap_manual (int esi, int edx) {
    loc_0x8004950:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x4 = 0x8004000
        x4 = x4 + 0
        x5 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w6 = 0x1
        w7 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        sym.process_memory_rw () // sym.process_memory_rw(0x0, 0x0, 0x0, 0x0, -1, -1, -1, -1, -1)
        w0 = w0 & 1
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        // lr
         // (break)
}

/* ===== 0x08004988 ===== */
int sym.read_process_memory_nocache_ioremap_manual (int esi, int edx) {
    loc_0x8004988:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8004000
        x20 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8]     // 0xcf // 207
        w23 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x1000
        x19 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x0 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x80049c4 ()  // 0x80049c4(0x0, 0xcc0, 0x1000, 0x0)
        if !x0 jmp 0x8004a08 // likely
            
    loc_0x8004a08:
        // CODE XREF from sym.read_process_memory_nocache_ioremap_manual @ 0x80049c8
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8004a0c:
        // CODE XREF from sym.read_process_memory_nocache_ioremap_manual @ 0x8004a04
        w0 = w19 & 1
        (x20, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08004a24
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08005024 ===== */
int sym.get_module_base (int esi, int edx) {
    loc_0x8005024:
        hint 0x19
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
        0x8005084 ()  // 0x8005084(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8005148 // likely
            
    loc_0x8005148:
        x19 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x8005168
         // do {
    loc_0x8005168:
        // CODE XREF from sym.get_module_base @ 0x800514c
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_140h
        hint 0x1d
        0x08005184
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800508c
    loc_0x80050a4:
        0x80050a4 ()  // 0x80050a4(0x0, 0x0, 0x0, 0x0)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x80050b4
         // do {
    loc_0x80050b4:
        // CODE XREF from sym.get_module_base @ 0x80050ac
        0x80050b4 ()  // 0x80050b4(0x0, 0x0, 0x0, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x80050bc ()  // 0x80050bc(0x0, 0x0, 0x0, 0x0)
        if !x20 jmp 0x8005148 // likely
         // } while (?);
        }
        return eax;
    loc_0x80050c4:
        0x080050c4
         // do {
    loc_0x80050c8:
        // CODE XREF from fcn.08005190 @ 0x8005194
        x21 = x20 + 0x90
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x80050d0 ()  // 0x80050d0(0x90, 0x0, 0x0, 0x0)
        0x080050d4
         // } while (?);
        }
        return eax;
    loc_0x080050b0: // orphan
             x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080050d8: // orphan
         // CODE XREF from fcn.080051a4 @ 0x80051a8
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x1 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_140h
         0x80050e0 ()             // 0x80050e0(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8005150     // likely

    loc_0x080050e8: // orphan
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8005104

    loc_0x080050f0: // orphan
         x1 = [x22 + 8]           // 0xdd // 221 // int64_t arg_140h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x80050f8 ()             // 0x80050f8(0x0, -1, 0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x0 jmp 0x8005150     // likely

    loc_0x08005104: // orphan
         // CODE XREF from sym.get_module_base @ 0x80050ec
         x0 = [x22 + 0x80]        // 0xdd // 221
         if !x0 jmp 0x80050f0     // unlikely

    loc_0x0800510c: // orphan
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_140h
         w2 = 0x100
         0x8005114 ()             // 0x8005114(0x0, 0x178000, 0x100, 0x0)
         if (x0 != 1)
         b.hi 0x80050f0           // unlikely

    loc_0x08005120: // orphan
         w1 = 0x2f                // '/'
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8005128 ()             // 0x8005128(0x0, 0x2f, 0x0, 0x0)
         if (x0 == 0)
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_140h
         csinc x0,x23,x0, eq      // int64_t arg2
         0x8005138 ()             // 0x8005138(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x80050f0     // likely

    loc_0x08005140: // orphan
         x19 = [x22]              // 0xdd // 221
         jmp 0x8005154

    loc_0x08005150: // orphan
         x19 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005154: // orphan
         // CODE XREF from sym.get_module_base @ 0x8005144
         

    loc_0x08005158: // orphan
         // CODE XREF from fcn.080051b4 @ 0x80051b8
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x800515c ()             // 0x800515c(0x0, 0x0, 0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x8005164 ()             // 0x8005164(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x080051c0 ===== */
int sym.do_config_gyro_hook (int esi, int edx) {
    loc_0x80051c0:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x10] = (x29,2)
        [var_20h] = x23
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = var_10h
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w2 = 0x10
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        [sp] = (xzr,2)
        sym._copy_from_user () // "`" // sym._copy_from_user(0x177fb0, 0x0, 0x10)
        if !x0 jmp 0x8005200 // unlikely
            
    loc_0x8005200:
        w8 = [var_4h] // 4
        if w8 jmp 0x8005210 // unlikely
            
    loc_0x8005210:
        (w21, 2) = 3
        x20 = 0x8005000
        x20 = x20 + 0
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8005220 ()  // 0x8005220(0x8005000, 0x0, 0x0, 0x0)
        (w9, 2) = 3
        x23 = 0x8005000
        x23 = x23 + 0
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        [x23, 8] = (w21,2)
        if (w9 == 0)
        [x23 + 4] = w8
        cset w8,ne
        [x23] = (byte) w8
        0x8005248 ()  // 0x8005248(0x8005000, 0x0, 0x0, 0x0)
        w8 = (byte) [x23] // 0xde // 222
        ldur x9,[x23,4] // 0xde // 222
        x1 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        w10 = [x23 + 0xc] // 0xde // 222
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w2 = 0x10
        [sp] = w8
        [sp = x9
        [var_8h_2] = w10
        sym._copy_to_user_1 () // sym._copy_to_user_1(0x0, 0x178000)
        w8 = ~0xd
        if (x0 == 0)
        csel w0,wzr,w8, eq
         // do {
    loc_0x8005280:
        // CODE XREF from sym.do_config_gyro_hook @ 0x80051fc
        (x20, 2) = 3
        x23 = [var_20h] // 0x4 // 4
        (x22, 2) = 3
        (x29, 2) = 3
        sp = arg_50h
        hint 0x1d
        0x08005298
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08005a10 ===== */
int sym.hook_ioctl (int esi, int edx) {
    loc_0x8005a10:
        hint 0x19
        sp = sp - 0x1a0
        [sp, 0x170] = (x29,2)
        [var_180h] = x28
        [sp, 0x190] = (x20,2)
        x29 = var_170h
        w8 = [x0 + 8] // 0xc7 // 199 // arg1
        x19 = [x0 + 0x10] // 0xc7 // 199 // arg1
        jmp 0x8005f28
         // do {
    loc_0x8005f28:
        // CODE XREF from sym.hook_ioctl @ 0x8005a30
        x9 = 0x8005000
        x9 = x9 + 0
        prfm pstl1strm,[x9]
         // } while (?);
        }
        return eax;
    loc_0x08005a44: // orphan
             // CODE XREF from sym.hook_ioctl @ 0x8005f44
             if (w8 == 0x7ea)
             x9 = 0x8005000
             b.ne 0x8005a60           // likely

    loc_0x08005a50: // orphan
         w8 = 0x1
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x9] = (byte) w8
         jmp 0x8005ec0

    loc_0x08005a60: // orphan
         w9 = (byte) [x9]         // 0xd0 // 208
         if (w9 == 1)
         b.ne 0x8005ac4           // unlikely

    loc_0x08005a6c: // orphan
         w8 = w8 - 0x30d
         if (w8 == 0xda)
         b.hi 0x8005ac4           // likely

    loc_0x08005a78: // orphan
         x9 = 0x8005000
         x9 = x9 + 0
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = 0x8005a84
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

    loc_0x08005ac4: // orphan
         w0 = 0x1f7
         jmp 0x8005ec0

    loc_0x08005ec0: // orphan
         // XREFS: CODE 0x08005a5c  CODE 0x08005ac8  CODE 0x08005b10  
         // XREFS: CODE 0x08005c1c  CODE 0x08005c4c  CODE 0x08005e34  
         // XREFS: CODE 0x08005e74  CODE 0x08005e98  CODE 0x08005ea0  
         // XREFS: CODE 0x08005f24  
         jmp 0x8005f48

    loc_0x08005ed4: // orphan
         // CODE XREF from sym.hook_ioctl @ 0x8005f68
         (x20, 2) = 3
         x28 = [var_180h]         // 0x4 // 4
         (x29, 2) = 3
         sp = arg_1a0h
         hint 0x1d
         

    loc_0x08005f34: // orphan
         ldxr w10,[x9]
         w10 = w10 + 1
         stxr w11,w10,[x9]
         if w11 jmp 0x8005f34     // unlikely

    loc_0x08005f44: // orphan
         jmp 0x8005a44

    loc_0x08005f48: // orphan
         // CODE XREF from sym.hook_ioctl @ 0x8005ec0
         w8 = 0x1
         x9 = 0x8005000
         x9 = x9 + 0
         prfm pstl1strm,[x9]

    loc_0x08005f58: // orphan
         ldxr w10,[x9]
         w10 = w10 - w8
         stxr w11,w10,[x9]
         if w11 jmp 0x8005f58     // unlikely

    loc_0x08005f68: // orphan
         jmp 0x8005ed4

}

/* ===== 0x0800b32c ===== */
int sym.shadow_entry_get_hits (int esi, int edx) {
    loc_0x800b32c:
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [var_10h] = x27
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x800b4d0 // likely
            
    loc_0x800b4d0:
        // CODE XREFS from sym.shadow_entry_get_hits @ 0x800b34c, 0x800b358, 0x800b360
        w21 = ~0x15
        jmp 0x800b4e8
         // do {
    loc_0x800b4e8:
        // CODE XREF from sym.shadow_entry_get_hits @ 0x800b4d4
        w0 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x27 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800b508
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800b350
    loc_0x800b35c:
        w8 = [x19 + 0x18] // 0xda // 218
        if !w8 jmp 0x800b4d0 // unlikely
    loc_0x800b364:
        x0 = 0x800b000
        x0 = x0 + 0   // int64_t arg1 // "B"
        0x800b36c ()  // 0x800b36c(0x800b000, 0x0, 0x0, 0x0)
        x8 = 0x800b000
        x8 = x8 + 0   // "B"
        x23 = [x8]    // 0xcf // 207
        if (x23 == x8)
        b.eq 0x800b4d8 // unlikely
            
    loc_0x800b4d8:
        // CODE XREFS from sym.shadow_entry_get_hits @ 0x800b380, 0x800b394
        w21 = ~0x1
         // do {
    loc_0x800b4dc:
        // CODE XREFS from sym.shadow_entry_get_hits @ 0x800b514, 0x800b51c, 0x800b530
        x0 = 0x800b000
        x0 = x0 + 0   // int64_t arg1 // "B"
        0x800b4e4 ()  // 0x800b4e4(0x800b000, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800b38c: // orphan
             // CODE XREFS from sym.shadow_entry_get_hits @ 0x800b3a0, 0x800b3bc
             x23 = [x23]              // 0xde // 222
             if (x23 == x8)
             b.eq 0x800b4d8           // unlikely

    loc_0x0800b398: // orphan
         // CODE XREF from sym.shadow_entry_get_hits @ 0x800b388
         ldur w10,[x23,-0x18]     // 0xde // 222
         if (w10 == w9)
         b.ne 0x800b38c           // likely

    loc_0x0800b3a4: // orphan
         x10 = [x19 + 8]          // 0xda // 218
         x11 = x10 << 8
         x10 = x10 & x11,asr 8
         ldur x11,[x23,-0x30]     // 0xde // 222
         x10 = x10 & 0xfffffffffffff000
         if (x11 == x10)
         b.ne 0x800b38c           // likely

    loc_0x0800b3c0: // orphan
         x21 = x23 + 0x10
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800b3c8 ()             // 0x800b3c8(0x8033010, 0x0, 0x0, 0x0)
         w8 = [x23 + 0x24f0]      // 0xde // 222
         w9 = [x19 + 0x18]        // 0xda // 218
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         if (w8 == w9)
         csel w22,w8,w9, lo
         0x800b3e4 ()             // "6\t" // 0x800b3e4(0x8033010, 0x8033010, 0x0, 0x0)
         if !w22 jmp 0x800b50c    // unlikely

    loc_0x0800b3ec: // orphan
         w8 = 0x238
         w1 = 0xcc0               // '\xc0\f'
         umull x0,w22,w8          // int64_t arg1
         0x800b3f8 ()             // 0x800b3f8(0x0, 0xcc0, 0x0, 0x0)
         if !x0 jmp 0x800b518     // likely

    loc_0x0800b400: // orphan
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800b408 ()             // 0x800b408(0x0, 0x0, 0x0, 0x0)
         w8 = [x23 + 0x24f0]      // 0xde // 222
         if (w22 == w8)
         csel w24,w22,w8, lo
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w24 jmp 0x800b474    // likely

    loc_0x0800b420: // orphan
         w8 = [x23 + 0x24ec]      // 0xde // 222
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x26 = x23 + 0x168
         w27 = 0x238

    loc_0x0800b430: // orphan
         // CODE XREF from sym.shadow_entry_get_hits @ 0x800b46c
         if (w8 == 0x11)
         b.hs 0x800b540           // unlikely

    loc_0x0800b438: // orphan
         smaddl x0,w25,w27, x20   // int64_t arg1
         w2 = 0x238
         umaddl x1,w8,w27, x26
         0x800b444 ()             // 0x800b444(0x0, 0x0, 0x238, 0x0)
         w8 = [x23 + 0x24ec]      // 0xde // 222
         w25 = w25 + 1
         w8 = w8 + 1
         negs w9,w8
         w8 = w8 & 0xf
         w9 = w9 & 0xf
         csneg w8,w8,w9, mi
         if (w24 == w25)
         [x23 + 0x24ec] = w8
         b.ne 0x800b430           // likely

    loc_0x0800b470: // orphan
         w8 = [x23 + 0x24f0]      // 0xde // 222

    loc_0x0800b474: // orphan
         // CODE XREF from sym.shadow_entry_get_hits @ 0x800b41c
         w8 = w8 - w24
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x23 + 0x24f0] = w8
         0x800b484 ()             // 0x800b484(0x0, 0x0, 0x0, 0x0)
         w8 = 0xb0ae              // '\xae\xb0'
         w8 = 0x39                // '9'
         if (w24 == w8)
         b.hs 0x800b534           // unlikely

    loc_0x0800b498: // orphan
         w8 = 0x238
         x22 = [x19 + 0x10]       // 0xda // 218
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         umull x21,w24,w8
         w2 = 0x1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800b4b0 ()             // 0x800b4b0(0x0, 0x0, 0x1, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym._copy_to_user_4 ()   // sym._copy_to_user_4(0xfffffffffffffffe, 0x0)
         if !x0 jmp 0x800b520     // unlikely

    loc_0x0800b4c8: // orphan
         w21 = ~0xd
         jmp 0x800b528

    loc_0x0800b50c: // orphan
         // CODE XREF from sym.shadow_entry_get_hits @ 0x800b3e8
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x1c] = wzr
         jmp 0x800b4dc

    loc_0x0800b518: // orphan
         // CODE XREF from sym.shadow_entry_get_hits @ 0x800b3fc
         w21 = ~0xb
         jmp 0x800b4dc

    loc_0x0800b520: // orphan
         // CODE XREF from sym.shadow_entry_get_hits @ 0x800b4c4
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x1c] = w24

    loc_0x0800b528: // orphan
         // CODE XREF from sym.shadow_entry_get_hits @ 0x800b4cc
         // CODE XREF from sym.shadow_entry_get_hits @ +0x210
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800b52c ()             // 0x800b52c(0x0, 0x0, 0x0, 0x0)
         jmp 0x800b4dc

    loc_0x0800b534: // orphan
         // CODE XREF from sym.shadow_entry_get_hits @ 0x800b494
         brk 0x800

    loc_0x0800b540: // orphan
         // CODE XREF from sym.shadow_entry_get_hits @ 0x800b434
         brk 0x5512

}

/* ===== 0x08020db4 ===== */
int sym.brk_bp_memwrite (int esi, int edx) {
    loc_0x8020db4:
        hint 0x19
        sp = sp - 0x70
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x28,2)
        [sp, 0x30] = (x26,2)
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_10h
        x8 = 0x8020000
        w8 = (byte) [x8] // 0xcf // 207
        if (w8 == 1)
        b.ne 0x8020e20 // likely
            
    loc_0x8020e20:
        w23 = ~0x5
         // do {
    loc_0x8020e24:
        // XREFS: CODE 0x08020e1c  CODE 0x08020ec4  CODE 0x0802123c
        // XREFS: CODE 0x080212e8  CODE 0x08021324  CODE 0x08021668
        w0 = w23      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x23
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_70h
        hint 0x1d
        0x08020e48
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8020de8
    loc_0x8020df0:
        w0 = [x20 + 8] // 0xdb // 219
        if (w0 == 1)
        b.lt 0x8020e18 // likely
            
    loc_0x8020e18:
        w23 = ~0x15
        jmp 0x8020e24
    loc_0x08020dfc: // orphan
             x8 = [x20 + 0x10]        // 0xdb // 219
             if !x8 jmp 0x8020e18     // unlikely

    loc_0x08020e04: // orphan
         w9 = [x20]               // 0xdb // 219
         if (w9 == 1)
         b.ne 0x8020e18           // likely

    loc_0x08020e10: // orphan
         w9 = [x20 + 4]           // 0xdb // 219
         if !w9 jmp 0x8020e4c     // likely

    loc_0x08020e4c: // orphan
         x9 = [x20 + 0x18]        // 0xdb // 219
         if !x9 jmp 0x8020e18     // unlikely

    loc_0x08020e54: // orphan
         x9 = [x20 + 0x20]        // 0xdb // 219
         if !x9 jmp 0x8020e18     // unlikely

    loc_0x08020e5c: // orphan
         mrs x11,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x8 << 8
         x11 = [x11]              // 0xd2 // 210
         x19 = x8 & x10,asr 8
         w8 = ~0xfff              // '\xff\x0f'
         x10 = 0x80               // '\x80'
         if ((x11 & 0x400000) == 0)
         csel x8,x10,x8, eq
         if (x19 == x8)
         b.hs 0x8020e18           // unlikely

    loc_0x08020e84: // orphan
         x28 = x19 & 0xfff
         x8 = x9 + x28
         if (x8 == 1)
         b.hi 0x8020e18           // unlikely

    loc_0x08020e94: // orphan
         0x8020e94 ()             // 0x8020e94(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8020ec0     // likely

    loc_0x08020e9c: // orphan
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8020ea0 ()             // 0x8020ea0(0x0, 0x0, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8020eac ()             // 0x8020eac(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8020ec8     // likely

    loc_0x08020eb4: // orphan
         0x8020eb4 ()             // 0x8020eb4(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8020ecc

    loc_0x08020ec0: // orphan
         w23 = ~0x2
         jmp 0x8020e24

    loc_0x08020ec8: // orphan
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08020ecc: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x8020ebc
         0x8020ecc ()             // 0x8020ecc(0x0, 0x0, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8020ed4 ()             // 0x8020ed4(0x0, 0x0, 0x0, 0x0)
         if !x21 jmp 0x8020e18    // likely

    loc_0x08020edc: // orphan
         x0 = 0x8020000
         x0 = x0 + 0              // int64_t arg1
         x23 = x19 & 0xfffffffffffff000
         0x8020ee8 ()             // 0x8020ee8(0x8020000, 0x0, 0x0, 0x0)
         x8 = 0x8020000
         x8 = x8 + 0
         x27 = [x8]               // 0xcf // 207
         if (x27 == x8)
         b.eq 0x8020f98           // unlikely

    loc_0x08020f00: // orphan
         x22 = x27                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08020f04: // orphan
         x9 = [x22 + 0x18]        // 0xdd // 221
         if (x9 == x21)
         b.eq 0x8020f20           // unlikely

    loc_0x08020f10: // orphan
         x22 = [x22]              // 0xdd // 221
         if (x22 == x8)
         b.ne 0x8020f04           // likely

    loc_0x08020f1c: // orphan
         jmp 0x8020f98

    loc_0x08020f20: // orphan
         if !x22 jmp 0x8020f98    // likely

    loc_0x08020f24: // orphan
         x25 = [x22 + 0x798]      // 0xdd // 221
         x24 = x22 + 0x798
         jmp 0x8020f34

    loc_0x08020f30: // orphan
         x25 = [x25]              // 0xe0 // 224

    loc_0x08020f34: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x8020f2c
         if (x25 == x24)
         b.eq 0x802111c           // likely

    loc_0x08020f3c: // orphan
         x8 = [x25 + 0x18]        // 0xe0 // 224
         x8 = x8 & 0xfffffffffffff000
         if (x8 == x23)
         b.ne 0x8020f30           // likely

    loc_0x08020f4c: // orphan
         x8 = [x25 + 0x40]        // 0xe0 // 224
         if !x8 jmp 0x8020f30     // unlikely

    loc_0x08020f54: // orphan
         if !x25 jmp 0x802111c    // likely

    loc_0x08020f58: // orphan
         x22 = [x20 + 0x20]       // 0xdb // 219
         x9 = x22 >> 0x1f
         if x9 jmp 0x802166c      // likely

    loc_0x08020f64: // orphan
         x24 = x8 + x28
         x23 = [x20 + 0x18]       // 0xdb // 219
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8020f78 ()             // 0x8020f78(0x0, 0x0, 0x0, 0x0)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         sym._copy_from_user_3 () // sym._copy_from_user_3(0x0, -1, 0x0)
         if !x0 jmp 0x80212ec     // likely

    loc_0x08020f90: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x8021474
         w23 = ~0xd
         jmp 0x80212d4

    loc_0x08020f98: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x8020f1c
         x8 = 0x8020000
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x7f8
         x0 = [x8]                // 0xcf // 207 // int64_t arg1
         0x8020fa8 ()             // 0x8020fa8(0x54ffff81f108011f, 0xdc0, 0x7f8, 0x0)
         if !x0 jmp 0x80212d0     // unlikely

    loc_0x08020fb0: // orphan
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x0 + 0x7ac
         x0 = x0 + 0x7c0          // int64_t arg1
         x1 = 0x8020000
         x1 = x1 + 0              // int64_t arg_70h
         x2 = 0x8020000
         x2 = x2 + 0
         [x8] = xzr
         0x8020fd0 ()             // 0x8020fd0(0x7c0, 0x8020000, 0x8020000, 0x0)
         x25 = x22 + 0x798
         [x22 + 0x7b4] = wzr
         w26 = 0x1
         [x22 + 0x7b8] = wzr
         x9 = 0x80                // '\x80'
         x11 = 0x8020000
         [x22 + 0x7bc] = wzr
         x10 = 0x8020000
         w0 = 0x2578              // 'x%'
         [x22 + 0x7d8] = xzr
         w1 = 0xdc0               // '\xc0\r'
         // XREFS(103)
         [x22 + 0x7e8] = xzr
         [x22 + 0x798] = x25
         [x22 + 0x7a0] = x25
         w8 = [x20 + 8]           // 0xdb // 219
         [x22 + 0x7a8] = wzr
         x11 = [x11]              // 0xd2 // 210
         [x22 + 0x7e0] = (byte) w26
         x10 = [x10]              // 0xd1 // 209
         [x22 + 0x10] = w8
         [x22 + 0x18] = x21
         x8 = [x21 + 0x70]        // 0xdc // 220
         sbfx x8,x8,0, 0x38       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x8 + x9
         x8 = x8 - x10
         x12 = x9 >> 0x26
         x9 = x9 + x11
         if (x12 == 0)
         csel x8,x9,x8, eq
         [x22 + 0x80] = x8
         0x802104c ()             // 0x802104c(0x2578, 0xdc0, 0x8020000, 0x0)
         if !x0 jmp 0x8021224     // unlikely

    loc_0x08021054: // orphan
         [x0 + 0x10] = w26
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x18] = x19
         w0 = 0xcc0               // '\xc0\f'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8021074 ()             // 0x8021074(0xcc0, 0x0, 0x0, 0x0)
         [x24 + 0x38] = x0
         if !x0 jmp 0x802121c     // unlikely

    loc_0x08021080: // orphan
         x8 = x0 << 6
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0xff00
         jmp 0x8021098

    loc_0x08021098: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x802108c
         x8 = x8 & 0xfffffffffff000
         x8 = x9 | x8
         [x24 + 0x40] = x8
         if !x8 jmp 0x8021210     // likely

    loc_0x080210a8: // orphan
         x8 = 0x8021000
         x9 = xzr | 0xfffffffe00000000
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x8 = [x8]                // 0xcf // 207
         x8 = x8 >> 6
         x8 = x8 & 0x3ffffffffffffc0
         x8 = x8 - x9
         x8 = x26 + x8
         x8 = x8 << 6
         [x24 + 0x48] = x8
         sym.mmap_read_lock ()    // sym.mmap_read_lock(0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x80210dc ()             // 0x80210dc(0x0, 0x8033000, 0x0, 0x0)
         if !x0 jmp 0x80210f8     // likely

    loc_0x080210e4: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x23 == x8)
         b.lo 0x80210f8           // unlikely

    loc_0x080210f0: // orphan
         w8 = (byte) [x0 + 0x20]  // 0xc7 // 199
         tbnz w8,0,0x8021240      // likely

    loc_0x080210f8: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8021108 ()             // 0x8021108(0x0, 0x0, 0x0, 0x0)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021110 ()             // 0x8021110(0x0, 0x0, 0x0, 0x0)
         w23 = ~0x15
         jmp 0x8021228

    loc_0x0802111c: // orphan
         w8 = [x22 + 0x7a8]       // 0xdd // 221
         if (w8 == 7)
         jmp ifle 0x8021130       // likely

    loc_0x08021128: // orphan
         w23 = ~0x1b
         jmp 0x80212d4

    loc_0x08021130: // orphan
         w0 = 0x2578              // 'x%'
         w1 = 0xdc0               // '\xc0\r'
         0x8021138 ()             // 0x8021138(0x2578, 0xdc0, 0x0, 0x0)
         if !x0 jmp 0x80212d0     // unlikely

    loc_0x08021140: // orphan
         w8 = 0x1
         [x0 + 0x18] = x19
         x27 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x10] = w8
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8021164 ()             // 0x8021164(0xcc0, 0x0, 0x0, 0x0)
         x25 = x27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x27 + 0x38] = x0
         if !x0 jmp 0x80212c8     // unlikely

    loc_0x08021174: // orphan
         x8 = x0 << 6
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0xff00
         jmp 0x802118c

    loc_0x0802118c: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x8021180
         x8 = x8 & 0xfffffffffff000
         x8 = x9 | x8
         [x25 + 0x40] = x8
         if !x8 jmp 0x80212bc     // likely

    loc_0x0802119c: // orphan
         x8 = 0x8021000
         x9 = xzr | 0xfffffffe00000000
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x8 = [x8]                // 0xcf // 207
         x8 = x8 >> 6
         x8 = x8 & 0x3ffffffffffffc0
         x8 = x8 - x9
         x8 = x26 + x8
         x8 = x8 << 6
         [x25 + 0x48] = x8
         sym.mmap_read_lock ()    // sym.mmap_read_lock(0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x80211d0 ()             // 0x80211d0(0x0, 0x8033000, 0x0, 0x0)
         if !x0 jmp 0x80211ec     // likely

    loc_0x080211d8: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x23 == x8)
         b.lo 0x80211ec           // unlikely

    loc_0x080211e4: // orphan
         w8 = (byte) [x0 + 0x20]  // 0xc7 // 199
         tbnz w8,0,0x8021404      // likely

    loc_0x080211ec: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80211fc ()             // 0x80211fc(0x0, 0x0, 0x0, 0x0)
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021204 ()             // 0x8021204(0x0, 0x0, 0x0, 0x0)
         w23 = ~0x15
         jmp 0x80212d4

    loc_0x08021210: // orphan
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8021218 ()             // 0x8021218(0x0, 0x0, 0x0, 0x0)

    loc_0x0802121c: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021220 ()             // 0x8021220(0x0, 0x0, 0x0, 0x0)

    loc_0x08021224: // orphan
         w23 = ~0xb

    loc_0x08021228: // orphan
         // CODE XREFS from sym.brk_bp_memwrite @ 0x8021118, 0x80212b8, 0x8021400, 0x80214b0
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_destroy_entry () // sym.brk_destroy_entry(0x0, 0x0)
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         0x8021238 ()             // 0x8021238(0x8021000, 0x0, 0x0, 0x0)
         jmp 0x8020e24

    loc_0x08021240: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x3 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg4
         sym.brk_build_clone ()   // sym.brk_build_clone(0x0, 0x0, 0x0, 0x0, -1)
         if w0 jmp 0x8021478      // unlikely

    loc_0x08021258: // orphan
         x26 = [x20 + 0x20]       // 0xdb // 219
         x8 = x26 >> 0x1f
         if x8 jmp 0x8021674      // likely

    loc_0x08021264: // orphan
         x8 = [x24 + 0x40]        // 0xdf // 223
         x23 = [x20 + 0x18]       // 0xdb // 219
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x28 = x8 + x28
         [var_8h] = x8
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021280 ()             // 0x8021280(0x0, 0x0, 0x0, 0x0)
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         sym._copy_from_user_3 () // sym._copy_from_user_3(0x0, 0x0, 0x0)
         if !x0 jmp 0x8021328     // likely

    loc_0x08021298: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x0 = [x24 + 0x38]        // 0xdf // 223 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80212a8 ()             // 0x80212a8(0xcc0, 0x0, 0x0, 0x0)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80212b0 ()             // 0x80212b0(0x0, 0x0, 0x0, 0x0)
         w23 = ~0xd
         jmp 0x8021228

    loc_0x080212bc: // orphan
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80212c4 ()             // 0x80212c4(0x0, 0x0, 0x0, 0x0)

    loc_0x080212c8: // orphan
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80212cc ()             // 0x80212cc(0x0, 0x0, 0x0, 0x0)

    loc_0x080212d0: // orphan
         w23 = ~0xb

    loc_0x080212d4: // orphan
         // CODE XREFS from sym.brk_bp_memwrite @ 0x8020f94, 0x802112c, 0x802120c, 0x8021578
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         0x80212dc ()             // 0x80212dc(0x8021000, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80212e4 ()             // 0x80212e4(0x0, 0x0, 0x0, 0x0)
         jmp 0x8020e24

    loc_0x080212ec: // orphan
         dsb ishst
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_flush_tlb_group () // sym.brk_flush_tlb_group(0x0)
         (x0, 2) = 3              // int64_t arg2
         sym.brk_cache_maintenance () // sym.brk_cache_maintenance(0xcc0)
         x8 = 0x8021000
         w8 = [x8]                // 0xcf // 207
         if w8 jmp 0x80214b4      // likely

    loc_0x0802130c: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x80214e8
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         0x8021314 ()             // 0x8021314(0x8021000, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802131c ()             // 0x802131c(0x0, 0x0, 0x0, 0x0)
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8020e24

    loc_0x08021328: // orphan
         dsb ishst
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_flush_tlb_group () // sym.brk_flush_tlb_group(0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x0 = [x24 + 0x38]        // 0xdf // 223 // int64_t arg2
         x1 = [var_8h]            // 0x4 // 4
         sym.brk_cache_maintenance () // sym.brk_cache_maintenance(0xcc0)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.list_add_tail_2 ()   // sym.list_add_tail_2(0x0, 0x0)
         x23 = 0x8021000
         x23 = x23 + 0
         w21 = 0x1
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x22 + 0x7a8] = w21
         0x8021368 ()             // 0x8021368(0x8021000, 0x0, 0x0, 0x0)
         [x22 + 0x7f0] = (byte) w21
         x21 = 0x8021000
         x21 = x21 + 0
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.list_add_tail_2 ()   // sym.list_add_tail_2(0x0, 0x8021000)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x8021390 ()             // 0x8021390(0x8021000, 0x8021000, 0x0, 0x0)
         sym.brk_install_switch_hook () // sym.brk_install_switch_hook(0x8021000)
         if !w0 jmp 0x80214ec     // unlikely

    loc_0x0802139c: // orphan
         x19 = 0x8021000
         x19 = x19 + 0
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80213ac ()             // 0x80213ac(0x8021000, 0x0, 0x0, 0x0)
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x22 + 0x7f0] = (byte) wzr
         sym.list_del ()          // sym.list_del(0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x80213c8 ()             // 0x80213c8(0x8021000, 0x8021000, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_quiesce_entry () // sym.brk_quiesce_entry(0x0, 0x8021000)
         if (x27 == x21)
         b.ne 0x8021228           // unlikely

    loc_0x080213dc: // orphan
         sym.brk_uninstall_switch_hook ()
         x19 = 0x8021000
         w8 = (byte) [x19]        // 0xda // 218
         if (w8 == 1)
         b.ne 0x8021228           // likely

    loc_0x080213f0: // orphan
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         0x80213f8 ()             // 0x80213f8(0x8021000, 0x0, 0x0, 0x0)
         [x19] = (byte) wzr
         jmp 0x8021228

    loc_0x08021404: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x3 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg4
         sym.brk_build_clone ()   // "@\t" // sym.brk_build_clone(0x0, 0x0, 0x0, 0x0, -1)
         if w0 jmp 0x8021540      // unlikely

    loc_0x0802141c: // orphan
         x26 = [x20 + 0x20]       // 0xdb // 219
         x8 = x26 >> 0x1f
         if x8 jmp 0x802167c      // likely

    loc_0x08021428: // orphan
         x23 = [x25 + 0x40]       // 0xe0 // 224
         x27 = [x20 + 0x18]       // 0xdb // 219
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x28 = x23 + x28
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021440 ()             // 0x8021440(0x0, 0x0, 0x0, 0x0)
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         sym._copy_from_user_3 () // "@\t" // sym._copy_from_user_3(0x0, 0x0, 0x0)
         if !x0 jmp 0x802157c     // likely

    loc_0x08021458: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x0 = [x25 + 0x38]        // 0xe0 // 224 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8021468 ()             // 0x8021468(0xcc0, 0x0, 0x0, 0x0)
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021470 ()             // 0x8021470(0x0, 0x0, 0x0, 0x0)
         jmp 0x8020f90

    loc_0x08021478: // orphan
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x0 = [x24 + 0x38]        // 0xdf // 223 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802148c ()             // 0x802148c(0xcc0, 0x0, 0x0, 0x0)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021494 ()             // 0x8021494(0x0, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80214ac ()             // 0x80214ac(0x8021000, -1, 0x0, 0x0)
         jmp 0x8021228

    loc_0x080214b4: // orphan
         w8 = [x25 + 0x10]        // 0xe0 // 224
         w1 = [x20 + 8]           // 0xdb // 219
         x9 = 0x8021000
         x9 = x9 + 0
         x3 = [x20 + 0x20]        // 0xdb // 219
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         if (w8 == 0)
         x8 = 0x8021000
         x8 = x8 + 0
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x4,x8,x9, eq
         0x80214e4 ()             // 0x80214e4(0x8021000, -1, 0x0, -1)
         jmp 0x802130c

    loc_0x080214ec: // orphan
         sym.brk_install_mm_fault_kprobe () // sym.brk_install_mm_fault_kprobe(0x0)
         w21 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x8021508     // likely

    loc_0x080214f8: // orphan
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         w1 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8021504 ()             // 0x8021504(0x8021000, 0x0, 0x0, 0x0)

    loc_0x08021508: // orphan
         if (w21 == 0)
         x9 = 0x8021000
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         cset w8,ne
         [x9] = (byte) w8
         sym.brk_resume_clone ()  // sym.brk_resume_clone(0x0)
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         0x8021528 ()             // 0x8021528(0x8021000, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         x3 = [x20 + 0x20]        // 0xdb // 219
         x0 = 0x8021000
         x0 = x0 + 0
         jmp 0x8021654

    loc_0x08021540: // orphan
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x0 = [x25 + 0x38]        // 0xe0 // 224 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8021554 ()             // 0x8021554(0xcc0, 0x0, 0x0, 0x0)
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802155c ()             // 0x802155c(0x0, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8021574 ()             // 0x8021574(0x8021000, -1, 0x0, 0x0)
         jmp 0x80212d4

    loc_0x0802157c: // orphan
         dsb ishst
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_flush_tlb_group () // sym.brk_flush_tlb_group(0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x0 = [x25 + 0x38]        // 0xe0 // 224 // int64_t arg2
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.brk_cache_maintenance () // sym.brk_cache_maintenance(0xcc0)
         x23 = x22 + 0x7ac
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80215a4 ()             // 0x80215a4(0x7ac, 0x8033000, 0x0, 0x0)
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.list_add_tail_2 ()   // sym.list_add_tail_2(0x0, 0x0)
         w8 = [x22 + 0x7a8]       // 0xdd // 221
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         w8 = w8 + 1
         [x22 + 0x7a8] = w8
         0x80215cc ()             // 0x80215cc(0x7ac, 0x7ac, 0x0, 0x0)
         w8 = (byte) [x22 + 0x7e0] // 0xdd // 221
         if !w8 jmp 0x80215e8     // unlikely

    loc_0x080215d8: // orphan
         w8 = (byte) [x22 + 0x7f0] // 0xdd // 221
         if !w8 jmp 0x80215e8     // likely

    loc_0x080215e0: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_resume_clone ()  // sym.brk_resume_clone(0x0)

    loc_0x080215e8: // orphan
         w8 = [x22 + 0x7a8]       // 0xdd // 221
         if (w8 == 2)
         b.lt 0x8021630           // unlikely

    loc_0x080215f4: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_lock ()    // sym.mmap_read_lock(0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.brk_sync_clone_tree () // sym.brk_sync_clone_tree(0x0, 0x0, 0x0)
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         if !w23 jmp 0x8021630    // likely

    loc_0x08021618: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x23
         0x802162c ()             // 0x802162c(0x8021000, -1, 0x0, 0x8033000)

    loc_0x08021630: // orphan
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         0x8021638 ()             // 0x8021638(0x8021000, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021640 ()             // 0x8021640(0x0, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         x3 = [x20 + 0x20]        // 0xdb // 219
         x0 = 0x8021000
         x0 = x0 + 0

    loc_0x08021654: // orphan
         // CODE XREF from sym.brk_bp_memwrite @ 0x802153c
         w4 = [x22 + 0x7a8]       // 0xdd // 221
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w5 = 0x8
         0x8021660 ()             // 0x8021660(0x0, 0x0, 0x0, 0x0)
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8020e24

    loc_0x0802166c: // orphan
         brk 0x800

    loc_0x08021674: // orphan
         brk 0x800

    loc_0x0802167c: // orphan
         brk 0x800

}

/* ===== 0x0800a4d8 ===== */
int sym.hide_kgsl (int esi, int edx) {
    loc_0x800a4d8:
        if !x0 jmp 0x800a52c // likely
            
    loc_0x800a52c:
        // lr
         // } else {
    loc_0x800a4dc:
        x8 = 0x800a000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800a52c // unlikely
        }
        return eax;
    loc_0x800a4e8:
        x8 = 0x800a000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800a52c // unlikely
    loc_0x800a4f4:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = [x0 + 0x448] // 0xc7 // 199 // int64_t arg1
        w19 = w1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        sym.hide_kgsl_dir () // sym.hide_kgsl_dir(-1, 0x0, 0x0)
        x0 = [x20 + 0x440] // 0xdb // 219 // int64_t arg1
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sym.hide_kgsl_dir () // sym.hide_kgsl_dir(-1, 0x0, 0x0)
        (x20, 2) = 3
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
}

/* ===== 0x0800a634 ===== */
int sym.hide_cts (int esi, int edx) {
    loc_0x800a634:
        hint 0x19
        sp = sp - 0x40
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = var_10h
        w21 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x800a000
        x0 = x0 + 0   // int64_t arg1
        x1 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_40h
        [sp] = (xzr,2)
        0x800a660 ()  // 0x800a660(0x800a000, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800a714 // unlikely
            
    loc_0x800a714:
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        sp = arg_40h
        hint 0x1d
        0x0800a728
         // } else {
    loc_0x800a668:
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800a000
        x0 = x0 + 0   // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_40h
        0x800a678 ()  // 0x800a678(0x800a000, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800a70c // unlikely
        }
        return eax;
    loc_0x800a680:
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x2 = 0x800a000
        x2 = x2 + 0
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w1 = 0x10
        w3 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800a698 ()  // 0x800a698(0x178000, 0x10, 0x800a000, 0x0)
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_40h
        0x800a6a4 ()  // 0x800a6a4(0x178000, 0x0, 0x800a000, 0x0)
        if !x0 jmp 0x800a704 // unlikely
            
    loc_0x800a704:
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800a708 ()  // 0x800a708(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x800a70c:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800a710 ()  // 0x800a710(0x0, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800a6ac
    loc_0x800a6d0:
        x10 = [x9]    // 0xd0 // 208
        x11 = [x10 + 8] // 0xd1 // 209
        if (x11 == x9)
        b.ne 0x800a72c // likely
            
    loc_0x800a72c:
        x0 = x9       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800a730 ()  // 0x800a730(0x0, 0x0, 0x0, 0x0)
        jmp 0x800a6e8
         // do {
    loc_0x800a6e8:
        // CODE XREF from sym.hide_cts @ 0x800a734
        x8 = x21 + 0x90
        x0 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        [x21 + 0x90] = x8
        [x21 + 0x98] = x9
        0x800a6f8 ()  // 0x800a6f8(0x0, 0x0, 0x0, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800a700 ()  // 0x800a700(0x0, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800a73c ===== */
int sym.shadow_entry_add (int esi, int edx) {
    loc_0x800a73c:
        hint 0x19
        [sp, -0x50]! = (x29,2)
        [var_10h] = x25
        [sp, 0x20] = (x24,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [var_18h] = xzr
        if !x0 jmp 0x800a82c // likely
            
    loc_0x800a82c:
        w0 = ~0x15
         // do {
    loc_0x800a830:
        // CODE XREFS from sym.shadow_entry_add @ 0x800a7a8, 0x800a9ec, 0x800aa10, 0x800aa3c, 0x800aadc
        (x20, 2) = 3
        x25 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800a848
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800a760
    loc_0x800a770:
        x8 = [x20 + 8] // 0xdb // 219
        if !x8 jmp 0x800a82c // likely
    loc_0x800a778:
        0x800a778 ()  // 0x800a778(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800a7a4 // likely
            
    loc_0x800a7a4:
        w0 = ~0x2
        jmp 0x800a830
    loc_0x0800a780: // orphan
             x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800a784 ()             // 0x800a784(0x0, 0x0, 0x0, 0x0)
             x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800a790 ()             // 0x800a790(0x0, 0x0, 0x0, 0x0)
             if !x0 jmp 0x800a7ac     // likely

    loc_0x0800a798: // orphan
         0x800a798 ()             // 0x800a798(0x0, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800a7b0

    loc_0x0800a7ac: // orphan
         x19 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a7b0: // orphan
         // CODE XREF from sym.shadow_entry_add @ 0x800a7a0
         0x800a7b0 ()             // 0x800a7b0(0x0, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a7b8 ()             // 0x800a7b8(0x0, 0x0, 0x0, 0x0)
         if !x19 jmp 0x800a82c    // likely

    loc_0x0800a7c0: // orphan
         x8 = [x20 + 8]           // 0xdb // 219
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         x9 = x8 << 8
         x23 = x8 & x9,asr 8
         x21 = x23 & 0xfffffffffffff000
         0x800a7d8 ()             // 0x800a7d8(0x800a000, 0x0, 0x0, 0x0)
         

    loc_0x0800a7e0: // orphan
         // CODE XREF from fcn.0800aae8 @ 0x800aaec
         x22 = x19 + 0x90
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a7e8 ()             // 0x800a7e8(0x90, 0x0, 0x0, 0x0)
         

    loc_0x0800a7f0: // orphan
         // CODE XREF from fcn.0800aafc @ 0x800ab00
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800a7f8 ()             // 0x800a7f8(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800a80c     // likely

    loc_0x0800a800: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x21 == x8)
         b.hs 0x800a84c           // likely

    loc_0x0800a80c: // orphan
         

    loc_0x0800a810: // orphan
         // CODE XREF from fcn.0800ab0c @ 0x800ab10
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a814 ()             // 0x800a814(0x0, 0x0, 0x0, 0x0)
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800a820 ()             // 0x800a820(0x800a000, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a828 ()             // 0x800a828(0x0, 0x0, 0x0, 0x0)

    loc_0x0800a84c: // orphan
         x8 = [x19 + 0x70]        // 0xda // 218
         ubfx x9,x23,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         w8 = ~w9
         if ((x8 & 3) == 0)
         b.ne 0x800a9cc           // likely

    loc_0x0800a864: // orphan
         x8 = 0x800a000
         x9 = x9 & 0x7ffffff000
         ubfx x10,x23,0x15, 9     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         x9 = x9 - x8
         x9 = x9 | 0xffffff8000000000
         x9 = [x9 + x10,lsl 3]    // 0xd1000000d0 // 897648165072
         w10 = ~w9
         if ((x10 & 3) == 0)
         b.ne 0x800a9cc           // likely

    loc_0x0800a88c: // orphan
         x9 = x9 & 0x7ffffff000
         x8 = x9 - x8
         ubfx x9,x23,0xc, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 | 0xffffff8000000000
         x24 = x8 + x9,lsl 3
         b.eq 0x800a9cc           // unlikely

    loc_0x0800a8a4: // orphan
         x8 = [x24]               // 0xdf // 223
         x9 = 0x1
         x9 = 0x400
         if ((x8 & x9) == 0)
         [var_18h] = x8
         b.eq 0x800a9cc           // unlikely

    loc_0x0800a8bc: // orphan
         ubfx x0,x8,0xc, 0x24     // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.pfn_valid ()         // sym.pfn_valid(0x0)
         if !w0 jmp 0x800a9cc     // likely

    loc_0x0800a8c8: // orphan
         x8 = 0x800a000
         x8 = x8 + 0
         x23 = x23 & 0xfffffffffffffffc
         x25 = [x8]               // 0xcf // 207
         if (x25 == x8)
         b.ne 0x800a97c           // likely

    loc_0x0800a8e0: // orphan
         w0 = 0x2550              // 'P%'
         w1 = 0xdc0               // '\xc0\r'
         0x800a8e8 ()             // 0x800a8e8(0x2550, 0xdc0, 0x0, 0x0)
         if !x0 jmp 0x800a9f0     // unlikely

    loc_0x0800a8f0: // orphan
         w8 = [x20]               // 0xdb // 219
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0] = (x21,2)
         [x0 + 0x10] = x19
         [x0 + 0x18] = w8
         x8 = [var_18h]           // [0x18:4]=0 // 24
         [x0 + 0x44] = (byte) wzr
         [x0, 0x20] = (x24,2)
         [x0 + 0x40] = wzr
         tbnz x8,0x36,0x800aa14   // unlikely

    loc_0x0800a918: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.shadow_entry_fill_reg_config () // sym.shadow_entry_fill_reg_config(0x0, 0x0)
         w8 = 0x2538              // '8%'
         x1 = 0x800a000
         x1 = x1 + 0
         x0 = x22 + x8            // int64_t arg1
         x2 = 0x800a000
         x2 = x2 + 0
         [x22 + 0x2518] = xzr
         [x22 + 0x2520] = wzr
         [x22 + 0x2530] = wzr
         0x800a948 ()             // 0x800a948(0x2538, 0x800a000, 0x800a000, 0x0)
         x8 = [var_18h]           // [0x18:4]=0 // 24
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x8 | 0x40000000000000 // int64_t arg3
         sym.shadow_write_user_pte () // sym.shadow_write_user_pte(0x0, 0x0, 0x40000000000000, 0x0)
         if !w0 jmp 0x800aa40     // likely

    loc_0x0800a964: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a968 ()             // 0x800a968(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a9cc

    loc_0x0800a970: // orphan
         x25 = [x25]              // 0xe0 // 224
         if (x25 == x8)
         b.eq 0x800a8e0           // likely

    loc_0x0800a97c: // orphan
         ldur x9,[x25,-0x20]      // 0xe0 // 224
         if (x9 == x19)
         b.ne 0x800a970           // likely

    loc_0x0800a988: // orphan
         ldur x9,[x25,-0x30]      // 0xe0 // 224
         if (x9 == x21)
         b.ne 0x800a970           // likely

    loc_0x0800a994: // orphan
         w8 = (byte) [x25 + 0x14] // 0xe0 // 224
         x1 = [var_18h]           // [0x18:4]=0 // 24 // int64_t arg2
         x22 = x25 - 0x30
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x8 << 0x36          // int64_t arg3
         sym.shadow_pte_matches () // "(" // sym.shadow_pte_matches(0xffffffffffffffd0, 0x0, 0x0)
         tbz w0,0,0x800a9cc       // likely

    loc_0x0800a9b0: // orphan
         x8 = [var_18h]           // [0x18:4]=0 // 24
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x24 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x8 | 0x40000000000000 // int64_t arg3
         sym.shadow_write_user_pte () // sym.shadow_write_user_pte(0x0, 0x0, 0x40000000000000, 0x0)
         if !w0 jmp 0x800aa88     // likely

    loc_0x0800a9cc: // orphan
         // CODE XREF from sym.shadow_entry_add @ 0x800a96c
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock ()  // sym.mmap_read_unlock(0x0, 0x0)
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800a9dc ()             // 0x800a9dc(0x800a000, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a9e4 ()             // 0x800a9e4(0x0, 0x0, 0x0, 0x0)
         w0 = ~0xd
         jmp 0x800a830

    loc_0x0800a9f0: // orphan
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800a9f8 ()             // 0x800a9f8(0x800a000, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock ()  // sym.mmap_read_unlock(0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800aa08 ()             // 0x800aa08(0x0, 0x0, 0x0, 0x0)
         w0 = ~0xb
         jmp 0x800a830

    loc_0x0800aa14: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800aa18 ()             // 0x800aa18(0x0, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock ()  // sym.mmap_read_unlock(0x0, 0x0)
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800aa2c ()             // 0x800aa2c(0x800a000, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800aa34 ()             // 0x800aa34(0x0, 0x0, 0x0, 0x0)
         w0 = ~0xc
         jmp 0x800a830

    loc_0x0800aa40: // orphan
         x20 = 0x800a000
         x20 = x20 + 0
         w8 = 0x1
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x22 + 0x44] = (byte) w8
         0x800aa54 ()             // 0x800aa54(0x800a000, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x22 + 0x30          // int64_t arg1
         sym.list_add_tail_1 ()   // sym.list_add_tail_1(0x30)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800aa6c ()             // 0x800aa6c(0x800a000, 0x800a000, 0x0, 0x0)
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800aa78 ()             // 0x800aa78(0x800a000, 0x800a000, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock ()  // sym.mmap_read_unlock(0x0, 0x800a000)
         jmp 0x800aad8

    loc_0x0800aa88: // orphan
         x21 = x25 + 0x10
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800aa90 ()             // 0x800aa90(0x10, 0x0, 0x0, 0x0)
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x25 = x24
         sym.shadow_entry_fill_reg_config () // "(" // sym.shadow_entry_fill_reg_config(0x0, 0x0)
         w8 = 0x1
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x25 + 0x14] = (byte) w8
         0x800aab8 ()             // 0x800aab8(0x10, 0x10, 0x0, 0x0)
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800aac4 ()             // 0x800aac4(0x800a000, 0x10, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock ()  // sym.mmap_read_unlock(0x0, 0x10)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800aad4 ()             // 0x800aad4(0x0, 0x10, 0x0, 0x0)

    loc_0x0800aad8: // orphan
         // CODE XREF from sym.shadow_entry_add @ 0x800aa84
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800a830

}

/* ===== 0x0800b0a8 ===== */
int sym.shadow_entry_del (int esi, int edx) {
    loc_0x800b0a8:
        hint 0x19
        sp = sp - 0x60
        [sp, 0x30] = (x29,2)
        [var_40h] = x21
        [sp, 0x50] = (x20,2)
        x29 = var_30h
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x800b000
        x0 = x0 + 0   // int64_t arg1 // "B"
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x800b0d0 ()  // 0x800b0d0(0x800b000, 0x0, 0x0, 0x0)
        x0 = 0x800b000
        x0 = x0 + 0   // int64_t arg1 // "B"
        0x800b0dc ()  // 0x800b0dc(0x800b000, 0x0, 0x0, 0x0)
        x8 = 0x800b000
        x8 = x8 + 0   // "B"
        x9 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // "B"
        x19 = [x8]    // 0xcf // 207
        if (x19 == x8)
        b.eq 0x800b1c8 // unlikely
            
    loc_0x800b1c8:
        // CODE XREFS from sym.shadow_entry_del @ 0x800b0f4, 0x800b110
        x0 = 0x800b000
        x0 = x0 + 0   // int64_t arg1 // "B"
        x1 = x9       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800b1d4 ()  // "3" // 0x800b1d4(0x800b000, 0x0, 0x0, 0x0)
         // do {
    loc_0x800b1d8:
        // CODE XREF from sym.shadow_entry_del @ 0x800b17c
        w19 = ~0x1
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800b108: // orphan
             // CODE XREFS from sym.shadow_entry_del @ 0x800b120, 0x800b12c
             if (x10 == x8)
             x19 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             b.eq 0x800b1c8           // likely

    loc_0x0800b114: // orphan
         // CODE XREF from sym.shadow_entry_del @ 0x800b104
         ldur w12,[x19,-0x18]     // 0xda // 218
         x10 = [x19]              // 0xda // 218
         if (w12 == w20)
         b.ne 0x800b108           // likely

    loc_0x0800b124: // orphan
         ldur x12,[x19,-0x30]     // 0xda // 218
         if (x12 == x11)
         b.ne 0x800b108           // likely

    loc_0x0800b130: // orphan
         x8 = [x19 + 8]           // 0xda // 218 // x23
         x20 = x19 - 0x30
         x11 = [x8]               // 0xcf // 207 // x23
         if (x11 == x19)
         b.ne 0x800b2e4           // likely

    loc_0x0800b144: // orphan
         x11 = [x10 + 8]          // 0xd1 // 209 // x23
         if (x11 == x19)
         b.ne 0x800b2e4           // likely

    loc_0x0800b150: // orphan
         [x10 + 8] = x8
         [x8] = x10

    loc_0x0800b158: // orphan
         // CODE XREF from sym.shadow_entry_del @ 0x800b2ec
         x8 = 0x100
         w10 = 0x22               // '\"'
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg1 // "B"
         x8 = 0xdead              // '\xad\xde'
         x1 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x10 = x8 | x10
         [x19] = (x8,2)
         0x800b178 ()             // 0x800b178(0x800b000, 0x0, 0x0, 0x0)
         if !x20 jmp 0x800b1d8    // likely

    loc_0x0800b180: // orphan
         w8 = [x19 + 0x2500]      // 0xda // 218
         if !w8 jmp 0x800b210     // unlikely

    loc_0x0800b188: // orphan
         x0 = var_8h              // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x20] = (xzr,2)
         [sp, 0x10] = (xzr,2)
         [var_8h] = xzr
         0x800b19c ()             // 0x800b19c(0x178008, 0x0, 0x0, 0x0)
         w8 = 0x2508
         x21 = x19 + x8

    loc_0x0800b1a8: // orphan
         // CODE XREF from sym.shadow_entry_del @ 0x800b1c4
         x1 = var_8h              // int64_t arg2
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x2
         0x800b1b4 ()             // 0x800b1b4(0x0, 0x178008, 0x2, 0x0)
         w8 = [x19 + 0x2500]      // 0xda // 218
         if !w8 jmp 0x800b204     // unlikely

    loc_0x0800b1c0: // orphan
         0x800b1c0 ()             // 0x800b1c0(0x0, 0x0, 0x0, 0x0)
         jmp 0x800b1a8

    loc_0x0800b1dc: // orphan
         // CODE XREF from sym.shadow_entry_del @ 0x800b2e0
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg1 // "B"
         0x800b1e4 ()             // 0x800b1e4(0x800b000, 0x0, 0x0, 0x0)
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_40h]
         (x29, 2) = 3
         sp = arg_60h
         hint 0x1d
         

    loc_0x0800b204: // orphan
         // CODE XREF from sym.shadow_entry_del @ 0x800b1bc
         x1 = var_8h              // int64_t arg2
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800b20c ()             // 0x800b20c(0x0, 0x178008, 0x0, 0x0)

    loc_0x0800b210: // orphan
         // CODE XREF from sym.shadow_entry_del @ 0x800b184
         ldur x21,[x19,-0x20]     // 0xda // 218
         if !x21 jmp 0x800b2d4    // unlikely

    loc_0x0800b218: // orphan
         

    loc_0x0800b21c: // orphan
         // CODE XREF from fcn.0800b2f8 @ 0x800b2fc
         x0 = x21 + 0x90          // int64_t arg1
         0x800b220 ()             // 0x800b220(0x90, 0x0, 0x0, 0x0)
         

    loc_0x0800b228: // orphan
         // CODE XREF from fcn.0800b30c @ 0x800b310
         ldur x0,[x19,-0x20]      // 0xda // 218
         ldur x8,[x19,-0x30]      // 0xda // 218
         x9 = [x0 + 0x70]         // 0xc7 // 199
         ubfx x10,x8,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x9 + x10,lsl 3]   // 0xd1000000d0 // 897648165072
         w9 = ~w10
         if ((x9 & 3) == 0)
         b.ne 0x800b2c0           // likely

    loc_0x0800b248: // orphan
         x9 = 0x800b000
         x10 = x10 & 0x7ffffff000
         ubfx x11,x8,0x15, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x9]                // 0xd0 // 208
         x10 = x10 - x9
         x10 = x10 | 0xffffff8000000000
         x10 = [x10 + x11,lsl 3]  // 0xd2000000d1 // 901943132369
         w11 = ~w10
         if ((x11 & 3) == 0)
         b.ne 0x800b2c0           // likely

    loc_0x0800b270: // orphan
         x10 = x10 & 0x7ffffff000
         ubfx x8,x8,0xc, 9        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x10 - x9
         x9 = x9 | 0xffffff8000000000
         x21 = x9 + x8,lsl 3
         b.eq 0x800b2c0           // unlikely

    loc_0x0800b288: // orphan
         x1 = [x21]               // 0xdc // 220 // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [var_0h] = x1
         w8 = (byte) [x19 + 0x14] // 0xda // 218
         x2 = x8 << 0x36          // int64_t arg3
         sym.shadow_pte_matches () // "(" // sym.shadow_pte_matches(0x0, 0xdead000000000100, 0x40000000000000)
         w8 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur x0,[x19,-0x20]      // 0xda // 218
         tbz w8,0,0x800b2c0       // likely

    loc_0x0800b2ac: // orphan
         x8 = [x21]               // 0xdc // 220
         ldur x1,[x19,-0x30]      // 0xda // 218 // int64_t arg2
         x2 = x8 & 0xffbfffffffffffff // int64_t arg3
         sym.shadow_write_user_pte () // sym.shadow_write_user_pte(0x0, -1, 0xdead000000000100, 0x0)
         ldur x0,[x19,-0x20]      // 0xda // 218

    loc_0x0800b2c0: // orphan
         // CODE XREFS from sym.shadow_entry_del @ 0x800b244, 0x800b26c, 0x800b284, 0x800b2a8
         

    loc_0x0800b2c4: // orphan
         // CODE XREF from fcn.0800b31c @ 0x800b324
         x0 = x0 + 0x90           // int64_t arg1
         0x800b2c8 ()             // 0x800b2c8(0x90, 0x0, 0x0, 0x0)
         ldur x0,[x19,-0x20]      // 0xda // 218 // int64_t arg1
         0x800b2d0 ()             // 0x800b2d0(-1, 0x0, 0x0, 0x0)

    loc_0x0800b2d4: // orphan
         // CODE XREF from sym.shadow_entry_del @ 0x800b214
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800b2d8 ()             // 0x800b2d8(0x0, 0x0, 0x0, 0x0)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800b1dc

    loc_0x0800b2e4: // orphan
         // CODE XREFS from sym.shadow_entry_del @ 0x800b140, 0x800b14c
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800b2e8 ()             // 0x800b2e8(0x0, 0x0, 0x0, 0x0)
         jmp 0x800b158

}

/* ===== 0x0801de9c ===== */
int sym.brk_bp_add (int esi, int edx) {
    loc_0x801de9c:
        hint 0x19
        sp = sp - 0x70
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x28,2)
        [sp, 0x30] = (x26,2)
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_10h
        x8 = 0x801d000
        w8 = (byte) [x8] // 0xcf // 207
        if (w8 == 1)
        b.ne 0x801df9c // likely
            
    loc_0x801df9c:
        w24 = ~0x5
        jmp 0x801dfa8
         // do {
    loc_0x801dfa8:
        // CODE XREFS from sym.brk_bp_add @ 0x801dfa0, 0x801dfd4, 0x801e668, 0x801e75c, 0x801ea08
        w0 = w24      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_70h
        hint 0x1d
        0x0801dfcc
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801ded0
    loc_0x801ded8:
        w0 = [x20 + 8] // 0xdb // 219
        if (w0 == 1)
        b.lt 0x801dfa4 // unlikely
            
    loc_0x801dfa4:
        w24 = ~0x15
    loc_0x0801dee4: // orphan
             x8 = [x20 + 0x10]        // 0xdb // 219
             if !x8 jmp 0x801dfa4     // unlikely

    loc_0x0801deec: // orphan
         w9 = [x20]               // 0xdb // 219
         if (w9 == 1)
         b.ne 0x801dfa4           // likely

    loc_0x0801def8: // orphan
         w9 = [x20 + 4]           // 0xdb // 219
         if w9 jmp 0x801dfa4      // likely

    loc_0x0801df00: // orphan
         w9 = [x20 + 0x18]        // 0xdb // 219
         if (w9 == 0x10)
         b.hi 0x801dfa4           // unlikely

    loc_0x0801df0c: // orphan
         w9 = [x20 + 0xe0]        // 0xdb // 219
         if (w9 == 0x10)
         b.hi 0x801dfa4           // likely

    loc_0x0801df18: // orphan
         x9 = x8 << 8
         x19 = x8 & x9,asr 8
         if ((x19 & 3) == 0)
         b.ne 0x801dfa4           // likely

    loc_0x0801df28: // orphan
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x80                // '\x80'
         x8 = [x8]                // 0xcf // 207
         if ((x8 & 0x400000) == 0)
         w8 = ~0xfff              // '\xff\x0f'
         csel x8,x9,x8, eq
         if (x19 == x8)
         b.hs 0x801dfa4           // unlikely

    loc_0x0801df48: // orphan
         w8 = [x20 + 0xc]         // 0xdb // 219
         w9 = 0xd15               // '\x15\r'
         w24 = ~0x15
         if (w8 == 0)
         csel w22,w9,w8, eq
         w8 = w22 >> 0x10
         if w8 jmp 0x801dfa8      // likely

    loc_0x0801df64: // orphan
         w8 = w22 & 0xfffffffc
         if (w8 == 4)
         b.eq 0x801dfa8           // unlikely

    loc_0x0801df70: // orphan
         0x801df70 ()             // 0x801df70(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x801dfd0     // likely

    loc_0x0801df78: // orphan
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801df7c ()             // 0x801df7c(0x0, 0x0, 0x0, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801df88 ()             // 0x801df88(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x801dfd8     // likely

    loc_0x0801df90: // orphan
         0x801df90 ()             // 0x801df90(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801dfdc

    loc_0x0801dfd0: // orphan
         w24 = ~0x2
         jmp 0x801dfa8

    loc_0x0801dfd8: // orphan
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801dfdc: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x801df98
         0x801dfdc ()             // 0x801dfdc(0x0, 0x0, 0x0, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801dfe4 ()             // 0x801dfe4(0x8033000, 0x0, 0x0, 0x0)
         if !x21 jmp 0x801dfa8    // likely

    loc_0x0801dfec: // orphan
         x0 = 0x801d000
         x0 = x0 + 0              // int64_t arg1 // "//"
         x24 = x19 & 0xfffffffffffff000
         0x801dff8 ()             // 0x801dff8(0x801d000, 0x0, 0x0, 0x0)
         x26 = 0x801d000
         // XREFS(71)
         x26 = x26 + 0            // "//"
         x28 = [x26]              // 0xe1 // 225
         if (x28 == x26)
         b.eq 0x801e02c           // unlikely

    loc_0x0801e010: // orphan
         x23 = x28                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801e014: // orphan
         x8 = [x23 + 0x18]        // 0xde // 222
         if (x8 == x21)
         b.eq 0x801e030           // unlikely

    loc_0x0801e020: // orphan
         x23 = [x23]              // 0xde // 222
         if (x23 == x26)
         b.ne 0x801e014           // likely

    loc_0x0801e02c: // orphan
         x23 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801e030: // orphan
         x9 = 0x801e000
         if x23 jmp 0x801e040     // likely

    loc_0x0801e038: // orphan
         w8 = [x9]                // 0xd0 // 208
         if w8 jmp 0x801e324      // likely

    loc_0x0801e040: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x801e390
         if !x23 jmp 0x801e394    // unlikely

    loc_0x0801e044: // orphan
         w8 = [x9]                // 0xd0 // 208
         if w8 jmp 0x801e5f4      // likely

    loc_0x0801e04c: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x801e618
         w2 = [x23 + 0x7a8]       // 0xde // 222
         if (w2 == 8)
         b.ge 0x801e61c           // likely

    loc_0x0801e058: // orphan
         x26 = [x23 + 0x798]      // 0xde // 222
         x28 = x23 + 0x798
         [var_8h] = x28
         if (x26 == x28)
         b.eq 0x801e104           // unlikely

    loc_0x0801e06c: // orphan
         ubfx w25,w19,0xc, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801e084

    loc_0x0801e078: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x801e0c4
         x26 = [x26]              // 0xe1 // 225
         if (x26 == x28)
         b.eq 0x801e0c8           // unlikely

    loc_0x0801e084: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x801e074
         x4 = [x26 + 0x18]        // 0xe1 // 225
         if (x4 == x19)
         b.eq 0x801e730           // likely

    loc_0x0801e090: // orphan
         x8 = x4 & 0xfffffffffffff000
         if (x8 == x24)
         csel x27,x26,x27, eq
         b.eq 0x801e078           // likely

    loc_0x0801e0a0: // orphan
         w8 = [x26 + 0x28]        // 0xe1 // 225
         if (w8 == w25)
         b.ne 0x801e078           // unlikely

    loc_0x0801e0ac: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e0c0 ()             // 0x801e0c0(0x801e000, 0x122, 0x0, 0x0)
         jmp 0x801e078

    loc_0x0801e0c8: // orphan
         if (x27 == 0)
         cset w26,ne
         if !x27 jmp 0x801e10c    // likely

    loc_0x0801e0d4: // orphan
         x8 = 0x801e000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x801e10c     // unlikely

    loc_0x0801e0e0: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x3 = [x27 + 0x18]        // 0xe2 // 226
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         w4 = [x27 + 0x28]        // 0xe2 // 226
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e0fc ()             // 0x801e0fc(0x801e000, 0x122, 0x0, 0x0)
         jmp 0x801e10c

    loc_0x0801e104: // orphan
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801e10c: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x801e100
         w0 = 0x2578              // 'x%'
         w1 = 0xdc0               // '\xc0\r'
         0x801e114 ()             // 0x801e114(0x2578, 0xdc0, 0x0, 0x0)
         if !x0 jmp 0x801e5c8     // unlikely

    loc_0x0801e11c: // orphan
         w8 = [x20 + 0x18]        // 0xdb // 219
         x25 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x10] = wzr
         [x0 + 0x18] = x19
         bic w9,w8,w8, asr 31     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x10
         [x0 + 0x20] = w22
         if (w9 == 0x10)
         csel w9,w9,w8, lt
         [x0 + 0x80] = w9
         if !w9 jmp 0x801e18c     // likely

    loc_0x0801e148: // orphan
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x25 + 0xc8
         x11 = x20 + 0x60

    loc_0x0801e154: // orphan
         if (x9 == 0x10)
         b.eq 0x801eb24           // unlikely

    loc_0x0801e15c: // orphan
         x12 = x9 << 2
         x14 = x9 << 3
         x15 = [x25 + 0x80]       // 0xe0 // 224
         x9 = x9 + 1
         x13 = x20 + x12
         x12 = x25 + x12
         x16 = [x11 + x14]        // 0xd5000000d2 // 914828034258
         w13 = [x13 + 0x1c]       // 0xd4 // 212
         if (x9 == x15)
         [x12 + 0x84] = w13       // "~"
         [x10 + x14] = x16
         b.lt 0x801e154           // unlikely

    loc_0x0801e18c: // orphan
         w9 = [x20 + 0xe0]        // 0xdb // 219
         bic w9,w9,w9, asr 31     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 0x10)
         csel w8,w9,w8, lt
         [x25 + 0x148] = w8
         if !w8 jmp 0x801e1dc     // likely

    loc_0x0801e1a4: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801e1a8: // orphan
         if (x8 == 0x10)
         b.eq 0x801eb24           // unlikely

    loc_0x0801e1b0: // orphan
         x9 = x8 << 2
         x11 = [x25 + 0x148]      // 0xe0 // 224
         x8 = x8 + 1
         x10 = x20 + x9
         x9 = x25 + x9
         if (x8 == x11)
         w12 = [x10 + 0xe4]       // 0xd1 // 209
         w10 = [x10 + 0x124]      // 0xd1 // 209
         [x9 + 0x14c] = w12
         [x9 + 0x18c] = w10
         b.lt 0x801e1a8           // unlikely

    loc_0x0801e1dc: // orphan
         [x25 + 0x2570] = x23
         if !w26 jmp 0x801e268    // likely

    loc_0x0801e1e4: // orphan
         x8 = [x27 + 0x38]        // 0xe2 // 226
         x26 = x25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x25 + 0x38] = x8
         x8 = [x27 + 0x40]        // 0xe2 // 226
         [x25 + 0x40] = x8
         x8 = [x27 + 0x48]        // 0xe2 // 226
         [x25 + 0x48] = x8
         w8 = [x27 + 0x28]        // 0xe2 // 226
         [x25 + 0x28] = w8
         x8 = [x27 + 0x30]        // 0xe2 // 226
         [x26 + 0x30]! = x8
         x8 = [x27 + 0x58]        // 0xe2 // 226
         [x26 + 0x28] = x8
         x8 = [x27 + 0x50]        // 0xe2 // 226
         [x26 + 0x20] = x8
         (x9, 2) = 3
         (x10, 2) = 3
         [x26, 0x40] = (x9,2)
         [x26, 0x30] = (x10,2)
         sym.mmap_read_lock ()    // sym.mmap_read_lock(0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x801e240 ()             // 0x801e240(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x801e25c     // likely

    loc_0x0801e248: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x24 == x8)
         b.lo 0x801e25c           // likely

    loc_0x0801e254: // orphan
         w8 = (byte) [x0 + 0x20]  // 0xc7 // 199
         tbnz w8,2,0x801e66c      // unlikely

    loc_0x0801e25c: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // "," // sym.mmap_read_unlock_1(0x0, 0x0)
         jmp 0x801e314

    loc_0x0801e268: // orphan
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e27c ()             // 0x801e27c(0xcc0, 0x0, 0x0, 0x0)
         [x25 + 0x38] = x0
         if !x0 jmp 0x801e5e4     // unlikely

    loc_0x0801e288: // orphan
         x8 = x0 << 6
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0xff00
         jmp 0x801e2a0

    loc_0x0801e2a0: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x801e294
         x8 = x8 & 0xfffffffffff000
         x8 = x9 | x8
         [x25 + 0x40] = x8
         if !x8 jmp 0x801e5d8     // likely

    loc_0x0801e2b0: // orphan
         x8 = 0x801e000
         x9 = xzr | 0xfffffffe00000000
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x8 = [x8]                // 0xcf // 207
         x8 = x8 >> 6
         x8 = x8 & 0x3ffffffffffffc0
         x8 = x8 - x9
         x8 = x26 + x8
         x8 = x8 << 6
         [x25 + 0x48] = x8
         sym.mmap_read_lock ()    // sym.mmap_read_lock(0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x801e2e4 ()             // 0x801e2e4(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x801e300     // likely

    loc_0x0801e2ec: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x24 == x8)
         b.lo 0x801e300           // likely

    loc_0x0801e2f8: // orphan
         w8 = (byte) [x0 + 0x20]  // 0xc7 // 199
         tbnz w8,2,0x801e894      // unlikely

    loc_0x0801e300: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e310 ()             // 0x801e310(0x0, 0x0, 0x0, 0x0)

    loc_0x0801e314: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x801e264
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801e318 ()             // 0x801e318(0x0, 0x0, 0x0, 0x0)
         w24 = ~0x15
         jmp 0x801e748

    loc_0x0801e324: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e33c ()             // 0x801e33c(0x801e000, 0x122, 0x0, 0x0)
         x27 = [x26]              // 0xe1 // 225
         if (x27 == x26)
         b.eq 0x801e394           // unlikely

    loc_0x0801e34c: // orphan
         x8 = [x27 + 0x798]       // 0xe2 // 226
         x9 = x27 + 0x798
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x8 == x9)
         b.eq 0x801e368           // likely

    loc_0x0801e360: // orphan
         if !x8 jmp 0x801e368     // likely

    loc_0x0801e364: // orphan
         x3 = [x8 + 0x18]         // 0xcf // 207

    loc_0x0801e368: // orphan
         w1 = [x27 + 0x10]        // 0xe2 // 226
         x2 = [x27 + 0x18]        // 0xe2 // 226
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         w4 = [x27 + 0x7a8]       // 0xe2 // 226
         0x801e37c ()             // 0x801e37c(0x801e000, 0x0, 0x0, 0x0)
         x27 = [x27]              // 0xe2 // 226
         x9 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x27 == x26)
         b.ne 0x801e34c           // likely

    loc_0x0801e390: // orphan
         jmp 0x801e040

    loc_0x0801e394: // orphan
         x8 = 0x801e000
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x7f8
         x0 = [x8]                // 0xcf // 207 // int64_t arg1
         0x801e3a4 ()             // 0x801e3a4(0xf940035c9100035a, 0xdc0, 0x7f8, 0x0)
         if !x0 jmp 0x801e5c8     // unlikely

    loc_0x0801e3ac: // orphan
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x0 + 0x7ac
         x0 = x0 + 0x7c0          // int64_t arg1
         x1 = 0x801e000
         x1 = x1 + 0              // int64_t arg_70h
         x2 = 0x801e000
         x2 = x2 + 0
         [x8] = xzr
         0x801e3cc ()             // 0x801e3cc(0x7c0, 0x801e000, 0x801e000, 0x0)
         x26 = x23 + 0x798
         [x23 + 0x7b4] = wzr
         w8 = 0x1
         [x23 + 0x7b8] = wzr
         x11 = 0x801e000
         x10 = 0x801e000
         [x23 + 0x7bc] = wzr
         w0 = 0x2578              // 'x%'
         w1 = 0xdc0               // '\xc0\r'
         [x23 + 0x7d8] = xzr
         [x23 + 0x7e8] = xzr
         [x23 + 0x798] = x26
         [x23 + 0x7a0] = x26
         w9 = [x20 + 8]           // 0xdb // 219
         [x23 + 0x7a8] = wzr
         x11 = [x11]              // 0xd2 // 210
         [x23 + 0x7e0] = (byte) w8
         x10 = [x10]              // 0xd1 // 209
         [x23 + 0x10] = w9
         x9 = 0x80                // '\x80'
         [x23 + 0x18] = x21
         x8 = [x21 + 0x70]        // 0xdc // 220
         sbfx x8,x8,0, 0x38       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x8 + x9
         x8 = x8 - x10
         x12 = x9 >> 0x26
         x9 = x9 + x11
         if (x12 == 0)
         csel x8,x9,x8, eq
         [x23 + 0x80] = x8
         0x801e448 ()             // 0x801e448(0x2578, 0xdc0, 0x801e000, 0x0)
         if !x0 jmp 0x801e5d0     // unlikely

    loc_0x0801e450: // orphan
         w8 = [x20 + 0x18]        // 0xdb // 219
         x25 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x10] = wzr
         [x0 + 0x18] = x19
         bic w9,w8,w8, asr 31     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x10
         [x0 + 0x20] = w22
         if (w9 == 0x10)
         csel w9,w9,w8, lt
         [x0 + 0x80] = w9
         if !w9 jmp 0x801e4c0     // likely

    loc_0x0801e47c: // orphan
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x25 + 0xc8
         x11 = x20 + 0x60

    loc_0x0801e488: // orphan
         if (x9 == 0x10)
         b.eq 0x801eb24           // unlikely

    loc_0x0801e490: // orphan
         x12 = x9 << 2
         x14 = x9 << 3
         x15 = [x25 + 0x80]       // 0xe0 // 224
         x9 = x9 + 1
         x13 = x20 + x12
         x12 = x25 + x12
         x16 = [x11 + x14]        // 0xd5000000d2 // 914828034258
         w13 = [x13 + 0x1c]       // 0xd4 // 212
         if (x9 == x15)
         [x12 + 0x84] = w13
         [x10 + x14] = x16
         b.lt 0x801e488           // unlikely

    loc_0x0801e4c0: // orphan
         w9 = [x20 + 0xe0]        // 0xdb // 219
         bic w9,w9,w9, asr 31     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 0x10)
         csel w8,w9,w8, lt
         [x25 + 0x148] = w8
         if !w8 jmp 0x801e510     // likely

    loc_0x0801e4d8: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801e4dc: // orphan
         if (x8 == 0x10)
         b.eq 0x801eb24           // unlikely

    loc_0x0801e4e4: // orphan
         x9 = x8 << 2
         x11 = [x25 + 0x148]      // 0xe0 // 224
         x8 = x8 + 1
         x10 = x20 + x9
         x9 = x25 + x9
         if (x8 == x11)
         w12 = [x10 + 0xe4]       // 0xd1 // 209
         w10 = [x10 + 0x124]      // 0xd1 // 209
         [x9 + 0x14c] = w12
         [x9 + 0x18c] = w10
         b.lt 0x801e4dc           // unlikely

    loc_0x0801e510: // orphan
         [x25 + 0x2570] = x23
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e528 ()             // 0x801e528(0xcc0, 0x0, 0x0, 0x0)
         [x25 + 0x38] = x0
         if !x0 jmp 0x801e648     // unlikely

    loc_0x0801e534: // orphan
         x8 = x0 << 6
         x27 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0xff00
         jmp 0x801e54c

    loc_0x0801e54c: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x801e540
         x8 = x8 & 0xfffffffffff000
         x8 = x9 | x8
         [x25 + 0x40] = x8
         if !x8 jmp 0x801e63c     // likely

    loc_0x0801e55c: // orphan
         x8 = 0x801e000
         x9 = xzr | 0xfffffffe00000000
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x8 = [x8]                // 0xcf // 207
         x8 = x8 >> 6
         x8 = x8 & 0x3ffffffffffffc0
         x8 = x8 - x9
         x8 = x27 + x8
         x8 = x8 << 6
         [x25 + 0x48] = x8
         sym.mmap_read_lock ()    // sym.mmap_read_lock(0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x801e590 ()             // 0x801e590(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x801e5ac     // likely

    loc_0x0801e598: // orphan
         x8 = [x0]                // 0xc7 // 199
         if (x24 == x8)
         b.lo 0x801e5ac           // likely

    loc_0x0801e5a4: // orphan
         w8 = (byte) [x0 + 0x20]  // 0xc7 // 199
         tbnz w8,2,0x801e760      // unlikely

    loc_0x0801e5ac: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e5bc ()             // 0x801e5bc(0x0, 0x0, 0x0, 0x0)
         w24 = ~0x15
         jmp 0x801e64c

    loc_0x0801e5c8: // orphan
         w24 = ~0xb
         jmp 0x801e748

    loc_0x0801e5d0: // orphan
         w24 = ~0xb
         jmp 0x801e654

    loc_0x0801e5d8: // orphan
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e5e0 ()             // 0x801e5e0(0x0, 0x0, 0x0, 0x0)

    loc_0x0801e5e4: // orphan
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801e5e8 ()             // 0x801e5e8(0x0, 0x0, 0x0, 0x0)
         w24 = ~0xb
         jmp 0x801e748

    loc_0x0801e5f4: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x3 = [x23 + 0x18]        // 0xde // 222
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         w4 = [x23 + 0x7a8]       // 0xde // 222
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x6 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e614 ()             // 0x801e614(0x801e000, 0x122, 0x0, 0x3dc0014117ffe575)
         jmp 0x801e04c

    loc_0x0801e61c: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         w3 = 0x8
         x4 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e630 ()             // 0x801e630(0x801e000, 0x122, 0x0, 0x8)
         w24 = ~0x1b
         jmp 0x801e748

    loc_0x0801e63c: // orphan
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e644 ()             // 0x801e644(0x0, 0x0, 0x0, 0x0)

    loc_0x0801e648: // orphan
         w24 = ~0xb

    loc_0x0801e64c: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x801e5c4, 0x801e790
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801e650 ()             // 0x801e650(0x0, 0x0, 0x0, 0x0)

    loc_0x0801e654: // orphan
         // CODE XREFS from sym.brk_bp_add @ 0x801e5d4, 0x801e890
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_destroy_entry () // sym.brk_destroy_entry(0x8033000, 0x0)
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         0x801e664 ()             // 0x801e664(0x801e000, 0x0, 0x0, 0x0)
         jmp 0x801dfa8

    loc_0x0801e66c: // orphan
         x8 = [x21 + 0x70]        // 0xdc // 220
         ubfx x9,x19,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = 0x801e000
         ubfx x10,x19,0x15, 9     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         x8 = [x24]               // 0xdf // 223
         x9 = x9 & 0x7ffffff000
         x9 = x9 - x8
         x9 = x9 | 0xffffff8000000000
         x9 = [x9 + x10,lsl 3]    // 0xd1000000d0 // 897648165072
         w10 = ~w9
         if ((x10 & 3) == 0)
         b.ne 0x801e718           // likely

    loc_0x0801e6a0: // orphan
         x9 = x9 & 0x7ffffff000
         x8 = x9 - x8
         ubfx x9,x19,0xc, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 | 0xffffff8000000000
         x8 = x8 + x9,lsl 3
         b.eq 0x801e718           // unlikely

    loc_0x0801e6b8: // orphan
         x9 = [x8]                // 0xcf // 207
         if !x9 jmp 0x801e718     // unlikely

    loc_0x0801e6c0: // orphan
         x8 = [x8]                // 0xcf // 207
         x9 = 0x1
         x9 = 0x400
         if ((x8 & x9) == 0)
         [x26] = x8
         b.eq 0x801e718           // unlikely

    loc_0x0801e6d8: // orphan
         ubfx x0,x8,0xc, 0x24     // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.pfn_valid_1 ()       // sym.pfn_valid_1(0x0)
         if !w0 jmp 0x801e718     // likely

    loc_0x0801e6e4: // orphan
         x9 = [x26]               // 0xe1 // 225
         x8 = [x24]               // 0xdf // 223
         w10 = wzr | 0x3fffffe
         x9 = x9 & 0x7ffffff000
         x9 = x9 - x8
         x24 = x9 | 0xffffff8000000000
         if (x10 == x24)
         b.ne 0x801e718           // likely

    loc_0x0801e704: // orphan
         x9 = x9 & 0x7fffffffff
         x8 = x9 + x8
         x0 = x8 >> 0xc           // int64_t arg1
         0x801e710 ()             // 0x801e710(0x0, 0x0, 0x0, 0x0)
         if w0 jmp 0x801eac0      // unlikely

    loc_0x0801e718: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801e724 ()             // 0x801e724(0x0, 0x0, 0x0, 0x0)
         w24 = ~0xd
         jmp 0x801e748

    loc_0x0801e730: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e740 ()             // 0x801e740(0x801e000, 0x122, 0x0, 0x0)
         w24 = ~0x10

    loc_0x0801e748: // orphan
         // XREFS: CODE 0x0801e320  CODE 0x0801e5cc  CODE 0x0801e5f0  
         // XREFS: CODE 0x0801e638  CODE 0x0801e72c  CODE 0x0801ea44  
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         0x801e750 ()             // 0x801e750(0x801e000, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801e758 ()             // 0x801e758(0x0, 0x0, 0x0, 0x0)
         jmp 0x801dfa8

    loc_0x0801e760: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x3 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg4
         sym.brk_build_clone ()   // sym.brk_build_clone(0x0, 0x0, 0x8033000, 0x0, -1)
         if !w0 jmp 0x801e794     // likely

    loc_0x0801e778: // orphan
         w24 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x0 = [x25 + 0x38]        // 0xe0 // 224 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e78c ()             // 0x801e78c(0xcc0, 0x0, 0x0, 0x0)
         jmp 0x801e64c

    loc_0x0801e794: // orphan
         w8 = 0xd420              // ' \xd4'
         x9 = [x25 + 0x40]        // 0xe0 // 224
         x10 = x19 & 0xfff
         w8 = w8 | w22,lsl 5
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x9 + x10] = w8
         dsb ishst
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         (x0, 2) = 3              // int64_t arg2
         sym.brk_cache_maintenance () // sym.brk_cache_maintenance(0xcc0)
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.list_add_tail_2 ()   // sym.list_add_tail_2(0x0, 0x0)
         x8 = 0x801e000
         w21 = 0x1
         w8 = [x8]                // 0xcf // 207
         [x23 + 0x7a8] = w21
         if w8 jmp 0x801ea48      // likely

    loc_0x0801e7dc: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x801ea68
         x24 = 0x801e000
         x24 = x24 + 0
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801e7e8 ()             // 0x801e7e8(0x801e000, 0x0, 0x0, 0x0)
         [x23 + 0x7f0] = (byte) w21
         x21 = 0x801e000
         x21 = x21 + 0
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.list_add_tail_2 ()   // sym.list_add_tail_2(0x8033000, 0x801e000)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x801e810 ()             // 0x801e810(0x801e000, 0x801e000, 0x0, 0x0)
         sym.brk_install_debug_hook () // sym.brk_install_debug_hook(0x801e000)
         w24 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x801e82c      // likely

    loc_0x0801e820: // orphan
         sym.brk_install_switch_hook () // sym.brk_install_switch_hook(0x0)
         w24 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x801ea6c     // likely

    loc_0x0801e82c: // orphan
         x19 = 0x801e000
         x19 = x19 + 0
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801e838 ()             // 0x801e838(0x801e000, 0x0, 0x0, 0x0)
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x23 + 0x7f0] = (byte) wzr
         sym.list_del ()          // sym.list_del(0x8033000)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x801e854 ()             // 0x801e854(0x801e000, 0x801e000, 0x0, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_quiesce_entry () // sym.brk_quiesce_entry(0x8033000, 0x801e000)
         if (x28 == x21)
         b.ne 0x801e654           // unlikely

    loc_0x0801e868: // orphan
         sym.brk_uninstall_switch_hook ()
         x19 = 0x801e000
         w8 = (byte) [x19]        // 0xda // 218
         if (w8 == 1)
         b.ne 0x801e88c           // likely

    loc_0x0801e87c: // orphan
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         0x801e884 ()             // 0x801e884(0x801e000, 0x0, 0x0, 0x0)
         [x19] = (byte) wzr

    loc_0x0801e88c: // orphan
         sym.brk_uninstall_debug_hook () // sym.brk_uninstall_debug_hook(0x0)
         jmp 0x801e654

    loc_0x0801e894: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x3 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg4
         sym.brk_build_clone ()   // sym.brk_build_clone(0x0, 0x0, 0x8033000, 0x0, -1)
         if w0 jmp 0x801ea0c      // unlikely

    loc_0x0801e8ac: // orphan
         w8 = 0xd420              // ' \xd4'
         x9 = [x25 + 0x40]        // 0xe0 // 224
         x10 = x19 & 0xfff
         w8 = w8 | w22,lsl 5
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x9 + x10] = w8
         dsb ishst
         sym.brk_flush_tlb_group () // sym.brk_flush_tlb_group(0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         (x0, 2) = 3              // int64_t arg2
         sym.brk_cache_maintenance () // sym.brk_cache_maintenance(0xcc0)

    loc_0x0801e8dc: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x801eb20
         x24 = x23 + 0x7ac
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801e8e4 ()             // 0x801e8e4(0x80337ac, 0x0, 0x0, 0x0)
         x1 = [var_8h]            // 0x4 // int64_t arg2
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.list_add_tail_2 ()   // sym.list_add_tail_2(0x0, 0x8033798)
         w8 = [x23 + 0x7a8]       // 0xde // 222
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         w8 = w8 + 1
         [x23 + 0x7a8] = w8
         0x801e90c ()             // 0x801e90c(0x80337ac, 0x80337ac, 0x0, 0x0)
         x8 = 0x801e000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x801e93c     // unlikely

    loc_0x0801e91c: // orphan
         (w4, 2) = 3
         w1 = [x20 + 8]           // 0xdb // 219
         w5 = [x23 + 0x7a8]       // 0xde // 222
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w6 = 0x8
         0x801e938 ()             // 0x801e938(0x801e000, 0x122, 0x0, 0x0)

    loc_0x0801e93c: // orphan
         w8 = (byte) [x23 + 0x7e0] // 0xde // 222
         if !w8 jmp 0x801e954     // unlikely

    loc_0x0801e944: // orphan
         w8 = (byte) [x23 + 0x7f0] // 0xde // 222
         if !w8 jmp 0x801e954     // likely

    loc_0x0801e94c: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_resume_clone ()  // sym.brk_resume_clone(0x8033000)

    loc_0x0801e954: // orphan
         w8 = [x23 + 0x7a8]       // 0xde // 222
         if (w8 == 2)
         b.lt 0x801e9c0           // unlikely

    loc_0x0801e960: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_lock ()    // sym.mmap_read_lock(0x0)
         x1 = [x25 + 0x18]        // 0xe0 // 224 // int64_t arg2
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_sync_clone_tree () // sym.brk_sync_clone_tree(0x8033000, 0x0, 0x0)
         w24 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // x23
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x8 = 0x801e000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x801e9a4     // unlikely

    loc_0x0801e98c: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e9a0 ()             // 0x801e9a0(0x801e000, 0x122, 0x0, 0x0)

    loc_0x0801e9a4: // orphan
         if !w24 jmp 0x801e9c0    // likely

    loc_0x0801e9a8: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801e9bc ()             // 0x801e9bc(0x801e000, 0x122, 0x0, 0x0)

    loc_0x0801e9c0: // orphan
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         0x801e9c8 ()             // 0x801e9c8(0x801e000, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801e9d0 ()             // 0x801e9d0(0x0, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         w4 = [x25 + 0x24]        // 0xe0 // 224
         x0 = 0x801e000
         x0 = x0 + 0

    loc_0x0801e9e4: // orphan
         // CODE XREF from sym.brk_bp_add @ 0x801eabc
         w5 = [x25 + 0x80]        // 0xe0 // 224
         w6 = [x25 + 0x148]       // 0xe0 // 224
         w7 = [x23 + 0x7a8]       // 0xde // 222
         w8 = 0x8
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp] = w8
         0x801ea00 ()             // 0x801ea00(0x0, 0x0, 0x0, 0x0)
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801dfa8

    loc_0x0801ea0c: // orphan
         w24 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         x0 = [x25 + 0x38]        // 0xe0 // 224 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801ea20 ()             // 0x801ea20(0xcc0, 0x0, 0x0, 0x0)
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x801ea28 ()             // 0x801ea28(0x0, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801ea40 ()             // 0x801ea40(0x801e000, 0x122, 0x0, 0x0)
         jmp 0x801e748

    loc_0x0801ea48: // orphan
         w1 = [x20 + 8]           // 0xdb // 219
         w4 = [x25 + 0x28]        // 0xe0 // 224
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w5 = 0x1
         0x801ea64 ()             // 0x801ea64(0x801e000, 0x122, 0x0, 0x0)
         jmp 0x801e7dc

    loc_0x0801ea6c: // orphan
         sym.brk_install_mm_fault_kprobe () // sym.brk_install_mm_fault_kprobe(0x0)
         w21 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x801ea88     // likely

    loc_0x0801ea78: // orphan
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         w1 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801ea84 ()             // 0x801ea84(0x801e000, 0x0, 0x0, 0x0)

    loc_0x0801ea88: // orphan
         if (w21 == 0)
         x9 = 0x801e000
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         cset w8,ne
         [x9] = (byte) w8
         sym.brk_resume_clone ()  // sym.brk_resume_clone(0x8033000)
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         0x801eaa8 ()             // 0x801eaa8(0x801e000, 0x0, 0x0, 0x0)
         w1 = [x20 + 8]           // 0xdb // 219
         w4 = [x25 + 0x24]        // 0xe0 // 224
         x0 = 0x801e000
         x0 = x0 + 0
         jmp 0x801e9e4

    loc_0x0801eac0: // orphan
         x8 = x19 & 0xfff
         w10 = 0xd420             // ' \xd4'
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w9 = [x24 + x8]          // 0xcf000000df // 889058230495
         x11 = [x25 + 0x40]       // 0xe0 // 224
         w10 = w10 | w22,lsl 5
         [x25 + 0x24] = w9
         [x11 + x8] = w10
         dsb ishst
         sym.brk_flush_tlb_group () // sym.brk_flush_tlb_group(0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.mmap_read_unlock_1 () // sym.mmap_read_unlock_1(0x0, 0x0)
         (x0, 2) = 3              // int64_t arg2
         sym.brk_cache_maintenance () // sym.brk_cache_maintenance(0xcc0)
         x8 = 0x801e000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x801e8dc     // unlikely

    loc_0x0801eb04: // orphan
         (w5, 2) = 3
         w1 = [x20 + 8]           // 0xdb // 219
         x3 = [x27 + 0x18]        // 0xe2 // 226
         x0 = 0x801e000
         x0 = x0 + 0              // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801eb1c ()             // 0x801eb1c(0x801e000, 0x122, 0x0, 0x0)
         jmp 0x801e8dc

    loc_0x0801eb24: // orphan
         brk 0x5512

}

/* ===== 0x08021688 ===== */
int sym.brk_bp_del (int esi, int edx) {
    loc_0x8021688:
        hint 0x19
        sp = sp - 0xe0
        [sp, 0x90] = (x29,2)
        [var_a0h] = x25
        [sp, 0xb0] = (x24,2)
        [sp, 0xc0] = (x22,2)
        [sp, 0xd0] = (x20,2)
        x29 = var_90h
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8021000
        x0 = x0 + 0   // int64_t arg1
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x80216b8 ()  // 0x80216b8(0x8021000, 0x0, 0x0, 0x0)
        x0 = 0x8021000
        x0 = x0 + 0   // int64_t arg1
        0x80216c4 ()  // 0x80216c4(0x8021000, 0x0, 0x0, 0x0)
        x8 = 0x8021000
        x8 = x8 + 0
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = [x8]    // 0xcf // 207
        if (x21 == x8)
        b.eq 0x8021778 // unlikely
            
    loc_0x8021778:
        x0 = 0x8021000
        x0 = x0 + 0   // int64_t arg1
        0x8021780 ()  // 0x8021780(0x8021000, 0x0, 0x0, 0x0)
         // do {
    loc_0x8021784:
        x0 = 0x8021000
        x0 = x0 + 0   // int64_t arg1
        0x802178c ()  // " " // 0x802178c(0x8021000, 0x0, 0x0, 0x0)
        w0 = ~0x1
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080216ec: // orphan
             if (x9 == x8)
             x21 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             b.eq 0x8021778           // likely

    loc_0x080216f8: // orphan
         // CODE XREF from sym.brk_bp_del @ 0x80216e8
         w10 = [x21 + 0x10]       // 0xdc // 220
         x9 = [x21]               // 0xdc // 220
         if (w10 == w19)
         b.ne 0x80216ec           // unlikely

    loc_0x08021708: // orphan
         x23 = x21 + 0x798
         x22 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08021710: // orphan
         x22 = [x22]              // 0xdd // 221
         if (x22 == x23)
         b.eq 0x80216ec           // unlikely

    loc_0x0802171c: // orphan
         x10 = [x22 + 0x18]       // 0xdd // 221
         if (x10 == x20)
         b.ne 0x8021710           // unlikely

    loc_0x08021728: // orphan
         if !x21 jmp 0x80216ec    // likely

    loc_0x0802172c: // orphan
         x9 = [x8]                // 0xcf // 207
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x9 == x8)
         b.eq 0x8021754           // unlikely

    loc_0x0802173c: // orphan
         x8 = [x8 + 8]            // 0xcf // 207
         if (x9 == x8)
         b.ne 0x8021754           // likely

    loc_0x08021748: // orphan
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         if (w8 == 1)
         cset w24,eq

    loc_0x08021754: // orphan
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         0x802175c ()             // 0x802175c(0x8021000, 0x0, 0x0, 0x0)
         if !x22 jmp 0x8021784    // likely

    loc_0x08021764: // orphan
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         if (w8 == 2)
         b.lt 0x802186c           // likely

    loc_0x08021770: // orphan
         x8 = [x23]               // 0xde // 222
         jmp 0x80217b8

    loc_0x08021794: // orphan
         // CODE XREFS from sym.brk_bp_del @ 0x8021868, 0x8021b1c
         (x20, 2) = 3
         x25 = [var_a0h]          // 0x4
         (x22, 2) = 3
         (x24, 2) = 3
         (x29, 2) = 3
         sp = arg_e0h
         hint 0x1d
         

    loc_0x080217b4: // orphan
         x8 = [x8]                // 0xcf // 207

    loc_0x080217b8: // orphan
         // CODE XREF from sym.brk_bp_del @ 0x8021774
         if (x8 == x23)
         b.eq 0x80218cc           // unlikely

    loc_0x080217c0: // orphan
         if (x8 == x22)
         b.eq 0x80217b4           // likely

    loc_0x080217c8: // orphan
         x9 = [x8 + 0x38]         // 0xcf // 207
         x10 = [x22 + 0x38]       // 0xdd // 221
         if (x9 == x10)
         b.eq 0x80217ec           // likely

    loc_0x080217d8: // orphan
         x9 = [x8 + 0x18]         // 0xcf // 207
         x10 = [x22 + 0x18]       // 0xdd // 221
         x9 = x10 ^ x9
         if (x9 == 1)
         b.hs 0x80217b4           // unlikely

    loc_0x080217ec: // orphan
         w8 = [x22 + 0x10]        // 0xdd // 221
         if (w8 == 1)
         b.ne 0x8021b20           // likely

    loc_0x080217f8: // orphan
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x802180c ()             // 0x802180c(0xcc0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8021844     // unlikely

    loc_0x08021814: // orphan
         x8 = x0 << 6
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0xff00
         jmp 0x802182c

    loc_0x0802182c: // orphan
         // CODE XREF from sym.brk_bp_del @ 0x8021820
         x8 = x8 & 0xfffffffffff000
         x24 = x9 | x8
         if x24 jmp 0x8021bcc     // unlikely

    loc_0x08021838: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8021840 ()             // 0x8021840(0x8033000, 0x0, 0x0, 0x0)

    loc_0x08021844: // orphan
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         0x802184c ()             // 0x802184c(0x8021000, 0x0, 0x0, 0x0)
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_e0h
         0x8021860 ()             // 0x8021860(0x8021000, 0x0, 0x0, 0x0)
         w0 = ~0xb
         jmp 0x8021794

    loc_0x0802186c: // orphan
         x22 = 0x8021000
         x22 = x22 + 0
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021878 ()             // 0x8021878(0x8021000, 0x0, 0x0, 0x0)
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x21 + 0x7f0] = (byte) wzr
         0x8021888 ()             // 0x8021888(0x8021000, 0x8021000, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_quiesce_entry () // sym.brk_quiesce_entry(0x0, 0x8021000)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021898 ()             // 0x8021898(0x8021000, 0x8021000, 0x0, 0x0)
         x8 = [x21 + 8]           // 0xdc // 220
         x9 = [x8]                // 0xcf // 207
         if (x9 == x21)
         x9 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x80219dc           // likely

    loc_0x080218b0: // orphan
         x10 = [x21]              // 0xdc // 220
         x11 = [x10 + 8]          // 0xd1 // 209
         if (x11 == x21)
         b.ne 0x80219dc           // likely

    loc_0x080218c0: // orphan
         [x10 + 8] = x8
         [x8] = x10
         jmp 0x80219e4

    loc_0x080218cc: // orphan
         x23 = x21 + 0x7b0
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80218d4 ()             // 0x80218d4(0x7b0, 0x0, 0x0, 0x0)
         x24 = [x22 + 0x58]       // 0xdd // 221
         if x24 jmp 0x80218fc     // likely

    loc_0x080218e0: // orphan
         w8 = [x21 + 0x60]        // 0xdc // 220
         w8 = w8 - 1
         if (w8 == 4)
         b.hs 0x8021cb0           // likely

    loc_0x080218f0: // orphan
         x8 = x21 + w8,uxtw 3
         x24 = [x8 + 0x40]        // 0xcf // 207
         if !x24 jmp 0x8021aa0    // likely

    loc_0x080218fc: // orphan
         w8 = [x22 + 0x28]        // 0xdd // 221
         if (w8 == 0x1ff)
         b.hi 0x8021aa0           // unlikely

    loc_0x08021908: // orphan
         [x29, -0x10] = (xzr,2)
         x8 = 0x8021000
         x8 = x8 + 0
         x0 = [x21 + 0x18]        // 0xdc // 220 // int64_t arg1
         x1 = [x22 + 0x18]        // 0xdd // 221 // int64_t arg2
         [var_20h] = x8
         x8 = var_20h
         x9 = var_30h
         x10 = var_38h
         x2 = x29 - 0x20          // int64_t arg3
         x3 = x29 - 0x38
         x4 = var_40h
         x5 = var_2ch
         x6 = var_28h
         x7 = var_18h
         [x29, -0x20] = (xzr,2)
         [x29, -0x30] = (xzr,2)
         [x29 = xzr
         [sp, 0x48] = (xzr,2)
         [sp, 0x38] = (xzr,2)
         [var_18h] = xzr
         [sp, 0x28] = (xzr,2)
         [sp, 8] = (x9,2)
         [sp] = x10
         sym.brk_collect_current_path () // sym.brk_collect_current_path(0x0, 0x0, 0x177fe0, 0x177fc8, -1, -1, -1, -1, -1, -1, 0x0, 0x0)
         if w0 jmp 0x8021a60      // unlikely

    loc_0x08021970: // orphan
         w8 = [var_2ch]           // 0x4
         w9 = [x21 + 0x60]        // 0xdc // 220
         if (w8 == w9)
         b.ne 0x8021a60           // likely

    loc_0x08021980: // orphan
         x0 = [var_30h]           // 0x4 // int64_t arg1
         0x8021984 ()             // 0x8021984(0x0, 0x0, 0x0, 0x0)
         x8 = [var_38h]           // 0x4
         x8 = [x8]                // 0xcf // 207
         [var_18h] = x8
         x8 = [x22 + 0x28]        // 0xdd // 221
         x9 = [var_18h]           // [0x18:4]=0 // 24
         [x24 + x8,lsl 3] = x9
         x0 = [var_30h]           // 0x4 // int64_t arg1
         0x80219a4 ()             // 0x80219a4(0x0, 0x0, 0x0, 0x0)
         x8 = 0x8021000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x8021a94     // unlikely

    loc_0x080219b4: // orphan
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         w3 = [x22 + 0x28]        // 0xdd // 221
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         x4 = [var_18h]           // [0x18:4]=0 // 24
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w5 = w8 - 1
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_e0h
         0x80219d4 ()             // "/" // 0x80219d4(0x8021000, 0x0, 0x0, 0x0)
         jmp 0x8021a94

    loc_0x080219dc: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80219e0 ()             // 0x80219e0(0x0, 0x0, 0x0, 0x0)

    loc_0x080219e4: // orphan
         // CODE XREF from sym.brk_bp_del @ 0x80218c8
         x8 = 0x100
         w10 = 0x22               // '\"'
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         x8 = 0xdead              // '\xad\xde'
         x1 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x10 = x8 | x10
         [x21] = (x8,2)
         0x8021a04 ()             // 0x8021a04(0x8021000, 0x0, 0x0, 0x0)
         if !w24 jmp 0x8021a34    // likely

    loc_0x08021a0c: // orphan
         sym.brk_uninstall_switch_hook ()
         x22 = 0x8021000
         w8 = (byte) [x22]        // 0xdd // 221
         if (w8 == 1)
         b.ne 0x8021a30           // likely

    loc_0x08021a20: // orphan
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         0x8021a28 ()             // 0x8021a28(0x8021000, 0x0, 0x0, 0x0)
         [x22] = (byte) wzr

    loc_0x08021a30: // orphan
         sym.brk_uninstall_debug_hook () // sym.brk_uninstall_debug_hook(0x0)

    loc_0x08021a34: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_destroy_entry () // sym.brk_destroy_entry(0x0, 0x0)
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         0x8021a44 ()             // 0x8021a44(0x8021000, 0x0, 0x0, 0x0)
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_e0h
         0x8021a58 ()             // "/" // 0x8021a58(0x8021000, 0x0, 0x0, 0x0)
         jmp 0x8021b18

    loc_0x08021a60: // orphan
         x8 = [x22 + 0x28]        // 0xdd // 221
         x9 = [x22 + 0x30]        // 0xdd // 221
         [x24 + x8,lsl 3] = x9
         x8 = 0x8021000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x8021a94     // unlikely

    loc_0x08021a78: // orphan
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_e0h
         w3 = w8 - 1
         0x8021a90 ()             // 0x8021a90(0x8021000, 0x0, 0x0, -1)

    loc_0x08021a94: // orphan
         // CODE XREF from sym.brk_bp_del @ 0x80219d8
         dsb ishst
         x0 = [x22 + 0x18]        // 0xdd // 221 // int64_t arg1
         sym.brk_flush_tlb_group () // sym.brk_flush_tlb_group(0x0)

    loc_0x08021aa0: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021aa4 ()             // 0x8021aa4(0x8033000, 0x0, 0x0, 0x0)
         x23 = x21 + 0x7ac
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021ab0 ()             // 0x8021ab0(0x7ac, 0x0, 0x0, 0x0)
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.list_del ()          // sym.list_del(0x0)
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w8 = w8 - 1
         [x21 + 0x7a8] = w8
         0x8021ad4 ()             // 0x8021ad4(0x7ac, 0x7ac, 0x0, 0x0)
         x0 = [x22 + 0x38]        // 0xdd // 221
         if !x0 jmp 0x8021ae8     // unlikely

    loc_0x08021ae0: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8021ae4 ()             // 0x8021ae4(0x0, 0x0, 0x0, 0x0)

    loc_0x08021ae8: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021aec ()             // 0x8021aec(0x0, 0x0, 0x0, 0x0)
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         0x8021af8 ()             // 0x8021af8(0x8021000, 0x0, 0x0, 0x0)
         w3 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = 0x8021000
         x0 = x0 + 0

    loc_0x08021b08: // orphan
         // CODE XREFS from sym.brk_bp_del @ 0x8021bc8, 0x8021cac
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_e0h
         w4 = 0x8
         0x8021b14 ()             // 0x8021b14(0x0, 0x0, 0x0, 0x0)

    loc_0x08021b18: // orphan
         // CODE XREF from sym.brk_bp_del @ 0x8021a5c
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8021794

    loc_0x08021b20: // orphan
         x8 = [x22 + 0x40]        // 0xdd // 221
         if !x8 jmp 0x8021b78     // likely

    loc_0x08021b28: // orphan
         x9 = [x22 + 0x18]        // 0xdd // 221
         w10 = [x22 + 0x24]       // 0xdd // 221
         x9 = x9 & 0xfff
         [x8 + x9] = w10
         dsb ishst
         x0 = [x22 + 0x18]        // 0xdd // 221 // int64_t arg1
         sym.brk_flush_tlb_group () // sym.brk_flush_tlb_group(0x0)
         (x0, 2) = 3              // int64_t arg2
         sym.brk_cache_maintenance () // sym.brk_cache_maintenance(0xcc0)
         x8 = 0x8021000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x8021b78     // unlikely

    loc_0x08021b58: // orphan
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         (w4, 2) = 3
         w5 = w8 - 1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_e0h
         0x8021b74 ()             // 0x8021b74(0x8021000, 0x0, 0x0, 0x0)

    loc_0x08021b78: // orphan
         x23 = x21 + 0x7ac
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021b80 ()             // 0x8021b80(0x7ac, 0x0, 0x0, 0x0)
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.list_del ()          // sym.list_del(0x0)
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w8 = w8 - 1
         [x21 + 0x7a8] = w8
         0x8021ba4 ()             // 0x8021ba4(0x7ac, 0x7ac, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021bac ()             // 0x8021bac(0x0, 0x7ac, 0x0, 0x0)
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         0x8021bb8 ()             // 0x8021bb8(0x8021000, 0x7ac, 0x0, 0x0)
         w3 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = 0x8021000
         x0 = x0 + 0
         jmp 0x8021b08

    loc_0x08021bcc: // orphan
         x1 = [x22 + 0x40]        // 0xdd // 221 // int64_t arg2
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x1000
         0x8021bd8 ()             // 0x8021bd8(0x0, 0x0, 0x1000, 0x0)
         x8 = 0x8021000
         x9 = 0x80                // '\x80'
         x25 = x21 + 0x7b0
         x8 = [x8]                // 0xcf // 207
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x22, 0x38] = (x23,2)
         x8 = !x8
         x8 = x23 - x8,lsl 6
         x8 = x9 + x8,lsl 6
         [x22 + 0x48] = x8
         0x8021c04 ()             // 0x8021c04(0x7b0, 0x0, 0x1000, 0x0)
         x8 = [x22 + 0x58]        // 0xdd // 221
         if !x8 jmp 0x8021c3c     // unlikely

    loc_0x08021c10: // orphan
         w9 = [x22 + 0x28]        // 0xdd // 221
         if (w9 == 0x1ff)
         b.hi 0x8021c3c           // unlikely

    loc_0x08021c1c: // orphan
         x10 = [x22 + 0x30]       // 0xdd // 221
         x11 = [x22 + 0x48]       // 0xdd // 221
         x12 = 0xfff              // '\xff\x0f'
         x12 = 0xffef             // '\xef\xff'
         x10 = x10 & x12
         x11 = x11 & 0xfffffffff000
         x10 = x11 | x10
         [x8 + x9,lsl 3] = x10

    loc_0x08021c3c: // orphan
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021c40 ()             // 0x8021c40(0x0, 0x0, 0x0, 0x0)
         dsb ishst
         x0 = [x22 + 0x18]        // 0xdd // 221 // int64_t arg1
         sym.brk_flush_tlb_group () // sym.brk_flush_tlb_group(0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.brk_cache_maintenance () // sym.brk_cache_maintenance(0x8033000)
         x23 = x21 + 0x7ac
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021c64 ()             // 0x8021c64(0x7ac, 0x0, 0x0, 0x0)
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.list_del ()          // sym.list_del(0x0)
         w8 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w8 = w8 - 1
         [x21 + 0x7a8] = w8
         0x8021c88 ()             // 0x8021c88(0x7ac, 0x7ac, 0x0, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021c90 ()             // 0x8021c90(0x0, 0x7ac, 0x0, 0x0)
         x0 = 0x8021000
         x0 = x0 + 0              // int64_t arg1
         0x8021c9c ()             // 0x8021c9c(0x8021000, 0x7ac, 0x0, 0x0)
         w3 = [x21 + 0x7a8]       // 0xdc // 220
         x0 = 0x8021000
         x0 = x0 + 0
         jmp 0x8021b08

    loc_0x08021cb0: // orphan
         brk 0x5512

}

/* ===== 0x08021e28 ===== */
int sym.brk_bp_get_hits (int esi, int edx) {
    loc_0x8021e28:
        hint 0x19
        [sp, -0x50]! = (x29,2)
        [sp, 0x10] = (x26,2)
        [sp, 0x20] = (x24,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8021ff4 // likely
            
    loc_0x8021ff4:
        w21 = ~0x15
        jmp 0x802200c
         // do {
    loc_0x802200c:
        // CODE XREF from sym.brk_bp_get_hits @ 0x8021ff8
        w0 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08022028
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8021e48
    loc_0x8021e54:
        w8 = [x19 + 0x18] // 0xda // 218
        if !w8 jmp 0x8021ff4 // likely
    loc_0x8021e5c:
        x20 = [x19 + 8] // 0xda // 218
        x0 = 0x8021000
        x0 = x0 + 0   // int64_t arg1
        0x8021e68 ()  // "\t" // 0x8021e68(0x8021000, 0x0, 0x0, 0x0)
        x9 = 0x8021000
        x9 = x9 + 0
        x8 = [x9]     // 0xd0 // 208
        if (x8 == x9)
        b.eq 0x8021ffc // unlikely
            
    loc_0x8021ffc:
        w21 = ~0x1
         // do {
    loc_0x8022000:
        // XREFS(133)
        x0 = 0x8022000
        x0 = x0 + 0   // int64_t arg1
        // CODE XREF from sym.brk_bp_init @ 0x8022300
        0x8022008 ()  // 0x8022008(0x8022000, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08021e90: // orphan
             // CODE XREF from sym.brk_bp_get_hits @ 0x8021ecc
             x8 = [x8]                // 0xcf // 207
             if (x8 == x9)
             b.eq 0x8021ffc           // unlikely

    loc_0x08021e9c: // orphan
         // CODE XREF from sym.brk_bp_get_hits @ 0x8021e8c
         w12 = [x8 + 0x10]        // 0xcf // 207
         if (w12 == w11)
         b.ne 0x8021e90           // unlikely

    loc_0x08021ea8: // orphan
         x12 = x8 + 0x798
         x23 = x12                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08021eb0: // orphan
         x23 = [x23]              // 0xde // 222
         if (x23 == x12)
         b.eq 0x8021ed0           // unlikely

    loc_0x08021ebc: // orphan
         x13 = [x23 + 0x18]       // 0xde // 222
         if (x13 == x10)
         b.ne 0x8021eb0           // likely

    loc_0x08021ec8: // orphan
         if x23 jmp 0x8021ed8     // likely

    loc_0x08021ecc: // orphan
         jmp 0x8021e90

    loc_0x08021ed0: // orphan
         x23 = x12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x23 jmp 0x8021e90    // likely

    loc_0x08021ed8: // orphan
         x12 = [x23 + 0x18]       // 0xde // 222
         if (x12 == x10)
         b.ne 0x8021e90           // likely

    loc_0x08021ee4: // orphan
         x21 = x8 + 0x7ac
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021eec ()             // 0x8021eec(0x7ac, 0x0, 0x0, 0x0)
         w8 = [x23 + 0x2558]      // 0xde // 222
         w9 = [x19 + 0x18]        // 0xda // 218
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         if (w8 == w9)
         csel w22,w8,w9, lo
         0x8021f08 ()             // 0x8021f08(0x7ac, 0x7ac, 0x0, 0x0)
         if !w22 jmp 0x802202c    // likely

    loc_0x08021f10: // orphan
         w8 = 0x238
         w1 = 0xcc0               // '\xc0\f'
         umull x0,w22,w8          // int64_t arg1
         0x8021f1c ()             // 0x8021f1c(0x0, 0xcc0, 0x0, 0x0)
         if !x0 jmp 0x8022038     // likely

    loc_0x08021f24: // orphan
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8021f2c ()             // 0x8021f2c(0x0, 0x0, 0x0, 0x0)
         w8 = [x23 + 0x2558]      // 0xde // 222
         if (w22 == w8)
         csel w24,w22,w8, lo
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w24 jmp 0x8021f98    // likely

    loc_0x08021f44: // orphan
         w8 = [x23 + 0x2554]      // 0xde // 222
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = 0x238

    loc_0x08021f50: // orphan
         if (w8 == 0x11)
         b.hs 0x8022060           // unlikely

    loc_0x08021f58: // orphan
         umaddl x8,w8,w26, x23
         w2 = 0x238
         smaddl x0,w25,w26, x20   // int64_t arg1
         x1 = x8 + 0x1d0
         0x8021f68 ()             // 0x8021f68(0x0, 0x80331d0, 0x238, 0x0)
         w8 = [x23 + 0x2554]      // 0xde // 222
         w25 = w25 + 1
         w8 = w8 + 1
         negs w9,w8
         w8 = w8 & 0xf
         w9 = w9 & 0xf
         csneg w8,w8,w9, mi
         if (w24 == w25)
         [x23 + 0x2554] = w8      // "!"
         b.ne 0x8021f50           // likely

    loc_0x08021f94: // orphan
         w8 = [x23 + 0x2558]      // 0xde // 222

    loc_0x08021f98: // orphan
         w8 = w8 - w24
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x23 + 0x2558] = w8
         0x8021fa8 ()             // 0x8021fa8(0x0, 0x0, 0x0, 0x0)
         w8 = 0xb0ae              // '\xae\xb0'
         w8 = 0x39                // '9'
         if (w24 == w8)
         b.hs 0x8022054           // unlikely

    loc_0x08021fbc: // orphan
         w8 = 0x238
         x22 = [x19 + 0x10]       // 0xda // 218
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         umull x21,w24,w8
         w2 = 0x1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8021fd4 ()             // 0x8021fd4(0x0, 0x0, 0x1, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym._copy_to_user_5 ()   // sym._copy_to_user_5(0x100000000, 0x0)
         if !x0 jmp 0x8022040     // unlikely

    loc_0x08021fec: // orphan
         w21 = ~0xd
         jmp 0x8022048

    loc_0x0802202c: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // CODE XREF from sym.brk_bp_init @ 0x8022304
         [x19 + 0x1c] = wzr
         jmp 0x8022000

    loc_0x08022038: // orphan
         w21 = ~0xb
         jmp 0x8022000

    loc_0x08022040: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x1c] = w24

    loc_0x08022048: // orphan
         // CODE XREF from sym.brk_bp_get_hits @ 0x8021ff0
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x802204c ()             // 0x802204c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8022000

    loc_0x08022054: // orphan
         brk 0x800

    loc_0x08022060: // orphan
         brk 0x5512

}

/* ===== 0x08020b30 ===== */
int sym.brk_bp_update_cfg (int esi, int edx) {
    loc_0x8020b30:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8020000
        w8 = (byte) [x8] // 0xcf // 207
        if (w8 == 1)
        b.ne 0x8020c08 // likely
            
    loc_0x8020c08:
        w0 = ~0x5
        jmp 0x8020c8c
         // do {
    loc_0x8020c8c:
        // CODE XREFS from sym.brk_bp_update_cfg @ 0x8020c0c, 0x8020cb0, 0x8020da8
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08020c9c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8020b54
    loc_0x8020b5c:
        w8 = [x19 + 8] // 0xda // 218
        if (w8 == 1)
        b.lt 0x8020c88 // unlikely
            
    loc_0x8020c88:
        w0 = ~0x15
    loc_0x08020b68: // orphan
             x8 = [x19 + 0x10]        // 0xda // 218
             if !x8 jmp 0x8020c88     // unlikely

    loc_0x08020b70: // orphan
         w9 = [x19]               // 0xda // 218
         if (w9 == 1)
         b.ne 0x8020c88           // likely

    loc_0x08020b7c: // orphan
         w9 = [x19 + 4]           // 0xda // 218
         if w9 jmp 0x8020c88      // likely

    loc_0x08020b84: // orphan
         w9 = [x19 + 0x18]        // 0xda // 218
         if (w9 == 0x10)
         b.hi 0x8020c88           // unlikely

    loc_0x08020b90: // orphan
         w9 = [x19 + 0xe0]        // 0xda // 218
         if (w9 == 0x10)
         b.hi 0x8020c88           // likely

    loc_0x08020b9c: // orphan
         x9 = x8 << 8
         x20 = x8 & x9,asr 8
         if ((x20 & 3) == 0)
         b.ne 0x8020c88           // likely

    loc_0x08020bac: // orphan
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x80                // '\x80'
         x8 = [x8]                // 0xcf // 207
         if ((x8 & 0x400000) == 0)
         w8 = ~0xfff              // '\xff\x0f'
         csel x8,x9,x8, eq
         if (x20 == x8)
         b.hs 0x8020c88           // unlikely

    loc_0x08020bcc: // orphan
         x0 = 0x8020000
         x0 = x0 + 0              // int64_t arg1
         0x8020bd4 ()             // 0x8020bd4(0x8020000, 0x0, 0x0, 0x0)
         x0 = 0x8020000
         x0 = x0 + 0              // int64_t arg1
         0x8020be0 ()             // 0x8020be0(0x8020000, 0x0, 0x0, 0x0)
         x8 = 0x8020000
         x8 = x8 + 0
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = [x8]               // 0xcf // 207
         if (x21 == x8)
         b.eq 0x8020c58           // unlikely

    loc_0x08020bfc: // orphan
         w9 = [x19 + 8]           // 0xda // 218
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8020c1c

    loc_0x08020c10: // orphan
         x21 = [x21]              // 0xdc // 220
         if (x21 == x8)
         b.eq 0x8020c5c           // unlikely

    loc_0x08020c1c: // orphan
         // CODE XREF from sym.brk_bp_update_cfg @ 0x8020c04
         w10 = [x21 + 0x10]       // 0xdc // 220
         if (w10 == w9)
         b.ne 0x8020c10           // unlikely

    loc_0x08020c28: // orphan
         x11 = x21 + 0x798
         x10 = x11                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08020c30: // orphan
         x10 = [x10]              // 0xd1 // 209
         if (x10 == x11)
         b.eq 0x8020c10           // unlikely

    loc_0x08020c3c: // orphan
         x12 = [x10 + 0x18]       // 0xd1 // 209
         if (x12 == x20)
         b.ne 0x8020c30           // unlikely

    loc_0x08020c48: // orphan
         x22 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x21 jmp 0x8020c10    // likely

    loc_0x08020c50: // orphan
         x22 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8020c60

    loc_0x08020c58: // orphan
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08020c5c: // orphan
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08020c60: // orphan
         // CODE XREF from sym.brk_bp_update_cfg @ 0x8020c54
         x0 = 0x8020000
         x0 = x0 + 0              // int64_t arg1
         0x8020c68 ()             // 0x8020c68(0x8020000, 0x0, 0x0, 0x0)
         if !x21 jmp 0x8020ca0    // likely

    loc_0x08020c70: // orphan
         if !x22 jmp 0x8020ca0    // likely

    loc_0x08020c74: // orphan
         w8 = [x22 + 0x10]        // 0xdd // 221
         if !w8 jmp 0x8020cb4     // likely

    loc_0x08020c7c: // orphan
         x0 = 0x8020000
         x0 = x0 + 0              // int64_t arg1
         0x8020c84 ()             // 0x8020c84(0x8020000, 0x0, 0x0, 0x0)

    loc_0x08020ca0: // orphan
         x0 = 0x8020000
         x0 = x0 + 0              // int64_t arg1
         0x8020ca8 ()             // " " // 0x8020ca8(0x8020000, 0x0, 0x0, 0x0)
         w0 = ~0x1
         jmp 0x8020c8c

    loc_0x08020cb4: // orphan
         x21 = x21 + 0x7ac
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8020cbc ()             // 0x8020cbc(0x7ac, 0x0, 0x0, 0x0)
         w8 = [x19 + 0x18]        // 0xda // 218
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bic w9,w8,w8, asr 31     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x10
         if (w9 == 0x10)
         csel w9,w9,w8, lt
         [x22 + 0x80] = w9
         if !w9 jmp 0x8020d24     // likely

    loc_0x08020ce0: // orphan
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x22 + 0xc8
         x11 = x19 + 0x60

    loc_0x08020cec: // orphan
         if (x9 == 0x10)
         b.eq 0x8020dac           // unlikely

    loc_0x08020cf4: // orphan
         x12 = x9 << 2
         x14 = x9 << 3
         x15 = [x22 + 0x80]       // 0xdd // 221
         x9 = x9 + 1
         x13 = x19 + x12
         x12 = x22 + x12
         if (x9 == x15)
         w13 = [x13 + 0x1c]       // 0xd4 // 212
         [x12 + 0x84] = w13
         x12 = [x11 + x14]        // 0xd5000000d2 // 914828034258
         [x10 + x14] = x12
         b.lt 0x8020cec           // unlikely

    loc_0x08020d24: // orphan
         w9 = [x19 + 0xe0]        // 0xda // 218
         bic w9,w9,w9, asr 31     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 0x10)
         csel w8,w9,w8, lt
         [x22 + 0x148] = w8
         if !w8 jmp 0x8020d74     // likely

    loc_0x08020d3c: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08020d40: // orphan
         if (x8 == 0x10)
         b.eq 0x8020dac           // unlikely

    loc_0x08020d48: // orphan
         x9 = x8 << 2
         x8 = x8 + 1
         x10 = x19 + x9
         x9 = x22 + x9
         w11 = [x10 + 0xe4]       // 0xd1 // 209
         [x9 + 0x14c] = w11
         x11 = [x22 + 0x148]      // 0xdd // 221
         w10 = [x10 + 0x124]      // 0xd1 // 209
         if (x8 == x11)
         [x9 + 0x18c] = w10
         b.lt 0x8020d40           // unlikely

    loc_0x08020d74: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8020d78 ()             // 0x8020d78(0x0, 0x0, 0x0, 0x0)
         x0 = 0x8020000
         x0 = x0 + 0              // int64_t arg1
         0x8020d84 ()             // 0x8020d84(0x8020000, 0x0, 0x0, 0x0)
         w1 = [x19 + 8]           // 0xda // 218
         w3 = [x22 + 0x80]        // 0xdd // 221
         x0 = 0x8020000
         x0 = x0 + 0              // int64_t arg1
         w4 = [x22 + 0x148]       // 0xdd // 221
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8020da0 ()             // 0x8020da0(0x8020000, 0x122, 0x0, 0x0)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8020c8c

    loc_0x08020dac: // orphan
         brk 0x5512

}

/* ===== 0x080089e4 ===== */
int sym.kp_core_hook_install (int esi, int edx) {
    loc_0x80089e4:
        hint 0x19
        sp = sp - 0x70
        [sp, 0x20] = (x29,2)
        [var_30h] = x25
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_20h
        w23 = ~0x15
        if !x0 jmp 0x8008a48 // likely
            
    loc_0x8008a48:
        // CODE XREFS from sym.kp_core_hook_install @ 0x8008b5c, 0x8008b64, 0x8008c18, 0x8008c4c
        w0 = w23      // '\xff\xff\xff\xff\xff\xff\xff\xff' // x23
        (x20, 2) = 3
        x25 = [var_30h] // 0x4
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        sp = arg_70h
        hint 0x1d
        0x08008a68
         // } else {
    loc_0x8008a0c:
        x9 = x1 & 0x8000000000000003 // arg2
        x8 = 0x8000
        x22 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        if (x9 == x8)
        b.ne 0x8008a48 // likely
        }
        return eax;
    loc_0x8008a20:
        x9 = x2 & 0x8000000000000003 // arg3
        x21 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        if (x9 == x8)
        b.ne 0x8008a48 // unlikely
    loc_0x8008a30:
        w8 = (byte) [x0 + 0x54] // 0xc7 // 199 // arg1
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if w8 jmp 0x8008a44 // likely
            
    loc_0x8008a44:
        w23 = ~0x71   // 'q'
    loc_0x08008a3c: // orphan
             x8 = [x19 + 0x18]        // 0xda // 218
             if !x8 jmp 0x8008a6c     // likely

    loc_0x08008a6c: // orphan
         [x19] = (xzr,2)
         x23 = 0x8008000
         x20 = x3                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         x0 = [x23]               // 0xde // 222
         w8 = ~0
         [x19, 0x48] = (xzr,2)
         [x19, 0x38] = (xzr,2)
         [x19, 0x28] = (xzr,2)
         [x19, 0x18] = (xzr,2)
         [x19 + 0x20] = w8
         [x19 + 0x10] = xzr
         if x0 jmp 0x8008aac      // likely

    loc_0x08008a9c: // orphan
         x0 = 0x8008000
         x0 = x0 + 0              // int64_t arg1
         0x8008aa4 ()             // 0x8008aa4(0x8008000, 0x0, 0x0, 0x0)
         [x23] = x0

    loc_0x08008aac: // orphan
         x24 = 0x8008000
         x8 = [x24]               // 0xdf // 223
         if x8 jmp 0x8008ad0      // likely

    loc_0x08008ab8: // orphan
         x0 = 0x8008000
         x0 = x0 + 0              // int64_t arg1
         0x8008ac0 ()             // 0x8008ac0(0x8008000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = [x23]               // 0xde // 222
         [x24] = x8

    loc_0x08008ad0: // orphan
         if !x0 jmp 0x8008b58     // likely

    loc_0x08008ad4: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x19] = x22
         sym.kp_follow_entry ()   // sym.kp_follow_entry(0x0)
         x8 = 0x8000
         x9 = x0 & 0x8000000000000003
         [x19, 8] = (x0,2)
         if (x9 == x8)
         b.ne 0x8008b60           // likely

    loc_0x08008af4: // orphan
         sym.kp_alloc_slot ()
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbnz w0,0x1f,0x8008a48   // unlikely

    loc_0x08008b00: // orphan
         w25 = 0x80               // '\x80'
         x24 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x20] = w23
         w25 = 0xd420             // ' \xd4'
         jmp 0x8008b28

    loc_0x08008b14: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x8008b54
         x9 = x19 + x24
         x24 = x24 + 4
         if (x24 == 0x14)
         [x9 + 0x2c] = w8
         b.eq 0x8008b68           // unlikely

    loc_0x08008b28: // orphan
         // CODE XREF from sym.kp_core_hook_install @ 0x8008b10
         x8 = [x19 + 8]           // 0xda // 218
         x0 = x24 + x8
         w8 = [x0]                // 0xc7 // 199
         w9 = w8 & 0xffffff9f
         [var_8h] = w8
         if (w9 == w25)
         b.ne 0x8008b14           // unlikely

    loc_0x08008b44: // orphan
         x1 = var_8h              // int64_t arg2
         sym.kp_restore_kprobe_insn () // sym.kp_restore_kprobe_insn(0x0, 0x178008)
         if w0 jmp 0x8008c1c      // unlikely

    loc_0x08008b50: // orphan
         w8 = [var_8h]            // 0x4
         jmp 0x8008b14

    loc_0x08008b58: // orphan
         w23 = ~0x1
         jmp 0x8008a48

    loc_0x08008b60: // orphan
         w23 = ~0x15
         jmp 0x8008a48

    loc_0x08008b68: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [var_0h] = wzr
         [sp, 8] = (xzr,2)
         sym.kp_build_patch ()    // sym.kp_build_patch(0x0)
         x24 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = var_8h

    loc_0x08008b80: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.kp_relocate_insn ()  // sym.kp_relocate_insn(0x0, 0x0, 0x0)
         if w0 jmp 0x8008c1c      // unlikely

    loc_0x08008b94: // orphan
         x24 = x24 + 1
         x25 = var_4h
         if (x24 == 5)
         b.ne 0x8008b80           // likely

    loc_0x08008ba4: // orphan
         w8 = 0x5
         x1 = var_8h              // int64_t arg2
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x19 + 0x28] = w8
         sym.kp_patch_frame ()    // sym.kp_patch_frame(0x0, 0x178008, 0x0)
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x8008c20      // unlikely

    loc_0x08008bc0: // orphan
         x1 = x19 + 0x40          // int64_t arg2
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.kp_apply_patch ()    // sym.kp_apply_patch(0x0, 0x40, 0x0)
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x8008c20      // unlikely

    loc_0x08008bd4: // orphan
         w8 = 0x1
         [x19 + 0x54] = (byte) w8
         if !x20 jmp 0x8008be4    // likely

    loc_0x08008be0: // orphan
         [x20] = xzr

    loc_0x08008be4: // orphan
         x8 = [x19 + 0x20]        // 0xda // 218 // x23
         w9 = 0x70                // 'p'
         x10 = 0x8008000
         x10 = x10 + 0
         x2 = [x19 + 8]           // 0xda // 218 // int64_t arg3
         w5 = [x19 + 0x28]        // 0xda // 218
         smaddl x4,w8,w9, x10     // int64_t arg_70h
         x0 = 0x8008000
         x0 = x0 + 0              // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x3 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg4
         0x8008c10 ()             // 0x8008c10(0x8008000, 0x0, 0x0, 0x0)
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8008a48

    loc_0x08008c1c: // orphan
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008c20: // orphan
         w0 = [x19 + 0x20]        // 0xda // 218 // x23
         tbnz w0,0x1f,0x8008c2c   // unlikely

    loc_0x08008c28: // orphan
         sym.kp_free_slot ()      // sym.kp_free_slot(0x0)

    loc_0x08008c2c: // orphan
         [x19, 0x48] = (xzr,2)
         [x19, 0x38] = (xzr,2)
         [x19, 0x28] = (xzr,2)
         [x19, 0x18] = (xzr,2)
         [x19, 8] = (xzr,2)
         [x19] = xzr
         if !x20 jmp 0x8008a48    // likely

    loc_0x08008c48: // orphan
         [x20] = xzr
         jmp 0x8008a48

}

/* ===== 0x08009720 ===== */
int sym.kp_core_hook_restore (int esi, int edx) {
    loc_0x8009720:
        hint 0x19
        sp = sp - 0x60
        [sp, 0x40] = (x29,2)
        [sp, 0x50] = (x20,2)
        x29 = var_40h
        if !x0 jmp 0x8009804 // likely
            
    loc_0x8009804:
        w20 = ~0x15
         // do {
    loc_0x8009808:
        // CODE XREFS from sym.kp_core_hook_restore @ 0x8009800, 0x8009838
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        sp = arg_60h
        hint 0x1d
        0x0800981c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8009738
    loc_0x8009744:
        w2 = [x19 + 0x24] // 0xda // 218
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        if (w2 == 1)
        [var_18h] = xzr
        [var_0h] = wzr // arg1
        [sp] = (xzr,2)
        b.lt 0x80097dc // likely
            
    loc_0x80097dc:
        x8 = 0x8009000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8009820 // unlikely
            
    loc_0x8009820:
        w20 = ~0x1
         // do {
    loc_0x8009824:
        x1 = [x19 + 8] // 0xda // 218 // int64_t arg_60h
        x0 = 0x8009000
        x0 = x0 + 0   // int64_t arg1
        w2 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8009834 ()  // 0x8009834(0x8009000, 0x0, 0x0, 0x0)
        jmp 0x8009808
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8009764
    loc_0x800977c:
        w10 = [x19 + 0x30] // 0xda // 218
        x9 = x8 + 4
        if (w2 == 2)
        [var_20h] = x9
        [var_0h_4] = w10
        b.eq 0x80097dc // unlikely
    loc_0x8009794:
        w10 = [x19 + 0x34] // 0xda // 218
        x9 = x8 + 8
        if (w2 == 3)
        [var_20h_2] = x9
        [var_0h_3] = w10
        b.eq 0x80097dc // unlikely
    loc_0x80097ac:
        w10 = [x19 + 0x38] // 0xda // 218
        x9 = x8 + 0xc
        if (w2 == 4)
        [var_30h] = x9
        [var_0h_5] = w10
        b.eq 0x80097dc // unlikely
    loc_0x80097c4:
        w9 = [x19 + 0x3c] // 0xda // 218
        x8 = x8 + 0x10
        if (w2 == 5)
        [var_30h_2] = x8
        [var_0h] = w9
        b.ne 0x800983c // likely
            
    loc_0x800983c:
        brk 0x5512
         // } else {
        }
        return eax;
    loc_0x080097fc: // orphan
             [x19 + 0x54] = (byte) wzr
             jmp 0x8009808

}

/* ===== 0x08009844 ===== */
int sym.kp_core_hook_release (int esi, int edx) {
    loc_0x8009844:
        if !x0 jmp 0x8009870 // likely
            
    loc_0x8009870:
        w0 = ~0x15
        // lr
         // } else {
    loc_0x8009848:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = (byte) [x0 + 0x54] // 0xc7 // 199 // arg1
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if !w8 jmp 0x8009878 // likely
        }
        return eax;
    loc_0x8009868:
        w0 = ~0x15
        jmp 0x80098d4
         // do {
    loc_0x80098d4:
        // CODE XREF from sym.kp_core_hook_release @ 0x800986c
        (x20, 2) = 3
        x21 = [var_10h] // 0x4
        (x29, 2) = 3
        hint 0x1d
        0x080098e4
         // } while (?);
        }
        return eax;
    loc_0x08009878: // orphan
             w21 = [x19 + 0x20]       // 0xda // 218
             tbnz w21,0x1f,0x8009868  // unlikely

    loc_0x08009880: // orphan
         if (w21 == 0xf)
         b.hi 0x80098b8           // unlikely

    loc_0x08009888: // orphan
         x20 = 0x8009000
         x20 = x20 + 0
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8009894 ()             // "(" // 0x8009894(0x8009000, 0x0, 0x0, 0x0)
         w8 = 0x1
         x9 = 0x8009000
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x8 = x8 << x21
         x10 = [x9]               // 0xd0 // 208
         bic x8,x10,x8            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x9] = x8
         0x80098b4 ()             // 0x80098b4(0x8009000, 0x0, 0x0, 0x0)

    loc_0x080098b8: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19, 0x48] = (xzr,2)
         [x19, 0x38] = (xzr,2)
         [x19, 0x28] = (xzr,2)
         [x19, 0x18] = (xzr,2)
         [x19, 8] = (xzr,2)
         [x19] = xzr

}

/* ===== 0x08006360 ===== */
int sym.install_hw_bp (int esi, int edx) {
    loc_0x8006360:
        hint 0x19
        sp = sp - 0xf0
        [sp, 0xa0] = (x29,2)
        [sp, 0xb0] = (x26,2)
        [sp, 0xc0] = (x24,2)
        [sp, 0xd0] = (x22,2)
        [sp, 0xe0] = (x20,2)
        x29 = var_a0h
        movi v0.2d,0000000000000000
        x23 = 0x8006000
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x23]    // 0xde // 222
        x20 = 0x8006000
        [var_0h_2] = xzr
        [sp, 0x10] = (q0,2)
        [sp, 0x30] = (q0,2)
        [sp, 0x50] = (q0,2)
        [sp, 0x70] = (q0,2)
        if !x8 jmp 0x80063b4 // unlikely
            
    loc_0x80063b4:
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x80063bc ()  // 0x80063bc(0x8006000, 0x0, 0x0, 0x0)
        [x23] = x0
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x80063cc ()  // 0x80063cc(0x8006000, 0x0, 0x0, 0x0)
        [x20] = x0
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x80063dc ()  // 0x80063dc(0x8006000, 0x0, 0x0, 0x0)
        x21 = 0x8006000
        [x21] = x0
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x80063f0 ()  // 0x80063f0(0x8006000, 0x0, 0x0, 0x0)
        x22 = 0x8006000
        [x22] = x0
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x8006404 ()  // 0x8006404(0x8006000, 0x0, 0x0, 0x0)
        x9 = [x23]    // 0xde // 222
        x10 = 0x8006000
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x10] = x0
        x0 = 0x8006000
        x0 = x0 + 0
        if !x9 jmp 0x80066f4 // unlikely
            
    loc_0x80066f4:
        0x80066f4 ()  // 0x80066f4(0x0, 0x0, 0x0, 0x0)
        w20 = ~0x5
        jmp 0x80064d8
         // do {
    loc_0x80064d8:
        // XREFS: CODE 0x08006554  CODE 0x080066fc  CODE 0x08006710
        // XREFS: CODE 0x0800672c  CODE 0x08006808  CODE 0x08006838
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x29, 2) = 3
        sp = arg_f0h
        hint 0x1d
        0x080064f8
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80063ac
    loc_0x80064b8:
        if !x19 jmp 0x80064d4 // likely
            
    loc_0x80064d4:
        w20 = ~0x15
    loc_0x0800642c: // orphan
             x9 = [x21]               // 0xdc // 220
             if !x9 jmp 0x80066f4     // unlikely

    loc_0x08006434: // orphan
         x9 = [x22]               // 0xdd // 221
         if !x9 jmp 0x80066f4     // unlikely

    loc_0x0800643c: // orphan
         if !x8 jmp 0x80066f4     // likely

    loc_0x08006440: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006448 ()             // 0x8006448(0x8006000, 0x0, 0x0, 0x0)
         x22 = 0x8006000
         [x22] = x0
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x800645c ()             // 0x800645c(0x8006000, 0x0, 0x0, 0x0)
         x20 = 0x8006000
         [x20] = x0
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006470 ()             // 0x8006470(0x8006000, 0x0, 0x0, 0x0)
         x21 = 0x8006000
         [x21] = x0
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006484 ()             // 0x8006484(0x8006000, 0x0, 0x0, 0x0)
         x9 = [x22]               // 0xdd // 221
         x10 = 0x8006000
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x10] = x0
         x0 = 0x8006000
         x0 = x0 + 0
         if !x9 jmp 0x80066f4     // unlikely

    loc_0x080064a4: // orphan
         x9 = [x20]               // 0xdb // 219
         if !x9 jmp 0x80066f4     // unlikely

    loc_0x080064ac: // orphan
         x9 = [x21]               // 0xdc // 220
         if !x9 jmp 0x80066f4     // unlikely

    loc_0x080064b4: // orphan
         if !x8 jmp 0x80066f4     // likely

    loc_0x080064bc: // orphan
         w8 = [x19 + 0x20]        // 0xda // 218
         if (w8 == 0x10)          // u"`\b"
         b.hi 0x80064d4           // unlikely

    loc_0x080064c8: // orphan
         w8 = [x19 + 0xe8]        // 0xda // 218
         if (w8 == 0x10)          // u"`\b" // u"`\b"
         b.ls 0x80064fc           // unlikely

    loc_0x080064fc: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006504 ()             // 0x8006504(0x8006000, 0x0, 0x0, 0x0)
         x8 = 0x8006000
         x8 = x8 + 0
         w0 = [x19]               // 0xda // 218
         x9 = [x8]                // 0xcf // 207
         jmp 0x8006520

    loc_0x0800651c: // orphan
         x9 = [x9]                // 0xd0 // 208

    loc_0x08006520: // orphan
         // CODE XREF from sym.install_hw_bp @ 0x8006518
         if (x9 == x8)            // u"`\b" // u"`\b"
         b.eq 0x8006558           // likely

    loc_0x08006528: // orphan
         w10 = [x9 + 0x10]        // 0xd0 // 208
         if (w10 == w0)           // u"`\b" // u"`\b"
         b.ne 0x800651c           // unlikely

    loc_0x08006534: // orphan
         x10 = [x9 + 0x18]        // 0xd0 // 208
         x11 = [x19 + 8]          // 0xda // 218
         if (x10 == x11)          // u"`\b" // u"`\b"
         b.ne 0x800651c           // unlikely

    loc_0x08006544: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x800654c ()             // 0x800654c(0x8006000, 0x0, 0x0, 0x0)
         w20 = ~0x10
         jmp 0x80064d8

    loc_0x08006558: // orphan
         0x8006558 ()             // 0x8006558(0x0, 0x0, 0x0, 0x0)
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006560 ()             // 0x8006560(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8006700     // likely

    loc_0x08006568: // orphan
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x2518              // '\x18%'
         w1 = 0xdc0               // '\xc0\r'
         0x8006574 ()             // 0x8006574(0x2518, 0xdc0, 0x0, 0x0)
         if !x0 jmp 0x8006714     // unlikely

    loc_0x0800657c: // orphan
         (w25, 2) = 3
         w26 = [x19 + 0x20]       // 0xda // 218
         w9 = [x19]               // 0xda // 218
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = [x19 + 8]          // 0xda // 218
         d0 = [x19 + 0x10]        // 0xda // 218
         if (w8 == 0)             // u"`\b" // u"`\b"
         [x0 + 0x10] = w9
         cset w8,ne
         if (w25 == 0)            // u"`\b" // u"`\b"
         [x0 + 0x18] = x24
         [x0 + 0x31] = (byte) w8
         cset w8,ne
         if (w26 == 1)            // u"`\b"
         [x0 + 0x30] = (byte) w8
         [x0 + 0x28] = d0
         [x0 + 0x34] = w26
         b.lt 0x8006624           // likely

    loc_0x080065c4: // orphan
         if (w26 == 0x939)        // u"`\b"
         b.hs 0x8006924           // unlikely

    loc_0x080065cc: // orphan
         x22 = x26 << 2
         if (w26 == 0x11)         // u"`\b"
         x0 = x21 + 0x38
         x1 = x19 + 0x24
         b.lo 0x80065ec           // likely

    loc_0x080065e0: // orphan
         x8 = 0x8006000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x800683c       // likely

    loc_0x080065ec: // orphan
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80065f0 ()             // 0x80065f0(0x0, 0x0, 0x0, 0x0)
         if (w26 == 0x495)        // u"`\b"
         b.hs 0x8006924           // unlikely

    loc_0x080065fc: // orphan
         x22 = x26 << 3
         if (w26 == 0x11)         // u"`\b"
         x0 = x21 + 0x78
         x1 = x19 + 0x68
         b.lo 0x800661c           // likely

    loc_0x08006610: // orphan
         x8 = 0x8006000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x8006874       // likely

    loc_0x0800661c: // orphan
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006620 ()             // 0x8006620(0x0, 0x0, 0x0, 0x0)

    loc_0x08006624: // orphan
         w26 = [x19 + 0xe8]       // 0xda // 218
         if (w26 == 1)            // u"`\b" // u"`\b"
         [x21 + 0xf8] = w26
         b.lt 0x8006690           // likely

    loc_0x08006634: // orphan
         if (w26 == 0x908)        // u"`\b"
         b.hs 0x8006924           // unlikely

    loc_0x0800663c: // orphan
         x22 = x26 << 2
         if (w26 == 0x11)         // u"`\b"
         x0 = x21 + 0xfc
         x1 = x19 + 0xec
         b.lo 0x800665c           // likely

    loc_0x08006650: // orphan
         x8 = 0x8006000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x80068b4       // likely

    loc_0x0800665c: // orphan
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006660 ()             // 0x8006660(0x0, 0x0, 0x0, 0x0)
         if (w26 == 0x8f8)        // u"`\b"
         b.hs 0x8006924           // unlikely

    loc_0x0800666c: // orphan
         if (w26 == 0x11)         // u"`\b"
         x0 = x21 + 0x13c
         x1 = x19 + 0x12c
         b.lo 0x8006688           // likely

    loc_0x0800667c: // orphan
         x8 = 0x8006000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x80068ec       // likely

    loc_0x08006688: // orphan
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800668c ()             // 0x800668c(0x0, 0x0, 0x0, 0x0)

    loc_0x08006690: // orphan
         if !w25 jmp 0x8006758    // likely

    loc_0x08006694: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x800669c ()             // 0x800669c(0x8006000, 0x0, 0x0, 0x0)
         if (w26 == 0)            // u"`\b" // u"`\b"
         x8 = 0x8006000
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         cset w9,gt
         [x8] = x24
         x8 = 0x8006000
         [x8] = (byte) w9
         jmp ifle 0x8006730       // likely

    loc_0x080066c0: // orphan
         s0 = [x21 + 0x13c]       // 0xdc // 220
         x8 = 0x8006000
         if (w26 == 1)            // u"`\b"
         [x8] = s0
         b.eq 0x8006738           // unlikely

    loc_0x080066d4: // orphan
         movi d0,0000000000000000
         s1 = [x21 + 0x140]       // 0xdc // 220
         x8 = 0x8006000
         if (w26 == 3)            // u"`\b"
         [x8] = s1
         b.lo 0x8006744           // likely

    loc_0x080066ec: // orphan
         s0 = [x21 + 0x144]       // 0xdc // 220
         jmp 0x8006744

    loc_0x08006700: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006708 ()             // "T" // 0x8006708(0x8006000, 0x0, 0x0, 0x0)
         w20 = ~0x2
         jmp 0x80064d8

    loc_0x08006714: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.put_task_struct ()   // sym.put_task_struct(0x0)
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006724 ()             // 0x8006724(0x8006000, 0x0, 0x0, 0x0)
         w20 = ~0xb
         jmp 0x80064d8

    loc_0x08006730: // orphan
         x8 = 0x8006000
         [x8] = wzr

    loc_0x08006738: // orphan
         x8 = 0x8006000
         movi d0,0000000000000000
         [x8] = wzr

    loc_0x08006744: // orphan
         // CODE XREF from sym.install_hw_bp @ 0x80066f0
         x8 = 0x8006000
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         [x8] = s0
         0x8006754 ()             // 0x8006754(0x8006000, 0x0, 0x0, 0x0)

    loc_0x08006758: // orphan
         movi v0.2d,0000000000000000
         w8 = 0x4
         x9 = [x19 + 8]           // 0xda // 218
         x11 = 0x8006000
         x1 = 0x8006000
         x1 = x1 + 0
         x0 = var_10h
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x21 + 0x250c] = wzr
         [sp = q0
         [var_0h_3] = x8
         w8 = 0x1                 // u"`\b"
         [sp = q0
         [var_0h_5] = x8
         (w10, 2) = 3
         [sp = q0
         x8 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp = q0
         [sp = q0
         [sp, 0x48] = (x9,2)
         w8 = w10 - 1
         x9 = [x23]               // 0xde // 222
         [sp = q0
         if (w8 == 4)             // u"`\b"
         w8 = 0x3
         [sp = q0
         csel w8,w10,w8, lo
         [sp = q0
         d0 = [x11]               // 0xd2 // 210
         [var_0h_12] = w8
         [var_10h] = d0           // u(cstr 0x00000001) "`\b"
         blr x9                   // 0x8006000(0x178010, 0x8006000, 0x0, 0x0)
         [x21 + 0x20] = x0
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.put_task_struct ()   // sym.put_task_struct(0x0)
         x20 = [x21 + 0x20]       // 0xdc // 220
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x20 != 0xfff)        // u"`\b"
         b.lo 0x800680c           // unlikely

    loc_0x080067f8: // orphan
         0x80067f8 ()             // 0x80067f8(0x0, 0x0, 0x0, 0x0)
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006804 ()             // 0x8006804(0x8006000, 0x0, 0x0, 0x0)
         jmp 0x80064d8

    loc_0x0800680c: // orphan
         sym.list_add ()          // sym.list_add(0x0)
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006818 ()             // 0x8006818(0x8006000, 0x0, 0x0, 0x0)
         w1 = [x19]               // 0xda // 218
         x2 = [x19 + 8]           // 0xda // 218
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         w3 = [x19 + 0x10]        // 0xda // 218
         0x8006830 ()             // 0x8006830(0x8006000, 0x8006000, 0x0, 0x8006000)
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80064d8

    loc_0x0800683c: // orphan
         w9 = 0x1                 // u"`\b"
         x2 = 0x8006000
         x2 = x2 + 0
         [x8] = (byte) w9
         x8 = 0x8006000
         x8 = x8 + 0
         [sp] = (x1,2)
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_f0h
         w3 = 0x40                // '@'
         0x8006864 ()             // 0x8006864(0x8006000, 0x0, 0x8006000, 0x40)
         (x1, 2) = 3
         brk 0x800

    loc_0x08006874: // orphan
         w9 = 0x1                 // u"`\b"
         x2 = 0x8006000
         x2 = x2 + 0
         [x8] = (byte) w9
         x8 = 0x8006000
         x8 = x8 + 0
         [var_8h] = x0
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x26 = x1                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_f0h
         w3 = 0x80                // '\x80'
         0x80068a0 ()             // 0x80068a0(0x8006000, 0x0, 0x8006000, 0x80)
         x0 = [var_8h]            // 0x4
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         brk 0x800

    loc_0x080068b4: // orphan
         w9 = 0x1                 // u"`\b"
         x2 = 0x8006000
         x2 = x2 + 0
         [x8] = (byte) w9
         x8 = 0x8006000
         x8 = x8 + 0
         [sp] = (x1,2)
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_f0h
         w3 = 0x40                // '@'
         0x80068dc ()             // 0x80068dc(0x8006000, 0x0, 0x8006000, 0x40)
         (x1, 2) = 3
         brk 0x800

    loc_0x080068ec: // orphan
         w9 = 0x1                 // u"`\b"
         x2 = 0x8006000
         x2 = x2 + 0
         [x8] = (byte) w9
         x8 = 0x8006000
         x8 = x8 + 0
         [sp] = (x1,2)
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_f0h
         w3 = 0x40                // '@'
         0x8006914 ()             // 0x8006914(0x8006000, 0x0, 0x8006000, 0x40)
         (x1, 2) = 3
         brk 0x800

    loc_0x08006924: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x800692c ()             // sym.put_task_struct // 0x800692c(0x8006000, 0x0, 0x0, 0x0)

}

/* ===== 0x08006db4 ===== */
int sym.get_hw_bp_hits (int esi, int edx) {
    loc_0x8006db4:
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [var_10h] = x27
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x8006de0 ()  // 0x8006de0(0x8006000, 0x0, 0x0, 0x0)
        x8 = 0x8006000
        x8 = x8 + 0
        x25 = [x8]    // 0xcf // 207
        if (x25 == x8) // u"`\b"
        b.eq 0x8006fa4 // unlikely
            
    loc_0x8006fa4:
        w21 = ~0x1
         // do {
    loc_0x8006fa8:
        // CODE XREFS from sym.get_hw_bp_hits @ 0x8006fa0, 0x8006fec, 0x8007000
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x8006fb0 ()  // 0x8006fb0(0x8006000, 0x0, 0x0, 0x0)
        w0 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x27 = [var_10h] // 0x4
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3  // u"`\b"
        (x29, 2) = 3
        hint 0x1d
        0x08006fd4
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08006e00: // orphan
             x25 = [x25]              // 0xe0 // 224
             if (x25 == x8)           // u"`\b"
             b.eq 0x8006fa4           // unlikely

    loc_0x08006e0c: // orphan
         // CODE XREF from sym.get_hw_bp_hits @ 0x8006dfc
         w10 = [x25 + 0x10]       // 0xe0 // 224
         if (w10 == w9)           // u"`\b"
         b.ne 0x8006e00           // likely

    loc_0x08006e18: // orphan
         x10 = [x25 + 0x18]       // 0xe0 // 224
         x11 = [x19 + 8]          // 0xda // 218
         if (x10 == x11)          // u"`\b" // u"`\b"
         b.ne 0x8006e00           // unlikely

    loc_0x08006e28: // orphan
         w8 = 0x250c              // '\f%'
         x22 = x25 + x8
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8006e34 ()             // 0x8006e34(0x250c, 0x0, 0x0, 0x0)
         w8 = [x25 + 0x2508]      // 0xe0 // 224
         w9 = [x19 + 0x18]        // 0xda // 218
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == w9)            // u"`\b" // u"`\b"
         csel w24,w8,w9, lo
         if !w24 jmp 0x8006fd8    // likely

    loc_0x08006e50: // orphan
         w26 = 0x238
         w1 = 0x820
         umull x21,w24,w26
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8006e60 ()             // 0x8006e60(0x0, 0x820, 0x0, 0x0)
         if !x0 jmp 0x8006ff0     // likely

    loc_0x08006e68: // orphan
         w8 = [x25 + 0x2504]      // 0xe0 // 224
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006e74: // orphan
         if (w8 == 0x11)          // u"`\b"
         b.hs 0x800701c           // unlikely

    loc_0x08006e7c: // orphan
         umaddl x8,w8,w26, x25
         w2 = 0x238
         smaddl x0,w27,w26, x20   // int64_t arg1
         x1 = x8 + 0x180
         0x8006e8c ()             // 0x8006e8c(0x0, 0x180, 0x238, 0x0)
         w8 = [x25 + 0x2504]      // 0xe0 // 224
         w27 = w27 + 1            // u"`\b"
         w8 = w8 + 1
         negs w9,w8
         w8 = w8 & 0xf
         w9 = w9 & 0xf
         csneg w8,w8,w9, mi
         if (w24 == w27)          // u"`\b"
         [x25 + 0x2504] = w8
         b.ne 0x8006e74           // likely

    loc_0x08006eb8: // orphan
         w8 = [x25 + 0x2508]      // 0xe0 // 224
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 - w24
         [x25 + 0x2508] = w8
         0x8006ecc ()             // 0x8006ecc(0x0, 0x8033000, 0x0, 0x0)
         w8 = 0xb0ae              // '\xae\xb0'
         w8 = 0x39                // '9'
         if (w24 == w8)           // u"`\b"
         b.hs 0x8007010           // unlikely

    loc_0x08006ee0: // orphan
         x22 = [x19 + 0x10]       // 0xda // 218
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x1                 // u"`\b"
         0x8006ef0 ()             // 0x8006ef0(0x0, 0x0, 0x1, 0x0)
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = (byte) [x8 + 0x46]  // 0xcf // 207
         tbnz w9,5,0x8006f0c      // unlikely

    loc_0x08006f00: // orphan
         x10 = [x8]               // 0xcf // 207
         x9 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w10,0x1a,0x8006f14   // likely

    loc_0x08006f0c: // orphan
         x9 = x22 << 8
         x9 = x22 & x9,asr 8

    loc_0x08006f14: // orphan
         x10 = 0x80               // '\x80'
         x10 = x10 - x21
         if (x10 == x9)           // u"`\b"
         b.lo 0x8006f94           // unlikely

    loc_0x08006f24: // orphan
         jmp 0x8007020

    loc_0x08006f2c: // orphan
         // CODE XREF from sym.get_hw_bp_hits @ 0x800702c
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006f54: // orphan
         x0 = x22 & 0xff7fffffffffffff // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006f60 ()             // "3" // 0x8006f60(0x0, 0x0, 0x0, 0x0)
         jmp 0x8007030

    loc_0x08006f6c: // orphan
         // CODE XREF from sym.get_hw_bp_hits @ 0x800703c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006f90: // orphan
         if !x0 jmp 0x8007004     // likely

    loc_0x08006f94: // orphan
         w21 = ~0xd

    loc_0x08006f98: // orphan
         // CODE XREF from sym.get_hw_bp_hits @ 0x800700c
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8006f9c ()             // 0x8006f9c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8006fa8

    loc_0x08006fd8: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006fe0 ()             // 0x8006fe0(0x0, 0x8033000, 0x0, 0x0)
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x1c] = wzr
         jmp 0x8006fa8

    loc_0x08006ff0: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006ff8 ()             // 0x8006ff8(0x0, 0x8033000, 0x0, 0x0)
         w21 = ~0xb
         // XREFS(108)
         jmp 0x8006fa8

    loc_0x08007004: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x1c] = w24
         jmp 0x8006f98

    loc_0x08007010: // orphan
         brk 0x800

    loc_0x0800701c: // orphan
         brk 0x5512

    loc_0x08007020: // orphan
         // CODE XREF from sym.get_hw_bp_hits @ 0x8006f24
         x9 = 0x8007000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x8006f54   // likely

    loc_0x0800702c: // orphan
         jmp 0x8006f2c

    loc_0x08007030: // orphan
         // CODE XREF from sym.get_hw_bp_hits @ 0x8006f64
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x8006f90   // likely

    loc_0x0800703c: // orphan
         jmp 0x8006f6c

}

/* ===== 0x08007044 ===== */
int sym.clear_all_hw_bps (int esi, int edx) {
    loc_0x8007044:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8007000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8007074 // unlikely
            
    loc_0x8007074:
        x0 = 0x8007000
        x0 = x0 + 0
        0x800707c ()  // 0x800707c(0x8007000, 0x0, 0x0, 0x0)
        x20 = 0x8007000
        x20 = x20 + 0
        x19 = [x20]   // 0xdb // 219
        if (x19 == x20) // u"`\b"
        b.eq 0x8007108 // unlikely
            
    loc_0x8007108:
        // CODE XREF from sym.clear_all_hw_bps @ 0x80070f8
        x19 = 0x8007000
        x19 = x19 + 0
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8007114 ()  // 0x8007114(0x8007000, 0x0, 0x0, 0x0)
        x8 = 0x8007000
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8007000
        [x8] = xzr
        x8 = 0x8007000
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x8] = wzr
        x8 = 0x8007000
        [x8] = wzr
        x8 = 0x8007000
        [x9] = (byte) wzr
        [x8] = wzr
        0x8007148 ()  // 0x8007148(0x8007000, 0x8007000, 0x0, 0x0)
        x0 = 0x8007000
        x0 = x0 + 0
        0x8007154 ()  // 0x8007154(0x8007000, 0x8007000, 0x0, 0x0)
        (x20, 2) = 3
        x23 = [var_10h] // 0x4
        (x22, 2) = 3  // u"`\b"
        (x29, 2) = 3
        hint 0x1d
        0x0800716c
         // } else {
    loc_0x8007094:
        x21 = 0x100
        x22 = 0x8007000
        x21 = 0xdead  // '\xad\xde'
         // } else {
        }
        return eax;
    loc_0x080070a0: // orphan
             x0 = [x19 + 0x20]        // 0xda // 218
             x23 = [x19]              // 0xda // 218
             if !x0 jmp 0x80070b4     // unlikely

    loc_0x080070ac: // orphan
         x8 = [x22]               // 0xdd // 221
         blr x8                   // 0x8006001(0x0, 0x0, 0x0, 0x0)

    loc_0x080070b4: // orphan
         x8 = [x19 + 8]           // 0xda // 218
         x9 = [x8]                // 0xcf // 207
         if (x9 == x19)           // u"`\b"
         b.ne 0x80070fc           // likely

    loc_0x080070c4: // orphan
         x9 = [x19]               // 0xda // 218
         x10 = [x9 + 8]           // 0xd0 // 208
         if (x10 == x19)          // u"`\b" // u"`\b"
         b.ne 0x80070fc           // likely

    loc_0x080070d4: // orphan
         [x9 + 8] = x8
         [x8] = x9

    loc_0x080070dc: // orphan
         // CODE XREF from sym.clear_all_hw_bps @ 0x8007104
         x8 = x21 + 0x22
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19] = (x21,2)
         0x80070e8 ()             // 0x80070e8(0x0, 0x0, 0x0, 0x0)
         if (x23 == x20)
         x19 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x80070a0           // likely

    loc_0x080070f8: // orphan
         jmp 0x8007108

    loc_0x080070fc: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8007100 ()             // 0x8007100(0x0, 0x0, 0x0, 0x0)
         jmp 0x80070dc

}

/* ===== 0x08007174 ===== */
int sym.hw_point_init (int esi, int edx) {
    loc_0x8007174:
        x8 = 0x8007000
        x8 = [x8]     // 0xcf // 207
        if x8 jmp 0x8007188 // unlikely
            
    loc_0x8007188:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8007000
        x0 = x0 + 0
        blr x8        // xzr(0x8007000, 0x0, 0x0, 0x0)
        x0 = 0x8007000
        x0 = x0 + 0   // int64_t arg1
        0x80071a8 ()  // 0x80071a8(0x8007000, 0x0, 0x0, 0x0)
        (x29, 2) = 3  // sp // lr // sp
        hint 0x1d
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // lr
         // } else {
    loc_0x8007180:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // lr
        }
        return eax;
}

/* ===== 0x080071c0 ===== */
int sym.update_hw_bp (int esi, int edx) {
    loc_0x80071c0:
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [var_10h] = x27
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8007634 // likely
            
    loc_0x8007634:
        x0 = 0x8007000
        x0 = x0 + 0   // int64_t arg1
        0x800763c ()  // 0x800763c(0x8007000, 0x0, 0x0, 0x0)
        w19 = ~0x15
        jmp 0x80075b4
         // do {
    loc_0x80075b4:
        // CODE XREFS from sym.update_hw_bp @ 0x8007644, 0x8007674, 0x8007a88
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x27 = [var_10h] // 0x4
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3  // "\""
        (x29, 2) = 3
        hint 0x1d
        0x080075d4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80071e4
    loc_0x80071f4:
        w1 = [x19 + 0x10] // 0xda // 218
        if (w1 == 2)
        b.hs 0x8007658 // likely
            
    loc_0x8007658:
        x0 = 0x8007000
        x0 = x0 + 0
        jmp 0x800766c
         // do {
    loc_0x800766c:
        // CODE XREFS from sym.update_hw_bp @ 0x8007654, 0x8007660
        0x800766c ()  // 0x800766c(0x0, 0x0, 0x0, 0x0)
        w19 = ~0x15
        jmp 0x80075b4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8007200
    loc_0x800720c:
        if !w8 jmp 0x8007348 // likely
            
    loc_0x8007348:
        if !w1 jmp 0x8007484 // likely
            
    loc_0x8007484:
        x0 = 0x8007000
        x0 = x0 + 0   // int64_t arg1
        0x800748c ()  // 0x800748c(0x8007000, 0x0, 0x0, 0x0)
        x8 = 0x8007000
        x8 = x8 + 0
        x26 = [x8]    // 0xcf // 207
        if (x26 == x8)
        b.eq 0x80075a4 // unlikely
            
    loc_0x80075a4:
        w19 = ~0x1
         // do {
    loc_0x80075a8:
        // CODE XREF from sym.update_hw_bp @ 0x80078cc
        x0 = 0x8007000
        x0 = x0 + 0   // int64_t arg1
        0x80075b0 ()  // 0x80075b0(0x8007000, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8007210
    loc_0x800721c:
        if (w8 == 1)
        b.eq 0x8007348 // unlikely
    loc_0x8007224:
        w2 = [x19 + 0x1c] // 0xda // 218
        if (w2 == 0x20)
        b.hi 0x8007688 // unlikely
            
    loc_0x8007688:
        w1 = 0x1
        jmp 0x8007a68
         // do {
    loc_0x8007a68:
        // XREFS: CODE 0x0800767c  CODE 0x0800768c  CODE 0x08007870
        // XREFS: CODE 0x080078d4  CODE 0x08007904  CODE 0x08007914
        // XREFS: CODE 0x08007924  CODE 0x08007934  CODE 0x08007944
        // XREFS: CODE 0x08007954  CODE 0x08007964  CODE 0x08007974
        // XREFS: CODE 0x08007984  CODE 0x08007a48  CODE 0x08007a58
        x0 = 0x8007000
        x0 = x0 + 0
        jmp 0x8007a80
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8007230
    loc_0x8007238:
        w2 = [x19 + 0x20] // 0xda // 218
        if (w2 == 0x20)
        b.hi 0x800786c // likely
            
    loc_0x800786c:
        w1 = 0x2
        jmp 0x8007a68
    loc_0x08007244: // orphan
             if (w8 == 3)
             b.eq 0x8007348           // unlikely

    loc_0x0800724c: // orphan
         w2 = [x19 + 0x24]        // 0xda // 218
         if (w2 == 0x20)
         b.hi 0x80078d0           // unlikely

    loc_0x08007258: // orphan
         if (w8 == 4)
         b.eq 0x8007348           // unlikely

    loc_0x08007260: // orphan
         w2 = [x19 + 0x28]        // 0xda // 218
         if (w2 == 0x20)
         b.hi 0x8007900           // unlikely

    loc_0x0800726c: // orphan
         if (w8 == 5)
         b.eq 0x8007348           // unlikely

    loc_0x08007274: // orphan
         w2 = [x19 + 0x2c]        // 0xda // 218
         if (w2 == 0x20)
         b.hi 0x8007910           // unlikely

    loc_0x08007280: // orphan
         if (w8 == 6)
         b.eq 0x8007348           // unlikely

    loc_0x08007288: // orphan
         w2 = [x19 + 0x30]        // 0xda // 218
         if (w2 == 0x20)
         b.hi 0x8007920           // unlikely

    loc_0x08007294: // orphan
         if (w8 == 7)
         b.eq 0x8007348           // unlikely

    loc_0x0800729c: // orphan
         w2 = [x19 + 0x34]        // 0xda // 218
         if (w2 == 0x20)
         b.hi 0x8007930           // unlikely

    loc_0x080072a8: // orphan
         if (w8 == 8)
         b.eq 0x8007348           // unlikely

    loc_0x080072b0: // orphan
         w2 = [x19 + 0x38]        // 0xda // 218
         if (w2 == 0x20)
         b.hi 0x8007940           // unlikely

    loc_0x080072bc: // orphan
         if (w8 == 9)
         b.eq 0x8007348           // unlikely

    loc_0x080072c4: // orphan
         w2 = [x19 + 0x3c]        // 0xda // 218
         if (w2 == 0x20)
         b.hi 0x8007950           // unlikely

    loc_0x080072d0: // orphan
         if (w8 == 0xa)
         b.eq 0x8007348           // unlikely

    loc_0x080072d8: // orphan
         w2 = [x19 + 0x40]        // 0xda // 218
         if (w2 == 0x20)
         b.hi 0x8007960           // unlikely

    loc_0x080072e4: // orphan
         if (w8 == 0xb)
         b.eq 0x8007348           // unlikely

    loc_0x080072ec: // orphan
         w2 = [x19 + 0x44]        // 0xda // 218
         if (w2 == 0x20)
         b.hi 0x8007970           // unlikely

    loc_0x080072f8: // orphan
         if (w8 == 0xc)
         b.eq 0x8007348           // unlikely

    loc_0x08007300: // orphan
         w2 = [x19 + 0x48]        // 0xda // 218
         if (w2 == 0x20)
         b.hi 0x8007980           // unlikely

    loc_0x0800730c: // orphan
         if (w8 == 0xd)
         b.eq 0x8007348           // unlikely

    loc_0x08007314: // orphan
         w2 = [x19 + 0x4c]        // 0xda // 218
         if (w2 == 0x20)
         b.hi 0x8007a44           // unlikely

    loc_0x08007320: // orphan
         if (w8 == 0xe)
         b.eq 0x8007348           // unlikely

    loc_0x08007328: // orphan
         w2 = [x19 + 0x50]        // 0xda // 218
         if (w2 == 0x20)
         b.hi 0x8007a54           // unlikely

    loc_0x08007334: // orphan
         if (w8 == 0xf)
         b.eq 0x8007348           // unlikely

    loc_0x0800733c: // orphan
         w2 = [x19 + 0x54]        // 0xda // 218
         if (w2 == 0x20)
         b.hi 0x8007a64           // unlikely

    loc_0x08007358: // orphan
         if (w1 == 1)
         b.eq 0x8007484           // unlikely

    loc_0x08007360: // orphan
         w2 = [x19 + 0xe0]        // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x8007690           // likely

    loc_0x0800736c: // orphan
         if (w1 == 2)
         b.eq 0x8007484           // unlikely

    loc_0x08007374: // orphan
         w2 = [x19 + 0xe4]        // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x8007874           // likely

    loc_0x08007380: // orphan
         if (w1 == 3)
         b.eq 0x8007484           // unlikely

    loc_0x08007388: // orphan
         w2 = [x19 + 0xe8]        // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x80078d8           // likely

    loc_0x08007394: // orphan
         if (w1 == 4)
         b.eq 0x8007484           // unlikely

    loc_0x0800739c: // orphan
         w2 = [x19 + 0xec]        // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x8007908           // likely

    loc_0x080073a8: // orphan
         if (w1 == 5)
         b.eq 0x8007484           // unlikely

    loc_0x080073b0: // orphan
         w2 = [x19 + 0xf0]        // 0xda // 218
         if (w2 == 0x1f)
         // CODE XREF from sym.unfuck_cfi @ +0x1b8
         b.hi 0x8007918           // likely

    loc_0x080073bc: // orphan
         if (w1 == 6)
         b.eq 0x8007484           // unlikely

    loc_0x080073c4: // orphan
         w2 = [x19 + 0xf4]        // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x8007928           // likely

    loc_0x080073d0: // orphan
         if (w1 == 7)
         b.eq 0x8007484           // unlikely

    loc_0x080073d8: // orphan
         w2 = [x19 + 0xf8]        // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x8007938           // likely

    loc_0x080073e4: // orphan
         if (w1 == 8)
         b.eq 0x8007484           // unlikely

    loc_0x080073ec: // orphan
         w2 = [x19 + 0xfc]        // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x8007948           // likely

    loc_0x080073f8: // orphan
         if (w1 == 9)
         b.eq 0x8007484           // unlikely

    loc_0x08007400: // orphan
         w2 = [x19 + 0x100]       // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x8007958           // likely

    loc_0x0800740c: // orphan
         if (w1 == 0xa)
         b.eq 0x8007484           // unlikely

    loc_0x08007414: // orphan
         w2 = [x19 + 0x104]       // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x8007968           // likely

    loc_0x08007420: // orphan
         if (w1 == 0xb)
         b.eq 0x8007484           // unlikely

    loc_0x08007428: // orphan
         w2 = [x19 + 0x108]       // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x8007978           // likely

    loc_0x08007434: // orphan
         if (w1 == 0xc)
         b.eq 0x8007484           // unlikely

    loc_0x0800743c: // orphan
         w2 = [x19 + 0x10c]       // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x8007a38           // likely

    loc_0x08007448: // orphan
         if (w1 == 0xd)
         b.eq 0x8007484           // unlikely

    loc_0x08007450: // orphan
         w2 = [x19 + 0x110]       // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x8007a4c           // likely

    loc_0x0800745c: // orphan
         if (w1 == 0xe)
         b.eq 0x8007484           // unlikely

    loc_0x08007464: // orphan
         w2 = [x19 + 0x114]       // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x8007a5c           // likely

    loc_0x08007470: // orphan
         if (w1 == 0xf)
         b.eq 0x8007484           // unlikely

    loc_0x08007478: // orphan
         w2 = [x19 + 0x118]       // 0xda // 218
         if (w2 == 0x1f)
         b.hi 0x8007a74           // likely

    loc_0x080074ac: // orphan
         x26 = [x26]              // 0xe1 // 225
         if (x26 == x8)
         b.eq 0x80075a4           // likely

    loc_0x080074b8: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x80074a8
         w10 = [x26 + 0x10]       // 0xe1 // 225
         if (w10 == w9)
         b.ne 0x80074ac           // likely

    loc_0x080074c4: // orphan
         x10 = [x26 + 0x18]       // 0xe1 // 225
         x11 = [x19 + 8]          // 0xda // 218
         if (x10 == x11)
         b.ne 0x80074ac           // likely

    loc_0x080074d4: // orphan
         w8 = 0x250c              // '\f%'
         x20 = x26 + x8
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80074e0 ()             // 0x80074e0(0x250c, 0x0, 0x0, 0x0)
         w8 = [x19 + 0x10]        // 0xda // 218
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == 0)
         cset w8,ne
         [x26 + 0x30] = (byte) w8
         w8 = [x19 + 0x14]        // 0xda // 218
         if (w8 == 1)
         [x26 + 0x34] = w8
         b.lt 0x8007698           // likely

    loc_0x08007508: // orphan
         x22 = x8 << 2
         if (w8 == 0x11)
         x24 = x26 + 0x38
         x23 = x19 + 0x18
         b.lo 0x8007528           // likely

    loc_0x0800751c: // orphan
         x8 = 0x8007000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x8007988       // likely

    loc_0x08007528: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8007534 ()             // 0x8007534(0x0, 0x8033000, 0x0, 0x0)
         x8 = [x26 + 0x34]        // 0xe1 // 225
         x24 = x26 + 0x78
         x23 = x19 + 0x58
         x22 = x8 << 3
         if (x22 == 0x81)
         b.lo 0x800755c           // likely

    loc_0x08007550: // orphan
         x8 = 0x8007000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x80079b4       // likely

    loc_0x0800755c: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8007568 ()             // 0x8007568(0x0, 0x8033000, 0x0, 0x0)
         w8 = [x26 + 0x34]        // 0xe1 // 225
         w9 = 0x1
         [x26 + 0x31] = (byte) w9
         if (w8 == 1)
         b.lt 0x80076d0           // likely

    loc_0x08007580: // orphan
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x22 = 0x8007000
         x22 = x22 + 0
         x23 = 0x8007000
         x23 = x23 + 0
         x27 = x26 + 0x78
         x24 = 0x8007000
         x24 = x24 + 0
         jmp 0x80075f0

    loc_0x080075d8: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80075dc ()             // 0x80075dc(0x0, 0x0, 0x0, 0x0)

    loc_0x080075e0: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x8007630
         x8 = [x26 + 0x34]        // 0xe1 // 225
         x25 = x25 + 1
         if (x25 == x8)
         b.ge 0x80076d0           // likely

    loc_0x080075f0: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x80075a0
         if (x25 == 0x10)
         b.eq 0x8007a40           // unlikely

    loc_0x080075f8: // orphan
         x8 = x27 + x25,lsl 2
         x2 = [x27 + x25,lsl 3]   // 0xe0000000e2 // 962072674530
         ldur w1,[x8,-0x40]       // 0xcf // 207
         if (w1 == 0x1e)
         b.ls 0x80075d8           // unlikely

    loc_0x0800760c: // orphan
         if (w1 == 0x20)
         b.eq 0x8007624           // unlikely

    loc_0x08007614: // orphan
         if (w1 == 0x1f)
         b.ne 0x80075e0           // likely

    loc_0x0800761c: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8007628

    loc_0x08007624: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007628: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x8007620
         x1 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800762c ()             // 0x800762c(0x0, 0x0, 0x0, 0x0)
         jmp 0x80075e0

    loc_0x08007648: // orphan
         x0 = 0x8007000
         x0 = x0 + 0
         w1 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800766c

    loc_0x08007664: // orphan
         x0 = 0x8007000
         x0 = x0 + 0

    loc_0x08007678: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x8007a68

    loc_0x08007680: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x8007a78

    loc_0x08007690: // orphan
         w1 = 0x1
         jmp 0x8007a78

    loc_0x08007698: // orphan
         movi v0.2d,0000000000000000
         [x26 + 0x31] = (byte) wzr
         [x26 = q0
         [x26 = q0
         [x26 = q0
         [x26 = q0
         [x26 = q0
         [x26 = q0
         [x26 = q0
         [x26 = q0
         [x26 = q0
         [x26 = q0
         [x26 = q0
         [x26 = q0

    loc_0x080076d0: // orphan
         w8 = [x19 + 0xd8]        // 0xda // 218
         if (w8 == 1)
         [x26 + 0xf8] = w8
         b.lt 0x80077c0           // likely

    loc_0x080076e0: // orphan
         x22 = x8 << 2
         if (w8 == 0x11)
         x24 = x26 + 0xfc
         x23 = x19 + 0xdc
         b.lo 0x8007700           // likely

    loc_0x080076f4: // orphan
         x8 = 0x8007000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x80079e0       // likely

    loc_0x08007700: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800770c ()             // 0x800770c(0x0, 0x8033000, 0x0, 0x0)
         x8 = [x26 + 0xf8]        // 0xe1 // 225
         x24 = x26 + 0x13c
         x23 = x19 + 0x11c
         x22 = x8 << 2
         if (x22 == 0x41)
         b.lo 0x8007734           // unlikely

    loc_0x08007728: // orphan
         x8 = 0x8007000
         w9 = (byte) [x8]         // 0xcf // 207
         tbz w9,0,0x8007a0c       // likely

    loc_0x08007734: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8007740 ()             // 0x8007740(0x0, 0x8033000, 0x0, 0x0)
         w8 = [x26 + 0xf8]        // 0xe1 // 225
         if (w8 == 1)
         b.lt 0x80077dc           // likely

    loc_0x08007750: // orphan
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x22 = 0x8007000
         x22 = x22 + 0
         x23 = 0x8007000
         x23 = x23 + 0
         jmp 0x8007774

    loc_0x08007768: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x80077bc
         x27 = x27 + 1
         if (x27 == w8)
         b.ge 0x80077dc           // likely

    loc_0x08007774: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x8007764
         if (x27 == 0x10)
         b.eq 0x8007a40           // unlikely

    loc_0x0800777c: // orphan
         x9 = x26 + x27,lsl 2
         w24 = [x9 + 0xfc]        // 0xd0 // 208
         if (w24 == 0x1f)
         b.hi 0x8007768           // likely

    loc_0x0800778c: // orphan
         w25 = [x9 + 0x13c]       // 0xd0 // 208
         w1 = [x19]               // 0xda // 218
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = [x19 + 8]           // 0xda // 218
         w3 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w4 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80077a4 ()             // 0x80077a4(0x0, 0x0, 0x22, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80077b4 ()             // 0x80077b4(0x8033000, 0x0, -1, 0x0)
         w8 = [x26 + 0xf8]        // 0xe1 // 225
         jmp 0x8007768

    loc_0x080077c0: // orphan
         movi v0.2d,0000000000000000
         x8 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8 + 0xfc]! = q0
         [x8, 0x10] = (q0,2)
         [x8, 0x30] = (q0,2)
         [x8, 0x50] = (q0,2)
         [x8 + 0x70] = q0

    loc_0x080077dc: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80077e4 ()             // 0x80077e4(0x0, 0x0, 0x0, 0x0)
         w20 = (byte) [x26 + 0x30] // 0xe1 // 225
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         0x80077f4 ()             // 0x80077f4(0x8007000, 0x0, 0x0, 0x0)
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w20 jmp 0x800782c     // likely

    loc_0x08007800: // orphan
         x8 = 0x8007000
         x10 = [x26 + 0x18]       // 0xe1 // 225
         x9 = [x8]                // 0xcf // 207
         if (x9 == x10)
         b.ne 0x8007898           // unlikely

    loc_0x08007814: // orphan
         movi d0,0000000000000000
         [x8] = xzr
         x8 = 0x8007000
         [x8] = (byte) wzr
         x8 = 0x8007000
         jmp 0x8007884

    loc_0x0800782c: // orphan
         w8 = [x26 + 0xf8]        // 0xe1 // 225
         x9 = [x26 + 0x18]        // 0xe1 // 225
         x10 = 0x8007000
         if (w8 == 0)
         [x10] = x9
         x10 = 0x8007000
         cset w9,gt
         [x10] = (byte) w9
         jmp ifle 0x800787c       // likely

    loc_0x08007850: // orphan
         s0 = [x26 + 0x13c]       // 0xe1 // 225
         x9 = 0x8007000
         if (w8 == 1)
         [x9] = s0
         b.ne 0x80078e0           // likely

    loc_0x08007864: // orphan
         movi d0,0000000000000000
         jmp 0x8007888

    loc_0x08007874: // orphan
         w1 = 0x2
         jmp 0x8007a78

    loc_0x0800787c: // orphan
         x8 = 0x8007000
         movi d0,0000000000000000

    loc_0x08007884: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x8007828
         [x8] = wzr

    loc_0x08007888: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x8007868
         x8 = 0x8007000
         [x8] = wzr

    loc_0x08007890: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x80078fc
         x8 = 0x8007000
         [x8] = s0

    loc_0x08007898: // orphan
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         0x80078a0 ()             // 0x80078a0(0x8007000, 0x0, 0x0, 0x0)
         w1 = [x19]               // 0xda // 218
         x2 = [x19 + 8]           // 0xda // 218
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         w3 = [x26 + 0x34]        // 0xe1 // 225
         w4 = [x26 + 0xf8]        // 0xe1 // 225
         w5 = (byte) [x26 + 0x31] // 0xe1 // 225
         w6 = (byte) [x26 + 0x30] // 0xe1 // 225
         0x80078c4 ()             // 0x80078c4(0x8007000, 0x0, 0x22, 0x0)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80075a8

    loc_0x080078d0: // orphan
         w1 = 0x3
         jmp 0x8007a68

    loc_0x080078d8: // orphan
         w1 = 0x3
         jmp 0x8007a78

    loc_0x080078e0: // orphan
         movi d0,0000000000000000
         s1 = [x26 + 0x140]       // 0xe1 // 225
         x9 = 0x8007000
         if (w8 == 3)
         [x9] = s1
         b.lo 0x8007890           // likely

    loc_0x080078f8: // orphan
         s0 = [x26 + 0x144]       // 0xe1 // 225
         jmp 0x8007890

    loc_0x08007900: // orphan
         w1 = 0x4
         jmp 0x8007a68

    loc_0x08007908: // orphan
         w1 = 0x4
         jmp 0x8007a78

    loc_0x08007910: // orphan
         w1 = 0x5
         jmp 0x8007a68

    loc_0x08007918: // orphan
         w1 = 0x5
         jmp 0x8007a78

    loc_0x08007920: // orphan
         w1 = 0x6
         jmp 0x8007a68

    loc_0x08007928: // orphan
         w1 = 0x6
         jmp 0x8007a78

    loc_0x08007930: // orphan
         w1 = 0x7
         jmp 0x8007a68

    loc_0x08007938: // orphan
         w1 = 0x7
         jmp 0x8007a78

    loc_0x08007940: // orphan
         w1 = 0x8                 // "\""
         jmp 0x8007a68

    loc_0x08007948: // orphan
         w1 = 0x8                 // "\""
         jmp 0x8007a78

    loc_0x08007950: // orphan
         w1 = 0x9
         jmp 0x8007a68

    loc_0x08007958: // orphan
         w1 = 0x9
         jmp 0x8007a78

    loc_0x08007960: // orphan
         w1 = 0xa
         jmp 0x8007a68

    loc_0x08007968: // orphan
         w1 = 0xa
         jmp 0x8007a78

    loc_0x08007970: // orphan
         w1 = 0xb
         jmp 0x8007a68

    loc_0x08007978: // orphan
         w1 = 0xb
         jmp 0x8007a78

    loc_0x08007980: // orphan
         w1 = 0xc
         jmp 0x8007a68

    loc_0x08007988: // orphan
         w9 = 0x1
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         x2 = 0x8007000
         x2 = x2 + 0
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = 0x40                // '@'
         [x8] = (byte) w9
         0x80079a8 ()             // 0x80079a8(0x8007000, 0x0, 0x8007000, 0x40)
         brk 0x800

    loc_0x080079b4: // orphan
         w9 = 0x1
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         x2 = 0x8007000
         x2 = x2 + 0
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = 0x80                // '\x80'
         [x8] = (byte) w9
         0x80079d4 ()             // 0x80079d4(0x8007000, 0x0, 0x8007000, 0x80)
         brk 0x800

    loc_0x080079e0: // orphan
         w9 = 0x1
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         x2 = 0x8007000
         x2 = x2 + 0
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = 0x40                // '@'
         [x8] = (byte) w9
         0x8007a00 ()             // 0x8007a00(0x8007000, 0x0, 0x8007000, 0x40)
         brk 0x800

    loc_0x08007a0c: // orphan
         w9 = 0x1
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         x2 = 0x8007000
         x2 = x2 + 0
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = 0x40                // '@'
         [x8] = (byte) w9
         0x8007a2c ()             // 0x8007a2c(0x8007000, 0x0, 0x8007000, 0x40)
         brk 0x800

    loc_0x08007a38: // orphan
         w1 = 0xc
         jmp 0x8007a78

    loc_0x08007a40: // orphan
         brk 0x5512

    loc_0x08007a44: // orphan
         w1 = 0xd
         jmp 0x8007a68

    loc_0x08007a4c: // orphan
         w1 = 0xd
         jmp 0x8007a78

    loc_0x08007a54: // orphan
         w1 = 0xe
         jmp 0x8007a68

    loc_0x08007a5c: // orphan
         w1 = 0xe
         jmp 0x8007a78

    loc_0x08007a64: // orphan
         w1 = 0xf

    loc_0x08007a74: // orphan
         w1 = 0xf

    loc_0x08007a78: // orphan
         // XREFS: CODE 0x08007684  CODE 0x08007694  CODE 0x08007878  
         // XREFS: CODE 0x080078dc  CODE 0x0800790c  CODE 0x0800791c  
         // XREFS: CODE 0x0800792c  CODE 0x0800793c  CODE 0x0800794c  
         // XREFS: CODE 0x0800795c  CODE 0x0800796c  CODE 0x0800797c  
         // XREFS: CODE 0x08007a3c  CODE 0x08007a50  CODE 0x08007a60  
         x0 = 0x8007000
         x0 = x0 + 0

    loc_0x08007a80: // orphan
         // CODE XREF from sym.update_hw_bp @ 0x8007a70
         0x8007a80 ()             // 0x8007a80(0x0, 0x0, 0x0, 0x0)
         w19 = ~0x15
         jmp 0x80075b4

}

/* ===== 0x08007a90 ===== */
int sym.enable_hw_bp (int esi, int edx) {
    loc_0x8007a90:
        hint 0x19
        sp = sp - 0xc0
        [sp, 0x90] = (x29,2)
        [var_a0h] = x21
        [sp, 0xb0] = (x20,2)
        x29 = var_90h
        movi v0.2d,0000000000000000
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8007000
        x0 = x0 + 0   // int64_t arg1
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [var_0h] = xzr
        [sp] = (q0,2)
        [sp, 0x20] = (q0,2)
        [sp, 0x40] = (q0,2)
        [sp, 0x60] = (q0,2)
        0x8007ad0 ()  // 0x8007ad0(0x8007000, 0x0, 0x0, 0x0)
        x8 = 0x8007000
        x8 = x8 + 0
        x21 = [x8]    // 0xcf // 207
        jmp 0x8007ae8
         // do {
    loc_0x8007ae8:
        // CODE XREF from sym.enable_hw_bp @ 0x8007ae0
        if (x21 == x8)
        b.eq 0x8007b84 // likely
         // } while (?);
        }
        return eax;
    loc_0x8007af0:
        w9 = [x21 + 0x10] // 0xdc // 220
        if (w9 == w20)
        b.ne 0x8007ae4 // likely
            
    loc_0x8007ae4:
        x21 = [x21]   // 0xdc // 220
    loc_0x08007afc: // orphan
             x9 = [x21 + 0x18]        // 0xdc // 220
             if (x9 == x19)
             b.ne 0x8007ae4           // unlikely

    loc_0x08007b08: // orphan
         x8 = [x21 + 0x20]        // 0xdc // 220
         if !x8 jmp 0x8007bb0     // unlikely

    loc_0x08007b10: // orphan
         x9 = x8 + 0xd8
         ldur q2,[x8,0xf8]        // 0xcf // 207
         x10 = [x8 + 0x158]       // 0xcf // 207
         (q0, 2) = 3
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h] = x10
         x10 = 0x8007000
         [sp, 0x60] = (q0,2)
         (q0, 2) = 3
         [sp, 0x20] = (q2,2)
         q2 = [x9 + 0x50]         // 0xd0 // 208
         ldur q0,[x8,0xe8]        // 0xcf // 207
         x9 = [var_28h]           // 0x4
         [sp, 0x40] = (q1,2)
         ldur q1,[x8,0xd8]        // 0xcf // 207
         x8 = [x10]               // 0xd1 // 209
         x9 = x9 & 0xfffffffffffffffe // "\""
         [var_28h] = x9
         x0 = [x21 + 0x20]        // 0xdc // 220
         [sp] = (q1,2)
         blr x8                   // 0xffffffff(0x178010, 0x178000, 0x0, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x8007b88      // likely

    loc_0x08007b6c: // orphan
         x8 = [x21 + 0x20]        // 0xdc // 220
         x9 = [var_28h]           // 0x4
         x10 = [x8 + 0x100]       // 0xcf // 207
         bfxil x10,x9,0, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8 + 0x100] = x10
         jmp 0x8007b88

    loc_0x08007b84: // orphan
         w19 = ~0x1

    loc_0x08007b88: // orphan
         // CODE XREFS from sym.enable_hw_bp @ 0x8007b80, 0x8007bb4
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         0x8007b90 ()             // 0x8007b90(0x8007000, 0x0, 0x0, 0x0)
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_a0h]          // 0x4
         (x29, 2) = 3
         sp = arg_c0h
         hint 0x1d
         

    loc_0x08007bb0: // orphan
         w19 = ~0x15
         jmp 0x8007b88

}

/* ===== 0x08007bbc ===== */
int sym.disable_hw_bp (int esi, int edx) {
    loc_0x8007bbc:
        hint 0x19
        sp = sp - 0xc0
        [sp, 0x90] = (x29,2)
        [var_a0h] = x21
        [sp, 0xb0] = (x20,2)
        x29 = var_90h
        movi v0.2d,0000000000000000
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8007000
        x0 = x0 + 0   // int64_t arg1
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [var_0h] = xzr
        [sp] = (q0,2)
        [sp, 0x20] = (q0,2)
        [sp, 0x40] = (q0,2)
        [sp, 0x60] = (q0,2)
        0x8007bfc ()  // 0x8007bfc(0x8007000, 0x0, 0x0, 0x0)
        x8 = 0x8007000
        x8 = x8 + 0
        x21 = [x8]    // 0xcf // 207
        jmp 0x8007c14
         // do {
    loc_0x8007c14:
        // CODE XREF from sym.disable_hw_bp @ 0x8007c0c
        if (x21 == x8)
        b.eq 0x8007cb0 // likely
         // } while (?);
        }
        return eax;
    loc_0x8007c1c:
        w9 = [x21 + 0x10] // 0xdc // 220
        if (w9 == w20)
        b.ne 0x8007c10 // likely
            
    loc_0x8007c10:
        x21 = [x21]   // 0xdc // 220
    loc_0x08007c28: // orphan
             x9 = [x21 + 0x18]        // 0xdc // 220
             if (x9 == x19)
             b.ne 0x8007c10           // unlikely

    loc_0x08007c34: // orphan
         x8 = [x21 + 0x20]        // 0xdc // 220
         if !x8 jmp 0x8007cdc     // unlikely

    loc_0x08007c3c: // orphan
         x9 = x8 + 0xd8
         ldur q2,[x8,0xf8]        // 0xcf // 207
         x10 = [x8 + 0x158]       // 0xcf // 207
         (q0, 2) = 3
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h] = x10
         x10 = 0x8007000
         [sp, 0x60] = (q0,2)
         (q0, 2) = 3
         [sp, 0x20] = (q2,2)
         q2 = [x9 + 0x50]         // 0xd0 // 208
         ldur q0,[x8,0xe8]        // 0xcf // 207
         x9 = [var_28h]           // 0x4
         [sp, 0x40] = (q1,2)
         ldur q1,[x8,0xd8]        // 0xcf // 207
         x8 = [x10]               // 0xd1 // 209
         x9 = x9 | 1
         [var_28h] = x9
         x0 = [x21 + 0x20]        // 0xdc // 220
         [sp] = (q1,2)
         blr x8                   // 0xffffffff(0x178010, 0x178000, 0x0, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x8007cb4      // likely

    loc_0x08007c98: // orphan
         x8 = [x21 + 0x20]        // 0xdc // 220
         x9 = [var_28h]           // 0x4
         x10 = [x8 + 0x100]       // 0xcf // 207
         bfxil x10,x9,0, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8 + 0x100] = x10
         jmp 0x8007cb4

    loc_0x08007cb0: // orphan
         w19 = ~0x1

    loc_0x08007cb4: // orphan
         // CODE XREFS from sym.disable_hw_bp @ 0x8007cac, 0x8007ce0
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         0x8007cbc ()             // 0x8007cbc(0x8007000, 0x0, 0x0, 0x0)
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_a0h]          // 0x4
         (x29, 2) = 3
         sp = arg_c0h
         hint 0x1d
         

    loc_0x08007cdc: // orphan
         w19 = ~0x15
         jmp 0x8007cb4

}

/* ===== 0x08007ce8 ===== */
int sym.set_hwbp_reg_config (int esi, int edx) {
    loc_0x8007ce8:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8007f94 // likely
            
    loc_0x8007f94:
        w19 = ~0x15
         // do {
    loc_0x8007f98:
        // CODE XREF from sym.set_hwbp_reg_config @ 0x8007d94
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x21 = [var_10h] // 0x4
        (x29, 2) = 3
        hint 0x1d
        0x08007fac
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8007d00
    loc_0x8007d24:
        w9 = [x19]    // 0xda // 218
        jmp 0x8007d38
         // do {
    loc_0x8007d38:
        // CODE XREF from sym.set_hwbp_reg_config @ 0x8007d28
        w10 = [x21 + 0x10] // 0xdc // 220
        if (w10 == w9)
        b.ne 0x8007d2c // likely
         // } while (?);
        }
        return eax;
    loc_0x8007d44:
        x10 = [x21 + 0x18] // 0xdc // 220
        x11 = [x19 + 8] // 0xda // 218
        if (x10 == x11)
        b.ne 0x8007d2c // likely
    loc_0x8007d2c:
        x21 = [x21]   // 0xdc // 220
        if (x21 == x8)
        b.eq 0x8007d84 // unlikely
            
    loc_0x8007d84:
        w19 = ~0x1
         // do {
    loc_0x8007d88:
        // CODE XREF from sym.set_hwbp_reg_config @ 0x800820c
        x0 = 0x8007000
        x0 = x0 + 0   // int64_t arg1
        0x8007d90 ()  // 0x8007d90(0x8007000, 0x0, 0x0, 0x0)
        jmp 0x8007f98
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08007d54: // orphan
             w8 = 0x250c              // '\f%'
             x20 = x21 + x8
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             0x8007d60 ()             // 0x8007d60(0x250c, 0x0, 0x0, 0x0)
             w8 = [x19 + 0x14]        // 0xda // 218
             x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             if (w8 == 1)
             b.lt 0x8007fb0           // likely

    loc_0x08007d74: // orphan
         w10 = [x21 + 0x34]       // 0xdc // 220
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x19 + 0x58
         jmp 0x8007db4

    loc_0x08007d98: // orphan
         x12 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007d9c: // orphan
         // XREFS: CODE 0x08007dfc  CODE 0x08007e40  CODE 0x08007e5c  
         // XREFS: CODE 0x08007e78  CODE 0x08007e94  CODE 0x08007eb0  
         // XREFS: CODE 0x08007ecc  CODE 0x08007ee8  CODE 0x08007f04  
         // XREFS: CODE 0x08007f20  CODE 0x08007f3c  CODE 0x08007f58  
         // XREFS: CODE 0x08007f74  CODE 0x08007f90  
         x12 = x21 + x12,lsl 3

    loc_0x08007da0: // orphan
         // CODE XREF from sym.set_hwbp_reg_config @ 0x8007e24
         [x12 + 0x78] = x11
         x11 = [x19 + 0x14]       // 0xda // 218
         x8 = x8 + 1
         if (x8 == x11)
         b.ge 0x8007fb0           // likely

    loc_0x08007db4: // orphan
         // CODE XREF from sym.set_hwbp_reg_config @ 0x8007d80
         if (w10 == 0xf)
         jmp ifgt 0x8007fb0       // unlikely

    loc_0x08007dbc: // orphan
         if (x8 == 0x10)
         b.eq 0x8008210           // unlikely

    loc_0x08007dc4: // orphan
         x11 = x9 + x8,lsl 2
         if (w10 == 1)
         ldur w12,[x11,-0x40]     // 0xd2 // 210
         x11 = [x9 + x8,lsl 3]    // 0xcf000000d0 // 889058230480
         b.lt 0x8007e00           // likely

    loc_0x08007dd8: // orphan
         w13 = [x21 + 0x38]       // 0xdc // 220
         if (w13 == w12)
         b.eq 0x8007d98           // likely

    loc_0x08007de4: // orphan
         if (x10 == 1)
         b.eq 0x8007e04           // unlikely

    loc_0x08007dec: // orphan
         w13 = [x21 + 0x3c]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007e28           // unlikely

    loc_0x08007df8: // orphan
         w12 = 0x1
         jmp 0x8007d9c

    loc_0x08007e00: // orphan
         if x10 jmp 0x8008210     // unlikely

    loc_0x08007e04: // orphan
         x10 = x21 + x10,lsl 2
         [x10 + 0x38] = w12
         w10 = [x21 + 0x34]       // 0xdc // 220
         if (w10 == 0xf)
         b.hi 0x8008210           // unlikely

    loc_0x08007e18: // orphan
         x12 = x21 + x10,lsl 3
         x10 = x10 + 1
         [x21 + 0x34] = w10
         jmp 0x8007da0

    loc_0x08007e28: // orphan
         if (x10 == 2)
         b.eq 0x8007e04           // unlikely

    loc_0x08007e30: // orphan
         w13 = [x21 + 0x40]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007e44           // unlikely

    loc_0x08007e3c: // orphan
         w12 = 0x2
         jmp 0x8007d9c

    loc_0x08007e44: // orphan
         if (x10 == 3)
         b.eq 0x8007e04           // unlikely

    loc_0x08007e4c: // orphan
         w13 = [x21 + 0x44]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007e60           // unlikely

    loc_0x08007e58: // orphan
         w12 = 0x3
         jmp 0x8007d9c

    loc_0x08007e60: // orphan
         if (x10 == 4)
         b.eq 0x8007e04           // unlikely

    loc_0x08007e68: // orphan
         w13 = [x21 + 0x48]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007e7c           // unlikely

    loc_0x08007e74: // orphan
         w12 = 0x4
         jmp 0x8007d9c

    loc_0x08007e7c: // orphan
         if (x10 == 5)
         b.eq 0x8007e04           // unlikely

    loc_0x08007e84: // orphan
         w13 = [x21 + 0x4c]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007e98           // unlikely

    loc_0x08007e90: // orphan
         w12 = 0x5
         jmp 0x8007d9c

    loc_0x08007e98: // orphan
         if (x10 == 6)
         b.eq 0x8007e04           // unlikely

    loc_0x08007ea0: // orphan
         w13 = [x21 + 0x50]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007eb4           // unlikely

    loc_0x08007eac: // orphan
         w12 = 0x6
         jmp 0x8007d9c

    loc_0x08007eb4: // orphan
         if (x10 == 7)
         b.eq 0x8007e04           // unlikely

    loc_0x08007ebc: // orphan
         w13 = [x21 + 0x54]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007ed0           // unlikely

    loc_0x08007ec8: // orphan
         w12 = 0x7
         jmp 0x8007d9c

    loc_0x08007ed0: // orphan
         if (x10 == 8)
         b.eq 0x8007e04           // unlikely

    loc_0x08007ed8: // orphan
         w13 = [x21 + 0x58]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007eec           // likely

    loc_0x08007ee4: // orphan
         w12 = 0x8                // "\""
         jmp 0x8007d9c

    loc_0x08007eec: // orphan
         if (x10 == 9)
         b.eq 0x8007e04           // unlikely

    loc_0x08007ef4: // orphan
         w13 = [x21 + 0x5c]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007f08           // likely

    loc_0x08007f00: // orphan
         w12 = 0x9
         jmp 0x8007d9c

    loc_0x08007f08: // orphan
         if (x10 == 0xa)
         b.eq 0x8007e04           // unlikely

    loc_0x08007f10: // orphan
         w13 = [x21 + 0x60]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007f24           // likely

    loc_0x08007f1c: // orphan
         w12 = 0xa
         jmp 0x8007d9c

    loc_0x08007f24: // orphan
         if (x10 == 0xb)
         b.eq 0x8007e04           // unlikely

    loc_0x08007f2c: // orphan
         w13 = [x21 + 0x64]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007f40           // likely

    loc_0x08007f38: // orphan
         w12 = 0xb
         jmp 0x8007d9c

    loc_0x08007f40: // orphan
         if (x10 == 0xc)
         b.eq 0x8007e04           // unlikely

    loc_0x08007f48: // orphan
         w13 = [x21 + 0x68]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007f5c           // likely

    loc_0x08007f54: // orphan
         w12 = 0xc
         jmp 0x8007d9c

    loc_0x08007f5c: // orphan
         if (x10 == 0xd)
         b.eq 0x8007e04           // unlikely

    loc_0x08007f64: // orphan
         w13 = [x21 + 0x6c]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007f78           // likely

    loc_0x08007f70: // orphan
         w12 = 0xd
         jmp 0x8007d9c

    loc_0x08007f78: // orphan
         if (x10 == 0xe)
         b.eq 0x8007e04           // unlikely

    loc_0x08007f80: // orphan
         w13 = [x21 + 0x70]       // 0xdc // 220
         if (w13 == w12)
         b.ne 0x8007e04           // likely

    loc_0x08007f8c: // orphan
         w12 = 0xe
         // CODE XREF from sym.kp_core_hook_install @ 0x8008bfc
         jmp 0x8007d9c

    loc_0x08007fb0: // orphan
         w8 = [x19 + 0xd8]        // 0xda // 218
         if (w8 == 1)
         b.lt 0x80081c4           // likely

    loc_0x08007fbc: // orphan
         w8 = [x21 + 0xf8]        // 0xdc // 220
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8007fe4

    loc_0x08007fc8: // orphan
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007fcc: // orphan
         // XREFS: CODE 0x0800802c  CODE 0x08008070  CODE 0x0800808c  
         // XREFS: CODE 0x080080a8  CODE 0x080080c4  CODE 0x080080e0  
         // XREFS: CODE 0x080080fc  CODE 0x08008118  CODE 0x08008134  
         // XREFS: CODE 0x08008150  CODE 0x0800816c  CODE 0x08008188  
         // XREFS: CODE 0x080081a4  CODE 0x080081c0  
         x10 = x21 + x10,lsl 2

    loc_0x08007fd0: // orphan
         // CODE XREF from sym.set_hwbp_reg_config @ 0x8008054
         [x10 + 0x13c] = s0
         x10 = [x19 + 0xd8]       // 0xda // 218
         x9 = x9 + 1
         if (x9 == x10)
         b.ge 0x80081c4           // likely

    loc_0x08007fe4: // orphan
         // CODE XREF from sym.set_hwbp_reg_config @ 0x8007fc4
         if (w8 == 0xf)
         jmp ifgt 0x80081c4       // unlikely

    loc_0x08007fec: // orphan
         if (x9 == 0x10)
         b.eq 0x8008210           // unlikely

    loc_0x08007ff4: // orphan
         x11 = x19 + x9,lsl 2
         if (w8 == 1)
         w10 = [x11 + 0xdc]       // 0xd2 // 210
         // XREFS(25)
         s0 = [x11 + 0x11c]       // 0xd2 // 210
         b.lt 0x8008030           // likely

    loc_0x08008008: // orphan
         w11 = [x21 + 0xfc]       // 0xdc // 220
         if (w11 == w10)
         b.eq 0x8007fc8           // unlikely

    loc_0x08008014: // orphan
         if (x8 == 1)
         b.eq 0x8008034           // unlikely

    loc_0x0800801c: // orphan
         w11 = [x21 + 0x100]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x8008058           // likely

    loc_0x08008028: // orphan
         w10 = 0x1
         jmp 0x8007fcc

    loc_0x08008030: // orphan
         if x8 jmp 0x8008210      // unlikely

    loc_0x08008034: // orphan
         x8 = x21 + x8,lsl 2
         [x8 + 0xfc] = w10
         w8 = [x21 + 0xf8]        // 0xdc // 220
         if (w8 == 0xf)
         b.hi 0x8008210           // likely

    loc_0x08008048: // orphan
         x10 = x21 + x8,lsl 2
         x8 = x8 + 1
         [x21 + 0xf8] = w8
         jmp 0x8007fd0

    loc_0x08008058: // orphan
         if (x8 == 2)
         b.eq 0x8008034           // unlikely

    loc_0x08008060: // orphan
         w11 = [x21 + 0x104]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x8008074           // likely

    loc_0x0800806c: // orphan
         w10 = 0x2
         jmp 0x8007fcc

    loc_0x08008074: // orphan
         if (x8 == 3)
         b.eq 0x8008034           // unlikely

    loc_0x0800807c: // orphan
         w11 = [x21 + 0x108]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x8008090           // likely

    loc_0x08008088: // orphan
         w10 = 0x3
         jmp 0x8007fcc

    loc_0x08008090: // orphan
         if (x8 == 4)
         b.eq 0x8008034           // unlikely

    loc_0x08008098: // orphan
         w11 = [x21 + 0x10c]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x80080ac           // likely

    loc_0x080080a4: // orphan
         w10 = 0x4
         jmp 0x8007fcc

    loc_0x080080ac: // orphan
         if (x8 == 5)
         b.eq 0x8008034           // unlikely

    loc_0x080080b4: // orphan
         w11 = [x21 + 0x110]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x80080c8           // likely

    loc_0x080080c0: // orphan
         w10 = 0x5
         jmp 0x8007fcc

    loc_0x080080c8: // orphan
         if (x8 == 6)
         b.eq 0x8008034           // unlikely

    loc_0x080080d0: // orphan
         w11 = [x21 + 0x114]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x80080e4           // likely

    loc_0x080080dc: // orphan
         w10 = 0x6
         jmp 0x8007fcc

    loc_0x080080e4: // orphan
         if (x8 == 7)
         b.eq 0x8008034           // unlikely

    loc_0x080080ec: // orphan
         w11 = [x21 + 0x118]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x8008100           // likely

    loc_0x080080f8: // orphan
         w10 = 0x7
         jmp 0x8007fcc

    loc_0x08008100: // orphan
         if (x8 == 8)
         b.eq 0x8008034           // unlikely

    loc_0x08008108: // orphan
         w11 = [x21 + 0x11c]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x800811c           // likely

    loc_0x08008114: // orphan
         w10 = 0x8                // "\""
         jmp 0x8007fcc

    loc_0x0800811c: // orphan
         if (x8 == 9)
         b.eq 0x8008034           // unlikely

    loc_0x08008124: // orphan
         w11 = [x21 + 0x120]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x8008138           // likely

    loc_0x08008130: // orphan
         w10 = 0x9
         jmp 0x8007fcc

    loc_0x08008138: // orphan
         if (x8 == 0xa)
         b.eq 0x8008034           // unlikely

    loc_0x08008140: // orphan
         w11 = [x21 + 0x124]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x8008154           // likely

    loc_0x0800814c: // orphan
         w10 = 0xa
         jmp 0x8007fcc

    loc_0x08008154: // orphan
         if (x8 == 0xb)
         b.eq 0x8008034           // unlikely

    loc_0x0800815c: // orphan
         w11 = [x21 + 0x128]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x8008170           // likely

    loc_0x08008168: // orphan
         w10 = 0xb
         jmp 0x8007fcc

    loc_0x08008170: // orphan
         if (x8 == 0xc)
         b.eq 0x8008034           // unlikely

    loc_0x08008178: // orphan
         w11 = [x21 + 0x12c]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x800818c           // likely

    loc_0x08008184: // orphan
         w10 = 0xc
         jmp 0x8007fcc

    loc_0x0800818c: // orphan
         if (x8 == 0xd)
         b.eq 0x8008034           // unlikely

    loc_0x08008194: // orphan
         w11 = [x21 + 0x130]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x80081a8           // likely

    loc_0x080081a0: // orphan
         w10 = 0xd
         jmp 0x8007fcc

    loc_0x080081a8: // orphan
         if (x8 == 0xe)
         b.eq 0x8008034           // unlikely

    loc_0x080081b0: // orphan
         w11 = [x21 + 0x134]      // 0xdc // 220
         if (w11 == w10)
         b.ne 0x8008034           // likely

    loc_0x080081bc: // orphan
         w10 = 0xe
         jmp 0x8007fcc

    loc_0x080081c4: // orphan
         w8 = [x21 + 0x34]        // 0xdc // 220
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         if (w8 == 0)
         cset w8,gt
         [x21 + 0x31] = (byte) w8
         w8 = [x19 + 0x10]        // 0xda // 218
         if (w8 == 0)
         cset w8,ne
         [x21 + 0x30] = (byte) w8
         0x80081e8 ()             // 0x80081e8(0x0, 0x0, 0x0, 0x0)
         w1 = [x19]               // 0xda // 218
         x2 = [x19 + 8]           // 0xda // 218
         x0 = 0x8008000
         x0 = x0 + 0              // int64_t arg1
         w3 = [x21 + 0x34]        // 0xdc // 220
         w4 = [x21 + 0xf8]        // 0xdc // 220
         0x8008204 ()             // 0x8008204(0x8008000, 0x1, 0x22, 0x1)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8007d88

    loc_0x08008210: // orphan
         brk 0x5512

}

/* ===== 0x080098ec ===== */
int sym.kp_core_hook_remove (int esi, int edx) {
    loc_0x80098ec:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x8009904 ()  // 0x8009904(0x0, 0x0, 0x0, 0x0)
        if w0 jmp 0x800991c // unlikely
            
    loc_0x800991c:
        // CODE XREF from sym.kp_core_hook_remove @ 0x800998c
        (x20, 2) = 3
        x21 = [var_10h] // 0x4
        (x29, 2) = 3
        hint 0x1d
        0x0800992c
         // } else {
    loc_0x800990c:
        if !x19 jmp 0x8009918 // likely
        }
        return eax;
    loc_0x8009910:
        w8 = (byte) [x19 + 0x54] // 0xda // 218
        if !w8 jmp 0x8009930 // likely
            
    loc_0x8009930:
        w21 = [x19 + 0x20] // 0xda // 218
        tbnz w21,0x1f,0x8009918 // unlikely
    loc_0x8009938:
        if (w21 == 0xf)
        b.hi 0x8009970 // unlikely
            
    loc_0x8009970:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19, 0x48] = (xzr,2)
        [x19, 0x38] = (xzr,2)
        [x19, 0x28] = (xzr,2)
        [x19, 0x18] = (xzr,2)
        [x19, 8] = (xzr,2)
        [x19] = xzr
        jmp 0x800991c
    loc_0x08009918: // orphan
             w0 = ~0x15

    loc_0x08009940: // orphan
         x20 = 0x8009000
         x20 = x20 + 0
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800994c ()             // "(" // 0x800994c(0x8009000, 0x0, 0x0, 0x0)
         w8 = 0x1
         x9 = 0x8009000
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x8 = x8 << x21
         x10 = [x9]               // 0xd0 // 208
         bic x8,x10,x8            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x9] = x8
         0x800996c ()             // 0x800996c(0x8009000, 0x0, 0x0, 0x0)

}

/* ===== 0x08009994 ===== */
int sym.kp_core_patch_insn (int esi, int edx) {
    loc_0x8009994:
        hint 0x19
        sp = sp - 0x30
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x20,2)
        x29 = var_10h
        x19 = 0x8009000
        [var_8h] = x0 // arg1
        x8 = [x19]    // 0xda // 218
        [var_4h] = w1 // arg2
        if x8 jmp 0x80099d0 // likely
            
    loc_0x80099d0:
        x20 = 0x8009000
        x9 = [x20]    // 0xdb // 219
        if !x9 jmp 0x80099f4 // unlikely
            
    loc_0x80099f4:
        x0 = 0x8009000
        x0 = x0 + 0   // int64_t arg1
        0x80099fc ()  // 0x80099fc(0x8009000, 0x0, 0x0, 0x0)
        x8 = [x19]    // 0xda // 218
        [x20] = x0
        if x8 jmp 0x80099e0 // unlikely
            
    loc_0x80099e0:
        x0 = var_8h
        x1 = var_4h
        w2 = 0x1
        blr x8        // xzr(0x178008, 0x178004, 0x1, 0x0)
        jmp 0x8009a10
         // do {
    loc_0x8009a10:
        // CODE XREF from sym.kp_core_patch_insn @ 0x80099f0
        (x20, 2) = 3
        (x29, 2) = 3
        sp = arg_30h
        hint 0x1d
        0x08009a20
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800a078 ===== */
int sym.ptrace_spoof_add (int esi, int edx) {
    loc_0x800a078:
        if (w0 == 1)  // arg1
        b.lt 0x800a114 // likely
            
    loc_0x800a114:
        w0 = ~0x15
        // lr
         // } else {
    loc_0x800a080:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x800a000
        x0 = x0 + 0   // int64_t arg1
        0x800a09c ()  // 0x800a09c(0x800a000, 0x0, 0x0, 0x0)
        x8 = 0x800a000
        x8 = x8 + 0
        x9 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        }
        return eax;
    loc_0x0800a0ac: // orphan
             x9 = [x9]                // 0xd0 // 208
             if (x9 == x8)
             b.eq 0x800a0dc           // unlikely

    loc_0x0800a0b8: // orphan
         w10 = [x9 + 0x10]        // 0xd0 // 208
         if (w10 == w19)
         b.ne 0x800a0ac           // unlikely

    loc_0x0800a0c4: // orphan
         if !x9 jmp 0x800a0dc     // likely

    loc_0x0800a0c8: // orphan
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800a0d0 ()             // 0x800a0d0(0x800a000, 0x0, 0x0, 0x0)

    loc_0x0800a0d4: // orphan
         // CODE XREF from sym.ptrace_spoof_add @ 0x800a144
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800a104

    loc_0x0800a0dc: // orphan
         x8 = 0x800a000
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x228
         x0 = [x8]                // 0xcf // 207 // int64_t arg1
         0x800a0ec ()             // 0x800a0ec(0x2a1f03e094000000, 0xdc0, 0x228, 0x0)
         if x0 jmp 0x800a11c      // likely

    loc_0x0800a0f4: // orphan
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800a0fc ()             // 0x800a0fc(0x800a000, 0x0, 0x0, 0x0)
         w0 = ~0xb

    loc_0x0800a104: // orphan
         // CODE XREF from sym.ptrace_spoof_add @ 0x800a0d8
         x19 = [var_10h]          // 0x4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0800a11c: // orphan
         [x0 + 0x10] = w19
         [x0 + 0x14] = (byte) wzr
         sym.list_add_tail ()     // sym.list_add_tail(0x0)
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800a130 ()             // 0x800a130(0x800a000, 0x0, 0x0, 0x0)
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800a140 ()             // 0x800a140(0x800a000, 0x0, 0x0, 0x0)
         jmp 0x800a0d4

}

/* ===== 0x0800a1a8 ===== */
int sym.ptrace_spoof_remove (int esi, int edx) {
    loc_0x800a1a8:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x800a000
        x0 = x0 + 0   // int64_t arg1
        0x800a1c4 ()  // 0x800a1c4(0x800a000, 0x0, 0x0, 0x0)
        x8 = 0x800a000
        x8 = x8 + 0
        x9 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800a1d4:
        x9 = [x9]     // 0xd0 // 208
        if (x9 == x8)
        b.eq 0x800a1f0 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800a1e0:
        w10 = [x9 + 0x10] // 0xd0 // 208
        if (w10 == w19)
        b.ne 0x800a1d4 // likely
    loc_0x800a1ec:
        if x9 jmp 0x800a210 // unlikely
            
    loc_0x800a210:
        x8 = [x9 + 8] // 0xd0 // 208
        x10 = [x8]    // 0xcf // 207
        if (x10 == x9)
        b.ne 0x800a23c // likely
            
    loc_0x800a23c:
        x0 = x9       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800a240 ()  // 0x800a240(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x800a244:
        // CODE XREF from sym.ptrace_spoof_remove @ 0x800a238
        x8 = 0x100
        w10 = 0x22    // '\"'
        x0 = x9       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x8 = 0xdead   // '\xad\xde'
        x10 = x8 | x10
        [x9] = (x8,2)
        0x800a25c ()  // 0x800a25c(0x0, 0x0, 0x0, 0x0)
        x0 = 0x800a000
        x0 = x0 + 0   // int64_t arg1
        0x800a268 ()  // 0x800a268(0x800a000, 0x0, 0x0, 0x0)
        x0 = 0x800a000
        x0 = x0 + 0   // int64_t arg1
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800a278 ()  // 0x800a278(0x800a000, 0x0, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800a200
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800a200: // orphan
             // CODE XREF from sym.ptrace_spoof_remove @ 0x800a280
             x19 = [var_10h]          // 0x4 // 4
             (x29, 2) = 3
             hint 0x1d
             

    loc_0x0800a230: // orphan
         [x10 + 8] = x8
         [x8] = x10
         jmp 0x800a244

}

/* ===== 0x0800b938 ===== */
int sym.__mmu_notifier_arch_invalidate_secondary_tlbs (int esi, int edx) {
    loc_0x800b938:
        // lr
         // (break)
}

/* ===== 0x08036c4c ===== */
int sym.arm64_decode_insn (int esi, int edx) {
    loc_0x8036c4c:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x8, 0x40] = (xzr,2)
        [x8, 0x30] = (xzr,2)
        [x8, 0x20] = (xzr,2)
        [x8, 0x10] = (xzr,2)
        w8 = w0 >> 0x10 // arg1
        [x19] = (xzr,2)
        [x19] = w0    // arg1
        if w8 jmp 0x8036c94 // unlikely
            
    loc_0x8036c94:
        ubfx w8,w0,0x19, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w8 == 0xf)
        b.hi 0x8036d10 // unlikely
            
    loc_0x8036d10:
        w0 = 0x3
        [x19 + 0x10] = xzr
         // do {
    loc_0x8036d18:
        // CODE XREF from sym.arm64_decode_insn @ 0x8036c90
        [x19 + 4] = w0
        if !x19 jmp 0x8036dd8 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08036d20: // orphan
             w8 = [x19 + 0x1c]        // 0xda // 218
             w12 = 0x20
             x11 = x8 & 8
             w10 = w8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x14 = x8 & 0x10
             x9 = x11 >> 3
             x13 = x11 << 1
             if (w14 == 0)
             bfi x12,x9,4, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x9 = x10 >> 1
             csel x10,x13,x12, eq
             if ((w8 & 0x40) == 0)
             w12 = w11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             bfi x10,x9,7, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w9 = 0x2
             w9 = 0x20
             x9 = x10 | x9
             csel x9,x10,x9, eq
             if (w11 == 0)
             x10 = x9 | 2
             csel x13,x9,x10, eq
             x9 = x9 | x12
             w10 = [x19 + 0x14]       // 0xda // 218
             x12 = x13 | x14,lsr 4
             x13 = x9 | 4
             if (w14 == 0)
             csel x9,x9,x13, eq
             if ((w8 & 0x20) == 0)
             w8 = w10 - 1
             csel x9,x12,x9, eq
             if (w8 == 0x2e)
             b.hi 0x8036eb4           // unlikely

    loc_0x08036da0: // orphan
         x12 = 0x8036000
         x12 = x12 + 0
         x13 = 0x8036dbc
         w14 = (byte) [x12 + x8]  // 0xcf000000d3 // 889058230483
         x13 = x13 + x14,lsl 2
         x8 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         br x13

    loc_0x08036dd8: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8036ea0

    loc_0x08036ea0: // orphan
         // CODE XREFS from sym.arm64_decode_insn @ 0x8036ddc, 0x8036edc, 0x8036f4c, 0x8036f54, 0x8036f5c
         [x19 + 8] = x8
         x19 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08036eb4: // orphan
         w8 = [x19 + 0x10]        // 0xda // 218
         w11 = w8 - 1
         if (w11 == 2)
         b.hs 0x8036f40           // likely

    loc_0x08036ec4: // orphan
         if (w10 == 0x22)
         b.eq 0x8036ed4           // unlikely

    loc_0x08036ecc: // orphan
         if (w10 == 0x1d)
         b.ne 0x8036f58           // likely

    loc_0x08036ed4: // orphan
         // CODE XREFS from sym.arm64_decode_insn @ 0x8036cb0, 0x8036cb4
         w8 = 0x243
         x8 = x9 | x8
         jmp 0x8036ea0

    loc_0x08036f40: // orphan
         if (w8 == 5)
         b.ne 0x8036f50           // likely

    loc_0x08036f48: // orphan
         x8 = x9 | 0xc
         jmp 0x8036ea0

    loc_0x08036f50: // orphan
         x8 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8036ea0

    loc_0x08036f58: // orphan
         x8 = x9 | 3
         jmp 0x8036ea0

}

/* ===== 0x0803703c ===== */
int sym.arm64_decode_direct_target (int esi, int edx) {
    loc_0x803703c:
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if !x0 jmp 0x8037090 // likely
            
    loc_0x8037090:
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // lr
         // } else {
    loc_0x8037044:
        if !x2 jmp 0x8037090 // likely
        }
        return eax;
    loc_0x8037048:
        w8 = [x0 + 4] // 0xc7 // 199 // arg1
        if !w8 jmp 0x8037058 // likely
            
    loc_0x8037058:
        w9 = [x0 + 0x14] // 0xc7 // 199 // arg1
        if (w9 == 0x2c)
        b.hi 0x8037090 // unlikely
    loc_0x8037064:
        w10 = 0x1
        x11 = 0xe300
        x10 = x10 << x9
        x11 = 0x7
        x11 = 0x1800
        if ((x10 & x11) == 0)
        b.eq 0x8037098 // unlikely
            
    loc_0x8037098:
        if (x9 == 0x13)
        b.ne 0x8037090 // likely
    loc_0x80370a0:
        x1 = x1 & 0xfffffffffffff000 // arg2
        jmp 0x8037080
    loc_0x08037050: // orphan
             w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
                                      // lr

    loc_0x08037080: // orphan
         // CODE XREF from sym.arm64_decode_direct_target @ 0x80370a4
         x8 = [x0 + 0x28]         // 0xc7 // 199 // arg1
         x8 = x8 + x1             // arg2
         [x2] = x8                // arg3
         w8 = 0x1

}

/* ===== 0x080370ac ===== */
int sym.arm64_decode_memory_address (int esi, int edx) {
    loc_0x80370ac:
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if !x0 jmp 0x803717c // likely
            
    loc_0x803717c:
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // lr
         // } else {
    loc_0x80370b4:
        if !x4 jmp 0x803717c // likely
        }
        return eax;
    loc_0x80370b8:
        w8 = [x0 + 4] // 0xc7 // 199 // arg1
        if w8 jmp 0x8037104 // unlikely
            
    loc_0x8037104:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // lr
         // } else {
    loc_0x80370c0:
        w8 = [x0 + 0x10] // 0xc7 // 199 // arg1
        if (w8 == 3)
        b.ne 0x8037104 // likely
        }
        return eax;
    loc_0x80370cc:
        [x4, 8] = (xzr,2) // arg5
        [x4] = xzr    // arg5
        w8 = [x0 + 0x30] // 0xc7 // 199 // arg1
        w8 = w8 - 1
        if (w8 == 6)
        b.hi 0x8037104 // likely
    loc_0x80370e4:
        x9 = 0x8037000
        x9 = x9 + 0
        x10 = 0x80370fc
        w11 = (byte) [x9 + x8] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11,lsl 2
        br x10
         // (break)
}

/* ===== 0x08022068 ===== */
int sym.brk_bp_clear_all (int esi, int edx) {
    loc_0x8022068:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8022000
        x0 = x0 + 0
        0x8022084 ()  // 0x8022084(0x8022000, 0x0, 0x0, 0x0)
        x0 = 0x8022000
        x0 = x0 + 0
        0x8022090 ()  // 0x8022090(0x8022000, 0x0, 0x0, 0x0)
        x21 = 0x8022000
        x21 = x21 + 0
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = [x21]   // 0xdc // 220
        if (x19 == x21)
        b.eq 0x8022108 // unlikely
            
    loc_0x8022108:
        x0 = 0x8022000
        x0 = x0 + 0
        0x8022110 ()  // 0x8022110(0x8022000, 0x0, 0x0, 0x0)
         // do {
    loc_0x8022114:
        // CODE XREF from sym.brk_bp_clear_all @ 0x8022104
        x19 = [x21]   // 0xdc // 220
        if (x19 == x21)
        b.eq 0x80221a0 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080220b4: // orphan
             [x9 + 0x7f0] = (byte) wzr
             [x9 + 0x7e0] = (byte) w8
             x9 = [x9]                // 0xd0 // 208
             if (x9 == x21)
             b.ne 0x80220b4           // unlikely

    loc_0x080220c8: // orphan
         x0 = 0x8022000
         x0 = x0 + 0
         0x80220d0 ()             // 0x80220d0(0x8022000, 0x0, 0x0, 0x0)
         if (x19 == x21)
         b.eq 0x8022114           // likely

    loc_0x080220dc: // orphan
         sym.brk_uninstall_switch_hook ()
         x19 = 0x8022000
         w8 = (byte) [x19]        // 0xda // 218
         if (w8 == 1)
         b.ne 0x8022100           // likely

    loc_0x080220f0: // orphan
         x0 = 0x8022000
         x0 = x0 + 0
         0x80220f8 ()             // 0x80220f8(0x8022000, 0x0, 0x0, 0x0)
         [x19] = (byte) wzr

    loc_0x08022100: // orphan
         sym.brk_uninstall_debug_hook () // sym.brk_uninstall_debug_hook(0x0)
         jmp 0x8022114

    loc_0x08022120: // orphan
         x20 = 0x8022000
         x20 = x20 + 0

    loc_0x08022128: // orphan
         x22 = [x19]              // 0xda // 218
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_quiesce_entry () // sym.brk_quiesce_entry(0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8022138 ()             // 0x8022138(0x0, 0x0, 0x0, 0x0)
         x8 = [x19 + 8]           // 0xda // 218
         x9 = [x8]                // 0xcf // 207
         if (x9 == x19)
         x9 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x8022194           // unlikely

    loc_0x08022150: // orphan
         x10 = [x19]              // 0xda // 218
         x11 = [x10 + 8]          // 0xd1 // 209
         if (x11 == x19)
         b.ne 0x8022194           // unlikely

    loc_0x08022160: // orphan
         [x10 + 8] = x8
         [x8] = x10

    loc_0x08022168: // orphan
         // CODE XREF from sym.brk_bp_clear_all @ 0x802219c
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19] = x19
         [x19 + 8] = x19
         0x8022178 ()             // 0x8022178(0x0, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.brk_destroy_entry () // sym.brk_destroy_entry(0x0, 0x0)
         if (x22 == x21)
         x19 = x22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x8022128           // unlikely

    loc_0x08022190: // orphan
         jmp 0x80221a0

    loc_0x08022194: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8022198 ()             // 0x8022198(0x0, 0x0, 0x0, 0x0)
         jmp 0x8022168

    loc_0x080221a0: // orphan
         // CODE XREF from sym.brk_bp_clear_all @ 0x8022190
         x0 = 0x8022000
         x0 = x0 + 0
         0x80221a8 ()             // 0x80221a8(0x8022000, 0x0, 0x0, 0x0)
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

}

/* ===== 0x08038314 ===== */
int sym.arm64_decode_ldst (int esi, int edx) {
    loc_0x8038314:
        w8 = w0 >> 0x18 // arg1
        x9 = xzr | 0xcccccccccccccccc
        x9 = x9 | 0xff00ff00ff00ff
        x8 = x9 >> x8
        tbnz w8,0,0x803840c // likely
            
    loc_0x803840c:
        w0 = 0x4
        // lr
         // } else {
    loc_0x8038328:
        ubfx x8,x0,0x18, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = 0x8038000
        x9 = x9 + 0   // "H"
        w8 = (byte) [x9 + x8] // 0xcf000000d0 // 889058230480
        w9 = 0x3
        [x1 + 0x10] = w9 // arg2
        w8 = w8 - 1
        if (w8 == 5)
        b.hi 0x803840c // likely
        }
        return eax;
    loc_0x803834c:
        x9 = 0x8038000
        x9 = x9 + 0   // "H"
        x10 = 0x8038364
        w11 = (word) [x9 + x8,lsl 1] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11,lsl 2
        br x10
         // (break)
}

/* ===== 0x080377a0 ===== */
int sym.arm64_decode_data_processing_register (int esi, int edx) {
    loc_0x80377a0:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = 0x1f20   // ' \x1f'
        w9 = 0xb00
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w8 = w0 & w8  // arg1
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w10 = 0x2
        if (w8 == w9)
        [x1 + 0x10] = w10 // arg2
        b.eq 0x8037890 // unlikely
            
    loc_0x8037890:
        if ((w20 & 0x200000) == 0)
        w8 = 0x1a
        w9 = 0x1
        cinc w8,w8,ne
        if ((w20 & 0x40000000) == 0)
        w10 = w20 & 0x1f
        cinc w9,w9,ne
        [x19 + 0x20] = (byte) w10
        ubfx w10,w20,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19, 0x14] = (w8,2)
        ubfx w8,w20,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w20 == 0)
        [x19 + 0x21] = (byte) w10
        w9 = 0x20
        w10 = 0x40    // '@'
        [x19 + 0x23] = (byte) w8
        ubfx w8,w20,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0x22] = (byte) w8
        csel w8,w10,w9, lt
        [x19 + 0x27] = (byte) w8
        tbnz w20,0x1f,0x8037970 // unlikely
            
    loc_0x8037970:
        w8 = [x19 + 0x1c] // 0xda // 218
        w8 = w8 | 1
        [x19 + 0x1c] = w8
        tbz w20,0x15,0x80378e8 // likely
            
    loc_0x80378e8:
        ubfx w8,w20,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w9,w20,0xa, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = 0xc0    // '\xc0'
        bics wzr,w10,w20 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x3
        [x19 + 0x40] = (byte) w8
        [x19 + 0x41] = (byte) w9
        b.eq 0x8037c4c // unlikely
            
    loc_0x8037c4c:
        // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x8037914, 0x80379a0, 0x80379bc, 0x8037b78, 0x8037e00
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08037c58
         // } else {
    loc_0x8037908:
        w8 = w20 & 0x80008000
        if (w8 == 8)
        b.ne 0x80379a4 // likely
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x80377d4
    loc_0x80377e4:
        w8 = w20 & 0x1f000000
        w9 = 0xa00
        if (w8 == w9)
        b.ne 0x8037918 // likely
            
    loc_0x8037918:
        w8 = w20 & 0x3fe00000
        w9 = 0x1a80   // '\x80\x1a'
        if (w8 == w9)
        b.ne 0x80379c0 // likely
            
    loc_0x80379c0:
        w8 = w20 & 0x7fe00000
        w9 = 0x1ac0   // '\xc0\x1a'
        if (w8 == w9)
        b.ne 0x8037a54 // likely
            
    loc_0x8037a54:
        w8 = w20 & 0x7f000000
        w9 = 0x1b00
        if (w8 == w9)
        b.ne 0x8037b1c // likely
            
    loc_0x8037b1c:
        w8 = w20 & 0x1ffffc00
        w9 = 0x1a00
        w8 = w8 & 0xffe0ffff
        if (w8 == w9)
        b.ne 0x8037b7c // likely
            
    loc_0x8037b7c:
        w8 = 0x410
        w9 = 0x3a40   // '@:'
        w8 = 0x3fe0   // '\xe0?'
        w8 = w20 & w8
        if (w8 == w9)
        b.ne 0x8037be0 // likely
            
    loc_0x8037be0:
        w8 = 0x6b04
        w8 = 0x3
        if (w8 == w20)
        b.ne 0x8037ce4 // likely
            
    loc_0x8037ce4:
        w9 = 0xa3f    // '?\n'
        w8 = w20 | 0x400
        w9 = 0x6d6
        if (w9 == w8)
        b.ne 0x8037da4 // likely
            
    loc_0x8037da4:
        w8 = w20 & 0x7fff0000
        w9 = 0x5ac0   // '\xc0Z'
        if (w8 == w9)
        b.ne 0x8037e04 // likely
            
    loc_0x8037e04:
        [x19 + 0x14] = wzr // arg1
        jmp 0x8037dfc
         // do {
    loc_0x8037dfc:
        // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x8037c0c, 0x8037d04, 0x8037e08
        w0 = 0x1
        jmp 0x8037c4c
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
        goto loc_0x80377f4
    loc_0x803783c:
        w8 = [x19 + 0x1c] // 0xda // 218
        w8 = w8 | 1
        [x19 + 0x1c] = w8
         // do {
    loc_0x8037848:
        ubfx w8,w20,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w9,w20,0xa, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = w20 & 0x80008000
        if (w10 == 8)
        [x19 + 0x40] = (byte) w8
        [x19 + 0x41] = (byte) w9
        b.eq 0x803799c // unlikely
         // } while (?);
        }
        return eax;
    loc_0x8037864:
        tbz w20,0x15,0x8037874 // likely
            
    loc_0x8037874:
        w8 = 0x6000
        bics wzr,w8,w20 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        b.ne 0x80379b8 // likely
            
    loc_0x80379b8:
        // CODE XREF from fcn.08037e48 @ 0x8037e54
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        jmp 0x8037c4c
    loc_0x08037868: // orphan
             w8 = [x19 + 0x1c]        // 0xda // 218
             w8 = w8 | 0x800
             [x19 + 0x1c] = w8

    loc_0x08037880: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218

    loc_0x08037884: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8037bdc
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 | 2
         jmp 0x8037c48

    loc_0x08037914: // orphan
         jmp 0x8037c4c

    loc_0x08037968: // orphan
         tbnz w20,0xb,0x803799c   // unlikely

    loc_0x0803796c: // orphan
         jmp 0x8037af4

    loc_0x0803799c: // orphan
         w0 = 0x3
         jmp 0x8037c4c

    loc_0x080379a4: // orphan
         tbz w20,0x1d,0x80379b4   // likely

    loc_0x080379a8: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x1c] = w8

    loc_0x080379b4: // orphan
         tbnz w20,0x1e,0x8037c3c  // unlikely

    loc_0x08037a10: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x1c] = w8

    loc_0x08037a1c: // orphan
         ubfx w8,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 - 2
         if (w8 == 0x19)
         b.hi 0x8037df8           // likely

    loc_0x08037a2c: // orphan
         x9 = 0x8037000
         x9 = x9 + 0
         x10 = 0x8037a4c
         w11 = (byte) [x9 + x8]   // 0xcf000000d0 // 889058230480
         x10 = x10 + x11,lsl 2    // 0x8037e48
                                  // fcn.08037e48
         w9 = 0x22                // '\"'
         w8 = 0x1c
         br x10

    loc_0x08037aa0: // orphan
         w9 = [x19 + 0x1c]        // 0xda // 218
         w9 = w9 | 1
         [x19 + 0x1c] = w9

    loc_0x08037aac: // orphan
         if (w10 == 6)
         w0 = 0x3
         b.hi 0x8037c4c           // unlikely

    loc_0x08037ab8: // orphan
         x11 = 0x8037000
         x11 = x11 + 0
         ubfx w9,w20,0xf, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = 0x8037ad4
         w13 = (byte) [x11 + x10] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2
         br x12

    loc_0x08037ae4: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x1c] = w8
         tbnz w20,0xb,0x803799c   // unlikely

    loc_0x08037af4: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x803796c
         w8 = w20 >> 0x1c
         ubfx w9,w20,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 & 2
         [x19 + 0x44] = (byte) w9
         bfxil w8,w20,0xa, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x8037b5c     // likely

    loc_0x08037b0c: // orphan
         if (w8 == 1)
         b.ne 0x8037b64           // likely

    loc_0x08037b14: // orphan
         w8 = 0x13
         jmp 0x8037b70

    loc_0x08037b4c: // orphan
         if (w8 == 1)
         b.ne 0x8037c18           // likely

    loc_0x08037b54: // orphan
         w8 = 0x17
         jmp 0x8037c24

    loc_0x08037b5c: // orphan
         w8 = 0x12
         jmp 0x8037b70

    loc_0x08037b64: // orphan
         if (w8 == 2)
         w8 = 0x14
         cinc w8,w8,ne

    loc_0x08037b70: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x8037b18, 0x8037b60
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x18] = w8
         jmp 0x8037c4c

    loc_0x08037bcc: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w9 = (byte) [x19 + 0x22] // 0xda // 218
         w8 = w8 | 0x2000
         [x19 + 0x28] = x9
         jmp 0x8037884

    loc_0x08037c00: // orphan
         w8 = (byte) [x19 + 0x21] // 0xda // 218
         if (w8 == 0x1f)
         b.ne 0x803799c           // likely

    loc_0x08037c0c: // orphan
         jmp 0x8037dfc

    loc_0x08037c10: // orphan
         w8 = 0x16
         jmp 0x8037c24

    loc_0x08037c18: // orphan
         if (w8 == 2)
         w8 = 0x18
         cinc w8,w8,ne

    loc_0x08037c24: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x8037b58, 0x8037c14
         [x19 + 0x18] = w8
         tbz w20,0x1d,0x8037c38   // likely

    loc_0x08037c2c: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x1c] = w8

    loc_0x08037c38: // orphan
         tbz w20,0x1e,0x80379b8   // likely

    loc_0x08037c3c: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 | 4

    loc_0x08037c48: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x803788c
         [x19 + 0x1c] = w8

    loc_0x08037dd4: // orphan
         x9 = 0x8037000
         x9 = x9 + 0
         x10 = 0x8037df0
         w11 = (byte) [x9 + x8]   // 0xcf000000d0 // 889058230480
         x10 = x10 + x11,lsl 2
         w8 = 0x32                // '2'
         br x10

    loc_0x08037df8: // orphan
         [x19 + 0x18] = wzr

}

/* ===== 0x08038eac ===== */
int sym.arm64_decode_simd (int esi, int edx) {
    loc_0x8038eac:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = 0xe00
        [var_1ch] = (byte) wzr // arg1
        bics wzr,w8,w0 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        b.ne 0x8038fa4 // likely
            
    loc_0x8038fa4:
        w0 = 0x4
        jmp 0x80395a0
         // do {
    loc_0x80395a0:
        // XREFS: CODE 0x08038fa8  CODE 0x08039084  CODE 0x08039144
        // XREFS: CODE 0x08039264  CODE 0x080393a0  CODE 0x08039594
        // XREFS: CODE 0x0803965c  CODE 0x08039714  CODE 0x08039798
        // XREFS: STRING 0x080397dc  CODE 0x08039868  CODE 0x080398d8
        // XREFS: CODE 0x08039960  CODE 0x080399b4  CODE 0x08039a1c
        // XREFS: CODE 0x08039a5c
        (x20, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x080395b4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8038ed4
    loc_0x8038f30:
        ubfx w8,w20,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !w8 jmp 0x8039088 // likely
            
    loc_0x8039088:
        w8 = 0x1
        x10 = 0x1
        w9 = w20 >> 0xd
        w8 &= w8
        x10 = 0xb
        w11 = 0x7c    // '|'
        ubfx w12,w20,0x11, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0x28] = x10
        csel x10,xzr,x11, eq
        w8 = w8 << 7
        w11 = w20 << 6
        [x19 + 0x45] = (byte) w9
        x9 = x10 | x12
        w10 = 0x20
        w8 = w8 ^ 0x80
        w11 = w11 & 0x780000
        [x19 + 0x27] = (byte) w10
        x8 = x9 | x8
        ubfx w9,w20,0xd, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0x46] = (byte) w10
        x8 = x11 | x8,lsl 23
        w10 = 0x1f
        jmp 0x8039130
         // do {
    loc_0x8039130:
        // CODE XREFS from sym.arm64_decode_simd @ 0x8038fa0, 0x8039008, 0x803900c, 0x80390e0
        w9 = w9 >> 7
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = x9 << x10
        x8 = x9 | x8
        [x19 + 0x38] = x8
        jmp 0x80395a0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8038f38
    loc_0x8038f40:
        if (w8 == 3)
        b.ne 0x803959c // likely
            
    loc_0x803959c:
        w0 = 0x3
    loc_0x08038f48: // orphan
             w8 = 0x1
             x10 = 0x1
             w9 = w20 >> 0xd
             w8 &= w8
             x10 = 0xb
             w11 = 0xc
             ubfx w12,w20,0x11, 2     // '\xff\xff\xff\xff\xff\xff\xff\xff'
             [x19 + 0x28] = x10
             csel x10,xzr,x11, eq
             w8 = w8 << 4
             w11 = w20 >> 7
             [x19 + 0x45] = (byte) w9
             x9 = x10 | x12
             w10 = 0x10
             w8 = w8 ^ 0x10
             w11 = w11 & 0x3c0
             [x19 + 0x27] = (byte) w10
             x8 = x9 | x8             // " "
             ubfx w9,w20,0xd, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
             [x19 + 0x46] = (byte) w10 // " "
             x8 = x11 | x8,lsl 10
             w10 = 0xf
             jmp 0x8039130

    loc_0x08038fac: // orphan
         w9 = 0xc00
         w11 = 0x400
         w9 = 0x9ff8              // '\xf8\x9f'
         w11 = 0xf00
         w9 = w20 & w9
         if (w9 == w11)
         b.ne 0x8039018           // likely

    loc_0x08038fc8: // orphan
         w8 = w20 >> 0xb
         w13 = w20 >> 0x1d
         w12 = 0xb
         [x19 + 0x28] = w12
         w11 = w8 & 0xe0
         ubfx w8,w20,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w11                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil w9,w20,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == 0xe)
         [x19 + 0x45] = (byte) w9
         b.hi 0x80393a4           // unlikely

    loc_0x08038ff4: // orphan
         ubfx x10,x20,0xc, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = 0x8038000
         x11 = x11 + 0            // "H"
         // XREFS: STRING 0x080391c0  CODE 0x080391c4  STRING 0x0803921c  
         // XREFS: CODE 0x08039220  STRING 0x0803979c  CODE 0x080397a0  
         // XREFS: STRING 0x080397d4  CODE 0x080397d8  STRING 0x08039b60  
         // XREFS: CODE 0x08039b64  STRING 0x08039d94  CODE 0x08039d98  
         // XREFS: STRING 0x08039dec  CODE 0x08039df0  STRING 0x08039e00  
         // XREFS: CODE 0x08039e04  
         x12 = 0x8039010
         w14 = (byte) [x11 + x10] // 0xd1000000d2 // 897648165074
         x12 = x12 + x14,lsl 2
         br x12

    loc_0x08039018: // orphan
         w23 = 0x7c00
         w9 = 0x8000
         w10 = 0x400
         w23 = 0xff20             // ' \xff'
         w9 = 0xc0                // '\xc0'
         w10 = 0x5e00
         w9 = w23 | w9
         w9 = w20 & w9
         if (w9 == w10)
         b.ne 0x8039148           // likely

    loc_0x08039040: // orphan
         if ((w20 & 0x1f0000) == 0)
         b.eq 0x803959c           // unlikely

    loc_0x08039048: // orphan
         rbit w9,w8
         clz w9,w9
         if (w9 == 3)
         b.hi 0x803959c           // likely

    loc_0x08039058: // orphan
         w10 = 0x8
         w12 = w9 + 1
         x11 = 0x17
         w9 = w10 << w9
         w8 = w8 >> w12
         x11 = 0x3d               // '='
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x28] = x11
         [x19 + 0x46] = (byte) w9
         [x19 + 0x48] = (byte) w8
         [x19 + 0x27] = (byte) w9
         jmp 0x80395a0

    loc_0x080390e4: // orphan
         ubfx w8,w20,0x13, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sbfx w9,w20,0x13, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = 0x1
         x11 = 0xb
         w10 = w20 >> 0xd
         w8 = w8 << 0xa
         [x19 + 0x28] = x11
         [x19 + 0x45] = (byte) w10
         w10 = 0x40               // '@'
         w8 = w8 ^ 0x400
         [x19 + 0x27] = (byte) w10
         bfxil w8,w9,0, 0xa       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w9,w20,0xd, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x46] = (byte) w10
         w10 = 0x3f               // '?'
         bfxil w8,w20,0x11, 2     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9 << 0x30
         ubfx w9,w20,0xd, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x11 | x8,lsl 52

    loc_0x08039148: // orphan
         w10 = 0x8400
         w9 = 0x400
         w10 = 0x9fe0             // '\xe0\x9f'
         w9 = 0xe00
         w10 = w20 & w10
         if (w10 == w9)
         b.ne 0x80391e0           // likely

    loc_0x08039164: // orphan
         if ((w20 & 0x1f0000) == 0)
         b.eq 0x803959c           // unlikely

    loc_0x0803916c: // orphan
         rbit w9,w8
         clz w10,w9
         if (w10 == 3)
         b.hi 0x803959c           // likely

    loc_0x0803917c: // orphan
         w9 = 0x8
         w11 = 0xc
         w12 = w9 << w10
         [x19 + 0x28] = w11
         w9 = w12 & 0xf8
         [x19 + 0x46] = (byte) w12 // "@"
         tbnz w20,0x1e,0x80391a0  // unlikely

    loc_0x08039198: // orphan
         if (w9 == 0x40)
         b.eq 0x803959c           // unlikely

    loc_0x080391a0: // orphan
         w11 = w10 + 1
         w11 = w8 >> w11
         ubfx w8,w20,0xb, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x48] = (byte) w11
         tbnz w20,0x1d,0x8039598  // unlikely

    loc_0x080391b4: // orphan
         if (w8 == 7)
         w0 = 0x3
         b.hi 0x80395a0           // unlikely

    loc_0x080391c0: // orphan
         x10 = 0x8039000
         x10 = x10 + 0
         x11 = 0x80391d8
         w12 = (word) [x10 + x8,lsl 1] // 0xcf000000d1 // 889058230481
         x11 = x11 + x12,lsl 2
         br x11

    loc_0x080391e0: // orphan
         w8 = 0x8c00
         w9 = w9 + 0x400
         ubfx w21,w20,0x16, 2     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0xbf20              // ' \xbf'
         w8 = w20 & w8
         if (w8 == w9)
         b.ne 0x80392a4           // likely

    loc_0x080391fc: // orphan
         w8 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx x8,x8,0xc, 3        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 - 1
         if (w8 == 6)
         b.hi 0x803959c           // likely

    loc_0x08039210: // orphan
         w9 = 0x77                // 'w'
         w9 = w9 >> w8
         tbz w9,0,0x803959c       // unlikely

    loc_0x0803921c: // orphan
         x9 = 0x8039000
         x9 = x9 + 0
         w8 = [x9 + x8,lsl 2]     // 0xcf000000d0 // 889058230480
         [x19 + 0x2c] = w8
         tbnz w20,0x1e,0x8039238  // unlikely

    loc_0x08039230: // orphan
         if (w21 == 3)
         b.eq 0x803959c           // unlikely

    loc_0x08039238: // orphan
         w8 = 0xe
         if ((w20 & 0x40000000) == 0)
         w9 = ~0x7f               // '\x7f'
         w10 = 0x40               // '@'
         w11 = 0x8
         [x19 + 0x28] = w8
         csel w8,w10,w9, eq
         w9 = w11 << w21
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x27] = (byte) w8
         [x19 + 0x46] = (byte) w9
         jmp 0x80395a0

    loc_0x080392a4: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.arm64_simd_decode_complex_vector () // sym.arm64_simd_decode_complex_vector(0x0, 0x0)
         if (w0 == 4)
         b.ne 0x80395a0           // likely

    loc_0x080392b8: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.arm64_simd_decode_vector_3same_extra () // sym.arm64_simd_decode_vector_3same_extra(0x0, 0x0)
         if (w0 == 4)
         b.ne 0x80395a0           // likely

    loc_0x080392cc: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.arm64_simd_decode_vector_3same () // sym.arm64_simd_decode_vector_3same(0x0, 0x0, 0x0)
         if (w0 == 4)
         b.ne 0x80395a0           // likely

    loc_0x080392e0: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.arm64_simd_decode_scalar_3same () // sym.arm64_simd_decode_scalar_3same(0x0, 0x0)
         if (w0 == 4)
         b.ne 0x80395a0           // likely

    loc_0x080392f4: // orphan
         w8 = 0x400
         w9 = 0xf00
         w8 = 0xdf00
         w8 = w20 & w8
         if (w8 == w9)
         b.eq 0x8039324           // unlikely

    loc_0x0803930c: // orphan
         w9 = 0x5f00
         if (w8 == w9)
         b.eq 0x8039324           // unlikely

    loc_0x08039318: // orphan
         w9 = 0x4f00
         if (w8 == w9)
         b.ne 0x8039338           // likely

    loc_0x08039324: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.arm64_simd_decode_by_element () // sym.arm64_simd_decode_by_element(0x0, 0x0)
         if (w0 == 4)
         b.ne 0x80395a0           // likely

    loc_0x08039338: // orphan
         w8 = 0x9f80              // '\x80\x9f'
         w9 = 0xf00
         w8 = w20 & w8
         if (w8 == w9)
         b.ne 0x8039368           // likely

    loc_0x0803934c: // orphan
         w8 = w20 & 0x780000
         if !w8 jmp 0x8039368     // likely

    loc_0x08039354: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.arm64_simd_decode_shift_immediate () // sym.arm64_simd_decode_shift_immediate(0x0, 0x0)
         if (w0 == 4)
         b.ne 0x80395a0           // likely

    loc_0x08039368: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.arm64_simd_decode_fp_compare_zero () // sym.arm64_simd_decode_fp_compare_zero(0x0, 0x0)
         if (w0 == 4)
         b.ne 0x80395a0           // likely

    loc_0x0803937c: // orphan
         x2 = var_1ch             // int64_t arg3
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.arm64_simd_decode_conversion () // sym.arm64_simd_decode_conversion(0x0, 0x0, 0x17801c)
         if !w0 jmp 0x8039660     // likely

    loc_0x08039390: // orphan
         w8 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x9
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19, 0x28] = (w9,2)
         jmp 0x80395a0

    loc_0x080393a4: // orphan
         ubfx w14,w20,0x11, 1     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w12,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbnz w13,0,0x8039418     // unlikely

    loc_0x080393b0: // orphan
         w11 = w14 << 7
         if (w14 == 0)
         w13 = 0x7c               // '|'
         csel x13,xzr,x13, eq
         ubfiz w10,w10,0x13, 4    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = (char) w9
         w11 = w11 ^ 0x80
         x11 = x13 | x11
         x9 = x9 & 0x80000000
         x11 = x11 | x12
         x10 = x10 | x11,lsl 23
         x9 = x10 | x9
         x9 = x9 | x9,lsl 32
         jmp 0x80394cc

    loc_0x08039418: // orphan
         w9 = w14 << 0xa
         if (w14 == 0)
         w10 = 0x3fc
         ubfx w13,w20,5, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w10,wzr,w10, eq
         w9 = w9 ^ 0x400
         w9 = w10 | w9
         x10 = x13 << 0x30
         w9 = w9 | w12
         x9 = x10 | x9,lsl 52
         w10 = w11 >> 7
         x9 = x9 | x10,lsl 63
         jmp 0x80394cc

    loc_0x080394cc: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80393e4, 0x8039448
         if ((w20 & 0x40000000) == 0)
         w10 = ~0x7f              // '\x7f'
         w11 = 0x40               // '@'
         [x19 + 0x38] = x9
         csel w9,w11,w10, eq
         if (w8 == 8)
         [x19 + 0x27] = (byte) w9
         b.hs 0x8039504           // unlikely

    loc_0x080394ec: // orphan
         w8 = 0x20
         [x19 + 0x46] = (byte) w8
         tbnz w20,0xc,0x8039518   // unlikely

    loc_0x080394f8: // orphan
         tbnz w20,0x1d,0x803953c  // unlikely

    loc_0x080394fc: // orphan
         w8 = 0x38                // '8'
         jmp 0x803958c

    loc_0x08039504: // orphan
         if (w8 == 0xc)
         b.hs 0x8039528           // unlikely

    loc_0x0803950c: // orphan
         w8 = 0x10
         [x19 + 0x46] = (byte) w8 // " "
         tbz w20,0xc,0x80394f8    // likely

    loc_0x08039518: // orphan
         if ((w20 & 0x20000000) == 0)
         w8 = 0x3a                // ':'
         cinc w8,w8,ne
         jmp 0x803958c

    loc_0x08039528: // orphan
         if (w8 == 0xe)
         b.hs 0x8039544           // unlikely

    loc_0x08039530: // orphan
         w8 = 0x20
         [x19 + 0x46] = (byte) w8
         tbz w20,0x1d,0x80394fc   // likely

    loc_0x0803953c: // orphan
         w8 = 0x39                // '9'
         jmp 0x803958c

    loc_0x08039544: // orphan
         b.ne 0x8039564           // likely

    loc_0x08039548: // orphan
         if ((w20 & 0x20000000) == 0)
         w8 = 0x40                // '@'
         w9 = 0x8
         csel w8,w9,w8, eq
         [x19 + 0x46] = (byte) w8 // " "
         w8 = 0x38                // '8'
         jmp 0x803958c

    loc_0x08039564: // orphan
         if ((w20 & 0x20000000) == 0)
         w8 = 0x40                // '@'
         w9 = 0x20
         w10 = w20 & 0x60000000
         w11 = 0x2000
         csel w8,w9,w8, eq
         if (w10 == w11)
         [x19 + 0x46] = (byte) w8 // "@"
         b.eq 0x803959c           // unlikely

    loc_0x08039588: // orphan
         w8 = 0xb

    loc_0x0803958c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8039500, 0x8039524, 0x8039540, 0x8039560
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x2c] = w8
         jmp 0x80395a0

    loc_0x08039598: // orphan
         tbnz w20,0x1e,0x80395b8  // unlikely

    loc_0x080395b8: // orphan
         w8 = w8 >> w10
         w9 = 0x3f                // '?'
         [x19 + 0x2c] = w9
         [x19 + 0x49] = (byte) w8
         w8 = 0x80                // '\x80'
         jmp 0x8039654

    loc_0x08039654: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80395cc
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x27] = (byte) w8
         jmp 0x80395a0

    loc_0x08039660: // orphan
         w8 = (byte) [var_1ch]    // [0x1c:4]=32 // 28
         if w8 jmp 0x803959c      // unlikely

    loc_0x08039668: // orphan
         w8 = 0xc00
         w8 = 0xff20              // ' \xff'
         w8 = w20 & w8
         if (w8 == w22)
         b.ne 0x8039698           // unlikely

    loc_0x0803967c: // orphan
         if !w21 jmp 0x80396f8    // likely

    loc_0x08039680: // orphan
         if (w21 == 3)
         b.eq 0x8039700           // unlikely

    loc_0x08039688: // orphan
         if (w21 == 1)
         b.ne 0x803959c           // likely

    loc_0x08039690: // orphan
         w8 = 0x40                // '@'
         jmp 0x8039704

    loc_0x08039698: // orphan
         w9 = 0x2000
         w10 = w20 & w23
         w9 = 0x1e20              // ' \x1e'
         w11 = w9 + 2,lsl 12
         if (w10 == w11)
         b.ne 0x80396d0           // likely

    loc_0x080396b0: // orphan
         w0 = 0x3
         if !w21 jmp 0x80397b4    // likely

    loc_0x080396b8: // orphan
         if (w21 == 3)
         b.eq 0x80397bc           // unlikely

    loc_0x080396c0: // orphan
         if (w21 == 1)
         b.ne 0x80395a0           // likely

    loc_0x080396c8: // orphan
         w8 = 0x40                // '@'
         jmp 0x80397c0

    loc_0x080396d0: // orphan
         w10 = w20 >> 0x18
         if (w10 == 0x1f)
         b.ne 0x8039730           // likely

    loc_0x080396dc: // orphan
         if !w21 jmp 0x8039834    // likely

    loc_0x080396e0: // orphan
         if (w21 == 3)
         b.eq 0x803983c           // unlikely

    loc_0x080396e8: // orphan
         if (w21 == 1)
         b.ne 0x803959c           // likely

    loc_0x080396f0: // orphan
         w8 = 0x40                // '@'
         jmp 0x8039840

    loc_0x080396f8: // orphan
         w8 = 0x20
         jmp 0x8039704

    loc_0x08039700: // orphan
         w8 = 0x10

    loc_0x08039704: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8039694, 0x80396fc
         ubfx w9,w20,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 8)
         b.ls 0x8039718           // likely

    loc_0x08039710: // orphan
         w0 = 0x1
         jmp 0x80395a0

    loc_0x08039718: // orphan
         w10 = 0x2
         if (w9 == 8)
         [x19 + 0x28] = w10       // U"\t?"
         b.ne 0x803979c           // likely

    loc_0x08039728: // orphan
         w9 = 0xa
         jmp 0x80397a8

    loc_0x08039730: // orphan
         w10 = w23 + 8,lsl 12     // "real-page-table zero-modification self-check"
         w10 = w20 & w10
         if (w10 == w9)
         b.ne 0x80397f8           // unlikely

    loc_0x08039740: // orphan
         if ((w20 & 7) == 0)
         w0 = 0x3
         b.ne 0x80395a0           // likely

    loc_0x0803974c: // orphan
         if (w21 == 2)
         b.eq 0x80395a0           // unlikely

    loc_0x08039754: // orphan
         if ((w20 & 0x10) == 0)
         w8 = 0x20
         w9 = 0x5
         cinc w10,w8,ne
         [x19, 0x28] = (w9,2)
         tbz w20,3,0x8039778      // likely

    loc_0x0803976c: // orphan
         w9 = [x19 + 0x40]        // 0xda // 218
         w9 = w9 | 1
         [x19 + 0x40] = w9

    loc_0x08039778: // orphan
         if (w21 == 0)
         w9 = 0x40                // '@'
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w8,w8,w9, eq
         if (w21 == 3)
         w9 = 0x10
         csel w8,w9,w8, eq
         [x19 + 0x27] = (byte) w8
         jmp 0x80395a0

    loc_0x0803979c: // orphan
         x10 = 0x8039000
         x10 = x10 + 0
         w9 = [x10 + w9,uxtw 2]   // 0xb1000000d1 // 760209211601

    loc_0x080397a8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x803972c
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x2c] = w9        // "!"
         jmp 0x8039958

    loc_0x080397b4: // orphan
         w8 = 0x20
         jmp 0x80397c0

    loc_0x080397bc: // orphan
         w8 = 0x10

    loc_0x080397c0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80396cc, 0x80397b8
         ubfx w9,w20,0xf, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x28] = w0
         w0 = 0x1
         if (w9 == 0xf)
         // CODE XREFS from sym.arm64_decode_simd @ 0x80397e4, 0x80397e8
         b.hi 0x80395a0           // unlikely

    loc_0x080397d4: // orphan
         x10 = 0x8039000
         x10 = x10 + 0
         x11 = 0x80395a0
         w12 = (byte) [x10 + x9]  // 0xd0000000d1 // 893353197777
         x11 = x11 + x12,lsl 2
         br x11

    loc_0x080397f8: // orphan
         w9 = 0xc00
         w9 = 0x1e20              // ' \x1e'
         if (w8 == w9)
         b.eq 0x803986c           // unlikely

    loc_0x08039808: // orphan
         w9 = 0x400
         w9 = 0x1e20              // ' \x1e'
         if (w8 == w9)
         b.ne 0x8039888           // likely

    loc_0x08039818: // orphan
         if !w21 jmp 0x80399b8    // likely

    loc_0x0803981c: // orphan
         if (w21 == 3)
         b.eq 0x80399c0           // unlikely

    loc_0x08039824: // orphan
         if (w21 == 1)
         b.ne 0x803959c           // likely

    loc_0x0803982c: // orphan
         w8 = 0x40                // '@'
         jmp 0x80399c4

    loc_0x08039834: // orphan
         w8 = 0x20
         jmp 0x8039840

    loc_0x0803983c: // orphan
         w8 = 0x10

    loc_0x08039840: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80396f4, 0x8039838
         w9 = w20 >> 0x14
         w11 = 0x14               // "/"
         w10 = 0x4
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x27] = (byte) w8
         w9 = w9 & 2
         [x19 + 0x46] = (byte) w8 // "@"
         bfxil w9,w20,0xf, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9 | w11            // "/"
         [x19, 0x28] = (w10,2)
         jmp 0x80395a0

    loc_0x0803986c: // orphan
         if !w21 jmp 0x80399f0    // likely

    loc_0x08039870: // orphan
         if (w21 == 3)
         b.eq 0x80399f8           // unlikely

    loc_0x08039878: // orphan
         if (w21 == 1)
         b.ne 0x803959c           // likely

    loc_0x08039880: // orphan
         w8 = 0x40                // '@'
         jmp 0x80399fc

    loc_0x08039888: // orphan
         w8 = 0xfc00
         w9 = 0x1e26              // '&\x1e'
         w8 = 0x7fbe              // '\xbe\x7f'
         w8 = w20 & w8
         if (w8 == w9)
         b.ne 0x8039964           // likely

    loc_0x080398a0: // orphan
         ubfx w8,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == w20)
         b.ne 0x803959c           // unlikely

    loc_0x080398ac: // orphan
         if ((w20 & 0x10000) == 0)
         w8 = 0x35                // '5'
         w9 = 0x8
         cinc w8,w8,eq
         if (w20 == 0)
         w10 = 0x40               // '@'
         w11 = 0x20
         [x19, 0x28] = (w9,2)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w8,w11,w10, ge
         [x19 + 0x27] = (byte) w8
         jmp 0x80395a0

    loc_0x08039958: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80397b0, 0x80399ec
         [x19 + 0x27] = (byte) w8
         [x19 + 0x46] = (byte) w8
         jmp 0x80395a0

    loc_0x08039964: // orphan
         w8 = 0x8400
         w9 = 0x2e00
         w8 = 0xbfe0              // '\xe0\xbf'
         w8 = w20 & w8
         if (w8 == w9)
         b.ne 0x8039a20           // likely

    loc_0x0803997c: // orphan
         x8 = 0xa
         ubfx w9,w20,0xb, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 &= w20
         x8 = 0x37                // '7'
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         [x19 + 0x28] = x8
         csel w8,w12,w11, eq
         if (w9 == 7)
         [x19 + 0x45] = (byte) w9
         ccmp w10,0,0, hi
         w9 = 0x3
         [x19 + 0x27] = (byte) w8
         csel w0,w9,wzr, eq
         jmp 0x80395a0

    loc_0x080399b8: // orphan
         w8 = 0x20
         jmp 0x80399c4

    loc_0x080399c0: // orphan
         w8 = 0x10

    loc_0x080399c4: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8039830, 0x80399bc
         if ((w20 & 0x10) == 0)
         w10 = 0x22               // '\"'
         w9 = 0x6
         ubfx w11,w20,0xc, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         cinc w10,w10,ne
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19, 0x28] = (w9,2)
         w9 = w20 & 0xf
         [x19 + 0x44] = (byte) w11
         [x19 + 0x45] = (byte) w9
         jmp 0x8039958

    loc_0x080399f0: // orphan
         w8 = 0x20
         jmp 0x80399fc

    loc_0x080399f8: // orphan
         w8 = 0x10

    loc_0x080399fc: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8039884, 0x80399f4
         x9 = 0x7
         ubfx w10,w20,0xc, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x24                // '$'
         [x19 + 0x27] = (byte) w8
         [x19 + 0x28] = x9
         [x19 + 0x44] = (byte) w10
         [x19 + 0x46] = (byte) w8
         jmp 0x80395a0

    loc_0x08039a20: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.arm64_simd_decode_fp_vector_2reg () // sym.arm64_simd_decode_fp_vector_2reg(0x0, 0x0)
         if (w0 == 4)
         b.ne 0x80395a0           // likely

    loc_0x08039a34: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.arm64_simd_decode_rev () // sym.arm64_simd_decode_rev(0x0, 0x0)
         if (w0 == 4)
         b.ne 0x80395a0           // likely

    loc_0x08039a48: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.arm64_simd_decode_fp_reduce () // sym.arm64_simd_decode_fp_reduce(0x0, 0x0)
         if (w0 == 4)
         csinc w0,w0,wzr, ne
         jmp 0x80395a0

}

/* ===== 0x08037188 ===== */
int sym.arm64_decode_data_processing_immediate (int esi, int edx) {
    loc_0x8037188:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = 0x1000
        w10 = w0 & 0x1f000000 // arg1
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = 0x1
        if (w10 == w9)
        [x1 + 0x10] = w8 // arg2
        b.ne 0x8037208 // likely
            
    loc_0x8037208:
        w8 = w20 & 0x1f800000
        w9 = 0x1100
        if (w8 == w9)
        b.ne 0x8037298 // likely
            
    loc_0x8037298:
        w9 = w20 & 0x7ff00000
        w10 = 0x11c0  // '\xc0\x11'
        if (w9 == w10)
        b.ne 0x8037344 // likely
            
    loc_0x8037344:
        w9 = 0x1200
        if (w8 == w9)
        b.ne 0x80373ec // likely
            
    loc_0x80373ec:
        w9 = w20 & 0x7f800000
        w10 = 0x1300
        if (w9 == w10)
        b.eq 0x8037414 // unlikely
            
    loc_0x8037414:
        w8 = 0x17
        ubfx w10,w20,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = w20 & 0x1f
        [x19 + 0x14] = w8 // "/"
        ubfx w8,w20,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w20 == 0)
        [x19 + 0x20] = (byte) w9
        w9 = 0x40     // '@'
        [x19 + 0x21] = (byte) w10
        w10 = 0x20
        [x19 + 0x23] = (byte) w8
        ubfx w8,w20,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        csel w3,w10,w9, ge
        [x19 + 0x27] = (byte) w3 // arg4
        [x19 + 0x22] = (byte) w8
        tbz w20,0x1f,0x8037460 // likely
            
    loc_0x8037460:
        ubfx w0,w20,0x1d, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !w0 jmp 0x8037514 // likely
            
    loc_0x8037514:
        w8 = 0x7
         // do {
    loc_0x8037518:
        // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x803747c
        if (w20 == 0)
        ubfx w0,w20,0x16, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0x18] = w8
        cset w9,ge
        ubfx w1,w20,0x10, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w20 & 0x400000
        if (w9 == w8)
        [x19 + 0x42] = (byte) w0
        [x19 + 0x43] = (byte) w1
        b.eq 0x8037578 // unlikely
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
    loc_0x08037264: // orphan
             w8 = [x19 + 0x1c]        // 0xda // 218
             w8 = w8 | 1
             [x19 + 0x1c] = w8

    loc_0x08037270: // orphan
         sbfx w9,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w20,0xa, 0xc     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9 & 0xc
         [x19 + 0x28] = x8
         [x19 + 0x41] = (byte) w9
         tbnz w20,0x16,0x8037314  // unlikely

    loc_0x08037288: // orphan
         tbnz w20,0x1d,0x8037320  // unlikely

    loc_0x0803728c: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbnz w20,0x1e,0x8037334  // unlikely

    loc_0x08037294: // orphan
         jmp 0x803757c

    loc_0x080372e8: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x1c] = w8

    loc_0x080372f4: // orphan
         ubfx w9,w20,0xa, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w20,0x12, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x28] = x9
         if !w8 jmp 0x8037480     // likely

    loc_0x08037304: // orphan
         if (w8 == 1)
         b.ne 0x8037488           // likely

    loc_0x0803730c: // orphan
         w8 = 0x10
         jmp 0x8037498

    loc_0x08037314: // orphan
         x8 = x8 << 0xc
         [x19 + 0x28] = x8
         tbz w20,0x1d,0x803728c   // likely

    loc_0x08037320: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x1c] = w8
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbz w20,0x1e,0x803757c   // likely

    loc_0x08037334: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w8 = w8 | 4
         [x19 + 0x1c] = w8
         jmp 0x803757c

    loc_0x0803739c: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x1c] = w8

    loc_0x080373a8: // orphan
         ubfx w0,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w1,w20,0x10, 6      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x19 + 0x28          // int64_t arg7
         x6 = x19 + 0x38
         w4 = 0x1
         [x19 + 0x42] = (byte) w0
         [x19 + 0x43] = (byte) w1
         sym.arm64_decode_bit_masks () // sym.arm64_decode_bit_masks(0x0, 0x0, 0x0, 0x0, -1, -1)
         if !w0 jmp 0x8037578     // likely

    loc_0x080373cc: // orphan
         w8 = 0x6000
         bics wzr,w8,w20          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x80374a4           // likely

    loc_0x080373d8: // orphan
         w8 = [x19 + 0x1c]        // 0xda // 218
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 | 2
         [x19 + 0x1c] = w8
         jmp 0x803757c

    loc_0x08037408: // orphan
         w10 = 0x3300
         if (w9 == w10)
         b.ne 0x80374ac           // likely

    loc_0x08037470: // orphan
         if (w0 == 1)
         w8 = 0x8
         cinc w8,w8,ne
         jmp 0x8037518

    loc_0x08037480: // orphan
         w8 = 0xe
         jmp 0x8037498

    loc_0x08037488: // orphan
         if (w8 == 2)
         w8 = 0x11
         w9 = 0xf
         csel w8,w9,w8, eq

    loc_0x08037498: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_immediate @ 0x8037310, 0x8037484
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x18] = w8
         jmp 0x803757c

    loc_0x080374a4: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x803757c

    loc_0x080374ac: // orphan
         w9 = 0x7fa0              // '\xa0\x7f'
         w10 = 0x1380             // '\x80\x13'
         w9 = w20 & w9
         if (w9 == w10)
         b.ne 0x803758c           // likely

    loc_0x080374c0: // orphan
         x8 = 0x18
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x8 = 0xa
         [x19 = x8
         sym.arm64_decode_base_registers () // sym.arm64_decode_base_registers(0x0, 0x0)
         w8 = (byte) [x19 + 0x27] // 0xda // 218
         ubfx w9,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w20 & 0x400000
         ubfx w12,w20,0x16, 1     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == 0x40)
         [x19 + 0x41] = (byte) w9
         cset w10,ne
         if (w9 == w8)
         // CODE XREFS from sym.arm64_decode_memory_address @ 0x80370f4, 0x80370f8
         [x19 + 0x42] = (byte) w12
         w10 = w10 ^ w11,lsr 22
         cset w8,lo
         if ((w10 & w8) == 0)
         w8 = 0x3
         csel w0,wzr,w8, ne
         jmp 0x803757c

    loc_0x08037540: // orphan
         tbnz w20,0x1f,0x8037554  // unlikely

    loc_0x08037544: // orphan
         w8 = w20 >> 0xa
         w9 = w20 >> 0x10
         w8 = w9 | w8
         tbnz w8,5,0x8037578      // unlikely

    loc_0x08037554: // orphan
         ubfx w2,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x19 + 0x30          // int64_t arg7
         x6 = x19 + 0x38
         w4 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.arm64_decode_bit_masks () // "h" // sym.arm64_decode_bit_masks(0x0, 0x0, 0x0, 0x0, -1, -1)
         w8 = 0x3
         if (w0 == 0)
         csel w0,w8,wzr, eq
         jmp 0x803757c

    loc_0x08037578: // orphan
         w0 = 0x3

    loc_0x0803757c: // orphan
         // XREFS: CODE 0x08037204  CODE 0x08037294  CODE 0x08037340  
         // XREFS: CODE 0x080373e8  CODE 0x080374a0  CODE 0x080374a8  
         // XREFS: CODE 0x08037510  CODE 0x08037574  CODE 0x080375d8  
         // XREFS: CODE 0x0803760c  
         (x20, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0803758c: // orphan
         w9 = 0x1280              // '\x80\x12'
         if (w8 == w9)
         b.ne 0x80375d0           // likely

    loc_0x08037598: // orphan
         w8 = 0x19
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19 + 0x14] = w8
         sym.arm64_decode_base_registers () // sym.arm64_decode_base_registers(0x0, 0x0)
         ubfx w8,w20,0x1d, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x3
         if !w8 jmp 0x80375dc     // likely

    loc_0x080375b8: // orphan
         if (w8 == 1)
         b.eq 0x803757c           // unlikely

    loc_0x080375c0: // orphan
         if (w8 == 2)
         w8 = 0xc
         cinc w8,w8,ne
         jmp 0x80375e0

    loc_0x080375d0: // orphan
         w0 = 0x1
         [x19 + 0x14] = wzr
         jmp 0x803757c

    loc_0x080375dc: // orphan
         w8 = 0xb

    loc_0x080375e0: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x80375cc
         w9 = (byte) [x19 + 0x27] // 0xda // 218
         w11 = w20 >> 0x11
         ubfx w10,w20,5, 0x10     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x18] = w8        // U"\n\a"
         w8 = w20 & 0x400000
         if (w9 == 0x20)
         w9 = w11 & 0x30
         [x19 + 0x28] = x10
         ccmp w8,0,4, eq
         [x19 + 0x41] = (byte) w9
         csel w0,wzr,w0, eq
         jmp 0x803757c

}

/* ===== 0x08037e5c ===== */
int sym.arm64_decode_branch (int esi, int edx) {
    loc_0x8037e5c:
        w9 = 0x201f   // '\x1f '
        w10 = w0 & 0xfffff01f // arg1
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = 0xd503
        if (w10 == w9)
        b.ne 0x8037ec0 // likely
            
    loc_0x8037ec0:
        w10 = 0xcfa1  // '\xa1\xcf'
        w9 = w8 & 0xfffff0ff
        // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x8037acc, 0x8037ad0
        w10 = 0x2afc  // '\xfc*'
        w9 = w9 + w10
        ror w9,w9,5
        if (w9 == 4)
        ccmp w9,1,4, ls
        b.eq 0x8037f20 // unlikely
            
    loc_0x8037f20:
        w10 = 0x2
        w9 = w8 & 0xffe0001f
        w10 = 0xd400
        if (w9 == w10)
        jmp ifle 0x8038024 // unlikely
            
    loc_0x8038024:
        w10 = 0x1
        w10 = 0xd400
        if (w9 == w10)
        b.eq 0x8038068 // unlikely
            
    loc_0x8038068:
        w9 = 0xa
         // do {
    loc_0x803806c:
        // CODE XREFS from sym.arm64_decode_branch @ 0x8037f60, 0x8038048, 0x803805c, 0x8038064
        w8 = w8 >> 5
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x28] = w9 // arg2
        x9 = xzr | 0x400000004
        [x1 + 0x10] = x9 // arg2
        [x1 + 0x2c] = (half) w8
        // lr
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8037e74
    loc_0x8037e88:
        x9 = 0x8037000
        x9 = x9 + 0
        x10 = 0x8037ea0
        w11 = (byte) [x9 + x8] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11,lsl 2
        br x10
         // (break)
    loc_0x08037f00: // orphan
             if (w9 == 0x9f)
             b.eq 0x8037f74           // unlikely

    loc_0x08037f08: // orphan
         if (w9 == 0x5f)
         b.ne 0x8037f84           // likely

    loc_0x08037f10: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0x6
         [x1 + 0x28] = w8         // arg2
                                  // lr

    loc_0x08037f44: // orphan
         w10 = 0xd420             // ' \xd4'
         if (w9 == w10)
         b.eq 0x8038060           // unlikely

    loc_0x08037f50: // orphan
         w10 = 0xd440             // '@\xd4'
         if (w9 == w10)
         b.ne 0x8038088           // likely

    loc_0x08037f5c: // orphan
         w9 = 0xe
         jmp 0x803806c

    loc_0x08037f64: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0x8
         [x1 + 0x28] = w8         // arg2
                                  // lr

    loc_0x08037f74: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0x7
         [x1 + 0x28] = w8         // arg2
                                  // lr

    loc_0x08037f84: // orphan
         w9 = 0xf00
         bics wzr,w9,w8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x8037fa0           // likely

    loc_0x08037f90: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x9
         [x1 + 0x28] = w8         // arg2
                                  // lr

    loc_0x08037fa0: // orphan
         w0 = 0x3
                                  // lr

    loc_0x08038044: // orphan
         w9 = 0xb
         jmp 0x803806c

    loc_0x0803804c: // orphan
         w0 = 0x1
         [x1 + 0x14] = wzr        // arg2
                                  // lr

    loc_0x08038058: // orphan
         w9 = 0xc
         jmp 0x803806c

    loc_0x08038060: // orphan
         w9 = 0xd
         jmp 0x803806c

    loc_0x08038088: // orphan
         w10 = 0x3e0
         w9 = w8 | 0x200000
         [x1 + 0x28] = wzr        // arg2 // "\t"
         w10 = 0xd6bf             // '\xbf\xd6'
         if (w9 == w10)
         b.ne 0x80380cc           // likely

    loc_0x080380a0: // orphan
         w9 = 0x3e0
         x10 = 0x4
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xd69f              // '\x9f\xd6'
         x10 = 0x5
         if (w8 == w9)
         w8 = 0xf
         [x1 + 0x10] = x10        // arg2
         cinc w8,w8,ne
         [x1 + 0x28] = w8         // arg2
                                  // lr

    loc_0x080380cc: // orphan
         w9 = w8 & 0xfff00000
         w10 = 0xd530             // '0\xd5'
         if (w9 == w10)
         b.eq 0x80380f0           // unlikely

    loc_0x080380dc: // orphan
         w10 = 0xd510             // '\x10\xd5'
         if (w9 == w10)
         b.ne 0x8038134           // likely

    loc_0x080380e8: // orphan
         w9 = 0x7
         jmp 0x80380f4

    loc_0x080380f0: // orphan
         w9 = 0x6

    loc_0x080380f4: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x80380ec
         w10 = 0x4
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 0x10] = (w10,2)     // arg2
         w10 = w8 & 0x1f
         ubfx w9,w8,0x13, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x24] = (byte) w10 // arg2
         ubfx w10,w8,0x10, 3      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x2f] = (byte) w9  // arg2
         ubfx w9,w8,0xc, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x30] = (byte) w10 // arg2
         ubfx w10,w8,8, 4         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w8,5, 3          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x31] = (byte) w9  // arg2
         [x1 + 0x32] = (byte) w10 // arg2
         [x1 + 0x33] = (byte) w8  // arg2
                                  // lr

    loc_0x08038134: // orphan
         w9 = w8 | 0x80000000     // pstate
         w9 = w9 >> 0x1a
         if (w9 == 0x25)
         b.ne 0x8038174           // likely

    loc_0x08038144: // orphan
         if (w8 == 0)
         ubfiz w8,w8,2, 0x1a      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x8
         x11 = xzr | 0xfffffffff8000000
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = 0x4
         w8 = w8 ^ loc.__kcfi_typeid_delayed_work_timer_fn // loc.imp.param_ops_int
         cinc w9,w9,lt
         x8 = x8 + x11
         [x1, 0x10] = (w10,2)     // arg2
         [x1 + 0x28] = x8         // arg2
                                  // lr

    loc_0x08038174: // orphan
         w9 = w8 & 0xfffffc1f
         w10 = 0xd61f             // '\x1f\xd6'
         if (w9 == w10)
         b.eq 0x803819c           // unlikely

    loc_0x08038184: // orphan
         w10 = 0xd65f             // '_\xd6'
         if (w9 == w10)
         b.eq 0x803819c           // unlikely

    loc_0x08038190: // orphan
         w10 = 0xd63f             // '?\xd6'
         if (w9 == w10)
         b.ne 0x80381d4           // likely

    loc_0x0803819c: // orphan
         ubfx w8,w8,5, 5          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = 0xd63f             // '?\xd6'
         w10 = 0x4
         if (w9 == w11)
         [x1 + 0x10] = w10        // arg2
         [x1 + 0x21] = (byte) w8  // arg2
         b.eq 0x8038210           // unlikely

    loc_0x080381b8: // orphan
         w8 = 0xd61f              // '\x1f\xd6'
         if (w9 == w8)
         b.ne 0x8038220           // likely

    loc_0x080381c4: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0xa
         [x1 + 0x14] = w8         // arg2
                                  // lr

    loc_0x080381d4: // orphan
         w9 = w8 & 0xfffffff0
         w10 = 0x5400
         w9 = w9 & 0xff00001f
         if (w9 == w10)
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x8037de4, 0x8037dec
         b.ne 0x8038230           // likely

    loc_0x080381e8: // orphan
         w9 = w8 >> 3
         x10 = 0x4
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x10 = 0xd
         w8 = w8 & 0xf
         w9 = w9 & 0x1ffffc
         [x1 + 0x10] = x10        // arg2
         w9 = w9 ^ 0x100000
         [x1 + 0x30] = (byte) w8  // arg2
         jmp 0x8038294

    loc_0x08038210: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0xb
         [x1 + 0x14] = w8         // arg2 // "\r"
                                  // lr

    loc_0x08038220: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0xc
         [x1 + 0x14] = w8         // arg2
                                  // lr

    loc_0x08038230: // orphan
         w9 = w8 & 0x7e000000
         w10 = 0x3600
         if (w9 == w10)
         b.eq 0x80382a0           // unlikely

    loc_0x08038240: // orphan
         w10 = 0x3400
         if (w9 == w10)
         b.ne 0x80382e8           // likely

    loc_0x0803824c: // orphan
         if ((w8 & 0x1000000) == 0)
         w10 = 0xe
         w9 = 0x4
         cinc w10,w10,ne
         w11 = w8 >> 3
         if (w8 == 0)
         [x1, 0x10] = (w9,2)      // arg2
         w9 = w8 >> 0x1f
         w10 = 0x20
         w12 = 0x40               // '@'
         w8 = w8 & 0x1f
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1c] = w9         // arg2
         csel w9,w12,w10, lt
         w10 = w11 & 0x1ffffc
         [x1 + 0x27] = (byte) w9  // arg2 // "@"
         w9 = w10 ^ 0x100000
         [x1 + 0x24] = (byte) w8  // arg2

    loc_0x08038294: // orphan
         // CODE XREFS from sym.arm64_decode_branch @ 0x8037e98, 0x8037e9c, 0x803820c
         x8 = x9 - 0x100,lsl 12
         [x1 + 0x28] = x8         // arg2
                                  // lr

    loc_0x080382a0: // orphan
         w9 = w8 >> 0x1a
         w11 = w8 & 0x1f
         if ((w8 & 0x1000000) == 0)
         [x1 + 0x24] = (byte) w11 // arg2
         w11 = w8 >> 3
         w10 = 0x4
         w9 = w9 & 0x20
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfxil w9,w8,0x13, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x10
         w11 = w11 & 0xfffc
         cinc w8,w8,ne
         [x1, 0x10] = (w10,2)     // arg2
         w8 = w11 ^ 0x8000
         x8 = x8 - 8,lsl 12
         [x1 + 0x31] = (byte) w9  // arg2
         [x1 + 0x28] = x8         // arg2
                                  // lr

    loc_0x080382e8: // orphan
         w8 = w8 & 0x1c000000
         w9 = 0x1400
         if (w8 == w9)
         b.ne 0x8038308           // likely

    loc_0x080382f8: // orphan
         w8 = 0x4
         w0 = 0x1
         [x1 + 0x10] = x8         // arg2
                                  // lr

    loc_0x08038308: // orphan
         w0 = 0x4
                                  // lr

}

/* ===== 0x0803ae08 ===== */
int sym.arm64_decode_sme (int esi, int edx) {
    loc_0x803ae08:
        w8 = 0x9e00
        w9 = 0x8000   // pstate
        w8 = w0 & w8  // arg1
        if (w8 == w9)
        b.ne 0x803ae30 // likely
            
    loc_0x803ae30:
        // CODE XREF from sym.arm64_decode_sme @ 0x803ae18
        w0 = 0x4
        // lr
         // } else {
    loc_0x803ae1c:
        x8 = 0x7
        w0 = 0x1
        x8 = 0x31     // '1'
        [x1 + 0x10] = x8 // arg2
        // lr
        }
        return eax;
}

/* ===== 0x0803adc0 ===== */
int sym.arm64_decode_sve (int esi, int edx) {
    loc_0x803adc0:
        w8 = 0x400
        w9 = w0 & 0x1e000000 // arg1
        if (w9 == w8)
        b.ne 0x803adfc // likely
            
    loc_0x803adfc:
        // CODE XREF from sym.arm64_decode_sve @ 0x803adcc
        w0 = 0x4
        // lr
         // } else {
    loc_0x803add0:
        x8 = 0x6
        ubfx w10,w0,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w0 & 0x1f // arg1
        x8 = 0x30     // '0'
        [x1 + 0x20] = (byte) w9 // arg2
        [x1 + 0x10] = x8 // arg2
        ubfx w8,w0,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = 0x1
        [x1 + 0x21] = (byte) w10 // arg2
        [x1 + 0x22] = (byte) w8 // arg2
        // lr
        }
        return eax;
}

/* ===== 0x08036fec ===== */
int sym.arm64_decode_insn_has_effect (int esi, int edx) {
    loc_0x8036fec:
        if !x1 jmp 0x8037030 // likely
            
    loc_0x8037030:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // lr
         // } else {
    loc_0x8036ff0:
        hint 0x19
        sp = sp - 0x70
        [sp, 0x50] = (x29,2)
        [var_60h] = x19
        // XREFS: STRING 0x080370e4  CODE 0x080370e8  STRING 0x08037a2c
        // XREFS: CODE 0x08037a30  STRING 0x08037ab8  CODE 0x08037abc
        // XREFS: STRING 0x08037dd4  CODE 0x08037dd8  STRING 0x08037e88
        // XREFS: CODE 0x08037e8c
        x29 = var_50h
        x8 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x803700c ()  // 0x803700c(0x0, 0x0, 0x0, 0x0)
        x8 = [var_8h] // 0x4 // 4
        bics xzr,x19,x8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        cset w0,eq
        (x29, 2) = 3  // sp // lr
        x19 = [var_60h] // 0x4 // 4
        sp = arg_70h
        hint 0x1d
        // lr
        }
        return eax;
}

/* ===== 0x08003000 ===== */
int sym..text (int esi, int edx) {
    loc_0x8003000:
        // XREFS(139)
        x11 = x28 - 0x4ca // [15] -r-x section size 228920 named .text
        // chop
         // do {
    loc_0x8003004:
        // DATA XREFS from sym.fuck_cfi @ 0x800354c, 0x8003660, 0x8003760
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        // CODE XREFS from sym.fuck_cfi @ 0x8003690, 0x8003768
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = sym..text // pc
        // 0x8003000
        x19 = [x21]   // 0xdc // 220 // pc
        if x19 jmp 0x8003050 // likely
         // } while (?);
        }
        return eax;
    loc_0x8003024:
        x20 = sym..text // pc
        // 0x8003000
        x20 = x20 + 0 // 0x8003000
        // pc
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // pc
        0x8003030 ()  // 0x8003030(0x8003000, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x800304c // unlikely
        // chop
            
    loc_0x800304c:
        // CODE XREF from sym.util_find_kallsyms @ 0x8003034
        x19 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // chop
         // do {
    loc_0x8003050:
        // CODE XREFS from sym.util_find_kallsyms @ 0x8003020, 0x8003048
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08003064
         // } while (?);
         // } while (?);
        }
        return eax;
}

