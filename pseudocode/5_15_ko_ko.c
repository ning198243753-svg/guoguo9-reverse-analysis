// 5.15.ko.ko 内核模块伪代码 (radare2 pdc, 169 functions)


/* ===== 0x08006000 ===== */
int sym.__cfi_check (int esi, int edx) {
    loc_0x8006000:
        // XREFS: STRING 0x0800607c  DATA 0x08006080  STRING 0x080060e8
        // XREFS: DATA 0x080060ec  STRING 0x08006134  DATA 0x08006138
        // XREFS: STRING 0x08006170  DATA 0x08006174  STRING 0x0800617c
        // XREFS: DATA 0x08006180  STRING 0x08006198  DATA 0x0800619c
        // XREFS: STRING 0x080061a4  DATA 0x080061a8  STRING 0x080061b0
        // XREFS: DATA 0x080061b4  STRING 0x080061bc  DATA 0x080061c0
        // XREFS: STRING 0x080061d4  DATA 0x080061d8
        hint 0x19     // [07] -r-x section size 150344 named .text
        x8 = 0xc367   // 'g\xc3'
        x8 = 0xed8e   // '\x8e\xed'
        x8 = 0x7639   // '9v'
        x8 = 0x3841   // 'A8'
        if (x0 == x8) // arg1
        jmp ifgt 0x8006088 // unlikely
            
    loc_0x8006088:
        // CODE XREF from sym.__cfi_check @ 0x8006018
        x8 = 0xff     // '\xff'
        x8 = 0x3f91   // '\x91?'
        x8 = 0xac3c   // '<\xac'
        x8 = 0x6d27   // ''m'
        if (x0 == x8) // arg1
        jmp ifle 0x8006140 // likely
            
    loc_0x8006140:
        // CODE XREF from sym.__cfi_check @ 0x800609c
        x8 = 0xc368   // 'h\xc3'
        x8 = 0xed8e   // '\x8e\xed'
        x8 = 0x7639   // '9v'
        x8 = 0x3841   // 'A8'
        if (x0 == x8) // arg1
        b.eq 0x80061d4 // unlikely
            
    loc_0x80061d4:
        // CODE XREF from sym.__cfi_check @ 0x8006154
        x8 = sym.__cfi_check // pc
        // 0x8006000
        x8 = x8 + 0   // 0x8006000 // "?#\x03\xd5\xe8l\x98\xd2\u0231\xbd\xf2(\xc7\xce\xf2(\b\xe7\xf2\x1f" // pc
        x8 = x1 - x8  // arg2
        ror x8,x8,3
        if (x8 == 6)
        b.lo 0x80061cc // unlikely
            
    loc_0x80061cc:
        // CODE XREFS from sym.__cfi_check @ 0x80060fc, 0x8006190, 0x80061e8
        hint 0x1d
        0x080061d0
         // } else {
    loc_0x80061ec:
        // XREFS: CODE 0x08006078  CODE 0x080060e4  CODE 0x08006100
        // XREFS: CODE 0x08006130  CODE 0x0800616c  CODE 0x08006194
        // XREFS: CODE 0x080061c8
        x0 = x2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        hint 0x1d
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x800601c
    loc_0x8006034:
        x8 = 0x5ac8   // '\xc8Z'
        x8 = 0xfc53   // 'S\xfc'
        x8 = 0x7fe6   // '\xe6\x7f'
        x8 = 0xf723   // '#\xf7'
        if (x0 == x8) // arg1
        b.eq 0x800617c // unlikely
            
    loc_0x800617c:
        // CODE XREF from sym.__cfi_check @ 0x8006048
        x8 = sym.__cfi_check // pc
        // 0x8006000
        x8 = x8 + 0   // 0x8006000 // "?#\x03\xd5\xe8l\x98\xd2\u0231\xbd\xf2(\xc7\xce\xf2(\b\xe7\xf2\x1f" // pc
        x8 = x1 - x8  // arg2
        ror x8,x8,3
        if (x8 == 2)
        b.lo 0x80061cc // unlikely
    loc_0x8006194:
        jmp 0x80061ec
    loc_0x0800604c: // orphan
             x8 = 0xb5ad              // '\xad\xb5'
             x8 = 0x78e5              // '\xe5x'
             x8 = 0xf8bc              // '\xbc\xf8'
             x8 = 0xff76              // 'v\xff'
             if (x0 == x8)            // arg1
             b.eq 0x8006198           // unlikely

    loc_0x08006064: // orphan
         x8 = 0x2445              // 'E$'
         x8 = 0x2924              // '$)'
         x8 = 0xa43e              // '>\xa4'
         x8 = 0x2b3
         if (x0 == x8)            // arg1
         b.ne 0x80061ec           // likely

    loc_0x0800607c: // orphan
         x8 = sym.__cfi_check     // pc
                                  // 0x8006000
         x8 = x8 + 0              // 0x8006000 // "?#\x03\xd5\xe8l\x98\xd2\u0231\xbd\xf2(\xc7\xce\xf2(\b\xe7\xf2\x1f" // pc
         jmp 0x80061c4

    loc_0x080060b8: // orphan
         x8 = 0xcef6              // '\xf6\xce'
         x8 = 0x59d3              // '\xd3Y'
         x8 = 0x1c17              // '\x17\x1c'
         x8 = 0x7814              // '\x14x'
         if (x0 == x8)            // arg1
         b.eq 0x80061b0           // unlikely

    loc_0x080060d0: // orphan
         x8 = 0xbcd5              // '\xd5\xbc'
         x8 = 0x7ad8              // '\xd8z'
         x8 = 0xa0fb              // '\xfb\xa0'
         x8 = 0x7e04
         if (x0 == x8)            // arg1
         b.ne 0x80061ec           // likely

    loc_0x080060e8: // orphan
         x8 = sym.__cfi_check     // pc
                                  // 0x8006000
         x8 = x8 + 0              // 0x8006000 // "?#\x03\xd5\xe8l\x98\xd2\u0231\xbd\xf2(\xc7\xce\xf2(\b\xe7\xf2\x1f" // pc
         x8 = x1 - x8             // arg2
         ror x8,x8,3
         if (x8 == 3)
         b.lo 0x80061cc           // unlikely

    loc_0x08006100: // orphan
         jmp 0x80061ec

    loc_0x08006104: // orphan
         // CODE XREF from sym.__cfi_check @ 0x8006030
         x8 = 0xda7d              // '}\xda'
         x8 = 0x8c45              // 'E\x8c'
         x8 = 0x7dab              // '\xab}'
         x8 = 0xf10b              // '\v\xf1'
         if (x0 == x8)            // arg1
         b.eq 0x80061bc           // unlikely

    loc_0x0800611c: // orphan
         x8 = 0x338d              // '\x8d3'
         x8 = 0xbfa2              // '\xa2\xbf'
         x8 = 0x894a              // 'J\x89'
         x8 = 0xf237              // '7\xf2'
         if (x0 == x8)            // arg1
         b.ne 0x80061ec           // likely

    loc_0x08006134: // orphan
         x8 = sym.__cfi_check     // pc
                                  // 0x8006000
         x8 = x8 + 0              // 0x8006000 // "?#\x03\xd5\xe8l\x98\xd2\u0231\xbd\xf2(\xc7\xce\xf2(\b\xe7\xf2\x1f" // pc
         jmp 0x80061c4

    loc_0x08006170: // orphan
         x8 = sym.__cfi_check     // pc
                                  // 0x8006000
         x8 = x8 + 0              // 0x8006000 // "?#\x03\xd5\xe8l\x98\xd2\u0231\xbd\xf2(\xc7\xce\xf2(\b\xe7\xf2\x1f" // pc
         jmp 0x80061c4

    loc_0x08006198: // orphan
         // CODE XREF from sym.__cfi_check @ 0x8006060
         x8 = sym.__cfi_check     // pc
                                  // 0x8006000
         x8 = x8 + 0              // 0x8006000 // "?#\x03\xd5\xe8l\x98\xd2\u0231\xbd\xf2(\xc7\xce\xf2(\b\xe7\xf2\x1f" // pc
         jmp 0x80061c4

    loc_0x080061a4: // orphan
         // CODE XREF from sym.__cfi_check @ 0x80060b4
         x8 = sym.__cfi_check     // pc
                                  // 0x8006000
         x8 = x8 + 0              // 0x8006000 // "?#\x03\xd5\xe8l\x98\xd2\u0231\xbd\xf2(\xc7\xce\xf2(\b\xe7\xf2\x1f" // pc
         jmp 0x80061c4

    loc_0x080061b0: // orphan
         // CODE XREF from sym.__cfi_check @ 0x80060cc
         x8 = sym.__cfi_check     // pc
                                  // 0x8006000
         x8 = x8 + 0              // 0x8006000 // "?#\x03\xd5\xe8l\x98\xd2\u0231\xbd\xf2(\xc7\xce\xf2(\b\xe7\xf2\x1f" // pc
         jmp 0x80061c4

    loc_0x080061bc: // orphan
         // CODE XREF from sym.__cfi_check @ 0x8006118
         x8 = sym.__cfi_check     // pc
                                  // 0x8006000
         x8 = x8 + 0              // 0x8006000 // "?#\x03\xd5\xe8l\x98\xd2\u0231\xbd\xf2(\xc7\xce\xf2(\b\xe7\xf2\x1f" // pc

    loc_0x080061c4: // orphan
         // XREFS: CODE 0x08006084  CODE 0x0800613c  CODE 0x08006178  
         // XREFS: CODE 0x080061a0  CODE 0x080061ac  CODE 0x080061b8  
         if (x1 == x8)            // arg2
         b.ne 0x80061ec           // unlikely

    loc_0x080061f4: // orphan
         jmp 0x80061f4

}

/* ===== 0x08009e8c ===== */
int sym.paradise_anon_ioctl (int esi, int edx) {
    loc_0x8009e8c:
        hint 0x19
        sp = sp - 0x1f0
        [x18] + 8 = x30
        [sp, 0x1b0] = (x29,2)
        x29 = var_1b0h
        [sp, 0x1c0] = (x28,2)
        [sp, 0x1d0] = (x22,2)
        [sp, 0x1e0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        x8 = [x9 + 0x798] // 0xd0 // 208
        w9 = [x8 + 4] // 0xcf // 207
        w8 = [x8 + 0x14] // 0xcf // 207
        w9 = w9 | w8
        if w9 jmp 0x800a4f8 // likely
            
    loc_0x800a4f8:
        x0 = ~0
        jmp 0x800a4a0
         // do {
    loc_0x800a4a0:
        // CODE XREF from sym.paradise_anon_ioctl @ 0x800a4fc
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800a500 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8009ed0
    loc_0x8009ef8:
        w8 = 0x5714   // '\x14W'
        w8 = 0xc010   // '\x10\xc0'
        if (w1 == w8) // arg2
        jmp ifle 0x8009fd0 // unlikely
            
    loc_0x8009fd0:
        w8 = 0x570c   // '\fW'
        w8 = 0xc008
        if (w1 == w8) // arg2
        jmp ifle 0x800a1a0 // unlikely
            
    loc_0x800a1a0:
        w8 = 0x5729   // ')W'
        w8 = 0xc004
        if (w1 == w8) // arg2
        b.eq 0x800a400 // unlikely
            
    loc_0x800a400:
        0x800a400 ()  // 0x800a400(0x0, 0x0, 0x0, 0x0)
        w20 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800a498
         // do {
    loc_0x800a498:
        // XREFS: CODE 0x0800a328  CODE 0x0800a3fc  CODE 0x0800a408
        // XREFS: CODE 0x0800a42c  CODE 0x0800a470  CODE 0x0800a4d8
        // XREFS: CODE 0x0800a4f4
        x0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8009f08
    loc_0x8009f18:
        w8 = 0x5715   // '\x15W'
        w8 = 0xc010   // '\x10\xc0'
        if (w1 == w8) // arg2
        b.eq 0x800a280 // unlikely
            
    loc_0x800a280:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800a284 ()  // "\" // 0x800a284(0x0, 0x0, 0x0, 0x0)
        jmp 0x800a3f8
         // do {
    loc_0x800a3f8:
        // XREFS: CODE 0x08009fcc  CODE 0x0800a048  CODE 0x0800a19c
        // XREFS: CODE 0x0800a240  CODE 0x0800a288  CODE 0x0800a2d4
        // XREFS: CODE 0x0800a374  CODE 0x0800a380  CODE 0x0800a3d4
        // XREFS: CODE 0x0800a3e0  CODE 0x0800a3ec
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800a498
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8009f28
    loc_0x8009f38:
        w8 = 0x5739   // '9W'
        w8 = 0xc010   // '\x10\xc0'
        if (w1 == w8) // arg2
        b.ne 0x800a49c // likely
            
    loc_0x800a49c:
        [x22] = x23
    loc_0x08009f48: // orphan
             x0 = var_10h_2           // int64_t arg1
             x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
             w2 = 0x10
             [sp, 0x10] = (xzr,2)
             0x8009f58 ()             // "`&" // 0x8009f58(0x178010, 0x0, 0x10, 0x0)
             if x0 jmp 0x800a428      // likely

    loc_0x08009f60: // orphan
         w0 = [var_10h_2]         // 0x4 // 4
         if (w0 == 1)
         b.lt 0x800a46c           // likely

    loc_0x08009f6c: // orphan
         0x8009f6c ()             // 0x8009f6c(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a2b4

    loc_0x08009f74: // orphan
         w8 = 0x5727              // ''W'
         w8 = 0xc198              // '\x98\xc1'
         if (w1 == w8)            // arg2
         jmp ifle 0x800a04c       // unlikely

    loc_0x08009f84: // orphan
         w8 = 0x572b              // '+W'
         w8 = 0xc360              // '`\xc3'
         if (w1 == w8)            // arg2
         jmp ifgt 0x800a164       // likely

    loc_0x08009f94: // orphan
         w8 = 0x5728              // '(W'
         w8 = 0xc198              // '\x98\xc1'
         if (w1 == w8)            // arg2
         b.eq 0x800a2cc           // unlikely

    loc_0x08009fa4: // orphan
         w8 = 0x572a              // '*W'
         w8 = 0xc198              // '\x98\xc1'
         if (w1 == w8)            // arg2
         b.eq 0x800a2d8           // unlikely

    loc_0x08009fb4: // orphan
         w8 = 0x5716              // '\x16W'
         w8 = 0xc204
         if (w1 == w8)            // arg2
         b.ne 0x800a49c           // likely

    loc_0x08009fc4: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8009fc8 ()             // 0x8009fc8(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a3f8

    loc_0x08009ff0: // orphan
         w8 = 0x570e              // '\x0eW'
         w8 = 0xc008
         if (w1 == w8)            // arg2
         b.eq 0x800a36c           // unlikely

    loc_0x0800a000: // orphan
         // XREFS(97)
         w8 = 0x573c              // '<W'
         w8 = 0xc008
         if (w1 == w8)            // arg2
         b.ne 0x800a49c           // likely

    loc_0x0800a010: // orphan
         x0 = var_10h_2           // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x8
         [var_10h_2] = xzr
         0x800a020 ()             // "  " // 0x800a020(0x178010, 0x0, 0x8, 0x0)
         if x0 jmp 0x800a428      // likely

    loc_0x0800a028: // orphan
         w0 = [var_10h_2]         // 0x4 // 4
         w20 = ~0x15
         if (w0 == 1)
         b.lt 0x800a498           // likely

    loc_0x0800a038: // orphan
         w1 = [var_14h]           // 4
         if (w1 == 1)
         b.lt 0x800a498           // likely

    loc_0x0800a044: // orphan
         0x800a044 ()             // 0x800a044(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a3f8

    loc_0x0800a04c: // orphan
         w8 = 0x570b              // '\vW'
         w8 = 0xc028              // '(\xc0'
         if (w1 == w8)            // arg2
         jmp ifle 0x800a218       // unlikely

    loc_0x0800a05c: // orphan
         w8 = 0x570c              // '\fW'
         w8 = 0xc028              // '(\xc0'
         if (w1 == w8)            // arg2
         b.eq 0x800a378           // unlikely

    loc_0x0800a06c: // orphan
         w8 = 0x570b              // '\vW'
         w8 = 0xc104
         if (w1 == w8)            // arg2
         b.eq 0x800a384           // unlikely

    loc_0x0800a07c: // orphan
         w8 = 0x570a              // '\nW'
         w8 = 0xc120              // ' \xc1'
         if (w1 == w8)            // arg2
         b.ne 0x800a49c           // likely

    loc_0x0800a08c: // orphan
         x0 = var_10h_2           // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x120
         x20 = var_10h_2
         0x800a09c ()             // 0x800a09c(0x178010, 0x0, 0x120, 0x0)
         x0 = var_10h_2           // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x120
         0x800a0ac ()             // 0x800a0ac(0x178010, 0x0, 0x120, 0x0)
         if x0 jmp 0x800a428      // likely

    loc_0x0800a0b4: // orphan
         w0 = [var_10h_2]         // 0x4 // 4
         x1 = x20 | 4             // int64_t arg2
         w2 = [var_128h]          // 0x4 // 4
         x3 = var_sp_8h           // int64_t arg_1f0h
         x4 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp] = (xzr,2)
         0x800a0cc ()             // 0x800a0cc(0x0, 0x4, 0x0, 0x178008)
         w20 = ~0x76              // 'v'
         if !w0 jmp 0x800a498     // likely

    loc_0x0800a0d8: // orphan
         x8 = [var_sp_8h]         // 0x4 // 4
         if !x8 jmp 0x800a498     // likely

    loc_0x0800a0e0: // orphan
         [var_0h_2] = x8
         x1 = var_10h_2
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x120
         jmp 0x800a488

    loc_0x0800a0f4: // orphan
         w8 = 0x5713              // '\x13W'
         w8 = 0xc018              // '\x18\xc0'
         if (w1 == w8)            // arg2
         b.eq 0x800a3cc           // unlikely

    loc_0x0800a104: // orphan
         w8 = 0x572b              // '+W'
         w8 = 0xc018              // '\x18\xc0'
         if (w1 == w8)            // arg2
         b.eq 0x800a3d8           // unlikely

    loc_0x0800a114: // orphan
         w8 = 0x573a              // ':W'
         w8 = 0xc020              // ' \xc0'
         if (w1 == w8)            // arg2
         b.ne 0x800a49c           // likely

    loc_0x0800a124: // orphan
         x0 = var_10h_2           // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x20
         [sp, 0x20] = (xzr,2)
         [sp, 0x10] = (xzr,2)
         0x800a138 ()             // 0x800a138(0x178010, 0x0, 0x20, 0x0)
         if x0 jmp 0x800a428      // likely

    loc_0x0800a140: // orphan
         w0 = [var_10h_2]         // 0x4 // 4
         if (w0 == 1)
         b.lt 0x800a46c           // likely

    loc_0x0800a14c: // orphan
         x8 = var_10h_2
         x1 = var_10h             // int64_t arg2
         x2 = var_20h             // int64_t arg3
         x3 = var_20h_2           // int64_t arg_1f0h
         0x800a15c ()             // 0x800a15c(0x0, 0x178018, 0x178020, 0x178028)
         jmp 0x800a450

    loc_0x0800a164: // orphan
         w8 = 0x572c              // ',W'
         w8 = 0xc360              // '`\xc3'
         if (w1 == w8)            // arg2
         b.eq 0x800a3e4           // unlikely

    loc_0x0800a174: // orphan
         w8 = 0x571e              // '\x1eW'
         w8 = 0x4008
         if (w1 == w8)            // arg2
         b.eq 0x800a3f0           // unlikely

    loc_0x0800a184: // orphan
         w8 = 0x571f              // '\x1fW'
         w8 = 0x4018              // '\x18@'
         if (w1 == w8)            // arg2
         b.ne 0x800a49c           // likely

    loc_0x0800a194: // orphan
         // CODE XREFS from sym.__cfi_check_fail @ 0x8009e38, 0x8009e3c
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a198 ()             // 0x800a198(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a3f8

    loc_0x0800a1c0: // orphan
         [var_10h_2] = wzr
         if !x19 jmp 0x800a428    // likely

    loc_0x0800a1c8: // orphan
         x0 = var_10h_2           // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x4
         0x800a1d4 ()             // 0x800a1d4(0x178010, 0x0, 0x4, 0x0)
         if x0 jmp 0x800a428      // likely

    loc_0x0800a1dc: // orphan
         w8 = [var_10h_2]         // 0x4 // 4
         w8 = w8 - 0x10
         if (w8 != 0x11)
         b.lo 0x800a46c           // unlikely

    loc_0x0800a1ec: // orphan
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800a1f4 ()             // 0x800a1f4(0x800a000, 0x0, 0x0, 0x0)
         x8 = 0x800a000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x800a4e4     // unlikely

    loc_0x0800a204: // orphan
         w21 = 0x5030             // '0P'
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x19 = x8 + 0x50
         w21 = 0x3
         jmp 0x800a26c

    loc_0x0800a218: // orphan
         w8 = 0x573b              // '//W'
         w8 = 0xc020              // ' \xc0'
         if (w1 == w8)            // arg2
         b.eq 0x800a40c           // unlikely

    loc_0x0800a228: // orphan
         w8 = 0x5709
         w8 = 0xc028              // '(\xc0'
         if (w1 == w8)            // arg2
         b.ne 0x800a49c           // likely

    loc_0x0800a238: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a23c ()             // "n" // 0x800a23c(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a3f8

    loc_0x0800a244: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x800a27c
         w2 = 0x5000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x3
         0x800a254 ()             // 0x800a254(0x0, 0x0, 0x35000, 0x0)
         [x19 = wzr

    loc_0x0800a25c: // orphan
         x20 = x20 + 1
         x19 = x19 + x21
         if (x20 == 0x10)
         b.eq 0x800a4dc           // unlikely

    loc_0x0800a26c: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x800a214
         w8 = [var_10h_2]         // 0x4 // 4
         tbnz w8,0x1f,0x800a244   // unlikely

    loc_0x0800a274: // orphan
         if (x20 == x8)
         b.ne 0x800a25c           // unlikely

    loc_0x0800a27c: // orphan
         jmp 0x800a244

    loc_0x0800a28c: // orphan
         x0 = var_10h_2           // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x10
         [sp, 0x10] = (xzr,2)
         0x800a29c ()             // 0x800a29c(0x178010, 0x0, 0x10, 0x0)
         if x0 jmp 0x800a428      // likely

    loc_0x0800a2a4: // orphan
         w0 = [var_10h_2]         // 0x4 // 4
         if (w0 == 1)
         b.lt 0x800a46c           // likely

    loc_0x0800a2b0: // orphan
         0x800a2b0 ()             // 0x800a2b0(0x0, 0x0, 0x0, 0x0)

    loc_0x0800a2b4: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8009f70
         [var_10h] = x0
         x1 = var_10h_2           // int64_t arg2
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x10
         0x800a2c4 ()             // "q" // 0x800a2c4(0x0, 0x178010, 0x10, 0x0)
         jmp 0x800a48c

    loc_0x0800a2cc: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a2d0 ()             // "I" // 0x800a2d0(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a3f8

    loc_0x0800a2d8: // orphan
         x0 = var_10h_2           // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x198
         0x800a2e4 ()             // 0x800a2e4(0x178010, 0x0, 0x198, 0x0)
         w20 = ~0xd
         if !x19 jmp 0x800a498    // likely

    loc_0x0800a2f0: // orphan
         x21 = 0x800a000
         x21 = x21 + 0
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a2fc ()             // 0x800a2fc(0x800a000, 0x0, 0x0, 0x0)
         x0 = var_10h_2           // int64_t arg1
         0x800a304 ()             // 0x800a304(0x178010, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a30c ()             // 0x800a30c(0x800a000, 0x0, 0x0, 0x0)
         x1 = var_10h_2           // int64_t arg2
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x198
         0x800a31c ()             // 0x800a31c(0x0, 0x178010, 0x198, 0x0)
         if (x0 == 0)
         csel w20,wzr,w20, eq
         jmp 0x800a498

    loc_0x0800a32c: // orphan
         x0 = var_10h_2           // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x8
         [var_10h_2] = xzr
         0x800a33c ()             // 0x800a33c(0x178010, 0x0, 0x8, 0x0)
         if x0 jmp 0x800a428      // likely

    loc_0x0800a344: // orphan
         w0 = [var_10h_2]         // 0x4 // 4
         0x800a348 ()             // "@\t" // 0x800a348(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800a474     // likely

    loc_0x0800a350: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800a354 ()             // 0x800a354(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800a474     // likely

    loc_0x0800a35c: // orphan
         x8 = [x0 + 0x640]        // 0xc7 // 199
         if (x8 == 0)
         cset w8,ne
         jmp 0x800a478

    loc_0x0800a36c: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a370 ()             // "!" // 0x800a370(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a3f8

    loc_0x0800a378: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a37c ()             // 0x800a37c(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a3f8

    loc_0x0800a384: // orphan
         x0 = var_10h_2           // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x104
         x20 = var_10h_2
         0x800a394 ()             // 0x800a394(0x178010, 0x0, 0x104, 0x0)
         x0 = var_10h_2           // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x104
         0x800a3a4 ()             // 0x800a3a4(0x178010, 0x0, 0x104, 0x0)
         if x0 jmp 0x800a428      // likely

    loc_0x0800a3ac: // orphan
         x0 = x20 | 4             // int64_t arg1
         0x800a3b0 ()             // 0x800a3b0(0x4, 0x0, 0x0, 0x0)
         [var_10h_2] = w0
         if !w0 jmp 0x800a4d4     // unlikely

    loc_0x0800a3bc: // orphan
         x1 = var_10h_2
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x104
         jmp 0x800a488

    loc_0x0800a3cc: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a3d0 ()             // "\t" // 0x800a3d0(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a3f8

    loc_0x0800a3d8: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a3dc ()             // 0x800a3dc(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a3f8

    loc_0x0800a3e4: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a3e8 ()             // 0x800a3e8(0x0, 0x0, 0x0, 0x0)
         jmp 0x800a3f8

    loc_0x0800a3f0: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a3f4 ()             // 0x800a3f4(0x0, 0x0, 0x0, 0x0)

    loc_0x0800a40c: // orphan
         x0 = var_10h_2           // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x20
         [sp, 0x20] = (xzr,2)
         [sp, 0x10] = (xzr,2)
         0x800a420 ()             // "`" // 0x800a420(0x178010, 0x0, 0x20, 0x0)
         if !x0 jmp 0x800a430     // unlikely

    loc_0x0800a428: // orphan
         w20 = ~0xd
         jmp 0x800a498

    loc_0x0800a430: // orphan
         w0 = [var_10h_2]         // 0x4 // 4
         if (w0 == 1)
         b.lt 0x800a46c           // likely

    loc_0x0800a43c: // orphan
         x8 = var_10h_2
         x1 = var_10h             // int64_t arg2
         x2 = var_20h             // int64_t arg3
         x3 = var_20h_2           // int64_t arg_1f0h
         0x800a44c ()             // 0x800a44c(0x0, 0x178018, 0x178020, 0x178028)

    loc_0x0800a450: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x800a160
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x800a498      // unlikely

    loc_0x0800a458: // orphan
         x1 = var_10h_2           // int64_t arg2
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x20
         0x800a464 ()             // "\t" // 0x800a464(0x0, 0x178010, 0x20, 0x0)
         jmp 0x800a48c

    loc_0x0800a46c: // orphan
         w20 = ~0x15
         jmp 0x800a498

    loc_0x0800a474: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a478: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x800a368
         [var_14h] = w8
         x1 = var_10h_2
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x8

    loc_0x0800a488: // orphan
         // CODE XREFS from sym.paradise_anon_ioctl @ 0x800a0f0, 0x800a3c8
         0x800a488 ()             // 0x800a488(0x0, 0x0, 0x0, 0x0)

    loc_0x0800a48c: // orphan
         // CODE XREFS from sym.paradise_anon_ioctl @ 0x800a2c8, 0x800a468
         w8 = ~0xd
         if (x0 == 0)
         csel w20,wzr,w8, eq

    loc_0x0800a4b4: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_1f0h
         hint 0x1d
         

    loc_0x0800a4d4: // orphan
         w20 = ~0x76              // 'v'
         jmp 0x800a498

    loc_0x0800a4dc: // orphan
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800a4e8

    loc_0x0800a4e4: // orphan
         w20 = ~0x12

    loc_0x0800a4e8: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x800a4e0
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800a4f0 ()             // 0x800a4f0(0x800a000, 0x0, 0x0, 0x0)
         jmp 0x800a498

    loc_0x0800a500: // orphan
         0x800a500 ()             // sym.paradise_anon_open // 0x800a500(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800e888 ===== */
int sym._copy_from_user.87 (int esi, int edx) {
    loc_0x800e888:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = (byte) [x9 + 0x3e] // 0xd0 // 208
        x8 = x1 << 8  // arg2
        tbnz w10,5,0x800e8c4 // likely
            
    loc_0x800e8c4:
        // CODE XREF from sym._copy_from_user.87 @ 0x800e8b4
        x10 = x1 & x8,asr 8 // arg2
         // do {
    loc_0x800e8c8:
        // CODE XREF from sym._copy_from_user.87 @ 0x800e8c0
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = xzr | 0x7fffffffff
        x10 = x10 + x19
        csel x11,xzr,x11, hi
        csinv x10,x10,xzr, lo
        sbcs xzr,x10,x11
        cset x10,ls
        if !x10 jmp 0x800e99c // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800e8e8: // orphan
             jmp 0x800e9d8

    loc_0x0800e8f0: // orphan
         // CODE XREF from sym._copy_from_user.87 @ 0x800e9e8
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x800e908     // unlikely

    loc_0x0800e8fc: // orphan
         
         w11 = 0x60               // '`'
         // CODE XREF from sym._copy_from_user.87 @ +0x180
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e908: // orphan
         // CODE XREF from sym._copy_from_user.87 @ 0x800e8f8
         x9 = x9 + 8
         ldar x9,[x9]
         x12 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e930: // orphan
         // CODE XREF from sym._copy_from_user.87 @ 0x800e9e4
         bti j
         x9 = x1 & x8,asr 8       // arg2
         x10 = xzr | 0x7fffffffff
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x1,xzr, eq
         hint 0x14
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800e954 ()             // 0x800e954(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800e9ec

    loc_0x0800e964: // orphan
         // CODE XREF from sym._copy_from_user.87 @ 0x800e9fc
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800e97c      // unlikely

    loc_0x0800e970: // orphan
         
         w9 = 0x60                // '`'
         // CODE XREF from sym._copy_from_user.87 @ +0x18c
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e97c: // orphan
         // CODE XREF from sym._copy_from_user.87 @ 0x800e96c
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e99c: // orphan
         // CODE XREFS from sym._copy_from_user.87 @ 0x800e8e4, 0x800e9f8
         bti j
         if x21 jmp 0x800e9c0     // unlikely

    loc_0x0800e9a4: // orphan
         // CODE XREF from sym._copy_from_user.87 @ 0x800e9d4
         (x20, 2) = 3
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

    loc_0x0800e9c0: // orphan
         // CODE XREF from sym._copy_from_user.87 @ 0x800e9a0
         x8 = x19 - x21
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x0 = x20 + x8            // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800e9d0 ()             // 0x800e9d0(0x0, 0x0, 0x0, 0x0)
         jmp 0x800e9a4

    loc_0x0800e9d8: // orphan
         // CODE XREF from sym._copy_from_user.87 @ 0x800e8e8
         bti j
         x10 = 0x800e000
         x10 = [x10]              // 0xd1 // 209
         tbnz w10,0x18,0x800e930  // likely

    loc_0x0800e9e8: // orphan
         jmp 0x800e8f0

    loc_0x0800e9ec: // orphan
         // CODE XREF from sym._copy_from_user.87 @ 0x800e95c
         bti j
         x8 = 0x800e000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x18,0x800e99c   // likely

    loc_0x0800e9fc: // orphan
         jmp 0x800e964

}

/* ===== 0x0800c2c0 ===== */
int sym._copy_from_user (int esi, int edx) {
    loc_0x800c2c0:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = (byte) [x9 + 0x3e] // 0xd0 // 208
        x8 = x1 << 8  // arg2
        tbnz w10,5,0x800c2fc // likely
            
    loc_0x800c2fc:
        x10 = x1 & x8,asr 8 // arg2
         // do {
    loc_0x800c300:
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = xzr | 0x7fffffffff
        x10 = x10 + x19
        csel x11,xzr,x11, hi
        csinv x10,x10,xzr, lo
        sbcs xzr,x10,x11
        cset x10,ls
        if !x10 jmp 0x800c3d4 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800c320: // orphan
             jmp 0x800c410

    loc_0x0800c328: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800c420
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x800c340     // unlikely

    loc_0x0800c334: // orphan
         
         w11 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800c340: // orphan
         x9 = x9 + 8
         ldar x9,[x9]
         x12 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800c368: // orphan
         bti j
         x9 = x1 & x8,asr 8       // arg2
         x10 = xzr | 0x7fffffffff
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x1,xzr, eq
         hint 0x14
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800c38c ()             // 0x800c38c(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800c424

    loc_0x0800c39c: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800c434
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800c3b4      // unlikely

    loc_0x0800c3a8: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800c3b4: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800c3d4: // orphan
         bti j
         if x21 jmp 0x800c3f8     // unlikely

    loc_0x0800c3dc: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800c40c
         (x20, 2) = 3
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

    loc_0x0800c3f8: // orphan
         x8 = x19 - x21
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x0 = x20 + x8            // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800c408 ()             // 0x800c408(0x0, 0x0, 0x0, 0x0)
         jmp 0x800c3dc

    loc_0x0800c410: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800c320
         bti j
         x10 = 0x800c000
         x10 = [x10]              // 0xd1 // 209
         tbnz w10,0x18,0x800c368  // likely

    loc_0x0800c420: // orphan
         jmp 0x800c328

    loc_0x0800c424: // orphan
         // CODE XREF from sym._copy_from_user @ 0x800c394
         bti j
         x8 = 0x800c000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x18,0x800c3d4   // likely

    loc_0x0800c434: // orphan
         jmp 0x800c39c

}

/* ===== 0x08024080 ===== */
int sym._copy_from_user.171 (int esi, int edx) {
    loc_0x8024080:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = (byte) [x9 + 0x3e] // 0xd0 // 208
        x8 = x1 << 8  // arg2
        tbnz w10,5,0x80240bc // likely
            
    loc_0x80240bc:
        x10 = x1 & x8,asr 8 // arg2
         // do {
    loc_0x80240c0:
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = xzr | 0x7fffffffff
        x10 = x10 + x19
        csel x11,xzr,x11, hi
        csinv x10,x10,xzr, lo
        sbcs xzr,x10,x11
        cset x10,ls
        if !x10 jmp 0x8024194 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080240e0: // orphan
             jmp 0x80241d0

    loc_0x080240e8: // orphan
         // CODE XREF from sym._copy_from_user.171 @ 0x80241e0
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x8024100     // unlikely

    loc_0x080240f4: // orphan
         
         w11 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08024100: // orphan
         x9 = x9 + 8
         ldar x9,[x9]
         x12 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08024128: // orphan
         bti j
         x9 = x1 & x8,asr 8       // arg2
         x10 = xzr | 0x7fffffffff
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x1,xzr, eq
         hint 0x14
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x802414c ()             // 0x802414c(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80241e4

    loc_0x0802415c: // orphan
         // CODE XREF from sym._copy_from_user.171 @ 0x80241f4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8024174      // unlikely

    loc_0x08024168: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08024174: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08024194: // orphan
         bti j
         if x21 jmp 0x80241b8     // unlikely

    loc_0x0802419c: // orphan
         // CODE XREF from sym._copy_from_user.171 @ 0x80241cc
         (x20, 2) = 3
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

    loc_0x080241b8: // orphan
         x8 = x19 - x21
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x0 = x20 + x8            // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x80241c8 ()             // 0x80241c8(0x0, 0x0, 0x0, 0x0)
         jmp 0x802419c

    loc_0x080241d0: // orphan
         // CODE XREF from sym._copy_from_user.171 @ 0x80240e0
         bti j
         x10 = 0x8024000
         x10 = [x10]              // 0xd1 // 209
         tbnz w10,0x18,0x8024128  // likely

    loc_0x080241e0: // orphan
         jmp 0x80240e8

    loc_0x080241e4: // orphan
         // CODE XREF from sym._copy_from_user.171 @ 0x8024154
         bti j
         x8 = 0x8024000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x18,0x8024194   // likely

    loc_0x080241f4: // orphan
         jmp 0x802415c

}

/* ===== 0x0800ea3c ===== */
int sym._copy_to_user.88 (int esi, int edx) {
    loc_0x800ea3c:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = (byte) [x9 + 0x3e] // 0xd0 // 208
        x8 = x0 << 8  // arg1
        tbnz w10,5,0x800ea68 // likely
            
    loc_0x800ea68:
        // CODE XREF from sym._copy_to_user.88 @ 0x800ea58
        x10 = x0 & x8,asr 8 // arg1
         // do {
    loc_0x800ea6c:
        // CODE XREF from sym._copy_to_user.88 @ 0x800ea64
        x11 = xzr | 0x7fffffffff
        x10 = x10 + x2 // arg3
        csel x11,xzr,x11, hi
        csinv x10,x10,xzr, lo
        sbcs xzr,x10,x11
        cset x10,ls
        if !x10 jmp 0x800eb34 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800ea88: // orphan
             jmp 0x800eb4c

    loc_0x0800ea90: // orphan
         // CODE XREF from sym._copy_to_user.88 @ 0x800eb5c
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x800eaa8     // unlikely

    loc_0x0800ea9c: // orphan
         
         w11 = 0x60               // '`'
         // CODE XREF from sym._copy_to_user.88 @ +0x140
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800eaa8: // orphan
         // CODE XREF from sym._copy_to_user.88 @ 0x800ea98
         x9 = x9 + 8
         ldar x9,[x9]
         x12 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ead0: // orphan
         // CODE XREF from sym._copy_to_user.88 @ 0x800eb58
         bti j
         x9 = x0 & x8,asr 8       // arg1
         x10 = xzr | 0x7fffffffff
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x0,xzr, eq
         hint 0x14
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800eaec ()             // 0x800eaec(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800eb60

    loc_0x0800eafc: // orphan
         // CODE XREF from sym._copy_to_user.88 @ 0x800eb70
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800eb14      // unlikely

    loc_0x0800eb08: // orphan
         
         w9 = 0x60                // '`'
         // CODE XREF from sym._copy_to_user.88 @ +0x14c
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800eb14: // orphan
         // CODE XREF from sym._copy_to_user.88 @ 0x800eb04
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800eb34: // orphan
         // CODE XREFS from sym._copy_to_user.88 @ 0x800ea84, 0x800eb6c
         bti j
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

    loc_0x0800eb4c: // orphan
         // CODE XREF from sym._copy_to_user.88 @ 0x800ea88
         bti j
         x10 = 0x800e000
         x10 = [x10]              // 0xd1 // 209
         tbnz w10,0x18,0x800ead0  // likely

    loc_0x0800eb5c: // orphan
         jmp 0x800ea90

    loc_0x0800eb60: // orphan
         // CODE XREF from sym._copy_to_user.88 @ 0x800eaf4
         bti j
         x8 = 0x800e000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x18,0x800eb34   // likely

    loc_0x0800eb70: // orphan
         jmp 0x800eafc

}

/* ===== 0x08024808 ===== */
int sym.paradise_hwbp_fill_config (int esi, int edx) {
    loc_0x8024808:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w2 = 0x198
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x8024828 ()  // 0x8024828(0x0, 0x0, 0x198, 0x0)
        mrs x8,id_aa64dfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = 0x8024000
        ubfx x8,x8,0xc, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = x8 + 1
        mrs x8,id_aa64dfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx x8,x8,0x14, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = x8 + 1
        x8 = [x10]    // 0xd1 // 209
        [x19, 8] = (x11,2)
        if !x8 jmp 0x80248e0 // unlikely
            
    loc_0x80248e0:
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x080248f0
         // } else {
    loc_0x8024854:
        w10 = [x8 + 0x10] // 0xcf // 207
        [x19] = w10
        x10 = [x8]    // 0xcf // 207
        if x10 jmp 0x8024868 // likely
        }
        return eax;
    loc_0x8024864:
        x10 = [x19 + 8] // 0xda // 218
         // do {
    loc_0x8024868:
        [x19 + 8] = x10
        w11 = 0x18
        x10 = [x8 + 8] // 0xcf // 207
        x8 = x8 + 0x38
        if (x10 == 0)
        csel x12,x9,x10, eq
        w10 = 0x5030  // '0P'
        w9 = 0x10
        w10 = 0x3
        [x19 + 0x10] = x12
        jmp 0x80248c8
         // } while (?);
        }
        return eax;
    loc_0x08024894: // orphan
             madd x14,x12,x11, x19
             w12 = w12 + 1
             [x14 + 0x18] = x13
             ldur w13,[x8,-0x10]      // 0xcf // 207
             [x14 + 0x20] = w13
             ldur w13,[x8,-0xc]       // 0xcf // 207
             [x14 + 0x24] = w13
             ldur w13,[x8,-8]         // 0xcf // 207
             [x19 + 4] = w12
             [x14 + 0x28] = w13

    loc_0x080248bc: // orphan
         x9 = x9 - 1
         x8 = x8 + x10
         b.eq 0x80248e0           // unlikely

    loc_0x080248c8: // orphan
         // CODE XREF from sym.paradise_hwbp_fill_config @ 0x8024890
         x13 = [x8]               // 0xcf // 207
         if !x13 jmp 0x80248bc    // unlikely

    loc_0x080248d0: // orphan
         w12 = [x19 + 4]          // 0xda // 218
         if (w12 == 0xf)
         b.ls 0x8024894           // likely

    loc_0x080248dc: // orphan
         brk 0x5512

}

/* ===== 0x080248f4 ===== */
int sym._copy_to_user.172 (int esi, int edx) {
    loc_0x80248f4:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = (byte) [x9 + 0x3e] // 0xd0 // 208
        x8 = x0 << 8  // arg1
        tbnz w10,5,0x8024920 // likely
            
    loc_0x8024920:
        x10 = x0 & x8,asr 8 // arg1
         // do {
    loc_0x8024924:
        x11 = xzr | 0x7fffffffff
        x10 = x10 + x2 // arg3
        csel x11,xzr,x11, hi
        csinv x10,x10,xzr, lo
        sbcs xzr,x10,x11
        cset x10,ls
        if !x10 jmp 0x80249ec // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08024940: // orphan
             jmp 0x8024a04

    loc_0x08024948: // orphan
         // CODE XREF from sym._copy_to_user.172 @ 0x8024a14
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x8024960     // unlikely

    loc_0x08024954: // orphan
         
         w11 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08024960: // orphan
         x9 = x9 + 8
         ldar x9,[x9]
         x12 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08024988: // orphan
         bti j
         x9 = x0 & x8,asr 8       // arg1
         x10 = xzr | 0x7fffffffff
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x0,xzr, eq
         hint 0x14
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80249a4 ()             // 0x80249a4(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8024a18

    loc_0x080249b4: // orphan
         // CODE XREF from sym._copy_to_user.172 @ 0x8024a28
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x80249cc      // unlikely

    loc_0x080249c0: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080249cc: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080249ec: // orphan
         bti j
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

    loc_0x08024a04: // orphan
         // CODE XREF from sym._copy_to_user.172 @ 0x8024940
         bti j
         x10 = 0x8024000
         x10 = [x10]              // 0xd1 // 209
         tbnz w10,0x18,0x8024988  // likely

    loc_0x08024a14: // orphan
         jmp 0x8024948

    loc_0x08024a18: // orphan
         // CODE XREF from sym._copy_to_user.172 @ 0x80249ac
         bti j
         x8 = 0x8024000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x18,0x80249ec   // likely

    loc_0x08024a28: // orphan
         jmp 0x80249b4

}

/* ===== 0x0800c5d8 ===== */
int sym._copy_to_user (int esi, int edx) {
    loc_0x800c5d8:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = (byte) [x9 + 0x3e] // 0xd0 // 208
        x8 = x0 << 8  // arg1
        tbnz w10,5,0x800c604 // likely
            
    loc_0x800c604:
        x10 = x0 & x8,asr 8 // arg1
         // do {
    loc_0x800c608:
        x11 = xzr | 0x7fffffffff
        x10 = x10 + x2 // arg3
        csel x11,xzr,x11, hi
        csinv x10,x10,xzr, lo
        sbcs xzr,x10,x11
        cset x10,ls
        if !x10 jmp 0x800c6d0 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800c624: // orphan
             jmp 0x800c6e8

    loc_0x0800c62c: // orphan
         // CODE XREF from sym._copy_to_user @ 0x800c6f8
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x800c644     // unlikely

    loc_0x0800c638: // orphan
         
         w11 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800c644: // orphan
         x9 = x9 + 8
         ldar x9,[x9]
         x12 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800c66c: // orphan
         bti j
         x9 = x0 & x8,asr 8       // arg1
         x10 = xzr | 0x7fffffffff
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x0,xzr, eq
         hint 0x14
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c688 ()             // 0x800c688(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800c6fc

    loc_0x0800c698: // orphan
         // CODE XREF from sym._copy_to_user @ 0x800c70c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800c6b0      // unlikely

    loc_0x0800c6a4: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800c6b0: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800c6d0: // orphan
         bti j
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

    loc_0x0800c6e8: // orphan
         // CODE XREF from sym._copy_to_user @ 0x800c624
         bti j
         x10 = 0x800c000
         x10 = [x10]              // 0xd1 // 209
         tbnz w10,0x18,0x800c66c  // likely

    loc_0x0800c6f8: // orphan
         jmp 0x800c62c

    loc_0x0800c6fc: // orphan
         // CODE XREF from sym._copy_to_user @ 0x800c690
         bti j
         x8 = 0x800c000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x18,0x800c6d0   // likely

    loc_0x0800c70c: // orphan
         jmp 0x800c698

}

/* ===== 0x0800a504 ===== */
int sym.paradise_anon_open (int esi, int edx) {
    loc_0x800a504:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [sp + 0x10] = x21
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        x21 = 0x800a000
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x8
        x0 = [x21]    // 0xdc // 220 // int64_t arg2
        0x800a530 ()  // 0x800a530(0x72b80108528ae788, 0xcc0, 0x8, 0x0)
        if !x0 jmp 0x800a594 // unlikely
            
    loc_0x800a594:
        x0 = 0x800a000
        x0 = x0 + 0   // int64_t arg2
        0x800a59c ()  // 0x800a59c(0x800a000, 0x0, 0x0, 0x0)
        w0 = ~0xb
        jmp 0x800a57c
         // do {
    loc_0x800a57c:
        // CODE XREFS from sym.paradise_anon_open @ 0x800a5a4, 0x800a5cc
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800a590
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800a538
    loc_0x800a550:
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x80     // '\x80'
        w1 = 0xcc0    // '\xc0\f'
        0x800a55c ()  // 0x800a55c(0x80, 0xcc0, 0x0, 0x0)
        [x21] = x0
        if !x0 jmp 0x800a5a8 // unlikely
            
    loc_0x800a5a8:
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800a5ac ()  // 0x800a5ac(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x800a5b0:
        x0 = 0x800a000
        [x19] = xzr
        x0 = x0 + 0   // int64_t arg2
        0x800a5bc ()  // 0x800a5bc(0x800a000, 0x0, 0x0, 0x0)
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800a5c4 ()  // 0x800a5c4(0x0, 0x0, 0x0, 0x0)
        w0 = ~0xb
        jmp 0x800a57c
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800a5d0 ===== */
int sym.paradise_anon_release (int esi, int edx) {
    loc_0x800a5d0:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        x20 = [x1 + 0xd8] // 0xc8 // 200 // arg2
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x800a5f0 ()  // 0x800a5f0(0x0, 0x0, 0x0, 0x0)
        if !x20 jmp 0x800a668 // likely
            
    loc_0x800a668:
        (x20, 2) = 3
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x22, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800a680
         // } else {
    loc_0x800a5f8:
        x21 = [x20]   // 0xdb // 219
        if !x21 jmp 0x800a65c // likely
        }
        return eax;
    loc_0x800a600:
        x8 = [x21 + 8] // 0xdc // 220
        if !x8 jmp 0x800a648 // likely
            
    loc_0x800a648:
        x0 = [x21]    // 0xdc // 220
        if !x0 jmp 0x800a654 // likely
            
    loc_0x800a654:
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800a658 ()  // 0x800a658(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x800a65c:
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800a660 ()  // 0x800a660(0x0, 0x0, 0x0, 0x0)
        [x19 + 0xd8] = xzr
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800a610: // orphan
             // CODE XREF from sym.paradise_anon_release @ 0x800a644
             w9 = w22 + 1
             x22 = w9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             if (x8 == x22)
             b.ls 0x800a648           // likely

    loc_0x0800a620: // orphan
         // CODE XREF from sym.paradise_anon_release @ 0x800a60c
         if (x8 == x22)
         b.ls 0x800a610           // likely

    loc_0x0800a628: // orphan
         x9 = [x21]               // 0xdc // 220
         x0 = [x9 + x22,lsl 3]    // 0xdd000000d0 // 949187772624
         if !x0 jmp 0x800a610     // likely

    loc_0x0800a634: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800a638 ()             // 0x800a638(0x0, 0x0, 0x0, 0x0)
         x21 = [x20]              // 0xdb // 219
         x8 = [x21 + 8]           // 0xdc // 220
         jmp 0x800a610

}

/* ===== 0x0800a90c ===== */
int sym.reboot_handler_pre (int esi, int edx) {
    loc_0x800a90c:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        mrs x19,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x19 + 0x798] // 0xda // 218
        w9 = [x8 + 4] // 0xcf // 207
        w8 = [x8 + 0x14] // 0xcf // 207
        w8 = w9 | w8
        if w8 jmp 0x800a9d8 // unlikely
            
    loc_0x800a9d8:
        // CODE XREFS from sym.reboot_handler_pre @ 0x800aa20, 0x800aa38
        (x20, 2) = 3
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        (x22, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800a9f0
         // } else {
    loc_0x800a93c:
        x8 = [x1]     // 0xc8 // 200 // arg2
        w10 = 0x9c4d  // 'M\x9c'
        w10 = 0x7a3b  // '//z'
        w9 = [x8]     // 0xcf // 207
        if (w9 == w10)
        b.ne 0x800a9d8 // likely
        }
        return eax;
    loc_0x800a954:
        w9 = [x8 + 8] // 0xcf // 207
        w10 = 0x1d6b  // 'k\x1d'
        w10 = 0x2f8e  // '\x8e/'
        if (w9 == w10)
        b.ne 0x800a9d8 // likely
    loc_0x800a968:
        x22 = [x8 + 0x18] // 0xcf // 207
        if !x22 jmp 0x800a9f4 // likely
            
    loc_0x800a9f4:
        x0 = 0x800a000
        x0 = x0 + 0
        jmp 0x800aa34
         // do {
    loc_0x800aa34:
        // CODE XREFS from sym.reboot_handler_pre @ 0x800a9fc, 0x800aa08
        0x800aa34 ()  // 0x800aa34(0x0, 0x0, 0x0, 0x0)
        jmp 0x800a9d8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800a970
    loc_0x800a988:
        x8 = 0x800a000
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = [x8]    // 0xcf // 207
        x8 = 0x800a000
        x8 = x8 + 0
        [x0, 8] = (x8,2)
        if !x21 jmp 0x800aa0c // unlikely
            
    loc_0x800aa0c:
        x0 = 0x800a000
        x0 = x0 + 0   // int64_t arg1
        0x800aa14 ()  // 0x800aa14(0x800a000, 0x0, 0x0, 0x0)
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800aa1c ()  // 0x800aa1c(0x0, 0x0, 0x0, 0x0)
        jmp 0x800a9d8
    loc_0x0800a9a4: // orphan
             x0 = 0x120e              // '\x0e\x12'
             x2 = 0x800a000
             x0 = 0xaa1f              // '\x1f\xaa'
             x2 = x2 + 0
             x0 = 0x7ca6              // '\xa6|'
             x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
             x0 = 0xfe0d              // '\r\xfe' // int64_t arg1
             0x800a9c0 ()             // 0x800a9c0(0xfe0d7ca6aa1f120e, 0x0, 0x800a000, 0x0)
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w2 = 0x1
             blr x21                  // pstate(0x0, 0x0, 0x1, 0x0)
             if w0 jmp 0x800aa24      // unlikely

    loc_0x0800aa00: // orphan
         x0 = 0x800a000
         x0 = x0 + 0
         jmp 0x800aa34

    loc_0x0800aa24: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800aa28 ()             // 0x800aa28(0x0, 0x0, 0x0, 0x0)
         x0 = 0x800a000
         x0 = x0 + 0

}

/* ===== 0x0800aa3c ===== */
int sym.paradise_install_fd_tw_func (int esi, int edx) {
    loc_0x800aa3c:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x800aa54 ()  // 0x800aa54(0x0, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x800ab7c // unlikely
            
    loc_0x800ab7c:
        x0 = 0x800a000
        mrs x20,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = [x20 + 0x5d8] // 0xdb // 219
        x0 = x0 + 0   // int64_t arg1
        0x800ab8c ()  // 0x800ab8c(0x800a000, -1, 0x0, 0x0)
        x9 = [x19 + 0x10] // 0xda // 218
        if !x9 jmp 0x800ab54 // likely
            
    loc_0x800ab54:
        // CODE XREFS from sym.paradise_install_fd_tw_func @ 0x800ac90, 0x800acac
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800ab58 ()  // 0x800ab58(0x0, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800ab6c
         // } else {
    loc_0x800ab98:
        w10 = (byte) [x20 + 0x3e] // 0xdb // 219
        x8 = x9 << 8
        tbnz w10,5,0x800abb0 // likely
         // } else {
        }
        return eax;
        goto loc_0x800aa5c
    loc_0x800aa68:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = (byte) [x8 + 0x3e] // 0xcf // 207
        x9 = x10 << 8
        tbnz w11,5,0x800aa84 // likely
            
    loc_0x800aa84:
        x11 = x10 & x9,asr 8
         // do {
    loc_0x800aa88:
        x12 = xzr | 0x7fffffffff
        x11 = x11 + 4
        csel x12,xzr,x12, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x12
        cset x11,ls
        if !x11 jmp 0x800ab70 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800aaa4: // orphan
             x11 = x10 & x9,asr 8
             x12 = xzr | 0x7fffffffff
             bics xzr,x11,x12         // '\xff\xff\xff\xff\xff\xff\xff\xff'
             csel x9,x10,xzr, eq
             hint 0x14
             jmp 0x800acb0

    loc_0x0800aac0: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800acc0
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x800aad8     // unlikely

    loc_0x0800aacc: // orphan
         
         w11 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800aad8: // orphan
         x8 = x8 + 8
         ldar x8,[x8]
         x12 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ab00: // orphan
         bti j
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sttr w20,[x9]
         jmp 0x800acc4

    loc_0x0800ab14: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800acd4
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w9 & 0x80
         if w10 jmp 0x800ab2c     // unlikely

    loc_0x0800ab20: // orphan
         
         w10 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ab2c: // orphan
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 & 0xffffffffffff
         x11 = x10 - 1,lsl 12
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ab4c: // orphan
         bti j
         if w8 jmp 0x800ab70      // unlikely

    loc_0x0800ab70: // orphan
         x0 = 0x800a000
         x0 = x0 + 0
         jmp 0x800ac9c

    loc_0x0800aba4: // orphan
         x11 = [x20]              // 0xdb // 219
         x10 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w11,0x1a,0x800abb4   // likely

    loc_0x0800abb0: // orphan
         x10 = x9 & x8,asr 8

    loc_0x0800abb4: // orphan
         x11 = xzr | 0x7fffffffff
         x10 = x10 + 4
         csel x11,xzr,x11, hi
         csinv x10,x10,xzr, lo
         sbcs xzr,x10,x11
         cset x10,ls
         if !x10 jmp 0x800ac84    // unlikely

    loc_0x0800abd0: // orphan
         x10 = x9 & x8,asr 8
         x11 = xzr | 0x7fffffffff
         bics xzr,x10,x11         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x9,xzr, eq
         hint 0x14
         jmp 0x800acf0

    loc_0x0800abec: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800ad00
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w9 & 0x80
         if w10 jmp 0x800ac04     // unlikely

    loc_0x0800abf8: // orphan
         
         w10 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ac04: // orphan
         x10 = x20 + 8
         ldar x10,[x10]
         x12 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ac2c: // orphan
         bti j
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = ~0
         sttr w10,[x8]
         jmp 0x800ad04

    loc_0x0800ac44: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800ad14
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 & 0x80
         if w10 jmp 0x800ac5c     // unlikely

    loc_0x0800ac50: // orphan
         
         w10 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ac5c: // orphan
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 & 0xffffffffffff
         x11 = x10 - 1,lsl 12
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ac7c: // orphan
         bti j
         if !w9 jmp 0x800ab54     // likely

    loc_0x0800ac84: // orphan
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800ac8c ()             // 0x800ac8c(0x800a000, 0x0, 0x0, 0x0)
         jmp 0x800ab54

    loc_0x0800ac94: // orphan
         x0 = 0x800a000
         x0 = x0 + 0

    loc_0x0800ac9c: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800ab78
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800aca0 ()             // 0x800aca0(0x0, 0x0, 0x0, 0x0)
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800aca8 ()             // 0x800aca8(0x0, 0x0, 0x0, 0x0)
         jmp 0x800ab54

    loc_0x0800acb0: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800aab8
         bti j
         x10 = 0x800a000
         x10 = [x10]              // 0xd1 // 209
         tbnz w10,0x18,0x800ab00  // unlikely

    loc_0x0800acc0: // orphan
         jmp 0x800aac0

    loc_0x0800acc4: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800ab0c
         bti j
         x9 = 0x800a000
         x9 = [x9]                // 0xd0 // 208
         tbnz w9,0x18,0x800ab4c   // unlikely

    loc_0x0800acd4: // orphan
         jmp 0x800ab14

    loc_0x0800acf0: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800abe4
         bti j
         x9 = 0x800a000
         x9 = [x9]                // 0xd0 // 208
         tbnz w9,0x18,0x800ac2c   // unlikely

    loc_0x0800ad00: // orphan
         jmp 0x800abec

    loc_0x0800ad04: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800ac3c
         bti j
         x8 = 0x800a000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x18,0x800ac7c   // unlikely

    loc_0x0800ad14: // orphan
         jmp 0x800ac44

}

/* ===== 0x0800c474 ===== */
int sym.lockfree_va_to_pa (int esi, int edx) {
    loc_0x800c474:
        hint 0x19
        sp = sp - 0x30
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx x9,x1,0x1e, 9 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x9 = x0 + x9,lsl 3 // arg1
        [x29 = x8
        ldar x8,[x9]
        x9 = var_10h
        [var_10h] = x8
        ldar x8,[x9]
        x9 = var_8h
        [var_8h] = x8
        ldar x9,[x9]
        if !x9 jmp 0x800c570 // likely
            
    loc_0x800c570:
        w0 = ~0xd
        jmp 0x800c598
         // do {
    loc_0x800c598:
        // CODE XREF from sym.lockfree_va_to_pa @ 0x800c574
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800c5c0 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800c4bc
    loc_0x800c4c8:
        if (x8 == 1)
        b.ne 0x800c570 // likely
    loc_0x800c4d0:
        x9 = x9 & 0xffffc0000000
        x8 = x1 & 0x3fffffff // arg2
        bfxil x9,x1,0, 0x1e // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w10 = 0x4000
        jmp 0x800c588
         // do {
    loc_0x800c588:
        // CODE XREF from sym.lockfree_va_to_pa @ 0x800c4e0
        x8 = x10 - x8
        [x2] = x9     // arg3
         // } while (?);
        }
        return eax;
    loc_0x0800c4e4: // orphan
             x8 = 0x800c000
             x9 = x9 & 0x7ffffff000
             x10 = [x8]               // 0xcf // 207
             x9 = x9 - x10
             ubfx x10,x1,0x15, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
             x9 = x9 | 0xffffff8000000000
             x9 = x9 + x10,lsl 3
             ldar x9,[x9]
             if !x9 jmp 0x800c570     // unlikely

    loc_0x0800c508: // orphan
         x10 = x9 & 0xfffffffffffffff
         x11 = x10 & 0xfc00000000000001
         x10 = x9 & 3
         if (x11 == 0)
         ccmp x10,3,4, ne
         b.ne 0x800c578           // unlikely

    loc_0x0800c520: // orphan
         if (x10 == 3)
         b.ne 0x800c570           // likely

    loc_0x0800c528: // orphan
         x8 = [x8]                // 0xcf // 207
         x9 = x9 & 0x7ffffff000
         x8 = x9 - x8
         ubfx x9,x1,0xc, 9        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         x8 = x8 | 0xffffff8000000000
         x8 = x8 + x9,lsl 3
         x9 = 0x1
         x9 = 0x400
         ldar x8,[x8]
         if ((x8 & x9) == 0)
         b.eq 0x800c570           // unlikely

    loc_0x0800c554: // orphan
         x9 = x1 & 0xfff          // arg2
         x10 = x8 & 0xfffffffff000
         w8 = 0x1000
         bfxil x10,x1,0, 0xc      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         x8 = x8 - x9
         [x2] = x10               // arg3
         jmp 0x800c590

    loc_0x0800c578: // orphan
         x9 = x9 & 0xffffffe00000
         x8 = x1 & 0x1fffff       // arg2
         bfxil x9,x1,0, 0x15      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         w10 = 0x20

    loc_0x0800c590: // orphan
         // CODE XREF from sym.lockfree_va_to_pa @ 0x800c56c
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x3] = x8                // arg4

    loc_0x0800c5ac: // orphan
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_30h
         hint 0x1d
         

    loc_0x0800c5c0: // orphan
         0x800c5c0 ()             // 0x800c5c0(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x0800c74c ===== */
int sym.kmap_atomic (int esi, int edx) {
    loc_0x800c74c:
        hint 0x19
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = x8 + 0x10
        ldar w9,[x9]
        w9 = w9 + 1
        [x8 + 0x10] = w9
        w9 = [x8 + 0xad0] // 0xcf // 207
        w9 = w9 + 1
        [x8 + 0xad0] = w9
        x8 = 0xff00
        jmp 0x800c788
         // do {
    loc_0x800c788:
        // CODE XREF from sym.kmap_atomic @ 0x800c774
        bti j
        x9 = x0 << 6  // arg1
        hint 0x1d
        x9 = x9 & 0xfffffffffff000
        x0 = x8 | x9
        0x0800c79c
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800c7a4 ===== */
int sym.__kunmap_atomic (int esi, int edx) {
    loc_0x800c7a4:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = [x9 + 0xad0] // 0xd0 // 208
        w10 = w8 - 1
        x8 = x9 + 0x10
        [x9 + 0xad0] = w10
        ldar x10,[x8]
        x10 = x10 - 1
        [x9 + 0x10] = w10
        b.eq 0x800c7f0 // unlikely
            
    loc_0x800c7f0:
        0x800c7f0 ()  // 0x800c7f0(0x0, 0x0, 0x0, 0x0)
        jmp 0x800c7e0
         // do {
    loc_0x800c7e0:
        // CODE XREF from sym.__kunmap_atomic @ 0x800c7f4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800c7ec
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800cc60 ===== */
int sym.swap_write_page_direct (int esi, int edx) {
    loc_0x800cc60:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x50]! = (x29,2)
        [sp, 0x10] = (x26,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x24,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        w24 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = x3 + x2  // arg4
        if (x8 == 1)
        b.hi 0x800ce9c // unlikely
            
    loc_0x800ce9c:
        // CODE XREF from sym.swap_write_page_direct @ 0x800ced8
        w0 = w24      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800cebc
         // } else {
    loc_0x800cc90:
        x8 = 0x800c000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800ce9c // unlikely
        }
        return eax;
    loc_0x800cc9c:
        x9 = x0 >> 0x3a // arg1
        if (w9 == 0x1d)
        b.hi 0x800ce98 // unlikely
            
    loc_0x800ce98:
        w24 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
    loc_0x0800cca8: // orphan
             x26 = [x8 + x9,lsl 3]    // 0xd0000000cf // 893353197775
             if !x26 jmp 0x800ce98    // likely

    loc_0x0800ccb0: // orphan
         x8 = [x26 + 0xa0]        // 0xe1 // 225
         if !x8 jmp 0x800ce98     // unlikely

    loc_0x0800ccb8: // orphan
         x21 = x3                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         x22 = x2                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         x20 = x1                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfiz x25,x0,3, 0x3a     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w0 = 0xc00
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg4
         0x800ccdc ()             // 0x800ccdc(0xc00, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if x22 jmp 0x800cdfc     // unlikely

    loc_0x0800cce8: // orphan
         if (x21 == 1)
         b.ne 0x800cdfc           // likely

    loc_0x0800ccf0: // orphan
         if !x19 jmp 0x800ce98    // likely

    loc_0x0800ccf4: // orphan
         mrs x21,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x22 = x21 + 0x10
         ldar w8,[x22]
         w8 = w8 + 1
         [x21 + 0x10] = w8
         w8 = [x21 + 0xad0]       // 0xdc // 220
         w8 = w8 + 1
         [x21 + 0xad0] = w8
         x8 = 0xff00
         jmp 0x800cd2c

    loc_0x0800cd2c: // orphan
         // CODE XREF from sym.swap_write_page_direct @ 0x800cd18
         bti j
         x9 = x19 << 6
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x9 = x9 & 0xfffffffffff000
         w2 = 0x1000
         x0 = x8 | x9             // int64_t arg1
         0x800cd44 ()             // 0x800cd44(0x0, 0x0, 0x1000, 0x0)
         w8 = [x21 + 0xad0]       // 0xdc // 220
         w8 = w8 - 1
         [x21 + 0xad0] = w8
         ldar x8,[x22]
         x8 = x8 - 1
         [x21 + 0x10] = w8
         b.eq 0x800cefc           // unlikely

    loc_0x0800cd64: // orphan
         x8 = x21 + 0x10
         ldar x8,[x8]
         if !x8 jmp 0x800cefc     // unlikely

    loc_0x0800cd70: // orphan
         // CODE XREFS from sym.swap_write_page_direct @ 0x800cef8, 0x800cf00
         x2 = 0x800c000
         w0 = 0xc00
         x2 = x2 + 0              // int64_t arg3 // "("
         w1 = 0x1
         0x800cd80 ()             // 0x800cd80(0xc00, 0x1, 0x800c000, 0x0)
         if !x0 jmp 0x800ce90     // unlikely

    loc_0x0800cd88: // orphan
         w9 = (word) [x0 + 0x14]  // 0xc7 // 199
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w9 & 0xffffefff
         [x0 + 0x14] = (half) w8
         x8 = [x0 + 8]            // 0xc7 // 199
         x10 = [x26 + 0xa0]       // 0xe1 // 225
         if (x8 == x10)
         b.eq 0x800cdb8           // unlikely

    loc_0x0800cda8: // orphan
         w8 = 0xef7f              // '\x7f\xef'
         w8 = w9 & w8
         [x23 + 0x14] = (half) w8
         x8 = [x26 + 0xa0]        // 0xe1 // 225

    loc_0x0800cdb8: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x23 + 8] = x8
         0x800cdc0 ()             // "(" // 0x800cdc0(0x0, 0x0, 0x0, 0x0)
         w8 = 0x801
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x1000
         w3 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x23 + 0x20] = x25
         [x23 + 0x10] = w8
         0x800cde0 ()             // 0x800cde0(0x0, 0x0, 0x1000, 0x0)
         if !w0 jmp 0x800cec0     // likely

    loc_0x0800cde8: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800cdec ()             // 0x800cdec(0x0, 0x0, 0x0, 0x0)
         if (w0 == 0)
         cset w24,eq
         jmp 0x800cec4

    loc_0x0800cdfc: // orphan
         if !x19 jmp 0x800ce98    // likely

    loc_0x0800ce00: // orphan
         x2 = 0x800c000
         w0 = 0xc00
         x2 = x2 + 0              // int64_t arg3 // "("
         w1 = 0x1
         0x800ce10 ()             // 0x800ce10(0xc00, 0x1, 0x800c000, 0x0)
         if !x0 jmp 0x800ce90     // unlikely

    loc_0x0800ce18: // orphan
         w9 = (word) [x0 + 0x14]  // 0xc7 // 199
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w9 & 0xffffefff
         [x0 + 0x14] = (half) w8
         x8 = [x0 + 8]            // 0xc7 // 199
         x10 = [x26 + 0xa0]       // 0xe1 // 225
         if (x8 == x10)
         b.eq 0x800ce48           // unlikely

    loc_0x0800ce38: // orphan
         w8 = 0xef7f              // '\x7f\xef'
         w8 = w9 & w8
         [x23 + 0x14] = (half) w8
         x8 = [x26 + 0xa0]        // 0xe1 // 225

    loc_0x0800ce48: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x23 + 8] = x8
         0x800ce50 ()             // 0x800ce50(0x0, 0x0, 0x0, 0x0)
         w8 = 0x800
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x1000
         w3 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x23 + 0x20] = x25
         [x23 + 0x10] = w8
         0x800ce70 ()             // 0x800ce70(0x0, 0x0, 0x1000, 0x0)
         if !w0 jmp 0x800cec0     // likely

    loc_0x0800ce78: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800ce7c ()             // 0x800ce7c(0x0, 0x0, 0x0, 0x0)
         w24 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800ce88 ()             // 0x800ce88(0x0, 0x0, 0x0, 0x0)
         if !w24 jmp 0x800cedc    // likely

    loc_0x0800ce90: // orphan
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800cecc

    loc_0x0800cec0: // orphan
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800cec4: // orphan
         // CODE XREF from sym.swap_write_page_direct @ 0x800cdf8
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800cec8 ()             // 0x800cec8(0x0, 0x0, 0x0, 0x0)

    loc_0x0800cecc: // orphan
         // CODE XREF from sym.swap_write_page_direct @ 0x800ce94
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800ced4 ()             // 0x800ced4(0x0, 0x0, 0x0, 0x0)
         jmp 0x800ce9c

    loc_0x0800cedc: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800cee0 ()             // 0x800cee0(0x0, 0x0, 0x0, 0x0)
         x0 = x0 + x22            // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800cef0 ()             // 0x800cef0(0x0, 0x0, 0x0, 0x0)
         0x800cef4 ()             // 0x800cef4(0x0, 0x0, 0x0, 0x0)
         jmp 0x800cd70

    loc_0x0800cefc: // orphan
         0x800cefc ()             // 0x800cefc(0x0, 0x0, 0x0, 0x0)
         jmp 0x800cd70

}

/* ===== 0x0800d58c ===== */
int sym.resolve_hide_symbols (int esi, int edx) {
    loc_0x800d58c:
        hint 0x19
        sp = sp - 0xd0
        [x18] + 8 = x30
        [sp, 0x90] = (x29,2)
        x29 = var_90h
        [var_a0h] = x23
        [sp, 0xb0] = (x22,2)
        [sp, 0xc0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x800d000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        x8 = [x19]    // 0xda // 218
        if x8 jmp 0x800d61c // likely
            
    loc_0x800d61c:
        x20 = 0x800d000
        x8 = [x20]    // 0xdb // 219
        if x8 jmp 0x800d680 // likely
            
    loc_0x800d680:
        x21 = 0x800d000
        x0 = [x21]    // 0xdc // 220
        if x0 jmp 0x800d6e4 // likely
            
    loc_0x800d6e4:
        x22 = 0x800d000
        x8 = [x22]    // 0xdd // 221
        if x8 jmp 0x800d750 // likely
            
    loc_0x800d750:
        x9 = [x19]    // 0xda // 218
        if !x9 jmp 0x800d7a0 // likely
            
    loc_0x800d7a0:
        x0 = 0x800d000
        x0 = x0 + 0   // int64_t arg_d0h
        0x800d7a8 ()  // " " // 0x800d7a8(0x800d000, 0x0, 0x0, 0x0)
        w0 = ~0x1
        jmp 0x800d76c
         // do {
    loc_0x800d76c:
        // CODE XREF from sym.resolve_hide_symbols @ 0x800d7b0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800d8a4 // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800d5c4
    loc_0x800d5d0:
        // CODE XREF from sym.resolve_hide_symbols @ 0x800d864
        x0 = 0x800d000
        x0 = x0 + 0
        blr x8        // pstate(0x800d000, 0x0, 0x0, 0x0)
        jmp 0x800d618
         // do {
    loc_0x800d618:
        // CODE XREF from sym.resolve_hide_symbols @ 0x800d5dc
        [x19] = x0
         // } while (?);
        }
        return eax;
    loc_0x0800d5e0: // orphan
             x8 = 0x800d000
             x0 = var_sp_8h           // int64_t arg_d0h
             x8 = x8 + 0
             [sp, 0x78] = (xzr,2)
             [sp, 0x68] = (xzr,2)
             [sp, 0x58] = (xzr,2)
             [sp, 0x48] = (xzr,2)
             [sp, 0x28] = (xzr,2)
             [sp, 0x18] = (xzr,2)
             [sp, 8] = (xzr,2)
             [sp, 0x38] = (x8,2)
             0x800d60c ()             // 0x800d60c(0x178008, 0x0, 0x0, 0x0)
             tbz w0,0x1f,0x800d7b4    // likely

    loc_0x0800d614: // orphan
         // CODE XREF from sym.resolve_hide_symbols @ 0x800d7d8
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800d634: // orphan
         // CODE XREF from sym.resolve_hide_symbols @ 0x800d878
         x0 = 0x800d000
         x0 = x0 + 0
         blr x8                   // pstate(0x800d000, 0x0, 0x0, 0x0)
         jmp 0x800d67c

    loc_0x0800d644: // orphan
         x8 = 0x800d000
         x0 = var_sp_8h           // int64_t arg_d0h
         x8 = x8 + 0
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 8] = (xzr,2)
         [sp, 0x38] = (x8,2)
         0x800d670 ()             // 0x800d670(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x800d7dc    // likely

    loc_0x0800d678: // orphan
         // CODE XREF from sym.resolve_hide_symbols @ 0x800d800
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800d67c: // orphan
         // CODE XREF from sym.resolve_hide_symbols @ 0x800d640
         [x20] = x0

    loc_0x0800d698: // orphan
         // CODE XREF from sym.resolve_hide_symbols @ 0x800d88c
         x0 = 0x800d000
         x0 = x0 + 0
         blr x8                   // pstate(0x800d000, 0x0, 0x0, 0x0)
         jmp 0x800d6e0

    loc_0x0800d6a8: // orphan
         x8 = 0x800d000
         x0 = var_sp_8h           // int64_t arg_d0h
         x8 = x8 + 0
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 8] = (xzr,2)
         [sp, 0x38] = (x8,2)
         0x800d6d4 ()             // 0x800d6d4(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x800d804    // likely

    loc_0x0800d6dc: // orphan
         // CODE XREF from sym.resolve_hide_symbols @ 0x800d828
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800d6e0: // orphan
         // CODE XREF from sym.resolve_hide_symbols @ 0x800d6a4
         [x21] = x0

    loc_0x0800d6fc: // orphan
         // CODE XREF from sym.resolve_hide_symbols @ 0x800d8a0
         x0 = 0x800d000
         x0 = x0 + 0
         blr x8                   // pstate(0x800d000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800d748

    loc_0x0800d710: // orphan
         x8 = 0x800d000
         x0 = var_sp_8h           // int64_t arg_d0h
         x8 = x8 + 0
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 8] = (xzr,2)
         [sp, 0x38] = (x8,2)
         0x800d73c ()             // 0x800d73c(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x800d82c    // likely

    loc_0x0800d744: // orphan
         // CODE XREF from sym.resolve_hide_symbols @ 0x800d850
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800d748: // orphan
         // CODE XREF from sym.resolve_hide_symbols @ 0x800d70c
         x0 = [x21]               // 0xdc // 220
         [x22] = x8

    loc_0x0800d760: // orphan
         if !x0 jmp 0x800d7a0     // likely

    loc_0x0800d764: // orphan
         if !x8 jmp 0x800d7a0     // likely

    loc_0x0800d768: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800d780: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         x23 = [var_a0h]          // 0x4 // 4
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_d0h
         hint 0x1d
         

    loc_0x0800d7b4: // orphan
         x8 = [var_30h_2]         // 0x4 // 4
         x0 = var_sp_8h           // int64_t arg_d0h
         [x20] = x8
         0x800d7c0 ()             // 0x800d7c0(0x178008, 0x0, 0x0, 0x0)
         x1 = [x20]               // 0xdb // 219
         if x1 jmp 0x800d854      // unlikely

    loc_0x0800d7cc: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg_d0h
         0x800d7d4 ()             // 0x800d7d4(0x800d000, 0x0, 0x0, 0x0)
         jmp 0x800d614

    loc_0x0800d7dc: // orphan
         x8 = [var_30h_2]         // 0x4 // 4
         x0 = var_sp_8h           // int64_t arg_d0h
         [x21] = x8
         0x800d7e8 ()             // 0x800d7e8(0x178008, 0x0, 0x0, 0x0)
         x1 = [x21]               // 0xdc // 220
         if x1 jmp 0x800d868      // unlikely

    loc_0x0800d7f4: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg_d0h
         0x800d7fc ()             // 0x800d7fc(0x800d000, 0x0, 0x0, 0x0)
         jmp 0x800d678

    loc_0x0800d804: // orphan
         x8 = [var_30h_2]         // 0x4 // 4
         x0 = var_sp_8h           // int64_t arg_d0h
         [x22] = x8
         0x800d810 ()             // 0x800d810(0x178008, 0x0, 0x0, 0x0)
         x1 = [x22]               // 0xdd // 221
         if x1 jmp 0x800d87c      // unlikely

    loc_0x0800d81c: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg_d0h
         0x800d824 ()             // 0x800d824(0x800d000, 0x0, 0x0, 0x0)
         jmp 0x800d6dc

    loc_0x0800d82c: // orphan
         x8 = [var_30h_2]         // 0x4 // 4
         x0 = var_sp_8h           // int64_t arg_d0h
         [x23] = x8
         0x800d838 ()             // 0x800d838(0x178008, 0x0, 0x0, 0x0)
         x1 = [x23]               // 0xde // 222
         if x1 jmp 0x800d890      // unlikely

    loc_0x0800d844: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg_d0h
         0x800d84c ()             // 0x800d84c(0x800d000, 0x0, 0x0, 0x0)
         jmp 0x800d744

    loc_0x0800d854: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg_d0h
         0x800d85c ()             // 0x800d85c(0x800d000, 0x0, 0x0, 0x0)
         x8 = [x20]               // 0xdb // 219
         jmp 0x800d5d0

    loc_0x0800d868: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg_d0h
         0x800d870 ()             // 0x800d870(0x800d000, 0x0, 0x0, 0x0)
         x8 = [x21]               // 0xdc // 220
         jmp 0x800d634

    loc_0x0800d87c: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg_d0h
         0x800d884 ()             // 0x800d884(0x800d000, 0x0, 0x0, 0x0)
         x8 = [x22]               // 0xdd // 221
         jmp 0x800d698

    loc_0x0800d890: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg_d0h
         0x800d898 ()             // 0x800d898(0x800d000, 0x0, 0x0, 0x0)
         x8 = [x23]               // 0xde // 222
         jmp 0x800d6fc

    loc_0x0800d8a4: // orphan
         0x800d8a4 ()             // sym.hide_umount_path // 0x800d8a4(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800d9a8 ===== */
int sym.find_hidden_path_locked (int esi, int edx) {
    loc_0x800d9a8:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [sp + 0x10] = x21
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        x21 = 0x800d000
        x21 = x21 + 0
        x19 = [x21]   // 0xdc // 220
        if (x19 == x21)
        b.eq 0x800d9f4 // unlikely
            
    loc_0x800d9f4:
        x19 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800d9f8:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = [var_10h] // 0x4 // 4
        (x20, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800da10
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800d9d8: // orphan
             x0 = x19 + 0x10          // int64_t arg1
             x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800d9e0 ()             // 0x800d9e0(0x10, 0x0, 0x0, 0x0)
             if !w0 jmp 0x800d9f8     // unlikely

    loc_0x0800d9e8: // orphan
         x19 = [x19]              // 0xda // 218
         if (x19 == x21)
         b.ne 0x800d9d8           // unlikely

}

/* ===== 0x0800d8a8 ===== */
int sym.hide_umount_path (int esi, int edx) {
    loc_0x800d8a8:
        hint 0x19
        sp = sp - 0x40
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        [sp, 0x30] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x800d000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0xfc4e   // 'N\xfc'
        x2 = 0x800d000
        x0 = 0xb839   // '9\xb8'
        x2 = x2 + 0
        [x29 = x8
        x0 = 0xb54e   // 'N\xb5'
        x20 = [x9]    // 0xd0 // 208
        x0 = 0xe1d0   // '\xd0\xe1' // int64_t arg1
        [sp, 8] = (xzr,2)
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800d8f8 ()  // 0x800d8f8(0xe1d0b54eb839fc4e, 0x910443fda9117bfd, 0x800d000, 0x0)
        x2 = var_sp_8h
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = 0x1
        blr x20       // 0x910443fda9117bfd(0x0, 0x910443fd00000001, 0x177fc8, 0x0)
        if w0 jmp 0x800d978 // unlikely
            
    loc_0x800d978:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800d9a4 // likely
            
    loc_0x800d9a4:
        0x800d9a4 ()  // sym.find_hidden_path_locked // 0x800d9a4(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x800d9a8:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [sp + 0x10] = x21
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        x21 = 0x800d000
        x21 = x21 + 0
        x19 = [x21]   // 0xdc // 220
        if (x19 == x21)
        b.eq 0x800d9f4 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800d910
    loc_0x800d948:
        x8 = 0x800d000
        x0 = 0x2fea   // '\xea/'
        x0 = 0x52a8   // '\xa8R'
        x2 = 0x800d000
        x0 = 0xfc99   // '\x99\xfc'
        x2 = x2 + 0
        x19 = [x8]    // 0xcf // 207
        x0 = 0xae50   // 'P\xae' // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800d96c ()  // 0x800d96c(0xae50fc9952a82fea, 0x910443fda9117bfd, 0x800d000, 0x0)
        x0 = var_sp_8h
        blr x19       // 0x910443fda9117bfd(0x178008, 0x910443fda9117bfd, 0x800d000, 0x0)
}

/* ===== 0x08011b68 ===== */
int sym.hook_entry_remove (int esi, int edx) {
    loc_0x8011b68:
        hint 0x19
        sp = sp - 0xe0
        [x18] + 8 = x30
        [sp, 0xb0] = (x29,2)
        x29 = var_b0h
        [sp, 0xc0] = (x22,2)
        [sp, 0xd0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        w8 = (byte) [x0 + 0x30] // 0xc7 // 199 // arg1
        if !w8 jmp 0x8011cfc // unlikely
            
    loc_0x8011cfc:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8011d68 // likely
            
    loc_0x8011d68:
        0x8011d68 ()  // 0x8011d68(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x8011d6c:
        // CODE XREF from sym.hook_entry_remove @ 0x8011ce0
        bti j
        prfm pstl1strm,[x8]
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8011b98
    loc_0x8011bac:
        x9 = x21 + 4
        x10 = x21 + 8
        x11 = x21 + 0xc
        [x29, -0x28] = (x21,2)
        [x29, -0x18] = (x10,2)
        if !x8 jmp 0x8011c00 // likely
            
    loc_0x8011c00:
        x21 = 0x8011000
        x8 = [x21]    // 0xdc // 220
        if !x8 jmp 0x8011c88 // unlikely
            
    loc_0x8011c88:
        x8 = 0x8011000
        x0 = var_sp_8h // int64_t arg1
        x8 = x8 + 0
        [sp, 0x78] = (xzr,2)
        [sp, 0x68] = (xzr,2)
        [sp, 0x58] = (xzr,2)
        [sp, 0x48] = (xzr,2)
        [sp, 0x28] = (xzr,2)
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        [sp, 0x38] = (x8,2)
        0x8011cb4 ()  // 0x8011cb4(0x178008, 0x0, 0x0, 0x0)
        tbz w0,0x1f,0x8011d2c // likely
            
    loc_0x8011d2c:
        x8 = [var_30h] // 0x4 // 4
        x0 = var_sp_8h // int64_t arg1
        [x21] = x8
        0x8011d38 ()  // 0x8011d38(0x178008, 0x0, 0x0, 0x0)
        x1 = [x21]    // 0xdc // 220
        if x1 jmp 0x8011d54 // unlikely
            
    loc_0x8011d54:
        x0 = 0x8011000
        x0 = x0 + 0   // int64_t arg1
        0x8011d5c ()  // 0x8011d5c(0x8011000, 0x0, 0x0, 0x0)
        x8 = [x21]    // 0xdc // 220
        jmp 0x8011c0c
    loc_0x08011bc4: // orphan
             x1 = x19 + 0x20
             x0 = x29 - 0x28
             w2 = 0x4
             blr x8                   // "//" // pstate(0x177fd8, 0x20, 0x4, 0x0)
             jmp 0x8011cc0

    loc_0x08011bd8: // orphan
         x22 = 0x8011000
         x8 = [x22]               // 0xdd // 221
         if !x8 jmp 0x8011c28     // unlikely

    loc_0x08011be4: // orphan
         // CODE XREF from sym.hook_entry_remove @ 0x8011c84
         x0 = 0x8011000
         x0 = x0 + 0
         blr x8                   // pstate(0x8011000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20] = x0
         if x0 jmp 0x8011bac      // likely

    loc_0x08011bfc: // orphan
         jmp 0x8011cc0

    loc_0x08011c0c: // orphan
         // CODE XREF from sym.hook_entry_remove @ 0x8011d64
         x0 = 0x8011000
         x0 = x0 + 0
         blr x8                   // pstate(0x8011000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20] = x0
         if x0 jmp 0x8011bc4      // likely

    loc_0x08011c24: // orphan
         jmp 0x8011cc0

    loc_0x08011c28: // orphan
         x8 = 0x8011000
         x0 = var_sp_8h           // int64_t arg1
         x8 = x8 + 0
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 8] = (xzr,2)
         [sp, 0x38] = (x8,2)
         0x8011c54 ()             // 0x8011c54(0x178008, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x8011cbc   // unlikely

    loc_0x08011c5c: // orphan
         x8 = [var_30h]           // 0x4 // 4
         x0 = var_sp_8h           // int64_t arg1
         [x22] = x8
         0x8011c68 ()             // 0x8011c68(0x178008, 0x0, 0x0, 0x0)
         x1 = [x22]               // 0xdd // 221
         if !x1 jmp 0x8011d44     // likely

    loc_0x08011c74: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x8011c7c ()             // 0x8011c7c(0x8011000, 0x0, 0x0, 0x0)
         x8 = [x22]               // 0xdd // 221
         jmp 0x8011be4

    loc_0x08011cbc: // orphan
         // CODE XREF from sym.hook_entry_remove @ 0x8011d50
         [x20] = xzr

    loc_0x08011cc0: // orphan
         // CODE XREFS from sym.hook_entry_remove @ 0x8011bd4, 0x8011bfc, 0x8011c24
         w9 = [x19 + 0x34]        // 0xda // 218
         x10 = 0x8011000
         x10 = x10 + 0
         w11 = 0x1
         x8 = x9 >> 3
         x9 = x11 << x9
         x8 = x8 & 0x1ffffff8
         x8 = x10 + x8
         jmp 0x8011d6c

    loc_0x08011cec: // orphan
         // CODE XREF from sym.hook_entry_remove @ 0x8011d84
         w8 = ~0
         [x19 + 0x18] = xzr
         [x19 + 0x30] = (byte) wzr
         [x19 + 0x34] = w8

    loc_0x08011d44: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x8011d4c ()             // 0x8011d4c(0x8011000, 0x0, 0x0, 0x0)
         jmp 0x8011cbc

    loc_0x08011d74: // orphan
         ldxr x10,[x8]
         bic x10,x10,x9           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w11,x10,[x8]
         if w11 jmp 0x8011d74     // unlikely

    loc_0x08011d84: // orphan
         jmp 0x8011cec

}

/* ===== 0x080116cc ===== */
int sym.hook_entry_install (int esi, int edx) {
    loc_0x80116cc:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        sp = sp - 0x5b0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        w8 = (byte) [x0 + 0x30] // 0xc7 // 199 // arg1
        if !w8 jmp 0x8011710 // likely
            
    loc_0x8011710:
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = [x0 + 8] // 0xc7 // 199 // arg1
        if !x0 jmp 0x80117ac // likely
            
    loc_0x80117ac:
        x20 = [x19]   // 0xda // 218
        if !x20 jmp 0x80117d8 // likely
            
    loc_0x80117d8:
        w0 = ~0x15
         // do {
    loc_0x80117dc:
        // XREFS: CODE 0x0801170c  CODE 0x080117a8  CODE 0x080117d4
        // XREFS: CODE 0x0801186c  CODE 0x08011990  CODE 0x08011b28
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8011b2c // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08011724: // orphan
             x20 = x19                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             ldar w8,[x0]
             x9 = x0 + 4
             x1 = var_1e8h            // int64_t arg_5b0h
             [x20 + 0x20]! = w8
             ldar w8,[x9]
             [x20 + 4] = w8
             x9 = x0 + 8
             ldar w8,[x9]
             [x20 + 8] = w8
             x9 = x0 + 0xc
             ldar w8,[x9]
             [var_0h_8] = xzr
             w0 = [x20]               // 0xdb // 219
             [var_0h_10] = xzr
             [var_0h_11] = xzr
             [var_210h] = xzr
             [var_0h_9] = xzr
             [sp, 0x1f8] = (xzr,2)
             [x20 + 0xc] = w8
             [sp, 0x1e8] = (xzr,2)
             0x8011778 ()             // 0x8011778(0x0, 0x1781e8, 0x0, 0x0)
             w8 = [var_1f4h]          // 4
             if (w8 == 0x2c)
             b.hi 0x8011870           // unlikely

    loc_0x08011788: // orphan
         w9 = 0x1
         x8 = x9 << x8
         x9 = 0xe300
         x9 = 0xf
         x9 = 0x1800
         if ((x8 & x9) == 0)
         b.eq 0x8011870           // unlikely

    loc_0x080117a4: // orphan
         w0 = ~0x5e               // '^'
         jmp 0x80117dc

    loc_0x080117c0: // orphan
         // CODE XREF from sym.hook_entry_install @ 0x80119cc
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // pstate(0x0, 0x0, 0x0, 0x0)
         [x19 + 8] = x0
         if x0 jmp 0x801171c      // unlikely

    loc_0x080117d0: // orphan
         w0 = ~0x1
         jmp 0x80117dc

    loc_0x080117f0: // orphan
         sp = arg_5b0h
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

    loc_0x08011818: // orphan
         x8 = 0x8011000
         x0 = var_1e8h            // int64_t arg1
         x8 = x8 + 0
         [var_0h] = xzr
         [var_0h_2] = xzr
         [var_0h_3] = xzr
         [var_0h_4] = xzr
         [var_0h_5] = xzr
         [var_0h_6] = xzr
         [var_0h_7] = xzr
         [var_0h_8] = xzr
         [var_210h] = xzr
         [var_0h_9] = xzr
         [sp, 0x1f8] = (xzr,2)
         [sp, 0x1e8] = (xzr,2)
         [var_0h_10] = xzr
         [var_0h_11] = x8
         0x801185c ()             // 0x801185c(0x1781e8, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x8011994    // likely

    loc_0x08011864: // orphan
         // CODE XREF from sym.hook_entry_install @ 0x80119b8
         w0 = ~0x1
         [x19 + 8] = xzr
         jmp 0x80117dc

    loc_0x08011870: // orphan
         w0 = [x19 + 0x24]        // 0xda // 218
         x1 = var_1e8h            // int64_t arg_5b0h
         [var_0h_8] = xzr
         [var_0h_10] = xzr
         [var_0h_11] = xzr
         [var_210h] = xzr
         [var_0h_9] = xzr
         [sp, 0x1f8] = (xzr,2)
         [sp, 0x1e8] = (xzr,2)
         0x8011894 ()             // 0x8011894(0x0, 0x1781e8, 0x0, 0x0)
         w8 = [var_1f4h]          // 4
         if (w8 == 0x2c)
         b.hi 0x80118c0           // unlikely

    loc_0x080118a4: // orphan
         w9 = 0x1
         x8 = x9 << x8
         x9 = 0xe300
         x9 = 0xf
         x9 = 0x1800
         if ((x8 & x9) == 0)
         b.ne 0x80117a4           // likely

    loc_0x080118c0: // orphan
         w0 = [x19 + 0x28]        // 0xda // 218
         x1 = var_1e8h            // int64_t arg_5b0h
         [var_0h_8] = xzr
         [var_0h_10] = xzr
         [var_0h_11] = xzr
         [var_210h] = xzr
         [var_0h_9] = xzr
         [sp, 0x1f8] = (xzr,2)
         [sp, 0x1e8] = (xzr,2)
         0x80118e4 ()             // 0x80118e4(0x0, 0x1781e8, 0x0, 0x0)
         w8 = [var_1f4h]          // 4
         if (w8 == 0x2c)
         b.hi 0x8011910           // unlikely

    loc_0x080118f4: // orphan
         w9 = 0x1
         x8 = x9 << x8
         x9 = 0xe300
         x9 = 0xf
         x9 = 0x1800
         if ((x8 & x9) == 0)
         b.ne 0x80117a4           // likely

    loc_0x08011910: // orphan
         w0 = [x19 + 0x2c]        // 0xda // 218
         x1 = var_1e8h            // int64_t arg_5b0h
         [var_0h_8] = xzr
         [var_0h_10] = xzr
         [var_0h_11] = xzr
         [var_210h] = xzr
         [var_0h_9] = xzr
         [sp, 0x1f8] = (xzr,2)
         [sp, 0x1e8] = (xzr,2)
         0x8011934 ()             // 0x8011934(0x0, 0x1781e8, 0x0, 0x0)
         w8 = [var_1f4h]          // 4
         if (w8 == 0x2c)
         b.hi 0x8011960           // unlikely

    loc_0x08011944: // orphan
         w9 = 0x1
         x8 = x9 << x8
         x9 = 0xe300
         x9 = 0xf
         x9 = 0x1800
         if ((x8 & x9) == 0)
         b.ne 0x80117a4           // likely

    loc_0x08011960: // orphan
         x8 = 0x8011000
         x8 = [x8]                // 0xcf // 207
         x8 = x8 | 0xffffffff00000000
         x9 = ~x8
         if (x8 != 1)
         rbit x9,x9
         w8 = 0x20
         clz x9,x9
         csel x21,x8,x9, eq
         if (w21 == 0x1f)
         b.ls 0x80119d0           // likely

    loc_0x0801198c: // orphan
         w0 = ~0x1b
         jmp 0x80117dc

    loc_0x08011994: // orphan
         x8 = [var_210h]          // 0x4 // 4
         x0 = var_1e8h            // int64_t arg1
         [x21] = x8
         0x80119a0 ()             // 0x80119a0(0x1781e8, 0x0, 0x0, 0x0)
         x1 = [x21]               // 0xdc // 220
         if x1 jmp 0x80119bc      // unlikely

    loc_0x080119ac: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x80119b4 ()             // 0x80119b4(0x8011000, 0x0, 0x0, 0x0)
         jmp 0x8011864

    loc_0x080119bc: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x80119c4 ()             // 0x80119c4(0x8011000, 0x0, 0x0, 0x0)
         x8 = [x21]               // 0xdc // 220
         jmp 0x80117c0

    loc_0x080119d0: // orphan
         x8 = x21 >> 3
         x9 = 0x8011000
         x9 = x9 + 0
         x8 = x8 & 8
         w10 = 0x1
         x24 = var_sp_8h
         x8 = x9 + x8
         x9 = x10 << x21
         jmp 0x8011b3c

    loc_0x080119fc: // orphan
         // CODE XREF from sym.hook_entry_install @ 0x8011b54
         x8 = 0x78                // 'x'
         x9 = 0x8011000
         x9 = x9 + 0
         x1 = 0x8011000
         x8 = x21 * x8
         x1 = x1 + 0              // int64_t arg_5b0h
         (x10, 2) = 3
         x8 = x8 >> 0x20
         x0 = var_sp_8h           // int64_t arg1
         w2 = 0x1d0
         [x19 + 0x34] = w21
         x8 = x9 + x8,lsl 2
         x27 = x10 + 0x10
         x23 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x18] = x8
         0x8011a38 ()             // 0x8011a38(0x178008, 0x8011000, 0x1d0, 0x0)
         x25 = 0x8011000
         [sp, 0x1d8] = (x27,2)
         (x8, 2) = 3
         x22 = [x25]              // 0xe0 // 224
         [x24 = x8
         [x24 = x9
         if x22 jmp 0x8011a70     // likely

    loc_0x08011a58: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x8011a60 ()             // 0x8011a60(0x8011000, 0x0, 0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x25] = x0
         if !x0 jmp 0x8011b0c     // unlikely

    loc_0x08011a70: // orphan
         x0 = var_1e8h            // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x3c0
         x24 = var_1e8h
         0x8011a80 ()             // 0x8011a80(0x1781e8, 0x0, 0x3c0, 0x0)
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08011a88: // orphan
         [x24 + x8] = x23
         x8 = x8 + 8
         x23 = x23 + 4
         if (x8 == 0x3c0)
         b.ne 0x8011a88           // likely

    loc_0x08011a9c: // orphan
         if x22 jmp 0x8011ab8     // unlikely

    loc_0x08011aa0: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x8011aa8 ()             // 0x8011aa8(0x8011000, 0x0, 0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x25] = x0
         if !x0 jmp 0x8011b0c     // unlikely

    loc_0x08011ab8: // orphan
         x0 = var_1e8h
         x1 = var_sp_8h
         w2 = 0x78                // 'x'
         blr x22                  // pstate(0x1781e8, 0x178008, 0x78, 0x0)
         w22 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x8011b10      // likely

    loc_0x08011ad0: // orphan
         x8 = 0x50                // 'P'
         x9 = [x19 + 0x18]        // 0xda // 218
         x8 = 0x5800
         x0 = [x19 + 8]           // 0xda // 218 // int64_t arg1
         x8 = 0x200
         x1 = var_1e8h            // int64_t arg_5b0h
         x8 = 0xd65f              // '_\xd6'
         [sp, 0x1e8] = (x8,2)
         0x8011af0 ()             // 0x8011af0(0x0, 0x1781e8, 0x0, 0x0)
         w22 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x8011b30     // likely

    loc_0x08011afc: // orphan
         x0 = [x19 + 8]           // 0xda // 218 // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_5b0h
         0x8011b04 ()             // 0x8011b04(0x0, 0x0, 0x0, 0x0)
         jmp 0x8011b10

    loc_0x08011b0c: // orphan
         w22 = ~0x1

    loc_0x08011b10: // orphan
         // CODE XREF from sym.hook_entry_install @ 0x8011b08
         w0 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8011b14 ()             // 0x8011b14(0x0, 0x0, 0x0, 0x0)
         w8 = ~0
         [x19 + 0x18] = xzr
         [x19 + 0x34] = w8

    loc_0x08011b24: // orphan
         // CODE XREF from sym.hook_entry_install @ 0x8011b38
         w0 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80117dc

    loc_0x08011b2c: // orphan
         0x8011b2c ()             // "(" // 0x8011b2c(0x0, 0x0, 0x0, 0x0)

    loc_0x08011b30: // orphan
         w8 = 0x1
         [x19 + 0x30] = (byte) w8
         jmp 0x8011b24

    loc_0x08011b3c: // orphan
         // CODE XREF from sym.hook_entry_install @ 0x80119f0
         bti j
         prfm pstl1strm,[x8]

    loc_0x08011b44: // orphan
         ldxr x10,[x8]
         x10 = x10 | x9
         stxr w11,x10,[x8]
         if w11 jmp 0x8011b44     // unlikely

    loc_0x08011b54: // orphan
         jmp 0x80119fc

}

/* ===== 0x0800f070 ===== */
int sym.filldir64_hook_work (int esi, int edx) {
    loc_0x800f070:
        // DATA XREF from sym.hide_kgsl_cleanup @ 0x800ff34
        hint 0x19
        sp = sp - 0x50
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x800f000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x9 = x9 + 0
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x29 = x8
        (x20, 2) = 3  // arg1
        x8 = [x0 + 0x28] // 0xc7 // 199 // arg1
        ldar w9,[x9]
        if w9 jmp 0x800f124 // likely
            
    loc_0x800f124:
        // XREFS: CODE 0x0800f0b0  CODE 0x0800f0c0  CODE 0x0800f0d0
        // XREFS: CODE 0x0800f0e0  CODE 0x0800f0f0  CODE 0x0800f100
        // XREFS: CODE 0x0800f110
        w9 = w22 - 0x10
        [sp, 8] = (xzr,2)
        if (w9 != 0xf)
        b.lo 0x800f344 // unlikely
            
    loc_0x800f344:
        // XREFS: CODE 0x0800f120  CODE 0x0800f130  CODE 0x0800f134
        // XREFS: CODE 0x0800f13c  CODE 0x0800f310  CODE 0x0800f32c
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        jmp 0x800f354
         // do {
    loc_0x800f354:
        // CODE XREF from sym.filldir64_hook_work @ 0x800f348
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800f384 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800f0b4
    loc_0x800f0c4:
        x9 = 0x800f000
        x9 = x9 + 0
        ldar w9,[x9]
        if w9 jmp 0x800f124 // likely
    loc_0x800f0d4:
        x9 = 0x800f000
        x9 = x9 + 0
        ldar w9,[x9]
        if w9 jmp 0x800f124 // likely
    loc_0x800f0e4:
        x9 = 0x800f000
        x9 = x9 + 0
        ldar w9,[x9]
        if w9 jmp 0x800f124 // likely
    loc_0x800f0f4:
        x9 = 0x800f000
        x9 = x9 + 0
        ldar w9,[x9]
        if w9 jmp 0x800f124 // likely
    loc_0x800f104:
        x9 = 0x800f000
        x9 = x9 + 0
        ldar w9,[x9]
        if w9 jmp 0x800f124 // likely
    loc_0x800f114:
        x9 = 0x800f000
        x9 = x9 + 0
        ldar w9,[x9]
        if !w9 jmp 0x800f344 // unlikely
        }
        return eax;
    loc_0x0800f138: // orphan
             if (w8 == 4)
             b.ne 0x800f344           // likely

    loc_0x0800f140: // orphan
         x8 = 0x800f000
         x21 = w22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 + 0
         ldar w3,[x8]
         if !w3 jmp 0x800f184     // unlikely

    loc_0x0800f154: // orphan
         x2 = 0x800f000
         x0 = var_sp_8h           // int64_t arg1
         x2 = x2 + 0
         w1 = 0x10
         0x800f164 ()             // 0x800f164(0x178008, 0x10, 0x800f000, 0x0)
         if (w0 == w22)
         b.ne 0x800f184           // likely

    loc_0x0800f170: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800f17c ()             // 0x800f17c(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x800f34c     // likely

    loc_0x0800f184: // orphan
         // CODE XREFS from sym.filldir64_hook_work @ 0x800f150, 0x800f16c
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w3,[x8]
         if !w3 jmp 0x800f1c4     // unlikely

    loc_0x0800f194: // orphan
         x2 = 0x800f000
         x0 = var_sp_8h           // int64_t arg1
         x2 = x2 + 0
         w1 = 0x10
         0x800f1a4 ()             // 0x800f1a4(0x178008, 0x10, 0x800f000, 0x0)
         if (w0 == w22)
         b.ne 0x800f1c4           // likely

    loc_0x0800f1b0: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800f1bc ()             // 0x800f1bc(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x800f34c     // likely

    loc_0x0800f1c4: // orphan
         // CODE XREFS from sym.filldir64_hook_work @ 0x800f190, 0x800f1ac
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w3,[x8]
         if !w3 jmp 0x800f204     // unlikely

    loc_0x0800f1d4: // orphan
         x2 = 0x800f000
         x0 = var_sp_8h           // int64_t arg1
         x2 = x2 + 0
         w1 = 0x10
         0x800f1e4 ()             // 0x800f1e4(0x178008, 0x10, 0x800f000, 0x0)
         if (w0 == w22)
         b.ne 0x800f204           // likely

    loc_0x0800f1f0: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800f1fc ()             // "`\n" // 0x800f1fc(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x800f34c     // likely

    loc_0x0800f204: // orphan
         // CODE XREFS from sym.filldir64_hook_work @ 0x800f1d0, 0x800f1ec
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w3,[x8]
         if !w3 jmp 0x800f244     // unlikely

    loc_0x0800f214: // orphan
         x2 = 0x800f000
         x0 = var_sp_8h           // int64_t arg1
         x2 = x2 + 0
         w1 = 0x10
         0x800f224 ()             // 0x800f224(0x178008, 0x10, 0x800f000, 0x0)
         if (w0 == w22)
         b.ne 0x800f244           // likely

    loc_0x0800f230: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800f23c ()             // 0x800f23c(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x800f34c     // likely

    loc_0x0800f244: // orphan
         // CODE XREFS from sym.filldir64_hook_work @ 0x800f210, 0x800f22c
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w3,[x8]
         if !w3 jmp 0x800f284     // unlikely

    loc_0x0800f254: // orphan
         x2 = 0x800f000
         x0 = var_sp_8h           // int64_t arg1
         x2 = x2 + 0
         w1 = 0x10
         0x800f264 ()             // 0x800f264(0x178008, 0x10, 0x800f000, 0x0)
         if (w0 == w22)
         b.ne 0x800f284           // likely

    loc_0x0800f270: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800f27c ()             // 0x800f27c(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x800f34c     // likely

    loc_0x0800f284: // orphan
         // CODE XREFS from sym.filldir64_hook_work @ 0x800f250, 0x800f26c
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w3,[x8]
         if !w3 jmp 0x800f2c4     // unlikely

    loc_0x0800f294: // orphan
         x2 = 0x800f000
         x0 = var_sp_8h           // int64_t arg1
         x2 = x2 + 0
         w1 = 0x10
         0x800f2a4 ()             // 0x800f2a4(0x178008, 0x10, 0x800f000, 0x0)
         if (w0 == w22)
         b.ne 0x800f2c4           // likely

    loc_0x0800f2b0: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800f2bc ()             // 0x800f2bc(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x800f34c     // likely

    loc_0x0800f2c4: // orphan
         // CODE XREFS from sym.filldir64_hook_work @ 0x800f290, 0x800f2ac
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w3,[x8]
         if !w3 jmp 0x800f304     // unlikely

    loc_0x0800f2d4: // orphan
         x2 = 0x800f000
         x0 = var_sp_8h           // int64_t arg1
         x2 = x2 + 0
         w1 = 0x10
         0x800f2e4 ()             // 0x800f2e4(0x178008, 0x10, 0x800f000, 0x0)
         if (w0 == w22)
         b.ne 0x800f304           // likely

    loc_0x0800f2f0: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800f2fc ()             // 0x800f2fc(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x800f34c     // likely

    loc_0x0800f304: // orphan
         // CODE XREFS from sym.filldir64_hook_work @ 0x800f2d0, 0x800f2ec
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w3,[x8]
         if !w3 jmp 0x800f344     // unlikely

    loc_0x0800f314: // orphan
         x2 = 0x800f000
         x0 = var_sp_8h           // int64_t arg1
         x2 = x2 + 0
         w1 = 0x10
         0x800f324 ()             // 0x800f324(0x178008, 0x10, 0x800f000, 0x0)
         if (w0 == w22)
         b.ne 0x800f344           // likely

    loc_0x0800f330: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800f33c ()             // "`" // 0x800f33c(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x800f34c     // likely

    loc_0x0800f34c: // orphan
         // XREFS: CODE 0x0800f180  CODE 0x0800f1c0  CODE 0x0800f200  
         // XREFS: CODE 0x0800f240  CODE 0x0800f280  CODE 0x0800f2c0  
         // XREFS: CODE 0x0800f300  CODE 0x0800f340  
         w0 = 0x1
         [x19] = xzr

    loc_0x0800f368: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_50h
         hint 0x1d
         

    loc_0x0800f384: // orphan
         // CODE XREF from sym.filldir64_hook_work @ 0x800f364
         0x800f384 ()             // 0x800f384(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x0800f9e0 ===== */
int sym.kgsl_process_init_hook_work (int esi, int edx) {
    loc_0x800f9e0:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x800f9f8 ()  // 0x800f9f8(0x0, 0x0, 0x0, 0x0)
        tbz w0,0,0x800fa18 // likely
            
    loc_0x800fa18:
        // CODE XREF from sym.kgsl_process_init_hook_work @ 0x800f9fc
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800fa1c:
        // CODE XREF from sym.kgsl_process_init_hook_work @ 0x800fa14
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800fa2c
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800fb90 ===== */
int sym.should_hide (int esi, int edx) {
    loc_0x800fb90:
        hint 0x19
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if !w8 jmp 0x800fbb4 // unlikely
            
    loc_0x800fbb4:
        // CODE XREF from sym.should_hide @ 0x800fba0
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if !w8 jmp 0x800fbd4 // unlikely
            
    loc_0x800fbd4:
        // CODE XREF from sym.should_hide @ 0x800fbc0
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if !w8 jmp 0x800fbf4 // unlikely
            
    loc_0x800fbf4:
        // CODE XREF from sym.should_hide @ 0x800fbe0
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if !w8 jmp 0x800fc14 // unlikely
            
    loc_0x800fc14:
        // CODE XREF from sym.should_hide @ 0x800fc00
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if !w8 jmp 0x800fc34 // unlikely
            
    loc_0x800fc34:
        // CODE XREF from sym.should_hide @ 0x800fc20
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if !w8 jmp 0x800fc54 // unlikely
            
    loc_0x800fc54:
        // CODE XREF from sym.should_hide @ 0x800fc40
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if !w8 jmp 0x800fc74 // unlikely
            
    loc_0x800fc74:
        // CODE XREF from sym.should_hide @ 0x800fc60
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if !w8 jmp 0x800fca0 // unlikely
            
    loc_0x800fca0:
        // CODE XREFS from sym.should_hide @ 0x800fc80, 0x800fc90
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        hint 0x1d
        0x0800fca8
         // } else {
    loc_0x800fc84:
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = [x9 + 0x5dc] // 0xd0 // 208
        if (w9 == w8)
        b.ne 0x800fca0 // likely
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x800fba4
    loc_0x800fc94:
        // XREFS: CODE 0x0800fbb0  CODE 0x0800fbd0  CODE 0x0800fbf0
        // XREFS: CODE 0x0800fc10  CODE 0x0800fc30  CODE 0x0800fc50
        // XREFS: CODE 0x0800fc70
        w0 = 0x1
        hint 0x1d
        0x0800fc9c
         // (break)
}

/* ===== 0x0800fa30 ===== */
int sym.sysfs_create_group_hook_work (int esi, int edx) {
    loc_0x800fa30:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x0]     // 0xc7 // 199 // arg1
        if !x8 jmp 0x800fb78 // likely
            
    loc_0x800fb78:
        // XREFS: CODE 0x0800fa48  CODE 0x0800fa50  CODE 0x0800fa58
        // XREFS: CODE 0x0800fa7c  CODE 0x0800fa9c  CODE 0x0800fabc
        // XREFS: CODE 0x0800fadc  CODE 0x0800fafc  CODE 0x0800fb1c
        // XREFS: CODE 0x0800fb3c  CODE 0x0800fb5c
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x800fb7c:
        // CODE XREFS from sym.sysfs_create_group_hook_work @ 0x800fb44, 0x800fb54, 0x800fb74
        (x20, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800fb8c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800fa4c
    loc_0x800fa54:
        x20 = [x8 + 0x18] // 0xcf // 207
        if !x20 jmp 0x800fb78 // likely
    loc_0x800fa5c:
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x800fa78 // likely
            
    loc_0x800fa78:
        // CODE XREF from sym.sysfs_create_group_hook_work @ 0x800fa64
        x20 = [x20 + 0x18] // 0xdb // 219
        if !x20 jmp 0x800fb78 // likely
    loc_0x800fa80:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x800fa98 // likely
            
    loc_0x800fa98:
        // CODE XREF from sym.sysfs_create_group_hook_work @ 0x800fa84
        x20 = [x20 + 0x18] // 0xdb // 219
        if !x20 jmp 0x800fb78 // likely
    loc_0x800faa0:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x800fab8 // likely
            
    loc_0x800fab8:
        // CODE XREF from sym.sysfs_create_group_hook_work @ 0x800faa4
        x20 = [x20 + 0x18] // 0xdb // 219
        if !x20 jmp 0x800fb78 // likely
    loc_0x800fac0:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x800fad8 // likely
            
    loc_0x800fad8:
        // CODE XREF from sym.sysfs_create_group_hook_work @ 0x800fac4
        x20 = [x20 + 0x18] // 0xdb // 219
        if !x20 jmp 0x800fb78 // likely
    loc_0x800fae0:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x800faf8 // likely
            
    loc_0x800faf8:
        // CODE XREF from sym.sysfs_create_group_hook_work @ 0x800fae4
        x20 = [x20 + 0x18] // 0xdb // 219
        if !x20 jmp 0x800fb78 // likely
    loc_0x800fb00:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x800fb18 // likely
            
    loc_0x800fb18:
        // CODE XREF from sym.sysfs_create_group_hook_work @ 0x800fb04
        x20 = [x20 + 0x18] // 0xdb // 219
        if !x20 jmp 0x800fb78 // likely
    loc_0x800fb20:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x800fb38 // likely
            
    loc_0x800fb38:
        // CODE XREF from sym.sysfs_create_group_hook_work @ 0x800fb24
        x8 = [x20 + 0x18] // 0xdb // 219
        if !x8 jmp 0x800fb78 // likely
    loc_0x800fb40:
        x0 = [x8]     // 0xcf // 207
        if !x0 jmp 0x800fb7c // likely
    loc_0x800fb48:
        x1 = 0x800f000
        x1 = x1 + 0
        0x800fb50 ()  // 0x800fb50(0x0, 0x800f000, 0x0, 0x0)
        if !x0 jmp 0x800fb7c // likely
    loc_0x800fb58:
        // XREFS: CODE 0x0800fa74  CODE 0x0800fa94  CODE 0x0800fab4
        // XREFS: CODE 0x0800fad4  CODE 0x0800faf4  CODE 0x0800fb14
        // XREFS: CODE 0x0800fb34
        0x800fb58 ()  // 0x800fb58(0x0, 0x0, 0x0, 0x0)
        tbz w0,0,0x800fb78 // likely
    loc_0x800fb60:
        x8 = ~0xb
        x9 = [x19 + 0xf0] // 0xda // 218
        w0 = 0x1
        [x19] = x8
        [x19 + 0x100] = x9
        jmp 0x800fb7c
    loc_0x0800fa68: // orphan
             x1 = 0x800f000
             x1 = x1 + 0
             0x800fa70 ()             // 0x800fa70(0x0, 0x800f000, 0x0, 0x0)
             if x0 jmp 0x800fb58      // unlikely

    loc_0x0800fa88: // orphan
         x1 = 0x800f000
         x1 = x1 + 0
         0x800fa90 ()             // 0x800fa90(0x0, 0x800f000, 0x0, 0x0)
         if x0 jmp 0x800fb58      // unlikely

    loc_0x0800faa8: // orphan
         x1 = 0x800f000
         x1 = x1 + 0
         0x800fab0 ()             // 0x800fab0(0x0, 0x800f000, 0x0, 0x0)
         if x0 jmp 0x800fb58      // unlikely

    loc_0x0800fac8: // orphan
         x1 = 0x800f000
         x1 = x1 + 0
         0x800fad0 ()             // 0x800fad0(0x0, 0x800f000, 0x0, 0x0)
         if x0 jmp 0x800fb58      // unlikely

    loc_0x0800fae8: // orphan
         x1 = 0x800f000
         x1 = x1 + 0
         0x800faf0 ()             // 0x800faf0(0x0, 0x800f000, 0x0, 0x0)
         if x0 jmp 0x800fb58      // unlikely

    loc_0x0800fb08: // orphan
         x1 = 0x800f000
         x1 = x1 + 0
         0x800fb10 ()             // 0x800fb10(0x0, 0x800f000, 0x0, 0x0)
         if x0 jmp 0x800fb58      // unlikely

    loc_0x0800fb28: // orphan
         x1 = 0x800f000
         x1 = x1 + 0
         0x800fb30 ()             // 0x800fb30(0x0, 0x800f000, 0x0, 0x0)
         if x0 jmp 0x800fb58      // unlikely

}

/* ===== 0x0800fff4 ===== */
int sym.gyro_unhook_all_locked (int esi, int edx) {
    loc_0x800fff4:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        // XREFS(78)
        [var_10h] = x21
        // CODE XREF from sym.gyro_sendmsg @ 0x8010ca8
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // CODE XREF from sym.gyro_sendmsg @ 0x8010cac
        [sp, 0x20] = (x20,2)
        x19 = 0x8010000
        // CODE XREFS from sym.gyro_unhook_all_locked @ 0x8010040, 0x80100a4
        w8 = [x19]    // 0xda // 218
        if (w8 == 1)
        b.lt 0x801007c // likely
            
    loc_0x801007c:
        0x801007c ()  // 0x801007c(0x0, 0x0, 0x0, 0x0)
        // CODE XREF from sym.gyro_install_hooks @ 0x8010584
        w8 = [x19]    // 0xda // 218
        if (w8 == 1)
        b.lt 0x80100cc // likely
            
    loc_0x80100cc:
        [x19] = wzr
        x8 = 0x8010000
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        [x8] = (byte) wzr
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x080100ec
         // } else {
    loc_0x801008c:
        x21 = 0x8010000
        x20 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = x21 + 0
        jmp 0x80100b0
         // } else {
        }
        return eax;
    loc_0x08010038: // orphan
             // CODE XREF from sym.gyro_unhook_all_locked @ 0x8010078
             x12 = [x19]              // 0xda // 218
             x8 = x8 + 1
             x10 = x10 + 0x10
             if (x8 == x12)
             b.ge 0x801007c           // likely

    loc_0x0801004c: // orphan
         // CODE XREF from sym.gyro_unhook_all_locked @ 0x8010034
         if (x8 == 0x400)
         b.eq 0x80100f0           // unlikely

    loc_0x08010054: // orphan
         x12 = [x10]              // 0xd1 // 209
         if !x12 jmp 0x8010038    // likely

    loc_0x0801005c: // orphan
         x12 = x12 + 0x20
         ldar x12,[x12]
         if (x12 == x11)
         b.ne 0x8010038           // unlikely

    loc_0x0801006c: // orphan
         x12 = [x9]               // 0xd0 // 208
         x13 = [x10]              // 0xd1 // 209
         [x13 + 0x20] = x12
         jmp 0x8010038

    loc_0x0801009c: // orphan
         // CODE XREF from sym.gyro_unhook_all_locked @ 0x80100c8
         x20 = x20 + 1
         [x21, -8] = (xzr,2)
         x21 = x21 + 0x10
         if (x20 == w8)
         b.ge 0x80100cc           // likely

    loc_0x080100b0: // orphan
         // CODE XREF from sym.gyro_unhook_all_locked @ 0x8010098
         if (x20 == 0x400)
         b.eq 0x80100f0           // unlikely

    loc_0x080100b8: // orphan
         x0 = [x21]               // 0xdc // 220
         if !x0 jmp 0x801009c     // likely

    loc_0x080100c0: // orphan
         0x80100c0 ()             // 0x80100c0(0x0, 0x0, 0x0, 0x0)
         w8 = [x19]               // 0xda // 218
         jmp 0x801009c

    loc_0x080100f0: // orphan
         brk 0x5512

}

/* ===== 0x08010250 ===== */
int sym._copy_from_user.130 (int esi, int edx) {
    loc_0x8010250:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = (byte) [x9 + 0x3e] // 0xd0 // 208
        x8 = x1 << 8  // arg2
        tbnz w10,5,0x8010284 // likely
            
    loc_0x8010284:
        x10 = x1 & x8,asr 8 // arg2
         // do {
    loc_0x8010288:
        x11 = xzr | 0x7fffffffff
        x10 = x10 + 0x10
        csel x11,xzr,x11, hi
        csinv x10,x10,xzr, lo
        sbcs xzr,x10,x11
        cset x10,ls
        if !x10 jmp 0x8010378 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080102a4: // orphan
             jmp 0x8010394

    loc_0x080102ac: // orphan
         // CODE XREF from sym._copy_from_user.130 @ 0x80103a4
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x80102c4     // unlikely

    loc_0x080102b8: // orphan
         
         w11 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080102c4: // orphan
         x9 = x9 + 8
         ldar x9,[x9]
         x12 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080102ec: // orphan
         bti j
         x9 = x1 & x8,asr 8       // arg2
         x10 = xzr | 0x7fffffffff
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x1,xzr, eq
         hint 0x14
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x10
         0x8010310 ()             // 0x8010310(0x0, 0x0, 0x10, 0x0)
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80103a8

    loc_0x08010320: // orphan
         // CODE XREF from sym._copy_from_user.130 @ 0x80103b8
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8010338      // unlikely

    loc_0x0801032c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010338: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010358: // orphan
         bti j
         if x20 jmp 0x801037c     // unlikely

    loc_0x08010360: // orphan
         // CODE XREF from sym._copy_from_user.130 @ 0x8010390
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

    loc_0x08010378: // orphan
         w20 = 0x10

    loc_0x0801037c: // orphan
         x8 = x19 - x20
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x0 = x8 + 0x10           // int64_t arg1
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x801038c ()             // 0x801038c(0x10, 0x0, 0x0, 0x0)
         jmp 0x8010360

    loc_0x08010394: // orphan
         // CODE XREF from sym._copy_from_user.130 @ 0x80102a4
         bti j
         x10 = 0x8010000
         x10 = [x10]              // 0xd1 // 209
         tbnz w10,0x18,0x80102ec  // likely

    loc_0x080103a4: // orphan
         jmp 0x80102ac

    loc_0x080103a8: // orphan
         // CODE XREF from sym._copy_from_user.130 @ 0x8010318
         bti j
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x18,0x8010358   // likely

    loc_0x080103b8: // orphan
         jmp 0x8010320

}

/* ===== 0x080103f8 ===== */
int sym.gyro_install_hooks (int esi, int edx) {
    loc_0x80103f8:
        hint 0x19
        sp = sp - 0x100
        [x18] + 8 = x30
        [sp, 0xa0] = (x29,2)
        x29 = var_a0h
        [sp, 0xb0] = (x28,2)
        [sp, 0xc0] = (x26,2)
        [sp, 0xd0] = (x24,2)
        [sp, 0xe0] = (x22,2)
        [sp, 0xf0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8010000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        x8 = [x19]    // 0xda // 218
        if !x8 jmp 0x8010454 // unlikely
            
    loc_0x8010454:
        x8 = 0x8010000
        x0 = var_18h  // int64_t arg_100h
        x8 = x8 + 0
        [sp, 0x88] = (xzr,2)
        [sp, 0x78] = (xzr,2)
        [sp, 0x68] = (xzr,2)
        [sp, 0x58] = (xzr,2)
        [sp, 0x38] = (xzr,2)
        [sp, 0x28] = (xzr,2)
        [sp, 0x18] = (xzr,2)
        [sp, 0x48] = (x8,2)
        0x8010480 ()  // 0x8010480(0x178018, 0x0, 0x0, 0x0)
        tbz w0,0x1f,0x80105f4 // likely
            
    loc_0x80105f4:
        x8 = [var_40h] // 4
        x0 = var_18h  // int64_t arg_100h
        [x19] = x8
        0x8010600 ()  // 0x8010600(0x178018, 0x0, 0x0, 0x0)
        x1 = [x19]    // 0xda // 218
        if x1 jmp 0x8010644 // unlikely
            
    loc_0x8010644:
        x0 = 0x8010000
        x0 = x0 + 0   // int64_t arg_100h
        0x801064c ()  // 0x801064c(0x8010000, 0x0, 0x0, 0x0)
        x8 = [x19]    // 0xda // 218
        jmp 0x8010438
    loc_0x08010438: // orphan
             // CODE XREF from sym.gyro_install_hooks @ 0x8010654
             x0 = 0x8010000
             x0 = x0 + 0
             blr x8                   // pstate(0x8010000, 0x0, 0x0, 0x0)
             x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x8 = [x19]               // 0xda // 218
             if x8 jmp 0x8010494      // unlikely

    loc_0x08010450: // orphan
         jmp 0x80104cc

    loc_0x08010488: // orphan
         // CODE XREF from sym.gyro_install_hooks @ 0x8010618
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x19]               // 0xda // 218
         if !x8 jmp 0x80104cc     // likely

    loc_0x08010494: // orphan
         // CODE XREF from sym.gyro_install_hooks @ 0x8010668
         x0 = 0x8010000
         x0 = x0 + 0
         blr x8                   // pstate(0x8010000, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8010500     // unlikely

    loc_0x080104a4: // orphan
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80104a8 ()             // 0x80104a8(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8010508     // likely

    loc_0x080104b0: // orphan
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w20 = [x0 + 0x5d8]       // 0xc7 // 199
         if !x21 jmp 0x8010510    // likely

    loc_0x080104bc: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x21                  // pstate(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801053c

    loc_0x080104cc: // orphan
         // CODE XREF from sym.gyro_install_hooks @ 0x8010450
         x8 = 0x8010000
         // CODE XREF from sym.find_system_server @ 0x8010a20
         x0 = var_18h             // int64_t arg_100h
         x8 = x8 + 0
         [sp, 0x88] = (xzr,2)
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x38] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 0x48] = (x8,2)
         0x80104f8 ()             // 0x80104f8(0x178018, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x801061c    // likely

    loc_0x08010500: // orphan
         // CODE XREF from sym.gyro_install_hooks @ 0x8010640
         w0 = ~0x12
         jmp 0x8010800

    loc_0x08010508: // orphan
         w0 = ~0x2
         jmp 0x8010800

    loc_0x08010510: // orphan
         x23 = x22 + 0x880
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_100h
         0x8010518 ()             // 0x8010518(0x880, 0x0, 0x0, 0x0)
         x21 = [x22 + 0x7d8]      // 0xdd // 221
         if !x21 jmp 0x8010534    // unlikely

    loc_0x08010524: // orphan
         jmp 0x8010850

    loc_0x08010534: // orphan
         // CODE XREF from sym.gyro_install_hooks @ 0x8010868
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_100h
         0x8010538 ()             // 0x8010538(0x0, 0x0, 0x0, 0x0)

    loc_0x0801053c: // orphan
         // CODE XREF from sym.gyro_install_hooks @ 0x80104c8
         x0 = x22 + 0x38
         jmp 0x80107cc

    loc_0x0801055c: // orphan
         dmb ishld
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_100h
         0x8010564 ()             // 0x8010564(0x0, 0x0, 0x0, 0x0)
         if !x21 jmp 0x80107fc    // likely

    loc_0x0801056c: // orphan
         // CODE XREF from sym.gyro_install_hooks @ 0x8010848
         x0 = 0x8010000
         [var_ch] = w20
         x0 = x0 + 0              // int64_t arg_100h
         0x8010578 ()             // 0x8010578(0x8010000, 0x0, 0x0, 0x0)
         0x801057c ()             // 0x801057c(0x8010000, 0x0, 0x0, 0x0)
         0x8010580 ()             // 0x8010580(0x8010000, 0x0, 0x0, 0x0)
         x0 = x21 + 0x80          // int64_t arg_100h
         [var_10h] = x0
         0x801058c ()             // 0x801058c(0x80, 0x0, 0x0, 0x0)
         x8 = x21 + 0x20
         ldar x26,[x8]
         w8 = [x26]               // 0xe1 // 225
         if w8 jmp 0x801066c      // unlikely

    loc_0x080105a0: // orphan
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080105a4: // orphan
         // CODE XREF from sym.gyro_install_hooks @ 0x8010788
         x0 = [var_10h]           // 0x4 // 4 // int64_t arg_100h
         0x80105a8 ()             // 0x80105a8(0x80, 0x0, 0x0, 0x0)
         0x80105ac ()             // 0x80105ac(0x80, 0x0, 0x0, 0x0)
         if (w22 == 0)
         x0 = 0x8010000
         x8 = 0x8010000
         cset w9,gt
         x10 = 0x8010000
         x0 = x0 + 0              // int64_t arg_100h
         [x8] = w22
         [x10] = (byte) w9
         0x80105d0 ()             // 0x80105d0(0x8010000, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x19                  // pstate(0x0, 0x0, 0x0, 0x0)
         if w22 jmp 0x80107a8     // unlikely

    loc_0x080105e0: // orphan
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg_100h
         0x80105e8 ()             // 0x80105e8(0x8010000, 0x0, 0x0, 0x0)
         w0 = ~0x12
         jmp 0x8010800

    loc_0x0801060c: // orphan
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg_100h
         0x8010614 ()             // 0x8010614(0x8010000, 0x0, 0x0, 0x0)
         jmp 0x8010488

    loc_0x0801061c: // orphan
         x8 = [var_40h]           // 4
         x0 = var_18h             // int64_t arg_100h
         [x19] = x8
         0x8010628 ()             // 0x8010628(0x178018, 0x0, 0x0, 0x0)
         x1 = [x19]               // 0xda // 218
         if x1 jmp 0x8010658      // unlikely

    loc_0x08010634: // orphan
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg_100h
         0x801063c ()             // 0x801063c(0x8010000, 0x0, 0x0, 0x0)
         jmp 0x8010500

    loc_0x08010658: // orphan
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg_100h
         0x8010660 ()             // 0x8010660(0x8010000, 0x0, 0x0, 0x0)
         x8 = [x19]               // 0xda // 218
         jmp 0x8010494

    loc_0x0801066c: // orphan
         x20 = 0x8010000
         x12 = 0x8010000
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w28 = 0x1
         x11 = 0x8010000
         x20 = x20 + 0
         x12 = x12 + 0

    loc_0x0801068c: // orphan
         x8 = [x26 + 8]           // 0xe1 // 225
         x8 = x8 + x27
         ldar x24,[x8]
         if !x24 jmp 0x801076c    // likely

    loc_0x0801069c: // orphan
         x8 = [x24 + 0x20]        // 0xdf // 223
         if !x8 jmp 0x801076c     // likely

    loc_0x080106a4: // orphan
         w8 = (word) [x8]         // 0xcf // 207
         w8 = w8 & 0xf000
         if (w8 == 0xc)
         b.ne 0x801076c           // likely

    loc_0x080106b4: // orphan
         x23 = [x24 + 0xd8]       // 0xdf // 223
         if !x23 jmp 0x801076c    // likely

    loc_0x080106bc: // orphan
         w8 = (word) [x23 + 4]    // 0xde // 222
         if (w8 == 5)
         b.ne 0x801076c           // likely

    loc_0x080106c8: // orphan
         x25 = [x23 + 0x20]       // 0xde // 222
         if !x25 jmp 0x801076c    // likely

    loc_0x080106d0: // orphan
         w8 = [x25]               // 0xe0 // 224
         if (w8 == 1)
         b.ne 0x801076c           // likely

    loc_0x080106dc: // orphan
         x8 = [x11]               // 0xd2 // 210
         if x8 jmp 0x801071c      // unlikely

    loc_0x080106e4: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_100h
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x100
         [x11] = x25
         0x80106f4 ()             // 0x80106f4(0x0, 0x0, 0x100, 0x0)
         x8 = 0x8010000
         x12 = 0x8010000
         x8 = x8 + 0
         x12 = x12 + 0
         x11 = 0x8010000
         [x20 + 0x88] = x8
         x8 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x23 + 0x20]        // 0xde // 222
         x25 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801071c: // orphan
         if (x25 == x8)
         b.ne 0x801076c           // unlikely

    loc_0x08010724: // orphan
         x8 = x24 + 0x38
         jmp 0x801078c

    loc_0x08010738: // orphan
         // CODE XREF from sym.gyro_install_hooks @ 0x80107a4
         if (w22 == 0x400)
         [x23 + 0x20] = x20
         b.hs 0x80107c4           // unlikely

    loc_0x08010744: // orphan
         w8 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = 0x8
         x9 = x8 << 4
         bfi x10,x8,4, 0x20       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x10 == 4)
         [x12 + x9] = x23
         b.hi 0x80107c8           // unlikely

    loc_0x08010760: // orphan
         x8 = x12 + x8,lsl 4
         w22 = w22 + 1
         [x8 + 8] = x24

    loc_0x0801076c: // orphan
         w8 = [x26]               // 0xe1 // 225
         if (x28 == x8)
         b.hs 0x80105a4           // likely

    loc_0x08010778: // orphan
         x28 = x28 + 1
         x27 = x27 + 8
         if (w22 == 0x400)
         b.lt 0x801068c           // likely

    loc_0x08010788: // orphan
         jmp 0x80105a4

    loc_0x0801078c: // orphan
         // CODE XREF from sym.gyro_install_hooks @ 0x8010728
         bti j
         prfm pstl1strm,[x8]

    loc_0x08010794: // orphan
         ldxr x9,[x8]
         x9 = x9 + 1
         stxr w10,x9,[x8]
         if w10 jmp 0x8010794     // unlikely

    loc_0x080107a4: // orphan
         jmp 0x8010738

    loc_0x080107a8: // orphan
         x0 = 0x8010000
         w1 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x0 + 0              // int64_t arg_100h
         w2 = [var_ch]            // 0x4 // 4
         0x80107b8 ()             // 0x80107b8(0x8010000, 0x0, 0x0, 0x0)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010800

    loc_0x080107c4: // orphan
         brk 0x5512

    loc_0x080107c8: // orphan
         brk 0x1

    loc_0x080107cc: // orphan
         // CODE XREF from sym.gyro_install_hooks @ 0x8010540
         bti j
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x080107d8: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x80107d8     // unlikely

    loc_0x080107e8: // orphan
         if (w8 == 1)
         b.eq 0x801055c           // unlikely

    loc_0x080107f0: // orphan
         if (w8 == 0)
         jmp ifle 0x801083c       // likely

    loc_0x080107f8: // orphan
         if x21 jmp 0x801056c     // unlikely

    loc_0x080107fc: // orphan
         w0 = ~0x1

    loc_0x08010800: // orphan
         // CODE XREFS from sym.gyro_install_hooks @ 0x8010504, 0x801050c, 0x80105f0, 0x80107c0
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x5e0]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x801084c           // likely

    loc_0x08010814: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_100h
         hint 0x1d
         

    loc_0x0801083c: // orphan
         w1 = 0x3
         0x8010840 ()             // 0x8010840(0x0, 0x3, 0x0, 0x0)
         if !x21 jmp 0x80107fc    // likely

    loc_0x08010848: // orphan
         jmp 0x801056c

    loc_0x0801084c: // orphan
         0x801084c ()             // 0x801084c(0x0, 0x0, 0x0, 0x0)

    loc_0x08010850: // orphan
         // CODE XREF from sym.gyro_install_hooks @ 0x8010524
         bti j
         prfm pstl1strm,[x21]

    loc_0x08010858: // orphan
         ldxr w8,[x21]
         w8 = w8 + 1
         stxr w9,w8,[x21]
         if w9 jmp 0x8010858      // unlikely

    loc_0x08010868: // orphan
         jmp 0x8010534

}

/* ===== 0x08010874 ===== */
int sym._copy_to_user.131 (int esi, int edx) {
    loc_0x8010874:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x10]! = (x29,2)
        // CODE XREF from sym.gyro_install_hooks @ 0x8010510
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x10,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = (byte) [x10 + 0x3e] // 0xd1 // 209
        x9 = x0 << 8  // arg1
        tbnz w8,5,0x80108a0 // likely
            
    loc_0x80108a0:
        x11 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x80108a4:
        w8 = 0x10
        x12 = xzr | 0x7fffffffff
        x11 = x11 + 0x10
        csel x12,xzr,x12, hi
        csinv x11,x11,xzr, lo
        sbcs xzr,x11,x12
        cset x11,ls
        if !x11 jmp 0x8010974 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080108c4: // orphan
             jmp 0x801098c

    loc_0x080108cc: // orphan
         // CODE XREF from sym._copy_to_user.131 @ 0x801099c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w8 & 0x80
         if w11 jmp 0x80108e4     // unlikely

    loc_0x080108d8: // orphan
         
         w11 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080108e4: // orphan
         x10 = x10 + 8
         ldar x10,[x10]
         x12 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801090c: // orphan
         bti j
         x9 = x0 & x9,asr 8       // arg1
         x10 = xzr | 0x7fffffffff
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x0,xzr, eq
         hint 0x14
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x10
         0x801092c ()             // 0x801092c(0x0, 0x0, 0x10, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80109a0

    loc_0x0801093c: // orphan
         // CODE XREF from sym._copy_to_user.131 @ 0x80109b0
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w9 & 0x80
         if w10 jmp 0x8010954     // unlikely

    loc_0x08010948: // orphan
         
         w10 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010954: // orphan
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 & 0xffffffffffff
         x11 = x10 - 1,lsl 12
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010974: // orphan
         bti j
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

    loc_0x0801098c: // orphan
         // CODE XREF from sym._copy_to_user.131 @ 0x80108c4
         bti j
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x18,0x801090c   // unlikely

    loc_0x0801099c: // orphan
         jmp 0x80108cc

    loc_0x080109a0: // orphan
         // CODE XREF from sym._copy_to_user.131 @ 0x8010934
         bti j
         x9 = 0x8010000
         x9 = [x9]                // 0xd0 // 208
         tbnz w9,0x18,0x8010974   // unlikely

    loc_0x080109b0: // orphan
         jmp 0x801093c

}

/* ===== 0x080109f0 ===== */
int sym.find_system_server (int esi, int edx) {
    loc_0x80109f0:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        0x8010a08 ()  // 0x8010a08(0x0, 0x0, 0x0, 0x0)
        x21 = 0x8010000
        x20 = 0x8010000
        x21 = x21 + 0
        x20 = x20 + 0
        x19 = x21     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8010a20:
        x8 = x19 + 0x4d0
        ldar x22,[x8]
        x19 = x22 - 0x4d0
        if (x19 == x21)
        b.eq 0x8010a70 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x8010a34:
        x0 = x22 + 0x2d8
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8010a3c ()  // 0x8010a3c(0x2d8, 0x0, 0x0, 0x0)
        if w0 jmp 0x8010a20 // likely
    loc_0x8010a44:
        x0 = x22 - 0x498
        jmp 0x8010a94
         // do {
    loc_0x8010a94:
        // CODE XREF from sym.find_system_server @ 0x8010a48
        bti j
        prfm pstl1strm,[x0]
         // } while (?);
        }
        return eax;
    loc_0x08010a5c: // orphan
             w9 = w8 + 1
             w8 = w9 | w8
             tbz w8,0x1f,0x8010a74    // likely

    loc_0x08010a68: // orphan
         w1 = 0x1
         jmp 0x8010ab4

    loc_0x08010a70: // orphan
         x19 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010a74: // orphan
         // CODE XREF from sym.find_system_server @ 0x8010ab8
         0x8010a74 ()             // 0x8010a74(0x0, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

    loc_0x08010a9c: // orphan
         ldxr w8,[x0]
         w9 = w8 + 1
         stxr w10,w9,[x0]
         if w10 jmp 0x8010a9c     // unlikely

    loc_0x08010aac: // orphan
         if w8 jmp 0x8010a5c      // unlikely

    loc_0x08010ab0: // orphan
         w1 = 0x2

    loc_0x08010ab4: // orphan
         // CODE XREF from sym.find_system_server @ 0x8010a6c
         0x8010ab4 ()             // 0x8010ab4(0x0, 0x0, 0x0, 0x0)
         jmp 0x8010a74

}

/* ===== 0x08010ac0 ===== */
int sym.gyro_sendmsg (int esi, int edx) {
    loc_0x8010ac0:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        sp = sp - 0x250
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = var_a0h  // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x1a0
        [x29 = x8
        0x8010b0c ()  // 0x8010b0c(0x177df0, 0x0, 0x1a0, 0x0)
        x8 = 0x8010000
        x8 = x8 + 0
        ldarb w8,[x8]
        tbnz w8,0,0x8010b80 // unlikely
            
    loc_0x8010b80:
        if !x19 jmp 0x8010bd8 // likely
            
    loc_0x8010bd8:
        x8 = 0x8010000
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8]     // 0xcf // 207
        x8 = [x8 + 0x88] // 0xcf // 207
        jmp 0x8010b38
         // do {
    loc_0x8010b38:
        // CODE XREF from sym.gyro_sendmsg @ 0x8010bf0
        blr x8        // pstate(0x0, 0x0, 0x0, 0x0)
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08010b28: // orphan
             // CODE XREF from sym.gyro_sendmsg @ 0x8010c00
             x8 = [x8 + 0x88]         // 0xcf // 207
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010b40: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8010fec
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x5e0]        // 0xcf // 207
         ldur x9,[x29,-0x10]
         if (x8 == x9)
         b.ne 0x8011028           // likely

    loc_0x08010b54: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sp = arg_250h
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

    loc_0x08010b8c: // orphan
         x8 = 0x4ec5              // '\xc5N'
         w9 = 0x68                // 'h'
         x8 = 0xc4ec              // '\xec\xc4'
         x8 = 0xec4e              // 'N\xec'
         x8 = 0x4ec4              // '\xc4N'
         umulh x8,x19,x8
         x8 = x8 >> 5
         msub x8,x8,x9, x19
         if x8 jmp 0x8010bf4      // unlikely

    loc_0x08010bb0: // orphan
         x23 = x21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = (byte) [x23 + 0x10]! // 0xde // 222
         if w8 jmp 0x8010b20      // unlikely

    loc_0x08010bbc: // orphan
         x8 = [x21 + 0x20]        // 0xdc // 220
         if (x8 == x19)
         b.lo 0x8010b20           // unlikely

    loc_0x08010bc8: // orphan
         if (x19 == 0x207)
         b.hi 0x8010c04           // unlikely

    loc_0x08010bd0: // orphan
         x22 = var_a0h
         jmp 0x8010c18

    loc_0x08010bf4: // orphan
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         [x20 + 0x20] = x8
         jmp 0x8010b28

    loc_0x08010c04: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = 0xcc0               // '\xc0\f'
         0x8010c0c ()             // 0x8010c0c(0x0, 0xcc0, 0x0, 0x0)
         if !x0 jmp 0x8010b20     // likely

    loc_0x08010c14: // orphan
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010c18: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8010bd4
         (x8, 2) = 3
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x10 = [x23 + 0x20]       // 0xde // 222
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x88] = (x8,2)
         (x8, 2) = 3
         [var_0h] = x10
         [sp, 0x78] = (x8,2)
         0x8010c3c ()             // 0x8010c3c(0x0, 0x0, 0x0, 0x0)
         x2 = var_78h             // int64_t arg3
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x8010c4c ()             // 0x8010c4c(0x0, 0x0, 0x178078, 0x0)
         if (x0 == x19)
         b.ne 0x8011010           // unlikely

    loc_0x08010c58: // orphan
         w9 = 0xec4f              // 'O\xec'
         x8 = x19 & 0xffffffff
         w9 = 0x4ec4              // '\xc4N'
         if (w19 == 0x68)
         x8 = x8 * x9
         x2 = x8 >> 0x25
         b.lo 0x8010c98           // likely

    loc_0x08010c74: // orphan
         if (x2 == 1)
         x9 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csinc x8,x2,xzr, hi

    loc_0x08010c80: // orphan
         w10 = [x9]               // 0xd0 // 208
         if (w10 == 0x68)
         b.ne 0x8010ff0           // likely

    loc_0x08010c8c: // orphan
         x8 = x8 - 1
         x9 = x9 + 0x68
         b.ne 0x8010c80           // likely

    loc_0x08010c98: // orphan
         x8 = 0x8010000
         if (w19 == 0x68)
         x8 = x8 + 0
         ldar w11,[x8]
         x9 = x8 + 4
         x10 = x8 + 8
         ldar w8,[x9]
         ldar w9,[x10]
         b.lo 0x8010ffc           // likely

    loc_0x08010cbc: // orphan
         if (x2 == 1)
         w15 = 0x80               // '\x80'
         w16 = 0x80               // '\x80'
         csinc x2,x2,xzr, hi
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w11 & 2
         w11 = w11 & 1
         w12 = w8 & 0x7fffffff
         w13 = w8 >> 0x1f
         ubfx w14,w8,0x17, 8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil w16,w8,0, 0x17     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w17 = w9 & 0x7fffffff
         w0 = w9 >> 0x1f
         ubfx w1,w9,0x17, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil w15,w9,0, 0x17     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x2 - 1
         x4 = x22 + 0x1c
         w5 = 0x68                // 'h'

    loc_0x08010d08: // orphan
         madd x6,x25,x5, x4
         x7 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010d28

    loc_0x08010d14: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8010d44
         if w26 jmp 0x8010d48     // unlikely

    loc_0x08010d18: // orphan
         x7 = x7 + 1
         x6 = x6 + 0x68
         if (x2 == x7)
         b.eq 0x8010f58           // unlikely

    loc_0x08010d28: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8010d10
         ldur w25,[x6,-0x14]      // 0xcd // 205
         w26 = w11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w25 == 4)
         b.eq 0x8010d14           // unlikely

    loc_0x08010d38: // orphan
         if (w25 == 0x10)
         b.ne 0x8010d18           // likely

    loc_0x08010d40: // orphan
         w26 = w10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010d14

    loc_0x08010d48: // orphan
         ldur w26,[x6,-4]         // 0xcd // 205
         w24 &= w26
         csel w28,w8,w26, eq
         if !w24 jmp 0x8010e40    // unlikely

    loc_0x08010d58: // orphan
         if !w12 jmp 0x8010e40    // likely

    loc_0x08010d5c: // orphan
         ubfx w24,w26,0x17, 8     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = 0x80               // '\x80'
         bfxil w25,w26,0, 0x17    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = w24 - w14
         b.ls 0x8010d84           // likely

    loc_0x08010d70: // orphan
         w28 = w26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w27 == 0x18)
         jmp ifgt 0x8010e40       // unlikely

    loc_0x08010d7c: // orphan
         w27 = w16 >> w27
         jmp 0x8010da8

    loc_0x08010d84: // orphan
         w30 = w14 - w24
         w27 = w16                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ls 0x8010da8           // likely

    loc_0x08010d90: // orphan
         w28 = w8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w30 == 0x18)
         jmp ifgt 0x8010e40       // unlikely

    loc_0x08010d9c: // orphan
         w25 = w25 >> w30
         w24 = w14                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = w16                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010da8: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8010d80
         w26 = w26 >> 0x1f
         if (w26 == w13)
         b.ne 0x8010dd0           // unlikely

    loc_0x08010db4: // orphan
         w26 = w27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = x26 + w25,uxtw
         tbz w25,0x18,0x8010dc8   // likely

    loc_0x08010dc0: // orphan
         x25 = x25 >> 1
         w24 = w24 + 1

    loc_0x08010dc8: // orphan
         w26 = w13                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010e08

    loc_0x08010dd0: // orphan
         w28 = w25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w30 = w27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x28 - x30
         x28 = x30 - x28
         if (w25 == w27)
         csel x25,x28,x5, lo
         csel w26,w13,w26, lo
         if !x25 jmp 0x8010e3c    // likely

    loc_0x08010df0: // orphan
         tbnz w25,0x17,0x8010e08  // unlikely

    loc_0x08010df4: // orphan
         x27 = x25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = x25 << 1
         w24 = w24 - 1
         if !x25 jmp 0x8010e08    // likely

    loc_0x08010e04: // orphan
         tbz w27,0x16,0x8010df4   // likely

    loc_0x08010e08: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8010dcc
         if (w24 == 0xff)
         b.lt 0x8010e1c           // likely

    loc_0x08010e10: // orphan
         w28 = 0x7f80             // '\x80\x7f'
         bfi w28,w26,0x1f, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010e40

    loc_0x08010e1c: // orphan
         w28 = w26 << 0x1f
         if (w24 == 1)
         b.lt 0x8010e40           // likely

    loc_0x08010e28: // orphan
         ubfiz w5,w24,0x17, 8     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = w25 & 0x7fffff
         w5 = w28 | w5
         w28 = w5 | w24
         jmp 0x8010e40

    loc_0x08010e3c: // orphan
         w28 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010e40: // orphan
         // CODE XREFS from sym.gyro_sendmsg @ 0x8010e18, 0x8010e38
         w26 = [x6]               // 0xcd // 205
         [x6 = w28
         w5 &= w26
         csel w27,w9,w26, eq
         if !w5 jmp 0x8010f3c     // likely

    loc_0x08010e54: // orphan
         if !w17 jmp 0x8010f3c    // likely

    loc_0x08010e58: // orphan
         ubfx w24,w26,0x17, 8     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w25 = 0x80               // '\x80'
         bfxil w25,w26,0, 0x17    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w28 = w24 - w1
         b.ls 0x8010e80           // likely

    loc_0x08010e6c: // orphan
         w27 = w26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w28 == 0x18)
         jmp ifgt 0x8010f3c       // unlikely

    loc_0x08010e78: // orphan
         w27 = w15 >> w28
         jmp 0x8010ea4

    loc_0x08010e80: // orphan
         w28 = w1 - w24
         w27 = w15                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ls 0x8010ea4           // likely

    loc_0x08010e8c: // orphan
         w27 = w9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w28 == 0x18)
         jmp ifgt 0x8010f3c       // unlikely

    loc_0x08010e98: // orphan
         w25 = w25 >> w28
         w24 = w1                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w27 = w15                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010ea4: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8010e7c
         w26 = w26 >> 0x1f
         if (w26 == w0)
         b.ne 0x8010ecc           // unlikely

    loc_0x08010eb0: // orphan
         w5 = w27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = x5 + w25,uxtw
         tbz w25,0x18,0x8010ec4   // likely

    loc_0x08010ebc: // orphan
         x25 = x25 >> 1
         w24 = w24 + 1

    loc_0x08010ec4: // orphan
         w26 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010f04

    loc_0x08010ecc: // orphan
         w5 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w28 = w27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x30 = x5 - x28
         x5 = x28 - x5
         if (w25 == w27)
         csel x25,x5,x30, lo
         csel w26,w0,w26, lo
         if !x25 jmp 0x8010f38    // likely

    loc_0x08010eec: // orphan
         tbnz w25,0x17,0x8010f04  // unlikely

    loc_0x08010ef0: // orphan
         x27 = x25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = x25 << 1
         w24 = w24 - 1
         if !x25 jmp 0x8010f04    // likely

    loc_0x08010f00: // orphan
         tbz w27,0x16,0x8010ef0   // likely

    loc_0x08010f04: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8010ec8
         if (w24 == 0xff)
         b.lt 0x8010f18           // likely

    loc_0x08010f0c: // orphan
         w27 = 0x7f80             // '\x80\x7f'
         bfi w27,w26,0x1f, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010f3c

    loc_0x08010f18: // orphan
         w27 = w26 << 0x1f
         if (w24 == 1)
         b.lt 0x8010f3c           // likely

    loc_0x08010f24: // orphan
         ubfiz w5,w24,0x17, 8     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w24 = w25 & 0x7fffff
         w5 = w27 | w5
         w27 = w5 | w24
         jmp 0x8010f3c

    loc_0x08010f38: // orphan
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010f3c: // orphan
         // CODE XREFS from sym.gyro_sendmsg @ 0x8010f14, 0x8010f34
         x25 = x7 + 1
         w24 = 0x1
         w5 = 0x68                // 'h'
         if (x3 == x7)
         [x6] = w27
         b.ne 0x8010d08           // unlikely

    loc_0x08010f54: // orphan
         jmp 0x8010f5c

    loc_0x08010f58: // orphan
         tbz w24,0,0x8010ffc      // likely

    loc_0x08010f5c: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8010f54
         (x8, 2) = 3
         x2 = var_68h             // int64_t arg3
         w1 = 0x1
         (x10, 2) = 3
         w3 = 0x1
         x4 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x68] = (x22,2)
         [sp, 0x48] = (x8,2)
         (x8, 2) = 3
         [sp, 0x58] = (x10,2)
         (x10, 2) = 3
         [sp, 0x28] = (x8,2)
         (x8, 2) = 3
         [sp, 0x38] = (x10,2)
         [sp, 8] = (x8,2)
         x8 = var_8h
         (x9, 2) = 3
         x0 = var_18h             // int64_t arg1
         [sp, 0x18] = (x9,2)
         0x8010fa8 ()             // 0x8010fa8(0x178018, 0x1, 0x178068, 0x1)
         x8 = 0x8010000
         x1 = var_8h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x8 = [x8]                // 0xcf // 207
         x8 = [x8 + 0x88]         // 0xcf // 207
         blr x8                   // 0xffffffffffffffff(0x0, 0x178008, 0x0, 0x1)
         x8 = [var_28h]           // 0x4 // 4
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19 - x8            // int64_t arg2
         0x8010fd8 ()             // 0x8010fd8(0x0, 0x6efffc0300000000, 0x0, 0x1)
         if (x19 == 0x208)
         b.lo 0x8010b40           // likely

    loc_0x08010fe4: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8010fe8 ()             // 0x8010fe8(0x0, 0x0, 0x0, 0x0)
         jmp 0x8010b40

    loc_0x08010ff0: // orphan
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         [x20 + 0x20] = x8

    loc_0x08010ffc: // orphan
         if (x19 == 0x208)
         // XREFS(99)
         stxrb w1,w0,[x0]

    loc_0x08011004: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8011024
                                  // int64_t arg1
         0x8011008 ()             // 0x8011008(0x0, 0x0, 0x0, 0x0)
         jmp 0x8010b20

    loc_0x08011010: // orphan
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x0 = var_78h             // int64_t arg1
         0x8011018 ()             // 0x8011018(0x178078, 0x0, 0x0, 0x0)
         if (x19 == 0x208)
         b.lo 0x8010b20           // likely

    loc_0x08011024: // orphan
         jmp 0x8011004

    loc_0x08011028: // orphan
         0x8011028 ()             // 0x8011028(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08011dd8 ===== */
int sym.hook_patch_words (int esi, int edx) {
    loc_0x8011dd8:
        hint 0x19
        sp = sp - 0xe0
        [x18] + 8 = x30
        [sp, 0xb0] = (x29,2)
        x29 = var_b0h
        [sp, 0xc0] = (x22,2)
        [sp, 0xd0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = 0x8011000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x29 = x8
        x8 = [x21]    // 0xdc // 220
        if !x8 jmp 0x8011e40 // unlikely
            
    loc_0x8011e40:
        x22 = 0x8011000
        x8 = [x22]    // 0xdd // 221
        if !x8 jmp 0x8011e94 // unlikely
            
    loc_0x8011e94:
        x8 = 0x8011000
        x0 = var_8h   // int64_t arg1
        x8 = x8 + 0
        [sp, 0x78] = (xzr,2)
        [sp, 0x68] = (xzr,2)
        [sp, 0x58] = (xzr,2)
        [sp, 0x48] = (xzr,2)
        [sp, 0x28] = (xzr,2)
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        [sp, 0x38] = (x8,2)
        0x8011ec0 ()  // 0x8011ec0(0x178008, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x8011f28 // unlikely
            
    loc_0x8011f28:
        // CODE XREF from sym.hook_patch_words @ 0x8011f84
        w0 = ~0x1
        [x21] = xzr
         // do {
    loc_0x8011f30:
        // CODE XREFS from sym.hook_patch_words @ 0x8011e3c, 0x8011e90
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8011f9c // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8011e14
    loc_0x8011e2c:
        x0 = var_28h
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x4
        blr x8        // "=" // pstate(0x177fd8, 0x0, 0x4, 0x0)
        jmp 0x8011f30
    loc_0x08011e64: // orphan
             jmp 0x8011e8c

    loc_0x08011e68: // orphan
         x20 = 0x8011000
         x8 = [x20]               // 0xdb // 219
         if !x8 jmp 0x8011ef4     // unlikely

    loc_0x08011e74: // orphan
         // CODE XREF from sym.hook_patch_words @ 0x8011f98
         x0 = 0x8011000
         x0 = x0 + 0
         blr x8                   // pstate(0x8011000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x21] = x0
         if x0 jmp 0x8011e2c      // likely

    loc_0x08011e8c: // orphan
         // CODE XREF from sym.hook_patch_words @ 0x8011e64
         w0 = ~0x1
         jmp 0x8011f30

    loc_0x08011ee0: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x8011ee8 ()             // 0x8011ee8(0x8011000, 0x0, 0x0, 0x0)
         x8 = [x22]               // 0xdd // 221
         jmp 0x8011e4c

    loc_0x08011ef4: // orphan
         x8 = 0x8011000
         x0 = var_8h              // int64_t arg1
         x8 = x8 + 0
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 8] = (xzr,2)
         [sp, 0x38] = (x8,2)
         0x8011f20 ()             // 0x8011f20(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x8011f60    // likely

    loc_0x08011f44: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_e0h
         hint 0x1d
         

    loc_0x08011f60: // orphan
         x8 = [var_30h]           // 0x4
         x0 = var_8h              // int64_t arg1
         [x20] = x8
         0x8011f6c ()             // 0x8011f6c(0x178008, 0x0, 0x0, 0x0)
         x1 = [x20]               // 0xdb // 219
         if x1 jmp 0x8011f88      // unlikely

    loc_0x08011f78: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x8011f80 ()             // 0x8011f80(0x8011000, 0x0, 0x0, 0x0)
         jmp 0x8011f28

    loc_0x08011f88: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x8011f90 ()             // 0x8011f90(0x8011000, 0x0, 0x0, 0x0)
         x8 = [x20]               // 0xdb // 219
         jmp 0x8011e74

    loc_0x08011f9c: // orphan
         0x8011f9c ()             // sym.inline_hook_remove_count // 0x8011f9c(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x08011d88 ===== */
int sym.slot_free (int esi, int edx) {
    loc_0x8011d88:
        hint 0x19
        w8 = 0x1
        x8 = x8 << x0 // arg1
        jmp 0x8011db0
         // do {
    loc_0x8011db0:
        // CODE XREF from sym.slot_free @ 0x8011d94
        bti j
        x9 = 0x8011000
        x9 = x9 + 0
        prfm pstl1strm,[x9]
         // } while (?);
        }
        return eax;
    loc_0x08011dc0: // orphan
             ldxr x10,[x9]
             bic x10,x10,x8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
             stxr w11,x10,[x9]
             if w11 jmp 0x8011dc0     // unlikely

    loc_0x08011dd0: // orphan
         hint 0x1d
         

}

/* ===== 0x08012298 ===== */
int sym.ret_work_finish_task_switch (int esi, int edx) {
    loc_0x8012298:
        hint 0x19
        sp = sp - 0x70
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        [sp, 0x30] = (x26,2)
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8012000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        x8 = [x9]     // 0xd0 // 208
        if !x8 jmp 0x80122fc // unlikely
            
    loc_0x80122fc:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x80124c4 // likely
            
    loc_0x80124c4:
        0x80124c4 ()  // sym.hw_breakpoint_parse // 0x80124c4(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x80124c8:
        hint 0x19
        w8 = ~0x15
        if !x0 jmp 0x801262c // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80122d4
    loc_0x80122e4:
        w10 = [x8 + 0x10] // 0xcf // 207
        if (w10 == w9)
        ccmp w10,1,8, eq
        b.ge 0x8012334 // unlikely
            
    loc_0x8012334:
        w11 = 0x5030  // '0P'
        x9 = x8 + 0x20
        w10 = 0x10
        w11 = 0x3
        jmp 0x8012354
         // do {
    loc_0x8012354:
        // CODE XREF from sym.ret_work_finish_task_switch @ 0x8012344
        if !x9 jmp 0x8012348 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08012348: // orphan
             x10 = x10 - 1
             x9 = x9 + x11
             b.eq 0x80122f4           // unlikely

    loc_0x08012358: // orphan
         x12 = [x9 + 0x18]        // 0xd0 // 208
         if !x12 jmp 0x8012348    // likely

    loc_0x08012360: // orphan
         x12 = [x9]               // 0xd0 // 208
         if !x12 jmp 0x8012348    // likely

    loc_0x08012368: // orphan
         msr oslar_el1,xzr        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         w23 = 0x5030             // '0P'
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xa000
         x20 = x8 + 0x20
         mrs x8,mdscr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 | x9
         msr mdscr_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         w22 = 0x10
         w23 = 0x3
         x24 = 0x8012000
         x25 = 0x8012000
         jmp 0x80123b4

    loc_0x080123a8: // orphan
         // CODE XREFS from sym.ret_work_finish_task_switch @ 0x8012454, 0x80124c0
         x22 = x22 - 1
         x20 = x20 + x23
         // CODE XREF from sym.inline_hook_remove_all @ 0x80120ac
         b.eq 0x80122fc           // unlikely

    loc_0x080123b4: // orphan
         // CODE XREF from sym.ret_work_finish_task_switch @ 0x80123a4
         [sp, 8] = (xzr,2)
         [sp] = xzr
         if !x20 jmp 0x80123a8    // likely

    loc_0x080123c0: // orphan
         x8 = [x20 + 0x18]        // 0xdb // 219
         if !x8 jmp 0x80123a8     // likely

    loc_0x080123c8: // orphan
         x8 = [x20]               // 0xdb // 219
         if !x8 jmp 0x80123a8     // likely

    loc_0x080123d0: // orphan
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80123d8 ()             // 0x80123d8(0x0, 0x178000, 0x0, 0x0)
         if w0 jmp 0x80123a8      // unlikely

    loc_0x080123e0: // orphan
         w8 = (byte) [var_13h]    // 0x4
         if ((w8 & 0x18) == 0)
         b.eq 0x8012458           // unlikely

    loc_0x080123ec: // orphan
         w8 = [x25]               // 0xe0 // 224
         if (w21 == w8)
         b.ge 0x80123a8           // likely

    loc_0x080123f8: // orphan
         x2 = [sp]                // 0x4 // 4
         w0 = 0x20
         w1 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = w21 + 1
         0x8012408 ()             // 0x8012408(0x20, 0x0, 0x0, 0x0)
         w8 = [var_10h]           // 0x4 // 4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x30                // '0'
         w1 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 >> 0xe
         w11 = w8 >> 0x18
         ubfx w8,w8,0x1d, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w10 & 0x1fe0
         w11 = w11 & 0x18
         if (w8 == 1)
         w10 = w10 | w11
         ccmp x9,8,0, eq
         bfi w10,w8,1, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w10 | 0x2000
         csel w8,w8,w10, eq
         w2 = w8 | 1
         0x801244c ()             // 0x801244c(0x30, 0x0, 0x1, 0x0)
         w21 = w26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80123a8

    loc_0x08012458: // orphan
         w8 = [x24]               // 0xdf // 223
         if (w19 == w8)
         b.ge 0x80123a8           // likely

    loc_0x08012464: // orphan
         x2 = [sp]                // 0x4 // 4
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = w19 + 1
         0x8012474 ()             // 0x8012474(0x0, 0x0, 0x0, 0x0)
         w8 = [var_10h]           // 0x4 // 4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x10
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 >> 0xe
         w11 = w8 >> 0x18
         ubfx w8,w8,0x1d, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w10 & 0x1fe0
         w11 = w11 & 0x18
         if (w8 == 1)
         w10 = w10 | w11
         ccmp x9,8,0, eq
         bfi w10,w8,1, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w10 | 0x2000
         csel w8,w8,w10, eq
         w2 = w8 | 1
         0x80124b8 ()             // 0x80124b8(0x10, 0x0, 0x1, 0x0)
         w19 = w26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80123a8

}

/* ===== 0x0801298c ===== */
int sym.clear_hwbp_regs_on_cpu (int esi, int edx) {
    loc_0x801298c:
        hint 0x19
        sp = sp - 0x80
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        [var_30h] = x27
        [sp, 0x40] = (x26,2)
        [sp, 0x50] = (x24,2)
        [sp, 0x60] = (x22,2)
        [sp, 0x70] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8012000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        x8 = [x9]     // 0xd0 // 208
        if !x8 jmp 0x8012b20 // unlikely
            
    loc_0x8012b20:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8012b5c // likely
            
    loc_0x8012b5c:
        0x8012b5c ()  // sym.read_wb_reg // 0x8012b5c(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x8012b60:
        bti c
        w8 = w1 + w0  // arg2
        if (w8 == 0x3f)
        b.hi 0x8012e88 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080129f0: // orphan
             // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x8012ac0
             w19 = w19 + 1

    loc_0x080129f4: // orphan
         // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x8012b1c
         x24 = x24 - 1
         x21 = x21 + x25
         b.eq 0x8012b20           // unlikely

    loc_0x08012a00: // orphan
         // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x80129ec
         [sp, 8] = (xzr,2)
         [sp] = xzr
         if !x21 jmp 0x80129f4    // likely

    loc_0x08012a0c: // orphan
         x8 = [x21 + 0x18]        // 0xdc // 220
         if !x8 jmp 0x80129f4     // likely

    loc_0x08012a14: // orphan
         x8 = [x21]               // 0xdc // 220
         if !x8 jmp 0x80129f4     // likely

    loc_0x08012a1c: // orphan
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8012a24 ()             // 0x8012a24(0x0, 0x178000, 0x0, 0x0)
         if w0 jmp 0x80129f4      // unlikely

    loc_0x08012a2c: // orphan
         w8 = [var_10h]           // 0x4 // 4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = (byte) [var_13h]   // 0x4 // 4
         w11 = w8 >> 0xe
         w12 = w8 >> 0x18
         ubfx w8,w8,0x1d, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w11 & 0x1fe0
         w12 = w12 & 0x18
         if (w8 == 1)
         w11 = w11 | w12
         ccmp x9,8,0, eq
         bfi w11,w8,1, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w11 | 0x2000
         csel w22,w8,w11, eq
         if ((w10 & 0x18) == 0)
         b.eq 0x8012ac4           // unlikely

    loc_0x08012a6c: // orphan
         w8 = [x27]               // 0xe2 // 226
         if (w19 == w8)
         b.ge 0x80129f4           // likely

    loc_0x08012a78: // orphan
         w0 = 0x20
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8012a80 ()             // 0x8012a80(0x20, 0x0, 0x0, 0x0)
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x30                // '0'
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8012a90 ()             // 0x8012a90(0x30, 0x0, 0x0, 0x0)
         tbz w0,0,0x80129f0       // likely

    loc_0x08012a98: // orphan
         x8 = [sp]                // 0x4
         if (x8 == x23)
         b.ne 0x80129f0           // unlikely

    loc_0x08012aa4: // orphan
         w8 = w0 & 0xfffffffe
         if (w22 == w8)
         b.ne 0x80129f0           // unlikely

    loc_0x08012ab0: // orphan
         w0 = 0x30                // '0'
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8012abc ()             // 0x8012abc(0x30, 0x0, 0x0, 0x0)
         jmp 0x80129f0

    loc_0x08012ac4: // orphan
         w8 = [x26]               // 0xe1 // 225
         if (w20 == w8)
         b.ge 0x80129f4           // likely

    loc_0x08012ad0: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8012ad8 ()             // 0x8012ad8(0x0, 0x0, 0x0, 0x0)
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x10
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8012ae8 ()             // 0x8012ae8(0x10, 0x0, 0x0, 0x0)
         tbz w0,0,0x8012b18       // likely

    loc_0x08012af0: // orphan
         x8 = [sp]                // 0x4
         if (x8 == x23)
         b.ne 0x8012b18           // unlikely

    loc_0x08012afc: // orphan
         w8 = w0 & 0xfffffffe
         if (w22 == w8)
         b.ne 0x8012b18           // unlikely

    loc_0x08012b08: // orphan
         w0 = 0x10
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8012b14 ()             // 0x8012b14(0x10, 0x0, 0x0, 0x0)

    loc_0x08012b18: // orphan
         w20 = w20 + 1
         jmp 0x80129f4

}

/* ===== 0x080124c8 ===== */
int sym.hw_breakpoint_parse (int esi, int edx) {
    loc_0x80124c8:
        hint 0x19
        w8 = ~0x15
        if !x0 jmp 0x801262c // likely
            
    loc_0x801262c:
        // CODE XREF from sym.hw_breakpoint_parse @ 0x801256c
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        hint 0x1d
        0x08012634
         // } else {
    loc_0x80124d4:
        if !x1 jmp 0x801262c // likely
        }
        return eax;
    loc_0x80124d8:
        [x1, 8] = (xzr,2) // arg2
        [x1] = xzr    // arg2
        w8 = [x0 + 8] // 0xc7 // 199 // arg1
        w10 = w8 - 1
        if (w10 == 3)
        b.hi 0x8012568 // likely
            
    loc_0x8012568:
        w8 = ~0x15
        jmp 0x801262c
    loc_0x080124f0: // orphan
             x11 = 0x8012000
             w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             x11 = x11 + 0
             w9 = 0x800               // loc.imp.memmove
             x12 = 0x8012510
             w13 = (byte) [x11 + x10] // 0xd1000000d2 // 897648165074
             x12 = x12 + x13,lsl 2    // 0x801290c
                                      // fcn.0801290c
             br x12

}

/* ===== 0x08012638 ===== */
int sym.write_wb_reg (int esi, int edx) {
    loc_0x8012638:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w1 + w0  // arg2
        if (w8 == 0x3f)
        b.hi 0x801297c // unlikely
            
    loc_0x801297c:
        x0 = 0x8012000
        x0 = x0 + 0   // int64_t arg1
        0x8012984 ()  // 0x8012984(0x8012000, 0x0, 0x0, 0x0)
        jmp 0x8012968
         // do {
    loc_0x8012968:
        // CODE XREF from fcn.0801290c @ 0x8012914
        // CODE XREF from sym.write_wb_reg @ 0x8012988
        0x08012968
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x08012978
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08012b60 ===== */
int sym.read_wb_reg (int esi, int edx) {
    loc_0x8012b60:
        bti c
        w8 = w1 + w0  // arg2
        if (w8 == 0x3f)
        b.hi 0x8012e88 // unlikely
            
    loc_0x8012e88:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8012000
        x0 = x0 + 0   // int64_t arg1
        0x8012ea0 ()  // 0x8012ea0(0x8012000, 0x0, 0x0, 0x0)
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x29, 2) = 3  // sp // sp
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x08012eb4
         // } else {
    loc_0x8012b70:
        x9 = 0x8012000
        x9 = x9 + 0
        x10 = 0x8012b78
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x08013028 ===== */
int sym.work_trampoline_breakpoint (int esi, int edx) {
    loc_0x8013028:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        sp = sp - 0x2f0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8013000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        x8 = [x9]     // 0xd0 // 208
        if !x8 jmp 0x801340c // unlikely
            
    loc_0x801340c:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-0x10]
        if (x8 == x9)
        b.ne 0x801344c // likely
            
    loc_0x801344c:
        0x801344c ()  // 0x801344c(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x8013450:
        x0 = 0xda7d   // '}\xda'
        x2 = 0x8013000
        x0 = 0x8c45   // 'E\x8c'
        x2 = x2 + 0
        x0 = 0x7dab   // '\xab}'
        x1 = x23      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_2f0h
        x0 = 0xf10b   // '\v\xf1' // int64_t arg1
        0x801346c ()  // 0x801346c(0xf10b7dab8c45da7d, 0x0, 0x8013000, 0x0)
        jmp 0x801318c
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8013068
    loc_0x801307c:
        x25 = 0x8013000
        w9 = [x25]    // 0xe0 // 224
        if (w9 == 1)
        b.lt 0x801340c // likely
    loc_0x801308c:
        w27 = 0x5030  // '0P'
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x21 = [x0 + 0x10] // 0xc7 // 199 // arg1
        x26 = x8 + 0x20
        w27 = 0x3
        jmp 0x80130b4
         // do {
    loc_0x80130b4:
        // CODE XREF from sym.work_trampoline_breakpoint @ 0x80130a0
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80130bc ()  // 0x80130bc(0x0, 0x0, 0x0, 0x0)
        x23 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x10
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80130cc ()  // 0x80130cc(0x10, 0x0, 0x0, 0x0)
        x24 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x22 = x26     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = x0 & 0xfffffffffffffffe
        w28 = 0x10
        jmp 0x80130f0
         // } while (?);
        }
        return eax;
    loc_0x080130a4: // orphan
             w8 = [x25]               // 0xe0 // 224
             w19 = w19 + 1
             if (w19 == w8)
             b.ge 0x801340c           // likely

    loc_0x080130e4: // orphan
         x28 = x28 - 1
         x22 = x22 + x27
         b.eq 0x80130a4           // unlikely

    loc_0x080130f0: // orphan
         // CODE XREF from sym.work_trampoline_breakpoint @ 0x80130e0
         [sp, 0xd0] = (xzr,2)
         [var_c8h] = xzr
         if !x22 jmp 0x80130e4    // likely

    loc_0x080130fc: // orphan
         x8 = [x22 + 0x18]        // 0xdd // 221
         if !x8 jmp 0x80130e4     // likely

    loc_0x08013104: // orphan
         x8 = [x22]               // 0xdd // 221
         if !x8 jmp 0x80130e4     // likely

    loc_0x0801310c: // orphan
         x1 = var_c8h             // int64_t arg_2f0h
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8013114 ()             // 0x8013114(0x0, 0x1780c8, 0x0, 0x0)
         if w0 jmp 0x80130e4      // unlikely

    loc_0x0801311c: // orphan
         x8 = [var_c8h]           // 0x4
         if (x8 == x23)
         b.ne 0x80130e4           // unlikely

    loc_0x08013128: // orphan
         x8 = [x21 + 0x100]       // 0xdc // 220
         x8 = x8 & 0xfffffffffffffffc
         if (x23 == x8)
         b.ne 0x80130e4           // likely

    loc_0x08013138: // orphan
         tbz w24,0,0x80130e4      // likely

    loc_0x0801313c: // orphan
         w8 = [var_d8h]           // 0x4 // 4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 >> 0xe
         w11 = w8 >> 0x18
         ubfx w8,w8,0x1d, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w10 & 0x1fe0
         w11 = w11 & 0x18
         if (w8 == 1)
         w10 = w10 | w11
         ccmp x9,8,0, eq
         bfi w10,w8,1, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w10 | 0x2000
         csel w8,w8,w10, eq
         if (x20 == x8)
         b.ne 0x80130e4           // unlikely

    loc_0x08013178: // orphan
         x23 = [x22]              // 0xdd // 221
         x8 = 0x8013000
         x8 = x8 + 0
         if (x23 == x8)
         b.ne 0x8013450           // likely

    loc_0x0801318c: // orphan
         // CODE XREF from sym.work_trampoline_breakpoint @ 0x8013470
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_2f0h
         blr x23                  // pstate(0x0, 0x0, 0x0, 0x0)
         x0 = var_e0h             // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x200
         x22 = var_e0h
         0x80131a8 ()             // 0x80131a8(0x1780e0, 0x0, 0x200, 0x0)
         x8 = var_0h_2
         x9 = var_20h_4
         x10 = var_30h_4
         x24 = var_1a0h
         x25 = var_1b0h
         x26 = var_1c0h
         [sp, 0xb8] = (x9,2)
         x27 = var_1d0h
         [x22] = q0
         [var_b0h] = x10
         [x8] = q1
         x8 = var_40h_4
         x28 = var_1e0h
         x23 = var_1f0h
         x1 = var_e0h             // int64_t arg_2f0h
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [var_a8h] = x8
         [x9] = q2
         x9 = var_50h_4
         [var_a0h] = x9
         [x10] = q3
         x10 = var_60h_4
         [var_98h] = x10
         [x8] = q4
         x8 = var_70h_2
         [var_90h] = x8
         [x9] = q5
         x9 = var_80h_2
         [var_88h] = x9
         [x10] = q6
         x10 = var_90h_2
         [var_80h] = x10
         [x8] = q7
         x8 = var_a0h_2
         [var_78h] = x8
         [x9] = q8
         x9 = var_b0h_2
         [var_70h] = x9
         [x10] = q9
         x10 = var_c0h_2
         [var_68h] = x10
         [x8] = q10
         x8 = var_d0h
         [var_60h] = x8
         [x9] = q11
         x9 = var_e0h_2
         [var_58h] = x9
         [x10] = q12
         x10 = var_f0h
         [var_50h] = x10
         [x8] = q13
         x8 = var_100h
         [var_48h] = x8
         [x9] = q14
         x9 = var_110h
         [var_40h] = x9
         [x10] = q15
         x10 = var_120h
         [var_38h] = x10
         [x8] = q16
         x8 = var_130h
         [var_30h] = x8
         [x9] = q17
         x9 = var_140h
         [var_28h] = x9
         [x10] = q18
         x10 = var_150h
         [var_20h] = x10
         [x8] = q19
         x8 = var_160h
         [var_18h] = x8
         [x9] = q20
         x9 = var_170h
         [var_sp_10h] = x9
         [x10] = q21
         x10 = var_180h
         [var_8h] = x10
         [x8] = q22
         x8 = var_190h
         [sp] = x8
         [x9] = q23
         [x10] = q24
         [x8] = q25
         [x24] = q26
         [x25] = q27
         [x26] = q28
         [x27] = q29
         [x28] = q30
         [x23] = q31
         0x8013310 ()             // 0x8013310(0x0, 0x1780e0, 0x200, 0x0)
         q0 = [x22]               // 0xdd // 221
         x8 = [var_c0h]           // 0x4 // 4
         q1 = [x8]                // 0xcf // 207
         x8 = [var_b8h]           // 0x4 // 4
         q2 = [x8]                // 0xcf // 207
         x8 = [var_b0h]           // 0x4 // 4
         q3 = [x8]                // 0xcf // 207
         x8 = [var_a8h]           // 0x4 // 4
         q4 = [x8]                // 0xcf // 207
         x8 = [var_a0h]           // 0x4 // 4
         q5 = [x8]                // 0xcf // 207
         x8 = [var_98h]           // 0x4 // 4
         q6 = [x8]                // 0xcf // 207
         x8 = [var_90h]           // 0x4 // 4
         q7 = [x8]                // 0xcf // 207
         x8 = [var_88h]           // 0x4 // 4
         q8 = [x8]                // 0xcf // 207
         x8 = [var_80h]           // 0x4 // 4
         q9 = [x8]                // 0xcf // 207
         x8 = [var_78h]           // 0x4 // 4
         q10 = [x8]               // 0xcf // 207
         x8 = [var_70h]           // 0x4 // 4
         q11 = [x8]               // 0xcf // 207
         x8 = [var_68h]           // 0x4 // 4
         q12 = [x8]               // 0xcf // 207
         x8 = [var_60h]           // 0x4 // 4
         q13 = [x8]               // 0xcf // 207
         x8 = [var_58h]           // 0x4 // 4
         q14 = [x8]               // 0xcf // 207
         x8 = [var_50h]           // 0x4 // 4
         q15 = [x8]               // 0xcf // 207
         x8 = [var_48h]           // 4
         q16 = [x8]               // 0xcf // 207
         x8 = [var_40h]           // 4
         q17 = [x8]               // 0xcf // 207
         x8 = [var_38h]           // 0x4 // 4
         q18 = [x8]               // 0xcf // 207
         x8 = [var_30h]           // 0x4 // 4
         q19 = [x8]               // 0xcf // 207
         x8 = [var_28h]           // 0x4 // 4
         q20 = [x8]               // 0xcf // 207
         x8 = [var_20h]           // 0x4 // 4
         q21 = [x8]               // 0xcf // 207
         x8 = [var_18h]           // 0x4 // 4
         q22 = [x8]               // 0xcf // 207
         x8 = [var_sp_10h]        // 0x4 // 4
         q23 = [x8]               // 0xcf // 207
         x8 = [var_8h]            // 0x4 // 4
         q24 = [x8]               // 0xcf // 207
         x8 = [sp]                // 0x4 // 4
         q25 = [x8]               // 0xcf // 207
         q26 = [x24]              // 0xdf // 223
         q27 = [x25]              // 0xe0 // 224
         q28 = [x26]              // 0xe1 // 225
         q29 = [x27]              // 0xe2 // 226
         q30 = [x28]              // 0xe3 // 227
         q31 = [x23]              // 0xde // 222
         tbnz w0,0,0x801340c      // unlikely

    loc_0x080133fc: // orphan
         w0 = 0x10
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8013408 ()             // 0x8013408(0x10, 0x0, 0x0, 0x0)

}

/* ===== 0x0801393c ===== */
int sym.emulate_insn (int esi, int edx) {
    loc_0x801393c:
        hint 0x19
        sp = sp - 0x100
        [x18] + 8 = x30
        [sp, 0xa0] = (x29,2)
        x29 = var_a0h
        [sp, 0xb0] = (x28,2)
        [sp, 0xc0] = (x26,2)
        [sp, 0xd0] = (x24,2)
        [sp, 0xe0] = (x22,2)
        [sp, 0xf0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x22 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x1 = var_18h  // int64_t arg2
        [x29 = x8
        [sp, 0x50] = (xzr,2)
        [sp, 0x40] = (xzr,2)
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [sp, 0x10] = (xzr,2)
        [x29, -0x20] = (xzr,2)
        [x29, -0x30] = (xzr,2)
        msr pan,0     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = [x0 + 0x100] // 0xc7 // 199 // arg1
        w21 = [x20]   // 0xdb // 219
        w0 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80139a8 ()  // 0x80139a8(-1, 0x177f18, 0x0, 0x0)
        w8 = [var_1ch] // 0x4 // 4
        if w8 jmp 0x80176cc // unlikely
            
    loc_0x80176cc:
        // CODE XREF from fcn.08013b2c @ 0x80176c0
        bti j
        x0 = 0x8017000
        w3 = w21 & 0xff
        ubfx w4,w21,8, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w5,w21,0x10, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w6 = w21 >> 0x18
        x0 = x0 + 0   // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80176f0 ()  // 0x80176f0(0x8017000, 0x0, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x80175b4
         // do {
    loc_0x80175b4:
        // CODE XREF from fcn.08013b2c @ 0x80176c8
        // CODE XREF from sym.emulate_insn @ 0x80176f8
        msr pan,1     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-0x10]
        if (x8 == x9)
        b.ne 0x8017700 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80139b4
    loc_0x80139c4:
        x9 = 0x8013000
        x24 = x19 + 0x100
        x9 = x9 + 0
        x10 = 0x80139d0
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
         // (break)
    loc_0x080175cc: // orphan
             (x20, 2) = 3
             (x22, 2) = 3
             (x24, 2) = 3
             (x26, 2) = 3
             (x28, 2) = 3
             (x29, 2) = 3
             x30 = [x18 - 8]!         // 0xd9 // 217
             sp = arg_100h
             hint 0x1d
             

    loc_0x08017700: // orphan
         // CODE XREF from sym.emulate_insn @ 0x80175c8
         0x8017700 ()             // sym.emu_hw_load_pair_fp // 0x8017700(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x08013474 ===== */
int sym.work_trampoline_watchpoint (int esi, int edx) {
    loc_0x8013474:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        sp = sp - 0x2e0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8013000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        x8 = [x9]     // 0xd0 // 208
        if !x8 jmp 0x80138d4 // unlikely
            
    loc_0x80138d4:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-0x10]
        if (x8 == x9)
        b.ne 0x8013914 // likely
            
    loc_0x8013914:
        0x8013914 ()  // 0x8013914(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x8013918:
        x0 = 0xda7d   // '}\xda'
        x2 = 0x8013000
        x0 = 0x8c45   // 'E\x8c'
        x2 = x2 + 0
        x0 = 0x7dab   // '\xab}'
        x1 = x23      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_2e0h
        x0 = 0xf10b   // '\v\xf1' // int64_t arg1
        0x8013934 ()  // 0x8013934(0xf10b7dab8c45da7d, 0x0, 0x8013000, 0x0)
        jmp 0x8013658
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80134b4
    loc_0x80134c8:
        x24 = 0x8013000
        w9 = [x24]    // 0xdf // 223
        if (w9 == 1)
        b.lt 0x80138d4 // likely
    loc_0x80134d8:
        (x9, 2) = 3   // arg1
        w27 = 0x5030  // '0P'
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x10 = [x0 + 0x10] // 0xc7 // 199 // arg1
        x26 = x8 + 0x20
        w27 = 0x3
        x11 = x9 << 8
        [var_c0h] = x10
        x10 = var_d0h
        x28 = var_e0h
        x8 = x9 & x11,asr 8
        [var_c8h] = x8
        jmp 0x801351c
         // do {
    loc_0x801351c:
        // CODE XREF from sym.work_trampoline_watchpoint @ 0x8013508
        w0 = 0x20
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8013524 ()  // 0x8013524(0x20, 0x0, 0x0, 0x0)
        x23 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x30     // '0'
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8013534 ()  // 0x8013534(0x30, 0x0, 0x0, 0x0)
        tbz w0,0,0x801350c // likely
         // } while (?);
        }
        return eax;
    loc_0x801353c:
        x21 = x0 & 0xfffffffffffffffe
        x22 = x26     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w20 = 0x10
        jmp 0x801355c
         // do {
    loc_0x801355c:
        // CODE XREF from sym.work_trampoline_watchpoint @ 0x8013548
        [sp, 0xd8] = (xzr,2)
        [var_d0h] = xzr
        if !x22 jmp 0x8013550 // likely
         // } while (?);
        }
        return eax;
    loc_0x8013568:
        x8 = [x22 + 0x18] // 0xdd // 221
        if !x8 jmp 0x8013550 // unlikely
    loc_0x8013550:
        x20 = x20 - 1
        x22 = x22 + x27
        b.eq 0x801350c // unlikely
    loc_0x801350c:
        w8 = [x24]    // 0xdf // 223
        w19 = w19 + 1
        if (w19 == w8)
        b.ge 0x80138d4 // likely
        }
        return eax;
    loc_0x0801354c: // orphan
             // CODE XREF from sym.work_trampoline_watchpoint @ 0x8013640
             if !x8 jmp 0x8013644     // likely

    loc_0x08013570: // orphan
         x8 = [x22]               // 0xdd // 221
         if !x8 jmp 0x8013550     // likely

    loc_0x08013578: // orphan
         x1 = var_d0h             // int64_t arg_2e0h
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8013580 ()             // 0x8013580(0x0, 0x1780d0, 0x0, 0x0)
         if w0 jmp 0x8013550      // unlikely

    loc_0x08013588: // orphan
         x8 = [var_d0h]           // 0x4 // 4
         if (x8 == x23)
         b.ne 0x8013550           // unlikely

    loc_0x08013594: // orphan
         w8 = [var_e0h]           // 0x4 // 4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 >> 0xe
         w11 = w8 >> 0x18
         ubfx w8,w8,0x1d, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w10 & 0x1fe0
         w11 = w11 & 0x18
         if (w8 == 1)
         w10 = w10 | w11
         ccmp x9,8,0, eq
         bfi w10,w8,1, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w10 | 0x2000
         csel w8,w8,w10, eq
         if (x21 == x8)
         b.ne 0x8013550           // unlikely

    loc_0x080135d0: // orphan
         w8 = [var_e0h]           // 0x4 // 4
         if ((w8 & 0x18000000) == 0)
         b.eq 0x8013550           // unlikely

    loc_0x080135dc: // orphan
         w9 = w8 >> 0x1b
         w10 = w8 & loc.imp._printk
         w9 = w9 & 2
         if ((x25 & 0x40) == 0)
         csel w9,w10,w9, eq
         if !w9 jmp 0x8013550     // likely

    loc_0x080135f4: // orphan
         if !x28 jmp 0x8013550    // likely

    loc_0x080135f8: // orphan
         w9 = w8 & 0x7f80000
         if !w9 jmp 0x8013550     // likely

    loc_0x08013600: // orphan
         ubfx w9,w8,0x13, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [var_c8h]          // 0x4 // 4
         rbit w8,w9
         clz w8,w8
         x8 = x23 + x8
         x8 = x8 - x10
         b.hi 0x801354c           // unlikely

    loc_0x0801361c: // orphan
         clz w8,w9
         w11 = 0x1f
         w8 = w11 - w8
         if (w9 == 0)
         w9 = 0x20
         csel w8,w9,w8, eq
         x8 = x23 + x8
         x8 = x10 - x8
         csel x8,xzr,x8, lo
         jmp 0x801354c

    loc_0x08013644: // orphan
         x23 = [x22]              // 0xdd // 221
         x8 = 0x8013000
         x8 = x8 + 0
         if (x23 == x8)
         b.ne 0x8013918           // likely

    loc_0x08013658: // orphan
         // CODE XREF from sym.work_trampoline_watchpoint @ 0x8013938
         x0 = [var_c0h]           // 0x4 // 4
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_2e0h
         blr x23                  // pstate(-1, 0x0, 0x0, 0x0)
         x0 = var_d0h             // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x200
         x20 = var_d0h
         0x8013674 ()             // 0x8013674(0x1780d0, 0x0, 0x200, 0x0)
         x8 = var_e0h
         x9 = var_20h_4
         x10 = var_30h_4
         x25 = var_190h
         x26 = var_1a0h
         x27 = var_1b0h
         [var_c8h] = x8
         x28 = var_1c0h
         [var_b8h] = x9
         x22 = var_1d0h
         [x20] = q0
         [var_b0h] = x10
         [x8] = q1
         x8 = var_40h_4
         x23 = var_1e0h
         x24 = var_1f0h
         x1 = var_d0h             // int64_t arg_2e0h
         [var_a8h] = x8
         [x9] = q2
         x9 = var_50h_4
         [var_a0h] = x9
         [x10] = q3
         x10 = var_60h_4
         [var_98h] = x10
         [x8] = q4
         x8 = var_70h_2
         [var_90h] = x8
         [x9] = q5
         x9 = var_80h_2
         [var_88h] = x9
         [x10] = q6
         x10 = var_90h_2
         [var_80h] = x10
         [x8] = q7
         x8 = var_a0h_2
         [var_78h] = x8
         [x9] = q8
         x9 = var_b0h_2
         [var_70h] = x9
         [x10] = q9
         x10 = var_c0h_2
         [var_68h] = x10
         [x8] = q10
         x8 = var_d0h_2
         [var_60h] = x8
         [x9] = q11
         x9 = var_e0h_2
         [var_58h] = x9
         [x10] = q12
         x10 = var_f0h
         [var_50h] = x10
         [x8] = q13
         x8 = var_100h
         [var_48h] = x8
         [x9] = q14
         x9 = var_110h
         [var_40h] = x9
         [x10] = q15
         x10 = var_120h
         [var_38h] = x10
         [x8] = q16
         x8 = var_130h
         [var_30h] = x8
         [x9] = q17
         x9 = var_140h
         [var_28h] = x9
         [x10] = q18
         x10 = var_150h
         [var_20h] = x10
         [x8] = q19
         x8 = var_160h
         [var_18h] = x8
         [x9] = q20
         x9 = var_170h
         [var_sp_10h] = x9
         [x10] = q21
         x10 = var_180h
         [var_8h] = x10
         [x8] = q22
         [x9] = q23
         [x10] = q24
         [x25] = q25
         [x26] = q26
         [x27] = q27
         [x28] = q28
         [x22] = q29
         [x23] = q30
         [x24] = q31
         x0 = [var_c0h]           // 0x4 // 4 // int64_t arg1
         0x80137dc ()             // 0x80137dc(-1, 0x1780d0, 0x200, 0x0)
         q0 = [x20]               // 0xdb // 219
         x8 = [var_c8h]           // 0x4 // 4
         q1 = [x8]                // 0xcf // 207
         x8 = [var_b8h]           // 0x4 // 4
         q2 = [x8]                // 0xcf // 207
         x8 = [var_b0h]           // 0x4 // 4
         q3 = [x8]                // 0xcf // 207
         x8 = [var_a8h]           // 0x4 // 4
         q4 = [x8]                // 0xcf // 207
         x8 = [var_a0h]           // 0x4 // 4
         q5 = [x8]                // 0xcf // 207
         x8 = [var_98h]           // 0x4 // 4
         q6 = [x8]                // 0xcf // 207
         x8 = [var_90h]           // 0x4 // 4
         q7 = [x8]                // 0xcf // 207
         x8 = [var_88h]           // 0x4 // 4
         q8 = [x8]                // 0xcf // 207
         x8 = [var_80h]           // 0x4 // 4
         q9 = [x8]                // 0xcf // 207
         x8 = [var_78h]           // 0x4 // 4
         q10 = [x8]               // 0xcf // 207
         x8 = [var_70h]           // 0x4 // 4
         q11 = [x8]               // 0xcf // 207
         x8 = [var_68h]           // 0x4 // 4
         q12 = [x8]               // 0xcf // 207
         x8 = [var_60h]           // 0x4 // 4
         q13 = [x8]               // 0xcf // 207
         x8 = [var_58h]           // 0x4 // 4
         q14 = [x8]               // 0xcf // 207
         x8 = [var_50h]           // 0x4 // 4
         q15 = [x8]               // 0xcf // 207
         x8 = [var_48h]           // 4
         q16 = [x8]               // 0xcf // 207
         x8 = [var_40h]           // 4
         q17 = [x8]               // 0xcf // 207
         x8 = [var_38h]           // 0x4 // 4
         q18 = [x8]               // 0xcf // 207
         x8 = [var_30h]           // 0x4 // 4
         q19 = [x8]               // 0xcf // 207
         x8 = [var_28h]           // 0x4 // 4
         q20 = [x8]               // 0xcf // 207
         x8 = [var_20h]           // 0x4 // 4
         q21 = [x8]               // 0xcf // 207
         x8 = [var_18h]           // 0x4 // 4
         q22 = [x8]               // 0xcf // 207
         x8 = [var_sp_10h]        // 0x4 // 4
         q23 = [x8]               // 0xcf // 207
         x8 = [var_8h]            // 0x4 // 4
         q24 = [x8]               // 0xcf // 207
         q25 = [x25]              // 0xe0 // 224
         q26 = [x26]              // 0xe1 // 225
         q27 = [x27]              // 0xe2 // 226
         q28 = [x28]              // 0xe3 // 227
         q29 = [x22]              // 0xdd // 221
         q30 = [x23]              // 0xde // 222
         q31 = [x24]              // 0xdf // 223
         tbnz w0,0,0x80138d4      // likely

    loc_0x080138c4: // orphan
         w0 = 0x30                // '0'
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80138d0 ()             // 0x80138d0(0x30, 0x0, 0x0, 0x0)

}

/* ===== 0x08017c18 ===== */
int sym.emu_simulate_fp_simd_insn (int esi, int edx) {
    loc_0x8017c18:
        hint 0x19
        sp = sp - 0x90
        [x18] + 8 = x30
        [sp, 0x30] = (x29,2)
        x29 = var_30h
        [sp, 0x40] = (x28,2)
        [sp, 0x50] = (x26,2)
        [sp, 0x60] = (x24,2)
        [sp, 0x70] = (x22,2)
        [sp, 0x80] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        w10 = [x2 + 0x20] // 0xc9 // 201 // arg3
        w8 = w10 - 1
        if (w8 == 0x1f)
        b.hi 0x8019dac // likely
            
    loc_0x8019dac:
        // XREFS(29)
        bti j
        w0 = 0x1
        jmp 0x8020c54
         // do {
    loc_0x8020c54:
        // XREFS(37)
        bti j
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x802220c // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08020c6c: // orphan
             (x20, 2) = 3
             (x22, 2) = 3
             (x24, 2) = 3
             (x26, 2) = 3
             (x28, 2) = 3
             (x29, 2) = 3
             x30 = [x18 - 8]!         // 0xd9 // 217
             sp = arg_90h
             hint 0x1d
             

    loc_0x0802220c: // orphan
         0x802220c ()             // sym.emu_simd_extract_lane_hw // 0x802220c(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x080177b8 ===== */
int sym.emu_hw_store_pair_fp (int esi, int edx) {
    loc_0x80177b8:
        hint 0x19
        if (w1 == 4)  // arg2
        b.ne 0x80177d8 // likely
            
    loc_0x80177d8:
        // CODE XREFS from sym.emu_hw_store_pair_fp @ 0x80177c0, 0x80177c4
        if (w1 == 4)  // arg2
        b.ne 0x80177f0 // likely
            
    loc_0x80177f0:
        // CODE XREF from sym.emu_hw_store_pair_fp @ 0x80177dc
        if (w1 == 8)  // arg2
        b.ne 0x801780c // likely
            
    loc_0x801780c:
        // CODE XREFS from sym.emu_hw_store_pair_fp @ 0x80177f4, 0x80177f8
        if (w1 == 8)  // arg2
        b.ne 0x8017824 // likely
            
    loc_0x8017824:
        // CODE XREF from sym.emu_hw_store_pair_fp @ 0x8017810
        if (w1 == 0x10) // arg2
        b.ne 0x8017840 // likely
            
    loc_0x8017840:
        // CODE XREFS from sym.emu_hw_store_pair_fp @ 0x8017828, 0x801782c
        if (w1 == 0x10) // arg2
        b.ne 0x8017860 // likely
            
    loc_0x8017860:
        // CODE XREF from sym.emu_hw_store_pair_fp @ 0x8017844
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        hint 0x1d
        0x08017868
         // } else {
    loc_0x8017848:
        q0 = [x3]     // 0xca // 202 // arg4
        q1 = [x4]     // 0xcb // 203 // arg5
        [x0] = (q0,2) // arg1
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x80177c4
    loc_0x80177c8:
        q0 = [x3]     // 0xca // 202 // arg4
        q1 = [x4]     // 0xcb // 203 // arg5
        stnp s0,s1,[x0] // arg1
        jmp 0x8017854
         // do {
    loc_0x8017854:
        // CODE XREFS from sym.emu_hw_store_pair_fp @ 0x80177d4, 0x80177ec, 0x8017808, 0x8017820, 0x801783c
        w0 = 0x1
        hint 0x1d
        0x0801785c
         // } while (?);
        }
        return eax;
    loc_0x080177fc: // orphan
             q0 = [x3]                // 0xca // 202 // arg4
             q1 = [x4]                // 0xcb // 203 // arg5
             stnp d0,d1,[x0]          // arg1
             jmp 0x8017854

    loc_0x08017830: // orphan
         q0 = [x3]                // 0xca // 202 // arg4
         q1 = [x4]                // 0xcb // 203 // arg5
         stnp q0,q1,[x0]          // arg1
         jmp 0x8017854

}

/* ===== 0x08017704 ===== */
int sym.emu_hw_load_pair_fp (int esi, int edx) {
    loc_0x8017704:
        hint 0x19
        if (w1 == 4)  // arg2
        b.ne 0x8017724 // likely
            
    loc_0x8017724:
        // CODE XREFS from sym.emu_hw_load_pair_fp @ 0x801770c, 0x8017710
        if (w1 == 4)  // arg2
        b.ne 0x801773c // likely
            
    loc_0x801773c:
        // CODE XREF from sym.emu_hw_load_pair_fp @ 0x8017728
        if (w1 == 8)  // arg2
        b.ne 0x8017758 // likely
            
    loc_0x8017758:
        // CODE XREFS from sym.emu_hw_load_pair_fp @ 0x8017740, 0x8017744
        if (w1 == 8)  // arg2
        b.ne 0x8017770 // likely
            
    loc_0x8017770:
        // CODE XREF from sym.emu_hw_load_pair_fp @ 0x801775c
        if (w1 == 0x10) // arg2
        b.ne 0x801778c // likely
            
    loc_0x801778c:
        // CODE XREFS from sym.emu_hw_load_pair_fp @ 0x8017774, 0x8017778
        if (w1 == 0x10) // arg2
        b.ne 0x80177ac // likely
            
    loc_0x80177ac:
        // CODE XREF from sym.emu_hw_load_pair_fp @ 0x8017790
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        hint 0x1d
        0x080177b4
         // } else {
    loc_0x8017794:
        (q0, 2) = 3   // arg1
        [x3] = q0     // arg4
        [x4] = q1     // arg5
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x8017710
    loc_0x8017714:
        ldnp s0,s1,[x0] // arg1
        [x3] = q0     // arg4
        [x4] = q1     // arg5
        jmp 0x80177a0
         // do {
    loc_0x80177a0:
        // CODE XREFS from sym.emu_hw_load_pair_fp @ 0x8017720, 0x8017738, 0x8017754, 0x801776c, 0x8017788
        w0 = 0x1
        hint 0x1d
        0x080177a8
         // } while (?);
        }
        return eax;
    loc_0x08017748: // orphan
             ldnp d0,d1,[x0]          // arg1
             [x3] = q0                // arg4
             [x4] = q1                // arg5
             jmp 0x80177a0

    loc_0x0801777c: // orphan
         ldnp q0,q1,[x0]          // arg1
         [x3] = q0                // arg4
         [x4] = q1                // arg5
         jmp 0x80177a0

}

/* ===== 0x0801786c ===== */
int sym.emu_hw_store_pair_gpr (int esi, int edx) {
    loc_0x801786c:
        hint 0x19
        if (w1 == 4)  // arg2
        b.ne 0x8017884 // likely
            
    loc_0x8017884:
        // CODE XREFS from sym.emu_hw_store_pair_gpr @ 0x8017874, 0x8017878
        if (w1 == 4)  // arg2
        b.ne 0x8017894 // likely
            
    loc_0x8017894:
        // CODE XREF from sym.emu_hw_store_pair_gpr @ 0x8017888
        if (w1 == 8)  // arg2
        b.ne 0x80178a8 // likely
            
    loc_0x80178a8:
        // CODE XREFS from sym.emu_hw_store_pair_gpr @ 0x8017898, 0x801789c
        if (w1 == 8)  // arg2
        b.ne 0x80178c0 // likely
            
    loc_0x80178c0:
        // CODE XREF from sym.emu_hw_store_pair_gpr @ 0x80178ac
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        hint 0x1d
        0x080178c8
         // } else {
    loc_0x80178b0:
        [x0] = (x3,2) // arg5
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x8017878
    loc_0x801787c:
        stnp w3,w4,[x0] // arg5
        jmp 0x80178b4
         // do {
    loc_0x80178b4:
        // CODE XREFS from sym.emu_hw_store_pair_gpr @ 0x8017880, 0x8017890, 0x80178a4
        w0 = 0x1
        hint 0x1d
        0x080178bc
         // } while (?);
        }
        return eax;
    loc_0x080178a0: // orphan
             stnp x3,x4,[x0]          // arg5
             jmp 0x80178b4

}

/* ===== 0x08017958 ===== */
int sym.emu_hw_load_gpr (int esi, int edx) {
    loc_0x8017958:
        hint 0x19
        if (w1 == 1)  // arg2
        w8 = w2 ^ 1   // arg3
        cset w9,ne
        w10 = w9 | w8
        w9 = w4 ^ 1   // arg5
        w11 = w10 | w9
        tbz w3,0,0x8017990 // likely
            
    loc_0x8017990:
        // CODE XREF from sym.emu_hw_load_gpr @ 0x8017974
        tbz w11,0,0x80179b0 // likely
            
    loc_0x80179b0:
        // CODE XREF from sym.emu_hw_load_gpr @ 0x8017990
        x9 = (byte) [x0] // 0xc7 // 199 // arg1
        jmp 0x8017abc
         // do {
    loc_0x8017abc:
        // XREFS: CODE 0x0801798c  CODE 0x080179a4  CODE 0x080179ac
        // XREFS: CODE 0x080179b4  CODE 0x080179bc  CODE 0x080179c4
        // XREFS: CODE 0x080179ec  CODE 0x08017a14  CODE 0x08017a1c
        // XREFS: CODE 0x08017a24  CODE 0x08017a2c  CODE 0x08017a34
        // XREFS: CODE 0x08017a4c  CODE 0x08017a64  CODE 0x08017a78
        // XREFS: CODE 0x08017a8c  CODE 0x08017aa4
        w8 = 0x1
        [x5] = x9     // arg6
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8017978
    loc_0x801797c:
        tbz w10,0,0x80179b8 // likely
            
    loc_0x80179b8:
        // CODE XREF from sym.emu_hw_load_gpr @ 0x801797c
        ldtrsb w9,[x0]
        jmp 0x8017abc
    loc_0x08017980: // orphan
             if (w1 == 1)             // arg2
             b.ne 0x80179c8           // likely

    loc_0x08017988: // orphan
         ldtrb w9,[x0]
         jmp 0x8017abc

    loc_0x08017998: // orphan
         if (w1 == 1)             // arg2
         b.ne 0x80179f0           // likely

    loc_0x080179a0: // orphan
         w9 = (byte) [x0]         // 0xc7 // 199 // arg1
         jmp 0x8017abc

    loc_0x080179a8: // orphan
         // CODE XREF from sym.emu_hw_load_gpr @ 0x8017978
         ldtrsb x9,[x0]
         jmp 0x8017abc

    loc_0x080179c0: // orphan
         // CODE XREF from sym.emu_hw_load_gpr @ 0x8017994
         w9 = (byte) [x0]         // 0xc7 // 199 // arg1
         jmp 0x8017abc

    loc_0x080179c8: // orphan
         // CODE XREF from sym.emu_hw_load_gpr @ 0x8017984
         if (w1 == 2)             // arg2
         cset w10,ne
         w8 = w10 | w8
         w9 = w8 | w9
         tbz w9,0,0x8017a18       // unlikely

    loc_0x080179dc: // orphan
         tbz w8,0,0x8017a28       // likely

    loc_0x080179e0: // orphan
         if (w1 == 2)             // arg2
         b.ne 0x8017a38           // likely

    loc_0x080179e8: // orphan
         ldtrh w9,[x0]
         jmp 0x8017abc

    loc_0x080179f0: // orphan
         // CODE XREF from sym.emu_hw_load_gpr @ 0x801799c
         if (w1 == 2)             // arg2
         cset w10,ne
         w8 = w10 | w8
         w9 = w8 | w9
         tbz w9,0,0x8017a20       // unlikely

    loc_0x08017a04: // orphan
         tbz w8,0,0x8017a30       // likely

    loc_0x08017a08: // orphan
         if (w1 == 2)             // arg2
         b.ne 0x8017a50           // likely

    loc_0x08017a10: // orphan
         w9 = (word) [x0]         // 0xc7 // 199 // arg1
         jmp 0x8017abc

    loc_0x08017a18: // orphan
         // CODE XREF from sym.emu_hw_load_gpr @ 0x80179d8
         ldtrsh x9,[x0]
         jmp 0x8017abc

    loc_0x08017a20: // orphan
         // CODE XREF from sym.emu_hw_load_gpr @ 0x8017a00
         ldrsh x9,[x0]            // 0xc7 // 199 // arg1
         jmp 0x8017abc

    loc_0x08017a28: // orphan
         // CODE XREF from sym.emu_hw_load_gpr @ 0x80179dc
         ldtrsh w9,[x0]
         jmp 0x8017abc

    loc_0x08017a30: // orphan
         // CODE XREF from sym.emu_hw_load_gpr @ 0x8017a04
         ldrsh w9,[x0]            // 0xc7 // 199 // arg1
         jmp 0x8017abc

    loc_0x08017a38: // orphan
         // CODE XREF from sym.emu_hw_load_gpr @ 0x80179e4
         if (w1 == 4)             // arg2
         b.ne 0x8017a68           // likely

    loc_0x08017a40: // orphan
         tbz w2,0,0x8017a68       // likely

    loc_0x08017a44: // orphan
         tbz w4,0,0x8017a68       // likely

    loc_0x08017a48: // orphan
         ldtrsw x9,[x0]
         jmp 0x8017abc

    loc_0x08017a50: // orphan
         // CODE XREF from sym.emu_hw_load_gpr @ 0x8017a0c
         if (w1 == 4)             // arg2
         b.ne 0x8017a7c           // likely

    loc_0x08017a58: // orphan
         tbz w2,0,0x8017a7c       // likely

    loc_0x08017a5c: // orphan
         tbz w4,0,0x8017a7c       // likely

    loc_0x08017a60: // orphan
         x9 = [x0]                // 0xc7 // 199 // arg1
         jmp 0x8017abc

    loc_0x08017a68: // orphan
         // CODE XREFS from sym.emu_hw_load_gpr @ 0x8017a3c, 0x8017a40, 0x8017a44
         if (w1 == 4)             // arg2
         b.ne 0x8017a90           // likely

    loc_0x08017a70: // orphan
         tbnz w2,0,0x8017a90      // unlikely

    loc_0x08017a74: // orphan
         ldtr w9,[x0]
         jmp 0x8017abc

    loc_0x08017a7c: // orphan
         // CODE XREFS from sym.emu_hw_load_gpr @ 0x8017a54, 0x8017a58, 0x8017a5c
         if (w1 == 4)             // arg2
         b.ne 0x8017aa8           // likely

    loc_0x08017a84: // orphan
         tbnz w2,0,0x8017aa8      // unlikely

    loc_0x08017a88: // orphan
         w9 = [x0]                // 0xc7 // 199 // arg1
         jmp 0x8017abc

    loc_0x08017a90: // orphan
         // CODE XREFS from sym.emu_hw_load_gpr @ 0x8017a6c, 0x8017a70
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w1 == 8)             // arg2
         b.ne 0x8017ac4           // likely

    loc_0x08017a9c: // orphan
         tbnz w2,0,0x8017ac4      // unlikely

    loc_0x08017aa0: // orphan
         ldtr x9,[x0]
         jmp 0x8017abc

    loc_0x08017aa8: // orphan
         // CODE XREFS from sym.emu_hw_load_gpr @ 0x8017a80, 0x8017a84
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w1 == 8)             // arg2
         b.ne 0x8017ac4           // likely

    loc_0x08017ab4: // orphan
         tbnz w2,0,0x8017ac4      // unlikely

    loc_0x08017ab8: // orphan
         x9 = [x0]                // 0xc7 // 199 // arg1

    loc_0x08017ac4: // orphan
         // CODE XREFS from sym.emu_hw_load_gpr @ 0x8017a98, 0x8017a9c, 0x8017ab0, 0x8017ab4
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         hint 0x1d
         

}

/* ===== 0x08017ad0 ===== */
int sym.emu_hw_store_fp (int esi, int edx) {
    loc_0x8017ad0:
        hint 0x19
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w1 - 1   // arg2
        if (w9 == 0xf)
        b.hi 0x8017b50 // likely
            
    loc_0x8017b50:
        // CODE XREF from sym.emu_hw_store_fp @ 0x8017ae4
        bti j
        hint 0x1d
        0x08017b58
         // } else {
    loc_0x8017ae8:
        x10 = 0x8017000
        x10 = x10 + 0
        x11 = 0x8017af0
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
        }
        return eax;
}

/* ===== 0x080178cc ===== */
int sym.emu_hw_load_fp (int esi, int edx) {
    loc_0x80178cc:
        hint 0x19
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w1 - 1   // arg2
        if (w9 == 0xf)
        b.hi 0x801794c // likely
            
    loc_0x801794c:
        // CODE XREF from sym.emu_hw_load_fp @ 0x80178e0
        bti j
        hint 0x1d
        0x08017954
         // } else {
    loc_0x80178e4:
        x10 = 0x8017000
        x10 = x10 + 0
        x11 = 0x80178ec
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
        }
        return eax;
}

/* ===== 0x08017b5c ===== */
int sym.emu_hw_store_gpr (int esi, int edx) {
    loc_0x8017b5c:
        hint 0x19
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w1 - 1   // arg2
        if (w9 == 7)
        tbz w2,0,0x8017b9c // likely
            
    loc_0x8017b9c:
        // CODE XREF from sym.emu_hw_store_gpr @ 0x8017b70
        b.hi 0x8017c0c // unlikely
            
    loc_0x8017c0c:
        // CODE XREFS from sym.emu_hw_store_gpr @ 0x8017b74, 0x8017b9c
        bti j
        hint 0x1d
        0x08017c14
         // } else {
    loc_0x8017ba0:
        x10 = 0x8017000
        x10 = x10 + 0
        x11 = 0x8017ba8
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // } else {
        }
        return eax;
        goto loc_0x8017b74
    loc_0x8017b78:
        x10 = 0x8017000
        x10 = x10 + 0
        x11 = 0x8017b80
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // (break)
}

/* ===== 0x080222b4 ===== */
int sym.emu_simd_write_scalar_hw (int esi, int edx) {
    loc_0x80222b4:
        hint 0x19
        w8 = w2 - 8   // arg3
        ror w8,w8,3
        if (w8 == 2)
        b.lo 0x80222d8 // unlikely
            
    loc_0x80222d8:
        s0 = w1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x0] = q0     // arg1
        jmp 0x80222ec
         // do {
    loc_0x80222ec:
        // CODE XREF from sym.emu_simd_write_scalar_hw @ 0x80222e0
        w0 = 0x1
        hint 0x1d
        0x080222f4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80222c8
    loc_0x80222d0:
        if (w8 == 3)
        b.ne 0x80222f8 // likely
            
    loc_0x80222f8:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        hint 0x1d
        0x08022300
         // } else {
        }
        return eax;
    loc_0x080222e4: // orphan
             d0 = x1                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
             [x0] = q0                // arg1

}

/* ===== 0x0802399c ===== */
int sym.emu_fp16_scalar_2source_hw (int esi, int edx) {
    loc_0x802399c:
        hint 0x19
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 - 1
        if (w8 == 9)
        b.hi 0x8023aa4 // likely
            
    loc_0x8023aa4:
        bti j
        hint 0x1d
        0x08023aac
         // } else {
    loc_0x80239b4:
        x9 = 0x8023000
        x9 = x9 + 0   // "6"
        x10 = 0x80239bc
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x08023ab0 ===== */
int sym.emu_fp16_scalar_1source_hw (int esi, int edx) {
    loc_0x8023ab0:
        hint 0x19
        w8 = w0 - 0xb // arg1
        if (w8 == 4)
        b.hi 0x8023b44 // likely
            
    loc_0x8023b44:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        hint 0x1d
        0x08023b4c
         // } else {
    loc_0x8023ac0:
        x9 = 0x8023000
        x9 = x9 + 0   // "6"
        x10 = 0x8023ac8
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x08023c18 ===== */
int sym.emu_fp16_scalar_3source_hw (int esi, int edx) {
    loc_0x8023c18:
        hint 0x19
        w8 = w0 - 0x14 // arg1
        if (w8 == 3)
        b.hi 0x8023c5c // likely
            
    loc_0x8023c5c:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        hint 0x1d
        0x08023c64
         // } else {
    loc_0x8023c28:
        x9 = 0x8023000
        x9 = x9 + 0   // "6"
        x10 = 0x8023c30
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x080236f4 ===== */
int sym.emu_simd_ext_hw (int esi, int edx) {
    loc_0x80236f4:
        hint 0x19
        if (w3 == 0x40) // arg4
        b.ne 0x802373c // likely
            
    loc_0x802373c:
        if (w4 == 0xf) // arg5
        b.hi 0x8023778 // unlikely
            
    loc_0x8023778:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        hint 0x1d
        0x08023780
         // } else {
    loc_0x8023744:
        x9 = 0x8023000
        w8 = w4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg5
        x9 = x9 + 0   // "6"
        x10 = 0x8023750
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
         // } else {
        }
        return eax;
        goto loc_0x8023700
    loc_0x8023708:
        x9 = 0x8023000
        w8 = w4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg5
        x9 = x9 + 0   // "6"
        x10 = 0x8023714
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
         // (break)
}

/* ===== 0x08023234 ===== */
int sym.emu_simd_vector_3same_extra_hw (int esi, int edx) {
    loc_0x8023234:
        hint 0x19
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 - 0x7e
        if (w8 == 0xb)
        b.hi 0x80236e8 // likely
            
    loc_0x80236e8:
        bti j
        hint 0x1d
        0x080236f0
         // } else {
    loc_0x802324c:
        x9 = 0x8023000
        x9 = x9 + 0   // "6"
        x10 = 0x8023254
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x08022210 ===== */
int sym.emu_simd_extract_lane_hw (int esi, int edx) {
    loc_0x8022210:
        hint 0x19
        if !x3 jmp 0x8022290 // likely
            
    loc_0x8022290:
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        jmp 0x80222a4
         // do {
    loc_0x80222a4:
        // CODE XREF from sym.emu_simd_extract_lane_hw @ 0x8022294
        bti j
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        hint 0x1d
        0x080222b0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8022218
    loc_0x802222c:
        x10 = 0x8022000
        x10 = x10 + 0
        x11 = 0x8022234
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // (break)
}

/* ===== 0x0802250c ===== */
int sym.emu_simd_fhm_by_element_hw (int esi, int edx) {
    loc_0x802250c:
        hint 0x19
        sp = sp - 0x30
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = [x9 + 0x5e0] // 0xd0 // 208
        if (w4 == 0x10) // arg5
        [x29 = x9
        [sp] = (xzr,2)
        b.ne 0x80226ac // likely
            
    loc_0x80226ac:
        // CODE XREF from sym.emu_simd_fhm_by_element_hw @ 0x8022638
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x80226d4 // likely
            
    loc_0x80226d4:
        0x80226d4 ()  // sym.emu_simd_fcma_by_element_hw // 0x80226d4(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x80226d8:
        hint 0x19
        sp = sp - 0x30
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h_2
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        [sp] = (xzr,2)
        mrs x8,id_aa64isar1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf0000) == 0)
        b.eq 0x80228c8 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8022540
    loc_0x8022548:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w7 == 7)  // arg8
        mrs x9,id_aa64isar0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        b.hi 0x80226ac // unlikely
    loc_0x8022558:
        x9 = x9 & 0xf000000000000
        if !x9 jmp 0x80226ac // likely
    loc_0x8022560:
        w9 = (word) [x3 + w7,uxtw 1] // 0xaf000000ca // 751619277002 // arg4
        x10 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        s0 = w9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x10] = q0    // sp
        w9 = [var_10h] // [0x178000:4]=0
        // sp
        if (w8 == 0x13)
        b.eq 0x80225b4 // unlikely
            
    loc_0x80225b4:
        if (w6 == 0x80) // arg7
        tbnz w9,1,0x802260c // unlikely
            
    loc_0x802260c:
        b.eq 0x8022690 // unlikely
            
    loc_0x8022690:
        x8 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        q0 = [x1]     // 0xc8 // 200 // arg2
        q1 = [x2]     // 0xc9 // 201 // arg3
        q2 = [x8]     // 0xcf // 207 // sp
        0x080226a0
         // } else {
    loc_0x8022610:
        if (w6 == 0x40)
        b.ne 0x8022634 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802257c
    loc_0x8022584:
        if (w6 == 0x80)
        tbnz w9,1,0x80225e4 // unlikely
            
    loc_0x80225e4:
        b.eq 0x8022674 // unlikely
            
    loc_0x8022674:
        x8 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        q0 = [x1]     // 0xc8 // 200
        q1 = [x2]     // 0xc9 // 201
        q2 = [x8]     // 0xcf // 207 // sp
        0x08022684
         // } else {
    loc_0x80225e8:
        if (w6 == 0x40)
        b.ne 0x8022634 // likely
         // } while (?);
        }
        return eax;
        goto loc_0x802258c
    loc_0x8022590:
        if (w6 == 0x40)
        b.ne 0x8022634 // likely
            
    loc_0x8022634:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x80226ac
    loc_0x08022598: // orphan
             x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             q0 = [x1]                // 0xc8 // 200
             q1 = [x2]                // 0xc9 // 201
             q2 = [x8]                // 0xcf // 207 // sp
             

    loc_0x080225c0: // orphan
         if (w6 == 0x40)
         b.ne 0x8022634           // likely

    loc_0x080225c8: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

    loc_0x080225f0: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

    loc_0x08022618: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

    loc_0x0802263c: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

    loc_0x08022658: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

}

/* ===== 0x080226d8 ===== */
int sym.emu_simd_fcma_by_element_hw (int esi, int edx) {
    loc_0x80226d8:
        hint 0x19
        sp = sp - 0x30
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h_2
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        [sp] = (xzr,2)
        mrs x8,id_aa64isar1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf0000) == 0)
        b.eq 0x80228c8 // unlikely
            
    loc_0x80228c8:
        // CODE XREF from sym.emu_simd_fcma_by_element_hw @ 0x8022720
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x80228cc:
        bti j
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = [x9 + 0x5e0] // 0xd0 // 208
        ldur x10,[x29,-8]
        if (x9 == x10)
        b.ne 0x8022a20 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8022708
    loc_0x8022710:
        mrs x8,id_aa64pfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x8 & 0xf00000
        if (x8 == 0x100)
        b.eq 0x802272c // unlikely
            
    loc_0x802272c:
        w8 = w3 << 1  // arg4
        w8 = w8 - 8
        ror w9,w8,3
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 7)
        b.hi 0x80228cc // likely
    loc_0x8022744:
        x10 = 0x8022000
        x10 = x10 + 0
        x11 = 0x802274c
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // } else {
    loc_0x8022720:
        jmp 0x80228c8
        }
        return eax;
    loc_0x08022724: // orphan
             if (w3 == 0x20)          // arg4
             b.ne 0x80228c8           // likely

    loc_0x080228e4: // orphan
         (x29, 2) = 3
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_30h
         hint 0x1d
         

    loc_0x08022a20: // orphan
         0x8022a20 ()             // sym.emu_simd_fp_by_element_hw // 0x8022a20(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x08022a24 ===== */
int sym.emu_simd_fp_by_element_hw (int esi, int edx) {
    loc_0x8022a24:
        hint 0x19
        sp = sp - 0x30
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h_3
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = [x9 + 0x5e0] // 0xd0 // 208
        if (w5 == w4) // arg6
        [x29 = x9
        [sp] = (xzr,2)
        b.ne 0x8022ae0 // unlikely
            
    loc_0x8022ae0:
        if (w5 == 0x40) // arg6
        b.ne 0x8022b1c // likely
            
    loc_0x8022b1c:
        w9 = w4 - 8   // arg5
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        ror w9,w9,3
        if (w9 == 7)
        b.hi 0x80230dc // likely
            
    loc_0x80230dc:
        // CODE XREFS from sym.emu_simd_fp_by_element_hw @ 0x8022b10, 0x8022b18
        bti j
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8023108 // likely
            
    loc_0x8023108:
        0x8023108 ()  // sym.emu_simd_scalar_rdm_hw // 0x8023108(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x802310c:
        hint 0x19
        mrs x8,id_aa64isar0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf0000000) == 0)
        b.eq 0x80231b8 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8022a54
    loc_0x8022a64:
        if (w9 == 7)
        b.eq 0x8022b64 // unlikely
            
    loc_0x8022b64:
        x9 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        d0 = x3       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        [x9] = q0     // sp
        if (w5 == 0x40) // arg6
        b.ne 0x8022a88 // likely
            
    loc_0x8022a88:
        if (w5 == 0x20) // arg6
        b.eq 0x8022bbc // unlikely
            
    loc_0x8022bbc:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 - 1
        if (w8 == 0x10)
        b.hi 0x80230dc // likely
    loc_0x8022bcc:
        x9 = 0x8022000
        x9 = x9 + 0
        x10 = 0x8022bd4
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
         // } else {
    loc_0x8022a90:
        if (w5 == 0x10) // arg6
        b.ne 0x8022b14 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8022a6c
    loc_0x8022a74:
        x9 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        s0 = w3       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        [x9] = q0     // sp
        if (w5 == 0x40) // arg6
        b.eq 0x8022b78 // unlikely
        }
        return eax;
    loc_0x08022a98: // orphan
             w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             w8 = w8 - 1
             if (w8 == 0x10)
             b.hi 0x80230dc           // likely

    loc_0x08022aa8: // orphan
         x9 = 0x8022000
         x9 = x9 + 0
         x10 = 0x8022ab0
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

    loc_0x08022af0: // orphan
         if (w4 == 0x10)          // arg5
         b.eq 0x8022c50           // unlikely

    loc_0x08022af8: // orphan
         if (w4 == 8)             // arg5
         b.ne 0x8022b14           // likely

    loc_0x08022b00: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         dup v0.8b,w3             // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         [x8] = q0                // sp
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x80230dc

    loc_0x08022b14: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x80230dc

    loc_0x08022b88: // orphan
         x9 = 0x8022000
         x9 = x9 + 0
         x10 = 0x8022b90
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

    loc_0x08022c00: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x9 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         dup v0.2s,w3             // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         [x9] = q0                // sp
         w8 = w8 - 1
         if (w8 == 0x10)
         b.hi 0x80230dc           // likely

    loc_0x08022c1c: // orphan
         x9 = 0x8022000
         x9 = x9 + 0
         x10 = 0x8022c24
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

    loc_0x08022c50: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x9 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         dup v0.4h,w3             // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         [x9] = q0                // sp
         w8 = w8 - 1
         if (w8 == 0x10)
         b.hi 0x80230dc           // likely

    loc_0x08022c6c: // orphan
         x9 = 0x8022000
         x9 = x9 + 0
         x10 = 0x8022c74
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

}

/* ===== 0x08022468 ===== */
int sym.emu_simd_extract_signed_lane_hw (int esi, int edx) {
    loc_0x8022468:
        hint 0x19
        if !x4 jmp 0x80224ec // likely
            
    loc_0x80224ec:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        hint 0x1d
        0x080224f4
         // } else {
    loc_0x8022470:
        tbz w3,0,0x802249c // likely
        }
        return eax;
    loc_0x8022474:
        if (w1 == 0x20) // arg2
        b.eq 0x80224d4 // unlikely
            
    loc_0x80224d4:
        if (w2 == 3)  // arg3
        b.hi 0x80224ec // unlikely
    loc_0x80224dc:
        x8 = [x0 + w2,uxtw 2] // 0xaa000000c7 // 730144440519 // arg1
        jmp 0x80224fc
         // do {
    loc_0x80224fc:
        // CODE XREFS from sym.emu_simd_extract_signed_lane_hw @ 0x8022498, 0x80224bc, 0x80224d0, 0x80224e0
        w0 = 0x1
        [x4] = x8     // arg5
        hint 0x1d
        0x08022508
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802247c
    loc_0x8022484:
        if (w1 == 8)  // arg2
        b.ne 0x80224ec // likely
    loc_0x802248c:
        if (w2 == 0xf) // arg3
        b.hi 0x80224ec // unlikely
    loc_0x8022494:
        x8 = (byte) [x0 + w2,uxtw] // 0xaa000000c7 // 730144440519 // arg1
        jmp 0x80224fc
    loc_0x0802249c: // orphan
             if (w1 == 0x10)          // arg2
             b.eq 0x80224c0           // unlikely

    loc_0x080224a4: // orphan
         if (w1 == 8)             // arg2
         b.ne 0x80224ec           // likely

    loc_0x080224ac: // orphan
         if (w2 == 0xf)           // arg3
         b.hi 0x80224ec           // unlikely

    loc_0x080224b4: // orphan
         w8 = (byte) [x0 + w2,uxtw] // 0xaa000000c7 // 730144440519 // arg1
         w8 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80224fc

    loc_0x080224c0: // orphan
         if (w2 == 7)             // arg3
         b.hi 0x80224ec           // unlikely

    loc_0x080224c8: // orphan
         ldrsh w8,[x0,w2, uxtw 1] // 0xaa000000c7 // 730144440519 // arg1
         w8 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80224fc

    loc_0x080224e4: // orphan
         if (w2 == 7)             // arg3
         b.ls 0x80224f8           // likely

    loc_0x080224f8: // orphan
         ldrsh x8,[x0,w2, uxtw 1] // 0xaa000000c7 // 730144440519 // arg1

}

/* ===== 0x08022304 ===== */
int sym.emu_simd_dup_general_hw (int esi, int edx) {
    loc_0x8022304:
        hint 0x19
        if (w3 == 0x40) // arg4
        b.ne 0x8022334 // likely
            
    loc_0x8022334:
        w8 = w2 - 8   // arg3
        ror w9,w8,3
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 7)
        b.hi 0x80223c0 // likely
            
    loc_0x80223c0:
        // CODE XREF from sym.emu_simd_dup_general_hw @ 0x802238c
        bti j
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        hint 0x1d
        0x080223cc
         // } else {
    loc_0x8022348:
        x10 = 0x8022000
        x10 = x10 + 0
        x11 = 0x8022350
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // } else {
        }
        return eax;
        goto loc_0x8022310
    loc_0x8022318:
        if (w2 == 0x10) // arg3
        b.eq 0x802237c // unlikely
            
    loc_0x802237c:
        dup v0.4h,w1  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x0] = q0     // arg1
        jmp 0x80223bc
         // do {
    loc_0x80223bc:
        // CODE XREFS from sym.emu_simd_dup_general_hw @ 0x8022330, 0x8022378, 0x8022384
        w8 = 0x1
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8022320
    loc_0x8022328:
        dup v0.8b,w1  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x0] = q0     // arg1
        jmp 0x80223bc
    loc_0x08022370: // orphan
             dup v0.2s,w1             // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
             [x0] = q0                // arg1
             jmp 0x80223bc

    loc_0x08022388: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x80223c0

}

/* ===== 0x080223d0 ===== */
int sym.emu_simd_insert_general_hw (int esi, int edx) {
    loc_0x80223d0:
        hint 0x19
        w8 = w2 - 8   // arg3
        ror w9,w8,3
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 7)
        b.hi 0x8022458 // likely
            
    loc_0x8022458:
        bti j
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        hint 0x1d
        0x08022464
         // } else {
    loc_0x80223e8:
        x10 = 0x8022000
        x10 = x10 + 0
        x11 = 0x80223f0
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
        }
        return eax;
}

/* ===== 0x0802310c ===== */
int sym.emu_simd_scalar_rdm_hw (int esi, int edx) {
    loc_0x802310c:
        hint 0x19
        mrs x8,id_aa64isar0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf0000000) == 0)
        b.eq 0x80231b8 // unlikely
            
    loc_0x80231b8:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        hint 0x1d
        0x080231c0
         // } else {
    loc_0x802311c:
        if (w0 == 0x7f) // arg1
        b.eq 0x8023140 // unlikely
        }
        return eax;
    loc_0x8023124:
        if (w0 == 0x7e) // arg1
        b.ne 0x80231b8 // likely
    loc_0x802312c:
        w8 = 0x8420   // ' \x84'
        if (w4 == 0x10) // arg5
        w8 = 0x7e42   // 'B~'
        w9 = w8 + 0x400,lsl 12
        jmp 0x8023158
         // do {
    loc_0x8023158:
        // CODE XREF from sym.emu_simd_scalar_rdm_hw @ 0x802313c
        csel w8,w8,w9, eq
        if (w4 == 0x20) // arg5
        b.eq 0x802316c // unlikely
         // } while (?);
        }
        return eax;
    loc_0x8023164:
        if (w4 == 0x10) // arg5
        b.ne 0x80231b8 // likely
    loc_0x802316c:
        w0 = 0x1
        w9 = 0x841f   // '\x1f\x84'
        w9 = 0x7e82   // '\x82~'
        if (w8 == w9)
        jmp ifgt 0x80231c4 // unlikely
            
    loc_0x80231c4:
        w9 = 0x8420   // ' \x84'
        w9 = 0x7e82   // '\x82~'
        if (w8 == w9)
        b.eq 0x8023214 // unlikely
            
    loc_0x8023214:
        q0 = [x1]     // 0xc8 // 200 // arg2
        q1 = [x2]     // 0xc9 // 201 // arg3
        q2 = [x3]     // 0xca // 202 // arg4
        0x08023220
         // } else {
    loc_0x80231d4:
        w9 = 0x8c20   // ' \x8c'
        w9 = 0x7e82   // '\x82~'
        if (w8 == w9)
        b.ne 0x802322c // likely
         // } while (?);
        }
        return eax;
        goto loc_0x8023180
    loc_0x8023190:
        w9 = 0x8c20   // ' \x8c'
        w9 = 0x7e42   // 'B~'
        if (w8 == w9)
        b.ne 0x802322c // likely
            
    loc_0x802322c:
        hint 0x1d
        0x08023230
         // } else {
    loc_0x80231a0:
        q0 = [x1]     // 0xc8 // 200 // arg2
        q1 = [x2]     // 0xc9 // 201 // arg3
        q2 = [x3]     // 0xca // 202 // arg4
        0x080231ac
        }
        return eax;
    loc_0x08023140: // orphan
             w8 = 0x8420              // ' \x84'
             w9 = 0x8c20              // ' \x8c'
             w8 = 0x7e42              // 'B~'
             w9 = 0x7e82              // '\x82~'
             w8 = w8 | 0x800
             if (w4 == 0x10)          // arg5

    loc_0x080231e4: // orphan
         q0 = [x1]                // 0xc8 // 200 // arg2
         q1 = [x2]                // 0xc9 // 201 // arg3
         q2 = [x3]                // 0xca // 202 // arg4
         

    loc_0x080231fc: // orphan
         q0 = [x1]                // 0xc8 // 200 // arg2
         q1 = [x2]                // 0xc9 // 201 // arg3
         q2 = [x3]                // 0xca // 202 // arg4
         

}

/* ===== 0x08023cc4 ===== */
int sym.work_trampoline_finish_task_switch (int esi, int edx) {
    loc_0x8023cc4:
        hint 0x19
        x8 = 0x8023000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8023cfc // unlikely
            
    loc_0x8023cfc:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        hint 0x1d
        0x08023d04
         // } else {
    loc_0x8023cd4:
        x10 = 0x8023000
        x8 = x0 - 0x20 // arg1
        if (x0 == 0)  // arg1
        x10 = x10 + 0 // "6"
        x9 = [x0 + 0xf0] // 0xc7 // 199 // arg1
        csel x8,xzr,x8, eq
        x10 = x10 + 8
        [x0 + 0xf8] = x8 // arg1
        [x8] = x9
        [x0 + 0xf0] = x10 // arg1
        }
        return eax;
}

/* ===== 0x08024234 ===== */
int sym.stop_task_run_monitor (int esi, int edx) {
    loc_0x8024234:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x8 = 0x8024000
        x8 = x8 + 0
        ldar x19,[x8]
        if !x19 jmp 0x8024310 // unlikely
            
    loc_0x8024310:
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x08024328
         // } else {
    loc_0x8024260:
        x20 = 0x8024000
        x21 = 0x8024000
        w22 = ~0
        x23 = 0x8024000
        x20 = x20 + 0
        x21 = x21 + 0
        }
        return eax;
    loc_0x08024278: // orphan
             // CODE XREF from sym.stop_task_run_monitor @ 0x80242a4
             w0 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8024280 ()             // 0x8024280(0x0, 0x0, 0x0, 0x0)
             w8 = [x23]               // 0xde // 222
             if (w0 == w8)
             b.hs 0x80242a8           // likely

    loc_0x08024290: // orphan
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = 0x1
         w22 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80242a0 ()             // 0x80242a0(0x0, 0x0, 0x0, 0x1)
         jmp 0x8024278

    loc_0x080242a8: // orphan
         x20 = 0x8024000
         x20 = x20 + 0
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80242b4 ()             // 0x80242b4(0x8024000, 0x0, 0x0, 0x0)
         x0 = 0x8024000
         x0 = x0 + 0
         0x80242c0 ()             // 0x80242c0(0x8024000, 0x0, 0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80242c8 ()             // 0x80242c8(0x8024000, 0x0, 0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80242d0 ()             // 0x80242d0(0x8024000, 0x0, 0x0, 0x0)
         x21 = 0x8024000
         x21 = x21 + 0
         x0 = x21 + 0x38          // " "
         0x80242e0 ()             // 0x80242e0(0x8024038, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80242e8 ()             // 0x80242e8(0x8024000, 0x0, 0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80242f0 ()             // 0x80242f0(0x8024000, 0x0, 0x0, 0x0)
         w2 = 0x320
         x8 = 0x8024000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x35                // '5'
         [x8] = xzr
         0x802430c ()             // 0x802430c(0x0, 0x0, 0x350320, 0x0)

}

/* ===== 0x08024330 ===== */
int sym.prepare_break_point_handlers (int esi, int edx) {
    loc_0x8024330:
        hint 0x19
        if !x0 jmp 0x8024484 // likely
            
    loc_0x8024484:
        hint 0x1d
        0x08024488
         // } else {
    loc_0x8024338:
        w8 = [x0 + 0x10] // 0xc7 // 199 // arg1
        if (w8 == 1)
        b.lt 0x8024484 // likely
        }
        return eax;
    loc_0x8024344:
        x8 = x0 + 0x6a,lsl 12 // arg1
        x10 = x0 + 0x35,lsl 12 // arg1
        x9 = x8 + 0x80
        x8 = 0x8024000
        x12 = [x0 + 0x38] // 0xc7 // 199 // arg1
        x11 = x10 + 0x50
        x8 = x8 + 0
        if !x12 jmp 0x8024368 // unlikely
            
    loc_0x8024368:
        x10 = x0 + 0x9f,lsl 12 // arg1
        x12 = [x11 + 0x18] // 0xd2 // 210
        x10 = x10 + 0xb0
        if !x12 jmp 0x802437c // unlikely
            
    loc_0x802437c:
        x11 = x0 + 0xd4,lsl 12 // arg1
        x13 = [x9 + 0x18] // 0xd0 // 208
        x12 = x11 + 0xe0
        if !x13 jmp 0x8024390 // unlikely
            
    loc_0x8024390:
        x9 = x0 + 0x109,lsl 12 // arg1
        x13 = [x10 + 0x18] // 0xd1 // 209
        x11 = x9 + 0x110
        if !x13 jmp 0x80243a4 // unlikely
            
    loc_0x80243a4:
        x9 = x0 + 0x13e,lsl 12 // arg1
        x13 = [x12 + 0x18] // 0xd3 // 211
        x10 = x9 + 0x140
        if !x13 jmp 0x80243b8 // unlikely
            
    loc_0x80243b8:
        x9 = x0 + 0x173,lsl 12 // arg1
        x12 = [x11 + 0x18] // 0xd2 // 210
        x9 = x9 + 0x170
        if !x12 jmp 0x80243cc // unlikely
            
    loc_0x80243cc:
        x11 = x0 + 0x1a8,lsl 12 // arg1
        x12 = [x10 + 0x18] // 0xd1 // 209
        x11 = x11 + 0x1a0
        if !x12 jmp 0x80243e0 // unlikely
            
    loc_0x80243e0:
        x10 = x0 + 0x1dd,lsl 12 // arg1
        x12 = [x9 + 0x18] // 0xd0 // 208
        x10 = x10 + 0x1d0
        if !x12 jmp 0x80243f4 // unlikely
            
    loc_0x80243f4:
        x9 = x0 + 0x212,lsl 12 // arg1
        x12 = [x11 + 0x18] // 0xd2 // 210
        x9 = x9 + 0x200
        if !x12 jmp 0x8024408 // unlikely
            
    loc_0x8024408:
        x11 = x0 + 0x247,lsl 12 // arg1
        x12 = [x10 + 0x18] // 0xd1 // 209
        x11 = x11 + 0x230
        if !x12 jmp 0x802441c // unlikely
            
    loc_0x802441c:
        x10 = x0 + 0x27c,lsl 12 // arg1
        x12 = [x9 + 0x18] // 0xd0 // 208
        x10 = x10 + 0x260
        if !x12 jmp 0x8024430 // unlikely
            
    loc_0x8024430:
        x9 = x0 + 0x2b1,lsl 12 // arg1
        x12 = [x11 + 0x18] // 0xd2 // 210
        x9 = x9 + 0x290
        if !x12 jmp 0x8024444 // unlikely
            
    loc_0x8024444:
        x11 = x0 + 0x2e6,lsl 12 // arg1
        x12 = [x10 + 0x18] // 0xd1 // 209
        x11 = x11 + 0x2c0
        if !x12 jmp 0x8024458 // unlikely
            
    loc_0x8024458:
        x10 = x0 + 0x31b,lsl 12 // arg1
        x12 = [x9 + 0x18] // 0xd0 // 208
        x10 = x10 + 0x2f0
        if !x12 jmp 0x802446c // unlikely
            
    loc_0x802446c:
        x9 = [x11 + 0x18] // 0xd2 // 210
        if !x9 jmp 0x8024478 // unlikely
            
    loc_0x8024478:
        x9 = [x10 + 0x18] // 0xd1 // 209
        if !x9 jmp 0x8024484 // unlikely
    loc_0x8024480:
        [x10] = x8
    loc_0x08024364: // orphan
             [x0 + 0x20] = x8         // arg1

    loc_0x08024378: // orphan
         [x11] = x8

    loc_0x0802438c: // orphan
         [x9] = x8

    loc_0x080243a0: // orphan
         [x10] = x8

    loc_0x080243b4: // orphan
         [x12] = x8

    loc_0x080243c8: // orphan
         [x11] = x8

    loc_0x080243dc: // orphan
         [x10] = x8

    loc_0x080243f0: // orphan
         [x9] = x8

    loc_0x08024404: // orphan
         [x11] = x8

    loc_0x08024418: // orphan
         [x10] = x8

    loc_0x0802442c: // orphan
         [x9] = x8

    loc_0x08024440: // orphan
         [x11] = x8

    loc_0x08024454: // orphan
         [x10] = x8

    loc_0x08024468: // orphan
         [x9] = x8

    loc_0x08024474: // orphan
         [x11] = x8

}

/* ===== 0x0802448c ===== */
int sym.start_task_run_monitor (int esi, int edx) {
    loc_0x802448c:
        hint 0x19
        sp = sp - 0xe0
        [x18] + 8 = x30
        [sp, 0x90] = (x29,2)
        x29 = var_90h
        [var_a0h] = x25
        [sp, 0xb0] = (x24,2)
        [sp, 0xc0] = (x22,2)
        [sp, 0xd0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        if !x0 jmp 0x802454c // likely
            
    loc_0x802454c:
        w20 = ~0x15
         // do {
    loc_0x8024550:
        // CODE XREFS from sym.start_task_run_monitor @ 0x8024548, 0x8024710, 0x802474c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8024804 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80244c0
    loc_0x80244d0:
        w10 = 0x5030  // '0P'
        x8 = x19 + 0x20
        w9 = 0x10
        w10 = 0x3
        jmp 0x80244f0
         // do {
    loc_0x80244f0:
        // CODE XREF from sym.start_task_run_monitor @ 0x80244e0
        if !x8 jmp 0x80244e4 // likely
         // } while (?);
        }
        return eax;
    loc_0x80244f4:
        x11 = [x8 + 0x18] // 0xcf // 207
        if !x11 jmp 0x80244e4 // unlikely
    loc_0x80244e4:
        x9 = x9 - 1
        x8 = x8 + x10
        b.eq 0x802454c // unlikely
        }
        return eax;
    loc_0x080244fc: // orphan
             x11 = [x8]               // 0xcf // 207
             if !x11 jmp 0x80244e4    // likely

    loc_0x08024504: // orphan
         x21 = 0x8024000
         x22 = 0x8024000
         x20 = 0x8024000
         x9 = [x21]               // 0xdc // 220
         [x21] = x19
         mrs x8,id_aa64dfr0_el1   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w8,0xc, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 + 1
         [x22] = w8
         mrs x8,id_aa64dfr0_el1   // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w8,0x14, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 + 1
         [x20] = w8
         if !x9 jmp 0x802458c     // likely

    loc_0x0802453c: // orphan
         w9 = [x22]               // 0xdd // 221
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19] = (x9,2)
         jmp 0x8024550

    loc_0x08024564: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = [var_a0h]          // 0x4 // 4
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_e0h
         hint 0x1d
         

    loc_0x0802458c: // orphan
         x23 = 0x8024000
         x8 = [x23]               // 0xde // 222
         if !x8 jmp 0x80245a8     // unlikely

    loc_0x08024598: // orphan
         // CODE XREF from sym.start_task_run_monitor @ 0x80247d8
         x0 = 0x8024000
         x0 = x0 + 0
         blr x8                   // pstate(0x8024000, 0x0, 0x0, 0x0)
         jmp 0x80245e0

    loc_0x080245a8: // orphan
         x8 = 0x8024000
         x0 = var_sp_8h           // int64_t arg1
         x8 = x8 + 0
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 8] = (xzr,2)
         [sp, 0x38] = (x8,2)
         0x80245d4 ()             // 0x80245d4(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x8024750    // likely

    loc_0x080245dc: // orphan
         // CODE XREF from sym.start_task_run_monitor @ 0x8024774
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080245e0: // orphan
         // CODE XREF from sym.start_task_run_monitor @ 0x80245a4
         x24 = 0x8024000
         x8 = [x23]               // 0xde // 222
         [x24] = x0
         if !x8 jmp 0x8024600     // likely

    loc_0x080245f0: // orphan
         // CODE XREF from sym.start_task_run_monitor @ 0x80247ec
         x0 = 0x8024000
         x0 = x0 + 0
         blr x8                   // pstate(0x8024000, 0x0, 0x0, 0x0)
         jmp 0x8024638

    loc_0x08024600: // orphan
         x8 = 0x8024000
         x0 = var_sp_8h           // int64_t arg1
         x8 = x8 + 0
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 8] = (xzr,2)
         [sp, 0x38] = (x8,2)
         0x802462c ()             // 0x802462c(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x8024778    // likely

    loc_0x08024634: // orphan
         // CODE XREF from sym.start_task_run_monitor @ 0x802479c
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08024638: // orphan
         // CODE XREF from sym.start_task_run_monitor @ 0x80245fc
         x25 = 0x8024000
         x8 = [x23]               // 0xde // 222
         [x25] = x0
         if !x8 jmp 0x8024658     // likely

    loc_0x08024648: // orphan
         // CODE XREF from sym.start_task_run_monitor @ 0x8024800
         x0 = 0x8024000
         x0 = x0 + 0
         blr x8                   // pstate(0x8024000, 0x0, 0x0, 0x0)
         jmp 0x8024690

    loc_0x08024658: // orphan
         x8 = 0x8024000
         x0 = var_sp_8h           // int64_t arg1
         x8 = x8 + 0
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 8] = (xzr,2)
         [sp, 0x38] = (x8,2)
         0x8024684 ()             // 0x8024684(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x80247a0    // likely

    loc_0x0802468c: // orphan
         // CODE XREF from sym.start_task_run_monitor @ 0x80247c4
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08024690: // orphan
         // CODE XREF from sym.start_task_run_monitor @ 0x8024654
         x8 = 0x8024000
         x9 = [x24]               // 0xdf // 223
         [x8] = x0
         if !x9 jmp 0x8024708     // likely

    loc_0x080246a0: // orphan
         x8 = [x25]               // 0xe0 // 224
         if !x8 jmp 0x8024708     // likely

    loc_0x080246a8: // orphan
         if !x0 jmp 0x8024708     // likely

    loc_0x080246ac: // orphan
         x0 = 0x8024000
         w8 = [x22]               // 0xdd // 221
         w9 = [x20]               // 0xdb // 219
         x0 = x0 + 0              // int64_t arg1
         [x19] = (x8,2)
         0x80246c0 ()             // 0x80246c0(0x8024000, 0x0, 0x0, 0x0)
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         0x80246cc ()             // 0x80246cc(0x8024000, 0x0, 0x0, 0x0)
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x80246f8      // likely

    loc_0x080246d8: // orphan
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         0x80246e0 ()             // 0x80246e0(0x8024000, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8024714     // unlikely

    loc_0x080246e8: // orphan
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         0x80246f4 ()             // 0x80246f4(0x8024000, 0x0, 0x0, 0x0)

    loc_0x080246f8: // orphan
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         0x8024700 ()             // 0x8024700(0x8024000, 0x0, 0x0, 0x0)
         jmp 0x802470c

    loc_0x08024708: // orphan
         w20 = ~0x1

    loc_0x0802470c: // orphan
         // CODE XREF from sym.start_task_run_monitor @ 0x8024704
         [x21] = xzr
         jmp 0x8024550

    loc_0x08024714: // orphan
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         0x802471c ()             // 0x802471c(0x8024000, 0x0, 0x0, 0x0)
         x0 = 0x8024000
         w1 = 0x1
         x0 = x0 + 0              // int64_t arg1
         0x802472c ()             // 0x802472c(0x8024000, 0x1, 0x0, 0x0)
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x8024550     // unlikely

    loc_0x08024738: // orphan
         x0 = 0x8024000
         w1 = 0x2
         x0 = x0 + 0              // int64_t arg1
         [x21] = xzr
         0x8024748 ()             // 0x8024748(0x8024000, 0x2, 0x0, 0x0)
         jmp 0x8024550

    loc_0x08024750: // orphan
         x8 = [var_30h]           // 0x4 // 4
         x0 = var_sp_8h           // int64_t arg1
         [x23] = x8
         0x802475c ()             // 0x802475c(0x178008, 0x0, 0x0, 0x0)
         x1 = [x23]               // 0xde // 222
         if x1 jmp 0x80247c8      // unlikely

    loc_0x08024768: // orphan
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         0x8024770 ()             // 0x8024770(0x8024000, 0x0, 0x0, 0x0)
         jmp 0x80245dc

    loc_0x08024778: // orphan
         x8 = [var_30h]           // 0x4 // 4
         x0 = var_sp_8h           // int64_t arg1
         [x23] = x8
         0x8024784 ()             // 0x8024784(0x178008, 0x0, 0x0, 0x0)
         x1 = [x23]               // 0xde // 222
         if x1 jmp 0x80247dc      // unlikely

    loc_0x08024790: // orphan
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         0x8024798 ()             // 0x8024798(0x8024000, 0x0, 0x0, 0x0)
         jmp 0x8024634

    loc_0x080247a0: // orphan
         x8 = [var_30h]           // 0x4 // 4
         x0 = var_sp_8h           // int64_t arg1
         [x23] = x8
         0x80247ac ()             // 0x80247ac(0x178008, 0x0, 0x0, 0x0)
         x1 = [x23]               // 0xde // 222
         if x1 jmp 0x80247f0      // unlikely

    loc_0x080247b8: // orphan
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         0x80247c0 ()             // 0x80247c0(0x8024000, 0x0, 0x0, 0x0)
         jmp 0x802468c

    loc_0x080247c8: // orphan
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         0x80247d0 ()             // 0x80247d0(0x8024000, 0x0, 0x0, 0x0)
         x8 = [x23]               // 0xde // 222
         jmp 0x8024598

    loc_0x080247dc: // orphan
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         0x80247e4 ()             // 0x80247e4(0x8024000, 0x0, 0x0, 0x0)
         x8 = [x23]               // 0xde // 222
         jmp 0x80245f0

    loc_0x080247f0: // orphan
         x0 = 0x8024000
         x0 = x0 + 0              // int64_t arg1
         0x80247f8 ()             // 0x80247f8(0x8024000, 0x0, 0x0, 0x0)
         x8 = [x23]               // 0xde // 222
         jmp 0x8024648

    loc_0x08024804: // orphan
         0x8024804 ()             // sym.paradise_hwbp_fill_config // 0x8024804(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x08024a68 ===== */
int sym.sample_hbp_handler_entry (int esi, int edx) {
    loc_0x8024a68:
        hint 0x19
        if !x0 jmp 0x8025894 // likely
            
    loc_0x8025894:
        hint 0x1d
        0x08025898
         // } else {
    loc_0x8024a70:
        if !x1 jmp 0x8025894 // likely
        }
        return eax;
    loc_0x8024a74:
        w9 = [x1 + 0x20] // 0xc8 // 200 // arg2
        if (w9 == 1)
        b.lt 0x8024ac8 // likely
            
    loc_0x8024ac8:
        if (w9 == 0x100)
        b.hi 0x802589c // unlikely
            
    loc_0x802589c:
        brk 0x5512
         // } else {
    loc_0x8024ad0:
        w11 = 0x350
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w10 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x15 = [x0 + 0x100] // 0xc7 // 199 // arg1
        madd x14,x9,x11, x1 // arg2
        w12 = 0x3
        w13 = 0x1
        [x14 + 0x50] = x15
         // } else {
        }
        return eax;
    loc_0x08024a90: // orphan
             if (x8 == 0x35)
             b.eq 0x802589c           // unlikely

    loc_0x08024a98: // orphan
         x12 = x1 + x8            // arg2
         x13 = [x12 + 0x50]       // 0xd3 // 211
         if (x13 == x11)
         b.eq 0x8024ab8           // unlikely

    loc_0x08024aa8: // orphan
         x8 = x8 + 0x350
         if (x10 == x8)
         b.ne 0x8024a90           // likely

    loc_0x08024ab4: // orphan
         jmp 0x8024ac0

    loc_0x08024ab8: // orphan
         x8 = x12 + 0x30
         b.ne 0x8024b40           // likely

    loc_0x08024ac0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024ab4
         if (w9 == 0xff)
         jmp ifgt 0x8025894       // unlikely

    loc_0x08024af0: // orphan
         madd x14,x9,x11, x1      // arg2
         w15 = w10 >> 2
         w10 = w10 + 1
         x14 = x14 + x15
         w15 = w8 & 6
         w8 = w8 + 2
         if (w10 == 0x47)
         w16 = (byte) [x14 + 0x30] // 0xd5 // 213
         w17 = w12 << w15
         w15 = w13 << w15
         bic w16,w16,w17          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w15 = w16 | w15
         [x14 + 0x30] = (byte) w15
         b.ne 0x8024af0           // likely

    loc_0x08024b28: // orphan
         w8 = 0x350
         madd x8,x9,x8, x1        // arg2
         w9 = w9 + 1
         x8 = x8 + 0x30
         [x1 + 0x20] = w9         // arg2
         b.eq 0x8025894           // unlikely

    loc_0x08024b40: // orphan
         x10 = [x8 + 0x18]        // 0xcf // 207
         w9 = (byte) [x8]         // 0xcf // 207
         x10 = x10 + 1
         w11 = w9 & 3
         if (w11 == 2)
         [x8 + 0x18] = x10
         b.eq 0x8024b78           // unlikely

    loc_0x08024b5c: // orphan
         w10 = w9 >> 4
         w9 = w9 >> 6
         if (w11 == 1)
         b.ne 0x8024b8c           // likely

    loc_0x08024b6c: // orphan
         x11 = [x0 + 0x100]       // 0xc7 // 199 // arg1
         [x8 + 0x20] = x11
         jmp 0x8024b8c

    loc_0x08024b78: // orphan
         x9 = [x8 + 0x20]         // 0xcf // 207
         [x0 + 0x100] = x9        // arg1
         w9 = (byte) [x8]         // 0xcf // 207
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08024b8c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024b74
         w10 = w10 & 3
         if (w10 == 2)
         b.eq 0x8024bc4           // unlikely

    loc_0x08024b98: // orphan
         if (w10 == 1)
         b.ne 0x8024ba8           // likely

    loc_0x08024ba0: // orphan
         x10 = [x0 + 0xf0]        // 0xc7 // 199 // arg1
         [x8 + 0x28] = x10

    loc_0x08024ba8: // orphan
         if (w9 == 2)
         b.eq 0x8024bdc           // unlikely

    loc_0x08024bb0: // orphan
         if (w9 == 1)
         b.ne 0x8024be4           // likely

    loc_0x08024bb8: // orphan
         x9 = [x0 + 0xf8]         // 0xc7 // 199 // arg1
         [x8 + 0x30] = x9
         jmp 0x8024be4

    loc_0x08024bc4: // orphan
         x9 = [x8 + 0x28]         // 0xcf // 207
         [x0 + 0xf0] = x9         // arg1
         w9 = (byte) [x8]         // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.ne 0x8024bb0           // likely

    loc_0x08024bdc: // orphan
         x9 = [x8 + 0x30]         // 0xcf // 207
         [x0 + 0xf8] = x9         // arg1

    loc_0x08024be4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024bc0
         w9 = (byte) [x8 + 1]     // 0xcf // 207
         w12 = w9 & 3
         if (w12 == 2)
         b.eq 0x8024c14           // unlikely

    loc_0x08024bf4: // orphan
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6
         if (w12 == 1)
         b.ne 0x8024c2c           // likely

    loc_0x08024c08: // orphan
         x12 = [x0 + 0x110]       // 0xc7 // 199 // arg1
         [x8 + 0x38] = x12
         jmp 0x8024c2c

    loc_0x08024c14: // orphan
         x9 = [x8 + 0x38]         // 0xcf // 207
         [x0 + 0x110] = x9        // arg1
         w9 = (byte) [x8 + 1]     // 0xcf // 207
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08024c2c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024c10
         w11 = w11 & 3
         if (w11 == 2)
         b.eq 0x8024c4c           // unlikely

    loc_0x08024c38: // orphan
         if (w11 == 1)
         b.ne 0x8024c60           // likely

    loc_0x08024c40: // orphan
         x11 = [x0 + 0x118]       // 0xc7 // 199 // arg1
         [x8 + 0x40] = x11
         jmp 0x8024c60

    loc_0x08024c4c: // orphan
         x9 = [x8 + 0x40]         // 0xcf // 207
         [x0 + 0x118] = w9        // arg1
         w9 = (byte) [x8 + 1]     // 0xcf // 207
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08024c60: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024c48
         w10 = w10 & 3
         if (w10 == 2)
         b.eq 0x8024c98           // unlikely

    loc_0x08024c6c: // orphan
         if (w10 == 1)
         b.ne 0x8024c7c           // likely

    loc_0x08024c74: // orphan
         x10 = [x0 + 0x108]       // 0xc7 // 199 // arg1
         [x8 + 0x48] = x10

    loc_0x08024c7c: // orphan
         if (w9 == 2)
         b.eq 0x8024cb0           // unlikely

    loc_0x08024c84: // orphan
         if (w9 == 1)
         b.ne 0x8024cb8           // likely

    loc_0x08024c8c: // orphan
         x9 = [x0]                // 0xc7 // 199 // arg1
         [x8 + 0x50] = x9
         jmp 0x8024cb8

    loc_0x08024c98: // orphan
         x9 = [x8 + 0x48]         // 0xcf // 207
         [x0 + 0x108] = x9        // arg1
         w9 = (byte) [x8 + 1]     // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.ne 0x8024c84           // likely

    loc_0x08024cb0: // orphan
         x9 = [x8 + 0x50]         // 0xcf // 207
         [x0] = x9                // arg1

    loc_0x08024cb8: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024c94
         w9 = (byte) [x8 + 2]     // 0xcf // 207
         w12 = w9 & 3
         if (w12 == 2)
         b.eq 0x8024ce8           // unlikely

    loc_0x08024cc8: // orphan
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6
         if (w12 == 1)
         b.ne 0x8024d00           // likely

    loc_0x08024cdc: // orphan
         x12 = [x0 + 8]           // 0xc7 // 199 // arg1
         [x8 + 0x58] = x12
         jmp 0x8024d00

    loc_0x08024ce8: // orphan
         x9 = [x8 + 0x58]         // 0xcf // 207
         [x0 + 8] = x9            // arg1
         w9 = (byte) [x8 + 2]     // 0xcf // 207
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08024d00: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024ce4
         w11 = w11 & 3
         if (w11 == 2)
         b.eq 0x8024d20           // unlikely

    loc_0x08024d0c: // orphan
         if (w11 == 1)
         b.ne 0x8024d34           // likely

    loc_0x08024d14: // orphan
         x11 = [x0 + 0x10]        // 0xc7 // 199 // arg1
         [x8 + 0x60] = x11
         jmp 0x8024d34

    loc_0x08024d20: // orphan
         x9 = [x8 + 0x60]         // 0xcf // 207
         [x0 + 0x10] = x9         // arg1
         w9 = (byte) [x8 + 2]     // 0xcf // 207
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08024d34: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024d1c
         w10 = w10 & 3
         if (w10 == 2)
         b.eq 0x8024d6c           // unlikely

    loc_0x08024d40: // orphan
         if (w10 == 1)
         b.ne 0x8024d50           // likely

    loc_0x08024d48: // orphan
         x10 = [x0 + 0x18]        // 0xc7 // 199 // arg1
         [x8 + 0x68] = x10

    loc_0x08024d50: // orphan
         if (w9 == 2)
         b.eq 0x8024d84           // unlikely

    loc_0x08024d58: // orphan
         if (w9 == 1)
         b.ne 0x8024d8c           // likely

    loc_0x08024d60: // orphan
         x9 = [x0 + 0x20]         // 0xc7 // 199 // arg1
         [x8 + 0x70] = x9
         jmp 0x8024d8c

    loc_0x08024d6c: // orphan
         x9 = [x8 + 0x68]         // 0xcf // 207
         [x0 + 0x18] = x9         // arg1
         w9 = (byte) [x8 + 2]     // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.ne 0x8024d58           // likely

    loc_0x08024d84: // orphan
         x9 = [x8 + 0x70]         // 0xcf // 207
         [x0 + 0x20] = x9         // arg1

    loc_0x08024d8c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024d68
         w9 = (byte) [x8 + 3]     // 0xcf // 207
         w12 = w9 & 3
         if (w12 == 2)
         b.eq 0x8024dbc           // unlikely

    loc_0x08024d9c: // orphan
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6
         if (w12 == 1)
         b.ne 0x8024dd4           // likely

    loc_0x08024db0: // orphan
         x12 = [x0 + 0x28]        // 0xc7 // 199 // arg1
         [x8 + 0x78] = x12
         jmp 0x8024dd4

    loc_0x08024dbc: // orphan
         x9 = [x8 + 0x78]         // 0xcf // 207
         [x0 + 0x28] = x9         // arg1
         w9 = (byte) [x8 + 3]     // 0xcf // 207
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08024dd4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024db8
         w11 = w11 & 3
         if (w11 == 2)
         b.eq 0x8024df4           // unlikely

    loc_0x08024de0: // orphan
         if (w11 == 1)
         b.ne 0x8024e08           // likely

    loc_0x08024de8: // orphan
         x11 = [x0 + 0x30]        // 0xc7 // 199 // arg1
         [x8 + 0x80] = x11
         jmp 0x8024e08

    loc_0x08024df4: // orphan
         x9 = [x8 + 0x80]         // 0xcf // 207
         [x0 + 0x30] = x9         // arg1
         w9 = (byte) [x8 + 3]     // 0xcf // 207
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08024e08: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024df0
         w10 = w10 & 3
         if (w10 == 2)
         b.eq 0x8024e40           // unlikely

    loc_0x08024e14: // orphan
         if (w10 == 1)
         b.ne 0x8024e24           // likely

    loc_0x08024e1c: // orphan
         x10 = [x0 + 0x38]        // 0xc7 // 199 // arg1
         [x8 + 0x88] = x10

    loc_0x08024e24: // orphan
         if (w9 == 2)
         b.eq 0x8024e58           // unlikely

    loc_0x08024e2c: // orphan
         if (w9 == 1)
         b.ne 0x8024e60           // likely

    loc_0x08024e34: // orphan
         x9 = [x0 + 0x40]         // 0xc7 // 199 // arg1
         [x8 + 0x90] = x9
         jmp 0x8024e60

    loc_0x08024e40: // orphan
         x9 = [x8 + 0x88]         // 0xcf // 207
         [x0 + 0x38] = x9         // arg1
         w9 = (byte) [x8 + 3]     // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.ne 0x8024e2c           // likely

    loc_0x08024e58: // orphan
         x9 = [x8 + 0x90]         // 0xcf // 207
         [x0 + 0x40] = x9         // arg1

    loc_0x08024e60: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024e3c
         w9 = (byte) [x8 + 4]     // 0xcf // 207
         w12 = w9 & 3
         if (w12 == 2)
         b.eq 0x8024e90           // unlikely

    loc_0x08024e70: // orphan
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6
         if (w12 == 1)
         b.ne 0x8024ea8           // likely

    loc_0x08024e84: // orphan
         x12 = [x0 + 0x48]        // 0xc7 // 199 // arg1
         [x8 + 0x98] = x12
         jmp 0x8024ea8

    loc_0x08024e90: // orphan
         x9 = [x8 + 0x98]         // 0xcf // 207
         [x0 + 0x48] = x9         // arg1
         w9 = (byte) [x8 + 4]     // 0xcf // 207
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08024ea8: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024e8c
         w11 = w11 & 3
         if (w11 == 2)
         b.eq 0x8024ec8           // unlikely

    loc_0x08024eb4: // orphan
         if (w11 == 1)
         b.ne 0x8024edc           // likely

    loc_0x08024ebc: // orphan
         x11 = [x0 + 0x50]        // 0xc7 // 199 // arg1
         [x8 + 0xa0] = x11
         jmp 0x8024edc

    loc_0x08024ec8: // orphan
         x9 = [x8 + 0xa0]         // 0xcf // 207
         [x0 + 0x50] = x9         // arg1
         w9 = (byte) [x8 + 4]     // 0xcf // 207
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08024edc: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024ec4
         w10 = w10 & 3
         if (w10 == 2)
         b.eq 0x8024f14           // unlikely

    loc_0x08024ee8: // orphan
         if (w10 == 1)
         b.ne 0x8024ef8           // likely

    loc_0x08024ef0: // orphan
         x10 = [x0 + 0x58]        // 0xc7 // 199 // arg1
         [x8 + 0xa8] = x10

    loc_0x08024ef8: // orphan
         if (w9 == 2)
         b.eq 0x8024f2c           // unlikely

    loc_0x08024f00: // orphan
         if (w9 == 1)
         b.ne 0x8024f34           // likely

    loc_0x08024f08: // orphan
         x9 = [x0 + 0x60]         // 0xc7 // 199 // arg1
         [x8 + 0xb0] = x9
         jmp 0x8024f34

    loc_0x08024f14: // orphan
         x9 = [x8 + 0xa8]         // 0xcf // 207
         [x0 + 0x58] = x9         // arg1
         w9 = (byte) [x8 + 4]     // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.ne 0x8024f00           // likely

    loc_0x08024f2c: // orphan
         x9 = [x8 + 0xb0]         // 0xcf // 207
         [x0 + 0x60] = x9         // arg1

    loc_0x08024f34: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024f10
         w9 = (byte) [x8 + 5]     // 0xcf // 207
         w12 = w9 & 3
         if (w12 == 2)
         b.eq 0x8024f64           // unlikely

    loc_0x08024f44: // orphan
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6
         if (w12 == 1)
         b.ne 0x8024f7c           // likely

    loc_0x08024f58: // orphan
         x12 = [x0 + 0x68]        // 0xc7 // 199 // arg1
         [x8 + 0xb8] = x12
         jmp 0x8024f7c

    loc_0x08024f64: // orphan
         x9 = [x8 + 0xb8]         // 0xcf // 207
         [x0 + 0x68] = x9         // arg1
         w9 = (byte) [x8 + 5]     // 0xcf // 207
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08024f7c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024f60
         w11 = w11 & 3
         if (w11 == 2)
         b.eq 0x8024f9c           // unlikely

    loc_0x08024f88: // orphan
         if (w11 == 1)
         b.ne 0x8024fb0           // likely

    loc_0x08024f90: // orphan
         x11 = [x0 + 0x70]        // 0xc7 // 199 // arg1
         [x8 + 0xc0] = x11
         jmp 0x8024fb0

    loc_0x08024f9c: // orphan
         x9 = [x8 + 0xc0]         // 0xcf // 207
         [x0 + 0x70] = x9         // arg1
         w9 = (byte) [x8 + 5]     // 0xcf // 207
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08024fb0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024f98
         w10 = w10 & 3
         if (w10 == 2)
         b.eq 0x8024fe8           // unlikely

    loc_0x08024fbc: // orphan
         if (w10 == 1)
         b.ne 0x8024fcc           // likely

    loc_0x08024fc4: // orphan
         x10 = [x0 + 0x78]        // 0xc7 // 199 // arg1
         [x8 + 0xc8] = x10

    loc_0x08024fcc: // orphan
         if (w9 == 2)
         b.eq 0x8025000           // unlikely

    loc_0x08024fd4: // orphan
         if (w9 == 1)
         b.ne 0x8025008           // likely

    loc_0x08024fdc: // orphan
         x9 = [x0 + 0x80]         // 0xc7 // 199 // arg1
         [x8 + 0xd0] = x9
         jmp 0x8025008

    loc_0x08024fe8: // orphan
         x9 = [x8 + 0xc8]         // 0xcf // 207
         [x0 + 0x78] = x9         // arg1
         w9 = (byte) [x8 + 5]     // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.ne 0x8024fd4           // likely

    loc_0x08025000: // orphan
         // XREFS(42)
         x9 = [x8 + 0xd0]         // 0xcf // 207
         [x0 + 0x80] = x9         // arg1

    loc_0x08025008: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8024fe4
         w9 = (byte) [x8 + 6]     // 0xcf // 207
         w12 = w9 & 3
         if (w12 == 2)
         b.eq 0x8025038           // unlikely

    loc_0x08025018: // orphan
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6
         if (w12 == 1)
         b.ne 0x8025050           // likely

    loc_0x0802502c: // orphan
         x12 = [x0 + 0x88]        // 0xc7 // 199 // arg1
         [x8 + 0xd8] = x12
         jmp 0x8025050

    loc_0x08025038: // orphan
         // CODE XREF from sym.do_hwbp_remove @ 0x8025970
         x9 = [x8 + 0xd8]         // 0xcf // 207
         [x0 + 0x88] = x9         // arg1
         w9 = (byte) [x8 + 6]     // 0xcf // 207
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08025050: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8025034
         w11 = w11 & 3
         if (w11 == 2)
         b.eq 0x8025070           // unlikely

    loc_0x0802505c: // orphan
         if (w11 == 1)
         b.ne 0x8025084           // likely

    loc_0x08025064: // orphan
         x11 = [x0 + 0x90]        // 0xc7 // 199 // arg1
         [x8 + 0xe0] = x11
         jmp 0x8025084

    loc_0x08025070: // orphan
         x9 = [x8 + 0xe0]         // 0xcf // 207
         [x0 + 0x90] = x9         // arg1
         w9 = (byte) [x8 + 6]     // 0xcf // 207
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08025084: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x802506c
         w10 = w10 & 3
         if (w10 == 2)
         b.eq 0x80250bc           // unlikely

    loc_0x08025090: // orphan
         if (w10 == 1)
         b.ne 0x80250a0           // likely

    loc_0x08025098: // orphan
         x10 = [x0 + 0x98]        // 0xc7 // 199 // arg1
         [x8 + 0xe8] = x10

    loc_0x080250a0: // orphan
         if (w9 == 2)
         b.eq 0x80250d4           // unlikely

    loc_0x080250a8: // orphan
         if (w9 == 1)
         b.ne 0x80250dc           // likely

    loc_0x080250b0: // orphan
         x9 = [x0 + 0xa0]         // 0xc7 // 199 // arg1
         [x8 + 0xf0] = x9
         jmp 0x80250dc

    loc_0x080250bc: // orphan
         x9 = [x8 + 0xe8]         // 0xcf // 207
         [x0 + 0x98] = x9         // arg1
         w9 = (byte) [x8 + 6]     // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.ne 0x80250a8           // likely

    loc_0x080250d4: // orphan
         x9 = [x8 + 0xf0]         // 0xcf // 207
         [x0 + 0xa0] = x9         // arg1

    loc_0x080250dc: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80250b8
         w9 = (byte) [x8 + 7]     // 0xcf // 207
         w12 = w9 & 3
         if (w12 == 2)
         b.eq 0x802510c           // unlikely

    loc_0x080250ec: // orphan
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6
         if (w12 == 1)
         b.ne 0x8025124           // likely

    loc_0x08025100: // orphan
         x12 = [x0 + 0xa8]        // 0xc7 // 199 // arg1
         [x8 + 0xf8] = x12
         jmp 0x8025124

    loc_0x0802510c: // orphan
         x9 = [x8 + 0xf8]         // 0xcf // 207
         [x0 + 0xa8] = x9         // arg1
         w9 = (byte) [x8 + 7]     // 0xcf // 207
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08025124: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8025108
         w11 = w11 & 3
         if (w11 == 2)
         b.eq 0x8025144           // unlikely

    loc_0x08025130: // orphan
         if (w11 == 1)
         b.ne 0x8025158           // likely

    loc_0x08025138: // orphan
         x11 = [x0 + 0xb0]        // 0xc7 // 199 // arg1
         [x8 + 0x100] = x11
         jmp 0x8025158

    loc_0x08025144: // orphan
         x9 = [x8 + 0x100]        // 0xcf // 207
         [x0 + 0xb0] = x9         // arg1
         w9 = (byte) [x8 + 7]     // 0xcf // 207
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x08025158: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8025140
         w10 = w10 & 3
         if (w10 == 2)
         b.eq 0x8025190           // unlikely

    loc_0x08025164: // orphan
         if (w10 == 1)
         b.ne 0x8025174           // likely

    loc_0x0802516c: // orphan
         x10 = [x0 + 0xb8]        // 0xc7 // 199 // arg1
         [x8 + 0x108] = x10

    loc_0x08025174: // orphan
         if (w9 == 2)
         b.eq 0x80251a8           // unlikely

    loc_0x0802517c: // orphan
         if (w9 == 1)
         b.ne 0x80251b0           // likely

    loc_0x08025184: // orphan
         x9 = [x0 + 0xc0]         // 0xc7 // 199 // arg1
         [x8 + 0x110] = x9
         jmp 0x80251b0

    loc_0x08025190: // orphan
         x9 = [x8 + 0x108]        // 0xcf // 207
         [x0 + 0xb8] = x9         // arg1
         w9 = (byte) [x8 + 7]     // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.ne 0x802517c           // likely

    loc_0x080251a8: // orphan
         x9 = [x8 + 0x110]        // 0xcf // 207
         [x0 + 0xc0] = x9         // arg1

    loc_0x080251b0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x802518c
         w9 = (byte) [x8 + 8]     // 0xcf // 207
         w12 = w9 & 3
         if (w12 == 2)
         b.eq 0x80251e0           // unlikely

    loc_0x080251c0: // orphan
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6
         if (w12 == 1)
         b.ne 0x80251f8           // likely

    loc_0x080251d4: // orphan
         x12 = [x0 + 0xc8]        // 0xc7 // 199 // arg1
         [x8 + 0x118] = x12
         jmp 0x80251f8

    loc_0x080251e0: // orphan
         x9 = [x8 + 0x118]        // 0xcf // 207
         [x0 + 0xc8] = x9         // arg1
         w9 = (byte) [x8 + 8]     // 0xcf // 207
         w11 = w9 >> 2
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x080251f8: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80251dc
         w11 = w11 & 3
         if (w11 == 2)
         b.eq 0x8025218           // unlikely

    loc_0x08025204: // orphan
         if (w11 == 1)
         b.ne 0x802522c           // likely

    loc_0x0802520c: // orphan
         x11 = [x0 + 0xd0]        // 0xc7 // 199 // arg1
         [x8 + 0x120] = x11
         jmp 0x802522c

    loc_0x08025218: // orphan
         x9 = [x8 + 0x120]        // 0xcf // 207
         [x0 + 0xd0] = x9         // arg1
         w9 = (byte) [x8 + 8]     // 0xcf // 207
         w10 = w9 >> 4
         w9 = w9 >> 6

    loc_0x0802522c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8025214
         w10 = w10 & 3
         if (w10 == 2)
         b.eq 0x8025264           // unlikely

    loc_0x08025238: // orphan
         if (w10 == 1)
         b.ne 0x8025248           // likely

    loc_0x08025240: // orphan
         x10 = [x0 + 0xd8]        // 0xc7 // 199 // arg1
         [x8 + 0x128] = x10

    loc_0x08025248: // orphan
         if (w9 == 2)
         b.eq 0x802527c           // unlikely

    loc_0x08025250: // orphan
         if (w9 == 1)
         b.ne 0x8025284           // likely

    loc_0x08025258: // orphan
         x9 = [x0 + 0xe0]         // 0xc7 // 199 // arg1
         [x8 + 0x130] = x9
         jmp 0x8025284

    loc_0x08025264: // orphan
         x9 = [x8 + 0x128]        // 0xcf // 207
         [x0 + 0xd8] = x9         // arg1
         w9 = (byte) [x8 + 8]     // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.ne 0x8025250           // likely

    loc_0x0802527c: // orphan
         x9 = [x8 + 0x130]        // 0xcf // 207
         [x0 + 0xe0] = x9         // arg1

    loc_0x08025284: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8025260
         w9 = (byte) [x8 + 9]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x80252ac           // unlikely

    loc_0x08025294: // orphan
         w9 = w9 >> 2
         if (w10 == 1)
         b.ne 0x80252bc           // likely

    loc_0x080252a0: // orphan
         x10 = [x0 + 0xe8]        // 0xc7 // 199 // arg1
         [x8 + 0x138] = x10
         jmp 0x80252bc

    loc_0x080252ac: // orphan
         x9 = [x8 + 0x138]        // 0xcf // 207
         [x0 + 0xe8] = x9         // arg1
         w9 = (byte) [x8 + 9]     // 0xcf // 207
         w9 = w9 >> 2

    loc_0x080252bc: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80252a8
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x80252dc           // unlikely

    loc_0x080252c8: // orphan
         if (w9 == 1)
         b.ne 0x80252e4           // likely

    loc_0x080252d0: // orphan
         mrs x9,fpsr              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8 + 0x140] = w9
         jmp 0x80252e4

    loc_0x080252dc: // orphan
         w9 = [x8 + 0x140]        // 0xcf // 207
         msr fpsr,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080252e4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80252d8
         w9 = (byte) [x8 + 9]     // 0xcf // 207
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x8025308           // unlikely

    loc_0x080252f4: // orphan
         if (w9 == 1)
         b.ne 0x8025310           // likely

    loc_0x080252fc: // orphan
         mrs x9,fpcr              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8 + 0x144] = w9
         jmp 0x8025310

    loc_0x08025308: // orphan
         w9 = [x8 + 0x144]        // 0xcf
         msr fpcr,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08025310: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8025304
         w9 = (byte) [x8 + 9]     // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x8025334           // unlikely

    loc_0x08025320: // orphan
         if (w9 == 1)
         b.ne 0x802533c           // likely

    loc_0x08025328: // orphan
         x9 = x8 + 0x150
         [x9] = q0
         jmp 0x802533c

    loc_0x08025334: // orphan
         x9 = x8 + 0x150
         q0 = [x9]                // 0xd0 // 208

    loc_0x0802533c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8025330
         w9 = (byte) [x8 + 0xa]   // 0xcf // 207
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x8025360           // unlikely

    loc_0x0802534c: // orphan
         if (w9 == 1)
         b.ne 0x8025368           // likely

    loc_0x08025354: // orphan
         x9 = x8 + 0x160
         [x9] = q1
         jmp 0x8025368

    loc_0x08025360: // orphan
         x9 = x8 + 0x160
         q1 = [x9]                // 0xd0 // 208

    loc_0x08025368: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x802535c
         w9 = (byte) [x8 + 0xa]   // 0xcf // 207
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x802538c           // unlikely

    loc_0x08025378: // orphan
         if (w9 == 1)
         b.ne 0x8025394           // likely

    loc_0x08025380: // orphan
         x9 = x8 + 0x170
         [x9] = q2
         jmp 0x8025394

    loc_0x0802538c: // orphan
         x9 = x8 + 0x170
         q2 = [x9]                // 0xd0 // 208

    loc_0x08025394: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8025388
         w9 = (byte) [x8 + 0xa]   // 0xcf // 207
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x80253b8           // unlikely

    loc_0x080253a4: // orphan
         if (w9 == 1)
         b.ne 0x80253c0           // likely

    loc_0x080253ac: // orphan
         x9 = x8 + 0x180
         [x9] = q3
         jmp 0x80253c0

    loc_0x080253b8: // orphan
         x9 = x8 + 0x180
         q3 = [x9]                // 0xd0 // 208

    loc_0x080253c0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80253b4
         w9 = (byte) [x8 + 0xa]   // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x80253e4           // unlikely

    loc_0x080253d0: // orphan
         if (w9 == 1)
         b.ne 0x80253ec           // likely

    loc_0x080253d8: // orphan
         x9 = x8 + 0x190
         [x9] = q4
         jmp 0x80253ec

    loc_0x080253e4: // orphan
         x9 = x8 + 0x190
         q4 = [x9]                // 0xd0 // 208

    loc_0x080253ec: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80253e0
         w9 = (byte) [x8 + 0xb]   // 0xcf // 207
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x8025410           // unlikely

    loc_0x080253fc: // orphan
         if (w9 == 1)
         b.ne 0x8025418           // likely

    loc_0x08025404: // orphan
         x9 = x8 + 0x1a0
         [x9] = q5
         jmp 0x8025418

    loc_0x08025410: // orphan
         x9 = x8 + 0x1a0
         q5 = [x9]                // 0xd0 // 208

    loc_0x08025418: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x802540c
         w9 = (byte) [x8 + 0xb]   // 0xcf // 207
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x802543c           // unlikely

    loc_0x08025428: // orphan
         if (w9 == 1)
         b.ne 0x8025444           // likely

    loc_0x08025430: // orphan
         x9 = x8 + 0x1b0
         [x9] = q6
         jmp 0x8025444

    loc_0x0802543c: // orphan
         x9 = x8 + 0x1b0
         q6 = [x9]                // 0xd0 // 208

    loc_0x08025444: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8025438
         w9 = (byte) [x8 + 0xb]   // 0xcf // 207
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x8025468           // unlikely

    loc_0x08025454: // orphan
         if (w9 == 1)
         b.ne 0x8025470           // likely

    loc_0x0802545c: // orphan
         x9 = x8 + 0x1c0
         [x9] = q7
         jmp 0x8025470

    loc_0x08025468: // orphan
         x9 = x8 + 0x1c0
         q7 = [x9]                // 0xd0 // 208

    loc_0x08025470: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8025464
         w9 = (byte) [x8 + 0xb]   // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x8025494           // unlikely

    loc_0x08025480: // orphan
         if (w9 == 1)
         b.ne 0x802549c           // likely

    loc_0x08025494: // orphan
         x9 = x8 + 0x1d0
         q8 = [x9]                // 0xd0 // 208
         w9 = (byte) [x8 + 0xc]   // 0xcf // 207
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x80254c0           // unlikely

}

/* ===== 0x080264f4 ===== */
int sym.arm64_decode_bit_masks (int esi, int edx) {
    loc_0x80264f4:
        bti c
        w8 = w0 & 0xff // arg1
        w9 = w2 & 0x3f // arg3
        bfi w9,w8,6, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w9 ^ 0x3f
        if !w8 jmp 0x802654c // unlikely
            
    loc_0x802654c:
        // CODE XREFS from sym.arm64_decode_bit_masks @ 0x8026508, 0x8026514, 0x8026528
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x08026550
         // } else {
    loc_0x802650c:
        clz w8,w8
        w8 = w8 ^ 0x1f
        if !w8 jmp 0x802654c // unlikely
        }
        return eax;
    loc_0x8026518:
        w9 = w3 & 0xff // arg4
        if (w9 == 0x20)
        b.ne 0x802652c // likely
            
    loc_0x802652c:
        // CODE XREF from sym.arm64_decode_bit_masks @ 0x8026520
        w9 = 0x1
        w8 = w9 << w8
        w9 = w8 + 0xff
        w10 = w9 & w2 // arg3
        if !w4 jmp 0x8026554 // likely
            
    loc_0x8026554:
        // CODE XREFS from sym.arm64_decode_bit_masks @ 0x802653c, 0x8026548
        w11 = w9 & w1 // arg2
        w12 = w8 & 0xff
        w13 = w11 & 0xff
        w15 = w10 + 1
        w11 = w8 & 0xfe
        w16 = w15 & 0xff
        w14 = (unsigned) w13 / w12
        x17 = ~0
        if (w16 == 0x3f)
        x15 = x17 << x15
        csinv x15,x17,x15, hi
        if (w12 == 0x3f)
        w16 = w10 & 0xff
        msub w12,w14,w12, w13
        x14 = x17 << x11
        csinv x10,x17,x14, hi
        w13 = w16 - w13
        x15 = x15 & x10
        if !w12 jmp 0x80265b4 // likely
            
    loc_0x80265b4:
        // CODE XREF from sym.arm64_decode_bit_masks @ 0x802659c
        w12 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x11 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w14 = w13 & w9
        x13 = x15 & x10
        w9 = w3 & 0xff // arg4
         // do {
    loc_0x80265c8:
        // CODE XREF from sym.arm64_decode_bit_masks @ 0x80265dc
        x15 = x13 << x12
        w12 = w12 + w8
        x11 = x15 | x11
        w12 = w12 & 0xff
        if (w12 == w9)
        b.lo 0x80265c8 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080265e0: // orphan
             hint 0x19
             w14 = w14 + 1
             x16 = ~0
             w15 = w14 & 0xff
             w13 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             if (w15 == 0x3f)
             x12 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x14 = x16 << x14
             [x5] = x11               // arg6
             csinv x14,x16,x14, hi
             x10 = x14 & x10

    loc_0x0802660c: // orphan
         // CODE XREF from sym.arm64_decode_bit_masks @ 0x8026620
         x11 = x10 << x13
         w13 = w13 + w8
         x12 = x11 | x12
         w13 = w13 & 0xff
         if (w13 == w9)
         b.lo 0x802660c           // unlikely

    loc_0x08026624: // orphan
         w0 = 0x1
         [x6] = x12               // arg7
         hint 0x1d
         

}

/* ===== 0x08026634 ===== */
int sym.arm64_decode_base_registers (int esi, int edx) {
    loc_0x8026634:
        hint 0x19
        w8 = 0x40     // '@'
        w10 = 0x20
        if (w0 == 0)  // arg1
        w9 = w0 & 0x1f // arg1
        ubfx w11,w0,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        ubfx w12,w0,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        ubfx w13,w0,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        csel w8,w10,w8, ge
        [x1 + 0x18] = (byte) w9 // arg2
        [x1 + 0x19] = (byte) w11 // arg2
        [x1 + 0x1b] = (byte) w12 // arg2
        [x1 + 0x1a] = (byte) w13 // arg2
        [x1 + 0x1f] = (byte) w8 // arg2
        tbnz w0,0x1f,0x8026678 // unlikely
            
    loc_0x8026678:
        // CODE XREF from sym.arm64_decode_base_registers @ 0x802666c
        w8 = [x1 + 0x14] // 0xc8 // 200 // arg2
        w8 = w8 | 1
        [x1 + 0x14] = w8 // arg2
        hint 0x1d
        0x08026688
         // } else {
    loc_0x8026670:
        hint 0x1d
        0x08026674
        }
        return eax;
}

/* ===== 0x0802a558 ===== */
int sym._copy_from_user.224 (int esi, int edx) {
    loc_0x802a558:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = (byte) [x9 + 0x3e] // 0xd0 // 208
        x8 = x1 << 8  // arg2
        tbnz w10,5,0x802a594 // likely
            
    loc_0x802a594:
        x10 = x1 & x8,asr 8 // arg2
         // do {
    loc_0x802a598:
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = xzr | 0x7fffffffff
        x10 = x10 + x19
        csel x11,xzr,x11, hi
        csinv x10,x10,xzr, lo
        sbcs xzr,x10,x11
        cset x10,ls
        if !x10 jmp 0x802a66c // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0802a5b8: // orphan
             jmp 0x802a6a8

    loc_0x0802a5c0: // orphan
         // CODE XREF from sym._copy_from_user.224 @ 0x802a6b8
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x802a5d8     // unlikely

    loc_0x0802a5cc: // orphan
         
         w11 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802a5d8: // orphan
         x9 = x9 + 8
         ldar x9,[x9]
         x12 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802a600: // orphan
         bti j
         x9 = x1 & x8,asr 8       // arg2
         x10 = xzr | 0x7fffffffff
         bics xzr,x9,x10          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel x8,x1,xzr, eq
         hint 0x14
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x802a624 ()             // 0x802a624(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802a6bc

    loc_0x0802a634: // orphan
         // CODE XREF from sym._copy_from_user.224 @ 0x802a6cc
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x802a64c      // unlikely

    loc_0x0802a640: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802a64c: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802a66c: // orphan
         bti j
         if x21 jmp 0x802a690     // unlikely

    loc_0x0802a674: // orphan
         // CODE XREF from sym._copy_from_user.224 @ 0x802a6a4
         (x20, 2) = 3
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = [var_10h]          // 0x4
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

    loc_0x0802a690: // orphan
         x8 = x19 - x21
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x0 = x20 + x8            // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x802a6a0 ()             // 0x802a6a0(0x0, 0x0, 0x0, 0x0)
         jmp 0x802a674

    loc_0x0802a6a8: // orphan
         // CODE XREF from sym._copy_from_user.224 @ 0x802a5b8
         bti j
         x10 = 0x802a000
         x10 = [x10]              // 0xd1 // 209
         tbnz w10,0x18,0x802a600  // unlikely

    loc_0x0802a6b8: // orphan
         jmp 0x802a5c0

    loc_0x0802a6bc: // orphan
         // CODE XREF from sym._copy_from_user.224 @ 0x802a62c
         bti j
         x8 = 0x802a000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x18,0x802a66c   // unlikely

    loc_0x0802a6cc: // orphan
         jmp 0x802a634

}

/* ===== 0x0802aab8 ===== */
int sym.init_module.cfi_jt (int esi, int edx) {
    loc_0x802aab8:
        bti c
         // do {
    loc_0x802aabc:
        jmp 0x802aabc
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802aac0 ===== */
int sym.paradise_anon_ioctl.cfi_jt (int esi, int edx) {
    loc_0x802aac0:
        bti c
         // do {
    loc_0x802aac4:
        jmp 0x802aac4
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802aac8 ===== */
int sym.paradise_anon_open.cfi_jt (int esi, int edx) {
    loc_0x802aac8:
        bti c
         // do {
    loc_0x802aacc:
        jmp 0x802aacc
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802aad0 ===== */
int sym.paradise_anon_release.cfi_jt (int esi, int edx) {
    loc_0x802aad0:
        bti c
         // do {
    loc_0x802aad4:
        jmp 0x802aad4
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802aad8 ===== */
int sym.reboot_handler_pre.cfi_jt (int esi, int edx) {
    loc_0x802aad8:
        bti c
         // do {
    loc_0x802aadc:
        jmp 0x802aadc
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802aae0 ===== */
int sym.paradise_install_fd_tw_func.cfi_jt (int esi, int edx) {
    loc_0x802aae0:
        bti c
         // do {
    loc_0x802aae4:
        jmp 0x802aae4
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802aae8 ===== */
int sym.gyro_sendmsg.cfi_jt (int esi, int edx) {
    loc_0x802aae8:
        bti c
         // do {
    loc_0x802aaec:
        jmp 0x802aaec
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802aaf0 ===== */
int sym.cleanup_module.cfi_jt (int esi, int edx) {
    loc_0x802aaf0:
        bti c
         // do {
    loc_0x802aaf4:
        jmp 0x802aaf4
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802aaf8 ===== */
int sym.ret_trampoline_finish_task_switch.cfi_jt (int esi, int edx) {
    loc_0x802aaf8:
        bti c
         // do {
    loc_0x802aafc:
        jmp 0x802aafc
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802ab00 ===== */
int sym.ret_work_finish_task_switch.cfi_jt (int esi, int edx) {
    loc_0x802ab00:
        bti c
         // do {
    loc_0x802ab04:
        jmp 0x802ab04
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802ab08 ===== */
int sym.clear_hwbp_regs_on_cpu.cfi_jt (int esi, int edx) {
    loc_0x802ab08:
        bti c
         // do {
    loc_0x802ab0c:
        jmp 0x802ab0c
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802ab10 ===== */
int sym.filldir64_hook_work.cfi_jt (int esi, int edx) {
    loc_0x802ab10:
        bti c
         // do {
    loc_0x802ab14:
        jmp 0x802ab14
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802ab18 ===== */
int sym.kgsl_process_init_hook_work.cfi_jt (int esi, int edx) {
    loc_0x802ab18:
        bti c
         // do {
    loc_0x802ab1c:
        jmp 0x802ab1c
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802ab20 ===== */
int sym.sysfs_create_group_hook_work.cfi_jt (int esi, int edx) {
    loc_0x802ab20:
        bti c
         // do {
    loc_0x802ab24:
        jmp 0x802ab24
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802ab28 ===== */
int sym.work_trampoline_breakpoint.cfi_jt (int esi, int edx) {
    loc_0x802ab28:
        bti c
         // do {
    loc_0x802ab2c:
        jmp 0x802ab2c
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802ab30 ===== */
int sym.work_trampoline_watchpoint.cfi_jt (int esi, int edx) {
    loc_0x802ab30:
        bti c
         // do {
    loc_0x802ab34:
        jmp 0x802ab34
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802ab38 ===== */
int sym.work_trampoline_finish_task_switch.cfi_jt (int esi, int edx) {
    loc_0x802ab38:
        bti c
         // do {
    loc_0x802ab3c:
        jmp 0x802ab3c
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802ab40 ===== */
int sym.sample_hbp_handler_entry.cfi_jt (int esi, int edx) {
    loc_0x802ab40:
        bti c
         // do {
    loc_0x802ab44:
        jmp 0x802ab44
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802ab54 ===== */
int sym.init_module (int esi, int edx) {
    loc_0x802ab54:
        hint 0x19     // [12] -r-x section size 188 named .init.text
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x802a000
        x0 = x0 + 0
        0x802ab70 ()  // 0x802ab70(0x802a000, 0x0, 0x0, 0x0)
        0x802ab74 ()  // 0x802ab74(0x802a000, 0x0, 0x0, 0x0)
        if w0 jmp 0x802abac // likely
            
    loc_0x802abac:
        // CODE XREF from sym.init_module @ 0x802ab78
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x802a000
        x0 = x0 + 0
         // do {
    loc_0x802abb8:
        // CODE XREF from sym.init_module @ 0x802aba8
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x802abbc ()  // 0x802abbc(0x0, 0x0, 0x0, 0x0)
        jmp 0x802abf8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ab7c
    loc_0x802aba0:
        x0 = 0x802a000
        x0 = x0 + 0
        jmp 0x802abb8
    loc_0x0802abc4: // orphan
             // CODE XREF from sym.init_module @ 0x802ab9c
             0x802abc4 ()             // 0x802abc4(0x0, 0x0, 0x0, 0x0)
             0x802abc8 ()             // 0x802abc8(0x0, 0x0, 0x0, 0x0)
             w1 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x0 = 0x802a000
             x0 = x0 + 0
             0x802abd8 ()             // 0x802abd8(0x802a000, 0x0, 0x0, 0x0)
             x0 = 0x802a000
             x0 = x0 + 0
             0x802abe4 ()             // 0x802abe4(0x802a000, 0x0, 0x0, 0x0)
             x8 = 0x802a000
             [x8] = x0
             0x802abf0 ()             // 0x802abf0(0x802a000, 0x0, 0x0, 0x0)
             w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802abf8: // orphan
         // CODE XREF from sym.init_module @ 0x802abc0
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x19 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

}

/* ===== 0x0802ac10 ===== */
int sym.cleanup_module (int esi, int edx) {
    loc_0x802ac10:
        hint 0x19     // [14] -r-x section size 72 named .exit.text
        [x18] + 8 = x30
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x802a000
        x0 = x0 + 0
        0x802ac28 ()  // 0x802ac28(0x802a000, 0x0, 0x0, 0x0)
        0x802ac2c ()  // 0x802ac2c(0x802a000, 0x0, 0x0, 0x0)
        0x802ac30 ()  // 0x802ac30(0x802a000, 0x0, 0x0, 0x0)
        0x802ac34 ()  // 0x802ac34(0x802a000, 0x0, 0x0, 0x0)
        x0 = 0x802a000
        x0 = x0 + 0
        0x802ac40 ()  // 0x802ac40(0x802a000, 0x0, 0x0, 0x0)
        0x802ac44 ()  // 0x802ac44(0x802a000, 0x0, 0x0, 0x0)
        (x29, 2) = 3  // sp // sp
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0802ac54
         // (break)
}

/* ===== 0x0801103c ===== */
int sym.init_arch (int esi, int edx) {
    loc_0x801103c:
        hint 0x19
        sp = sp - 0xc0
        [x18] + 8 = x30
        [sp, 0x90] = (x29,2)
        x29 = var_90h
        [var_a0h] = x21
        [sp, 0xb0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8011000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        x8 = [x19]    // 0xda // 218
        if !x8 jmp 0x8011080 // unlikely
            
    loc_0x8011080:
        x8 = 0x8011000
        x0 = var_8h   // int64_t arg_c0h
        x8 = x8 + 0
        [sp, 0x78] = (xzr,2)
        [sp, 0x68] = (xzr,2)
        [sp, 0x58] = (xzr,2)
        [sp, 0x48] = (xzr,2)
        [sp, 0x28] = (xzr,2)
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        [sp, 0x38] = (x8,2)
        0x80110ac ()  // 0x80110ac(0x178008, 0x0, 0x0, 0x0)
        tbz w0,0x1f,0x80111c0 // likely
            
    loc_0x80111c0:
        x8 = [var_30h] // 0x4 // 4
        x0 = var_8h   // int64_t arg_c0h
        [x19] = x8
        0x80111cc ()  // 0x80111cc(0x178008, 0x0, 0x0, 0x0)
        x1 = [x19]    // 0xda // 218
        if x1 jmp 0x8011238 // unlikely
            
    loc_0x8011238:
        x0 = 0x8011000
        x0 = x0 + 0   // int64_t arg_c0h
        0x8011240 ()  // 0x8011240(0x8011000, 0x0, 0x0, 0x0)
        x8 = [x19]    // 0xda // 218
        jmp 0x8011070
    loc_0x08011070: // orphan
             // CODE XREF from sym.init_arch @ 0x8011248
             x0 = 0x8011000
             x0 = x0 + 0
             blr x8                   // pstate(0x8011000, 0x0, 0x0, 0x0)
             jmp 0x80110b8

    loc_0x080110b4: // orphan
         // CODE XREF from sym.init_arch @ 0x80111e4
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080110b8: // orphan
         // CODE XREF from sym.init_arch @ 0x801107c
         x20 = 0x8011000
         x8 = [x19]               // 0xda // 218
         x21 = 0x8011000
         [x20] = x0
         if !x8 jmp 0x80110ec     // likely

    loc_0x080110cc: // orphan
         // CODE XREF from sym.init_arch @ 0x801125c
         x0 = 0x8011000
         x0 = x0 + 0
         blr x8                   // pstate(0x8011000, 0x0, 0x0, 0x0)
         [x21] = x0
         if x0 jmp 0x8011178      // likely

    loc_0x080110e0: // orphan
         x8 = [x19]               // 0xda // 218
         if x8 jmp 0x801112c      // likely

    loc_0x080110e8: // orphan
         jmp 0x801113c

    loc_0x080110ec: // orphan
         x8 = 0x8011000
         x0 = var_8h              // int64_t arg_c0h
         x8 = x8 + 0
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 8] = (xzr,2)
         [sp, 0x38] = (x8,2)
         0x8011118 ()             // 0x8011118(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x80111e8    // likely

    loc_0x08011120: // orphan
         // CODE XREF from sym.init_arch @ 0x801120c
         [x21] = xzr
         x8 = [x19]               // 0xda // 218
         if !x8 jmp 0x801113c     // likely

    loc_0x0801112c: // orphan
         // CODE XREF from sym.init_arch @ 0x8011270
         x0 = 0x8011000
         x0 = x0 + 0
         blr x8                   // pstate(0x8011000, 0x0, 0x0, 0x0)
         jmp 0x8011174

    loc_0x0801113c: // orphan
         // CODE XREF from sym.init_arch @ 0x80110e8
         x8 = 0x8011000
         x0 = var_8h              // int64_t arg_c0h
         x8 = x8 + 0
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 8] = (xzr,2)
         [sp, 0x38] = (x8,2)
         0x8011168 ()             // 0x8011168(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x8011210    // likely

    loc_0x08011170: // orphan
         // CODE XREF from sym.init_arch @ 0x8011234
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08011174: // orphan
         // CODE XREF from sym.init_arch @ 0x8011138
         [x21] = x0

    loc_0x08011178: // orphan
         x8 = [x20]               // 0xdb // 219
         mrs x10,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x10 + 0x5e0]      // 0xd1 // 209
         ldur x11,[x29,-8]
         if (x8 == 0)
         cset w8,eq
         if (x0 == 0)
         cset w9,eq
         if (x10 == x11)
         b.ne 0x8011274           // likely

    loc_0x080111a0: // orphan
         (x20, 2) = 3
         w0 = w8 | w9
         (x29, 2) = 3
         x21 = [var_a0h]          // 0x4 // 4
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_c0h
         hint 0x1d
         

    loc_0x080111d8: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg_c0h
         0x80111e0 ()             // 0x80111e0(0x8011000, 0x0, 0x0, 0x0)
         jmp 0x80110b4

    loc_0x080111e8: // orphan
         x8 = [var_30h]           // 0x4 // 4
         x0 = var_8h              // int64_t arg_c0h
         [x19] = x8
         0x80111f4 ()             // 0x80111f4(0x178008, 0x0, 0x0, 0x0)
         x1 = [x19]               // 0xda // 218
         if x1 jmp 0x801124c      // unlikely

    loc_0x08011200: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg_c0h
         0x8011208 ()             // 0x8011208(0x8011000, 0x0, 0x0, 0x0)
         jmp 0x8011120

    loc_0x08011210: // orphan
         x8 = [var_30h]           // 0x4 // 4
         x0 = var_8h              // int64_t arg_c0h
         [x19] = x8
         0x801121c ()             // 0x801121c(0x178008, 0x0, 0x0, 0x0)
         x1 = [x19]               // 0xda // 218
         if x1 jmp 0x8011260      // unlikely

    loc_0x08011228: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg_c0h
         0x8011230 ()             // 0x8011230(0x8011000, 0x0, 0x0, 0x0)
         jmp 0x8011170

    loc_0x0801124c: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg_c0h
         0x8011254 ()             // 0x8011254(0x8011000, 0x0, 0x0, 0x0)
         x8 = [x19]               // 0xda // 218
         jmp 0x80110cc

    loc_0x08011260: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg_c0h
         0x8011268 ()             // 0x8011268(0x8011000, 0x0, 0x0, 0x0)
         x8 = [x19]               // 0xda // 218
         jmp 0x801112c

    loc_0x08011274: // orphan
         0x8011274 ()             // sym.hook_write_range // 0x8011274(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x08012eb8 ===== */
int sym.paradise_hwbp_init (int esi, int edx) {
    loc_0x8012eb8:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x320
        w0 = 0x35     // '5'
        0x8012ed0 ()  // 0x8012ed0(0x350320, 0x0, 0x0, 0x0)
        w9 = ~0xb
        if (x0 == 0)
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        csel w0,w9,wzr, eq
        x9 = 0x8012000
        [x9] = x8
        (x29, 2) = 3  // sp // sp
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x08012ef8
         // (break)
}

/* ===== 0x0800a7ec ===== */
int sym.paradise_supercalls_init (int esi, int edx) {
    loc_0x800a7ec:
        hint 0x19
        sp = sp - 0xb0
        [x18] + 8 = x30
        [sp, 0x90] = (x29,2)
        x29 = var_90h
        [var_a0h] = x19
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x800a000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        x8 = [x19]    // 0xda // 218
        if !x8 jmp 0x800a870 // unlikely
            
    loc_0x800a870:
        x8 = 0x800a000
        x0 = var_8h   // int64_t arg_b0h
        x8 = x8 + 0
        [sp, 0x78] = (xzr,2)
        [sp, 0x68] = (xzr,2)
        [sp, 0x58] = (xzr,2)
        [sp, 0x48] = (xzr,2)
        [sp, 0x28] = (xzr,2)
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        [sp, 0x38] = (x8,2)
        0x800a89c ()  // 0x800a89c(0x178008, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x800a8c8 // unlikely
            
    loc_0x800a8c8:
        x8 = 0x800a000
        [x8] = xzr
         // do {
    loc_0x800a8d0:
        x0 = 0x800a000
        x0 = x0 + 0   // int64_t arg_b0h
        0x800a8d8 ()  // 0x800a8d8(0x800a000, 0x0, 0x0, 0x0)
        jmp 0x800a834
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800a81c
    loc_0x800a834:
        // CODE XREF from sym.paradise_supercalls_init @ 0x800a8dc
        x0 = 0x800a000
        x0 = x0 + 0   // int64_t arg_b0h
        0x800a83c ()  // 0x800a83c(0x800a000, 0x0, 0x0, 0x0)
        if w0 jmp 0x800a8e0 // likely
            
    loc_0x800a8e0:
        w1 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800a000
        x0 = x0 + 0   // int64_t arg_b0h
        0x800a8ec ()  // 0x800a8ec(0x800a000, 0x0, 0x0, 0x0)
        jmp 0x800a844
    loc_0x0800a844: // orphan
             // CODE XREF from sym.paradise_supercalls_init @ 0x800a8f0
             mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x8 = [x8 + 0x5e0]        // 0xcf // 207
             ldur x9,[x29,-8]
             if (x8 == x9)
             b.ne 0x800a908           // likely

    loc_0x0800a858: // orphan
         (x29, 2) = 3
         x19 = [var_a0h]          // 0x4 // 4
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_b0h
         hint 0x1d
         

    loc_0x0800a8bc: // orphan
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg_b0h
         0x800a8c4 ()             // 0x800a8c4(0x800a000, 0x0, 0x0, 0x0)

    loc_0x0800a8f4: // orphan
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg_b0h
         0x800a8fc ()             // 0x800a8fc(0x800a000, 0x0, 0x0, 0x0)
         x8 = [x19]               // 0xda // 218
         jmp 0x800a81c

    loc_0x0800a908: // orphan
         0x800a908 ()             // sym.reboot_handler_pre // 0x800a908(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800ff74 ===== */
int sym.paradise_gyro_init (int esi, int edx) {
    loc_0x800ff74:
        hint 0x19
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        hint 0x1d
        0x0800ff80
         // (break)
}

/* ===== 0x0800ad78 ===== */
int sym.paradise_supercalls_exit (int esi, int edx) {
    loc_0x800ad78:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800a000
        x0 = x0 + 0
        0x800ad90 ()  // 0x800ad90(0x800a000, 0x0, 0x0, 0x0)
        (x29, 2) = 3  // sp // sp
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800ada0
         // (break)
}

/* ===== 0x08012efc ===== */
int sym.paradise_hwbp_cleanup (int esi, int edx) {
    loc_0x8012efc:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x24,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x0 = 0x8012000
        x0 = x0 + 0
        0x8012f20 ()  // 0x8012f20(0x8012000, 0x0, 0x0, 0x0)
        x23 = 0x8012000
        x8 = [x23]    // 0xde // 222
        if !x8 jmp 0x8012fec // unlikely
            
    loc_0x8012fec:
        x19 = 0x8012000
        x0 = [x19]    // 0xda // 218
        0x8012ff4 ()  // 0x8012ff4(0x350320, 0x0, 0x0, 0x0)
        x0 = 0x8012000
        [x19] = xzr
        // XREFS: STRING 0x08013054  STRING 0x0801307c  STRING 0x0801317c
        // XREFS: CODE 0x08013180  STRING 0x08013454  CODE 0x0801345c
        // XREFS: STRING 0x080134a0  STRING 0x080134c8  STRING 0x08013648
        // XREFS: CODE 0x0801364c  STRING 0x0801391c  CODE 0x08013924
        // XREFS: STRING 0x080139c4  CODE 0x080139cc
        x0 = x0 + 0
        0x8013004 ()  // 0x8013004(0x8012000, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x08013020
         // } else {
    loc_0x8012f30:
        x8 = 0x8012000
        x8 = x8 + 0
        ldar x19,[x8]
        if !x19 jmp 0x8012fec // likely
        }
        return eax;
    loc_0x8012f40:
        x20 = 0x8012000
        x21 = 0x8012000
        w22 = ~0
        x24 = 0x8012000
        x20 = x20 + 0
        x21 = x21 + 0
         // do {
    loc_0x8012f58:
        // CODE XREF from sym.paradise_hwbp_cleanup @ 0x8012f84
        w0 = w22      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8012f60 ()  // 0x8012f60(0x0, 0x0, 0x0, 0x0)
        w8 = [x24]    // 0xdf // 223
        if (w0 == w8)
        b.hs 0x8012f88 // likely
         // } while (?);
        }
        return eax;
    loc_0x8012f70:
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w3 = 0x1
        w22 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8012f80 ()  // 0x8012f80(0x0, 0x0, 0x0, 0x1)
        jmp 0x8012f58
    loc_0x08012f88: // orphan
             x20 = 0x8012000
             x20 = x20 + 0
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8012f94 ()             // 0x8012f94(0x8012000, 0x0, 0x0, 0x0)
             x0 = 0x8012000
             x0 = x0 + 0
             0x8012fa0 ()             // 0x8012fa0(0x8012000, 0x0, 0x0, 0x0)
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8012fa8 ()             // 0x8012fa8(0x8012000, 0x0, 0x0, 0x0)
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8012fb0 ()             // 0x8012fb0(0x8012000, 0x0, 0x0, 0x0)
             x21 = 0x8012000
             x21 = x21 + 0
             x0 = x21 + 0x38
             0x8012fc0 ()             // 0x8012fc0(0x8012038, 0x0, 0x0, 0x0)
             x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8012fc8 ()             // 0x8012fc8(0x8012000, 0x0, 0x0, 0x0)
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8012fd0 ()             // 0x8012fd0(0x8012000, 0x0, 0x0, 0x0)
             w2 = 0x320
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w2 = 0x35                // '5'
             [x23] = xzr
             0x8012fe8 ()             // 0x8012fe8(0x0, 0x0, 0x350320, 0x0)

}

/* ===== 0x0800b8c4 ===== */
int sym.cfi_bypass (int esi, int edx) {
    loc_0x800b8c4:
        hint 0x19
        sp = sp - 0x120
        [x18] + 8 = x30
        [sp, 0xc0] = (x29,2)
        x29 = var_c0h
        [sp, 0xd0] = (x28,2)
        [sp, 0xe0] = (x26,2)
        [sp, 0xf0] = (x24,2)
        [sp, 0x100] = (x22,2)
        [sp, 0x110] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x26 = 0x800b000
        x23 = 0x800b000
        x19 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w21 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w20 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x26 = x26 + 0
        x23 = x23 + 0
        w22 = 0x18
        x28 = 0x800b000
        [x29 = x8
         // do {
    loc_0x800b91c:
        x8 = [x28]    // 0xe3 // 227
        if !x8 jmp 0x800b9cc // likely
         // } while (?);
        }
        return eax;
    loc_0x800b924:
        // CODE XREF from sym.cfi_bypass @ 0x800ba6c
        x9 = x19 * x22
        x27 = [x26 + x9] // 0xd0000000e1 // 893353197793
        x0 = x27      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        blr x8        // pstate(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800b9f8 // likely
            
    loc_0x800b9f8:
        // CODE XREF from sym.cfi_bypass @ 0x800ba3c
        w25 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800b9fc:
        // CODE XREFS from sym.cfi_bypass @ 0x800b9c8, 0x800ba58, 0x800ba8c, 0x800bc3c
        if (w21 == 0)
        ccmp w25,0,4, eq
        csel w21,w21,w25, eq
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800b938
    loc_0x800b944:
        madd x8,x19,x22, x26
        (x23, 2) = 3
        ldar w8,[x24]
        w9 = [x23]    // 0xde // 222
        if (w8 == w9)
        b.ne 0x800b994 // likely
            
    loc_0x800b994:
        x8 = x25 - 4
        [x29, -0x20] = (xzr,2)
        if (x8 != 4)
        [x29 = xzr
        b.hi 0x800ba90 // likely
            
    loc_0x800ba90:
        x8 = 0x800b000
        [var_sp_10h] = x25
        x8 = [x8]     // 0xcf // 207
        if x8 jmp 0x800bba4 // likely
            
    loc_0x800bba4:
        x9 = x24 + 4
        if (x19 == 6)
        [x29, -0x28] = (x24,2)
        b.ne 0x800bbbc // likely
            
    loc_0x800bbbc:
        x0 = x29 - 0x28
        x1 = x23      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = w25      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        blr x8        // pstate(0x177fd8, 0x0, 0x0, 0x0)
        w25 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if w0 jmp 0x800bc70 // likely
            
    loc_0x800bc70:
        x0 = 0x800b000
        x1 = x27      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
        x0 = x0 + 0   // int64_t arg1
        w2 = w25      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800bc80 ()  // 0x800bc80(0x800b000, 0x0, 0x0, 0x0)
        x23 = 0x800b000
        if (w25 == 1)
        x23 = x23 + 0
        b.lt 0x800b9fc // likely
    loc_0x800bc94:
        // CODE XREF from sym.cfi_bypass @ 0x800bc5c
        w20 = w25 + w20
        jmp 0x800ba08
         // do {
    loc_0x800ba08:
        // CODE XREF from sym.cfi_bypass @ 0x800bc98
        x19 = x19 + 1
        if (x19 == 7)
        b.ne 0x800b91c // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800b96c: // orphan
             if (x11 == x8)
             b.eq 0x800ba70           // likely

    loc_0x0800b974: // orphan
         ldar w12,[x9]
         x9 = x9 + 4
         w13 = [x10 + x8,lsl 2]   // 0xcf000000d1 // 889058230481
         x8 = x8 + 1
         if (w12 == w13)
         b.eq 0x800b96c           // likely

    loc_0x0800b98c: // orphan
         if (x8 == x25)
         b.hs 0x800ba70           // likely

    loc_0x0800b9cc: // orphan
         x0 = var_18h             // int64_t arg1
         [sp, 0x88] = (xzr,2)
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x38] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 0x48] = (x23,2)
         0x800b9f0 ()             // 0x800b9f0(0x178018, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x800ba18    // likely

    loc_0x0800ba14: // orphan
         jmp 0x800bc9c

    loc_0x0800ba18: // orphan
         x8 = [var_40h]           // 4
         x0 = var_18h             // int64_t arg1
         [x28] = x8
         0x800ba24 ()             // 0x800ba24(0x178018, 0x0, 0x0, 0x0)
         x1 = [x28]               // 0xe3 // 227
         if x1 jmp 0x800ba5c      // unlikely

    loc_0x0800ba30: // orphan
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg1
         0x800ba38 ()             // 0x800ba38(0x800b000, 0x0, 0x0, 0x0)
         jmp 0x800b9f8

    loc_0x0800ba40: // orphan
         x0 = 0x800b000
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         x0 = x0 + 0              // int64_t arg1
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800ba50 ()             // 0x800ba50(0x800b000, 0x0, 0x0, 0x0)
         w25 = ~0x15
         jmp 0x800b9fc

    loc_0x0800ba5c: // orphan
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg1
         0x800ba64 ()             // 0x800ba64(0x800b000, 0x0, 0x0, 0x0)
         x8 = [x28]               // 0xe3 // 227
         jmp 0x800b924

    loc_0x0800ba70: // orphan
         x0 = 0x800b000
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         x0 = x0 + 0              // int64_t arg1
         0x800ba7c ()             // 0x800ba7c(0x800b000, 0x0, 0x0, 0x0)
         x23 = 0x800b000
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = x23 + 0
         jmp 0x800b9fc

    loc_0x0800baa8: // orphan
         x8 = 0x800b000
         x0 = var_18h             // int64_t arg1
         x8 = x8 + 0
         [sp, 0x88] = (xzr,2)
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x38] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 0x48] = (x8,2)
         0x800bad4 ()             // 0x800bad4(0x178018, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x800bb00   // unlikely

    loc_0x0800badc: // orphan
         x8 = [var_40h]           // 4
         x0 = var_18h             // int64_t arg1
         [x28] = x8
         0x800bae8 ()             // 0x800bae8(0x178018, 0x0, 0x0, 0x0)
         x1 = [x28]               // 0xe3 // 227
         if x1 jmp 0x800bb0c      // unlikely

    loc_0x0800baf4: // orphan
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg1
         0x800bafc ()             // 0x800bafc(0x800b000, 0x0, 0x0, 0x0)

    loc_0x0800bb00: // orphan
         x8 = 0x800b000
         [x8] = xzr
         jmp 0x800bb38

    loc_0x0800bb0c: // orphan
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg1
         0x800bb14 ()             // 0x800bb14(0x800b000, 0x0, 0x0, 0x0)
         x8 = [x28]               // 0xe3 // 227

    loc_0x0800bb1c: // orphan
         x0 = 0x800b000
         x0 = x0 + 0
         blr x8                   // pstate(0x800b000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x800b000
         [x9] = x0
         if x0 jmp 0x800bba4      // likely

    loc_0x0800bb38: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x800bb08
         w8 = w25 << 2
         if (w25 == 1)
         [var_4h] = w20
         [var_8h] = x8
         b.lt 0x800bb7c           // likely

    loc_0x0800bb4c: // orphan
         x8 = [var_8h]            // 0x4 // 4
         x26 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = w8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800bb58: // orphan
         x8 = 0x800b000
         w1 = [x23 + x26]         // 0xe1000000de // 966367641822
         x0 = x24 + x26
         x8 = [x8]                // 0xcf // 207
         blr x8                   // 0x800b000(0x0, 0x0, 0x0, 0x0)
         if w0 jmp 0x800bc60      // unlikely

    loc_0x0800bb70: // orphan
         x26 = x26 + 4
         if (x26 == x20)
         b.lt 0x800bb58           // unlikely

    loc_0x0800bb7c: // orphan
         x8 = 0x800b000
         x9 = [var_8h]            // 0x4 // 4
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         x1 = x24 + w9,sxtw
         blr x8                   // 0x800b000(0x0, 0x0, 0x0, 0x0)
         w20 = [var_4h]           // 4
         x26 = 0x800b000
         x26 = x26 + 0
         jmp 0x800bbd4

    loc_0x0800bbe8: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x24 + 4
         x10 = x23 + 4
         x11 = x14 - 1

    loc_0x0800bbf8: // orphan
         if (x11 == x8)
         b.eq 0x800bc40           // likely

    loc_0x0800bc00: // orphan
         ldar w12,[x9]
         x9 = x9 + 4
         w13 = [x10 + x8,lsl 2]   // 0xcf000000d1 // 889058230481
         x8 = x8 + 1
         if (w12 == w13)
         b.eq 0x800bbf8           // likely

    loc_0x0800bc18: // orphan
         if (x8 == x14)
         b.hs 0x800bc40           // likely

    loc_0x0800bc20: // orphan
         x0 = 0x800b000
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         x0 = x0 + 0              // int64_t arg1
         0x800bc2c ()             // 0x800bc2c(0x800b000, 0x0, 0x0, 0x0)
         x23 = 0x800b000
         w25 = ~0x4
         x23 = x23 + 0
         jmp 0x800b9fc

    loc_0x0800bc40: // orphan
         x0 = 0x800b000
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         x0 = x0 + 0              // int64_t arg1
         0x800bc4c ()             // 0x800bc4c(0x800b000, 0x0, 0x0, 0x0)
         x23 = 0x800b000
         w25 = 0x1
         x23 = x23 + 0
         jmp 0x800bc94

    loc_0x0800bc60: // orphan
         x26 = 0x800b000
         w25 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w20 = [var_4h]           // 4
         x26 = x26 + 0

    loc_0x0800bc9c: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x800ba14
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x5e0]        // 0xcf // 207
         if (w20 == 0)
         ldur x9,[x29,-0x10]
         csel w0,w21,w20, eq
         if (x8 == x9)
         b.ne 0x800bce0           // likely

    loc_0x0800bcb8: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_120h
         hint 0x1d
         

    loc_0x0800bce0: // orphan
         0x800bce0 ()             // 0x800bce0(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x0800afdc ===== */
int sym.kallsyms_lookup_name_ex (int esi, int edx) {
    loc_0x800afdc:
        hint 0x19
        sp = sp - 0xb0
        [x18] + 8 = x30
        [sp, 0x90] = (x29,2)
        x29 = var_90h
        [sp, 0xa0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x800a000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        // XREFS(99)
        stlxrb w0,w0,[x0] // arg1
        0x0800b004
        // DATA XREF from sym.hide_module @ 0x800b894
        x8 = [x20]    // 0xdb // 219
        if !x8 jmp 0x800b01c // unlikely
            
    loc_0x800b01c:
        x8 = 0x800b000
        x0 = var_8h   // int64_t arg1
        x8 = x8 + 0
        [sp, 0x78] = (xzr,2)
        [sp, 0x68] = (xzr,2)
        [sp, 0x58] = (xzr,2)
        [sp, 0x48] = (xzr,2)
        [sp, 0x28] = (xzr,2)
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        [sp, 0x38] = (x8,2)
        // CODE XREF from sym.hide_module @ 0x800b8a0
        0x800b048 ()  // 0x800b048(0x178008, 0x0, 0x0, 0x0)
        tbz w0,0x1f,0x800b080 // likely
            
    loc_0x800b080:
        x8 = [var_30h] // 0x4 // 4
        x0 = var_8h   // int64_t arg1
        [x20] = x8
        0x800b08c ()  // 0x800b08c(0x178008, 0x0, 0x0, 0x0)
        x1 = [x20]    // 0xdb // 219
        if x1 jmp 0x800b0a8 // unlikely
            
    loc_0x800b0a8:
        x0 = 0x800b000
        x0 = x0 + 0   // int64_t arg1
        0x800b0b0 ()  // 0x800b0b0(0x800b000, 0x0, 0x0, 0x0)
        x8 = [x20]    // 0xdb // 219
        jmp 0x800b010
    loc_0x0800b010: // orphan
             // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x800b0b8
             // DATA XREF from sym.cfi_bypass @ 0x800b948
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             blr x8                   // pstate(0x0, 0x0, 0x0, 0x0)
             jmp 0x800b054

    loc_0x0800b050: // orphan
         // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x800b0a4
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800b054: // orphan
         // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x800b018
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x5e0]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x800b0bc           // likely

    loc_0x0800b068: // orphan
         (x20, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_b0h
         hint 0x1d
         

    loc_0x0800b098: // orphan
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg1
         0x800b0a0 ()             // 0x800b0a0(0x800b000, 0x0, 0x0, 0x0)
         jmp 0x800b050

    loc_0x0800b0bc: // orphan
         0x800b0bc ()             // sym.get_target_task // 0x800b0bc(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800b86c ===== */
int sym.hide_module (int esi, int edx) {
    loc_0x800b86c:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x800b000
        x19 = x19 + 0
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800b88c ()  // 0x800b88c(0x800b000, 0x0, 0x0, 0x0)
        tbz w0,0,0x800b8a0 // likely
            
    loc_0x800b8a0:
        x0 = x19 + 0x48
        [x19] = x19
        [x19 + 8] = x19
        0x800b8ac ()  // 0x800b8ac(0x48, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800b8c0
         // } else {
    loc_0x800b894:
        (x9, 2) = 3
        [x9 + 8] = x8
        [x8] = x9
        }
        return eax;
}

/* ===== 0x0800ff84 ===== */
int sym.paradise_gyro_exit (int esi, int edx) {
    loc_0x800ff84:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x800f000
        x19 = x19 + 0
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800ffa4 ()  // 0x800ffa4(0x800f000, 0x0, 0x0, 0x0)
        x20 = 0x800f000
        x8 = 0x800f000
        x20 = x20 + 0
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x8] = (byte) wzr
        0x800ffbc ()  // 0x800ffbc(0x800f000, 0x0, 0x0, 0x0)
        0x800ffc0 ()  // 0x800ffc0(0x800f000, 0x0, 0x0, 0x0)
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800ffc8 ()  // 0x800ffc8(0x800f000, 0x0, 0x0, 0x0)
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800ffd0 ()  // 0x800ffd0(0x800f000, 0x0, 0x0, 0x0)
        x0 = 0x800f000
        x0 = x0 + 0
        0x800ffdc ()  // 0x800ffdc(0x800f000, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        (x29, 2) = 3  // sp // sp
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800fff0
         // (break)
}

/* ===== 0x0800dc98 ===== */
int sym.paradise_hide_cleanup (int esi, int edx) {
    loc_0x800dc98:
        hint 0x19
        sp = sp - 0x80
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        [sp, 0x30] = (x28,2)
        [sp, 0x40] = (x26,2)
        [sp, 0x50] = (x24,2)
        [sp, 0x60] = (x22,2)
        [sp, 0x70] = (x20,2)
        x19 = 0x800d000
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x19 + 0
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
        x26 = 0x100
        x26 = 0xdead  // '\xad\xde'
        [x29 = x8
        0x800dce0 ()  // 0x800dce0(0x800d000, 0x0, 0x0, 0x0)
        x20 = 0x800d000
        x8 = 0x800d000
        x20 = x20 + 0
        x8 = x8 + 0
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
        [x8] = wzr
        [x8 + 4] = wzr
        [x8 + 8] = wzr
        [x8 + 0xc] = wzr
        [x8 + 0x10] = wzr
        [x8 + 0x14] = wzr
        [x8 + 0x18] = wzr
        [x8 + 0x1c] = wzr
        0x800dd18 ()  // 0x800dd18(0x800d000, 0x0, 0x0, 0x0)
        x21 = 0x800d000
        x21 = x21 + 0
        x0 = x21 + 0x70 // int64_t arg_80h
        0x800dd28 ()  // 0x800dd28(0x800d070, 0x0, 0x0, 0x0)
        x0 = x21 + 0x38 // int64_t arg_80h
        0x800dd30 ()  // 0x800dd30(0x800d038, 0x0, 0x0, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
        0x800dd38 ()  // 0x800dd38(0x800d000, 0x0, 0x0, 0x0)
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
        0x800dd40 ()  // 0x800dd40(0x800d000, 0x0, 0x0, 0x0)
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
        0x800dd48 ()  // 0x800dd48(0x800d000, 0x0, 0x0, 0x0)
        x19 = 0x800d000
        x19 = x19 + 0
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
        0x800dd58 ()  // 0x800dd58(0x800d000, 0x0, 0x0, 0x0)
        x8 = 0x800d000
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
        x8 = x8 + 0
        [x8] = wzr
        [x8 + 4] = wzr
        [x8 + 8] = wzr
        [x8 + 0xc] = wzr
        [x8 + 0x10] = wzr
        [x8 + 0x14] = wzr
        [x8 + 0x18] = wzr
        [x8 + 0x1c] = wzr
        0x800dd88 ()  // 0x800dd88(0x800d000, 0x0, 0x0, 0x0)
        x0 = 0x800d000
        x0 = x0 + 0   // int64_t arg_80h
        0x800dd94 ()  // 0x800dd94(0x800d000, 0x0, 0x0, 0x0)
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
        0x800dd9c ()  // 0x800dd9c(0x800d000, 0x0, 0x0, 0x0)
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
        0x800dda4 ()  // 0x800dda4(0x800d000, 0x0, 0x0, 0x0)
        x19 = 0x800d000
        x27 = 0x800d000
        x20 = 0x800d000
        x21 = 0x800d000
        x19 = x19 + 0
        x27 = x27 + 0
        x28 = 0x800d000
        x22 = 0x800d000
        x20 = x20 + 0
        x21 = x21 + 0
        jmp 0x800dddc
         // do {
    loc_0x800dddc:
        // CODE XREF from sym.paradise_hide_cleanup @ 0x800ddd0
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
        0x800dde0 ()  // 0x800dde0(0x0, 0x0, 0x0, 0x0)
        ldar x8,[x27]
        if (x8 == x27)
        b.eq 0x800ded0 // likely
         // } while (?);
        }
        return eax;
    loc_0x800ddf0:
        x23 = [x28]   // 0xe3 // 227
        x0 = x23      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
        0x800ddf8 ()  // 0x800ddf8(0x0, 0x0, 0x0, 0x0)
        tbz w0,0,0x800de0c // likely
            
    loc_0x800de0c:
        x8 = x26 + 0x22
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
        [x23] = (x26,2)
        0x800de18 ()  // 0x800de18(0x0, 0x0, 0x0, 0x0)
        w8 = (byte) [x23 + 0x210] // 0xde // 222
        if !w8 jmp 0x800ddd4 // unlikely
            
    loc_0x800ddd4:
        // CODE XREFS from sym.paradise_hide_cleanup @ 0x800de98, 0x800decc
        x0 = x23      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_80h
        0x800ddd8 ()  // 0x800ddd8(0x0, 0x0, 0x0, 0x0)
    loc_0x0800de00: // orphan
             (x9, 2) = 3
             [x9 + 8] = x8            // "\""
             [x8] = x9

    loc_0x0800de24: // orphan
         0x800de24 ()             // 0x800de24(0x0, 0x0, 0x0, 0x0)
         if w0 jmp 0x800ddd4      // unlikely

    loc_0x0800de2c: // orphan
         x25 = [x22]              // 0xdd // 221
         x0 = 0xfc4e              // 'N\xfc'
         x0 = 0xb839              // '9\xb8'
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0xb54e              // 'N\xb5'
         x24 = x23 + 0x10
         x0 = 0xe1d0              // '\xd0\xe1' // int64_t arg_80h
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 8] = (xzr,2)
         0x800de50 ()             // 0x800de50(0xe1d0b54eb839fc4e, 0x0, 0x0, 0x0)
         x2 = var_sp_8h
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x1
         blr x25                  // pstate(0x10, 0x1, 0x178008, 0x0)
         if w0 jmp 0x800ddd4      // likely

    loc_0x0800de68: // orphan
         x8 = 0x800d000
         x0 = 0x3608
         x0 = 0x8284              // '\x84\x82'
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x7b12              // '\x12{'
         x24 = [x8]               // 0xcf // 207
         x0 = 0xbadc              // '\xdc\xba' // int64_t arg_80h
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800de88 ()             // 0x800de88(0xbadc7b1282843608, 0x0, 0x0, 0x0)
         x0 = var_sp_8h
         w1 = 0x2
         blr x24                  // pstate(0x178008, 0x2, 0x0, 0x0)
         if !w0 jmp 0x800ddd4     // unlikely

    loc_0x0800de9c: // orphan
         x8 = 0x800d000
         x0 = 0x2fea              // '\xea/'
         x0 = 0x52a8              // '\xa8R'
         x2 = 0x800d000
         x0 = 0xfc99              // '\x99\xfc'
         x2 = x2 + 0
         x24 = [x8]               // 0xcf // 207
         x0 = 0xae50              // 'P\xae' // int64_t arg_80h
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800dec0 ()             // 0x800dec0(0xae50fc9952a82fea, 0x0, 0x800d000, 0x0)
         x0 = var_sp_8h
         blr x24                  // pstate(0x178008, 0x0, 0x800d000, 0x0)
         jmp 0x800ddd4

    loc_0x0800ded0: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg_80h
         0x800ded8 ()             // 0x800ded8(0x800d000, 0x0, 0x0, 0x0)
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x5e0]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x800df18           // likely

    loc_0x0800def0: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_80h
         hint 0x1d
         

    loc_0x0800df18: // orphan
         // CODE XREF from sym.paradise_hide_cleanup @ 0x800deec
         0x800df18 ()             // 0x800df18(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08012020 ===== */
int sym.inline_hook_remove_all (int esi, int edx) {
    loc_0x8012020:
        hint 0x19
        sp = sp - 0x110
        [x18] + 8 = x30 // "\""
        [sp, 0xb0] = (x29,2)
        x29 = var_b0h
        [sp, 0xc0] = (x28,2)
        // CODE XREF from sym.paradise_hwbp_cleanup @ 0x8012fbc
        [sp, 0xd0] = (x26,2)
        [sp, 0xe0] = (x24,2)
        [sp, 0xf0] = (x22,2)
        [sp, 0x100] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8012000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = x0 + 0   // int64_t arg_110h
        [x29 = x8
        0x801205c ()  // 0x801205c(0x8012000, 0x0, 0x0, 0x0)
        x8 = 0x8012000
        x26 = 0x8012000
        x8 = x8 + 0
        x21 = 0x8012000
        x23 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w24 = 0x1
        x25 = x8 + 0x1d0
        x26 = x26 + 0
        x27 = 0x8012000
        x28 = 0x8012000
        x21 = x21 + 0
        jmp 0x80120b8
         // do {
    loc_0x80120b8:
        // CODE XREF from sym.inline_hook_remove_all @ 0x801208c
        ubfx x8,x23,6, 0x1a // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = x24 << x23
        x8 = [x26 + x8,lsl 3] // 0xcf000000e1 // 889058230497
        if ((x8 & x20) == 0)
        b.eq 0x80120a8 // likely
         // } while (?);
        }
        return eax;
    loc_0x80120cc:
        x22 = x25     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x27]    // 0xe2 // 226
        x19 = [x22] + 0xffffffffffffff14 // 0xdd // 221
        if !x8 jmp 0x801210c // likely
            
    loc_0x801210c:
        x8 = [x28]    // 0xe3 // 227
        if !x8 jmp 0x801214c // likely
            
    loc_0x801214c:
        x8 = 0x8012000
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_110h
        x8 = x8 + 0
        [sp, 0x70] = (xzr,2)
        [sp, 0x60] = (xzr,2)
        [sp, 0x50] = (xzr,2)
        [sp, 0x40] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [sp, 0x10] = (xzr,2)
        [sp] = (xzr,2)
        [sp, 0x30] = (x8,2)
        0x8012178 ()  // 0x8012178(0x178000, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x80121e0 // unlikely
            
    loc_0x80121e0:
        // CODE XREF from sym.inline_hook_remove_all @ 0x8012220
        [x27] = xzr
         // do {
    loc_0x80121e4:
        // CODE XREFS from sym.inline_hook_remove_all @ 0x8012108, 0x8012128, 0x8012148
        x8 = x23 >> 6
        x8 = x26 + x8,lsl 3
        jmp 0x8012090
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80120dc
    loc_0x80120f8:
        x0 = x29 - 0x30
        x1 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x4
        blr x8        // "7" // pstate(0x177fd0, 0x0, 0x4, 0x0)
        jmp 0x80121e4
    loc_0x08012090: // orphan
             // CODE XREF from sym.inline_hook_remove_all @ 0x80121ec
             bti j
             prfm pstl1strm,[x8]

    loc_0x08012098: // orphan
         ldxr x9,[x8]
         bic x9,x9,x20            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w10,x9,[x8]
         if w10 jmp 0x8012098     // unlikely

    loc_0x080120a8: // orphan
         x23 = x23 + 1
         x25 = x25 + 0x1e0
         if (x23 == 0x20)
         b.eq 0x8012238           // unlikely

    loc_0x08012128: // orphan
         jmp 0x80121e4

    loc_0x0801212c: // orphan
         x8 = [x28]               // 0xe3 // 227
         if !x8 jmp 0x80121ac     // likely

    loc_0x08012134: // orphan
         // CODE XREF from sym.inline_hook_remove_all @ 0x8012234
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x8                   // pstate(0x0, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x27] = x0
         if x0 jmp 0x80120f8      // unlikely

    loc_0x08012148: // orphan
         jmp 0x80121e4

    loc_0x08012198: // orphan
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg_110h
         0x80121a0 ()             // 0x80121a0(0x8012000, 0x0, 0x0, 0x0)
         x8 = [x28]               // 0xe3 // 227
         jmp 0x8012114

    loc_0x080121ac: // orphan
         x8 = 0x8012000
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_110h
         x8 = x8 + 0
         [sp, 0x70] = (xzr,2)
         [sp, 0x60] = (xzr,2)
         [sp, 0x50] = (xzr,2)
         [sp, 0x40] = (xzr,2)
         [sp, 0x20] = (xzr,2)
         [sp, 0x10] = (xzr,2)
         // CODE XREF from sym.inline_hook_remove_all @ 0x8012078
         [sp] = (xzr,2)
         [sp, 0x30] = (x8,2)
         0x80121d8 ()             // 0x80121d8(0x178000, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x80121fc    // likely

    loc_0x080121fc: // orphan
         x8 = [var_28h]           // 0x4 // 4
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_110h
         [x28] = x8
         0x8012208 ()             // 0x8012208(0x178000, 0x0, 0x0, 0x0)
         x1 = [x28]               // 0xe3 // 227
         if x1 jmp 0x8012224      // unlikely

    loc_0x08012214: // orphan
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg_110h
         0x801221c ()             // 0x801221c(0x8012000, 0x0, 0x0, 0x0)
         jmp 0x80121e0

    loc_0x08012224: // orphan
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg_110h
         0x801222c ()             // 0x801222c(0x8012000, 0x0, 0x0, 0x0)
         x8 = [x28]               // 0xe3 // 227
         jmp 0x8012134

    loc_0x08012238: // orphan
         x0 = 0x8012000
         x0 = x0 + 0              // int64_t arg_110h
         0x8012240 ()             // 0x8012240(0x8012000, 0x0, 0x0, 0x0)
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x5e0]        // 0xcf // 207
         ldur x9,[x29,-0x10]
         if (x8 == x9)
         b.ne 0x8012280           // likely

    loc_0x08012258: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_110h
         hint 0x1d
         

    loc_0x08012280: // orphan
         0x8012280 ()             // sym.ret_trampoline_finish_task_switch // 0x8012280(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x08009df8 ===== */
int sym.__cfi_check_fail (int esi, int edx) {
    loc_0x8009df8:
        hint 0x19
        [x18] + 8 = x30 // "\""
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8009e4c // likely
            
    loc_0x8009e4c:
        brk 0x5502
         // } else {
    loc_0x8009e0c:
        w8 = (byte) [x0] // 0xc7 // 199 // arg1
        if (w8 == 4)
        b.ls 0x8009e28 // likely
        }
        return eax;
    loc_0x8009e18:
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x08009e24
         // (break)
    loc_0x08009e28: // orphan
             x9 = 0x8009000
             x9 = x9 + 0
             x10 = 0x8009e40
             w11 = (byte) [x9 + x8]   // 0xcf000000d0 // 889058230480
             x10 = x10 + x11,lsl 2
             br x10

}

/* ===== 0x08009e50 ===== */
int sym.paradise_get_file_private (int esi, int edx) {
    loc_0x8009e50:
        hint 0x19
        x8 = 0x8009000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8009e74 // unlikely
            
    loc_0x8009e74:
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        hint 0x1d
        0x08009e7c
         // } else {
    loc_0x8009e60:
        x9 = [x8 + 0x28] // 0xcf // 207
        x10 = 0x8009000
        x10 = x10 + 0
        if (x9 == x10)
        b.eq 0x8009e80 // unlikely
        }
        return eax;
    loc_0x8009e80:
        x0 = [x8 + 0xd8] // 0xcf // 207
        hint 0x1d
        0x08009e88
         // (break)
}

/* ===== 0x0800a684 ===== */
int sym.paradise_install_fd (int esi, int edx) {
    loc_0x800a684:
        hint 0x19
        [x18] + 8 = x30 // "\""
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x798] // 0xcf // 207
        w9 = [x8 + 4] // 0xcf // 207
        w8 = [x8 + 0x14] // 0xcf // 207
        w8 = w9 | w8
        if w8 jmp 0x800a7e4 // likely
            
    loc_0x800a7e4:
        w19 = ~0
        jmp 0x800a754
         // do {
    loc_0x800a754:
        // CODE XREFS from sym.paradise_install_fd @ 0x800a77c, 0x800a798, 0x800a7e0, 0x800a7e8
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800a76c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800a6b4
    loc_0x800a6c4:
        x0 = 0x800a000
        x1 = 0x800a000
        w3 = 0x2
        x0 = x0 + 0
        x1 = x1 + 0
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w3 = 0x8
        0x800a6e0 ()  // 0x800a6e0(0x800a000, 0x800a000, 0x0, 0x80002)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x0 != 0xfff)
        b.hs 0x800a780 // likely
            
    loc_0x800a780:
        x0 = 0x800a000
        x0 = x0 + 0
        0x800a788 ()  // 0x800a788(0x800a000, 0x0, 0x0, 0x0)
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800a790 ()  // 0x800a790(0x0, 0x0, 0x0, 0x0)
        w19 = w20     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800a754
    loc_0x0800a6f0: // orphan
             x22 = 0x800a000
             w1 = 0xcc0               // '\xc0\f'
             w2 = 0x8                 // "\""
             x0 = [x22]               // 0xdd // 221
             0x800a700 ()             // 0x800a700(0x800a000, 0xcc0, 0x8, 0x0)
             if !x0 jmp 0x800a79c     // unlikely

    loc_0x0800a708: // orphan
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = [x22]               // 0xdd // 221
         w1 = 0xcc0               // '\xc0\f'
         w2 = 0x18
         0x800a718 ()             // 0x800a718(0x0, 0xcc0, 0x18, 0x0)
         if !x0 jmp 0x800a7b4     // likely

    loc_0x0800a720: // orphan
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x80                // '\x80'
         w1 = 0xcc0               // '\xc0\f'
         0x800a72c ()             // 0x800a72c(0x80, 0xcc0, 0x0, 0x0)
         [x22] = x0
         if !x0 jmp 0x800a7ac     // unlikely

    loc_0x0800a738: // orphan
         w8 = 0x10
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x21] = x22
         [x22, 8] = (xzr,2)
         [x20 + 0xd8] = x21
         0x800a750 ()             // 0x800a750(0x0, 0x0, 0x0, 0x0)

    loc_0x0800a770: // orphan
         x0 = 0x800a000
         x0 = x0 + 0
         0x800a778 ()             // 0x800a778(0x800a000, 0x0, 0x0, 0x0)
         jmp 0x800a754

    loc_0x0800a79c: // orphan
         x0 = 0x800a000
         x0 = x0 + 0
         0x800a7a4 ()             // "\t" // 0x800a7a4(0x800a000, 0x0, 0x0, 0x0)
         jmp 0x800a7cc

    loc_0x0800a7ac: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800a7b0 ()             // 0x800a7b0(0x0, 0x0, 0x0, 0x0)

    loc_0x0800a7b4: // orphan
         x0 = 0x800a000
         [x21] = xzr
         x0 = x0 + 0
         0x800a7c0 ()             // 0x800a7c0(0x800a000, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800a7c8 ()             // 0x800a7c8(0x0, 0x0, 0x0, 0x0)

    loc_0x0800a7cc: // orphan
         // CODE XREF from sym.paradise_install_fd @ 0x800a7a8
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800a7d0 ()             // 0x800a7d0(0x0, 0x0, 0x0, 0x0)
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800a7d8 ()             // 0x800a7d8(0x0, 0x0, 0x0, 0x0)
         w19 = ~0xb
         jmp 0x800a754

}

/* ===== 0x0800bcf4 ===== */
int sym.do_read_physical_memory (int esi, int edx) {
    loc_0x800bcf4:
        hint 0x19
        sp = sp - 0xd0
        [x18] + 8 = x30
        [sp, 0x70] = (x29,2)
        x29 = var_70h
        [sp, 0x80] = (x28,2)
        [sp, 0x90] = (x26,2)
        [sp, 0xa0] = (x24,2)
        [sp, 0xb0] = (x22,2)
        [sp, 0xc0] = (x20,2)
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = var_30h  // int64_t arg1
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_d0h
        w2 = 0x28     // '('
        [x29 = x8
        [sp, 0x48] = (xzr,2)
        [sp, 0x38] = (xzr,2)
        [var_30h] = xzr
        0x800bd44 ()  // "`" // 0x800bd44(0x177f60, 0x0, 0x28, 0x0)
        if !x0 jmp 0x800bd54 // unlikely
            
    loc_0x800bd54:
        x8 = [var_48h] // 4
        if !x8 jmp 0x800bdc8 // likely
            
    loc_0x800bdc8:
        w25 = ~0x15
        jmp 0x800be4c
         // do {
    loc_0x800be4c:
        // CODE XREFS from sym.do_read_physical_memory @ 0x800bd50, 0x800bdc4, 0x800bdcc
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800c2a4 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800bd68: // orphan
             w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800bd70 ()             // 0x800bd70(0x0, 0x0, 0x0, 0x0)
             x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             0x800bd7c ()             // 0x800bd7c(0x0, 0x0, 0x0, 0x0)
             if !x20 jmp 0x800bdc0    // likely

    loc_0x0800bd84: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800bd88 ()             // 0x800bd88(0x0, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x20 + 0x38
         jmp 0x800bdd0

    loc_0x0800bdb0: // orphan
         dmb ishld
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800bdb8 ()             // 0x800bdb8(0x0, 0x0, 0x0, 0x0)
         if x19 jmp 0x800be00     // unlikely

    loc_0x0800bdc0: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x800c2a0
         w25 = ~0x2
         jmp 0x800be4c

    loc_0x0800bdd0: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x800bd94
         bti j
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x0800bddc: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800bddc     // unlikely

    loc_0x0800bdec: // orphan
         if (w8 == 1)
         b.eq 0x800bdb0           // unlikely

    loc_0x0800bdf4: // orphan
         if (w8 == 0)
         jmp ifle 0x800c294       // likely

    loc_0x0800bdfc: // orphan
         if !x19 jmp 0x800bdc0    // likely

    loc_0x0800be00: // orphan
         x26 = [x19 + 0x40]       // 0xda // 218
         x2 = x29 - 0x10
         x1 = [var_38h]           // 0x4 // 4 // int64_t arg_d0h
         x3 = x29 - 0x18
         [x29 = xzr
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800be18 ()             // 0x800be18(-1, 0x0, 0x177ff0, 0x177fe8)
         ldur x8,[x29,-0x10]
         if (w0 == 0)
         x1 = var_30h             // int64_t arg_d0h
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x28                // '('
         csel x8,xzr,x8, lt
         [var_48h_2] = x8
         0x800be38 ()             // 0x800be38(0x0, 0x178030, 0x28, 0x177fe8)
         if !x0 jmp 0x800be8c     // likely

    loc_0x0800be40: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x800c270
         w25 = ~0xd

    loc_0x0800be44: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x800c268, 0x800c290
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800be48 ()             // 0x800be48(0x0, 0x0, 0x0, 0x0)

    loc_0x0800be60: // orphan
         w0 = w25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_d0h
         hint 0x1d
         

    loc_0x0800be8c: // orphan
         x21 = 0x800b000
         x20 = 0x800b000
         x8 = [x21]               // 0xdc // 220
         if x8 jmp 0x800beb0      // likely

    loc_0x0800be9c: // orphan
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg1
         0x800bea4 ()             // 0x800bea4(0x800b000, 0x0, 0x0, 0x0)
         [x21] = x0
         if !x0 jmp 0x800bec8     // unlikely

    loc_0x0800beb0: // orphan
         x8 = [x20]               // 0xdb // 219
         if x8 jmp 0x800bec8      // likely

    loc_0x0800beb8: // orphan
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg1
         0x800bec0 ()             // 0x800bec0(0x800b000, 0x0, 0x0, 0x0)
         [x20] = x0

    loc_0x0800bec8: // orphan
         x8 = 0x800b000
         x8 = [x8]                // 0xcf // 207
         if x8 jmp 0x800bee8      // likely

    loc_0x0800bed4: // orphan
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg1
         0x800bedc ()             // 0x800bedc(0x800b000, 0x0, 0x0, 0x0)
         x8 = 0x800b000
         [x8] = x0

    loc_0x0800bee8: // orphan
         x24 = [var_48h]          // 4
         if !x24 jmp 0x800c264    // likely

    loc_0x0800bef0: // orphan
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = [var_38h]          // 0x4 // 4
         x22 = 0x800b000
         [sp, 0x10] = (x26,2)
         jmp 0x800bf10

    loc_0x0800bf04: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x800bffc, 0x800c260
         (x26, 2) = 3
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x24 jmp 0x800be44    // likely

    loc_0x0800bf10: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x800bf00
         x2 = var_28h
         x3 = var_20h
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_d0h
         [sp, 0x20] = (xzr,2)
         0x800bf24 ()             // 0x800bf24(0x0, 0x0, 0x178028, 0x178020)
         tbnz w0,0x1f,0x800c01c   // unlikely

    loc_0x0800bf2c: // orphan
         x8 = [var_20h]           // 0x4 // 4
         if (x24 == x8)
         csel x27,x24,x8, lo
         if !x27 jmp 0x800bf04    // likely

    loc_0x0800bf3c: // orphan
         x28 = [var_28h]          // 0x4 // 4

    loc_0x0800bf40: // orphan
         x8 = x28 & 0xfff
         x10 = [x22]              // 0xdd // 221
         w11 = 0x1000
         x0 = 0x7cb5              // '\xb5|'
         x8 = x11 - x8
         x0 = 0x7660              // '`v'
         if (x8 == x27)
         x0 = 0xb0a0              // '\xa0\xb0'
         csel x25,x8,x27, lo
         x8 = x28 - x10
         x23 = x8 | 0xffffff8000000000
         x8 = 0x800b000
         x2 = 0x800b000
         x9 = [var_40h]           // 4
         x0 = 0xb3b5              // '\xb5\xb3' // int64_t arg1
         x2 = x2 + 0
         x26 = [x8]               // 0xcf // 207
         x19 = x22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x22 = x9 + x20
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_d0h
         0x800bf90 ()             // 0x800bf90(0xb3b5b0a076607cb5, 0x800b000, 0x800b000, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x26                  // 0x800b000(0x0, 0xfffffffff7ff5000, 0x0, 0x0)
         x8 = 0x800b000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x800c000     // unlikely

    loc_0x0800bfb0: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x800c018
         w8 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x25 + x23
         x10 = !x8
         x11 = x9 - 1
         x9 = x23 & x10
         x10 = x11 & x10

    loc_0x0800bfc8: // orphan
         dc civac,x9
         x9 = x9 + x8
         if (x9 == x10)
         b.ls 0x800bfc8           // likely

    loc_0x0800bfd8: // orphan
         dsb sy
         if x0 jmp 0x800c26c      // unlikely

    loc_0x0800bfe0: // orphan
         x22 = x19                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x28 = x25 + x28
         x21 = x25 + x21
         x20 = x25 + x20
         x24 = x24 - x25
         x27 = x27 - x25
         b.ne 0x800bf40           // likely

    loc_0x0800bffc: // orphan
         jmp 0x800bf04

    loc_0x0800c000: // orphan
         // XREFS(37)
         mrs x8,ctr_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x4
         ubfx w8,w8,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w9 << w8
         x9 = 0x800c000
         [x9] = w8                // "("
         jmp 0x800bfb0

    loc_0x0800c01c: // orphan
         x8 = 0x800c000
         w25 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x800be44     // unlikely

    loc_0x0800c02c: // orphan
         ubfx x8,x21,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x26 + x8,lsl 3
         ldar x8,[x8]
         [x29 = x8
         x8 = x29 - 0x10
         ldar x8,[x8]
         [x29 = x8
         x8 = x29 - 0x18
         ldar x8,[x8]
         w9 = ~w8
         if ((x9 & 3) == 0)
         b.ne 0x800be44           // likely

    loc_0x0800c05c: // orphan
         x9 = [x22]               // 0xdd // 221
         x8 = x8 & 0x7ffffff000
         x8 = x8 - x9
         ubfx x9,x21,0x15, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 | 0xffffff8000000000
         x8 = x8 + x9,lsl 3
         ldar x8,[x8]
         w9 = ~w8
         if ((x9 & 3) == 0)
         b.ne 0x800be44           // likely

    loc_0x0800c084: // orphan
         x9 = [x22]               // 0xdd // 221
         x8 = x8 & 0x7ffffff000
         x8 = x8 - x9
         ubfx x9,x21,0xc, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 | 0xffffff8000000000
         x8 = x8 + x9,lsl 3
         x9 = 0x1
         x9 = 0x400
         ldar x8,[x8]
         x9 = x8 & x9
         if (x8 == 0)
         ccmp x9,0,0, ne
         ubfx x23,x8,2, 6         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ccmp w23,0x1e,2, eq
         b.hs 0x800be44           // likely

    loc_0x0800c0c0: // orphan
         x9 = x8 << 0x38
         ubfx x22,x8,8, 0x32      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x9 & 0xfc00000000000000
         x8 = x22 | x8
         if !x8 jmp 0x800be44     // likely

    loc_0x0800c0d4: // orphan
         x28 = x21 & 0xfff
         w8 = 0x1000
         x8 = x8 - x28
         w1 = 0xc00
         if (x24 == x8)
         csel x27,x24,x8, lo
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c0f0 ()             // 0x800c0f0(0x0, 0xc00, 0x0, 0x0)
         if !x0 jmp 0x800be44     // likely

    loc_0x0800c0f8: // orphan
         x8 = x27 + x28
         [sp] = (x28,2)
         if (x8 == 1)
         b.hi 0x800c288           // unlikely

    loc_0x0800c108: // orphan
         x8 = 0x800c000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x800c288     // unlikely

    loc_0x0800c114: // orphan
         x26 = [x8 + x23,lsl 3]   // 0xde000000cf // 953482739919
         if !x26 jmp 0x800c288    // unlikely

    loc_0x0800c11c: // orphan
         x8 = [x26 + 0xa0]        // 0xe1 // 225
         if !x8 jmp 0x800c288     // unlikely

    loc_0x0800c124: // orphan
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0xc00
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800c138 ()             // "`\n" // 0x800c138(0xc00, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800c288     // unlikely

    loc_0x0800c140: // orphan
         x2 = 0x800c000
         x28 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0xc00
         w1 = 0x1
         x2 = x2 + 0
         0x800c154 ()             // " \t" // 0x800c154(0xc00, 0x1, 0x800c000, 0x0)
         if !x0 jmp 0x800c27c     // unlikely

    loc_0x0800c15c: // orphan
         w9 = (word) [x0 + 0x14]  // 0xc7 // 199
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w9 & 0xffffefff
         [x0 + 0x14] = (half) w8
         x8 = [x0 + 8]            // 0xc7 // 199
         x10 = [x26 + 0xa0]       // 0xe1 // 225
         if (x8 == x10)
         b.eq 0x800c18c           // unlikely

    loc_0x0800c17c: // orphan
         w8 = 0xef7f              // '\x7f\xef'
         w8 = w9 & w8
         [x23 + 0x14] = (half) w8
         x8 = [x26 + 0xa0]        // 0xe1 // 225

    loc_0x0800c18c: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x22 = x22 << 3
         [x23 + 8] = x8
         0x800c198 ()             // 0x800c198(0x0, 0x0, 0x0, 0x0)
         w8 = 0x800
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_d0h
         w2 = 0x1000
         w3 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x23 + 0x20] = x22
         [x23 + 0x10] = w8
         0x800c1b8 ()             // 0x800c1b8(0x0, 0x0, 0x1000, 0x0)
         if !w0 jmp 0x800c274     // likely

    loc_0x0800c1c0: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c1c4 ()             // 0x800c1c4(0x0, 0x0, 0x0, 0x0)
         w22 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c1d0 ()             // 0x800c1d0(0x0, 0x0, 0x0, 0x0)
         if w22 jmp 0x800c27c     // unlikely

    loc_0x0800c1d8: // orphan
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c1dc ()             // 0x800c1dc(0x0, 0x0, 0x0, 0x0)
         (x8, 2) = 3
         x2 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x0 + x8             // int64_t arg_d0h
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c1f0 ()             // 0x800c1f0(0x0, 0x0, 0x0, 0x0)
         0x800c1f4 ()             // 0x800c1f4(0x0, 0x0, 0x0, 0x0)
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800c200 ()             // 0x800c200(0x0, 0x0, 0x0, 0x0)
         x8 = 0x800c000
         x0 = 0x7cb5              // '\xb5|'
         x0 = 0x7660              // '`v'
         x2 = 0x800c000
         x0 = 0xb0a0              // '\xa0\xb0'
         x2 = x2 + 0
         x22 = [x8]               // 0xcf // 207
         x0 = 0xb3b5              // '\xb5\xb3' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_d0h
         0x800c228 ()             // 0x800c228(0xb3b5b0a076607cb5, 0x5280008900000004, 0x800c000, 0x0)
         x8 = [var_40h]           // 4
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_d0h
         x2 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x8 + x20
         blr x22                  // 0x5280008900000004(0x0, 0x0, 0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c248 ()             // 0x800c248(0x0, 0x0, 0x0, 0x0)
         if x22 jmp 0x800be40     // unlikely

    loc_0x0800c250: // orphan
         x21 = x27 + x21
         x20 = x27 + x20
         x24 = x24 - x27
         x22 = 0x800c000
         jmp 0x800bf04

    loc_0x0800c264: // orphan
         w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800be44

    loc_0x0800c26c: // orphan
         x19 = [var_sp_18h]       // 0x4 // 4
         jmp 0x800be40

    loc_0x0800c274: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c278 ()             // 0x800c278(0x0, 0x0, 0x0, 0x0)

    loc_0x0800c27c: // orphan
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800c284 ()             // 0x800c284(0x0, 0x0, 0x0, 0x0)

    loc_0x0800c288: // orphan
         x0 = [var_sp_8h]         // 0x4 // 4 // int64_t arg1
         0x800c28c ()             // 0x800c28c(0x0, 0x0, 0x0, 0x0)
         jmp 0x800be44

    loc_0x0800c294: // orphan
         w1 = 0x3
         0x800c298 ()             // 0x800c298(0x0, 0x3, 0x0, 0x0)
         if x19 jmp 0x800be00     // unlikely

    loc_0x0800c2a0: // orphan
         jmp 0x800bdc0

    loc_0x0800c2a4: // orphan
         0x800c2a4 ()             // 0x800c2a4(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x0800cf14 ===== */
int sym.do_get_module_base (int esi, int edx) {
    loc_0x800cf14:
        hint 0x19
        sp = sp - 0x170
        [x18] + 8 = x30
        [sp, 0x140] = (x29,2)
        x29 = var_140h
        [var_150h] = x28
        [sp, 0x160] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = var_18h  // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x120
        x20 = var_18h
        [x29 = x8
        0x800cf50 ()  // 0x800cf50(0x177ea8, 0x0, 0x120, 0x0)
        x0 = var_18h  // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_170h
        w2 = 0x120
        0x800cf60 ()  // "`" // 0x800cf60(0x177ea8, 0x0, 0x120, 0x0)
        if !x0 jmp 0x800cf70 // unlikely
            
    loc_0x800cf70:
        w0 = [var_18h] // 0x4 // 4
        x1 = x20 | 4  // int64_t arg_170h
        w2 = [var_130h] // 0x4 // 4
        x3 = var_10h
        x4 = var_8h
        [sp, 8] = (xzr,2)
        0x800cf88 ()  // 0x800cf88(0x0, 0x4, 0x0, 0x178010)
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = ~0x76    // 'v'
        if !w8 jmp 0x800cfc0 // likely
            
    loc_0x800cfc0:
        // CODE XREF from sym.do_get_module_base @ 0x800cf6c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800cff0 // likely
            
    loc_0x800cff0:
        0x800cff0 ()  // sym.do_find_process // 0x800cff0(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x800cff4:
        hint 0x19
        sp = sp - 0x140
        [x18] + 8 = x30
        // XREFS(152)
        0x0800d000
        0x0800d004
        // DATA XREF from sym.do_hide_path @ 0x800d354
        0x0800d008
        0x0800d00c
        0x0800d010
        // arg1
        0x0800d018
        // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x104
        x20 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x29 = x8
        0x800d030 ()  // 0x800d030(0x0, 0x0, 0x104, 0x0)
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        // CODE XREF from sym.paradise_hide_cleanup @ 0x800dd2c
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_420h
        w2 = 0x104
        0x800d040 ()  // "`" // 0x800d040(0x177ec0, 0x0, 0x104, 0x0)
        if !x0 jmp 0x800d050 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800cfa0: // orphan
             x1 = var_18h             // int64_t arg_170h
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             w2 = 0x120
             [var_0h] = x8
             0x800cfb0 ()             // 0x800cfb0(0x0, 0x178018, 0x120, 0x0)
             w8 = ~0xd
             if (x0 == 0)
             csel w0,wzr,w8, eq

}

/* ===== 0x0800cff4 ===== */
int sym.do_find_process (int esi, int edx) {
    loc_0x800cff4:
        hint 0x19
        sp = sp - 0x140
        [x18] + 8 = x30
        // XREFS(152)
        0x0800d000
        0x0800d004
        // DATA XREF from sym.do_hide_path @ 0x800d354
        0x0800d008
        0x0800d00c
        0x0800d010
        // arg1
        0x0800d018
        // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x104
        x20 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x29 = x8
        0x800d030 ()  // 0x800d030(0x0, 0x0, 0x104, 0x0)
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        // CODE XREF from sym.paradise_hide_cleanup @ 0x800dd2c
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_420h
        w2 = 0x104
        0x800d040 ()  // "`" // 0x800d040(0x177ec0, 0x0, 0x104, 0x0)
        if !x0 jmp 0x800d050 // unlikely
            
    loc_0x800d050:
        x0 = x20 | 4  // int64_t arg1
        0x800d054 ()  // 0x800d054(0x4, 0x0, 0x0, 0x0)
        [sp] = w0
        if !w0 jmp 0x800d080 // unlikely
            
    loc_0x800d080:
        w0 = ~0x76    // 'v'
         // do {
    loc_0x800d084:
        // CODE XREFS from sym.do_find_process @ 0x800d04c, 0x800d07c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800d0b4 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800d098: // orphan
             (x20, 2) = 3
             (x29, 2) = 3
             x28 = [var_120h]         // 0x4 // 4
             x30 = [x18 - 8]!         // 0xd9 // 217
             sp = var_140h
             hint 0x1d
             

    loc_0x0800d0b4: // orphan
         0x800d0b4 ()             // sym.do_is_process_alive // 0x800d0b4(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800c800 ===== */
int sym.do_write_physical_memory (int esi, int edx) {
    loc_0x800c800:
        hint 0x19
        sp = sp - 0xc0
        [x18] + 8 = x30
        [sp, 0x60] = (x29,2)
        x29 = var_60h
        [sp, 0x70] = (x28,2)
        [sp, 0x80] = (x26,2)
        [sp, 0x90] = (x24,2)
        [sp, 0xa0] = (x22,2)
        [sp, 0xb0] = (x20,2)
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = var_20h  // int64_t arg1
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_c0h
        w2 = 0x28     // '('
        [x29 = x8
        [sp, 0x38] = (xzr,2)
        [sp, 0x28] = (xzr,2)
        [var_20h] = xzr
        0x800c850 ()  // "`" // 0x800c850(0x177f60, 0x0, 0x28, 0x0)
        if !x0 jmp 0x800c860 // unlikely
            
    loc_0x800c860:
        x8 = [var_38h] // 0x4 // 4
        if !x8 jmp 0x800c8d4 // likely
            
    loc_0x800c8d4:
        w24 = ~0x15
        jmp 0x800c958
         // do {
    loc_0x800c958:
        // CODE XREFS from sym.do_write_physical_memory @ 0x800c85c, 0x800c8d0, 0x800c8d8
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800cc48 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800c874: // orphan
             w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800c87c ()             // 0x800c87c(0x0, 0x0, 0x0, 0x0)
             x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             0x800c888 ()             // 0x800c888(0x0, 0x0, 0x0, 0x0)
             if !x20 jmp 0x800c8cc    // likely

    loc_0x0800c890: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c894 ()             // 0x800c894(0x0, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x20 + 0x38
         jmp 0x800c8dc

    loc_0x0800c8bc: // orphan
         dmb ishld
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c8c4 ()             // 0x800c8c4(0x0, 0x0, 0x0, 0x0)
         if x19 jmp 0x800c90c     // unlikely

    loc_0x0800c8cc: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x800cc44
         w24 = ~0x2
         jmp 0x800c958

    loc_0x0800c8dc: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x800c8a0
         bti j
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x0800c8e8: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800c8e8     // unlikely

    loc_0x0800c8f8: // orphan
         if (w8 == 1)
         b.eq 0x800c8bc           // unlikely

    loc_0x0800c900: // orphan
         if (w8 == 0)
         jmp ifle 0x800cc38       // likely

    loc_0x0800c908: // orphan
         if !x19 jmp 0x800c8cc    // likely

    loc_0x0800c90c: // orphan
         x22 = [x19 + 0x40]       // 0xda // 218
         x2 = x29 - 0x10
         x1 = [var_30h]           // 0x4 // 4 // int64_t arg_c0h
         x3 = x29 - 0x18
         [x29 = xzr
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c924 ()             // 0x800c924(-1, 0x8012000, 0x177ff0, 0x177fe8)
         ldur x8,[x29,-0x10]
         if (w0 == 0)
         x1 = var_20h             // int64_t arg_c0h
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x28                // '('
         csel x8,xzr,x8, lt
         [var_38h_2] = x8
         0x800c944 ()             // 0x800c944(0x0, 0x178020, 0x28, 0x177fe8)
         if !x0 jmp 0x800c998     // likely

    loc_0x0800c94c: // orphan
         // CODE XREFS from sym.do_write_physical_memory @ 0x800cc20, 0x800cc34
         w24 = ~0xd

    loc_0x0800c950: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x800cc28
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800c954 ()             // 0x800c954(0x0, 0x0, 0x0, 0x0)

    loc_0x0800c96c: // orphan
         w0 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_c0h
         hint 0x1d
         

    loc_0x0800c998: // orphan
         x20 = 0x800c000
         x21 = 0x800c000
         x8 = [x20]               // 0xdb // 219
         if x8 jmp 0x800c9bc      // likely

    loc_0x0800c9a8: // orphan
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800c9b0 ()             // 0x800c9b0(0x800c000, 0x0, 0x0, 0x0)
         [x20] = x0
         if !x0 jmp 0x800c9d4     // unlikely

    loc_0x0800c9bc: // orphan
         x8 = [x21]               // 0xdc // 220
         if x8 jmp 0x800c9d4      // likely

    loc_0x0800c9c4: // orphan
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800c9cc ()             // 0x800c9cc(0x800c000, 0x0, 0x0, 0x0)
         [x21] = x0

    loc_0x0800c9d4: // orphan
         x20 = 0x800c000
         x8 = [x20]               // 0xdb // 219
         if x8 jmp 0x800c9f0      // likely

    loc_0x0800c9e0: // orphan
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800c9e8 ()             // 0x800c9e8(0x800c000, 0x0, 0x0, 0x0)
         [x20] = x0

    loc_0x0800c9f0: // orphan
         x20 = [var_38h]          // 0x4 // 4
         if !x20 jmp 0x800cc24    // likely

    loc_0x0800c9f8: // orphan
         x23 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = [var_30h]          // 0x4 // 4
         x25 = 0x800c000
         [sp] = (x22,2)
         jmp 0x800ca18

    loc_0x0800ca0c: // orphan
         // CODE XREFS from sym.do_write_physical_memory @ 0x800cac8, 0x800cc18
         (x22, 2) = 3
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x20 jmp 0x800c950    // likely

    loc_0x0800ca18: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x800ca08
         x2 = var_sp_18h
         x3 = var_sp_10h
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_c0h
         [sp, 0x10] = (xzr,2)
         0x800ca2c ()             // 0x800ca2c(0x0, 0x0, 0x178018, 0x178010)
         tbnz w0,0x1f,0x800cacc   // unlikely

    loc_0x0800ca34: // orphan
         x8 = [var_sp_10h]        // 0x4 // 4
         if (x20 == x8)
         csel x26,x20,x8, lo
         if !x26 jmp 0x800ca0c    // likely

    loc_0x0800ca44: // orphan
         x27 = [var_sp_18h]       // 0x4 // 4

    loc_0x0800ca48: // orphan
         x8 = x27 & 0xfff
         w10 = 0x1000
         x8 = x10 - x8
         x19 = x25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x8 == x26)
         x28 = [x25]              // 0xe0 // 224
         csel x24,x8,x26, lo
         x8 = 0x800c000
         x0 = 0x7cb5              // '\xb5|'
         x2 = 0x800c000
         x0 = 0x7660              // '`v'
         x9 = [var_28h]           // 0x4 // 4
         x25 = [x8]               // 0xcf // 207
         x0 = 0xb0a0              // '\xa0\xb0'
         x0 = 0xb3b5              // '\xb5\xb3' // int64_t arg1
         x2 = x2 + 0
         x22 = x9 + x23
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_c0h
         0x800ca90 ()             // 0x800ca90(0xb3b5b0a076607cb5, 0x5280008900000004, 0x800c000, 0x0)
         x8 = x27 - x28
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x8 | 0xffffff8000000000
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x25                  // 0x5280008900000004(0xfffffffff7ff4000, 0x0, 0x0, 0x0)
         if x0 jmp 0x800cc1c      // likely

    loc_0x0800caac: // orphan
         x27 = x24 + x27
         x21 = x24 + x21
         x23 = x24 + x23
         x20 = x20 - x24
         x26 = x26 - x24
         x25 = x19                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x800ca48           // likely

    loc_0x0800cac8: // orphan
         jmp 0x800ca0c

    loc_0x0800cacc: // orphan
         x8 = 0x800c000
         w24 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x800c950     // unlikely

    loc_0x0800cadc: // orphan
         ubfx x8,x21,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x22 + x8,lsl 3
         ldar x8,[x8]
         [x29 = x8
         x8 = x29 - 0x10
         ldar x8,[x8]
         [x29 = x8
         x8 = x29 - 0x18
         ldar x8,[x8]
         w9 = ~w8
         if ((x9 & 3) == 0)
         b.ne 0x800c950           // likely

    loc_0x0800cb0c: // orphan
         x9 = [x25]               // 0xe0 // 224
         x8 = x8 & 0x7ffffff000
         x8 = x8 - x9
         ubfx x9,x21,0x15, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 | 0xffffff8000000000
         x8 = x8 + x9,lsl 3
         ldar x8,[x8]
         w9 = ~w8
         if ((x9 & 3) == 0)
         b.ne 0x800c950           // likely

    loc_0x0800cb34: // orphan
         x9 = [x25]               // 0xe0 // 224
         x8 = x8 & 0x7ffffff000
         x8 = x8 - x9
         ubfx x9,x21,0xc, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 | 0xffffff8000000000
         x8 = x8 + x9,lsl 3
         x9 = 0x1
         x9 = 0x400
         ldar x8,[x8]
         x9 = x8 & x9
         if (x8 == 0)
         ccmp x9,0,0, ne
         ubfx x9,x8,2, 6          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ccmp w9,0x1e,2, eq
         b.hs 0x800c950           // likely

    loc_0x0800cb70: // orphan
         ror x8,x8,8
         x26 = x8 & 0xfc03ffffffffffff
         if !x26 jmp 0x800c950    // likely

    loc_0x0800cb7c: // orphan
         x27 = x21 & 0xfff
         w8 = 0x1000
         x8 = x8 - x27
         w1 = 0xc00
         if (x20 == x8)
         csel x25,x20,x8, lo
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800cb98 ()             // 0x800cb98(0x0, 0xc00, 0x0, 0x0)
         if !x0 jmp 0x800c950     // likely

    loc_0x0800cba0: // orphan
         x8 = 0x800c000
         x28 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x7cb5              // '\xb5|'
         x2 = 0x800c000
         x0 = 0x7660              // '`v'
         x2 = x2 + 0
         x22 = [x8]               // 0xcf // 207
         x0 = 0xb0a0              // '\xa0\xb0'
         x0 = 0xb3b5              // '\xb5\xb3' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_c0h
         0x800cbc8 ()             // 0x800cbc8(0xb3b5b0a076607cb5, 0x5280008900000004, 0x800c000, 0x0)
         x8 = [var_28h]           // 0x4 // 4
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x8 + x23
         blr x22                  // 0x5280008900000004(0x0, 0x0, 0x0, 0x0)
         if x0 jmp 0x800cc2c      // unlikely

    loc_0x0800cbe4: // orphan
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_c0h
         x2 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800cbf4 ()             // 0x800cbf4(0x0, 0x0, 0x0, 0x0)
         w22 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800cc00 ()             // 0x800cc00(0x0, 0x0, 0x0, 0x0)
         tbz w22,0,0x800c950      // likely

    loc_0x0800cc08: // orphan
         x21 = x25 + x21
         x23 = x25 + x23
         x20 = x20 - x25
         x25 = 0x800c000
         jmp 0x800ca0c

    loc_0x0800cc1c: // orphan
         x19 = [var_sp_8h]        // 0x4 // 4
         jmp 0x800c94c

    loc_0x0800cc24: // orphan
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800c950

    loc_0x0800cc2c: // orphan
         x0 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800cc30 ()             // 0x800cc30(0x0, 0x0, 0x0, 0x0)
         jmp 0x800c94c

    loc_0x0800cc38: // orphan
         w1 = 0x3
         0x800cc3c ()             // 0x800cc3c(0x0, 0x3, 0x0, 0x0)
         if x19 jmp 0x800c90c     // unlikely

    loc_0x0800cc44: // orphan
         jmp 0x800c8cc

    loc_0x0800cc48: // orphan
         0x800cc48 ()             // 0x800cc48(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x0800d0b8 ===== */
int sym.do_is_process_alive (int esi, int edx) {
    loc_0x800d0b8:
        hint 0x19
        sp = sp - 0x30
        [x18] + 8 = x30
        [sp, 0x10] = (x29,2)
        x29 = var_10h_2
        [sp + 0x20] = x19
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_420h
        w2 = 0x8
        [sp + 8] = x8
        [sp] = xzr
        0x800d0f0 ()  // "`" // 0x800d0f0(0x177fd0, 0x0, 0x8, 0x0)
        if !x0 jmp 0x800d100 // unlikely
            
    loc_0x800d100:
        w0 = [sp]     // 0x4 // 4
        0x800d104 ()  // 0x800d104(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800d128 // likely
            
    loc_0x800d128:
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800d12c:
        // CODE XREF from sym.do_is_process_alive @ 0x800d124
        x1 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_420h
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w2 = 0x8
        [sp + 4] = w8
        0x800d13c ()  // 0x800d13c(0x0, 0x178000, 0x8, 0x0)
        w8 = ~0xd
        if (x0 == 0)
        csel w0,wzr,w8, eq
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800d118: // orphan
             x8 = [x0 + 0x640]        // 0xc7 // 199
             if (x8 == 0)
             cset w8,ne
             jmp 0x800d12c

    loc_0x0800d14c: // orphan
         // CODE XREF from sym.do_is_process_alive @ 0x800d0fc
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x5e0]        // 0xcf // 207
         x9 = [var_8h_2]          // 0x4 // 4
         if (x8 == x9)
         b.ne 0x800d178           // likely

    loc_0x0800d160: // orphan
         (x29, 2) = 3
         x19 = [var_20h_2]        // 0x4 // 4
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = var_30h_2
         hint 0x1d
         

    loc_0x0800d178: // orphan
         0x800d178 ()             // sym.do_hide_path // 0x800d178(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800da14 ===== */
int sym.do_hide_process (int esi, int edx) {
    loc_0x800da14:
        hint 0x19
        sp = sp - 0x30
        [x18] + 8 = x30
        [sp, 0x10] = (x29,2)
        x29 = var_10h
        [sp, 0x20] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_30h
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w2 = 0x8
        [var_8h] = x8
        [sp] = xzr
        0x800da48 ()  // 0x800da48(0x177fd0, 0x0, 0x8, 0x0)
        if !x0 jmp 0x800da84 // unlikely
            
    loc_0x800da84:
        w0 = [sp]     // 0x4 // 4
        if (w0 == 1)
        b.lt 0x800daec // likely
            
    loc_0x800daec:
        w19 = ~0x15
        jmp 0x800da54
         // do {
    loc_0x800da54:
        // CODE XREFS from sym.do_hide_process @ 0x800daf0, 0x800daf8, 0x800db1c, 0x800dc3c, 0x800dc50
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x9 = [var_8h] // 0x4 // 4
        if (x8 == x9)
        b.ne 0x800db20 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800da68: // orphan
             w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             (x20, 2) = 3
             (x29, 2) = 3
             x30 = [x18 - 8]!         // 0xd9 // 217
             sp = arg_30h
             hint 0x1d
             

    loc_0x0800da98: // orphan
         0x800da98 ()             // 0x800da98(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800daf4     // likely

    loc_0x0800daa0: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800daa8 ()             // 0x800daa8(0x0, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800dab4 ()             // 0x800dab4(0x0, 0x0, 0x0, 0x0)
         if !x19 jmp 0x800daf4    // likely

    loc_0x0800dabc: // orphan
         x0 = x19 + 0x38
         jmp 0x800db24

    loc_0x0800dadc: // orphan
         dmb ishld
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800dae4 ()             // 0x800dae4(0x0, 0x0, 0x0, 0x0)
         jmp 0x800db50

    loc_0x0800daf4: // orphan
         w19 = ~0x2
         jmp 0x800da54

    loc_0x0800dafc: // orphan
         0x800dafc ()             // 0x800dafc(0x0, 0x0, 0x0, 0x0)
         w0 = [sp]                // 0x4 // 4
         0x800db04 ()             // 0x800db04(0x0, 0x0, 0x0, 0x0)
         x0 = 0x800d000
         w1 = [sp]                // 0x4 // 4
         x0 = x0 + 0              // int64_t arg1
         0x800db14 ()             // 0x800db14(0x800d000, 0x0, 0x0, 0x0)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800da54

    loc_0x0800db20: // orphan
         0x800db20 ()             // 0x800db20(0x0, 0x0, 0x0, 0x0)

    loc_0x0800db24: // orphan
         // CODE XREF from sym.do_hide_process @ 0x800dac0
         bti j
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x0800db30: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800db30     // unlikely

    loc_0x0800db40: // orphan
         if (w8 == 1)
         b.eq 0x800dadc           // unlikely

    loc_0x0800db48: // orphan
         if (w8 == 0)
         jmp ifle 0x800dc6c       // likely

    loc_0x0800db50: // orphan
         // CODE XREFS from sym.do_hide_process @ 0x800dae8, 0x800dc74
         w19 = [sp]               // 0x4 // 4
         if (w19 == 1)
         b.lt 0x800dc0c           // likely

    loc_0x0800db5c: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         0x800db64 ()             // 0x800db64(0x800d000, 0x0, 0x0, 0x0)
         x8 = 0x800d000
         x8 = x8 + 0
         ldar w8,[x8]
         if (w8 == w19)
         b.eq 0x800dbf4           // likely

    loc_0x0800db7c: // orphan
         x8 = 0x800d000
         x8 = x8 + 0
         ldar w8,[x8]
         if (w8 == w19)
         b.eq 0x800dbf4           // likely

    loc_0x0800db90: // orphan
         x8 = 0x800d000
         x8 = x8 + 0
         ldar w8,[x8]
         if (w8 == w19)
         b.eq 0x800dbf4           // likely

    loc_0x0800dba4: // orphan
         x8 = 0x800d000
         x8 = x8 + 0
         ldar w8,[x8]
         if (w8 == w19)
         b.eq 0x800dbf4           // likely

    loc_0x0800dbb8: // orphan
         x8 = 0x800d000
         x8 = x8 + 0
         ldar w8,[x8]
         if (w8 == w19)
         b.eq 0x800dbf4           // likely

    loc_0x0800dbcc: // orphan
         x8 = 0x800d000
         x8 = x8 + 0
         ldar w8,[x8]
         if (w8 == w19)
         b.eq 0x800dbf4           // likely

    loc_0x0800dbe0: // orphan
         x8 = 0x800d000
         x8 = x8 + 0
         ldar w8,[x8]
         if (w8 == w19)
         b.ne 0x800dc54           // unlikely

    loc_0x0800dbf4: // orphan
         w20 = 0x1

    loc_0x0800dbf8: // orphan
         // CODE XREF from sym.do_hide_process @ 0x800dc68
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         0x800dc00 ()             // 0x800dc00(0x800d000, 0x0, 0x0, 0x0)
         w19 = [sp]               // 0x4 // 4
         jmp 0x800dc10

    loc_0x0800dc0c: // orphan
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800dc10: // orphan
         // CODE XREF from sym.do_hide_process @ 0x800dc08
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800dc14 ()             // 0x800dc14(0x0, 0x0, 0x0, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x800da54      // unlikely

    loc_0x0800dc20: // orphan
         w0 = [sp]                // 0x4 // 4
         0x800dc24 ()             // 0x800dc24(0x0, 0x0, 0x0, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x800dc40     // likely

    loc_0x0800dc30: // orphan
         tbnz w20,0,0x800da54     // unlikely

    loc_0x0800dc34: // orphan
         w0 = [sp]                // 0x4 // 4
         0x800dc38 ()             // 0x800dc38(0x0, 0x0, 0x0, 0x0)
         jmp 0x800da54

    loc_0x0800dc40: // orphan
         x0 = 0x800d000
         w1 = [sp]                // 0x4 // 4
         x0 = x0 + 0              // int64_t arg1
         0x800dc4c ()             // 0x800dc4c(0x800d000, 0x0, 0x0, 0x0)
         jmp 0x800da54

    loc_0x0800dc54: // orphan
         x8 = 0x800d000
         x8 = x8 + 0
         ldar w8,[x8]
         if (w8 == w19)
         cset w20,eq
         jmp 0x800dbf8

    loc_0x0800dc6c: // orphan
         w1 = 0x3
         0x800dc70 ()             // 0x800dc70(0x0, 0x3, 0x0, 0x0)
         jmp 0x800db50

}

/* ===== 0x0800df20 ===== */
int sym.do_list_processes (int esi, int edx) {
    loc_0x800df20:
        hint 0x19
        sp = sp - 0x60
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        [var_30h] = x23
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
        w2 = 0x18
        [x29 = x8
        [sp, 8] = (xzr,2)
        [sp] = xzr
        0x800df64 ()  // "`" // 0x800df64(0x177fa0, 0x0, 0x18, 0x0)
        if !x0 jmp 0x800df74 // unlikely
            
    loc_0x800df74:
        // CODE XREF from sym.do_list_processes @ 0x800df68
        x1 = [var_8h] // 0x4 // 4
        x8 = x1 >> 0xd
        if !x8 jmp 0x800e09c // likely
            
    loc_0x800e09c:
        // CODE XREF from sym.do_list_processes @ 0x800df7c
        x0 = 0x800e000
        x0 = x0 + 0   // int64_t arg1
        0x800e0a4 ()  // 0x800e0a4(0x800e000, 0x0, 0x0, 0x0)
        w20 = ~0x15
        jmp 0x800e064
         // do {
    loc_0x800e064:
        // CODE XREFS from sym.do_list_processes @ 0x800df70, 0x800e0ac, 0x800e0c0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800e0e8 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800df90: // orphan
             x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800df94 ()             // 0x800df94(0x0, 0x0, 0x0, 0x0)
             x8 = 0x800d000
             x8 = x8 + 0
             x9 = x8 + 0x4d0
             ldar x9,[x9]
             x10 = x9 - 0x4d0
             if (x10 == x8)
             b.eq 0x800e004           // unlikely

    loc_0x0800dfb4: // orphan
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = 0x1
         jmp 0x800dfd0

    loc_0x0800dfc0: // orphan
         // CODE XREFS from sym.do_list_processes @ 0x800dfd4, 0x800dfe0, 0x800e000
         ldar x9,[x9]
         x11 = x9 - 0x4d0
         if (x11 == x8)
         b.eq 0x800e008           // unlikely

    loc_0x0800dfd0: // orphan
         // CODE XREF from sym.do_list_processes @ 0x800dfbc
         w11 = [x9 + 0x108]       // 0xd0 // 208
         tbnz w11,0x1f,0x800dfc0  // likely

    loc_0x0800dfd8: // orphan
         x12 = [var_8h]           // 0x4 // 4
         if (x11 == x12)
         b.hs 0x800dfc0           // likely

    loc_0x0800dfe4: // orphan
         x12 = x11 >> 3
         w11 = w11 & 7
         x21 = x21 + 1
         w13 = (byte) [x19 + x12] // 0xd3000000da // 906238099674
         w11 = w10 << w11
         w11 = w13 | w11
         [x19 + x12] = (byte) w11
         // XREFS(34)
         jmp 0x800dfc0

    loc_0x0800e004: // orphan
         // CODE XREF from sym.do_list_processes @ 0x800dfb0
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e008: // orphan
         // CODE XREF from sym.do_list_processes @ 0x800dfcc
         0x800e008 ()             // 0x800e008(0x0, 0x0, 0x0, 0x0)
         x22 = [var_8h]           // 0x4 // 4
         x8 = x22 >> 0x1f
         if x8 jmp 0x800e0dc      // unlikely

    loc_0x0800e018: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         w2 = 0x1
         x23 = [sp]               // 0x4 // 4
         0x800e028 ()             // 0x800e028(0x0, 0x0, 0x1, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800e038 ()             // 0x800e038(0x0, 0x0, 0x0, 0x0)
         if x0 jmp 0x800e058      // unlikely

    loc_0x0800e040: // orphan
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x18
         [var_8h_2] = x21
         0x800e050 ()             // 0x800e050(0x0, 0x178000, 0x18, 0x0)
         if !x0 jmp 0x800e0c4     // likely

    loc_0x0800e058: // orphan
         // CODE XREF from sym.do_list_processes @ 0x800e03c
         w20 = ~0xd

    loc_0x0800e05c: // orphan
         // CODE XREF from sym.do_list_processes @ 0x800e0d8
         // CODE XREF from sym.do_list_processes @ +0x1c4
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800e060 ()             // 0x800e060(0x0, 0x0, 0x0, 0x0)

    loc_0x0800e078: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = [var_30h]          // 0x4 // 4
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_60h
         hint 0x1d
         

    loc_0x0800e0b0: // orphan
         // CODE XREF from sym.do_list_processes @ 0x800df8c
         x0 = 0x800e000
         x0 = x0 + 0              // int64_t arg1
         0x800e0b8 ()             // 0x800e0b8(0x800e000, 0x0, 0x0, 0x0)
         w20 = ~0xb
         jmp 0x800e064

    loc_0x0800e0c4: // orphan
         // CODE XREF from sym.do_list_processes @ 0x800e054
         x0 = 0x800e000
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         x0 = x0 + 0              // int64_t arg1
         0x800e0d0 ()             // 0x800e0d0(0x800e000, 0x0, 0x0, 0x0)
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800e05c

    loc_0x0800e0dc: // orphan
         // CODE XREF from sym.do_list_processes @ 0x800e014
         w20 = ~0xd
         brk 0x800

    loc_0x0800e0e8: // orphan
         // CODE XREF from sym.do_list_processes @ 0x800e074
         0x800e0e8 ()             // 0x800e0e8(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x080100f8 ===== */
int sym.do_config_gyro_hook (int esi, int edx) {
    loc_0x80100f8:
        hint 0x19
        sp = sp - 0x50
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = var_8h   // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_50h
        [x29 = x8
        [sp, 8] = (xzr,2)
        0x8010130 ()  // "`" // 0x8010130(0x177fb8, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8010140 // unlikely
            
    loc_0x8010140:
        w8 = [var_ch] // 0x4 // 4
        if w8 jmp 0x8010150 // unlikely
            
    loc_0x8010150:
        x0 = 0x8010000
        (w21, 2) = 3
        x0 = x0 + 0   // int64_t arg1
        0x801015c ()  // 0x801015c(0x8010000, 0x0, 0x0, 0x0)
        x8 = 0x8010000
        w9 = [var_8h] // 0x4 // 4
        w8 = (byte) [x8] // 0xcf // 207
        if !w9 jmp 0x8010198 // likely
            
    loc_0x8010198:
        if w9 jmp 0x80101c4 // unlikely
            
    loc_0x80101c4:
        x8 = 0x8010000
        x0 = 0x8010000
        x8 = x8 + 0
        x0 = x0 + 0   // int64_t arg1
        [x8 + 8] = w21
        [x8 + 0xc] = w22
        w9 = [var_ch] // 0x4 // 4
        [x8 + 4] = w9
        w9 = [var_8h] // 0x4 // 4
        if (w9 == 0)
        cset w9,ne
        [x8] = (byte) w9
        [var_8h] = w9
        [sp, 0x10] = (w21,2)
        0x80101fc ()  // 0x80101fc(0x8010000, 0x0, 0x0, 0x0)
        x1 = var_8h   // int64_t arg_50h
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8010208 ()  // 0x8010208(0x0, 0x178008, 0x0, 0x0)
        w8 = ~0xd
        if (x0 == 0)
        csel w20,wzr,w8, eq
         // do {
    loc_0x8010218:
        // CODE XREFS from sym.do_config_gyro_hook @ 0x801013c, 0x8010194
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x801024c // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08010174: // orphan
             0x8010174 ()             // 0x8010174(0x0, 0x0, 0x0, 0x0)
             if (w0 != 0x13)
             b.eq 0x80101c4           // unlikely

    loc_0x08010180: // orphan
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x80101c4     // likely

    loc_0x08010188: // orphan
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         0x8010190 ()             // "!" // 0x8010190(0x8010000, 0x0, 0x0, 0x0)
         jmp 0x8010218

    loc_0x080101a0: // orphan
         x20 = 0x8010000
         x8 = 0x8010000
         x20 = x20 + 0
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x8] = (byte) wzr
         0x80101b4 ()             // 0x80101b4(0x8010000, 0x0, 0x0, 0x0)
         0x80101b8 ()             // 0x80101b8(0x8010000, 0x0, 0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80101c0 ()             // 0x80101c0(0x8010000, 0x0, 0x0, 0x0)

    loc_0x0801022c: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_50h
         hint 0x1d
         

    loc_0x0801024c: // orphan
         0x801024c ()             // sym._copy_from_user.130 // 0x801024c(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800d17c ===== */
int sym.do_hide_path (int esi, int edx) {
    loc_0x800d17c:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x40]! = (x29,2)
        [sp + 0x10] = x28
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        sp = sp - 0x420
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = var_210h // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x204
        [x29 = x8
        0x800d1b8 ()  // 0x800d1b8(0x177db0, 0x0, 0x204, 0x0)
        x0 = var_10h_3 // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x200
        0x800d1c8 ()  // 0x800d1c8(0x177bb0, 0x0, 0x200, 0x0)
        x0 = var_210h // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_420h
        w2 = 0x204
        0x800d1d8 ()  // 0x800d1d8(0x177db0, 0x0, 0x204, 0x0)
        if !x0 jmp 0x800d218 // unlikely
            
    loc_0x800d218:
        x0 = var_210h // int64_t arg1
        w1 = 0x200
        [sp + 0x40f] = (byte) wzr
        0x800d224 ()  // 0x800d224(0x178210, 0x200, 0x0, 0x0)
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = ~0x15
        x9 = x8 - 1
        if (x9 == 0x1fe)
        b.hi 0x800d1e4 // likely
            
    loc_0x800d1e4:
        // CODE XREFS from sym.do_hide_path @ 0x800d2f8, 0x800d4b0, 0x800d4e0, 0x800d548
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800d588 // likely
            
    loc_0x800d588:
        0x800d588 ()  // sym.resolve_hide_symbols // 0x800d588(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x800d58c:
        hint 0x19
        sp = sp - 0xd0
        [x18] + 8 = x30
        [sp, 0x90] = (x29,2)
        x29 = var_90h
        [var_a0h] = x23
        [sp, 0xb0] = (x22,2)
        [sp, 0xc0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x800d000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        x8 = [x19]    // 0xda // 218
        if x8 jmp 0x800d61c // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800d248: // orphan
             x20 = x8 + 1
             x0 = var_10h_3           // int64_t arg1
             x1 = var_210h            // int64_t arg_420h
             x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800d258 ()             // 0x800d258(0x178010, 0x178210, 0x1, 0x0)
             0x800d25c ()             // 0x800d25c(0x178010, 0x178210, 0x1, 0x0)
             if w0 jmp 0x800d1e4      // likely

    loc_0x0800d264: // orphan
         x0 = 0x800d000
         w19 = [var_410h]         // 4
         x0 = x0 + 0              // int64_t arg1
         0x800d270 ()             // 0x800d270(0x800d000, 0x0, 0x0, 0x0)
         if !w19 jmp 0x800d4b4    // likely

    loc_0x0800d278: // orphan
         x19 = 0x800d000
         x19 = x19 + 0
         x21 = [x19]              // 0xda // 218
         if (x21 == x19)
         b.eq 0x800d2a8           // unlikely

    loc_0x0800d28c: // orphan
         x0 = x21 + 0x10          // int64_t arg1
         x1 = var_10h_3           // int64_t arg_420h
         0x800d294 ()             // 0x800d294(0x10, 0x178010, 0x0, 0x0)
         if !w0 jmp 0x800d2fc     // unlikely

    loc_0x0800d29c: // orphan
         x21 = [x21]              // 0xdc // 220
         if (x21 == x19)
         b.ne 0x800d28c           // unlikely

    loc_0x0800d2a8: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         0x800d2b0 ()             // 0x800d2b0(0x800d000, 0x0, 0x0, 0x0)
         x8 = 0x800d000
         x0 = 0xfc4e              // 'N\xfc'
         x0 = 0xb839              // '9\xb8'
         x2 = 0x800d000
         x0 = 0xb54e              // 'N\xb5'
         x2 = x2 + 0
         x21 = [x8]               // 0xcf // 207
         x0 = 0xe1d0              // '\xd0\xe1' // int64_t arg1
         [sp] = (xzr,2)
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_420h
         0x800d2dc ()             // 0x800d2dc(0xe1d0b54eb839fc4e, 0x0, 0x800d000, 0x0)
         x0 = var_10h_3
         x2 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x1
         blr x21                  // pstate(0x178010, 0x1, 0x178000, 0x0)
         if !w0 jmp 0x800d310     // unlikely

    loc_0x0800d2f4: // orphan
         w0 = ~0x1
         jmp 0x800d1e4

    loc_0x0800d2fc: // orphan
         if !x21 jmp 0x800d2a8    // likely

    loc_0x0800d300: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         0x800d308 ()             // 0x800d308(0x800d000, 0x0, 0x0, 0x0)
         jmp 0x800d544

    loc_0x0800d310: // orphan
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800d318 ()             // 0x800d318(0xcc0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800d3f8     // unlikely

    loc_0x0800d320: // orphan
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x0 + 0x11           // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0xfef               // '\xef\x0f'
         0x800d330 ()             // 0x800d330(0x11, 0x0, 0xfef, 0x0)
         x8 = 0x800d000
         x10 = 0x800d000
         x8 = x8 + 0
         x0 = 0xfd1c              // '\x1c\xfd'
         x0 = 0xe860              // '`\xe8'
         x2 = 0x800d000
         x0 = 0xf4fc              // '\xfc\xf4'
         x2 = x2 + 0
         (x9, 2) = 3
         x0 = 0x6517              // '\x17e' // int64_t arg1
         [x21 + 0x10] = (byte) wzr
         [x21] = (x9,2)
         x22 = [x10]              // 0xd1 // 209
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_420h
         0x800d36c ()             // 0x800d36c(0x6517f4fce860fd1c, 0x0, 0x800d000, 0x0)
         x0 = 0x800d000
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_420h
         x0 = x0 + 0
         w3 = 0x800e              // '\x0e\x80'
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x4 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x22                  // pstate(0x800d000, 0x178000, 0x800d000, 0x800e)
         w22 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800d398 ()             // 0x800d398(0x0, 0x0, 0x800d000, 0x800e)
         x8 = 0x800d000
         x0 = 0x2fea              // '\xea/'
         x0 = 0x52a8              // '\xa8R'
         x2 = 0x800d000
         x0 = 0xfc99              // '\x99\xfc'
         x2 = x2 + 0
         x21 = [x8]               // 0xcf // 207
         x0 = 0xae50              // 'P\xae' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_420h
         0x800d3c0 ()             // 0x800d3c0(0xae50fc9952a82fea, 0x0, 0x800d000, 0x800e)
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x21                  // pstate(0x178000, 0x0, 0x800d000, 0x800e)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w22 jmp 0x800d42c    // unlikely

    loc_0x0800d3d4: // orphan
         x0 = 0x800d000
         x1 = var_10h_3           // int64_t arg_420h
         x0 = x0 + 0              // int64_t arg1
         w2 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800d3e4 ()             // 0x800d3e4(0x800d000, 0x178010, 0x0, 0x0)
         w0 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w22 == 1)
         b.eq 0x800d2f4           // unlikely

    loc_0x0800d3f4: // orphan
         jmp 0x800d42c

    loc_0x0800d3f8: // orphan
         x8 = 0x800d000
         x0 = 0x2fea              // '\xea/'
         x0 = 0x52a8              // '\xa8R'
         x2 = 0x800d000
         x0 = 0xfc99              // '\x99\xfc'
         x2 = x2 + 0
         x21 = [x8]               // 0xcf // 207
         x0 = 0xae50              // 'P\xae' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_420h
         0x800d41c ()             // 0x800d41c(0xae50fc9952a82fea, 0x0, 0x800d000, 0x0)
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x21                  // pstate(0x178000, 0x0, 0x800d000, 0x0)
         w0 = ~0xb

    loc_0x0800d42c: // orphan
         // CODE XREF from sym.do_hide_path @ 0x800d3f4
         tbnz w0,0x1f,0x800d1e4   // unlikely

    loc_0x0800d430: // orphan
         x8 = 0x800d000
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x218
         x0 = [x8]                // 0xcf // 207 // int64_t arg1
         0x800d440 ()             // 0x800d440(0x0, 0xdc0, 0x218, 0x0)
         if !x0 jmp 0x800d4a4     // likely

    loc_0x0800d448: // orphan
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x0 + 0x10           // int64_t arg1
         x1 = var_10h_3           // int64_t arg_420h
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800d458 ()             // 0x800d458(0x10, 0x178010, 0x0, 0x0)
         x0 = 0x800d000
         w8 = 0x1
         x0 = x0 + 0              // int64_t arg1
         [x21 + 0x210] = (byte) w8
         [x21] = x21
         [x21 + 8] = x21
         0x800d474 ()             // 0x800d474(0x800d000, 0x178010, 0x0, 0x0)
         x0 = var_10h_3           // int64_t arg1
         0x800d47c ()             // 0x800d47c(0x178010, 0x178010, 0x0, 0x0)
         if !x0 jmp 0x800d54c     // unlikely

    loc_0x0800d484: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         0x800d48c ()             // 0x800d48c(0x800d000, 0x0, 0x0, 0x0)
         x0 = var_10h_3           // int64_t arg1
         0x800d494 ()             // 0x800d494(0x178010, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800d49c ()             // ")" // 0x800d49c(0x0, 0x0, 0x0, 0x0)
         jmp 0x800d544

    loc_0x0800d4a4: // orphan
         x0 = var_10h_3           // int64_t arg1
         0x800d4a8 ()             // 0x800d4a8(0x178010, 0x0, 0x0, 0x0)
         w0 = ~0xb
         jmp 0x800d1e4

    loc_0x0800d4b4: // orphan
         x0 = var_10h_3           // int64_t arg1
         0x800d4b8 ()             // 0x800d4b8(0x178010, 0x0, 0x0, 0x0)
         if x0 jmp 0x800d4e4      // likely

    loc_0x0800d4c0: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         0x800d4c8 ()             // 0x800d4c8(0x800d000, 0x0, 0x0, 0x0)
         x0 = 0x800d000
         // CODE XREF from sym.do_list_processes @ 0x800dfa0
         x1 = var_10h_3           // int64_t arg_420h
         x0 = x0 + 0              // int64_t arg1
         0x800d4d8 ()             // " " // 0x800d4d8(0x800d000, 0x178010, 0x0, 0x0)
         w0 = ~0x1
         jmp 0x800d1e4

    loc_0x0800d4e4: // orphan
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800d4e8 ()             // 0x800d4e8(0x0, 0x0, 0x0, 0x0)
         tbz w0,0,0x800d4fc       // likely

    loc_0x0800d4f0: // orphan
         (x9, 2) = 3
         [x9 + 8] = x8
         [x8] = x9

    loc_0x0800d4fc: // orphan
         x8 = 0x100
         w9 = 0x22                // '\"'
         x8 = 0xdead              // '\xad\xde'
         x0 = 0x800d000
         x9 = x8 | x9
         x0 = x0 + 0              // int64_t arg1
         [x19] = (x8,2)
         0x800d518 ()             // "hBH9h" // 0x800d518(0x800d000, 0x0, 0x0, 0x0)
         w8 = (byte) [x19 + 0x210] // 0xda // 218
         if !w8 jmp 0x800d52c     // unlikely

    loc_0x0800d524: // orphan
         x0 = x19 + 0x10          // int64_t arg1
         0x800d528 ()             // 0x800d528(0x10, 0x0, 0x0, 0x0)

    loc_0x0800d52c: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800d530 ()             // 0x800d530(0x0, 0x0, 0x0, 0x0)
         x0 = 0x800d000
         x0 = x0 + 0

    loc_0x0800d53c: // orphan
         // CODE XREF from sym.do_hide_path @ 0x800d584
         x1 = var_10h_3           // int64_t arg_420h
         0x800d540 ()             // 0x800d540(0x0, 0x178010, 0x0, 0x0)

    loc_0x0800d544: // orphan
         // CODE XREFS from sym.do_hide_path @ 0x800d30c, 0x800d4a0
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800d1e4

    loc_0x0800d54c: // orphan
         x20 = [x19]              // 0xda // 218
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_420h
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800d55c ()             // 0x800d55c(0x0, 0x0, 0xdead000000000100, 0x0)
         tbz w0,0,0x800d570       // likely

    loc_0x0800d564: // orphan
         [x20 + 8] = x21
         [x21] = (x20,2)
         [x19] = x21

    loc_0x0800d570: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         0x800d578 ()             // 0x800d578(0x800d000, 0x0, 0x0, 0x0)
         x0 = 0x800d000
         x0 = x0 + 0
         jmp 0x800d53c

}

/* ===== 0x0802a1d0 ===== */
int sym.initEvent (int esi, int edx) {
    loc_0x802a1d0:
        hint 0x19
        sp = sp - 0xd0
        [x18] + 8 = x30
        [sp, 0x90] = (x29,2)
        x29 = var_90h
        [sp, 0xa0] = (x24,2)
        [sp, 0xb0] = (x22,2)
        [sp, 0xc0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x802a000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x21 = 0x802a000
        [x29 = x8
        w8 = (byte) [x20] // 0xdb // 219
        tbnz w8,0,0x802a34c // unlikely
            
    loc_0x802a34c:
        w8 = (byte) [x21] // 0xdc // 220
        tbnz w8,0,0x802a37c // unlikely
            
    loc_0x802a37c:
        w0 = 0x1
         // do {
    loc_0x802a380:
        // CODE XREFS from sym.initEvent @ 0x802a47c, 0x802a49c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x802a554 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802a210
    loc_0x802a21c:
        // CODE XREF from sym.initEvent @ 0x802a528
        x0 = 0x802a000
        x0 = x0 + 0
        blr x8        // pstate(0x802a000, 0x0, 0x0, 0x0)
        jmp 0x802a264
         // do {
    loc_0x802a264:
        // CODE XREF from sym.initEvent @ 0x802a228
        x23 = 0x802a000
        x8 = [x22]    // 0xdd // 221
        [x23] = x0
        if !x8 jmp 0x802a284 // likely
         // } while (?);
        }
        return eax;
    loc_0x802a274:
        // CODE XREF from sym.initEvent @ 0x802a53c
        x0 = 0x802a000
        x0 = x0 + 0
        blr x8        // pstate(0x802a000, 0x0, 0x0, 0x0)
        jmp 0x802a2bc
         // do {
    loc_0x802a2bc:
        // CODE XREF from sym.initEvent @ 0x802a280
        x24 = 0x802a000
        x8 = [x22]    // 0xdd // 221
        [x24] = x0
        if !x8 jmp 0x802a2dc // likely
         // } while (?);
        }
        return eax;
    loc_0x802a2cc:
        // CODE XREF from sym.initEvent @ 0x802a550
        x0 = 0x802a000
        x0 = x0 + 0
        blr x8        // pstate(0x802a000, 0x0, 0x0, 0x0)
        jmp 0x802a314
         // do {
    loc_0x802a314:
        // CODE XREF from sym.initEvent @ 0x802a2d8
        x8 = 0x802a000
        [x8] = x0
        if !x0 jmp 0x802a33c // likely
         // } while (?);
        }
        return eax;
    loc_0x802a320:
        x8 = [x23]    // 0xde // 222
        if !x8 jmp 0x802a33c // likely
            
    loc_0x802a33c:
        w8 = 0x1
        [x21] = (byte) w8
         // do {
    loc_0x802a344:
        w8 = 0x1
        [x20] = (byte) w8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802a328
    loc_0x802a330:
        x8 = 0x802a000
        x8 = [x8]     // 0xcf // 207
        if x8 jmp 0x802a344 // unlikely
        }
        return eax;
    loc_0x0802a22c: // orphan
             x8 = 0x802a000
             x0 = var_sp_8h           // int64_t arg1
             x8 = x8 + 0
             [sp, 0x78] = (xzr,2)
             [sp, 0x68] = (xzr,2)
             [sp, 0x58] = (xzr,2)
             [sp, 0x48] = (xzr,2)
             [sp, 0x28] = (xzr,2)
             [sp, 0x18] = (xzr,2)
             [sp, 8] = (xzr,2)
             [sp, 0x38] = (x8,2)
             0x802a258 ()             // 0x802a258(0x178008, 0x0, 0x0, 0x0)
             tbz w0,0x1f,0x802a4a0    // likely

    loc_0x0802a260: // orphan
         // CODE XREF from sym.initEvent @ 0x802a4c4
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802a284: // orphan
         x8 = 0x802a000
         x0 = var_sp_8h           // int64_t arg1
         x8 = x8 + 0
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 8] = (xzr,2)
         [sp, 0x38] = (x8,2)
         0x802a2b0 ()             // 0x802a2b0(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x802a4c8    // likely

    loc_0x0802a2b8: // orphan
         // CODE XREF from sym.initEvent @ 0x802a4ec
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802a2dc: // orphan
         x8 = 0x802a000
         x0 = var_sp_8h           // int64_t arg1
         x8 = x8 + 0
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 8] = (xzr,2)
         [sp, 0x38] = (x8,2)
         0x802a308 ()             // 0x802a308(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x802a4f0    // likely

    loc_0x0802a310: // orphan
         // CODE XREF from sym.initEvent @ 0x802a514
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802a394: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_d0h
         hint 0x1d
         

    loc_0x0802a3b4: // orphan
         w8 = [var_sp_8h]         // 0x4 // 4
         w0 = 0x2
         if (w8 == 1)
         b.lt 0x802a380           // likely

    loc_0x0802a3c4: // orphan
         w9 = [var_ch]            // 0x4 // 4
         if (w9 == 1)
         b.lt 0x802a380           // likely

    loc_0x0802a3d0: // orphan
         x10 = 0x802a000
         x10 = [x10]              // 0xd1 // 209
         x11 = [x10]              // 0xd1 // 209
         if (x11 == x10)
         b.eq 0x802a480           // unlikely

    loc_0x0802a3e4: // orphan
         x12 = 0x802a000
         jmp 0x802a3f8

    loc_0x0802a3ec: // orphan
         x11 = [x11]              // 0xd2 // 210
         if (x11 == x10)
         b.eq 0x802a480           // unlikely

    loc_0x0802a3f8: // orphan
         // CODE XREF from sym.initEvent @ 0x802a3e8
         x13 = x11 - 0x5e0
         [x12] = x13
         b.eq 0x802a3ec           // unlikely

    loc_0x0802a404: // orphan
         x13 = x11 - 0x488
         x13 = [x13]              // 0xd4 // 212
         if !x13 jmp 0x802a3ec    // unlikely

    loc_0x0802a410: // orphan
         x14 = x11 - 0x5b8
         x14 = [x14]              // 0xd5 // 213
         tbz w14,3,0x802a3ec      // unlikely

    loc_0x0802a41c: // orphan
         x14 = x11 - 0x548
         x15 = [x14]              // 0xd5 // 213
         tbz x15,0x35,0x802a3ec   // unlikely

    loc_0x0802a428: // orphan
         x14 = [x14]              // 0xd5 // 213
         tbz x14,0x36,0x802a3ec   // unlikely

    loc_0x0802a430: // orphan
         w14 = [x13 + 0x560]      // 0xd4 // 212
         if (w14 == 1)
         b.lt 0x802a3ec           // likely

    loc_0x0802a43c: // orphan
         w14 = [x13 + 0x500]      // 0xd4 // 212
         if (w14 == 1)
         b.lt 0x802a3ec           // likely

    loc_0x0802a448: // orphan
         w13 = [x13 + 0x518]      // 0xd4 // 212
         if (w13 == 1)
         b.lt 0x802a3ec           // likely

    loc_0x0802a454: // orphan
         if (w8 == w9)
         w10 = w14 + 1
         csel w11,w9,w8, gt
         csel w8,w8,w9, gt
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sdiv w10,w10,w11
         w11 = w13 + 1
         sdiv w8,w11,w8
         [x20] = w10
         [x21] = w8
         jmp 0x802a380

    loc_0x0802a480: // orphan
         w8 = [x21]               // 0xdc // 220
         w9 = [x20]               // 0xdb // 219
         if (w8 == 0)
         w8 = 0x3
         ccmp w9,0,4, ne
         w9 = 0xa
         csel w0,w9,w8, ne
         jmp 0x802a380

    loc_0x0802a4a0: // orphan
         x8 = [var_30h]           // 0x4 // 4
         x0 = var_sp_8h           // int64_t arg1
         [x22] = x8
         0x802a4ac ()             // 0x802a4ac(0x178008, 0x0, 0x0, 0x0)
         x1 = [x22]               // 0xdd // 221
         if x1 jmp 0x802a518      // unlikely

    loc_0x0802a4b8: // orphan
         x0 = 0x802a000
         x0 = x0 + 0              // int64_t arg1
         0x802a4c0 ()             // 0x802a4c0(0x802a000, 0x0, 0x0, 0x0)
         jmp 0x802a260

    loc_0x0802a4c8: // orphan
         x8 = [var_30h]           // 0x4 // 4
         x0 = var_sp_8h           // int64_t arg1
         [x22] = x8
         0x802a4d4 ()             // 0x802a4d4(0x178008, 0x0, 0x0, 0x0)
         x1 = [x22]               // 0xdd // 221
         if x1 jmp 0x802a52c      // unlikely

    loc_0x0802a4e0: // orphan
         x0 = 0x802a000
         x0 = x0 + 0              // int64_t arg1
         0x802a4e8 ()             // 0x802a4e8(0x802a000, 0x0, 0x0, 0x0)
         jmp 0x802a2b8

    loc_0x0802a4f0: // orphan
         x8 = [var_30h]           // 0x4 // 4
         x0 = var_sp_8h           // int64_t arg1
         [x22] = x8
         0x802a4fc ()             // 0x802a4fc(0x178008, 0x0, 0x0, 0x0)
         x1 = [x22]               // 0xdd // 221
         if x1 jmp 0x802a540      // unlikely

    loc_0x0802a508: // orphan
         x0 = 0x802a000
         x0 = x0 + 0              // int64_t arg1
         0x802a510 ()             // 0x802a510(0x802a000, 0x0, 0x0, 0x0)
         jmp 0x802a310

    loc_0x0802a518: // orphan
         x0 = 0x802a000
         x0 = x0 + 0              // int64_t arg1
         0x802a520 ()             // 0x802a520(0x802a000, 0x0, 0x0, 0x0)
         x8 = [x22]               // 0xdd // 221
         jmp 0x802a21c

    loc_0x0802a52c: // orphan
         x0 = 0x802a000
         x0 = x0 + 0              // int64_t arg1
         0x802a534 ()             // 0x802a534(0x802a000, 0x0, 0x0, 0x0)
         x8 = [x22]               // 0xdd // 221
         jmp 0x802a274

    loc_0x0802a540: // orphan
         x0 = 0x802a000
         x0 = x0 + 0              // int64_t arg1
         0x802a548 ()             // 0x802a548(0x802a000, 0x0, 0x0, 0x0)
         x8 = [x22]               // 0xdd // 221
         jmp 0x802a2cc

    loc_0x0802a554: // orphan
         0x802a554 ()             // sym._copy_from_user.224 // 0x802a554(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0802a70c ===== */
int sym.runEvent (int esi, int edx) {
    loc_0x802a70c:
        hint 0x19
        sp = sp - 0x60
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x802a000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x19 = 0x802a000
        [x29 = x8
        w8 = [x20]    // 0xdb // 219
        w9 = [x19]    // 0xda // 218
        if (w8 == 0)
        ccmp w9,0,4, ne
        b.ne 0x802a75c // unlikely
            
    loc_0x802a75c:
        x8 = 0x802a000
        w8 = (byte) [x8] // 0xcf // 207
        tbnz w8,0,0x802a784 // unlikely
            
    loc_0x802a784:
        w0 = 0x1
         // do {
    loc_0x802a788:
        // CODE XREFS from sym.runEvent @ 0x802a758, 0x802aaac
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x802aab0 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0802a79c: // orphan
             (x20, 2) = 3
             (x22, 2) = 3
             (x24, 2) = 3
             (x29, 2) = 3
             x30 = [x18 - 8]!         // 0xd9 // 217
             sp = arg_60h
             hint 0x1d
             

    loc_0x0802a7bc: // orphan
         (w10, 2) = 3
         w8 = [x20]               // 0xdb // 219
         w9 = [x19]               // 0xda // 218
         w21 = w10 * w8
         x8 = [sp]                // 0x4 // 4
         w20 = w11 * w9
         [sp, 8] = (w21,2)
         tbnz w8,1,0x802a8a4      // unlikely

    loc_0x0802a7dc: // orphan
         tbz w8,2,0x802a784       // likely

    loc_0x0802a7e0: // orphan
         x8 = 0x802a000
         x19 = [x8]               // 0xcf // 207
         if !x19 jmp 0x802aaa8    // likely

    loc_0x0802a7ec: // orphan
         x22 = 0x802a000
         x0 = 0x73a4              // '\xa4s'
         x0 = 0xe495              // '\x95\xe4'
         x2 = 0x802a000
         x0 = 0x404b              // 'K@'
         x2 = x2 + 0
         x21 = [x22]              // 0xdd // 221
         x0 = 0x23f4              // '\xf4#' // int64_t arg1
         w20 = [var_10h]          // 0x4 // 4
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         0x802a814 ()             // 0x802a814(0x23f4404be49573a4, 0x0, 0x802a000, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x2f                // '/'
         w3 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x21                  // pstate(0x0, 0x3, 0x2f, 0x0)
         x8 = 0x802a000
         x0 = 0x81e4              // '\xe4\x81'
         x0 = 0x4bc7              // '\xc7K'
         x2 = 0x802a000
         x0 = 0x96b7              // '\xb7\x96'
         x2 = x2 + 0
         x20 = [x8]               // 0xcf // 207
         x0 = 0xd949              // 'I\xd9' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         0x802a850 ()             // 0x802a850(0xd94996b74bc781e4, 0x0, 0x802a000, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x20                  // pstate(0x0, 0x0, 0x0, 0x0)
         x8 = 0x802a000
         x0 = 0xa6aa              // '\xaa\xa6'
         x0 = 0x80b8              // '\xb8\x80'
         x2 = 0x802a000
         x0 = 0x40ce              // '\xce@'
         x2 = x2 + 0
         x20 = [x8]               // 0xcf // 207
         x0 = 0x8e45              // 'E\x8e' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         0x802a888 ()             // 0x802a888(0x8e4540ce80b8a6aa, 0x0, 0x802a000, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x20                  // pstate(0x0, 0x0, 0x802a000, 0x0)
         x2 = 0x802a000
         x20 = [x22]              // 0xdd // 221
         x2 = x2 + 0
         jmp 0x802aa7c

    loc_0x0802a8a4: // orphan
         x8 = 0x802a000
         x19 = [x8]               // 0xcf // 207
         if !x19 jmp 0x802aaa8    // likely

    loc_0x0802a8b0: // orphan
         x24 = 0x802a000
         x0 = 0x73a4              // '\xa4s'
         x0 = 0xe495              // '\x95\xe4'
         x2 = 0x802a000
         x0 = 0x404b              // 'K@'
         x2 = x2 + 0
         x23 = [x24]              // 0xdf // 223
         x0 = 0x23f4              // '\xf4#' // int64_t arg1
         w22 = [var_10h]          // 0x4 // 4
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         0x802a8d8 ()             // 0x802a8d8(0x23f4404be49573a4, 0x0, 0x802a000, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x2f                // '/'
         w3 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x23                  // pstate(0x0, 0x3, 0x2f, 0x0)
         x8 = 0x802a000
         x0 = 0x81e4              // '\xe4\x81'
         x0 = 0x4bc7              // '\xc7K'
         x2 = 0x802a000
         x0 = 0x96b7              // '\xb7\x96'
         x2 = x2 + 0
         x22 = [x8]               // 0xcf // 207
         x0 = 0xd949              // 'I\xd9' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         0x802a914 ()             // 0x802a914(0xd94996b74bc781e4, 0x0, 0x802a000, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x1
         blr x22                  // pstate(0x0, 0x0, 0x1, 0x0)
         x22 = [x24]              // 0xdf // 223
         x0 = 0x73a4              // '\xa4s'
         x0 = 0xe495              // '\x95\xe4'
         x2 = 0x802a000
         x0 = 0x404b              // 'K@'
         x2 = x2 + 0
         x0 = 0x23f4              // '\xf4#' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         0x802a948 ()             // 0x802a948(0x23f4404be49573a4, 0x0, 0x802a000, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x35                // '5'
         w3 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x22                  // pstate(0x0, 0x3, 0x35, 0x0)
         x21 = [x24]              // 0xdf // 223
         x0 = 0x73a4              // '\xa4s'
         x0 = 0xe495              // '\x95\xe4'
         x2 = 0x802a000
         x0 = 0x404b              // 'K@'
         x2 = x2 + 0
         x0 = 0x23f4              // '\xf4#' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         0x802a980 ()             // 0x802a980(0x23f4404be49573a4, 0x0, 0x802a000, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x36                // '6'
         w3 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x21                  // pstate(0x0, 0x3, 0x36, 0x0)
         x20 = [x24]              // 0xdf // 223
         x0 = 0x73a4              // '\xa4s'
         x0 = 0xe495              // '\x95\xe4'
         x2 = 0x802a000
         x0 = 0x404b              // 'K@'
         x2 = x2 + 0
         x0 = 0x23f4              // '\xf4#' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         0x802a9b8 ()             // 0x802a9b8(0x23f4404be49573a4, 0x0, 0x802a000, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x3a                // ':'
         w3 = 0x1e
         blr x20                  // pstate(0x0, 0x3, 0x3a, 0x1e)
         x20 = [x24]              // 0xdf // 223
         x0 = 0x73a4              // '\xa4s'
         x0 = 0xe495              // '\x95\xe4'
         x2 = 0x802a000
         x0 = 0x404b              // 'K@'
         x2 = x2 + 0
         x0 = 0x23f4              // '\xf4#' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         0x802a9f0 ()             // 0x802a9f0(0x23f4404be49573a4, 0x0, 0x802a000, 0x1e)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x30                // '0'
         w3 = 0x1e
         blr x20                  // pstate(0x0, 0x3, 0x30, 0x1e)
         x20 = [x24]              // 0xdf // 223
         x0 = 0x73a4              // '\xa4s'
         x0 = 0xe495              // '\x95\xe4'
         x2 = 0x802a000
         x0 = 0x404b              // 'K@'
         x2 = x2 + 0
         x0 = 0x23f4              // '\xf4#' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         0x802aa28 ()             // 0x802aa28(0x23f4404be49573a4, 0x0, 0x802a000, 0x1e)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x32                // '2'
         w3 = 0x1e
         blr x20                  // pstate(0x0, 0x3, 0x32, 0x1e)
         x8 = 0x802a000
         x0 = 0xa6aa              // '\xaa\xa6'
         x0 = 0x80b8              // '\xb8\x80'
         x2 = 0x802a000
         x0 = 0x40ce              // '\xce@'
         x2 = x2 + 0
         x20 = [x8]               // 0xcf // 207
         x0 = 0x8e45              // 'E\x8e' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         0x802aa64 ()             // 0x802aa64(0x8e4540ce80b8a6aa, 0x0, 0x802a000, 0x1e)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x20                  // pstate(0x0, 0x0, 0x802a000, 0x1e)
         x20 = [x24]              // 0xdf // 223
         x2 = 0x802a000
         x2 = x2 + 0

    loc_0x0802aa7c: // orphan
         // CODE XREF from sym.runEvent @ 0x802a8a0
         x0 = 0x73a4              // '\xa4s'
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         x0 = 0xe495              // '\x95\xe4'
         x0 = 0x404b              // 'K@'
         x0 = 0x23f4              // '\xf4#' // int64_t arg1
         0x802aa90 ()             // 0x802aa90(0x23f4404be49573a4, 0x0, 0x0, 0x0)
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x20                  // pstate(0x0, 0x0, 0x0, 0x0)

    loc_0x0802aaa8: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x802a788

    loc_0x0802aab0: // orphan
         0x802aab0 ()             // 0x802aab0(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08023d08 ===== */
int sym.do_hwbp_set (int esi, int edx) {
    loc_0x8023d08:
        hint 0x19
        sp = sp - 0x1e0
        [x18] + 8 = x30
        [sp, 0x1a0] = (x29,2)
        x29 = var_1a0h
        [var_1b0h] = x28
        [sp, 0x1c0] = (x22,2)
        [sp, 0x1d0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x198
        [x29 = x8
        0x8023d44 ()  // 0x8023d44(0x177e20, 0x0, 0x198, 0x0)
        if !x19 jmp 0x8023d60 // likely
            
    loc_0x8023d60:
        w20 = ~0xd
         // do {
    loc_0x8023d64:
        // XREFS: CODE 0x08023e38  CODE 0x08023e68  CODE 0x08023fe8
        // XREFS: CODE 0x0802401c  CODE 0x0802406c  CODE 0x0802407c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8023e6c // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8023d4c
    loc_0x8023d9c:
        x22 = 0x8023000
        w20 = ~0x15
        x8 = [x22]    // 0xdd // 221
        if !x8 jmp 0x8023d64 // unlikely
    loc_0x8023dac:
        w0 = [sp]     // 0x4 // 4
        if (w0 == 1)
        b.lt 0x8023d64 // likely
    loc_0x8023db8:
        w8 = [var_4h] // 4
        if !w8 jmp 0x8023d64 // likely
    loc_0x8023dc0:
        if (w8 == 0x10)
        b.hi 0x8023d64 // unlikely
    loc_0x8023dc8:
        0x8023dc8 ()  // 0x8023dc8(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8023e34 // likely
            
    loc_0x8023e34:
        w20 = ~0x2
        jmp 0x8023d64
    loc_0x08023d78: // orphan
             w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x28 = [var_1b0h]         // 0x4 // 4
             (x20, 2) = 3
             (x22, 2) = 3
             (x29, 2) = 3
             x30 = [x18 - 8]!         // 0xd9 // 217
             sp = arg_1e0h
             hint 0x1d
             

    loc_0x08023dd0: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8023dd8 ()             // 0x8023dd8(0x0, 0x0, 0x0, 0x0)
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8023de4 ()             // 0x8023de4(0x0, 0x0, 0x0, 0x0)
         if !x20 jmp 0x8023e34    // likely

    loc_0x08023dec: // orphan
         w8 = [x20 + 0x5dc]       // 0xdb // 219
         x0 = x20 + 0x38
         w9 = [sp]                // 0x4 // 4
         if (w8 == w9)
         b.ne 0x8023e3c           // likely

    loc_0x08023e00: // orphan
         jmp 0x8023e70

    loc_0x08023e1c: // orphan
         dmb ishld
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8023e24 ()             // 0x8023e24(0x0, 0x0, 0x0, 0x0)
         w8 = [var_4h]            // 4
         if w8 jmp 0x8023ea4      // unlikely

    loc_0x08023e30: // orphan
         jmp 0x8023f18

    loc_0x08023e3c: // orphan
         jmp 0x802403c

    loc_0x08023e58: // orphan
         dmb ishld
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8023e60 ()             // 0x8023e60(0x0, 0x0, 0x0, 0x0)
         w20 = ~0x15
         jmp 0x8023d64

    loc_0x08023e6c: // orphan
         0x8023e6c ()             // 0x8023e6c(0x0, 0x0, 0x0, 0x0)

    loc_0x08023e70: // orphan
         // CODE XREF from sym.do_hwbp_set @ 0x8023e00
         bti j
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08023e7c: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8023e7c     // unlikely

    loc_0x08023e8c: // orphan
         if (w8 == 1)
         b.eq 0x8023e1c           // unlikely

    loc_0x08023e94: // orphan
         if (w8 == 0)
         jmp ifle 0x8024020       // likely

    loc_0x08023e9c: // orphan
         w8 = [var_4h]            // 4
         if !w8 jmp 0x8023f18     // likely

    loc_0x08023ea4: // orphan
         x10 = xzr | 0x5555555555555555
         x11 = sp                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = 0xf555             // 'U\xf5'
         x12 = xzr | 0xfffffffffffffff8
         x9 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         madd x10,x11,x10, x12
         x11 = var_28h
         x10 = x10 >> 3

    loc_0x08023ec4: // orphan
         if (x10 == x9)
         b.eq 0x8024068           // likely

    loc_0x08023ecc: // orphan
         if (x9 == 0x10)
         b.eq 0x8024038           // unlikely

    loc_0x08023ed4: // orphan
         ldur x12,[x11,-0x10]     // 0xd2 // 210
         if !x12 jmp 0x8024068    // unlikely

    loc_0x08023edc: // orphan
         ldur w12,[x11,-8]        // 0xd2 // 210
         w12 = w12 - 1
         if (w12 == 3)
         b.hi 0x8024068           // likely

    loc_0x08023eec: // orphan
         ldur w12,[x11,-4]        // 0xd2 // 210
         w12 = w12 - 9
         if (w12 != 8)
         b.lo 0x8024068           // unlikely

    loc_0x08023efc: // orphan
         w12 = [x11]              // 0xd2 // 210
         if (w12 == 3)
         b.hs 0x8024068           // unlikely

    loc_0x08023f08: // orphan
         x9 = x9 + 1
         x11 = var_18h
         if (x8 == x9)
         b.ne 0x8023ec4           // likely

    loc_0x08023f18: // orphan
         // CODE XREFS from sym.do_hwbp_set @ 0x8023e30, 0x8024030
         x0 = 0x8023000
         x0 = x0 + 0              // int64_t arg1 // "6"
         0x8023f20 ()             // 0x8023f20(0x8023000, 0x0, 0x0, 0x0)
         x8 = 0x8023000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x8023f34     // unlikely

    loc_0x08023f30: // orphan
         0x8023f30 ()             // 0x8023f30(0x0, 0x0, 0x0, 0x0)

    loc_0x08023f34: // orphan
         x20 = [x22]              // 0xdd // 221
         w2 = 0x320
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x35                // '5'
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8023f48 ()             // 0x8023f48(0x0, 0x0, 0x350320, 0x0)
         (w8, 2) = 3
         [x20 + 0x10] = w8
         if !w9 jmp 0x8023fb0     // likely

    loc_0x08023f58: // orphan
         x10 = sp                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = 0x5030             // '0P'
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x20 + 0x38
         x10 = var_28h
         w11 = 0x3

    loc_0x08023f70: // orphan
         if (x8 == 0x10)
         b.eq 0x8024034           // unlikely

    loc_0x08023f78: // orphan
         ldur w12,[x10,-8]        // 0xd1 // 209
         x8 = x8 + 1
         [x9 = w12
         ldur w12,[x10,-4]        // 0xd1 // 209
         [x9 = w12
         w12 = [x10]              // 0xd1 // 209
         [x9 = w12
         ldur x12,[x10,-0x10]     // 0xd1 // 209
         x10 = var_18h
         [x9] = x12
         x9 = x9 + x11
         w12 = [var_4h]           // 4
         if (x8 == x12)
         b.lo 0x8023f70           // likely

    loc_0x08023fb0: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8023fb4 ()             // 0x8023fb4(0x0, 0x0, 0x0, 0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8023fbc ()             // 0x8023fbc(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8023fec     // likely

    loc_0x08023fc4: // orphan
         w2 = 0x320
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = [x22]               // 0xdd // 221 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x35                // '5'
         0x8023fd8 ()             // 0x8023fd8(-1, 0x0, 0x350320, 0x0)
         x0 = 0x8023000
         x0 = x0 + 0              // int64_t arg1 // "6"
         0x8023fe4 ()             // 0x8023fe4(0x8023000, 0x0, 0x350320, 0x0)
         jmp 0x8023d64

    loc_0x08023fec: // orphan
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8023ff0 ()             // 0x8023ff0(0x178000, 0x0, 0x0, 0x0)
         x0 = 0x8023000
         x0 = x0 + 0              // int64_t arg1 // "6"
         0x8023ffc ()             // 0x8023ffc(0x8023000, 0x0, 0x0, 0x0)
         // XREFS(68)
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_1e0h
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x198
         0x802400c ()             // 0x802400c(0x0, 0x178000, 0x198, 0x0)
         w8 = ~0xd
         if (x0 == 0)
         csel w20,wzr,w8, eq
         jmp 0x8023d64

    loc_0x08024020: // orphan
         w1 = 0x3
         0x8024024 ()             // 0x8024024(0x0, 0x3, 0x0, 0x0)
         w8 = [var_4h]            // 4
         if w8 jmp 0x8023ea4      // unlikely

    loc_0x08024030: // orphan
         jmp 0x8023f18

    loc_0x08024034: // orphan
         brk 0x5512

    loc_0x08024038: // orphan
         // CODE XREF from sym.stop_task_run_monitor @ 0x80242dc
         brk 0x1

    loc_0x0802403c: // orphan
         // CODE XREF from sym.do_hwbp_set @ 0x8023e3c
         bti j
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08024048: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8024048     // unlikely

    loc_0x08024058: // orphan
         if (w8 == 1)
         b.eq 0x8023e58           // unlikely

    loc_0x08024060: // orphan
         if (w8 == 0)
         jmp ifle 0x8024070       // likely

    loc_0x08024068: // orphan
         w20 = ~0x15
         jmp 0x8023d64

    loc_0x08024070: // orphan
         w1 = 0x3
         0x8024074 ()             // 0x8024074(0x0, 0x3, 0x0, 0x0)
         w20 = ~0x15
         jmp 0x8023d64

}

/* ===== 0x080258a0 ===== */
int sym.do_hwbp_remove (int esi, int edx) {
    loc_0x80258a0:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x24,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x0 = 0x8025000
        x0 = x0 + 0
        0x80258c4 ()  // 0x80258c4(0x8025000, 0x0, 0x0, 0x0)
        x23 = 0x8025000
        x8 = [x23]    // 0xde // 222
        if !x8 jmp 0x802592c // unlikely
            
    loc_0x802592c:
        x8 = 0x8025000
        x0 = [x8]     // 0xcf // 207
        if x0 jmp 0x8025990 // likely
            
    loc_0x8025990:
        w2 = 0x320
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x35     // '5'
        0x802599c ()  // 0x802599c(0x0, 0x0, 0x350320, 0x0)
         // do {
    loc_0x80259a0:
        // CODE XREF from sym.do_hwbp_remove @ 0x8025938
        x0 = 0x8025000
        x0 = x0 + 0
        0x80259a8 ()  // 0x80259a8(0x8025000, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x080259c8
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80258d4
    loc_0x80258e4:
        x20 = 0x8025000
        x21 = 0x8025000
        w22 = ~0
        x24 = 0x8025000
        x20 = x20 + 0
        x21 = x21 + 0
         // do {
    loc_0x80258fc:
        // CODE XREF from sym.do_hwbp_remove @ 0x8025928
        w0 = w22      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8025904 ()  // 0x8025904(0x0, 0x0, 0x0, 0x0)
        w8 = [x24]    // 0xdf // 223
        if (w0 == w8)
        b.hs 0x802593c // likely
         // } while (?);
        }
        return eax;
    loc_0x8025914:
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w3 = 0x1
        w22 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8025924 ()  // 0x8025924(0x0, 0x0, 0x0, 0x1)
        jmp 0x80258fc
    loc_0x0802593c: // orphan
             x20 = 0x8025000
             x20 = x20 + 0
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8025948 ()             // 0x8025948(0x8025000, 0x0, 0x0, 0x0)
             x0 = 0x8025000
             x0 = x0 + 0
             0x8025954 ()             // 0x8025954(0x8025000, 0x0, 0x0, 0x0)
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x802595c ()             // 0x802595c(0x8025000, 0x0, 0x0, 0x0)
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8025964 ()             // 0x8025964(0x8025000, 0x0, 0x0, 0x0)
             x21 = 0x8025000
             x21 = x21 + 0
             x0 = x21 + 0x38
             0x8025974 ()             // 0x8025974(0x8025038, 0x0, 0x0, 0x0)
             x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x802597c ()             // 0x802597c(0x8025000, 0x0, 0x0, 0x0)
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8025984 ()             // 0x8025984(0x8025000, 0x0, 0x0, 0x0)
             [x23] = xzr
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

}

/* ===== 0x080259d0 ===== */
int sym.do_hwbp_get_config (int esi, int edx) {
    loc_0x80259d0:
        hint 0x19
        sp = sp - 0x1d0
        [x18] + 8 = x30
        [sp, 0x1a0] = (x29,2)
        x29 = var_1a0h
        [sp, 0x1b0] = (x28,2)
        [sp, 0x1c0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x198
        [x29 = x8
        0x8025a08 ()  // 0x8025a08(0x177e30, 0x0, 0x198, 0x0)
        w19 = ~0xd
        if !x20 jmp 0x8025a4c // likely
            
    loc_0x8025a4c:
        // CODE XREF from sym.do_hwbp_get_config @ 0x8025a10
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8025a80 // likely
            
    loc_0x8025a80:
        // CODE XREF from sym.do_hwbp_get_config @ 0x8025a5c
        0x8025a80 ()  // sym.do_hwbp_get_records // 0x8025a80(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x8025a84:
        hint 0x19
        sp = sp - 0x50
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        [sp, 8] = (xzr,2)
        [sp] = xzr
        if !x0 jmp 0x8025ad0 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08025a84 ===== */
int sym.do_hwbp_get_records (int esi, int edx) {
    loc_0x8025a84:
        hint 0x19
        sp = sp - 0x50
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        [sp, 8] = (xzr,2)
        [sp] = xzr
        if !x0 jmp 0x8025ad0 // likely
            
    loc_0x8025ad0:
        // CODE XREF from sym.do_hwbp_get_records @ 0x8025ab4
        w21 = ~0xd
         // do {
    loc_0x8025ad4:
        // XREFS: CODE 0x08025b10  CODE 0x08025b1c  CODE 0x08025b28
        // XREFS: CODE 0x08025b30  CODE 0x08025b38  CODE 0x08025c64
        // XREFS: CODE 0x08025c78  CODE 0x08025ca8
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8025cc4 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8025ab8
    loc_0x8025b08:
        // CODE XREF from sym.do_hwbp_get_records @ 0x8025acc
        x8 = [var_10h] // 0x4 // 4
        w21 = ~0x15
        if !x8 jmp 0x8025ad4 // likely
    loc_0x8025b14:
        w8 = [sp]     // 0x4 // 4
        if (w8 == 0xf)
        b.hi 0x8025ad4 // unlikely
    loc_0x8025b20:
        w8 = [var_4h] // 4
        if (w8 == 0xff)
        b.hi 0x8025ad4 // unlikely
    loc_0x8025b2c:
        w8 = [var_sp_8h] // 0x4 // 4
        if !w8 jmp 0x8025ad4 // likely
    loc_0x8025b34:
        if (w8 == 0x100)
        b.hi 0x8025ad4 // unlikely
    loc_0x8025b3c:
        x0 = 0x8025000
        x0 = x0 + 0   // int64_t arg1
        0x8025b44 ()  // 0x8025b44(0x8025000, 0x0, 0x0, 0x0)
        x22 = 0x8025000
        x8 = [x22]    // 0xdd // 221
        if !x8 jmp 0x8025c68 // unlikely
            
    loc_0x8025c68:
        // CODE XREFS from sym.do_hwbp_get_records @ 0x8025b50, 0x8025b70
        w21 = ~0x1
         // do {
    loc_0x8025c6c:
        // CODE XREF from sym.do_hwbp_get_records @ 0x8025cb0
        x0 = 0x8025000
        x0 = x0 + 0   // int64_t arg1
        0x8025c74 ()  // 0x8025c74(0x8025000, 0x0, 0x0, 0x0)
        jmp 0x8025ad4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8025b54
    loc_0x8025b60:
        w10 = 0x5030  // '0P'
        w10 = 0x3
        madd x10,x9,x10, x8
        x10 = [x10 + 0x38] // 0xd1 // 209
        if !x10 jmp 0x8025c68 // unlikely
    loc_0x8025b74:
        w10 = 0x5030  // '0P'
        w10 = 0x3
        madd x8,x9,x10, x8
        w9 = [var_4h] // 4
        w10 = 0x100
        w8 = [x8 + 0x40] // 0xcf // 207
        if (w8 == 0x100)
        csel w8,w8,w10, lo
        w8 = w8 - w9
        b.ls 0x8025c7c // unlikely
            
    loc_0x8025c7c:
        // CODE XREF from sym.do_hwbp_get_records @ 0x8025b98
        x0 = 0x8025000
        [sp + 0xc] = wzr
        x0 = x0 + 0   // int64_t arg1
        0x8025c88 ()  // 0x8025c88(0x8025000, 0x0, 0x0, 0x0)
        x1 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w2 = 0x18
        0x8025c98 ()  // 0x8025c98(0x0, 0x178000, 0x18, 0x0)
        w8 = ~0xd
        if (x0 == 0)
        csel w21,wzr,w8, eq
        jmp 0x8025ad4
    loc_0x08025ae8: // orphan
             w0 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             (x20, 2) = 3
             (x22, 2) = 3
             (x29, 2) = 3
             x30 = [x18 - 8]!         // 0xd9 // 217
             sp = var_50h
             hint 0x1d
             

    loc_0x08025b9c: // orphan
         w9 = [var_sp_8h]         // 0x4 // 4
         w1 = 0xcc0               // '\xc0\f'
         w2 = ~0
         if (w9 == w8)
         csel w8,w9,w8, lo
         w9 = 0x350
         umull x21,w8,w9
         [sp + 0xc] = w8
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8025bc0 ()             // 0x8025bc0(0x0, 0xcc0, -1, 0x0)
         if !x0 jmp 0x8025cac     // likely

    loc_0x08025bc8: // orphan
         w8 = [sp]                // 0x4 // 4
         if (w8 == 0xf)
         b.hi 0x8025cc8           // unlikely

    loc_0x08025bd4: // orphan
         w9 = [var_4h]            // 4
         if (w9 == 0x100)
         b.hi 0x8025cc8           // unlikely

    loc_0x08025be0: // orphan
         x10 = [x22]              // 0xdd // 221
         w11 = 0x5030             // '0P'
         w11 = 0x3
         w12 = 0x350
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         madd x8,x8,x11, x10
         madd x8,x9,x12, x8
         x1 = x8 + 0x50
         0x8025c04 ()             // 0x8025c04(0x0, 0x50, 0x0, 0x0)
         x0 = 0x8025000
         x0 = x0 + 0              // int64_t arg1
         0x8025c10 ()             // 0x8025c10(0x8025000, 0x50, 0x0, 0x0)
         x8 = x21 >> 0x1f
         if x8 jmp 0x8025cbc      // unlikely

    loc_0x08025c1c: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x1
         x22 = [var_10h]          // 0x4 // 4
         0x8025c2c ()             // 0x8025c2c(0x0, 0x0, 0x1, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8025c3c ()             // 0x8025c3c(0x0, 0x0, 0x0, 0x0)
         if x0 jmp 0x8025c58      // unlikely

    loc_0x08025c44: // orphan
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x18
         0x8025c50 ()             // 0x8025c50(0x0, 0x178000, 0x18, 0x0)
         if !x0 jmp 0x8025cb4     // likely

    loc_0x08025c58: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8025c40
         // CODE XREF from sym.do_hwbp_get_records @ +0x23c
         w21 = ~0xd

    loc_0x08025c5c: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8025cb8
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8025c60 ()             // 0x8025c60(0x0, 0x0, 0x0, 0x0)
         jmp 0x8025ad4

    loc_0x08025cac: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8025bc4
         w21 = ~0xb
         jmp 0x8025c6c

    loc_0x08025cb4: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8025c54
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8025c5c

    loc_0x08025cbc: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8025c18
         brk 0x800

    loc_0x08025cc4: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8025ae4
         0x8025cc4 ()             // 0x8025cc4(0x0, 0x0, 0x0, 0x0)

    loc_0x08025cc8: // orphan
         // CODE XREFS from sym.do_hwbp_get_records @ 0x8025b5c, 0x8025bd0, 0x8025bdc
         brk 0x5512

}

/* ===== 0x08025ccc ===== */
int sym.do_hwbp_set_record (int esi, int edx) {
    loc_0x8025ccc:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [var_10h] = x28
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        sp = sp - 0x370
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x360
        [x29 = x8
        0x8025d04 ()  // 0x8025d04(0x177c60, 0x0, 0x360, 0x0)
        if !x19 jmp 0x8025d20 // likely
            
    loc_0x8025d20:
        // CODE XREF from sym.do_hwbp_set_record @ 0x8025d08
        w19 = ~0xd
         // do {
    loc_0x8025d24:
        // CODE XREFS from sym.do_hwbp_set_record @ 0x8025d64, 0x8025d70, 0x8025e18
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8025e1c // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8025d0c
    loc_0x8025d58:
        // CODE XREF from sym.do_hwbp_set_record @ 0x8025d1c
        w8 = [sp]     // 0x4 // 4
        w19 = ~0x15
        if (w8 == 0xf)
        b.hi 0x8025d24 // unlikely
    loc_0x8025d68:
        w8 = [var_4h] // 4
        if (w8 == 0xff)
        b.hi 0x8025d24 // unlikely
    loc_0x8025d74:
        x0 = 0x8025000
        x0 = x0 + 0   // int64_t arg1
        0x8025d7c ()  // 0x8025d7c(0x8025000, 0x0, 0x0, 0x0)
        x8 = 0x8025000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8025df8 // unlikely
            
    loc_0x8025df8:
        // CODE XREFS from sym.do_hwbp_set_record @ 0x8025d88, 0x8025da8
        w19 = ~0x1
        jmp 0x8025e0c
         // do {
    loc_0x8025e0c:
        // CODE XREFS from sym.do_hwbp_set_record @ 0x8025df4, 0x8025dfc
        x0 = 0x8025000
        x0 = x0 + 0   // int64_t arg1
        0x8025e14 ()  // 0x8025e14(0x8025000, 0x0, 0x0, 0x0)
        jmp 0x8025d24
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8025d8c
    loc_0x8025d98:
        w10 = 0x5030  // '0P'
        w10 = 0x3
        madd x10,x9,x10, x8
        x10 = [x10 + 0x38] // 0xd1 // 209
        if !x10 jmp 0x8025df8 // unlikely
    loc_0x8025dac:
        w10 = [var_4h] // 4
        if (w10 == 0x100)
        b.hi 0x8025e20 // unlikely
            
    loc_0x8025e20:
        // CODE XREFS from sym.do_hwbp_set_record @ 0x8025d94, 0x8025db4
        brk 0x5512
         // } else {
    loc_0x8025db8:
        w11 = 0x5030  // '0P'
        w12 = 0x350
        w11 = 0x3
        w2 = 0x350
        madd x20,x9,x11, x8
        x9 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = var_10h_2 // int64_t arg_370h
        madd x8,x10,x12, x20
        x0 = x8 + 0x50 // int64_t arg1
        0x8025ddc ()  // 0x8025ddc(0x50, 0x178010, 0x350, 0x0)
        w9 = [x20 + 0x40]! // 0xdb // 219
        w8 = [var_4h] // 4
        if (w9 == w8)
        b.ls 0x8025e00 // unlikely
        }
        return eax;
    loc_0x8025df0:
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x8025e0c
    loc_0x08025d38: // orphan
             w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             sp = arg_370h
             (x20, 2) = 3
             x28 = [var_10h]          // 0x4 // 4
             (x29, 2) = 3
             x30 = [x18 - 8]!         // 0xd9 // 217
             hint 0x1d
             

    loc_0x08025e00: // orphan
         // CODE XREF from sym.do_hwbp_set_record @ 0x8025dec
         w8 = w8 + 1
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20] = w8

    loc_0x08025e1c: // orphan
         // CODE XREF from sym.do_hwbp_set_record @ 0x8025d34
         0x8025e1c ()             // 0x8025e1c(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x08025e24 ===== */
int sym.do_hwbp_clear_records (int esi, int edx) {
    loc_0x8025e24:
        hint 0x19
        sp = sp - 0x40
        [x18] + 8 = x30
        [sp, 0x10] = (x29,2)
        x29 = var_10h
        [var_20h] = x21
        [sp, 0x30] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [var_8h] = x8
        [sp] = wzr    // arg1
        if !x0 jmp 0x8025e68 // likely
            
    loc_0x8025e68:
        // CODE XREF from sym.do_hwbp_clear_records @ 0x8025e50
        w19 = ~0xd
         // do {
    loc_0x8025e6c:
        // CODE XREFS from sym.do_hwbp_clear_records @ 0x8025eb4, 0x8025f38
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x9 = [var_8h] // 0x4 // 4
        if (x8 == x9)
        b.ne 0x8025f3c // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8025e54
    loc_0x8025ea0:
        // CODE XREF from sym.do_hwbp_clear_records @ 0x8025e64
        w8 = [sp]     // 0x4 // 4
        w8 = w8 - 0x10
        if (w8 != 0x11)
        b.hs 0x8025eb8 // likely
            
    loc_0x8025eb8:
        // CODE XREF from sym.do_hwbp_clear_records @ 0x8025eac
        x0 = 0x8025000
        x0 = x0 + 0   // int64_t arg1
        0x8025ec0 ()  // 0x8025ec0(0x8025000, 0x0, 0x0, 0x0)
        x8 = 0x8025000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8025f28 // unlikely
            
    loc_0x8025f28:
        // CODE XREF from sym.do_hwbp_clear_records @ 0x8025ecc
        w19 = ~0x12
         // do {
    loc_0x8025f2c:
        // CODE XREF from sym.do_hwbp_clear_records @ 0x8025f24
        x0 = 0x8025000
        x0 = x0 + 0   // int64_t arg1
        0x8025f34 ()  // 0x8025f34(0x8025000, 0x0, 0x0, 0x0)
        jmp 0x8025e6c
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08025e80: // orphan
             w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x21 = [var_20h]          // 0x4 // 4
             (x20, 2) = 3
             (x29, 2) = 3
             x30 = [x18 - 8]!         // 0xd9 // 217
             sp = arg_40h
             hint 0x1d
             

    loc_0x08025ee4: // orphan
         // CODE XREFS from sym.do_hwbp_clear_records @ 0x8025f10, 0x8025f1c
         w2 = 0x5000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x3
         0x8025ef4 ()             // 0x8025ef4(0x0, 0x0, 0x35000, 0x0)
         [x19 = wzr

    loc_0x08025efc: // orphan
         // CODE XREF from sym.do_hwbp_clear_records @ 0x8025f18
         x20 = x20 + 1
         x19 = x19 + x21
         if (x20 == 0x10)
         b.eq 0x8025f20           // unlikely

    loc_0x08025f0c: // orphan
         // CODE XREF from sym.do_hwbp_clear_records @ 0x8025ee0
         w8 = [sp]                // 0x4 // 4
         tbnz w8,0x1f,0x8025ee4   // unlikely

    loc_0x08025f14: // orphan
         if (x20 == x8)
         b.ne 0x8025efc           // unlikely

    loc_0x08025f1c: // orphan
         jmp 0x8025ee4

    loc_0x08025f20: // orphan
         // CODE XREF from sym.do_hwbp_clear_records @ 0x8025f08
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8025f2c

    loc_0x08025f3c: // orphan
         // CODE XREF from sym.do_hwbp_clear_records @ 0x8025e7c
         0x8025f3c ()             // sym.arm64_decode_insn // 0x8025f3c(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800e7d8 ===== */
int sym.do_get_main_thread_elf0 (int esi, int edx) {
    loc_0x800e7d8:
        hint 0x19
        sp = sp - 0x40
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        [var_30h] = x19
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = var_8h   // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_40h
        w2 = 0x10
        [x29 = x8
        [sp, 8] = (xzr,2)
        0x800e810 ()  // "`" // 0x800e810(0x177fc8, 0x0, 0x10, 0x0)
        if !x0 jmp 0x800e820 // unlikely
            
    loc_0x800e820:
        // CODE XREF from sym.do_get_main_thread_elf0 @ 0x800e814
        w0 = [var_8h] // 0x4 // 4
        if (w0 == 1)
        b.lt 0x800e854 // likely
            
    loc_0x800e854:
        // CODE XREF from sym.do_get_main_thread_elf0 @ 0x800e828
        w0 = ~0x15
         // do {
    loc_0x800e858:
        // CODE XREFS from sym.do_get_main_thread_elf0 @ 0x800e81c, 0x800e850
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800e884 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800e86c: // orphan
             (x29, 2) = 3
             x19 = [var_30h]          // 0x4 // 4
             x30 = [x18 - 8]!         // 0xd9 // 217
             sp = arg_40h
             hint 0x1d
             

    loc_0x0800e884: // orphan
         // CODE XREF from sym.do_get_main_thread_elf0 @ 0x800e868
         0x800e884 ()             // sym._copy_from_user.87 // 0x800e884(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800ebb0 ===== */
int sym.do_get_thread_tpidr_el0 (int esi, int edx) {
    loc_0x800ebb0:
        hint 0x19
        sp = sp - 0x40
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        [var_30h_3] = x19
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = var_8h   // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_40h
        w2 = 0x10
        [x29 = x8
        [sp, 8] = (xzr,2)
        0x800ebe8 ()  // "`" // 0x800ebe8(0x177fc8, 0x0, 0x10, 0x0)
        if !x0 jmp 0x800ebf8 // unlikely
            
    loc_0x800ebf8:
        // CODE XREF from sym.do_get_thread_tpidr_el0 @ 0x800ebec
        w0 = [var_8h] // 0x4 // 4
        if (w0 == 1)
        b.lt 0x800ec2c // likely
            
    loc_0x800ec2c:
        // CODE XREF from sym.do_get_thread_tpidr_el0 @ 0x800ec00
        w0 = ~0x15
         // do {
    loc_0x800ec30:
        // CODE XREFS from sym.do_get_thread_tpidr_el0 @ 0x800ebf4, 0x800ec28
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800ec5c // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800ec44: // orphan
             (x29, 2) = 3
             x19 = [var_30h_3]        // 0x4 // 4
             x30 = [x18 - 8]!         // 0xd9 // 217
             sp = arg_40h
             hint 0x1d
             

    loc_0x0800ec5c: // orphan
         // CODE XREF from sym.do_get_thread_tpidr_el0 @ 0x800ec40
         0x800ec5c ()             // sym.do_get_thread_pacga_key // 0x800ec5c(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800ec60 ===== */
int sym.do_get_thread_pacga_key (int esi, int edx) {
    loc_0x800ec60:
        hint 0x19
        sp = sp - 0x50
        [x18] + 8 = x30
        [sp, 0x30] = (x29,2)
        x29 = var_30h
        [sp + 0x40] = x19
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = var_8h_2 // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_50h
        w2 = 0x20
        [x29 = x8
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        0x800ec9c ()  // 0x800ec9c(0x177fb8, 0x0, 0x20, 0x0)
        if !x0 jmp 0x800ecd4 // unlikely
            
    loc_0x800ecd4:
        // CODE XREF from sym.do_get_thread_pacga_key @ 0x800eca0
        w0 = [var_8h_2] // 0x4 // 4
        if (w0 == 1)
        b.lt 0x800ed18 // likely
            
    loc_0x800ed18:
        // CODE XREF from sym.do_get_thread_pacga_key @ 0x800ecdc
        w0 = ~0x15
        jmp 0x800eca8
         // do {
    loc_0x800eca8:
        // CODE XREFS from sym.do_get_thread_pacga_key @ 0x800ecf4, 0x800ed14, 0x800ed1c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800ed20 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800ecbc: // orphan
             (x29, 2) = 3
             x19 = [var_40h_2]        // 4
             x30 = [x18 - 8]!         // 0xd9 // 217
             sp = arg_50h
             hint 0x1d
             

    loc_0x0800ecf8: // orphan
         x1 = var_8h_2            // int64_t arg_50h
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x20
         0x800ed04 ()             // 0x800ed04(0x0, 0x178008, 0x20, 0x0)
         w8 = ~0xd
         if (x0 == 0)
         csel w0,wzr,w8, eq
         jmp 0x800eca8

    loc_0x0800ed20: // orphan
         // CODE XREF from sym.do_get_thread_pacga_key @ 0x800ecb8
         0x800ed20 ()             // sym.do_get_thread_pacia_key // 0x800ed20(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800ed24 ===== */
int sym.do_get_thread_pacia_key (int esi, int edx) {
    loc_0x800ed24:
        hint 0x19
        sp = sp - 0x50
        [x18] + 8 = x30
        [sp, 0x30] = (x29,2)
        x29 = var_30h_2
        [sp + 0x40] = x19
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = var_8h_3 // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x20
        [x29 = x8
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        0x800ed60 ()  // 0x800ed60(0x177fb8, 0x0, 0x20, 0x0)
        if !x0 jmp 0x800ed98 // unlikely
            
    loc_0x800ed98:
        // CODE XREF from sym.do_get_thread_pacia_key @ 0x800ed64
        w0 = [var_8h_3] // 0x4 // 4
        if (w0 == 1)
        b.lt 0x800eddc // likely
            
    loc_0x800eddc:
        // CODE XREF from sym.do_get_thread_pacia_key @ 0x800eda0
        w0 = ~0x15
        jmp 0x800ed6c
         // do {
    loc_0x800ed6c:
        // CODE XREFS from sym.do_get_thread_pacia_key @ 0x800edb8, 0x800edd8, 0x800ede0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800ede4 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800ed80: // orphan
             (x29, 2) = 3
             x19 = [var_40h]          // 4
             x30 = [x18 - 8]!         // 0xd9 // 217
             sp = var_50h
             hint 0x1d
             

    loc_0x0800edbc: // orphan
         x1 = var_8h_3
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x20
         0x800edc8 ()             // 0x800edc8(0x0, 0x178008, 0x20, 0x0)
         w8 = ~0xd
         if (x0 == 0)
         csel w0,wzr,w8, eq
         jmp 0x800ed6c

    loc_0x0800ede4: // orphan
         // CODE XREF from sym.do_get_thread_pacia_key @ 0x800ed7c
         0x800ede4 ()             // sym.do_bind_thread_pacga_key // 0x800ede4(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800ede8 ===== */
int sym.do_bind_thread_pacga_key (int esi, int edx) {
    loc_0x800ede8:
        hint 0x19
        sp = sp - 0x20
        [x18] + 8 = x30
        [sp, 0x10] = (x29,2)
        x29 = var_10h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w2 = 0x8
        [sp + 8] = x8
        [sp] = xzr
        0x800ee18 ()  // "`" // 0x800ee18(0x177fe0, 0x0, 0x8, 0x0)
        if !x0 jmp 0x800ee28 // unlikely
            
    loc_0x800ee28:
        // CODE XREF from sym.do_bind_thread_pacga_key @ 0x800ee1c
        w8 = [sp]     // 0x4 // 4
        w0 = ~0x15
        if (w8 == 1)
        b.lt 0x800ee4c // likely
            
    loc_0x800ee4c:
        // CODE XREFS from sym.do_bind_thread_pacga_key @ 0x800ee24, 0x800ee34, 0x800ee40
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x9 = [var_8h_4] // 4
        if (x8 == x9)
        b.ne 0x800ee74 // likely
            
    loc_0x800ee74:
        // CODE XREF from sym.do_bind_thread_pacga_key @ 0x800ee5c
        0x800ee74 ()  // sym.hide_task_install // 0x800ee74(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x800ee78:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [sp + 0x10] = x21
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        if (w0 == 1)  // arg1
        b.lt 0x800f008 // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800ee44: // orphan
             w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800ee48 ()             // 0x800ee48(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0802a0e0 ===== */
int sym.arraylist_get (int esi, int edx) {
    loc_0x802a0e0:
        hint 0x19
        x8 = [x0 + 8] // 0xc7 // 199 // arg1
        if (x8 == x1) // arg2
        b.ls 0x802a100 // unlikely
            
    loc_0x802a100:
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        hint 0x1d
        0x0802a108
         // } else {
    loc_0x802a0f0:
        x8 = [x0]     // 0xc7 // 199 // arg1
        x0 = [x8 + x1,lsl 3] // 0xc8000000cf // 858993459407
        hint 0x1d
        0x0802a0fc
        }
        return eax;
}

/* ===== 0x0802a190 ===== */
int sym.arraylist_destroy (int esi, int edx) {
    loc_0x802a190:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = [x0]     // 0xc7 // 199 // arg1
        if !x0 jmp 0x802a1b4 // likely
            
    loc_0x802a1b4:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x802a1b8 ()  // 0x802a1b8(0x0, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0802a1cc
         // } else {
    loc_0x802a1b0:
        0x802a1b0 ()  // 0x802a1b0(0x0, 0x0, 0x0, 0x0)
        }
        return eax;
}

/* ===== 0x08029fb4 ===== */
int sym.arraylist_create (int esi, int edx) {
    loc_0x8029fb4:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8029000
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x18
        x0 = [x8]     // 0xcf // 207 // int64_t arg1
        0x8029fdc ()  // 0x8029fdc(0x528005cbd503249f, 0xcc0, 0x18, 0x0)
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x802a028 // unlikely
            
    loc_0x802a028:
        // CODE XREF from sym.arraylist_create @ 0x802a014
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0802a03c
         // } else {
    loc_0x8029fe8:
        if (x20 == 0x10)
        w8 = 0x10
        csel x20,x20,x8, hi
        if (xzr == x20)
        b.ne 0x802a018 // unlikely
        }
        return eax;
    loc_0x8029ffc:
        x0 = x20 << 3 // int64_t arg1
        // XREFS(90)
        w1 = 0xcc0    // '\xc0\f'
        0x802a004 ()  // 0x802a004(0x0, 0xcc0, 0x0, 0x0)
        [x19] = x0
        if !x0 jmp 0x802a01c // likely
            
    loc_0x802a01c:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x802a020 ()  // 0x802a020(0x0, 0x0, 0x0, 0x0)
        x19 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
    loc_0x0802a010: // orphan
             [x19, 8] = (xzr,2)
             jmp 0x802a028

    loc_0x0802a018: // orphan
         [x19] = xzr

}

/* ===== 0x0800ada4 ===== */
int sym.is_file_exist (int esi, int edx) {
    loc_0x800ada4:
        hint 0x19
        sp = sp - 0xc0
        [x18] + 8 = x30
        [sp, 0x90] = (x29,2)
        x29 = var_90h
        [var_a0h] = x21
        [sp, 0xb0] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = 0x800a000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x29 = x8
        x20 = [x21]   // 0xdc // 220
        if !x20 jmp 0x800ae64 // unlikely
            
    loc_0x800ae64:
        x20 = 0x800a000
        x8 = [x20]    // 0xdb // 219
        if !x8 jmp 0x800aeb4 // unlikely
            
    loc_0x800aeb4:
        x8 = 0x800a000
        x0 = var_8h   // int64_t arg1
        x8 = x8 + 0
        [sp, 0x78] = (xzr,2)
        [sp, 0x68] = (xzr,2)
        [sp, 0x58] = (xzr,2)
        [sp, 0x48] = (xzr,2)
        [sp, 0x28] = (xzr,2)
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        [sp, 0x38] = (x8,2)
        0x800aee0 ()  // 0x800aee0(0x178008, 0x0, 0x0, 0x0)
        tbz w0,0x1f,0x800af60 // likely
            
    loc_0x800af60:
        x8 = [var_30h] // 0x4 // 4
        x0 = var_8h   // int64_t arg1
        [x20] = x8
        0x800af6c ()  // 0x800af6c(0x178008, 0x0, 0x0, 0x0)
        x1 = [x20]    // 0xdb // 219
        if x1 jmp 0x800af88 // unlikely
            
    loc_0x800af88:
        x0 = 0x800a000
        x0 = x0 + 0   // int64_t arg1
        0x800af90 ()  // 0x800af90(0x800a000, 0x0, 0x0, 0x0)
        x8 = [x20]    // 0xdb // 219
        jmp 0x800ae70
    loc_0x0800addc: // orphan
             x0 = 0xd76f              // 'o\xd7'
             x2 = 0x800a000
             x0 = 0x4962              // 'bI'
             x2 = x2 + 0
             x0 = 0xff67              // 'g\xff'
             x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_c0h
             x0 = 0xe7c3              // '\xc3\xe7' // int64_t arg1
             0x800adf8 ()             // 0x800adf8(0xe7c3ff674962d76f, 0x0, 0x800a000, 0x0)
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             blr x20                  // pstate(0x0, 0x0, 0x0, 0x0)
             x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             [sp] = x8
             if !x8 jmp 0x800af30     // likely

    loc_0x0800ae1c: // orphan
         if (x8 != 1)
         b.hi 0x800af30           // unlikely

    loc_0x0800ae24: // orphan
         x20 = 0x800a000
         x19 = [x20]              // 0xdb // 219
         if !x19 jmp 0x800ae8c    // unlikely

    loc_0x0800ae30: // orphan
         x0 = 0xe3b2              // '\xb2\xe3'
         x2 = 0x800a000
         x0 = 0xa5fb              // '\xfb\xa5'
         x2 = x2 + 0
         x0 = 0x46f9              // '\xf9F'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_c0h
         x0 = 0xe08e              // '\x8e\xe0' // int64_t arg1
         0x800ae4c ()             // 0x800ae4c(0xe08e46f9a5fbe3b2, 0x0, 0x800a000, 0x0)
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x19                  // " " // pstate(0x178000, 0x0, 0x800a000, 0x0)

    loc_0x0800ae5c: // orphan
         // CODE XREF from sym.is_file_exist @ 0x800aeb0
         w0 = 0x1
         jmp 0x800af30

    loc_0x0800ae70: // orphan
         // CODE XREF from sym.is_file_exist @ 0x800af98
         x0 = 0x800a000
         x0 = x0 + 0
         blr x8                   // pstate(0x800a000, 0x0, 0x0, 0x0)
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x21] = x0
         if x0 jmp 0x800addc      // likely

    loc_0x0800ae88: // orphan
         jmp 0x800af30

    loc_0x0800ae8c: // orphan
         x19 = 0x800a000
         x8 = [x19]               // 0xda // 218
         if !x8 jmp 0x800aef4     // unlikely

    loc_0x0800ae98: // orphan
         // CODE XREF from sym.is_file_exist @ 0x800afd4
         x0 = 0x800a000
         x0 = x0 + 0
         blr x8                   // pstate(0x800a000, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20] = x0
         if x0 jmp 0x800ae30      // likely

    loc_0x0800aeb0: // orphan
         jmp 0x800ae5c

    loc_0x0800aee8: // orphan
         // CODE XREF from sym.is_file_exist @ 0x800af84
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x21] = xzr
         jmp 0x800af30

    loc_0x0800aef4: // orphan
         x8 = 0x800a000
         x0 = var_8h              // int64_t arg1
         x8 = x8 + 0
         [sp, 0x78] = (xzr,2)
         [sp, 0x68] = (xzr,2)
         [sp, 0x58] = (xzr,2)
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         [sp, 0x18] = (xzr,2)
         [sp, 8] = (xzr,2)
         [sp, 0x38] = (x8,2)
         0x800af20 ()             // 0x800af20(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x800af9c    // likely

    loc_0x0800af28: // orphan
         // CODE XREF from sym.is_file_exist @ 0x800afc0
         w0 = 0x1
         [x20] = xzr

    loc_0x0800af30: // orphan
         // CODE XREFS from sym.is_file_exist @ 0x800ae60, 0x800ae88, 0x800aef0
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x5e0]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x800afd8           // likely

    loc_0x0800af44: // orphan
         (x20, 2) = 3
         (x29, 2) = 3
         x21 = [var_a0h]          // 0x4 // 4
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_c0h
         hint 0x1d
         

    loc_0x0800af78: // orphan
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800af80 ()             // 0x800af80(0x800a000, 0x0, 0x0, 0x0)
         jmp 0x800aee8

    loc_0x0800af9c: // orphan
         x8 = [var_30h]           // 0x4 // 4
         x0 = var_8h              // int64_t arg1
         [x19] = x8
         0x800afa8 ()             // 0x800afa8(0x178008, 0x0, 0x0, 0x0)
         x1 = [x19]               // 0xda // 218
         if x1 jmp 0x800afc4      // unlikely

    loc_0x0800afb4: // orphan
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800afbc ()             // 0x800afbc(0x800a000, 0x0, 0x0, 0x0)
         jmp 0x800af28

    loc_0x0800afc4: // orphan
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800afcc ()             // 0x800afcc(0x800a000, 0x0, 0x0, 0x0)
         x8 = [x19]               // 0xda // 218
         jmp 0x800ae98

    loc_0x0800afd8: // orphan
         0x800afd8 ()             // sym.kallsyms_lookup_name_ex // 0x800afd8(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800b0c0 ===== */
int sym.get_target_task (int esi, int edx) {
    loc_0x800b0c0:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800b0d4 ()  // 0x800b0d4(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800b0f8 // likely
            
    loc_0x800b0f8:
        x20 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800b0fc:
        // CODE XREF from sym.get_target_task @ 0x800b0f4
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800b110
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800b114 ===== */
int sym.disable_kprobe_blacklist (int esi, int edx) {
    loc_0x800b114:
        hint 0x19
        sp = sp - 0xb0
        [x18] + 8 = x30
        [sp, 0x90] = (x29,2)
        x29 = var_90h
        [var_a0h] = x19
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x800b000
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
        x8 = [x19]    // 0xda // 218
        if x8 jmp 0x800b1b0 // likely
            
    loc_0x800b1b0:
        x0 = 0x800b000
        x0 = x0 + 0
        blr x8        // pstate(0x800b000, 0x0, 0x0, 0x0)
        if x0 jmp 0x800b1d4 // likely
            
    loc_0x800b1d4:
        x8 = [x0]     // 0xc7 // 199
        if (x8 == x0)
        b.ne 0x800b220 // unlikely
            
    loc_0x800b220:
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800b234
         // do {
    loc_0x800b234:
        // CODE XREF from sym.disable_kprobe_blacklist @ 0x800b224
        if !x8 jmp 0x800b228 // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800b144
    loc_0x800b178:
        x8 = [var_30h] // 0x4 // 4
        x0 = var_sp_8h // int64_t arg_b0h
        [x19] = x8
        0x800b184 ()  // 0x800b184(0x178008, 0x0, 0x0, 0x0)
        x1 = [x19]    // 0xda // 218
        if x1 jmp 0x800b1a0 // unlikely
            
    loc_0x800b1a0:
        x0 = 0x800b000
        x0 = x0 + 0   // int64_t arg_b0h
        0x800b1a8 ()  // 0x800b1a8(0x800b000, 0x0, 0x0, 0x0)
        x8 = [x19]    // 0xda // 218
    loc_0x0800b190: // orphan
             x0 = 0x800b000
             x0 = x0 + 0              // int64_t arg_b0h
             0x800b198 ()             // "\t" // 0x800b198(0x800b000, 0x0, 0x0, 0x0)
             jmp 0x800b1c0

    loc_0x0800b1e4: // orphan
         x0 = 0x800b000
         x0 = x0 + 0              // int64_t arg_b0h
         0x800b1ec ()             // 0x800b1ec(0x800b000, 0x0, 0x0, 0x0)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800b1f4: // orphan
         // CODE XREF from sym.disable_kprobe_blacklist @ 0x800b1d0
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x5e0]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x800b258           // likely

    loc_0x0800b208: // orphan
         (x29, 2) = 3
         x19 = [var_a0h]          // 0x4 // 4
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_b0h
         hint 0x1d
         

    loc_0x0800b228: // orphan
         // CODE XREF from sym.disable_kprobe_blacklist @ 0x800b254
         x8 = [x8]                // 0xcf // 207
         if (x8 == x0)
         b.eq 0x800b1e4           // likely

    loc_0x0800b238: // orphan
         x9 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x9 + 0x10]!       // 0xd0 // 208
         if !x10 jmp 0x800b228    // likely

    loc_0x0800b244: // orphan
         x10 = [x8 + 0x18]        // 0xcf // 207
         if !x10 jmp 0x800b228    // unlikely

    loc_0x0800b24c: // orphan
         w1 = w1 + 1
         [x9] = (xzr,2)
         jmp 0x800b228

    loc_0x0800b258: // orphan
         0x800b258 ()             // sym.compare_task_struct // 0x800b258(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800b25c ===== */
int sym.compare_task_struct (int esi, int edx) {
    loc_0x800b25c:
        hint 0x19
        hint 0x1d
        0x0800b264
         // (break)
}

/* ===== 0x0800b268 ===== */
int sym.get_module_bounds (int esi, int edx) {
    loc_0x800b268:
        hint 0x19
        sp = sp - 0x80
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        [sp, 0x30] = (x28,2)
        [sp, 0x40] = (x26,2)
        [sp, 0x50] = (x24,2)
        [sp, 0x60] = (x22,2)
        [sp, 0x70] = (x20,2)
        if !x3 jmp 0x800b32c // likely
            
    loc_0x800b32c:
        x0 = 0x800b000
        x0 = x0 + 0
        jmp 0x800b358
         // do {
    loc_0x800b358:
        // CODE XREFS from sym.get_module_bounds @ 0x800b328, 0x800b334, 0x800b340, 0x800b34c
        0x800b358 ()  // "D" // 0x800b358(0x0, 0x0, 0x0, 0x0)
        jmp 0x800b46c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800b294
    loc_0x800b29c:
        w24 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = x1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x20 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        w21 = w2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x22 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x800b2b0 ()  // 0x800b2b0(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800b338 // likely
            
    loc_0x800b338:
        x0 = 0x800b000
        x0 = x0 + 0
        jmp 0x800b358
    loc_0x0800b2b8: // orphan
             x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w0 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800b2c0 ()             // 0x800b2c0(0x0, 0x0, 0x0, 0x0)
             if !x0 jmp 0x800b344     // likely

    loc_0x0800b2c8: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800b2d0 ()             // 0x800b2d0(0x0, 0x0, 0x0, 0x0)
         x25 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800b2dc ()             // 0x800b2dc(0x0, 0x0, 0x0, 0x0)
         if !x25 jmp 0x800b350    // likely

    loc_0x0800b2e4: // orphan
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800b2e8 ()             // 0x800b2e8(0x0, 0x0, 0x0, 0x0)
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x25 + 0x38
         jmp 0x800b360

    loc_0x0800b310: // orphan
         dmb ishld
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800b318 ()             // 0x800b318(0x0, 0x0, 0x0, 0x0)
         if x24 jmp 0x800b390     // unlikely

    loc_0x0800b320: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x800b4a4
         x0 = 0x800b000
         x0 = x0 + 0
         jmp 0x800b358

    loc_0x0800b344: // orphan
         x0 = 0x800b000
         x0 = x0 + 0
         jmp 0x800b358

    loc_0x0800b350: // orphan
         x0 = 0x800b000
         x0 = x0 + 0

    loc_0x0800b360: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x800b2f4
         bti j
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x0800b36c: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800b36c     // unlikely

    loc_0x0800b37c: // orphan
         if (w8 == 1)
         b.eq 0x800b310           // unlikely

    loc_0x0800b384: // orphan
         if (w8 == 0)
         jmp ifle 0x800b498       // likely

    loc_0x0800b38c: // orphan
         if !x24 jmp 0x800b320    // likely

    loc_0x0800b390: // orphan
         

    loc_0x0800b394: // orphan
         // CODE XREF from fcn.0800b4b4 @ 0x800b4b8
         x0 = x24 + 0x68          // int64_t arg1
         [x29 = x0
         0x800b39c ()             // 0x800b39c(0x68, 0x0, 0x0, 0x0)
         

    loc_0x0800b3a4: // orphan
         // CODE XREF from fcn.0800b4cc @ 0x800b4d0
         [sp, 8] = (x20,2)
         x19 = [x24]              // 0xdf // 223
         if !x19 jmp 0x800b430    // likely

    loc_0x0800b3b0: // orphan
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x26 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800b3d4

    loc_0x0800b3c4: // orphan
         (x26, 2) = 3
         x25 = x28                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800b3cc: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x800b42c
         x19 = [x19 + 0x10]       // 0xda // 218
         if !x19 jmp 0x800b43c    // likely

    loc_0x0800b3d4: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x800b3c0
         x8 = [x19 + 0xa0]        // 0xda // 218
         if !x8 jmp 0x800b3cc     // unlikely

    loc_0x0800b3dc: // orphan
         if !w21 jmp 0x800b3ec    // likely

    loc_0x0800b3e0: // orphan
         x9 = [x19 + 0x50]        // 0xda // 218
         if ((x9 & x20) == 0)
         b.eq 0x800b3cc           // unlikely

    loc_0x0800b3ec: // orphan
         x28 = [x8 + 0x18]        // 0xcf // 207
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w8 = [x28 + 0x24]        // 0xe3 // 227
         x0 = [x28 + 0x28]        // 0xe3 // 227 // int64_t arg1
         if (x23 == x8)
         csel x2,x23,x8, lo       // int64_t arg3
         0x800b404 ()             // 0x800b404(-1, 0x0, 0x0, 0x0)
         if w0 jmp 0x800b3cc      // likely

    loc_0x0800b40c: // orphan
         if !x25 jmp 0x800b3c4    // likely

    loc_0x0800b410: // orphan
         if (x25 == x28)
         b.ne 0x800b3cc           // unlikely

    loc_0x0800b418: // orphan
         (x8, 2) = 3
         if (x26 == x8)
         csel x26,x26,x8, lo
         if (x27 == x9)
         csel x27,x27,x9, hi
         jmp 0x800b3cc

    loc_0x0800b430: // orphan
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x26 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800b43c: // orphan
         

    loc_0x0800b440: // orphan
         // CODE XREF from fcn.0800b4e0 @ 0x800b4e4
         ldur x0,[x29,-8]         // int64_t arg1 // "h"
         0x800b444 ()             // 0x800b444(0x68, 0x0, 0x0, 0x0)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800b44c ()             // 0x800b44c(0x0, 0x0, 0x0, 0x0)
         if !x25 jmp 0x800b46c    // likely

    loc_0x0800b454: // orphan
         x8 = [var_sp_8h]         // 0x4 // 4
         w0 = 0x1
         [x8] = x26
         x8 = [var_10h]           // 0x4 // 4
         [x8] = x27
         jmp 0x800b470

    loc_0x0800b46c: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x800b35c
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800b470: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x800b468
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_80h
         hint 0x1d
         

    loc_0x0800b498: // orphan
         w1 = 0x3
         0x800b49c ()             // 0x800b49c(0x0, 0x3, 0x0, 0x0)
         if x24 jmp 0x800b390     // unlikely

    loc_0x0800b4a4: // orphan
         jmp 0x800b320

}

/* ===== 0x0800b4e8 ===== */
int sym.get_module_base (int esi, int edx) {
    loc_0x800b4e8:
        hint 0x19
        sp = sp - 0x30
        [x18] + 8 = x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x3 = var_10h
        x8 = [x8 + 0x5e0] // 0xcf // 207
        x4 = var_8h
        [x29 = x8
        [sp, 8] = (xzr,2)
        0x800b514 ()  // 0x800b514(0x0, 0x0, 0x0, 0x177fe0)
        x8 = [var_10h] // 0x4 // 4
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = [x9 + 0x5e0] // 0xd0 // 208
        if (w0 == 0)
        ldur x10,[x29,-8]
        csel x0,xzr,x8, eq
        if (x9 == x10)
        b.ne 0x800b54c // unlikely
            
    loc_0x800b54c:
        0x800b54c ()  // sym.is_pid_alive // 0x800b54c(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x800b550:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800b560 ()  // 0x800b560(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800b580 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800b550 ===== */
int sym.is_pid_alive (int esi, int edx) {
    loc_0x800b550:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800b560 ()  // 0x800b560(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800b580 // likely
            
    loc_0x800b580:
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800b58c
         // } else {
    loc_0x800b568:
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800b56c ()  // 0x800b56c(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800b580 // likely
        }
        return eax;
    loc_0x800b574:
        x8 = [x0 + 0x640] // 0xc7 // 199
        if (x8 == 0)
        cset w0,ne
}

/* ===== 0x0800b590 ===== */
int sym.get_cmdline_ex (int esi, int edx) {
    loc_0x800b590:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x60]! = (x29,2)
        [var_10h] = x27
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        w22 = w2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x800b5c0 ()  // 0x800b5c0(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800b68c // likely
            
    loc_0x800b68c:
        w25 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800b6a8
         // do {
    loc_0x800b6a8:
        // CODE XREF from sym.get_cmdline_ex @ 0x800b690
        w0 = w25      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x27 = [var_10h] // 0x4 // 4
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800b6cc
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800b5c8
    loc_0x800b5d4:
        x24 = x19 + 0x10c
        x0 = x24      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800b5dc ()  // 0x800b5dc(0x10c, 0x0, 0x0, 0x0)
        (x23, 2) = 3
        x0 = x24      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x25 = [x19 + 0x148] // 0xda // 218
        w26 = [x19 + 0x150] // 0xda // 218
        0x800b5f0 ()  // 0x800b5f0(0x10c, 0x0, 0x0, 0x0)
        w26 = w26 - w25
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        if (w26 == w22)
        x1 = x25      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        csel w3,w22,w26, hi
        x2 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        w4 = 0x10
        0x800b610 ()  // 0x800b610(0x0, -1, 0x0, 0x0)
        w24 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w0 - 1
        b.lt 0x800b69c // unlikely
            
    loc_0x800b69c:
        w25 = w24     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800b6a0:
        // CODE XREFS from sym.get_cmdline_ex @ 0x800b688, 0x800b698
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800b6a4 ()  // 0x800b6a4(0x0, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800b620
    loc_0x800b628:
        w8 = (byte) [x20 + w8,uxtw] // 0xb0000000db // 755914244315
        w25 = w24     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !w8 jmp 0x800b6a0 // likely
    loc_0x800b634:
        w26 = w24     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x26      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800b640 ()  // 0x800b640(0x0, 0x0, 0x0, 0x0)
        x25 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w24 == w25)
        b.hi 0x800b6a0 // unlikely
    loc_0x800b650:
        w8 = w27 - w23
        w9 = w22 - w24
        if (w9 == w8)
        x2 = x20 + x26 // int64_t arg3
        csel w3,w9,w8, lo
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = x23      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w4 = 0x10
        0x800b670 ()  // 0x800b670(0x0, 0x0, 0x0, 0x0)
        w8 = w0 + w24
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x1 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800b680 ()  // 0x800b680(0x0, 0x0, 0x0, 0x0)
        w25 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800b6a0
    loc_0x0800b694: // orphan
             w25 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             jmp 0x800b6a0

}

/* ===== 0x0800b6d0 ===== */
int sym.find_process_by_name (int esi, int edx) {
    loc_0x800b6d0:
        hint 0x19
        sp = sp - 0x160
        [x18] + 8 = x30
        [sp, 0x110] = (x29,2)
        x29 = var_110h
        [sp, 0x120] = (x28,2)
        [sp, 0x130] = (x24,2)
        [sp, 0x140] = (x22,2)
        [sp, 0x150] = (x20,2)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x5e0] // 0xcf // 207
        [x29 = x8
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
        [sp, 0x38] = (xzr,2)
        [sp, 0x28] = (xzr,2)
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        0x800b744 ()  // 0x800b744(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800b84c // likely
            
    loc_0x800b84c:
        x0 = 0x800b000
        x0 = x0 + 0   // int64_t arg1
        0x800b854 ()  // " " // 0x800b854(0x800b000, 0x0, 0x0, 0x0)
        w0 = ~0x1
        jmp 0x800b814
         // do {
    loc_0x800b814:
        // CODE XREFS from sym.find_process_by_name @ 0x800b808, 0x800b85c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x5e0] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800b860 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800b74c
    loc_0x800b770:
        x25 = var_sp_8h
        jmp 0x800b78c
         // do {
    loc_0x800b78c:
        // CODE XREF from sym.find_process_by_name @ 0x800b774
        x8 = [x23 + 0x50] // 0xde // 222
        if !x8 jmp 0x800b778 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800b794:
        x1 = var_sp_8h // int64_t arg_160h
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w2 = 0x100
        [var_sp_8h] = (byte) wzr
        0x800b7a4 ()  // 0x800b7a4(0x0, 0x178008, 0x100, 0x0)
        tbnz w0,0x1f,0x800b7d8 // unlikely
            
    loc_0x800b7d8:
        x22 = x23 + 0x2d8
         // do {
    loc_0x800b7dc:
        // CODE XREF from sym.find_process_by_name @ 0x800b7d4
        x0 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800b7e0 ()  // 0x800b7e0(0x0, 0x0, 0x0, 0x0)
        if (x0 == x20)
        b.ne 0x800b778 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800b7ac
    loc_0x800b7bc:
        [x0] = (byte) wzr
         // do {
    loc_0x800b7c0:
        x0 = var_sp_8h // int64_t arg1
        w1 = 0x2f     // '/'
        0x800b7c8 ()  // 0x800b7c8(0x178008, 0x2f, 0x0, 0x0)
        if (x0 == 0)
        csinc x22,x25,x0, eq
        jmp 0x800b7dc
         // } while (?);
        }
        return eax;
    loc_0x0800b778: // orphan
             x8 = x21 + 0x4d0
             ldar x23,[x8]
             x21 = x23 - 0x4d0
             if (x21 == x24)
             b.eq 0x800b80c           // unlikely

    loc_0x0800b7ec: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_160h
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800b7f8 ()             // 0x800b7f8(0x0, 0x0, 0x0, 0x0)
         if w0 jmp 0x800b778      // unlikely

    loc_0x0800b800: // orphan
         0x800b800 ()             // 0x800b800(0x0, 0x0, 0x0, 0x0)
         w0 = [x23 + 0x108]       // 0xde // 222
         jmp 0x800b814

    loc_0x0800b80c: // orphan
         0x800b80c ()             // 0x800b80c(0x0, 0x0, 0x0, 0x0)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800b828: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         sp = arg_160h
         hint 0x1d
         

    loc_0x0800b860: // orphan
         0x800b860 ()             // 0x800b860(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08011278 ===== */
int sym.hook_write_range (int esi, int edx) {
    loc_0x8011278:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x40]! = (x29,2)
        [sp + 0x10] = x23
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        w20 = w2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w2 == 1)  // arg3
        b.lt 0x80112d4 // likely
            
    loc_0x80112d4:
        x8 = 0x8011000
        x1 = x19 + w20,sxtw
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8]     // 0xcf // 207
        blr x8        // 0xaa1603e054ffd903(0x0, 0x0, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x80112ec:
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x08011304
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080112b0: // orphan
             x8 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x9 = [x23]               // 0xde // 222
             x0 = x19 + x8
             w1 = [x21 + x8]          // 0xcf000000dc // 889058230492
             blr x9                   // pstate(0x0, 0x0, 0x0, 0x0)
             if w0 jmp 0x80112ec      // unlikely

    loc_0x080112c8: // orphan
         w22 = w22 + 4
         if (w22 == w20)
         b.lt 0x80112b0           // unlikely

}

/* ===== 0x0800f5c8 ===== */
int sym.hide_task_is_hidden (int esi, int edx) {
    loc_0x800f5c8:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w0 == 1)  // arg1
        b.lt 0x800f694 // likely
            
    loc_0x800f694:
        // CODE XREF from sym.hide_task_is_hidden @ 0x800f5e0
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x800f698:
        // CODE XREF from sym.hide_task_is_hidden @ 0x800f690
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800f6ac
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800f5e4
    loc_0x800f608:
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.eq 0x800f680 // unlikely
            
    loc_0x800f680:
        // XREFS: CODE 0x0800f604  CODE 0x0800f618  CODE 0x0800f62c
        // XREFS: CODE 0x0800f640  CODE 0x0800f654  CODE 0x0800f668
        w19 = 0x1
         // do {
    loc_0x800f684:
        // CODE XREF from sym.hide_task_is_hidden @ 0x800f6c4
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f68c ()  // 0x800f68c(0x800f000, 0x0, 0x0, 0x0)
        jmp 0x800f698
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800f61c
    loc_0x800f630:
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.eq 0x800f680 // unlikely
    loc_0x800f644:
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.eq 0x800f680 // unlikely
    loc_0x800f658:
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.eq 0x800f680 // unlikely
    loc_0x800f66c:
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800f6b0 // likely
            
    loc_0x800f6b0:
        // CODE XREF from sym.hide_task_is_hidden @ 0x800f67c
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        cset w19,eq
        jmp 0x800f684
}

/* ===== 0x0800ee78 ===== */
int sym.hide_task_install (int esi, int edx) {
    loc_0x800ee78:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [sp + 0x10] = x21
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        if (w0 == 1)  // arg1
        b.lt 0x800f008 // likely
            
    loc_0x800f008:
        // CODE XREF from sym.hide_task_install @ 0x800ee94
        w20 = ~0x15
         // do {
    loc_0x800f00c:
        // CODE XREF from sym.hide_task_install @ 0x800f004
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = [var_10h_2] // 0x4 // 4
        (x20, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800f024
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800ee98
    loc_0x800eed4:
        x8 = 0x800e000
        x8 = x8 + 0
        ldar w9,[x8]
        if (w9 == w19)
        b.eq 0x800eff4 // unlikely
            
    loc_0x800eff4:
        // XREFS: CODE 0x0800eee4  CODE 0x0800eef8  CODE 0x0800ef1c
        // XREFS: CODE 0x0800ef60  CODE 0x0800ef84  CODE 0x0800efa8
        // XREFS: CODE 0x0800efcc
        w20 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800eff8:
        // CODE XREFS from sym.hide_task_install @ 0x800eed0, 0x800f044, 0x800f04c
        x0 = 0x800e000
        x0 = x0 + 0   // int64_t arg1
        // XREFS(257)
        0x800f000 ()  // 0x800f000(0x800e000, 0x0, 0x0, 0x0)
        jmp 0x800f00c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800eee8
    loc_0x800eefc:
        if (w9 == 0)
        x11 = 0x800e000
        cset w12,ne
        if (w10 == 0)
        cset w10,eq
        x11 = x11 + 0
        ldar w11,[x11]
        if (w11 == w19)
        b.eq 0x800eff4 // unlikely
    loc_0x800ef20:
        if (w9 == 0)
        w9 = w10 & w12
        cset w12,ne
        csetm w10,ne
        if (w9 == 0)
        csinc w13,w10,wzr, eq
        if (w11 == 0)
        cset w11,eq
        x10 = 0x800e000
        bic w9,w11,w9 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = x10 + 0
        if ((w9 & w12) == 0)
        w9 = 0x2
        csel w9,w9,w13, ne
        ldar w10,[x10]
        if (w10 == w19)
        b.eq 0x800eff4 // unlikely
    loc_0x800ef64:
        if (w9 == 0)
        x11 = 0x800e000
        ccmp w10,0,0, lt
        x11 = x11 + 0
        ldar w10,[x11]
        w11 = 0x3
        csel w9,w11,w9, eq
        if (w10 == w19)
        b.eq 0x800eff4 // unlikely
    loc_0x800ef88:
        if (w9 == 0)
        x11 = 0x800e000
        ccmp w10,0,0, lt
        x11 = x11 + 0
        ldar w10,[x11]
        w11 = 0x4
        csel w9,w11,w9, eq
        if (w10 == w19)
        b.eq 0x800eff4 // unlikely
    loc_0x800efac:
        if (w9 == 0)
        x11 = 0x800e000
        ccmp w10,0,0, lt
        x11 = x11 + 0
        ldar w10,[x11]
        w11 = 0x5
        csel w9,w11,w9, eq
        if (w10 == w19)
        b.eq 0x800eff4 // unlikely
    loc_0x800efd0:
        if (w9 == 0)
        x11 = 0x800e000
        ccmp w10,0,0, lt
        x11 = x11 + 0
        ldar w10,[x11]
        w11 = 0x6
        csel w9,w11,w9, eq
        if (w10 == w19)
        b.ne 0x800f028 // likely
            
    loc_0x800f028:
        // CODE XREF from sym.hide_task_install @ 0x800eff0
        if (w9 == 0)
        ccmp w10,0,0, lt
        w10 = 0x7
        csel w9,w10,w9, eq
        // CODE XREF from sym.hide_kgsl_cleanup @ 0x800ff3c
        tbnz w9,0x1f,0x800f048 // unlikely
            
    loc_0x800f048:
        // CODE XREF from sym.hide_task_install @ 0x800f038
        w20 = ~0x1b
        jmp 0x800eff8
    loc_0x0800f03c: // orphan
             w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             [x8 + w9,uxtw 2] = w19
             jmp 0x800eff8

}

/* ===== 0x0800f774 ===== */
int sym.hide_kgsl_install (int esi, int edx) {
    loc_0x800f774:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w0 == 1)  // arg1
        b.ge 0x800f7ac // unlikely
            
    loc_0x800f7ac:
        // CODE XREF from sym.hide_kgsl_install @ 0x800f78c
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f7b8 ()  // 0x800f7b8(0x800f000, 0x0, 0x0, 0x0)
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f7c4 ()  // 0x800f7c4(0x800f000, 0x0, 0x0, 0x0)
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f7d0 ()  // 0x800f7d0(0x800f000, 0x0, 0x0, 0x0)
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if w0 jmp 0x800f960 // likely
            
    loc_0x800f960:
        // CODE XREF from sym.hide_kgsl_install @ 0x800f7d8
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f968 ()  // 0x800f968(0x800f000, 0x0, 0x0, 0x0)
        x0 = 0x800f000
        w1 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x0 + 0   // int64_t arg1
        0x800f978 ()  // 0x800f978(0x800f000, 0x0, 0x0, 0x0)
         // do {
    loc_0x800f97c:
        // CODE XREFS from sym.hide_kgsl_install @ 0x800f938, 0x800f9a4
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f984 ()  // 0x800f984(0x800f000, 0x0, 0x0, 0x0)
        jmp 0x800f794
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800f794: // orphan
             // CODE XREF from sym.hide_kgsl_install @ 0x800f988
             w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             (x20, 2) = 3
             (x29, 2) = 3
             x30 = [x18 - 8]!         // 0xd9 // 217
             hint 0x1d
             

    loc_0x0800f7ec: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f7f4 ()             // "`\n" // 0x800f7f4(0x800f000, 0x0, 0x0, 0x0)
         if w0 jmp 0x800f944      // likely

    loc_0x0800f7fc: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f804 ()             // 0x800f804(0x800f000, 0x0, 0x0, 0x0)
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f810 ()             // 0x800f810(0x800f000, 0x0, 0x0, 0x0)
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w9,[x8]
         if (w9 == w19)
         b.eq 0x800f934           // unlikely

    loc_0x0800f828: // orphan
         x10 = 0x800f000
         x10 = x10 + 0
         ldar w10,[x10]
         if (w10 == w19)
         b.eq 0x800f934           // unlikely

    loc_0x0800f83c: // orphan
         if (w9 == 0)
         x11 = 0x800f000
         cset w12,ne
         if (w10 == 0)
         cset w10,eq
         x11 = x11 + 0
         ldar w11,[x11]
         if (w11 == w19)
         b.eq 0x800f934           // unlikely

    loc_0x0800f860: // orphan
         if (w9 == 0)
         w9 = w10 & w12
         cset w12,ne
         csetm w10,ne
         if (w9 == 0)
         csinc w13,w10,wzr, eq
         if (w11 == 0)
         cset w11,eq
         x10 = 0x800f000
         bic w9,w11,w9            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 + 0
         if ((w9 & w12) == 0)
         w9 = 0x2
         csel w9,w9,w13, ne
         ldar w10,[x10]
         if (w10 == w19)
         b.eq 0x800f934           // unlikely

    loc_0x0800f8a4: // orphan
         if (w9 == 0)
         x11 = 0x800f000
         ccmp w10,0,0, lt
         x11 = x11 + 0
         ldar w10,[x11]
         w11 = 0x3
         csel w9,w11,w9, eq
         if (w10 == w19)
         b.eq 0x800f934           // unlikely

    loc_0x0800f8c8: // orphan
         if (w9 == 0)
         x11 = 0x800f000
         ccmp w10,0,0, lt
         x11 = x11 + 0
         ldar w10,[x11]
         w11 = 0x4
         csel w9,w11,w9, eq
         if (w10 == w19)
         b.eq 0x800f934           // unlikely

    loc_0x0800f8ec: // orphan
         if (w9 == 0)
         x11 = 0x800f000
         ccmp w10,0,0, lt
         x11 = x11 + 0
         ldar w10,[x11]
         w11 = 0x5
         csel w9,w11,w9, eq
         if (w10 == w19)
         b.eq 0x800f934           // unlikely

    loc_0x0800f910: // orphan
         if (w9 == 0)
         x11 = 0x800f000
         ccmp w10,0,0, lt
         x11 = x11 + 0
         ldar w10,[x11]
         w11 = 0x6
         csel w9,w11,w9, eq
         if (w10 == w19)
         b.ne 0x800f98c           // likely

    loc_0x0800f934: // orphan
         // XREFS: CODE 0x0800f824  CODE 0x0800f838  CODE 0x0800f85c  
         // XREFS: CODE 0x0800f8a0  CODE 0x0800f8c4  CODE 0x0800f8e8  
         // XREFS: CODE 0x0800f90c  CODE 0x0800f9bc  
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800f97c

    loc_0x0800f93c: // orphan
         // CODE XREF from sym.hide_kgsl_install @ 0x800f7e8
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800f954

    loc_0x0800f944: // orphan
         // CODE XREF from sym.hide_kgsl_install @ 0x800f7f8
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f950 ()             // 0x800f950(0x800f000, 0x0, 0x0, 0x0)

    loc_0x0800f954: // orphan
         // CODE XREF from sym.hide_kgsl_install @ 0x800f940
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f95c ()             // 0x800f95c(0x800f000, 0x0, 0x0, 0x0)

    loc_0x0800f98c: // orphan
         // CODE XREF from sym.hide_kgsl_install @ 0x800f930
         if (w9 == 0)
         ccmp w10,0,0, lt
         w10 = 0x7
         csel w9,w10,w9, eq
         tbz w9,0x1f,0x800f9a8    // likely

    loc_0x0800f9a0: // orphan
         w20 = ~0x1b
         jmp 0x800f97c

    loc_0x0800f9a8: // orphan
         // CODE XREF from sym.hide_kgsl_install @ 0x800f99c
         x0 = 0x800f000
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x0 + 0              // int64_t arg1
         [x8 + w9,uxtw 2] = w19
         0x800f9b8 ()             // 0x800f9b8(0x800f000, 0x0, 0x0, 0x0)
         jmp 0x800f934

}

/* ===== 0x0800f3c8 ===== */
int sym.hide_task_remove (int esi, int edx) {
    loc_0x800f3c8:
        bti c
        if (w0 == 1)  // arg1
        b.lt 0x800f584 // likely
            
    loc_0x800f584:
        // CODE XREF from sym.hide_task_remove @ 0x800f3d0
        0x0800f584
         // } else {
    loc_0x800f3d4:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f3f4 ()  // 0x800f3f4(0x800f000, 0x0, 0x0, 0x0)
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800f414 // likely
        }
        return eax;
    loc_0x800f40c:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800f414:
        // CODE XREF from sym.hide_task_remove @ 0x800f408
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800f430 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800f428:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800f430:
        // CODE XREF from sym.hide_task_remove @ 0x800f424
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800f44c // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800f444:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800f44c:
        // CODE XREF from sym.hide_task_remove @ 0x800f440
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800f468 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800f460:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800f468:
        // CODE XREF from sym.hide_task_remove @ 0x800f45c
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800f484 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800f47c:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800f484:
        // CODE XREF from sym.hide_task_remove @ 0x800f478
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800f4a0 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800f498:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800f4a0:
        // CODE XREF from sym.hide_task_remove @ 0x800f494
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800f4bc // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800f4b4:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800f4bc:
        // CODE XREF from sym.hide_task_remove @ 0x800f4b0
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800f4d8 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800f4d0:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800f4d8:
        // CODE XREF from sym.hide_task_remove @ 0x800f4cc
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if w8 jmp 0x800f568 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800f4e8:
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if w8 jmp 0x800f568 // unlikely
            
    loc_0x800f568:
        // XREFS: CODE 0x0800f4e4  CODE 0x0800f4f4  CODE 0x0800f504
        // XREFS: CODE 0x0800f514  CODE 0x0800f524  CODE 0x0800f534
        // XREFS: CODE 0x0800f544  CODE 0x0800f554
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f570 ()  // 0x800f570(0x800f000, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
    loc_0x0800f4f8: // orphan
             x8 = 0x800f000
             x8 = x8 + 0
             ldar w8,[x8]
             if w8 jmp 0x800f568      // unlikely

    loc_0x0800f508: // orphan
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w8,[x8]
         if w8 jmp 0x800f568      // unlikely

    loc_0x0800f518: // orphan
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w8,[x8]
         if w8 jmp 0x800f568      // unlikely

    loc_0x0800f528: // orphan
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w8,[x8]
         if w8 jmp 0x800f568      // unlikely

    loc_0x0800f538: // orphan
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w8,[x8]
         if w8 jmp 0x800f568      // unlikely

    loc_0x0800f548: // orphan
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w8,[x8]
         if w8 jmp 0x800f568      // unlikely

    loc_0x0800f558: // orphan
         x0 = 0x800f000
         w1 = 0x1
         x0 = x0 + 0              // int64_t arg1
         0x800f564 ()             // 0x800f564(0x800f000, 0x1, 0x0, 0x0)

}

/* ===== 0x0800fccc ===== */
int sym.hide_kgsl_remove (int esi, int edx) {
    loc_0x800fccc:
        bti c
        if (w0 == 1)  // arg1
        b.lt 0x800fe88 // likely
            
    loc_0x800fe88:
        // CODE XREF from sym.hide_kgsl_remove @ 0x800fcd4
        0x0800fe88
         // } else {
    loc_0x800fcd8:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800fcf8 ()  // 0x800fcf8(0x800f000, 0x0, 0x0, 0x0)
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800fd18 // unlikely
        }
        return eax;
    loc_0x800fd10:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800fd18:
        // CODE XREF from sym.hide_kgsl_remove @ 0x800fd0c
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800fd34 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800fd2c:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800fd34:
        // CODE XREF from sym.hide_kgsl_remove @ 0x800fd28
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800fd50 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800fd48:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800fd50:
        // CODE XREF from sym.hide_kgsl_remove @ 0x800fd44
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800fd6c // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800fd64:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800fd6c:
        // CODE XREF from sym.hide_kgsl_remove @ 0x800fd60
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800fd88 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800fd80:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800fd88:
        // CODE XREF from sym.hide_kgsl_remove @ 0x800fd7c
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800fda4 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800fd9c:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800fda4:
        // CODE XREF from sym.hide_kgsl_remove @ 0x800fd98
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800fdc0 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800fdb8:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800fdc0:
        // CODE XREF from sym.hide_kgsl_remove @ 0x800fdb4
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if (w8 == w19)
        b.ne 0x800fddc // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800fdd4:
        x8 = 0x800f000
        [x8] = wzr
         // do {
    loc_0x800fddc:
        // CODE XREF from sym.hide_kgsl_remove @ 0x800fdd0
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if w8 jmp 0x800fe6c // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800fdec:
        x8 = 0x800f000
        x8 = x8 + 0
        ldar w8,[x8]
        if w8 jmp 0x800fe6c // unlikely
            
    loc_0x800fe6c:
        // CODE XREFS from sym.hide_kgsl_remove @ 0x800fde8, 0x800fdf8, 0x800fe08
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800fe74 ()  // 0x800fe74(0x800f000, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
    loc_0x0800fdfc: // orphan
             x8 = 0x800f000
             x8 = x8 + 0
             ldar w8,[x8]
             if w8 jmp 0x800fe6c      // unlikely

    loc_0x0800fe0c: // orphan
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w8,[x8]
         if w8 jmp 0x800fe6c      // unlikely

    loc_0x0800fe1c: // orphan
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w8,[x8]
         if w8 jmp 0x800fe6c      // unlikely

    loc_0x0800fe2c: // orphan
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w8,[x8]
         if w8 jmp 0x800fe6c      // unlikely

    loc_0x0800fe3c: // orphan
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w8,[x8]
         if w8 jmp 0x800fe6c      // unlikely

    loc_0x0800fe4c: // orphan
         x8 = 0x800f000
         x8 = x8 + 0
         ldar w8,[x8]
         if w8 jmp 0x800fe6c      // unlikely

    loc_0x0800fe5c: // orphan
         x0 = 0x800f000
         w1 = 0x3
         x0 = x0 + 0              // int64_t arg1
         0x800fe68 ()             // 0x800fe68(0x800f000, 0x3, 0x0, 0x0)

}

/* ===== 0x0800fecc ===== */
int sym.hide_kgsl_cleanup (int esi, int edx) {
    loc_0x800fecc:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        x19 = 0x800f000
        x19 = x19 + 0
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800fef0 ()  // 0x800fef0(0x800f000, 0x0, 0x0, 0x0)
        x20 = 0x800f000
        x8 = 0x800f000
        x20 = x20 + 0
        x8 = x8 + 0
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x8] = wzr
        [x8 + 4] = wzr
        [x8 + 8] = wzr
        [x8 + 0xc] = wzr
        [x8 + 0x10] = wzr
        [x8 + 0x14] = wzr
        [x8 + 0x18] = wzr
        [x8 + 0x1c] = wzr
        0x800ff28 ()  // 0x800ff28(0x800f000, 0x0, 0x0, 0x0)
        x21 = 0x800f000
        x21 = x21 + 0
        x0 = x21 + 0x70 // 0x800f070 // "?#\x03\xd5\xffC\x01\xd1^\x86" // sym.filldir64_hook_work
        0x800ff38 ()  // 0x800ff38(0x800f070, 0x0, 0x0, 0x0)
        x0 = x21 + 0x38
        0x800ff40 ()  // 0x800ff40(0x800f038, 0x0, 0x0, 0x0)
        x0 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800ff48 ()  // 0x800ff48(0x800f000, 0x0, 0x0, 0x0)
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800ff50 ()  // 0x800ff50(0x800f000, 0x0, 0x0, 0x0)
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800ff58 ()  // 0x800ff58(0x800f000, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // sp // sp
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800ff70
         // (break)
}

/* ===== 0x0800f6e8 ===== */
int sym.hide_task_cleanup (int esi, int edx) {
    loc_0x800f6e8:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x800f000
        x19 = x19 + 0
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800f708 ()  // 0x800f708(0x800f000, 0x0, 0x0, 0x0)
        x20 = 0x800f000
        x8 = 0x800f000
        x20 = x20 + 0
        x8 = x8 + 0
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x8] = wzr
        [x8 + 4] = wzr
        [x8 + 8] = wzr
        [x8 + 0xc] = wzr
        [x8 + 0x10] = wzr
        [x8 + 0x14] = wzr
        [x8 + 0x18] = wzr
        [x8 + 0x1c] = wzr
        0x800f740 ()  // 0x800f740(0x800f000, 0x0, 0x0, 0x0)
        x0 = 0x800f000
        x0 = x0 + 0
        0x800f74c ()  // 0x800f74c(0x800f000, 0x0, 0x0, 0x0)
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800f754 ()  // 0x800f754(0x800f000, 0x0, 0x0, 0x0)
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800f75c ()  // 0x800f75c(0x800f000, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        (x29, 2) = 3  // sp // sp
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800f770
         // (break)
}

/* ===== 0x0800e0f4 ===== */
int sym.get_main_thread_elf0 (int esi, int edx) {
    loc_0x800e0f4:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800e108 ()  // 0x800e108(0x0, 0x0, 0x0, 0x0)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x800e204 // likely
            
    loc_0x800e204:
        // CODE XREFS from sym.get_main_thread_elf0 @ 0x800e110, 0x800e168, 0x800e1c4, 0x800e1d0
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800e218
         // } else {
    loc_0x800e114:
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800e11c ()  // 0x800e11c(0x0, 0x0, 0x0, 0x0)
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800e128 ()  // 0x800e128(0x0, 0x0, 0x0, 0x0)
        if !x19 jmp 0x800e200 // likely
        }
        return eax;
    loc_0x800e130:
        x8 = [x19 + 0x618] // 0xda // 218
        if !x8 jmp 0x800e16c // unlikely
            
    loc_0x800e16c:
        // CODE XREF from sym.get_main_thread_elf0 @ 0x800e134
        x0 = x19 + 0x38
        jmp 0x800e1d4
         // do {
    loc_0x800e1d4:
        // CODE XREF from sym.get_main_thread_elf0 @ 0x800e170
        // CODE XREF from sym.get_main_thread_elf0 @ +0x80
        bti j
        w9 = 0x1
        prfm pstl1strm,[x0]
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800e15c: // orphan
             // CODE XREF from sym.get_main_thread_elf0 @ 0x800e1bc
             dmb ishld
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800e164 ()             // "'" // 0x800e164(0x0, 0x0, 0x0, 0x0)
             jmp 0x800e204

    loc_0x0800e18c: // orphan
         // CODE XREF from sym.get_main_thread_elf0 @ 0x800e1f4
         dmb ishld
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800e194 ()             // 0x800e194(0x0, 0x0, 0x0, 0x0)
         jmp 0x800e200

    loc_0x0800e19c: // orphan
         // CODE XREF from sym.get_main_thread_elf0 @ 0x800e140
         // CODE XREF from sym.get_main_thread_elf0 @ +0x50
         bti j
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x0800e1a8: // orphan
         // CODE XREF from sym.get_main_thread_elf0 @ 0x800e1b4
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800e1a8     // unlikely

    loc_0x0800e1b8: // orphan
         if (w8 == 1)
         b.eq 0x800e15c           // unlikely

    loc_0x0800e1c0: // orphan
         // CODE XREF from sym.get_main_thread_elf0 @ +0x64
         if (w8 == 0)
         jmp ifgt 0x800e204       // unlikely

    loc_0x0800e1c8: // orphan
         w1 = 0x3
         0x800e1cc ()             // "\r" // 0x800e1cc(0x0, 0x3, 0x0, 0x0)
         jmp 0x800e204

    loc_0x0800e1e0: // orphan
         // CODE XREF from sym.get_main_thread_elf0 @ 0x800e1ec
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800e1e0     // unlikely

    loc_0x0800e1f0: // orphan
         if (w8 == 1)
         b.eq 0x800e18c           // unlikely

    loc_0x0800e1f8: // orphan
         // CODE XREF from sym.get_main_thread_elf0 @ +0x94
         if (w8 == 0)
         jmp ifle 0x800e21c       // likely

    loc_0x0800e200: // orphan
         // CODE XREFS from sym.get_main_thread_elf0 @ 0x800e12c, 0x800e198, 0x800e224
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e21c: // orphan
         // CODE XREF from sym.get_main_thread_elf0 @ 0x800e1fc
         w1 = 0x3
         0x800e220 ()             // 0x800e220(0x0, 0x3, 0x0, 0x0)
         jmp 0x800e200

}

/* ===== 0x0800e228 ===== */
int sym.get_thread_tpidr_el0 (int esi, int edx) {
    loc_0x800e228:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800e23c ()  // 0x800e23c(0x0, 0x0, 0x0, 0x0)
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x800e2cc // likely
            
    loc_0x800e2cc:
        // CODE XREFS from sym.get_thread_tpidr_el0 @ 0x800e244, 0x800e294, 0x800e29c, 0x800e2ec
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800e2e0
         // } else {
    loc_0x800e248:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800e250 ()  // 0x800e250(0x0, 0x0, 0x0, 0x0)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800e25c ()  // 0x800e25c(0x0, 0x0, 0x0, 0x0)
        if !x20 jmp 0x800e298 // likely
        }
        return eax;
    loc_0x800e264:
        x19 = [x20 + 0xe30] // 0xdb // 219
        x0 = x20 + 0x38
        jmp 0x800e2a0
         // do {
    loc_0x800e2a0:
        // CODE XREF from sym.get_thread_tpidr_el0 @ 0x800e26c
        // CODE XREF from sym.get_thread_tpidr_el0 @ +0x48
        bti j
        w9 = 0x1
        prfm pstl1strm,[x0]
         // } while (?);
        }
        return eax;
    loc_0x0800e288: // orphan
             // CODE XREF from sym.get_thread_tpidr_el0 @ 0x800e2c0
             dmb ishld
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800e290 ()             // 0x800e290(0x0, 0x0, 0x0, 0x0)
             jmp 0x800e2cc

    loc_0x0800e298: // orphan
         // CODE XREF from sym.get_thread_tpidr_el0 @ 0x800e260
         x19 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800e2cc

    loc_0x0800e2ac: // orphan
         // CODE XREF from sym.get_thread_tpidr_el0 @ 0x800e2b8
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800e2ac     // unlikely

    loc_0x0800e2bc: // orphan
         if (w8 == 1)
         b.eq 0x800e288           // unlikely

    loc_0x0800e2c4: // orphan
         // CODE XREF from sym.get_thread_tpidr_el0 @ +0x5c
         if (w8 == 0)
         jmp ifle 0x800e2e4       // likely

    loc_0x0800e2e4: // orphan
         // CODE XREF from sym.get_thread_tpidr_el0 @ 0x800e2c8
         w1 = 0x3
         0x800e2e8 ()             // 0x800e2e8(0x0, 0x3, 0x0, 0x0)
         jmp 0x800e2cc

}

/* ===== 0x0800e2f0 ===== */
int sym.get_thread_pacga_key (int esi, int edx) {
    loc_0x800e2f0:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x20 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x21 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x22 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x1] = xzr    // arg2
        [x2] = xzr    // arg3
        [x3] = wzr    // arg4
        0x800e324 ()  // 0x800e324(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800e36c // likely
            
    loc_0x800e36c:
        // CODE XREFS from sym.get_thread_pacga_key @ 0x800e328, 0x800e344
        w0 = ~0x2
        jmp 0x800e418
         // do {
    loc_0x800e418:
        // CODE XREF from sym.get_thread_pacga_key @ 0x800e370
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800e430
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800e32c
    loc_0x800e348:
        x8 = [x19 + 0x11d0] // 0xda // 218
        [x22] = x8
        x8 = [x19 + 0x11d8] // 0xda // 218
        [x21] = x8
        mrs x8,s3_0_c0_c6_2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf00) == 0)
        b.eq 0x800e374 // unlikely
            
    loc_0x800e374:
        // CODE XREF from sym.get_thread_pacga_key @ 0x800e360
        mrs x8,id_aa64isar1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf000000) == 0)
        b.eq 0x800e3b8 // unlikely
            
    loc_0x800e3b8:
        // CODE XREF from sym.get_thread_pacga_key @ 0x800e37c
        mrs x8,midr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w8,w8,4, 0xc // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w8 - 0xd4d
        if (w8 == 0x3a)
        b.hi 0x800e380 // likely
    loc_0x800e3cc:
        w9 = 0x1
        x8 = x9 << x8
        x9 = 0x3
        x9 = 0x538
        if ((x8 & x9) == 0)
        b.ne 0x800e364 // likely
    loc_0x800e3e4:
        jmp 0x800e380
    loc_0x0800e364: // orphan
             // CODE XREF from sym.get_thread_pacga_key @ 0x800e3e0
             w8 = 0x3
             jmp 0x800e384

    loc_0x0800e380: // orphan
         // CODE XREFS from sym.get_thread_pacga_key @ 0x800e3c8, 0x800e3e4
         w8 = 0x5

    loc_0x0800e384: // orphan
         // CODE XREF from sym.get_thread_pacga_key @ 0x800e368
         x0 = x19 + 0x38
         [x20] = w8
         jmp 0x800e3e8

    loc_0x0800e3a8: // orphan
         // CODE XREF from sym.get_thread_pacga_key @ 0x800e408
         dmb ishld
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800e3b0 ()             // 0x800e3b0(0x0, 0x0, 0x0, 0x0)
         jmp 0x800e414

    loc_0x0800e3e8: // orphan
         // CODE XREF from sym.get_thread_pacga_key @ 0x800e38c
         // CODE XREF from sym.get_thread_pacga_key @ +0xa0
         bti j
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x0800e3f4: // orphan
         // CODE XREF from sym.get_thread_pacga_key @ 0x800e400
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800e3f4     // unlikely

    loc_0x0800e404: // orphan
         if (w8 == 1)
         b.eq 0x800e3a8           // unlikely

    loc_0x0800e40c: // orphan
         // CODE XREF from sym.get_thread_pacga_key @ +0xb4
         if (w8 == 0)
         jmp ifle 0x800e434       // likely

    loc_0x0800e414: // orphan
         // CODE XREFS from sym.get_thread_pacga_key @ 0x800e3b4, 0x800e43c
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e434: // orphan
         // CODE XREF from sym.get_thread_pacga_key @ 0x800e410
         w1 = 0x3
         0x800e438 ()             // 0x800e438(0x0, 0x3, 0x0, 0x0)
         jmp 0x800e414

}

/* ===== 0x0800e440 ===== */
int sym.get_thread_pacia_key (int esi, int edx) {
    loc_0x800e440:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x20 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x21 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x22 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x1] = xzr    // arg2
        [x2] = xzr    // arg3
        [x3] = wzr    // arg4
        0x800e474 ()  // 0x800e474(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800e4bc // likely
            
    loc_0x800e4bc:
        // CODE XREFS from sym.get_thread_pacia_key @ 0x800e478, 0x800e494
        w0 = ~0x2
        jmp 0x800e568
         // do {
    loc_0x800e568:
        // CODE XREF from sym.get_thread_pacia_key @ 0x800e4c0
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800e580
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800e47c
    loc_0x800e498:
        x8 = [x19 + 0x1190] // 0xda // 218
        [x22] = x8
        x8 = [x19 + 0x1198] // 0xda // 218
        [x21] = x8
        mrs x8,s3_0_c0_c6_2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf00) == 0)
        b.eq 0x800e4c4 // unlikely
            
    loc_0x800e4c4:
        // CODE XREF from sym.get_thread_pacia_key @ 0x800e4b0
        mrs x8,id_aa64isar1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf000000) == 0)
        b.eq 0x800e508 // unlikely
            
    loc_0x800e508:
        // CODE XREF from sym.get_thread_pacia_key @ 0x800e4cc
        mrs x8,midr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w8,w8,4, 0xc // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w8 - 0xd4d
        if (w8 == 0x3a)
        b.hi 0x800e4d0 // likely
    loc_0x800e51c:
        w9 = 0x1
        x8 = x9 << x8
        x9 = 0x3
        x9 = 0x538
        if ((x8 & x9) == 0)
        b.ne 0x800e4b4 // likely
    loc_0x800e534:
        jmp 0x800e4d0
    loc_0x0800e4b4: // orphan
             // CODE XREF from sym.get_thread_pacia_key @ 0x800e530
             w8 = 0x3
             jmp 0x800e4d4

    loc_0x0800e4d0: // orphan
         // CODE XREFS from sym.get_thread_pacia_key @ 0x800e518, 0x800e534
         w8 = 0x5

    loc_0x0800e4d4: // orphan
         // CODE XREF from sym.get_thread_pacia_key @ 0x800e4b8
         x0 = x19 + 0x38
         [x20] = w8
         jmp 0x800e538

    loc_0x0800e4f8: // orphan
         // CODE XREF from sym.get_thread_pacia_key @ 0x800e558
         dmb ishld
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800e500 ()             // 0x800e500(0x0, 0x0, 0x0, 0x0)
         jmp 0x800e564

    loc_0x0800e538: // orphan
         // CODE XREF from sym.get_thread_pacia_key @ 0x800e4dc
         // CODE XREF from sym.get_thread_pacia_key @ +0xa0
         bti j
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x0800e544: // orphan
         // CODE XREF from sym.get_thread_pacia_key @ 0x800e550
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800e544     // unlikely

    loc_0x0800e554: // orphan
         if (w8 == 1)
         b.eq 0x800e4f8           // unlikely

    loc_0x0800e55c: // orphan
         // CODE XREF from sym.get_thread_pacia_key @ +0xb4
         if (w8 == 0)
         jmp ifle 0x800e584       // likely

    loc_0x0800e564: // orphan
         // CODE XREFS from sym.get_thread_pacia_key @ 0x800e504, 0x800e58c
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800e584: // orphan
         // CODE XREF from sym.get_thread_pacia_key @ 0x800e560
         w1 = 0x3
         0x800e588 ()             // 0x800e588(0x0, 0x3, 0x0, 0x0)
         jmp 0x800e564

}

/* ===== 0x0800e590 ===== */
int sym.bind_thread_pacga_key (int esi, int edx) {
    loc_0x800e590:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = w1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x800e5b0 ()  // 0x800e5b0(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800e784 // likely
            
    loc_0x800e784:
        // CODE XREFS from sym.bind_thread_pacga_key @ 0x800e5b4, 0x800e5d0, 0x800e6ac, 0x800e7c8, 0x800e7d4
        w0 = ~0x2
         // do {
    loc_0x800e788:
        // CODE XREF from sym.bind_thread_pacga_key @ 0x800e748
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0800e79c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800e5b8
    loc_0x800e5d4:
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800e5d8 ()  // 0x800e5d8(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800e658 // likely
            
    loc_0x800e658:
        // CODE XREF from sym.bind_thread_pacga_key @ 0x800e5dc
        x0 = x19 + 0x38
        jmp 0x800e758
         // do {
    loc_0x800e758:
        // CODE XREF from sym.bind_thread_pacga_key @ 0x800e65c
        // CODE XREF from sym.bind_thread_pacga_key @ +0xd0
        bti j
        w9 = 0x1
        prfm pstl1strm,[x0]
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800e5e0
    loc_0x800e5fc:
        x8 = [x19 + 0x11d0] // 0xda // 218
        mrs x10,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x20 == x10)
        [x20 + 0x11d0] = x8
        x9 = [x19 + 0x11d8] // 0xda // 218
        [x20 + 0x11d8] = x9
        b.ne 0x800e628 // unlikely
            
    loc_0x800e628:
        // CODE XREF from sym.bind_thread_pacga_key @ 0x800e614
        x0 = x20 + 0x38
        jmp 0x800e6b0
         // do {
    loc_0x800e6b0:
        // CODE XREF from sym.bind_thread_pacga_key @ 0x800e62c
        // CODE XREF from sym.bind_thread_pacga_key @ +0xa0
        bti j
        w9 = 0x1
        prfm pstl1strm,[x0]
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800e648: // orphan
             // CODE XREF from sym.bind_thread_pacga_key @ 0x800e6d0
             dmb ishld
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             0x800e650 ()             // "\"" // 0x800e650(0x0, 0x0, 0x0, 0x0)
             jmp 0x800e6dc

    loc_0x0800e678: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e778
         dmb ishld
         jmp 0x800e6a4

    loc_0x0800e680: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e5f8
         x0 = x19 + 0x38
         jmp 0x800e7a0

    loc_0x0800e6a0: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e7c0
         dmb ishld

    loc_0x0800e6a4: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e67c
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800e6a8 ()             // "6" // 0x800e6a8(0x0, 0x0, 0x0, 0x0)
         jmp 0x800e784

    loc_0x0800e6bc: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e6c8
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800e6bc     // unlikely

    loc_0x0800e6cc: // orphan
         if (w8 == 1)
         b.eq 0x800e648           // unlikely

    loc_0x0800e6d4: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ +0xb4
         if (w8 == 0)
         jmp ifle 0x800e70c       // likely

    loc_0x0800e6dc: // orphan
         // CODE XREFS from sym.bind_thread_pacga_key @ 0x800e654, 0x800e714
         x0 = x19 + 0x38
         jmp 0x800e718

    loc_0x0800e6fc: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e738
         dmb ishld
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800e704 ()             // 0x800e704(0x0, 0x0, 0x0, 0x0)
         jmp 0x800e744

    loc_0x0800e70c: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e6d8
         w1 = 0x3
         0x800e710 ()             // 0x800e710(0x0, 0x3, 0x0, 0x0)
         jmp 0x800e6dc

    loc_0x0800e718: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e6e0
         // CODE XREF from sym.bind_thread_pacga_key @ +0x154
         bti j
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x0800e724: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e730
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800e724     // unlikely

    loc_0x0800e734: // orphan
         if (w8 == 1)
         b.eq 0x800e6fc           // unlikely

    loc_0x0800e73c: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ +0x168
         if (w8 == 0)
         jmp ifle 0x800e74c       // likely

    loc_0x0800e744: // orphan
         // CODE XREFS from sym.bind_thread_pacga_key @ 0x800e708, 0x800e754
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800e788

    loc_0x0800e74c: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e740
         w1 = 0x3
         0x800e750 ()             // 0x800e750(0x0, 0x3, 0x0, 0x0)
         jmp 0x800e744

    loc_0x0800e764: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e770
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800e764     // unlikely

    loc_0x0800e774: // orphan
         if (w8 == 1)
         b.eq 0x800e678           // unlikely

    loc_0x0800e77c: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ +0xe4
         if (w8 == 0)
         jmp ifle 0x800e7cc       // likely

    loc_0x0800e7a0: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e684
         // CODE XREF from sym.bind_thread_pacga_key @ +0xf8
         bti j
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x0800e7ac: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e7b8
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800e7ac     // unlikely

    loc_0x0800e7bc: // orphan
         if (w8 == 1)
         b.eq 0x800e6a0           // unlikely

    loc_0x0800e7c4: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ +0x10c
         if (w8 == 0)
         jmp ifgt 0x800e784       // unlikely

    loc_0x0800e7cc: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x800e780
         w1 = 0x3
         0x800e7d0 ()             // 0x800e7d0(0x0, 0x3, 0x0, 0x0)
         jmp 0x800e784

}

/* ===== 0x08011604 ===== */
int sym.inline_hook_install_count (int esi, int edx) {
    loc_0x8011604:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        w19 = ~0x15
        if !x0 jmp 0x80116b0 // likely
            
    loc_0x80116b0:
        // CODE XREF from sym.inline_hook_install_count @ 0x801163c
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x080116c8
         // } else {
    loc_0x8011624:
        w21 = w1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        if (w1 == 1)  // arg2
        b.lt 0x80116b0 // likely
        }
        return eax;
    loc_0x8011630:
        if (w21 == 0x20)
        b.ls 0x8011640 // likely
            
    loc_0x8011640:
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8011000
        x0 = x0 + 0   // int64_t arg1
        0x801164c ()  // 0x801164c(0x8011000, 0x0, 0x0, 0x0)
        x22 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w21 = w21     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8011658:
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x801165c ()  // 0x801165c(0x0, 0x0, 0x0, 0x0)
        if w0 jmp 0x801167c // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08011664: // orphan
             x22 = x22 + 1
             x20 = x20 + 0x38
             if (x21 == x22)
             b.ne 0x8011658           // likely

    loc_0x08011674: // orphan
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80116a4

    loc_0x0801167c: // orphan
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w22 jmp 0x80116a4    // likely

    loc_0x08011684: // orphan
         x20 = x20 - 0x38
         x21 = x22 + 1

    loc_0x0801168c: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8011690 ()             // 0x8011690(0x0, 0x0, 0x0, 0x0)
         x21 = x21 - 1
         x20 = x20 - 0x38
         if (x21 == 1)
         jmp ifgt 0x801168c       // unlikely

    loc_0x080116a4: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x8011678
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x80116ac ()             // 0x80116ac(0x8011000, 0x0, 0x0, 0x0)

}

/* ===== 0x08011fa0 ===== */
int sym.inline_hook_remove_count (int esi, int edx) {
    loc_0x8011fa0:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [sp + 0x10] = x21
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        if !x0 jmp 0x8012008 // likely
            
    loc_0x8012008:
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0801201c
         // } else {
    loc_0x8011fbc:
        w20 = w1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        if (w1 == 1)  // arg2
        b.lt 0x8012008 // likely
        }
        return eax;
    loc_0x8011fc8:
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8011000
        x0 = x0 + 0   // int64_t arg1
        0x8011fd4 ()  // 0x8011fd4(0x8011000, 0x0, 0x0, 0x0)
        w8 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w21 = 0x38    // '8'
        x20 = x8 + 1
         // do {
    loc_0x8011fe4:
        w8 = w20 - 2
        umaddl x0,w8,w21, x19 // int64_t arg1
        0x8011fec ()  // 0x8011fec(0x0, 0x0, 0x0, 0x0)
        x20 = x20 - 1
        if (x20 == 1)
        jmp ifgt 0x8011fe4 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x8011ffc:
        x0 = 0x8011000
        // XREFS(60)
        x0 = x0 + 0   // int64_t arg1
        0x8012004 ()  // 0x8012004(0x8011000, 0x0, 0x0, 0x0)
}

/* ===== 0x08011308 ===== */
int sym.check_target_can_hijack (int esi, int edx) {
    loc_0x8011308:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = [x0]     // 0xc7 // 199 // arg1
        w8 = 0x9000
        w9 = w1 & 0x1f000000
        w9 = w9 | 0x80000000
        if (w9 == w8)
        b.eq 0x80115e4 // unlikely
            
    loc_0x80115e4:
        x0 = 0x8011000
        x0 = x0 + 0   // int64_t arg1
        0x80115ec ()  // 0x80115ec(0x8011000, 0x0, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x80115f4:
        // CODE XREF from sym.check_target_can_hijack @ 0x80115e0
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x08011600
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8011330
    loc_0x8011340:
        w9 = w1 & 0xff000000
        w8 = 0x5400
        if (w9 == w8)
        b.eq 0x80115e4 // unlikely
    loc_0x8011350:
        w8 = w1 | 0x2000000
        w10 = 0x3600
        w8 = w8 & 0x7e000000
        if (w8 == w10)
        b.eq 0x80115e4 // unlikely
    loc_0x8011364:
        w8 = 0x9800
        if (w9 == w8)
        b.eq 0x80115e4 // unlikely
    loc_0x8011370:
        w9 = 0xbf00
        w11 = 0x1800
        w10 = w1 & w9
        if (w10 == w11)
        b.eq 0x80115e4 // unlikely
    loc_0x8011384:
        w10 = w1 & 0x3f000000
        w11 = 0x1c00
        if (w10 == w11)
        b.eq 0x80115e4 // unlikely
    loc_0x8011394:
        w1 = [x0 + 4] // 0xc7 // 199 // arg1
        w10 = 0x9f00
        w12 = 0x9000
        w11 = w1 & w10
        w11 = w11 | 0x80000000
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x80113b0:
        w11 = w1 | 0x80000000
        w11 = w11 >> 0x1a
        if (w11 == 0x25)
        b.eq 0x80115e4 // unlikely
    loc_0x80113c0:
        // CODE XREF from sym.hook_entry_install @ 0x8011a28
        w11 = w1 & 0xff000000
        // CODE XREF from sym.hook_entry_install @ 0x8011a90
        w12 = 0x5400
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x80113d0:
        w12 = w1 | 0x2000000
        w13 = 0x3600
        w12 = w12 & 0x7e000000
        if (w12 == w13)
        b.eq 0x80115e4 // unlikely
    loc_0x80113e4:
        if (w11 == w8)
        b.eq 0x80115e4 // likely
    loc_0x80113ec:
        w11 = w1 & w9
        w12 = 0x1800
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x80113fc:
        w11 = w1 & 0x3f000000
        w12 = 0x1c00
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x801140c:
        w1 = [x0 + 8] // 0xc7 // 199 // arg1
        w12 = 0x9000
        w11 = w1 & w10
        w11 = w11 | 0x80000000
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x8011424:
        w11 = w1 | 0x80000000
        w11 = w11 >> 0x1a
        if (w11 == 0x25)
        b.eq 0x80115e4 // unlikely
    loc_0x8011434:
        w11 = w1 & 0xff000000
        w12 = 0x5400
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x8011444:
        w12 = w1 | 0x2000000
        w13 = 0x3600
        w12 = w12 & 0x7e000000
        if (w12 == w13)
        b.eq 0x80115e4 // unlikely
    loc_0x8011458:
        if (w11 == w8)
        b.eq 0x80115e4 // likely
    loc_0x8011460:
        w11 = w1 & w9
        w12 = 0x1800
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x8011470:
        w11 = w1 & 0x3f000000
        w12 = 0x1c00
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x8011480:
        w1 = [x0 + 0xc] // 0xc7 // 199 // arg1
        w12 = 0x9000
        w11 = w1 & w10
        w11 = w11 | 0x80000000
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x8011498:
        w11 = w1 | 0x80000000
        w11 = w11 >> 0x1a
        if (w11 == 0x25)
        b.eq 0x80115e4 // unlikely
    loc_0x80114a8:
        w11 = w1 & 0xff000000
        w12 = 0x5400
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x80114b8:
        w12 = w1 | 0x2000000
        w13 = 0x3600
        w12 = w12 & 0x7e000000
        if (w12 == w13)
        b.eq 0x80115e4 // unlikely
    loc_0x80114cc:
        if (w11 == w8)
        b.eq 0x80115e4 // likely
    loc_0x80114d4:
        w11 = w1 & w9
        w12 = 0x1800
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x80114e4:
        w11 = w1 & 0x3f000000
        w12 = 0x1c00
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x80114f4:
        w1 = [x0 + 0x10] // 0xc7 // 199 // arg1
        w12 = 0x9000
        w11 = w1 & w10
        w11 = w11 | 0x80000000
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x801150c:
        w11 = w1 | 0x80000000
        w11 = w11 >> 0x1a
        if (w11 == 0x25)
        b.eq 0x80115e4 // unlikely
    loc_0x801151c:
        w11 = w1 & 0xff000000
        w12 = 0x5400
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x801152c:
        w12 = w1 | 0x2000000
        w13 = 0x3600
        w12 = w12 & 0x7e000000
        if (w12 == w13)
        b.eq 0x80115e4 // unlikely
    loc_0x8011540:
        if (w11 == w8)
        b.eq 0x80115e4 // likely
    loc_0x8011548:
        w11 = w1 & w9
        w12 = 0x1800
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x8011558:
        w11 = w1 & 0x3f000000
        w12 = 0x1c00
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x8011568:
        w1 = [x0 + 0x14] // 0xc7 // 199 // arg1
        w11 = 0x9000
        w10 = w1 & w10
        w10 = w10 | 0x80000000
        if (w10 == w11)
        b.eq 0x80115e4 // unlikely
    loc_0x8011580:
        w10 = w1 | 0x80000000
        w10 = w10 >> 0x1a
        if (w10 == 0x25)
        b.eq 0x80115e4 // unlikely
    loc_0x8011590:
        w10 = w1 & 0xff000000
        w11 = 0x5400
        if (w10 == w11)
        b.eq 0x80115e4 // unlikely
    loc_0x80115a0:
        w11 = w1 | 0x2000000
        w12 = 0x3600
        w11 = w11 & 0x7e000000
        if (w11 == w12)
        b.eq 0x80115e4 // unlikely
    loc_0x80115b4:
        if (w10 == w8)
        b.eq 0x80115e4 // likely
    loc_0x80115bc:
        w8 = w1 & w9
        w9 = 0x1800
        if (w8 == w9)
        b.eq 0x80115e4 // unlikely
    loc_0x80115cc:
        w8 = w1 & 0x3f000000
        w9 = 0x1c00
        if (w8 == w9)
        b.eq 0x80115e4 // unlikely
    loc_0x80115dc:
        w0 = 0x1
        jmp 0x80115f4
}

/* ===== 0x08025f40 ===== */
int sym.arm64_decode_insn (int esi, int edx) {
    loc_0x8025f40:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp + 0x10] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w0 >> 0x10 // arg1
        [x1, 0x38] = (xzr,2) // arg2
        [x1, 0x28] = (xzr,2) // arg2
        [x1, 0x18] = (xzr,2) // arg2
        [x1, 8] = (xzr,2) // arg2
        [x1] = xzr    // arg2
        [x1] = w0     // arg2
        if w9 jmp 0x8025fa8 // unlikely
            
    loc_0x8025fa8:
        // CODE XREF from sym.arm64_decode_insn @ 0x8025f78
        ubfx w9,w8,0x19, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x3
        if (w9 == 0xf)
        b.hi 0x8025f8c // unlikely
            
    loc_0x8025f8c:
        // XREFS: CODE 0x08025fb4  CODE 0x08025fe0  CODE 0x08025ff4
        // XREFS: CODE 0x08026008  CODE 0x0802601c  CODE 0x0802602c
        // XREFS: CODE 0x0802605c  CODE 0x08026070
        bti j
        [x19 + 4] = w0
        x19 = [var_10h_2] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        // CODE XREFS from sym.arm64_decode_insn @ 0x8025fc8, 0x8025fcc
        hint 0x1d
        0x08025fa4
         // } else {
    loc_0x8025fb8:
        x10 = 0x8025000
        x10 = x10 + 0
        x11 = 0x8025f7c
        w12 = (byte) [x10 + x9] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12,lsl 2
        br x11
         // } else {
        }
        return eax;
}

/* ===== 0x08012284 ===== */
int sym.ret_trampoline_finish_task_switch (int esi, int edx) {
    loc_0x8012284:
        bti c
        [sp + 8] = x0 // arg1
        0x801228c ()  // 0x801228c(0x0, 0x0, 0x0, 0x0)
        (x16, 2) = 3
        ret x16
         // (break)
}

/* ===== 0x08026dd4 ===== */
int sym.arm64_decode_branch (int esi, int edx) {
    loc_0x8026dd4:
        hint 0x19
        w8 = w0 >> 0x10 // arg1
        if w8 jmp 0x8026df4 // unlikely
            
    loc_0x8026df4:
        // CODE XREF from sym.arm64_decode_branch @ 0x8026ddc
        w9 = 0x201f   // '\x1f '
        w8 = w0 & 0xfffff01f // arg1
        w9 = 0xd503
        if (w8 == w9)
        b.ne 0x8026e58 // likely
            
    loc_0x8026e58:
        // CODE XREF from sym.arm64_decode_branch @ 0x8026e04
        w9 = 0xcfa1   // '\xa1\xcf'
        w8 = w0 & 0xfffff0ff // arg1
        w9 = 0x2afc   // '\xfc*'
        w8 = w8 + w9
        ror w8,w8,5
        if (w8 == 4)
        ccmp w8,1,4, ls
        b.eq 0x8026eb0 // unlikely
            
    loc_0x8026eb0:
        // CODE XREF from sym.arm64_decode_branch @ 0x8026e74
        w8 = w0 & 0xffe0001f // arg1
        w9 = 0x2
        w9 = 0xd400
        if (w8 == w9)
        jmp ifle 0x8026fbc // unlikely
            
    loc_0x8026fbc:
        // CODE XREF from sym.arm64_decode_branch @ 0x8026ec0
        w9 = 0x1
        w9 = 0xd400
        if (w8 == w9)
        b.eq 0x8027004 // unlikely
            
    loc_0x8027004:
        // CODE XREF from sym.arm64_decode_branch @ 0x8026fc8
        w9 = 0xa
         // do {
    loc_0x8027008:
        // CODE XREFS from sym.arm64_decode_branch @ 0x8026ef0, 0x8026fe0, 0x8026ff8, 0x8027000
        x10 = xzr | 0x400000004
        w11 = w0 >> 5 // arg1
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x20] = w9 // arg2
        [x1 + 8] = x10 // arg2
        [x1 + 0x24] = (half) w11
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08026e1c: // orphan
             x8 = 0x8026000
             x8 = x8 + 0
             x10 = 0x8026e34
             w11 = (byte) [x8 + x9]   // 0xd0000000cf // 893353197775
             x10 = x10 + x11,lsl 2
             br x10

    loc_0x08026e98: // orphan
         if (w9 == 0x9f)
         b.eq 0x8026efc           // unlikely

    loc_0x08026ea0: // orphan
         if (w9 == 0x5f)
         b.ne 0x8026f04           // likely

    loc_0x08026ea8: // orphan
         w9 = 0x6
         jmp 0x8026f10

    loc_0x08026ed4: // orphan
         w9 = 0xd420              // ' \xd4'
         if (w8 == w9)
         b.eq 0x8026ffc           // unlikely

    loc_0x08026ee0: // orphan
         w9 = 0xd440              // '@\xd4'
         if (w8 == w9)
         b.ne 0x802702c           // likely

    loc_0x08026eec: // orphan
         w9 = 0xe
         jmp 0x8027008

    loc_0x08026ef4: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x8026e94
         w9 = 0x8
         jmp 0x8026f10

    loc_0x08026efc: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x8026e9c
         w9 = 0x7
         jmp 0x8026f10

    loc_0x08026f04: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x8026ea4
         if (w8 == 0xf)
         b.ne 0x8026f1c           // likely

    loc_0x08026f0c: // orphan
         w9 = 0x9

    loc_0x08026f10: // orphan
         // CODE XREFS from sym.arm64_decode_branch @ 0x8026eac, 0x8026ef8, 0x8026f00
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = w9         // arg2
         jmp 0x8027020

    loc_0x08026f1c: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x8026f08
         w8 = 0x3
         jmp 0x8027020

    loc_0x08026f2c: // orphan
         // CODE XREFS from sym.arm64_decode_branch @ 0x80271a8, 0x8027220, 0x8027228
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0xc] = w9          // arg2
         jmp 0x8027020

    loc_0x08026fdc: // orphan
         w9 = 0xb
         jmp 0x8027008

    loc_0x08026fe4: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x8026e18
         bti j
         w8 = 0x1
         [x1 + 0xc] = wzr         // arg2
         jmp 0x8027020

    loc_0x08026ff4: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x8026ed0
         w9 = 0xc
         jmp 0x8027008

    loc_0x08026ffc: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x8026edc
         w9 = 0xd
         // CODE XREFS from sym.arm64_decode_ldst @ 0x802729c, 0x80272a0
         // CODE XREFS from sym.arm64_decode_simd @ 0x8027e8c, 0x8027e94
         jmp 0x8027008

    loc_0x08027020: // orphan
         // XREFS: CODE 0x08026df0  CODE 0x08026e54  CODE 0x08026f18  
         // XREFS: CODE 0x08026f20  CODE 0x08026f34  CODE 0x08026f60  
         // XREFS: CODE 0x08026fb8  CODE 0x08026ff0  CODE 0x08027064  
         // XREFS: CODE 0x080270cc  CODE 0x0802710c  CODE 0x08027178  
         // XREFS: CODE 0x08027218  CODE 0x08027270  CODE 0x08027280  
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         hint 0x1d
         

    loc_0x0802702c: // orphan
         // CODE XREFS from sym.arm64_decode_branch @ 0x8026ee8, 0x8026fd8
         w9 = 0x3e0
         w8 = w0 & 0xffdfffff     // arg1
         w9 = 0xd69f              // '\x9f\xd6'
         [x1 + 0x20] = wzr        // arg2
         if (w8 == w9)
         b.ne 0x8027068           // likely

    loc_0x08027044: // orphan
         x10 = 0x4
         if (w0 == w9)            // arg1
         w9 = 0xf
         x10 = 0x5
         cinc w9,w9,ne
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 8] = x10           // arg2
         [x1 + 0x20] = w9         // arg2
         jmp 0x8027020

    loc_0x08027068: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x8027040
         w8 = w0 & 0xfff00000     // arg1
         w9 = 0xd530              // '0\xd5'
         if (w8 == w9)
         b.eq 0x802708c           // unlikely

    loc_0x08027078: // orphan
         w9 = 0xd510              // '\x10\xd5'
         if (w8 == w9)
         b.ne 0x80270d0           // likely

    loc_0x08027084: // orphan
         w9 = 0x7
         jmp 0x8027090

    loc_0x0802708c: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x8027074
         w9 = 0x6

    loc_0x08027090: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x8027088
         w10 = 0x4
         w11 = w0 & 0x1f          // arg1
         ubfx w12,w0,0x13, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 8] = (w10,2)        // arg2
         ubfx w9,w0,0x10, 3       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1c] = (byte) w11 // arg2
         ubfx w10,w0,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w11,w0,8, 4         // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x27] = (byte) w12 // arg2
         [x1 + 0x28] = (byte) w9  // arg2
         ubfx w9,w0,5, 3          // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x29] = (byte) w10 // arg2
         [x1 + 0x2a] = (byte) w11 // arg2
         [x1 + 0x2b] = (byte) w9  // arg2
         jmp 0x8027020

    loc_0x080270d0: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x8027080
         w8 = w0 | 0x80000000     // arg1
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x8026d48, 0x8026d4c
         w8 = w8 >> 0x1a
         if (w8 == 0x25)
         b.ne 0x8027110           // likely

    loc_0x080270e0: // orphan
         ubfiz w11,w0,2, 0x1a     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w0 == 0)             // arg1
         w10 = 0x8
         w11 = w11 ^ loc.imp._printk // loc.imp.memmove
         x12 = xzr | 0xfffffffff8000000
         w9 = 0x4
         cinc w10,w10,lt
         x11 = x11 + x12
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 8] = (w9,2)         // arg2
         [x1 + 0x20] = x11        // arg2
         jmp 0x8027020

    loc_0x08027110: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x80270dc
         w9 = 0xfc1f              // '\x1f\xfc'
         w8 = w0 & 0xfffffc1f     // arg1
         w9 = 0xffdf              // '\xdf\xff'
         w10 = w0 & w9            // arg1
         w9 = 0xd61f              // '\x1f\xd6'
         if (w10 == w9)
         b.eq 0x802717c           // unlikely

    loc_0x0802712c: // orphan
         w9 = w9 | 0x400000
         if (w8 == w9)
         b.eq 0x802717c           // unlikely

    loc_0x08027138: // orphan
         w8 = w0 & 0xfffffff0     // arg1
         w9 = 0x5400
         w8 = w8 & 0xff00001f
         if (w8 == w9)
         b.ne 0x80271ac           // likely

    loc_0x0802714c: // orphan
         w9 = w0 >> 3             // arg1
         x10 = 0x4
         w9 = w9 & 0x1ffffc
         x10 = 0xd
         w9 = w9 ^ 0x100000
         w11 = w0 & 0xf           // arg1
         x9 = x9 - 0x100,lsl 12
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 8] = x10           // arg2
         [x1 + 0x28] = (byte) w11 // arg2
         [x1 + 0x20] = x9         // arg2
         jmp 0x8027020

    loc_0x0802717c: // orphan
         // CODE XREFS from sym.arm64_decode_branch @ 0x8027128, 0x8027134
         w9 = 0x4
         ubfx w10,w0,5, 5         // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = 0xd63f             // '?\xd6'
         if (w8 == w11)
         [x1 + 8] = w9            // arg2
         [x1 + 0x19] = (byte) w10 // arg2
         b.eq 0x802721c           // unlikely

    loc_0x08027198: // orphan
         w9 = 0xd61f              // '\x1f\xd6'
         if (w8 == w9)
         b.ne 0x8027224           // likely

    loc_0x080271a4: // orphan
         w9 = 0xa
         jmp 0x8026f2c

    loc_0x080271ac: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x8027148
         w8 = w0 & 0x7e000000     // arg1
         w9 = 0x3600
         if (w8 == w9)
         // CODE XREFS from sym.arm64_decode_branch @ 0x8026e2c, 0x8026e30
         b.eq 0x802722c           // unlikely

    loc_0x080271bc: // orphan
         w9 = 0x3400
         if (w8 == w9)
         b.ne 0x8027274           // likely

    loc_0x080271c8: // orphan
         if ((w0 & 0x1000000) == 0) // arg1
         w10 = 0xe
         w9 = 0x4
         cinc w10,w10,ne
         w12 = 0x40               // '@'
         if (w0 == 0)             // arg1
         w11 = w0 >> 0x1f         // arg1
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 8] = (w9,2)         // arg2
         w10 = w0 >> 3            // arg1
         w10 = w10 & 0x1ffffc
         w9 = 0x20
         w10 = w10 ^ 0x100000
         csel w9,w9,w12, ge
         w12 = w0 & 0x1f          // arg1
         x10 = x10 - 0x100,lsl 12
         [x1 + 0x14] = w11        // arg2
         [x1 + 0x1f] = (byte) w9  // arg2
         [x1 + 0x1c] = (byte) w12 // arg2
         [x1 + 0x20] = x10        // arg2
         jmp 0x8027020

    loc_0x0802721c: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x8027194
         w9 = 0xb
         jmp 0x8026f2c

    loc_0x08027224: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x80271a0
         w9 = 0xc
         jmp 0x8026f2c

    loc_0x0802722c: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x80271b8
         if ((w0 & 0x1000000) == 0) // arg1
         w10 = 0x10
         w9 = 0x4
         cinc w10,w10,ne
         w12 = w0 >> 3            // arg1
         w11 = w0 >> 0x1a         // arg1
         w12 = w12 & 0xfffc
         w11 = w11 & 0x20
         w12 = w12 ^ 0x8000
         bfxil w11,w0,0x13, 5     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w13 = w0 & 0x1f          // arg1
         [x1, 8] = (w9,2)         // arg2
         x9 = x12 - 8,lsl 12
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x29] = (byte) w11 // arg2
         [x1 + 0x1c] = (byte) w13 // arg2
         [x1 + 0x20] = x9         // arg2
         jmp 0x8027020

    loc_0x08027274: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x80271c4
         w9 = 0x4
         w8 = 0x1
         [x1 + 8] = x9            // arg2
         jmp 0x8027020

}

/* ===== 0x08029f54 ===== */
int sym.arm64_decode_sme (int esi, int edx) {
    loc_0x8029f54:
        bti c
        tbnz w0,0x1f,0x8029f64 // unlikely
            
    loc_0x8029f64:
        hint 0x19
        x8 = 0x7
        w0 = 0x1
        x8 = 0x31     // '1'
        [x1 + 8] = x8 // arg2
        hint 0x1d
        0x08029f7c
         // } else {
    loc_0x8029f5c:
        w0 = 0x3
        0x08029f60
        }
        return eax;
}

/* ===== 0x08029f80 ===== */
int sym.arm64_decode_sve (int esi, int edx) {
    loc_0x8029f80:
        hint 0x19
        x8 = 0x6
        w9 = w0 & 0x1f // arg1
        x8 = 0x30     // '0'
        ubfx w10,w0,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        ubfx w11,w0,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = 0x1
        [x1 + 0x18] = (byte) w9 // arg2
        [x1 + 8] = x8 // arg2
        [x1 + 0x19] = (byte) w10 // arg2
        [x1 + 0x1a] = (byte) w11 // arg2
        hint 0x1d
        0x08029fb0
         // (break)
}

/* ===== 0x0802668c ===== */
int sym.arm64_decode_data_processing_register (int esi, int edx) {
    loc_0x802668c:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = 0x2
        w9 = 0x1f20   // ' \x1f'
        w9 = w0 & w9  // arg1
        w10 = 0xb00
        if (w9 == w10)
        [x1 + 8] = w8 // arg2
        b.eq 0x802677c // unlikely
            
    loc_0x802677c:
        // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x80266c0, 0x80266d0
        w9 = w20 & 0x1f
        if ((w20 & 0x200000) == 0)
        w8 = 0x1a
        w10 = 0x1
        cinc w8,w8,ne
        if ((w20 & 0x40000000) == 0)
        cinc w10,w10,ne
        [x19 + 0x18] = (byte) w9
        ubfx w9,w20,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w20 == 0)
        w11 = 0x40    // '@'
        w12 = 0x20
        [x19, 0xc] = (w8,2)
        ubfx w8,w20,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w10,w20,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0x19] = (byte) w9
        csel w9,w12,w11, ge
        [x19 + 0x1b] = (byte) w8
        [x19 + 0x1a] = (byte) w10
        [x19 + 0x1f] = (byte) w9
        tbnz w20,0x1f,0x802685c // unlikely
            
    loc_0x802685c:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x80267cc
        w8 = [x19 + 0x14] // 0xda // 218
        w8 = w8 | 1
        [x19 + 0x14] = w8
        ubfx w9,w20,0xa, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        tbz w20,0x15,0x80267d8 // likely
            
    loc_0x80267d8:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x802686c
        ubfx w8,w20,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = w9 & 0x3f
        w0 = 0x3
        w10 = w20 & 0x80008000
        if (w10 == 8)
        [x19 + 0x38] = (byte) w8
        [x19 + 0x39] = (byte) w9
        b.eq 0x8026b48 // unlikely
            
    loc_0x8026b48:
        // XREFS: CODE 0x080267f4  CODE 0x08026800  CODE 0x0802688c
        // XREFS: CODE 0x080268a8  CODE 0x08026918  CODE 0x080269a8
        // XREFS: CODE 0x08026a70  CODE 0x08026b08  CODE 0x08026b80
        // XREFS: CODE 0x08026b84  CODE 0x08026b8c  CODE 0x08026bac
        // XREFS: CODE 0x08026bcc  CODE 0x08026bd8  CODE 0x08026bdc
        // XREFS: CODE 0x08026be4  CODE 0x08026bf8  CODE 0x08026c20
        // XREFS: CODE 0x08026d64
        bti j
        (x20, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x08026b5c
         // } else {
    loc_0x80267f8:
        if (w8 == 3)
        b.ne 0x8026890 // likely
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x80266c4
    loc_0x80266d4:
        w8 = w20 & 0x1f000000
        w9 = 0xa00
        if (w8 == w9)
        b.ne 0x8026804 // likely
            
    loc_0x8026804:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x80266e0
        w8 = w20 & 0x3fe00000
        w9 = 0x1a80   // '\x80\x1a'
        if (w8 == w9)
        b.ne 0x80268ac // likely
            
    loc_0x80268ac:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026810
        w8 = w20 & 0x7fe00000
        w9 = 0x1ac0   // '\xc0\x1a'
        if (w8 == w9)
        b.ne 0x8026948 // likely
            
    loc_0x8026948:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x80268b8
        w8 = w20 & 0x7f000000
        w9 = 0x1b00
        if (w8 == w9)
        b.ne 0x8026a14 // likely
            
    loc_0x8026a14:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026954
        w8 = w20 & 0x1ffffc00
        w9 = 0x1a00
        w8 = w8 & 0xffe0ffff
        if (w8 == w9)
        b.ne 0x8026a74 // likely
            
    loc_0x8026a74:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026a24
        w8 = 0x410
        w9 = 0x3a40   // '@:'
        w8 = 0x3fe0   // '\xe0?'
        w8 = w20 & w8
        if (w8 == w9)
        b.ne 0x8026ad8 // likely
            
    loc_0x8026ad8:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026a88
        w8 = 0x6b04
        w8 = 0x3
        if (w8 == w20)
        b.ne 0x8026bfc // likely
            
    loc_0x8026bfc:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026ae4
        w8 = w20 | 0x400
        w9 = 0xa3f    // '?\n'
        w9 = 0x6d6
        if (w9 == w8)
        b.ne 0x8026d04 // likely
            
    loc_0x8026d04:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026c0c
        w8 = w20 & 0x7fff0000
        w9 = 0x5ac0   // '\xc0Z'
        if (w8 == w9)
        b.ne 0x8026d5c // likely
            
    loc_0x8026d5c:
        // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026d10
        w0 = 0x1
        [x19 + 0xc] = wzr
        jmp 0x8026b48
    loc_0x080266e4: // orphan
             ubfx w10,w20,0x1d, 2     // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w9 = 0x1c
             w10 = w10 + 3
             w8 = w20 & 0x1f
             if (w20 == 0)
             ubfx w11,w20,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
             ubfx w12,w20,0xa, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
             [x19, 0xc] = (w9,2)
             w9 = 0x40                // '@'
             w10 = 0x20
             [x19 + 0x18] = (byte) w8
             ubfx w8,w20,0x10, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
             csel w9,w10,w9, ge
             [x19 + 0x19] = (byte) w11
             [x19 + 0x1b] = (byte) w12
             [x19 + 0x1a] = (byte) w8
             [x19 + 0x1f] = (byte) w9
             tbz w20,0x1f,0x8026738   // likely

    loc_0x0802672c: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8

    loc_0x08026738: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026728
         ubfx w8,w20,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w9,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w20 & 0x80008000
         if (w10 == 8)
         [x19 + 0x38] = (byte) w8
         [x19 + 0x39] = (byte) w9
         b.eq 0x8026888           // unlikely

    loc_0x08026754: // orphan
         tbz w20,0x15,0x8026764   // likely

    loc_0x08026758: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 0x800
         [x19 + 0x14] = w8

    loc_0x08026764: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026754
         w8 = ~w20
         if ((w8 & 0x60000000) == 0)
         b.ne 0x80268a4           // likely

    loc_0x08026770: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026ac0
         w8 = [x19 + 0x14]        // 0xda // 218

    loc_0x08026774: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026ad4
         w8 = w8 | 2
         jmp 0x8026b40

    loc_0x08026800: // orphan
         jmp 0x8026b48

    loc_0x08026814: // orphan
         w8 = 0x1d
         w9 = w20 & 0x1f
         if (w20 == 0)
         ubfx w10,w20,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w11,w20,0xa, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w12,w20,0x10, 5     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0xc] = w8
         w8 = 0x40                // '@'
         [x19 + 0x18] = (byte) w9
         w9 = 0x20
         csel w8,w9,w8, ge
         [x19 + 0x19] = (byte) w10
         [x19 + 0x1b] = (byte) w11
         [x19 + 0x1a] = (byte) w12
         [x19 + 0x1f] = (byte) w8
         tbnz w20,0x1f,0x80269dc  // unlikely

    loc_0x08026854: // orphan
         tbnz w20,0xb,0x8026888   // unlikely

    loc_0x08026858: // orphan
         jmp 0x80269ec

    loc_0x08026888: // orphan
         // XREFS: CODE 0x08026750  CODE 0x08026854  CODE 0x080269e8  
         // XREFS: CODE 0x08026b00  CODE 0x08026b64  CODE 0x08026bb4  
         // XREFS: CODE 0x08026ca4  CODE 0x08026d00  CODE 0x08026d8c  
         w0 = 0x3
         jmp 0x8026b48

    loc_0x08026890: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x80267fc, 0x8026884
         tbz w20,0x1d,0x80268a0   // likely

    loc_0x08026894: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x14] = w8

    loc_0x080268a0: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026890
         tbnz w20,0x1e,0x8026b38  // unlikely

    loc_0x080268a4: // orphan
         // XREFS: CODE 0x0802676c  CODE 0x08026b34  CODE 0x08026ca0  
         // XREFS: CODE 0x08026cfc  CODE 0x08026d88  CODE 0x08026dd0  
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8026b48

    loc_0x080268bc: // orphan
         w8 = 0x1e
         w9 = w20 & 0x1f
         if (w20 == 0)
         ubfx w10,w20,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w11,w20,0xa, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w12,w20,0x10, 5     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0xc] = w8
         w8 = 0x40                // '@'
         [x19 + 0x18] = (byte) w9
         w9 = 0x20
         csel w8,w9,w8, ge
         [x19 + 0x19] = (byte) w10
         [x19 + 0x1b] = (byte) w11
         [x19 + 0x1a] = (byte) w12
         [x19 + 0x1f] = (byte) w8
         tbz w20,0x1f,0x8026908   // likely

    loc_0x080268fc: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8

    loc_0x08026908: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x80268f8
         ubfx w8,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x1
         w10 = w8 - 2
         if (w10 == 0x19)
         b.hi 0x8026b48           // likely

    loc_0x0802691c: // orphan
         x11 = 0x8026000
         w9 = 0x22                // '\"'
         x11 = x11 + 0
         w8 = 0x1c
         x12 = 0x802693c
         w13 = (byte) [x11 + x10] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2
         br x12

    loc_0x08026958: // orphan
         w9 = w20 & 0x1f
         ubfx w10,w20,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w20 == 0)
         w12 = 0x40               // '@'
         w13 = 0x20
         ubfx w8,w20,0xa, 5       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w11,w20,0x10, 5     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x18] = (byte) w9
         [x19 + 0x19] = (byte) w10
         csel w9,w13,w12, ge
         ubfx w10,w20,0x15, 3     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x1b] = (byte) w8
         [x19 + 0x1a] = (byte) w11
         [x19 + 0x1f] = (byte) w9
         tbz w20,0x1f,0x80269a0   // likely

    loc_0x08026994: // orphan
         w9 = [x19 + 0x14]        // 0xda // 218
         w9 = w9 | 1
         [x19 + 0x14] = w9

    loc_0x080269a0: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026990
         w0 = 0x3
         if (w10 == 6)
         b.hi 0x8026b48           // unlikely

    loc_0x080269ac: // orphan
         x11 = 0x8026000
         ubfx w9,w20,0xf, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x11 + 0
         x12 = 0x80269c8
         w13 = (byte) [x11 + x10] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2
         br x12

    loc_0x080269dc: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026850
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8
         tbnz w20,0xb,0x8026888   // unlikely

    loc_0x080269ec: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026858
         w8 = w20 >> 0x1c
         ubfx w9,w20,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 & 2
         bfxil w8,w20,0xa, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x3c] = (byte) w9
         if !w8 jmp 0x8026a54     // likely

    loc_0x08026a04: // orphan
         if (w8 == 1)
         b.ne 0x8026a5c           // likely

    loc_0x08026a0c: // orphan
         w8 = 0x13
         jmp 0x8026a68

    loc_0x08026a28: // orphan
         w8 = 0x21                // '!'
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19 + 0xc] = w8
         0x8026a38 ()             // 0x8026a38(0x0, 0x0, 0x0, 0x0)
         ubfx w8,w20,0x1d, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x8026b0c     // likely

    loc_0x08026a44: // orphan
         if (w8 == 1)
         b.ne 0x8026b14           // likely

    loc_0x08026a4c: // orphan
         w8 = 0x17
         jmp 0x8026b20

    loc_0x08026a54: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026a00
         w8 = 0x12
         jmp 0x8026a68

    loc_0x08026a5c: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026a08
         if (w8 == 2)
         w8 = 0x14
         cinc w8,w8,ne

    loc_0x08026a68: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x8026a10, 0x8026a58
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x10] = w8
         jmp 0x8026b48

    loc_0x08026a8c: // orphan
         w8 = 0x22                // '\"'
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19 + 0xc] = w8         // "!"
         0x8026a9c ()             // 0x8026a9c(0x0, 0x0, 0x0, 0x0)
         if ((w20 & 0x40000000) == 0)
         w8 = 0x1a
         ubfx w9,w20,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         cinc w8,w8,eq
         w10 = w20 & 0xf
         [x19 + 0x3c] = (byte) w9
         [x19 + 0x10] = w8
         [x19 + 0x3d] = (byte) w10
         tbz w20,0xb,0x8026770    // likely

    loc_0x08026ac4: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w9 = (byte) [x19 + 0x1a] // 0xda // 218
         w8 = w8 | 0x2000
         [x19 + 0x20] = x9
         jmp 0x8026774

    loc_0x08026ae8: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x8026af0 ()             // 0x8026af0(0x0, 0x0, 0x0, 0x0)
         tbz w20,0xd,0x8026b04    // likely

    loc_0x08026af8: // orphan
         w8 = (byte) [x19 + 0x19] // 0xda // 218
         if (w8 == 0x1f)
         b.ne 0x8026888           // likely

    loc_0x08026b04: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x8026af4, 0x8026d30
         w0 = 0x1
         jmp 0x8026b48

    loc_0x08026b0c: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026a40
         w8 = 0x16
         jmp 0x8026b20

    loc_0x08026b14: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026a48
         if (w8 == 2)
         w8 = 0x18
         cinc w8,w8,ne

    loc_0x08026b20: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x8026a50, 0x8026b10
         [x19 + 0x10] = w8
         tbz w20,0x1d,0x8026b34   // likely

    loc_0x08026b28: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x14] = w8

    loc_0x08026b34: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026b24
         tbz w20,0x1e,0x80268a4   // likely

    loc_0x08026b38: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x80268a0
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 4

    loc_0x08026b40: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8026778
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x14] = w8

    loc_0x08026c10: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x8026c18 ()             // " " // 0x8026c18(0x0, 0x0, 0x0, 0x0)
         w0 = 0x1
         jmp 0x8026b48

    loc_0x08026d14: // orphan
         w8 = 0x23                // '#'
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19 + 0xc] = w8         // "\""
         0x8026d24 ()             // 0x8026d24(0x0, 0x0, 0x0, 0x0)
         ubfx w9,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 8)
         b.hi 0x8026b04           // unlikely

    loc_0x08026d34: // orphan
         x10 = 0x8026000
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x8026934, 0x8026938
         w8 = 0x32                // '2'
         x10 = x10 + 0
         x11 = 0x8026d50
         w12 = (byte) [x10 + x9]  // 0xd0000000d1 // 893353197777
         x11 = x11 + x12,lsl 2
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x80269c0, 0x80269c4
         br x11

}

/* ===== 0x08026074 ===== */
int sym.arm64_decode_data_processing_immediate (int esi, int edx) {
    loc_0x8026074:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = 0x1
        w9 = w0 & 0x1f000000 // arg1
        w10 = 0x1000
        if (w9 == w10)
        [x1 + 8] = w8 // arg2
        b.ne 0x80260f8 // likely
            
    loc_0x80260f8:
        // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x80260a4
        w8 = w20 & 0x1f800000
        w9 = 0x1100
        if (w8 == w9)
        b.ne 0x8026184 // likely
            
    loc_0x8026184:
        // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8026104
        w9 = w20 & 0x7ff00000
        w10 = 0x11c0  // '\xc0\x11'
        if (w9 == w10)
        b.ne 0x8026230 // likely
            
    loc_0x8026230:
        // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8026190
        w9 = 0x1200
        if (w8 == w9)
        b.ne 0x80262d8 // likely
            
    loc_0x80262d8:
        // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8026238
        w9 = w20 & 0x7f800000
        w10 = 0x1300
        if (w9 == w10)
        b.eq 0x8026300 // unlikely
            
    loc_0x8026300:
        // CODE XREFS from sym.arm64_decode_data_processing_immediate @ 0x80262e4, 0x80262f0
        w8 = 0x17
        w9 = w20 & 0x1f
        if (w20 == 0)
        ubfx w10,w20,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w11,w20,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w12,w20,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0xc] = w8 // "#"
        w8 = 0x40     // '@'
        [x19 + 0x18] = (byte) w9
        w9 = 0x20
        csel w3,w9,w8, ge
        [x19 + 0x19] = (byte) w10
        [x19 + 0x1b] = (byte) w11
        [x19 + 0x1a] = (byte) w12
        [x19 + 0x1f] = (byte) w3 // arg4 // " "
        tbz w20,0x1f,0x802634c // likely
            
    loc_0x802634c:
        // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x802633c
        ubfx w0,w20,0x1d, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !w0 jmp 0x80263f8 // likely
            
    loc_0x80263f8:
        // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8026350
        w8 = 0x7
         // do {
    loc_0x80263fc:
        // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8026368
        if (w20 == 0)
        ubfx w0,w20,0x16, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w1,w20,0x10, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = w20 & 0x400000
        [x19 + 0x10] = w8
        cset w8,ge
        if (w8 == w9)
        [x19 + 0x3a] = (byte) w0
        [x19 + 0x3b] = (byte) w1
        b.eq 0x802645c // unlikely
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
    loc_0x08026154: // orphan
             w8 = [x19 + 0x14]        // 0xda // 218
             w8 = w8 | 1
             [x19 + 0x14] = w8

    loc_0x08026160: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8026150
         sbfx w9,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w20,0xa, 0xc     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9 & 0xc
         [x19 + 0x20] = x8
         [x19 + 0x39] = (byte) w9
         tbnz w20,0x16,0x8026200  // unlikely

    loc_0x08026178: // orphan
         tbnz w20,0x1d,0x802620c  // unlikely

    loc_0x0802617c: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8026208
         tbnz w20,0x1e,0x802621c  // unlikely

    loc_0x08026180: // orphan
         jmp 0x80262d0

    loc_0x080261d4: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8

    loc_0x080261e0: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x80261d0
         ubfx w9,w20,0xa, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w20,0x12, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x20] = x9
         if !w8 jmp 0x802636c     // likely

    loc_0x080261f0: // orphan
         if (w8 == 1)
         b.ne 0x8026374           // likely

    loc_0x080261f8: // orphan
         w8 = 0x10
         jmp 0x8026384

    loc_0x08026200: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8026174
         x8 = x8 << 0xc
         [x19 + 0x20] = x8
         tbz w20,0x1d,0x802617c   // likely

    loc_0x0802620c: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8026178
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x14] = w8
         tbz w20,0x1e,0x80262d0   // likely

    loc_0x0802621c: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x802617c
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 4

    loc_0x08026224: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x80262cc
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x14] = w8
         jmp 0x8026460

    loc_0x08026288: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8

    loc_0x08026294: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8026284
         ubfx w0,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w1,w20,0x10, 6      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x19 + 0x20
         x6 = x19 + 0x30
         w4 = 0x1
         [x19 + 0x3a] = (byte) w0
         [x19 + 0x3b] = (byte) w1
         0x80262b0 ()             // "@\r" // 0x80262b0(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x802645c     // likely

    loc_0x080262b8: // orphan
         w8 = ~w20
         if ((w8 & 0x60000000) == 0)
         b.ne 0x80262d0           // likely

    loc_0x080262c4: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 2
         jmp 0x8026224

    loc_0x080262d0: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_immediate @ 0x8026180, 0x8026218, 0x80262c0
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8026460

    loc_0x080262f4: // orphan
         w10 = 0x3300
         if (w9 == w10)
         b.ne 0x8026390           // likely

    loc_0x0802635c: // orphan
         if (w0 == 1)
         w8 = 0x8
         cinc w8,w8,ne
         jmp 0x80263fc

    loc_0x0802636c: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x80261ec
         w8 = 0xe
         jmp 0x8026384

    loc_0x08026374: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x80261f4
         if (w8 == 2)
         w8 = 0x11
         w9 = 0xf
         csel w8,w9,w8, eq

    loc_0x08026384: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_immediate @ 0x80261fc, 0x8026370
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x10] = w8
         jmp 0x8026460

    loc_0x08026390: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x80262fc
         w9 = 0x7fa0              // '\xa0\x7f'
         w10 = 0x1380             // '\x80\x13'
         w9 = w20 & w9
         if (w9 == w10)
         b.ne 0x8026474           // likely

    loc_0x080263a4: // orphan
         x8 = 0x18
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = 0xa
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19 = x8
         0x80263b8 ()             // 0x80263b8(0x0, 0x0, 0x0, 0x0)
         w8 = (byte) [x19 + 0x1f] // 0xda // 218
         ubfx w10,w20,0xa, 6      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w20 & 0x400000
         ubfx w9,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == 0x40)
         [x19 + 0x39] = (byte) w10
         cset w12,ne
         if (w10 == w8)
         w8 = w12 ^ w11,lsr 22
         cset w11,lo
         if ((w11 & w8) == 0)
         w8 = 0x3
         csel w0,wzr,w8, ne
         [x19 + 0x3a] = (byte) w9
         jmp 0x8026460

    loc_0x08026424: // orphan
         tbnz w20,0x1f,0x8026438  // unlikely

    loc_0x08026428: // orphan
         w8 = w20 >> 0xa
         w9 = w20 >> 0x10
         w8 = w9 | w8
         tbnz w8,5,0x802645c      // unlikely

    loc_0x08026438: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8026424
         ubfx w2,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x19 + 0x28
         x6 = x19 + 0x30
         w4 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8026448 ()             // "h" // 0x8026448(0x0, 0x0, 0x0, 0x0)
         w8 = 0x3
         if (w0 == 0)
         csel w0,w8,wzr, eq
         jmp 0x8026460

    loc_0x0802645c: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_immediate @ 0x80262b4, 0x8026420, 0x8026434
         w0 = 0x3

    loc_0x08026460: // orphan
         // XREFS: CODE 0x080260f4  CODE 0x0802622c  CODE 0x080262d4  
         // XREFS: CODE 0x08026358  CODE 0x0802638c  CODE 0x080263f4  
         // XREFS: CODE 0x08026458  CODE 0x080264a4  CODE 0x080264c0  
         // XREFS: CODE 0x080264f0  
         (x20, 2) = 3
         (x29, 2) = 3
         x30 = [x18 - 8]!         // 0xd9 // 217
         hint 0x1d
         

    loc_0x08026474: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x80263a0
         w9 = 0x1280              // '\x80\x12'
         if (w8 == w9)
         b.ne 0x80264b8           // likely

    loc_0x08026480: // orphan
         w8 = 0x19
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19 + 0xc] = w8
         0x8026490 ()             // 0x8026490(0x0, 0x0, 0x0, 0x0)
         ubfx w8,w20,0x1d, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x3
         if !w8 jmp 0x80264c4     // likely

    loc_0x080264a0: // orphan
         if (w8 == 1)
         b.eq 0x8026460           // unlikely

    loc_0x080264a8: // orphan
         if (w8 == 2)
         w8 = 0xc
         cinc w8,w8,ne
         jmp 0x80264c8

    loc_0x080264b8: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x802647c
         w0 = 0x1
         [x19 + 0xc] = wzr
         jmp 0x8026460

    loc_0x080264c4: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x802649c
         w8 = 0xb

    loc_0x080264c8: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x80264b4
         w9 = (byte) [x19 + 0x1f] // 0xda // 218
         w10 = w20 >> 0x11
         w10 = w10 & 0x30
         [x19 + 0x10] = w8        // U"\n\x01"
         if (w9 == 0x20)
         ubfx w9,w20,5, 0x10      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ccmp w10,0x1f,0, eq
         [x19 + 0x39] = (byte) w10
         [x19 + 0x20] = x9
         csel w0,w0,wzr, hi
         jmp 0x8026460

}

/* ===== 0x08027284 ===== */
int sym.arm64_decode_ldst (int esi, int edx) {
    loc_0x8027284:
        hint 0x19
        ubfx w9,w0,0x18, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = 0x3
        w9 = w9 - 8
        if (w9 == 0x35)
        b.hi 0x8027a6c // likely
            
    loc_0x8027a6c:
        // XREFS: CODE 0x08027298  CODE 0x08027320  CODE 0x080273ac
        // XREFS: CODE 0x080274b8  CODE 0x080274bc  CODE 0x080274f8
        // XREFS: CODE 0x08027500  CODE 0x0802750c  CODE 0x08027598
        // XREFS: CODE 0x08027778  CODE 0x0802778c  CODE 0x080277d4
        // XREFS: CODE 0x08027818  CODE 0x080278b8
        bti j
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        hint 0x1d
        0x08027a78
         // } else {
    loc_0x802729c:
        x10 = 0x8027000
        x10 = x10 + 0
        x11 = 0x80272b4
        w12 = (word) [x10 + x9,lsl 1] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12,lsl 2
        br x11
        }
        return eax;
}

/* ===== 0x08027d84 ===== */
int sym.arm64_decode_simd (int esi, int edx) {
    loc_0x8027d84:
        hint 0x19
        x8 = 0x5
        w10 = w0 & 0x1f // arg1
        x8 = 0x2f     // '/'
        w9 = 0x20
        w12 = 0x800
        ubfx w13,w0,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w12 = 0x1e20  // ' \x1e'
        [x1 + 0x18] = (byte) w10 // arg2
        [x1 + 8] = x8 // arg2
        w8 = 0x1fe0   // '\xe0\x1f'
        ubfx w11,w0,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        ubfx w10,w0,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = 0xff20   // ' \xff'
        [x1 + 0x14] = w9 // arg2
        w8 = w0 & w8  // arg1
        w9 = w12 + 0x800
        if (w8 == w9)
        [x1 + 0x1b] = (byte) w13 // arg2
        [x1 + 0x19] = (byte) w11 // arg2
        [x1 + 0x1a] = (byte) w10 // arg2
        b.ne 0x8027e44 // likely
            
    loc_0x8027e44:
        w8 = 0xc00
        w13 = 0x400
        w8 = 0x9ff8   // '\xf8\x9f'
        w13 = 0xf00
        w9 = w0 & w8  // arg1
        if (w9 == w13)
        b.ne 0x8027ecc // likely
            
    loc_0x8027ecc:
        w9 = 0x7c00
        w11 = 0x8000
        w9 = 0xff20   // ' \xff'
        w11 = 0xc0    // '\xc0'
        w14 = 0x400
        w11 = w9 | w11
        w14 = 0x5e00
        w11 = w0 & w11 // arg1
        if (w11 == w14)
        b.ne 0x8027fe8 // likely
            
    loc_0x8027fe8:
        w16 = 0x800
        w11 = 0x8400
        w16 = 0xe00
        w11 = 0x9fe0  // '\xe0\x9f'
        w11 = w0 & w11 // arg1
        w13 = w16 - 0x400
        // XREFS(26)
        if (w11 == w13)
        b.ne 0x802808c // likely
            
    loc_0x802808c:
        w11 = 0xfc00
        w11 = 0xbf01
        w10 = w11 + 0x1e9,lsl 12
        w10 = w0 & w10 // arg1
        if (w10 == w16)
        b.ne 0x8028118 // unlikely
            
    loc_0x8028118:
        w15 = 0xe400
        w10 = 0xc400
        w15 = 0xbf20  // ' \xbf'
        w10 = 0x2e00
        w13 = w0 & w15 // arg1
        if (w13 == w10)
        b.eq 0x80282f0 // unlikely
            
    loc_0x80282f0:
        ubfx w9,w0,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w13 == w10)
        b.ne 0x8028498 // unlikely
            
    loc_0x8028498:
        if ((w0 & 0x1000) == 0) // arg1
        w8 = 0x3
        csinc w8,w8,wzr, ne
        w10 = 0x30    // '0'
         // do {
    loc_0x80284a8:
        // CODE XREF from sym.arm64_decode_simd @ 0x8028304
        [x1 + 0x24] = w10 // arg2
        [x1 + 0x3d] = (byte) w8 // arg2
        if !w9 jmp 0x8028558 // likely
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
        goto loc_0x8027ddc
    loc_0x8027de8:
        if (w9 == 1)
        b.eq 0x8027f38 // unlikely
            
    loc_0x8027f38:
        sbfx w9,w0,0x13, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        ubfx w11,w0,0x13, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x10 = 0x1
        [x1 + 0x3d] = (byte) w8 // arg2
        w8 = w11 << 0xa
        x10 = 0xb
        w8 = w8 ^ 0x400
        w12 = 0x40    // '@'
        bfxil w8,w9,0, 0xa // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w9,w0,0xd, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        bfxil w8,w0,0x11, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x20] = x10 // arg2
        x10 = x8 << 0x34
        ubfx w8,w0,0xd, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = x8 << 0x30
        w11 = 0x3f    // '?'
        jmp 0x8027fc4
         // do {
    loc_0x8027fc4:
        // CODE XREFS from sym.arm64_decode_simd @ 0x8027e40, 0x8027f78
        w9 = w9 >> 7
        [x1 + 0x1f] = (byte) w12 // arg2
        x9 = x9 << x11
        [x1 + 0x3e] = (byte) w12 // arg2
        x8 = x9 | x8
        x9 = x8 | x10
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x30] = x9 // arg2
        jmp 0x802855c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8027df0
    loc_0x8027df8:
        w9 = 0x1
        x10 = 0x1
        w9 &= w9      // arg1
        w11 = 0xc     // "/"
        w9 = w9 << 4
        x10 = 0xb
        csel x11,xzr,x11, eq // "/"
        w9 = w9 ^ 0x10
        x9 = x11 | x9
        ubfx w11,w0,0x11, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x11 = x9 | x11
        [x1 + 0x3d] = (byte) w8 // arg2
        w12 = 0x10
        ubfx w9,w0,0xd, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x20] = x10 // arg2
        x10 = x11 << 0xa
        ubfiz w8,w8,6, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w11 = 0xf
        jmp 0x8027fc4
    loc_0x08027e8c: // orphan
             x16 = 0x8027000
             ubfx x15,x0,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             x16 = x16 + 0
             x11 = xzr | 0xff000000ff
             x13 = xzr | 0x10000000100
             x14 = xzr | 0x1000100010001
             w10 = 0x20
             x12 = xzr | 0x100000001
             x17 = 0x8027ebc
             w2 = (byte) [x16 + x15]  // 0xd6000000d7 // 919123001559
             x17 = x17 + x2,lsl 2     // 0x8027ec4
                                      // fcn.08027ec4
             br x17                   // fcn.08027ec4

    loc_0x08027ef8: // orphan
         rbit w8,w10
         clz w9,w8
         if (w9 == 3)
         b.hi 0x8028558           // likely

    loc_0x08027f08: // orphan
         w11 = w9 + 1
         x12 = 0x17
         w13 = 0x8
         x12 = 0x3d               // '='
         w9 = w13 << w9
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = w10 >> w11
         [x1 + 0x20] = x12        // arg2
         [x1 + 0x3e] = (byte) w9  // arg2
         [x1 + 0x40] = (byte) w10 // arg2
         [x1 + 0x1f] = (byte) w9  // arg2
         jmp 0x802855c

    loc_0x08027f7c: // orphan
         [x1 + 0x3d] = (byte) w8  // arg2
         w8 = 0x1
         w8 &= w8                 // arg1
         x10 = 0x1
         w8 = w8 << 7
         w9 = 0x7c                // '|'
         x10 = 0xb
         w8 = w8 ^ 0x80
         csel x9,xzr,x9, eq
         ubfx w11,w0,0x11, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x8 = x9 | x8
         ubfx w9,w0,0xd, 8        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x8 = x8 | x11
         w12 = 0x20
         [x1 + 0x20] = x10        // arg2
         x10 = x8 << 0x17
         ubfiz w8,w9,0x13, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = 0x1f

    loc_0x0802800c: // orphan
         rbit w8,w10
         clz w12,w8
         if (w12 == 3)
         b.hi 0x8028558           // likely

    loc_0x0802801c: // orphan
         w9 = 0x8
         w8 = 0xc                 // "/"
         w13 = w9 << w12
         w9 = w0 >> 0x1e          // arg1
         w11 = w13 & 0xf8
         [x1 + 0x20] = w8         // arg2
         [x1 + 0x3e] = (byte) w13 // arg2
         if w9 jmp 0x8028044      // unlikely

    loc_0x0802803c: // orphan
         if (w11 == 0x40)
         b.eq 0x8028558           // unlikely

    loc_0x08028044: // orphan
         w8 = w12 + 1
         w8 = w10 >> w8
         ubfx w10,w0,0xb, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x40] = (byte) w8  // arg2
         tbnz w0,0x1d,0x8028554   // unlikely

    loc_0x08028058: // orphan
         w8 = 0x3
         if (w10 == 7)
         b.hi 0x802855c           // unlikely

    loc_0x08028064: // orphan
         x12 = 0x8028000
         x12 = x12 + 0
         x13 = 0x802807c
         w14 = (word) [x12 + x10,lsl 1] // 0xd1000000d3 // 897648165075
         x13 = x13 + x14,lsl 2
         br x13

    loc_0x080280b8: // orphan
         w9 = 0x77                // 'w'
         w9 = w9 >> w8
         tbz w9,0,0x8028558       // unlikely

    loc_0x080280c4: // orphan
         x9 = 0x8028000
         w10 = w0 >> 0x1e         // arg1
         x9 = x9 + 0
         w8 = [x9 + x8,lsl 2]     // 0xcf000000d0 // 889058230480
         ubfx w9,w0,0x16, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x24] = w8         // arg2
         if w10 jmp 0x80280e8     // unlikely

    loc_0x080280e0: // orphan
         if (w9 == 3)
         b.eq 0x8028558           // unlikely

    loc_0x080280e8: // orphan
         if (w10 == 0)
         w10 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         w11 = 0xe
         csel w10,w12,w10, eq
         w12 = 0x8
         w9 = w12 << w9
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = w11        // arg2
         [x1 + 0x1f] = (byte) w10 // arg2
         [x1 + 0x3e] = (byte) w9  // arg2
         jmp 0x802855c

    loc_0x08028148: // orphan
         w15 = 0x400
         w13 = 0x7c00
         w15 = 0x9f20             // ' \x9f'
         w13 = w16 + w13
         w10 = w15 | 0x8000
         w10 = w0 & w10           // arg1
         if (w10 == w13)
         b.ne 0x8028350           // likely

    loc_0x08028168: // orphan
         w17 = w0 >> 0x18         // arg1
         w13 = w0 >> 0x1e         // arg1
         w17 = w17 & 0x20
         w10 = ~0x7f              // '\x7f'
         if (w13 == 0)
         w2 = 0x40                // '@'
         bfxil w17,w0,0xb, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         csel w10,w2,w10, eq
         w2 = w17 - 0x12
         if (w2 == 0x2d)
         [x1 + 0x1f] = (byte) w10 // arg2
         b.hi 0x8028350           // likely

    loc_0x08028198: // orphan
         x3 = 0x8028000
         ubfx w10,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x3 = x3 + 0
         x4 = 0x80281b4
         w5 = (word) [x3 + x2,lsl 1] // 0xc9000000ca // 863288426698
         x4 = x4 + x5,lsl 2
         br x4

    loc_0x080282a8: // orphan
         // CODE XREFS from fcn.08027ec4 @ 0x8028258, 0x8028268
         // CODE XREF from sym.arm64_decode_simd @ 0x8028550
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x080282ac: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8028c84, 0x802942c, 0x8029f50
         [x1 + 0x24] = w9         // arg2
         jmp 0x802855c

    loc_0x08028308: // orphan
         ubfx w12,w0,0x11, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbnz w8,0,0x80284f4      // unlikely

    loc_0x08028310: // orphan
         w10 = w12 << 7
         if (w12 == 0)
         w12 = 0x7c               // '|'
         w10 = w10 ^ 0x80
         csel x12,xzr,x12, eq
         ubfiz w11,w11,0x13, 4    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x12 | x10
         ubfx w12,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = (char) w9
         x10 = x10 | x12
         x9 = x9 & 0x80000000
         x9 = x9 | x11
         x9 = x9 | x10,lsl 23
         w10 = 0x20
         x9 = x9 | x9,lsl 32
         jmp 0x8028528

    loc_0x08028350: // orphan
         bti j
         w10 = w15 + 0x40c,lsl 12
         w13 = wzr | 0x3ffc00     // arg1
         w10 = w0 & w10           // arg1
         w13 = w16 + w13
         if (w10 == w13)
         b.eq 0x802856c           // unlikely

    loc_0x0802836c: // orphan
         w17 = wzr | 0x1ffc00     // arg1
         w15 = w0 & w15           // arg1
         w17 = w16 + w17
         if (w15 == w17)
         b.eq 0x802856c           // unlikely

    loc_0x08028380: // orphan
         w10 = 0x400
         w13 = 0x8000
         w10 = 0xdf00
         w13 = 0x20
         w13 = w10 | w13
         w15 = w14 + 8,lsl 12
         w13 = w0 & w13           // arg1
         if (w13 == w15)
         b.ne 0x8028670           // likely

    loc_0x080283a4: // orphan
         w8 = 0x3
         w9 = w0 & 0xf000         // arg1
         if (w9 == 8)
         b.ne 0x802855c           // likely

    loc_0x080283b4: // orphan
         ubfx w9,w0,0x16, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w9 == 3)
         b.eq 0x802855c           // unlikely

    loc_0x080283c0: // orphan
         tbz w0,0x1d,0x802855c    // likely

    loc_0x080283c4: // orphan
         if !w9 jmp 0x802855c     // likely

    loc_0x080283c8: // orphan
         if ((w0 & 0x800) == 0)   // arg1
         w11 = 0x7e               // '~'
         w12 = 0x8
         w10 = 0x1b
         cinc w11,w11,ne
         w9 = w12 << w9
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 0x20] = (w10,2)     // arg2
         [x1 + 0x3e] = (byte) w9  // arg2
         [x1 + 0x1f] = (byte) w9  // arg2
         jmp 0x802855c

    loc_0x080284b4: // orphan
         w10 = w0 >> 0x1e         // arg1
         if w10 jmp 0x80284c4     // unlikely

    loc_0x080284bc: // orphan
         if (w9 == 3)
         b.eq 0x8028558           // unlikely

    loc_0x080284c4: // orphan
         w12 = 0x8
         if (w10 == 0)
         w9 = w12 << w9
         w10 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         w11 = 0x14               // " "
         csel w10,w12,w10, eq
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3e] = (byte) w9  // arg2
         [x1 + 0x20] = w11        // arg2
         [x1 + 0x1f] = (byte) w10 // arg2
         jmp 0x802855c

    loc_0x080284f4: // orphan
         w11 = w12 << 0xa
         if (w12 == 0)
         w12 = 0x3fc
         w11 = w11 ^ 0x400
         csel w12,wzr,w12, eq
         w10 = w10 >> 7
         w11 = w12 | w11
         ubfx w12,w0,5, 4         // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfxil w11,w9,4, 2        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x12 << 0x30
         bfi x9,x10,0x3f, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = 0x40               // '@'
         x9 = x9 | x11,lsl 52

    loc_0x08028528: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802834c
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         [x1 + 0x30] = x9         // arg2
         csel w11,w12,w11, eq
         [x1 + 0x3e] = (byte) w10 // arg2
         [x1 + 0x1f] = (byte) w11 // arg2
         tbnz w0,0x1e,0x802854c   // unlikely

    loc_0x08028548: // orphan
         tbnz w8,0,0x8028558      // unlikely

    loc_0x0802854c: // orphan
         w9 = 0xb
         jmp 0x80282a8

    loc_0x08028554: // orphan
         if w9 jmp 0x80285bc      // unlikely

    loc_0x08028558: // orphan
         w8 = 0x3

    loc_0x0802855c: // orphan
         // XREFS(40)
         bti j
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         hint 0x1d
         

    loc_0x0802856c: // orphan
         w9 = w0 >> 0x1e          // arg1
         w11 = ~0x7f              // '\x7f'
         if (w9 == 0)
         w12 = 0x40               // '@'
         ubfx w8,w0,0x1d, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         csel w14,w12,w11, eq
         ubfx w11,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w12,w0,0xb, 5       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w10 == w13)
         [x1 + 0x1f] = (byte) w14 // arg2
         b.eq 0x80285dc           // likely

    loc_0x08028598: // orphan
         if (w12 == 3)
         b.ne 0x80285dc           // likely

    loc_0x080285a0: // orphan
         w9 = 0xf
         bfi w11,w8,2, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w11 == 7)
         [x1 + 0x20] = w9         // arg2
         b.ne 0x8028798           // likely

    loc_0x080285b4: // orphan
         w9 = 0x4d                // 'M'
         jmp 0x80287a4

    loc_0x080285bc: // orphan
         w9 = 0x3f                // '?'
         w10 = w10 >> w12
         w11 = 0x80               // '\x80'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x24] = w9         // arg2
         [x1 + 0x41] = (byte) w10 // arg2
         [x1 + 0x1f] = (byte) w11 // arg2
         jmp 0x802855c

    loc_0x080285dc: // orphan
         if (w10 == w13)
         b.eq 0x8028770           // likely

    loc_0x080285e4: // orphan
         if (w12 == 0x17)
         b.hi 0x8028770           // unlikely

    loc_0x080285ec: // orphan
         bfi w12,w8,5, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w12 == 0x36)
         b.hi 0x8028558           // unlikely

    loc_0x080285f8: // orphan
         w8 = w12                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = xzr | 0xfff7fff7fff7fff7
         x10 = 0xff               // '\xff'
         x10 = 0x7f               // '\x7f'
         x8 = x10 >> x8
         tbz w8,0,0x8028558       // unlikely

    loc_0x08028610: // orphan
         if (w9 == 0)
         cset w8,eq
         if (w11 == 3)
         cset w9,eq
         w9 = w8 & w9
         w8 = 0x3
         tbnz w9,0,0x802855c      // unlikely

    loc_0x0802862c: // orphan
         x9 = 0x8028000
         w10 = 0x1
         x9 = x9 + 0
         w10 = w10 << w11
         w9 = [x9 + x12,lsl 2]    // 0xd3000000d0 // 906238099664
         w9 = w9 & w10
         if !w9 jmp 0x802855c     // unlikely

    loc_0x08028648: // orphan
         x10 = 0x8028000
         w9 = 0x10
         x10 = x10 + 0
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = [x10 + x12,lsl 2]  // 0xd3000000d1 // 906238099665
         w12 = 0x8
         w11 = w12 << w11
         [x1, 0x20] = (w9,2)      // arg2
         [x1 + 0x3e] = (byte) w11 // arg2
         jmp 0x802855c

    loc_0x08028670: // orphan
         w13 = 0xc000
         w15 = 0x400
         // CODE XREFS from sym.arm64_decode_simd @ 0x8028074, 0x8028078
         w13 = 0x60               // '`'
         w15 = 0x5e40             // '@^'
         w13 = w10 | w13
         w13 = w0 & w13           // arg1
         if (w13 == w15)
         b.eq 0x80287b8           // unlikely

    loc_0x08028690: // orphan
         w17 = w10 + 0x200,lsl 12
         w14 = w14 + 0x200,lsl 12
         w17 = w0 & w17           // arg1
         if (w17 == w14)
         b.eq 0x80287b8           // unlikely

    loc_0x080286a4: // orphan
         w10 = w0 & w10           // arg1
         w13 = 0xf00
         if (w10 == w13)
         b.eq 0x80286cc           // unlikely

    loc_0x080286b4: // orphan
         w13 = 0x5f00
         if (w10 == w13)
         b.eq 0x80286cc           // unlikely

    loc_0x080286c0: // orphan
         w13 = 0x4f00
         if (w10 == w13)
         b.ne 0x8029188           // likely

    loc_0x080286cc: // orphan
         ubfx w15,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w2,w0,0xc, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w4 = w0 >> 0x1d          // arg1
         ubfx w14,w0,0xb, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w13,w0,0x15, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w10,w0,0x14, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbz w4,0,0x8028970       // likely

    loc_0x080286e8: // orphan
         ubfx w17,w0,0xc, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w3 = 0xd
         bics wzr,w3,w17          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x8028970           // likely

    loc_0x080286f8: // orphan
         w8 = w15 - 3
         if (w8 != 2)
         b.lo 0x8028558           // unlikely

    loc_0x08028704: // orphan
         if (w2 == 0xd)
         w8 = 0x7e                // '~'
         w9 = 0x1
         cinc w8,w8,ne
         if ((w9 & w0) == 0)
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         csel w11,w12,w11, eq
         w12 = 0x8
         if ((w9 & w0) == 0)
         w9 = 0x1c
         w12 = w12 << w15
         cinc w9,w9,ne
         csel w11,w11,w12, eq
         if (w15 == 1)
         [x1, 0x20] = (w9,2)      // arg2
         [x1 + 0x3e] = (byte) w12 // arg2
         [x1 + 0x1f] = (byte) w11 // arg2
         b.ne 0x8028dd8           // likely

    loc_0x08028750: // orphan
         w9 = w13 << 1
         ubfx w11,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w9,w14,2, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = w9 | w10
         [x1 + 0x1a] = (byte) w11 // arg2
         [x1 + 0x40] = (byte) w9  // arg2
         jmp 0x802855c

    loc_0x08028770: // orphan
         if (w10 == w13)
         b.eq 0x8028b28           // likely

    loc_0x08028778: // orphan
         tbnz w0,0x16,0x8028b28   // unlikely

    loc_0x0802877c: // orphan
         if (w12 == 0x1d)
         b.ne 0x8028aec           // likely

    loc_0x08028784: // orphan
         if w8 jmp 0x8028aec      // unlikely

    loc_0x08028788: // orphan
         if (w11 == 2)
         w8 = 0x12
         cinc w9,w8,hs
         jmp 0x8028b10

    loc_0x08028798: // orphan
         x8 = 0x8028000
         x8 = x8 + 0
         w9 = [x8 + w11,uxtw 2]   // 0xb3000000cf // 768799146191

    loc_0x080287a4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80285b8
         w10 = 0x8
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x24] = w9         // arg2
         [x1 + 0x3e] = (byte) w10 // arg2
         jmp 0x802855c

    loc_0x080287b8: // orphan
         ubfx w8,w0,0x1d, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w13 == w15)
         b.ne 0x80289d8           // unlikely

    loc_0x080287c4: // orphan
         w9 = w0 >> 0x12          // arg1
         w9 = w9 & 0x20
         bfxil w9,w0,0xb, 3       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w9,w8,6, 1           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x3
         w10 = w9 - 0x44
         if (w10 == 0x21)
         b.hi 0x8028b7c           // likely

    loc_0x080287e4: // orphan
         x9 = 0x8028000
         x9 = x9 + 0
         x11 = 0x802855c
         w12 = (word) [x9 + x10,lsl 1] // 0xd1000000d0 // 897648165072
         x11 = x11 + x12,lsl 2
         br x11

    loc_0x08028970: // orphan
         ubfx w17,w0,0x1d, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbnz w0,0x1c,0x8028a80   // unlikely

    loc_0x08028978: // orphan
         if (w2 == 0xe)
         b.ne 0x8028a80           // likely

    loc_0x08028980: // orphan
         if (w15 == 2)
         b.ne 0x8028558           // likely

    loc_0x08028988: // orphan
         w9 = 0x2008
         if (w17 == 0)
         w11 = 0x80               // '\x80'
         w15 = 0x1
         cinc w11,w11,ne
         if ((w15 & w0) == 0)     // arg1
         [x1 + 0x3e] = (half) w9
         w9 = ~0x7f               // '\x7f'
         w15 = 0x40               // '@'
         bfi w13,w14,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w14,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = 0x1c
         csel w9,w15,w9, eq
         bfi w14,w10,4, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x40] = (byte) w13 // arg2
         [x1, 0x20] = (w12,2)     // arg2
         [x1 + 0x1f] = (byte) w9  // arg2
         [x1 + 0x1a] = (byte) w14 // arg2
         jmp 0x802855c

    loc_0x080289d8: // orphan
         ubfx w11,w0,0xb, 5       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w10,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = w11                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w9,w8,5, 1           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 - 1
         if (w9 == 0x36)
         b.hs 0x8028a0c           // likely

    loc_0x080289f4: // orphan
         x12 = 0x87f1             // '\xf1\x87'
         x12 = 0x21               // '!'
         x12 = 0x87f1             // '\xf1\x87'
         x12 = 0x21               // '!'
         x12 = x12 >> x9
         tbnz w12,0,0x8028c58     // likely

    loc_0x08028a0c: // orphan
         w9 = w10 << 4
         w9 = w9 & 0x20
         bfi w9,w8,6, 1           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x3
         w9 = w9 | w11
         w12 = w9 - 0x5c
         if (w12 == 0x21)
         b.hi 0x8028bd4           // likely

    loc_0x08028a2c: // orphan
         x9 = 0x8028000
         x9 = x9 + 0
         x13 = 0x802855c
         w14 = (word) [x9 + x12,lsl 1] // 0xd3000000d0 // 906238099664
         x13 = x13 + x14,lsl 2
         br x13

    loc_0x08028a80: // orphan
         w3 = w0 >> 0x1c          // arg1
         w4 = w3 | w4
         tbnz w4,0,0x8028c08      // unlikely

    loc_0x08028a8c: // orphan
         if (w2 == 0xf)
         b.ne 0x8028c08           // likely

    loc_0x08028a94: // orphan
         if (w15 == 3)
         b.ne 0x8028c88           // likely

    loc_0x08028a9c: // orphan
         w8 = 0x85                // '\x85'
         w11 = w13 << 1
         bfi w11,w14,2, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x2010              // '\x10 '
         w12 = 0x80               // '\x80'
         w10 = w11 | w10
         [x1 + 0x24] = w8         // arg2
         ubfx w8,w0,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3e] = (half) w9
         [x1 + 0x1f] = (byte) w12 // arg2
         [x1 + 0x40] = (byte) w10 // arg2
         [x1 + 0x1a] = (byte) w8  // arg2
         tbz w0,0x1e,0x8028adc    // likely

    loc_0x08028ad0: // orphan
         w8 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         w8 = w8 | 4
         [x1 + 0x38] = w8         // arg2

    loc_0x08028adc: // orphan
         w9 = 0x1c
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = w9         // arg2
         jmp 0x802855c

    loc_0x08028aec: // orphan
         if (w12 == 0x19)
         b.ne 0x8028b28           // likely

    loc_0x08028af4: // orphan
         if !w8 jmp 0x8028b28     // likely

    loc_0x08028af8: // orphan
         w8 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         if (w11 == 2)
         w9 = 0x12
         cinc w9,w9,hs
         w8 = w8 | 2
         [x1 + 0x38] = w8         // arg2

    loc_0x08028b10: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8028794
         w10 = 0x13
         w11 = 0x2010             // '\x10 '
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 0x20] = (w10,2)     // arg2
         [x1 + 0x3e] = (half) w11
         jmp 0x802855c

    loc_0x08028b28: // orphan
         w11 = w11 << 4
         w14 = w12 + 0x18
         w11 = w11 & 0x20
         if (w10 == w13)
         bfi w11,w8,6, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w8,w14,w12, eq
         w11 = w8 | w11
         w8 = 0x3
         w12 = w11 - 0x18
         if (w12 == 0x67)
         b.hi 0x802855c           // unlikely

    loc_0x08028b54: // orphan
         x14 = 0x8028000
         w11 = 0x8
         x14 = x14 + 0
         x15 = 0x802855c
         w16 = (word) [x14 + x12,lsl 1] // 0xd3000000d5 // 906238099669
         x15 = x15 + x16,lsl 2
         br x15

    loc_0x08028b7c: // orphan
         w9 = w9 | 0x18
         w10 = w9 - 0x1b
         if (w10 == 0x24)
         b.hi 0x802855c           // likely

    loc_0x08028b8c: // orphan
         x11 = 0x8028000
         w9 = 0x2
         x11 = x11 + 0
         x12 = 0x802855c
         w13 = (word) [x11 + x10,lsl 1] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2
         br x12

    loc_0x08028bd4: // orphan
         w12 = w9 - 0x1b
         if (w12 == 0x24)
         b.hi 0x802855c           // likely

    loc_0x08028be0: // orphan
         x13 = 0x8028000
         w9 = 0x2
         x13 = x13 + 0
         x14 = 0x802855c
         w15 = (word) [x13 + x12,lsl 1] // 0xd3000000d4 // 906238099668
         x14 = x14 + x15,lsl 2
         br x14

    loc_0x08028c08: // orphan
         w4 = 0x9400
         w5 = 0x1000
         w4 = 0xbf00
         w5 = 0x2f00
         w4 = w0 & w4             // arg1
         if (w4 == w5)
         b.ne 0x8028cec           // likely

    loc_0x08028c24: // orphan
         w8 = 0x3
         if !w15 jmp 0x802855c    // likely

    loc_0x08028c2c: // orphan
         if (w15 == 3)
         b.eq 0x802855c           // unlikely

    loc_0x08028c34: // orphan
         if (w15 == 2)
         b.ne 0x802904c           // likely

    loc_0x08028c3c: // orphan
         w8 = 0x3
         if w13 jmp 0x802855c     // unlikely

    loc_0x08028c44: // orphan
         ubfx w9,w0,0x1e, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if !w9 jmp 0x802855c     // likely

    loc_0x08028c4c: // orphan
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x8029070

    loc_0x08028c58: // orphan
         x8 = 0x8028000
         x8 = x8 + 0
         w9 = [x8 + x9,lsl 2]     // 0xd0000000cf // 893353197775
         jmp 0x8028e50

    loc_0x08028c7c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8029598
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = w10        // arg2
         jmp 0x80282ac

    loc_0x08028c88: // orphan
         x11 = 0x8028000
         w9 = w15 << 3
         x11 = x11 + 0
         w12 = 0x1008
         w12 = 0x8
         bfi w13,w14,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = [x11 + w15,uxtw 2] // 0xb7000000d2 // 785979015378
         w15 = 0x1c
         w9 = w12 >> w9
         w12 = 0x20
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x40] = (byte) w13 // arg2
         [x1, 0x20] = (w15,2)     // arg2
         w11 = 0x1
         [x1 + 0x3e] = (byte) w9  // arg2
         if ((w11 & w0) == 0)     // arg1
         w9 = ~0x7f               // '\x7f'
         w11 = 0x40               // '@'
         csel w9,w11,w9, eq
         ubfx w11,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w11,w10,4, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x3f] = (byte) w12 // arg2 // " "
         [x1 + 0x1f] = (byte) w9  // arg2
         [x1 + 0x1a] = (byte) w11 // arg2
         jmp 0x802855c

    loc_0x08028cec: // orphan
         if (w17 == w2)
         b.ne 0x8028ecc           // unlikely

    loc_0x08028cf4: // orphan
         tbz w0,0x17,0x8028ecc    // likely

    loc_0x08028cf8: // orphan
         w4 = w2 & 3
         if w4 jmp 0x8028ecc      // unlikely

    loc_0x08028d00: // orphan
         w8 = 0x3
         tbnz w0,0x1c,0x802855c   // unlikely

    loc_0x08028d08: // orphan
         if (w15 == 3)
         b.eq 0x802855c           // unlikely

    loc_0x08028d10: // orphan
         if ((w2 & 4) == 0)
         w9 = 0x12
         w11 = w13 << 1
         w8 = 0x18
         cinc w9,w9,ne
         bfi w11,w14,2, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w11 | w10
         w11 = 0x1
         if ((w11 & w0) == 0)     // arg1
         w11 = ~0x7f              // '\x7f'
         w13 = 0x40               // '@'
         w12 = 0x2010             // '\x10 '
         [x1, 0x20] = (w8,2)      // arg2
         csel w8,w13,w11, eq
         ubfx w9,w0,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x40] = (byte) w10 // arg2
         [x1 + 0x3e] = (half) w12
         [x1 + 0x1f] = (byte) w8  // arg2
         [x1 + 0x1a] = (byte) w9  // arg2
         if !w17 jmp 0x8029044    // likely

    loc_0x08028d60: // orphan
         w8 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         w9 = w8 | 2
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x38] = w9         // arg2
         jmp 0x802855c

    loc_0x08028dd8: // orphan
         ubfx w9,w0,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w13,w14,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w9,w10,4, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x40] = (byte) w13 // arg2
         [x1 + 0x1a] = (byte) w9  // arg2
         jmp 0x802855c

    loc_0x08028e50: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8028c64
         if (w11 == 0x16)
         b.ne 0x8028e6c           // likely

    loc_0x08028e58: // orphan
         w8 = 0x3
         if !w10 jmp 0x802855c    // likely

    loc_0x08028e60: // orphan
         if (w10 == 3)
         b.eq 0x802855c           // unlikely

    loc_0x08028e68: // orphan
         jmp 0x8028ea4

    loc_0x08028e6c: // orphan
         w8 = w0 & 0xf000         // arg1
         w11 = 0xe800
         if (w8 == 3)
         w11 = w0 & w11           // arg1
         cset w12,ne
         if (w11 == 4)
         cset w11,ne
         if (w8 == 8)
         w8 = w11 & w12
         cset w11,ne
         w8 = w11 & w8
         tbnz w8,0,0x8028ea4      // likely

    loc_0x08028e9c: // orphan
         if (w10 == 3)
         b.ne 0x8028558           // likely

    loc_0x08028ea4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8028e68
         w11 = (byte) [x1 + 0x3e] // 0xc8 // 200 // arg2
         if w11 jmp 0x8028eb8     // likely

    loc_0x08028eac: // orphan
         w8 = 0x8
         w11 = w8 << w10
         [x1 + 0x3e] = (byte) w11 // arg2

    loc_0x08028eb8: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = 0x1b

    loc_0x08028ec0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8029b00
         [x1, 0x20] = (w10,2)     // arg2
         [x1 + 0x1f] = (byte) w11 // arg2
         jmp 0x802855c

    loc_0x08028ecc: // orphan
         if (w2 == 1)
         b.ne 0x80290c8           // likely

    loc_0x08028ed4: // orphan
         if w17 jmp 0x80290c8     // unlikely

    loc_0x08028ed8: // orphan
         w17 = 0x10
         jmp 0x80290f0

    loc_0x08029044: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x802855c

    loc_0x0802904c: // orphan
         if (w15 == 1)
         w8 = 0x1
         cset w11,eq
         w8 &= w8                 // arg1
         cset w9,eq
         if w8 jmp 0x8029070      // unlikely

    loc_0x08029064: // orphan
         if (w15 == 1)
         b.ne 0x8029070           // likely

    loc_0x0802906c: // orphan
         if w14 jmp 0x8028558     // unlikely

    loc_0x08029070: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8028c54
         x12 = 0x18
         bfi w13,w14,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = 0x2f               // '/'
         if (w11 == 0)
         csel w11,w13,w14, ne
         if (w9 == 0)
         w9 = ~0x7f               // '\x7f'
         w13 = 0x40               // '@'
         [x1 + 0x20] = x12        // arg2
         w12 = 0x8
         csel w9,w13,w9, ne
         ubfx w13,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w16,w0,0xd, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = w12 << w15
         bfi w13,w10,4, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x40] = (byte) w11 // arg2
         [x1 + 0x3d] = (byte) w16 // arg2
         [x1 + 0x3e] = (byte) w12 // arg2
         [x1 + 0x1f] = (byte) w9  // arg2
         [x1 + 0x1a] = (byte) w13 // arg2
         jmp 0x802855c

    loc_0x080290c8: // orphan
         if (w2 == 5)
         b.ne 0x80290dc           // likely

    loc_0x080290d0: // orphan
         if w17 jmp 0x80290dc     // unlikely

    loc_0x080290d4: // orphan
         w17 = 0x11
         jmp 0x80290f0

    loc_0x080290dc: // orphan
         if (w17 == 0)
         w17 = 0x1
         cinc w17,w17,ne
         if (w2 == 9)
         b.ne 0x8029188           // likely

    loc_0x080290f0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8028edc, 0x80290d8
         if (w15 == 1)
         b.eq 0x8028558           // unlikely

    loc_0x080290f8: // orphan
         w8 = w0 >> 0x1e          // arg1
         w8 = w3 | w8
         if ((w8 & 1) == 0)
         cset w8,eq
         if (w13 == 0)
         cset w9,ne
         if (w15 == 3)
         b.ne 0x8029120           // likely

    loc_0x08029118: // orphan
         w8 = w8 | w9
         tbnz w8,0,0x8028558      // unlikely

    loc_0x08029120: // orphan
         w9 = 0x8
         if (w15 == 0)
         w9 = w9 << w15
         w11 = 0x10
         w12 = 0x1
         csel w9,w11,w9, eq
         if ((w12 & w0) == 0)     // arg1
         w11 = ~0x7f              // '\x7f'
         w16 = 0x40               // '@'
         w8 = 0x18
         csel w11,w16,w11, eq
         if ((w12 & w0) == 0)     // arg1
         csel w11,w11,w9, eq
         [x1 + 0x3e] = (byte) w9  // arg2
         [x1, 0x20] = (w8,2)      // arg2
         [x1 + 0x1f] = (byte) w11 // arg2
         if !w15 jmp 0x8028750    // likely

    loc_0x08029164: // orphan
         ubfx w9,w0,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w13,w14,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w15 == 2)
         bfi w9,w10,4, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w10,w13,w14, eq
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1a] = (byte) w9  // arg2
         [x1 + 0x40] = (byte) w10 // arg2
         jmp 0x802855c

    loc_0x08029188: // orphan
         w10 = 0x9f80             // '\x80\x9f'
         w13 = 0xf00
         w10 = w0 & w10           // arg1
         if (w10 == w13)
         b.ne 0x80291dc           // likely

    loc_0x0802919c: // orphan
         ubfx w10,w0,0x13, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if !w10 jmp 0x80291dc    // likely

    loc_0x080291a4: // orphan
         ubfx w13,w0,0xb, 5       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbz w0,0xa,0x80291c0     // likely

    loc_0x080291ac: // orphan
         if w13 jmp 0x80291c0     // unlikely

    loc_0x080291b0: // orphan
         if ((w0 & 0x20000000) == 0) // arg1
         w8 = 0x8b                // '\x8b'
         cinc w9,w8,ne
         jmp 0x8029484

    loc_0x080291c0: // orphan
         tbnz w0,0x1d,0x80291dc   // unlikely

    loc_0x080291c4: // orphan
         if (w13 == 0xa)
         b.ne 0x80291dc           // likely

    loc_0x080291cc: // orphan
         tbnz w0,0xa,0x8029480    // unlikely

    loc_0x080291d0: // orphan
         w10 = w0 & 0xc00000      // arg1
         if (w10 == 0x400)
         b.eq 0x8028558           // unlikely

    loc_0x080291dc: // orphan
         w10 = 0xc00
         w10 = 0x8f00
         w13 = w0 & w10           // arg1
         if (w13 == w16)
         b.ne 0x80292c0           // unlikely

    loc_0x080291f0: // orphan
         w14 = w0 & 0x3ffff000    // arg1
         w13 = w0 & 0xff0000      // arg1
         w16 = w14 & 0xe000ffff
         if (w13 == 0xf80)
         b.eq 0x8029224           // unlikely

    loc_0x08029204: // orphan
         if (w13 == 0xe00)
         b.eq 0x8029234           // unlikely

    loc_0x0802920c: // orphan
         if (w13 == 0xa00)
         b.ne 0x8029244           // likely

    loc_0x08029214: // orphan
         w14 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w13 = 0x20
         w15 = 0x1
         jmp 0x8029250

    loc_0x08029224: // orphan
         w14 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w13 = 0x10
         w15 = 0x1
         jmp 0x8029250

    loc_0x08029234: // orphan
         w13 = 0x40               // '@'
         w15 = 0x1
         w14 = 0x1
         jmp 0x8029250

    loc_0x08029244: // orphan
         w15 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w14 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w13 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x08029250: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8029220, 0x8029230, 0x8029240
         if (w16 == 0xe)
         b.lt 0x8029284           // likely

    loc_0x08029258: // orphan
         b.eq 0x802929c           // unlikely

    loc_0x0802925c: // orphan
         w17 = 0xd000
         w17 = 0x2000
         if (w16 == w17)
         b.eq 0x80292a4           // unlikely

    loc_0x0802926c: // orphan
         w17 = 0xc000
         w17 = 0x2000
         if (w16 == w17)
         b.ne 0x80292c0           // likely

    loc_0x0802927c: // orphan
         w16 = 0x26               // '&'
         jmp 0x80292b0

    loc_0x08029284: // orphan
         if (w16 == 0xc)
         b.eq 0x80292ac           // unlikely

    loc_0x0802928c: // orphan
         if (w16 == 0xd)
         b.ne 0x80292c0           // likely

    loc_0x08029294: // orphan
         w16 = 0x25               // '%'
         jmp 0x80292b0

    loc_0x0802929c: // orphan
         w16 = 0x29               // ')'
         jmp 0x80292b0

    loc_0x080292a4: // orphan
         w16 = 0x28               // '('
         jmp 0x80292b0

    loc_0x080292ac: // orphan
         w16 = 0x27               // '''

    loc_0x080292b0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8029280, 0x8029298, 0x80292a0, 0x80292a8
         if !w15 jmp 0x80292c0    // likely

    loc_0x080292b4: // orphan
         w15 = w0 >> 0x1e         // arg1
         tbz w0,0x1c,0x8029394    // likely

    loc_0x080292bc: // orphan
         if w15 jmp 0x8029394     // unlikely

    loc_0x080292c0: // orphan
         w13 = w0 & 0xfffffc00    // arg1
         w14 = 0xbfff             // '\xff\xbf'
         w14 = 0x1e22             // '\"\x1e'
         if (w13 == w14)
         jmp ifgt 0x802930c       // unlikely

    loc_0x080292d4: // orphan
         w14 = ~0x619e            // '\x9ea'
         if (w13 == w14)
         jmp ifle 0x8029348       // unlikely

    loc_0x080292e0: // orphan
         w14 = 0x9e62             // 'b\x9e'
         if (w13 == w14)
         b.eq 0x80293d4           // unlikely

    loc_0x080292ec: // orphan
         w14 = 0x9e63             // 'c\x9e'
         if (w13 == w14)
         b.eq 0x80293dc           // unlikely

    loc_0x080292f8: // orphan
         w14 = 0x1e22             // '\"\x1e'
         if (w13 == w14)
         b.ne 0x8029430           // likely

    loc_0x08029304: // orphan
         w9 = 0x8d                // '\x8d'
         jmp 0x8029388

    loc_0x0802930c: // orphan
         w14 = ~0xe19e            // '\x9e\xe1'
         if (w13 == w14)
         jmp ifle 0x8029368       // likely

    loc_0x08029318: // orphan
         w14 = 0x1e62             // 'b\x1e'
         if (w13 == w14)
         b.eq 0x80293ec           // unlikely

    loc_0x08029324: // orphan
         w14 = 0x4000
         w14 = 0x1e62             // 'b\x1e'
         if (w13 == w14)
         b.eq 0x80293f4           // unlikely

    loc_0x08029334: // orphan
         w14 = 0x1e63             // 'c\x1e'
         if (w13 == w14)
         b.ne 0x8029430           // likely

    loc_0x08029340: // orphan
         w9 = 0x93                // '\x93'
         jmp 0x8029410

    loc_0x08029348: // orphan
         w14 = 0x9e22             // '\"\x9e'
         if (w13 == w14)
         b.eq 0x80293fc           // unlikely

    loc_0x08029354: // orphan
         w14 = 0x9e23             // '#\x9e'
         if (w13 == w14)
         b.ne 0x8029430           // likely

    loc_0x08029360: // orphan
         w9 = 0x92                // '\x92'
         jmp 0x8029400

    loc_0x08029368: // orphan
         w14 = 0xc000
         w14 = 0x1e22             // '\"\x1e'
         if (w13 == w14)
         b.eq 0x802940c           // unlikely

    loc_0x08029378: // orphan
         w14 = 0x1e23             // '#\x1e'
         if (w13 == w14)
         b.ne 0x8029430           // likely

    loc_0x08029384: // orphan
         w9 = 0x91                // '\x91'

    loc_0x08029388: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8029308
         w11 = 0x20
         w10 = 0x20
         jmp 0x8029418

    loc_0x08029394: // orphan
         w9 = w13                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbnz w0,0x1c,0x80293bc   // unlikely

    loc_0x0802939c: // orphan
         if (w15 == 0)
         cset w8,eq
         w8 = w8 & w14
         tbnz w8,0,0x8028558      // unlikely

    loc_0x080293ac: // orphan
         if (w15 == 0)
         w8 = 0x40                // '@'
         w9 = ~0x7f               // '\x7f'
         csel w9,w9,w8, ne

    loc_0x080293bc: // orphan
         w10 = 0x19
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1f] = (byte) w9  // arg2
         [x1 + 0x3e] = (byte) w13 // arg2
         [x1, 0x20] = (w10,2)     // arg2
         jmp 0x802855c

    loc_0x080293d4: // orphan
         w9 = 0x90                // '\x90'
         jmp 0x80293e0

    loc_0x080293dc: // orphan
         w9 = 0x94                // '\x94'

    loc_0x080293e0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80293d8
         w11 = 0x40               // '@'
         w10 = 0x40               // '@'
         jmp 0x8029418

    loc_0x080293ec: // orphan
         w9 = 0x8f                // '\x8f'
         jmp 0x8029410

    loc_0x080293f4: // orphan
         w9 = 0x97                // '\x97'
         jmp 0x8029400

    loc_0x080293fc: // orphan
         w9 = 0x8e                // '\x8e'

    loc_0x08029400: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8029364, 0x80293f8
         w10 = 0x40               // '@'
         w11 = 0x20
         jmp 0x8029418

    loc_0x0802940c: // orphan
         w9 = 0x98                // '\x98'

    loc_0x08029410: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8029344, 0x80293f0
         w10 = 0x20
         w11 = 0x40               // '@'

    loc_0x08029418: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8029390, 0x80293e8, 0x8029408
         w12 = 0x9
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1f] = (byte) w11 // arg2
         [x1 + 0x3e] = (byte) w10 // arg2
         [x1 + 0x20] = w12        // arg2
         jmp 0x80282ac

    loc_0x08029430: // orphan
         w10 = w10 + 0xbff,lsl 12
         w13 = 0xd7ff             // '\xff\xd7'
         w10 = w0 & w10           // arg1
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         jmp ifgt 0x80294ec       // unlikely

    loc_0x08029448: // orphan
         w13 = 0xa800
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         b.eq 0x8029524           // unlikely

    loc_0x08029458: // orphan
         w13 = 0xb800
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         b.eq 0x802952c           // unlikely

    loc_0x08029468: // orphan
         w13 = 0xc800
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         b.ne 0x802959c           // likely

    loc_0x08029478: // orphan
         w8 = 0x5
         jmp 0x8029548

    loc_0x08029480: // orphan
         w9 = 0x8a                // '\x8a'

    loc_0x08029484: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80291bc
         clz w8,w10               // "\t"
         w11 = 0x8
         w8 = w8 ^ 0x1f           // " "
         if ((w0 & 0x40000000) == 0) // arg1
         w12 = ~0x7f              // '\x7f'
         w13 = 0x40               // '@'
         w11 = w11 << w8
         csel w8,w13,w12, eq
         w12 = w11 & 0xf8
         [x1 + 0x1f] = (byte) w8  // arg2
         tbnz w0,0x1e,0x80294b8   // unlikely

    loc_0x080294b0: // orphan
         if (w12 == 0x40)
         b.eq 0x8028558           // unlikely

    loc_0x080294b8: // orphan
         ubfx w13,w0,0x10, 3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w9 == 0x8a)
         bfi w13,w10,3, 4         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w12 << 1
         w12 = w13 - w11
         w10 = w10 - w13
         w14 = 0xd
         csel w10,w12,w10, eq
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3e] = (byte) w11 // arg2
         [x1, 0x20] = (w14,2)     // arg2
         [x1 + 0x3d] = (byte) w10 // arg2
         jmp 0x802855c

    loc_0x080294ec: // orphan
         w13 = 0xd800
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         b.eq 0x8029534           // unlikely

    loc_0x080294fc: // orphan
         w13 = 0xa800
         w13 = 0xea1              // '\xa1\x0e'
         if (w10 == w13)
         b.eq 0x8029544           // unlikely

    loc_0x0802950c: // orphan
         w13 = 0xb800
         w13 = 0xea1              // '\xa1\x0e'
         if (w10 == w13)
         b.ne 0x802959c           // likely

    loc_0x0802951c: // orphan
         w8 = 0x4
         jmp 0x8029548

    loc_0x08029524: // orphan
         w8 = 0x1
         jmp 0x8029548

    loc_0x0802952c: // orphan
         w8 = 0x3
         jmp 0x8029548

    loc_0x08029534: // orphan
         if ((w0 & 0x20000000) == 0) // arg1
         w8 = 0x9b                // '\x9b'
         cinc w9,w8,ne
         jmp 0x8029558

    loc_0x08029544: // orphan
         w8 = 0x2

    loc_0x08029548: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x802947c, 0x8029520, 0x8029528, 0x8029530
         if ((w0 & 0x20000000) == 0) // arg1
         w9 = 0x99                // '\x99'
         cinc w9,w9,ne
         [x1 + 0x28] = w8         // arg2

    loc_0x08029558: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8029540
         if ((w0 & 0x400000) == 0) // arg1
         w8 = 0x40                // '@'
         w10 = 0x20               // "\r"
         csel w10,w10,w8, eq
         [x1 + 0x3e] = (byte) w10 // arg2
         tbnz w0,0x1c,0x802958c   // unlikely

    loc_0x08029570: // orphan
         if ((w0 & 0x40000000) == 0) // arg1
         w10 = ~0x7f              // '\x7f'
         csel w8,w8,w10, eq
         [x1 + 0x1f] = (byte) w8  // arg2
         tbnz w0,0x1e,0x8029594   // unlikely

    loc_0x08029584: // orphan
         tbnz w0,0x16,0x8028558   // unlikely

    loc_0x08029588: // orphan
         jmp 0x8029594

    loc_0x0802958c: // orphan
         tbz w0,0x1e,0x8028558    // likely

    loc_0x08029590: // orphan
         [x1 + 0x1f] = (byte) w10 // arg2

    loc_0x08029594: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8029588
         w10 = 0x9
         jmp 0x8028c7c

    loc_0x0802959c: // orphan
         w13 = 0xfc00
         w14 = 0x1e20             // ' \x1e'
         w13 = 0x7fa0             // '\xa0\x7f'
         w10 = w0 & w13           // arg1
         if (w10 == w14)
         b.ne 0x80295d4           // likely

    loc_0x080295b4: // orphan
         ubfx w10,w0,0x13, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w14 &= w0                // arg1
         b.eq 0x8029640           // unlikely

    loc_0x080295c0: // orphan
         if (w14 == 0x40)
         b.ne 0x80295d4           // likely

    loc_0x080295c8: // orphan
         if w10 jmp 0x80295d4     // unlikely

    loc_0x080295cc: // orphan
         w9 = 0x5
         jmp 0x802964c

    loc_0x080295d4: // orphan
         w14 = 0xc00
         ubfx w10,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w14 = 0xff20             // ' \xff'
         w14 = w0 & w14           // arg1
         if (w14 == w12)
         b.ne 0x8029608           // unlikely

    loc_0x080295ec: // orphan
         if !w10 jmp 0x80296b4    // likely

    loc_0x080295f0: // orphan
         if (w10 == 3)
         b.eq 0x80296bc           // unlikely

    loc_0x080295f8: // orphan
         if (w10 == 1)
         b.ne 0x8028558           // likely

    loc_0x08029600: // orphan
         w9 = 0x40                // '@'
         jmp 0x80296c0

    loc_0x08029608: // orphan
         w12 = 0x2000
         w15 = w0 & w9            // arg1
         w12 = 0x1e20             // ' \x1e'
         w16 = w12 + 2,lsl 12
         if (w15 == w16)
         b.ne 0x802968c           // likely

    loc_0x08029620: // orphan
         w8 = 0x3
         if !w10 jmp 0x8029770    // likely

    loc_0x08029628: // orphan
         if (w10 == 3)
         b.eq 0x8029778           // unlikely

    loc_0x08029630: // orphan
         if (w10 == 1)
         b.ne 0x802855c           // likely

    loc_0x08029638: // orphan
         w9 = 0x40                // '@'
         jmp 0x802977c

    loc_0x08029640: // orphan
         x8 = 0x8029000
         x8 = x8 + 0
         w9 = [x8 + w10,uxtw 2]   // 0xb2000000cf // 764504178895

    loc_0x0802964c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80295d0
         [x1 + 0x28] = w9         // arg2
         if (w0 == 0)             // arg1
         w9 = 0x40                // '@'
         w10 = 0x20               // "\r"
         csel w11,w10,w9, ge      // "\r"
         if ((w0 & 0x400000) == 0) // arg1
         csel w9,w10,w9, eq
         if ((w0 & 0x10000) == 0) // arg1
         w12 = 0x95               // '\x95'
         w10 = 0x9
         [x1 + 0x1f] = (byte) w11 // arg2
         cinc w11,w12,ne
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3e] = (byte) w9  // arg2 // "@ "
         [x1, 0x20] = (w10,2)     // arg2
         jmp 0x802855c

    loc_0x0802968c: // orphan
         w15 = w0 >> 0x18         // arg1
         if (w15 == 0x1f)
         b.ne 0x80296ec           // likely

    loc_0x08029698: // orphan
         if !w10 jmp 0x80297f4    // likely

    loc_0x0802969c: // orphan
         if (w10 == 3)
         b.eq 0x80297fc           // unlikely

    loc_0x080296a4: // orphan
         if (w10 == 1)
         b.ne 0x8028558           // likely

    loc_0x080296ac: // orphan
         w9 = 0x40                // '@'
         jmp 0x8029800

    loc_0x080296b4: // orphan
         w9 = 0x20                // U"\t\x96"
         jmp 0x80296c0

    loc_0x080296bc: // orphan
         w9 = 0x10

    loc_0x080296c0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8029604, 0x80296b8
         ubfx w8,w0,0xc, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w8 == 8)
         b.ls 0x80296d4           // likely

    loc_0x080296cc: // orphan
         w8 = 0x1
         jmp 0x802855c

    loc_0x080296d4: // orphan
         w10 = 0x2
         if (w8 == 8)
         [x1 + 0x20] = w10        // arg2 // U"\t\x96"
         b.ne 0x8029758           // likely

    loc_0x080296e4: // orphan
         w10 = 0xa
         jmp 0x8029764

    loc_0x080296ec: // orphan
         w15 = w9 + 8,lsl 12
         w15 = w0 & w15           // arg1
         if (w15 == w12)
         b.ne 0x80297b8           // unlikely

    loc_0x080296fc: // orphan
         w8 = 0x3
         if ((w0 & 7) == 0)       // arg1
         b.ne 0x802855c           // likely

    loc_0x08029708: // orphan
         if (w10 == 2)
         b.eq 0x802855c           // unlikely

    loc_0x08029710: // orphan
         if ((w0 & 0x10) == 0)    // arg1
         w8 = 0x20
         w9 = 0x5
         cinc w11,w8,ne
         [x1, 0x20] = (w9,2)      // arg2
         tbz w0,3,0x8029734       // likely

    loc_0x08029728: // orphan
         w9 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         w9 = w9 | 1
         [x1 + 0x38] = w9         // arg2

    loc_0x08029734: // orphan
         if (w10 == 0)
         w9 = 0x40                // '@'
         csel w8,w8,w9, eq
         if (w10 == 3)
         w9 = 0x10
         csel w9,w9,w8, eq
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1f] = (byte) w9  // arg2
         jmp 0x802855c

    loc_0x08029758: // orphan
         x10 = 0x8029000
         x10 = x10 + 0
         w10 = [x10 + w8,uxtw 2]  // 0xb0000000d1 // 755914244305

    loc_0x08029764: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80296e8
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x24] = w10        // arg2 // "!"
         jmp 0x802993c

    loc_0x08029770: // orphan
         w9 = 0x20
         jmp 0x802977c

    loc_0x08029778: // orphan
         w9 = 0x10

    loc_0x0802977c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x802963c, 0x8029774
         ubfx w10,w0,0xf, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = w8         // arg2
         w8 = 0x1
         if (w10 == 0xf)
         b.hi 0x802855c           // unlikely

    loc_0x08029790: // orphan
         x11 = 0x8029000
         x11 = x11 + 0
         x12 = 0x802855c
         w13 = (word) [x11 + x10,lsl 1] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2
         br x12

    loc_0x080297b8: // orphan
         w12 = 0xc00
         w12 = 0x1e20             // ' \x1e'
         if (w14 == w12)
         b.eq 0x802982c           // unlikely

    loc_0x080297c8: // orphan
         w12 = 0x400
         w12 = 0x1e20             // ' \x1e'
         if (w14 == w12)
         b.ne 0x8029848           // likely

    loc_0x080297d8: // orphan
         if !w10 jmp 0x802999c    // likely

    loc_0x080297dc: // orphan
         if (w10 == 3)
         b.eq 0x80299a4           // unlikely

    loc_0x080297e4: // orphan
         if (w10 == 1)
         b.ne 0x8028558           // likely

    loc_0x080297ec: // orphan
         w9 = 0x40                // '@'
         jmp 0x80299a8

    loc_0x080297f4: // orphan
         w9 = 0x20
         jmp 0x8029800

    loc_0x080297fc: // orphan
         w9 = 0x10

    loc_0x08029800: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80296b0, 0x80297f8
         w10 = w0 >> 0x14         // arg1
         w12 = 0x14               // " "
         w10 = w10 & 2
         w11 = 0x4
         bfxil w10,w0,0xf, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = w10 | w12          // " "
         [x1 + 0x1f] = (byte) w9  // arg2
         [x1 + 0x3e] = (byte) w9  // arg2 // "@ "
         [x1, 0x20] = (w11,2)     // arg2
         jmp 0x802855c

    loc_0x0802982c: // orphan
         if !w10 jmp 0x80299d4    // likely

    loc_0x08029830: // orphan
         if (w10 == 3)
         b.eq 0x80299dc           // unlikely

    loc_0x08029838: // orphan
         if (w10 == 1)
         b.ne 0x8028558           // likely

    loc_0x08029840: // orphan
         w9 = 0x40                // '@'
         jmp 0x80299e0

    loc_0x08029848: // orphan
         w12 = w13 + 0x1e0,lsl 12
         w13 = 0x1e26             // '&\x1e'
         w12 = w0 & w12           // arg1
         if (w12 == w13)
         b.ne 0x8029948           // likely

    loc_0x0802985c: // orphan
         ubfx w8,w0,0x16, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w8 == w0)            // arg1
         b.ne 0x8028558           // unlikely

    loc_0x08029868: // orphan
         if ((w0 & 0x10000) == 0) // arg1
         w10 = 0x35               // '5'
         cinc w10,w10,eq
         if (w0 == 0)             // arg1
         w11 = 0x40               // '@'
         w12 = 0x20
         w9 = 0x8
         csel w11,w12,w11, ge
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 0x20] = (w9,2)      // arg2
         [x1 + 0x1f] = (byte) w11 // arg2
         jmp 0x802855c

    loc_0x0802993c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x802976c, 0x80299d0
         [x1 + 0x1f] = (byte) w9  // arg2
         [x1 + 0x3e] = (byte) w9  // arg2
         jmp 0x802855c

    loc_0x08029948: // orphan
         w12 = 0x8400
         w13 = 0x2e00
         w12 = 0xbfe0             // '\xe0\xbf'
         w12 = w0 & w12           // arg1
         if (w12 == w13)
         b.ne 0x8029a04           // likely

    loc_0x08029960: // orphan
         ubfx w9,w0,0xb, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 &= w0                 // arg1
         w10 = ~0x7f              // '\x7f'
         w11 = 0x40               // '@'
         csel w10,w11,w10, eq
         if (w9 == 7)
         x11 = 0xa
         ccmp w8,0,0, hi
         x11 = 0x37               // '7'
         w8 = 0x3
         [x1 + 0x3d] = (byte) w9  // arg2
         csel w8,w8,wzr, eq
         [x1 + 0x1f] = (byte) w10 // arg2
         [x1 + 0x20] = x11        // arg2
         jmp 0x802855c

    loc_0x0802999c: // orphan
         w9 = 0x20                // U"\n7"
         jmp 0x80299a8

    loc_0x080299a4: // orphan
         w9 = 0x10

    loc_0x080299a8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80297f0, 0x80299a0
         if ((w0 & 0x10) == 0)    // arg1
         w12 = 0x22               // '\"'
         w10 = 0x6
         ubfx w11,w0,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         cinc w12,w12,ne
         w13 = w0 & 0xf           // arg1
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3c] = (byte) w11 // arg2
         [x1, 0x20] = (w10,2)     // arg2
         [x1 + 0x3d] = (byte) w13 // arg2
         jmp 0x802993c

    loc_0x080299d4: // orphan
         w9 = 0x20
         jmp 0x80299e0

    loc_0x080299dc: // orphan
         w9 = 0x10

    loc_0x080299e0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8029844, 0x80299d8
         x10 = 0x7
         ubfx w11,w0,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x10 = 0x24               // '$'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1f] = (byte) w9  // arg2
         [x1 + 0x3c] = (byte) w11 // arg2
         [x1 + 0x20] = x10        // arg2
         [x1 + 0x3e] = (byte) w9  // arg2
         jmp 0x802855c

    loc_0x08029a04: // orphan
         w13 = w0 & 0xfe0000      // arg1
         w12 = w0 >> 0x1e         // arg1
         if (w13 == 0xa00)
         b.eq 0x8029a30           // unlikely

    loc_0x08029a14: // orphan
         if (w13 == 0xe00)
         b.eq 0x8029a38           // unlikely

    loc_0x08029a1c: // orphan
         if (w13 == 0xf80)
         b.ne 0x8029a44           // likely

    loc_0x08029a24: // orphan
         w13 = 0x10
         [x1 + 0x3e] = (byte) w13 // arg2
         jmp 0x8029a54

    loc_0x08029a30: // orphan
         w13 = 0x20
         jmp 0x8029a40

    loc_0x08029a38: // orphan
         tbz w12,0,0x8028558      // likely

    loc_0x08029a3c: // orphan
         w13 = 0x40               // '@'

    loc_0x08029a40: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8029a34
         [x1 + 0x3e] = (byte) w13 // arg2

    loc_0x08029a44: // orphan
         w13 = 0xbe               // '\xbe'
         w13 = w0 & w13           // arg1
         if (w13 == 0xa00)
         b.ne 0x8029a90           // likely

    loc_0x08029a54: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8029a2c
         w11 = w0 & w11           // arg1
         w13 = 0xf800
         w13 = 0xe00
         if (w11 == w13)
         b.eq 0x8029adc           // unlikely

    loc_0x08029a68: // orphan
         w13 = 0xf800
         w13 = 0x2e01
         if (w11 == w13)
         b.eq 0x8029ae4           // unlikely

    loc_0x08029a78: // orphan
         w13 = 0xf800
         w13 = 0x2e00
         if (w11 == w13)
         b.ne 0x8029a90           // likely

    loc_0x08029a88: // orphan
         w9 = 0xd
         jmp 0x8029ae8

    loc_0x08029a90: // orphan
         w11 = 0xfc00
         w12 = 0x800
         w11 = 0xbf3f             // '?\xbf'
         w12 = 0x2e20             // ' .'
         w11 = w0 & w11           // arg1
         if (w11 == w12)
         b.eq 0x8029b04           // unlikely

    loc_0x08029aac: // orphan
         w12 = 0x1800
         w12 = 0xe20              // ' \x0e'
         if (w11 == w12)
         b.eq 0x8029b14           // unlikely

    loc_0x08029abc: // orphan
         w12 = 0x800
         w12 = 0xe20              // ' \x0e'
         if (w11 == w12)
         b.ne 0x8029b4c           // likely

    loc_0x08029acc: // orphan
         if (w10 == 3)
         b.eq 0x8028558           // unlikely

    loc_0x08029ad4: // orphan
         w9 = 0x4e                // 'N'
         jmp 0x8029b1c

    loc_0x08029adc: // orphan
         w9 = 0xc                 // "/"
         jmp 0x8029ae8

    loc_0x08029ae4: // orphan
         w9 = 0xe

    loc_0x08029ae8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8029a8c, 0x8029ae0
         if ((w12 & 1) == 0)
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = 0x15
         csel w11,w12,w11, eq
         jmp 0x8028ec0

    loc_0x08029b04: // orphan
         if (w10 == 1)
         b.hi 0x8028558           // unlikely

    loc_0x08029b0c: // orphan
         w9 = 0x4f                // 'O'
         jmp 0x8029b1c

    loc_0x08029b14: // orphan
         if w10 jmp 0x8028558     // unlikely

    loc_0x08029b18: // orphan
         w9 = 0x50                // 'P'

    loc_0x08029b1c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8029ad8, 0x8029b10
         if ((w0 & 0x40000000) == 0) // arg1
         w12 = ~0x7f              // '\x7f'
         w13 = 0x40               // '@'
         w11 = 0x16
         csel w12,w13,w12, eq
         w13 = 0x8
         w10 = w13 << w10
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 0x20] = (w11,2)     // arg2
         [x1 + 0x1f] = (byte) w12 // arg2
         [x1 + 0x3e] = (byte) w10 // arg2
         jmp 0x802855c

    loc_0x08029b4c: // orphan
         tbnz w0,0x1c,0x8029ba8   // unlikely

    loc_0x08029b50: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         jmp ifle 0x8029c10       // likely

    loc_0x08029b60: // orphan
         w9 = 0x37ff              // '\xff7'
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         jmp ifgt 0x8029c48       // unlikely

    loc_0x08029b70: // orphan
         w9 = 0xb800
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         b.eq 0x8029d40           // unlikely

    loc_0x08029b80: // orphan
         w9 = 0x2800
         w9 = 0x2e21              // '!.'
         if (w11 == w9)
         b.eq 0x8029e08           // unlikely

    loc_0x08029b90: // orphan
         w9 = 0x4800
         w9 = 0x2e21              // '!.'
         if (w11 == w9)
         b.ne 0x8029dd8           // likely

    loc_0x08029ba0: // orphan
         w9 = 0xa6                // '\xa6'
         jmp 0x8029e14

    loc_0x08029ba8: // orphan
         w9 = w9 + 0x1f8,lsl 12
         w12 = 0x27ff             // '\xff''
         w9 = w0 & w9             // arg1
         w12 = 0x7e21             // '!~'
         if (w9 == w12)
         jmp ifgt 0x8029be8       // unlikely

    loc_0x08029bc0: // orphan
         w12 = 0x2800
         w12 = 0x5e21             // '!^'
         if (w9 == w12)
         b.eq 0x8028558           // unlikely

    loc_0x08029bd0: // orphan
         w12 = 0x4800
         w12 = 0x5e21             // '!^'
         if (w9 == w12)
         b.ne 0x8029c80           // likely

    loc_0x08029be0: // orphan
         w9 = 0xa5                // '\xa5'
         jmp 0x8029c60

    loc_0x08029be8: // orphan
         w12 = 0x2800
         w12 = 0x7e21             // '!~'
         if (w9 == w12)
         b.eq 0x8029c5c           // unlikely

    loc_0x08029bf8: // orphan
         w12 = 0x4800
         w12 = 0x7e21             // '!~'
         if (w9 == w12)
         b.ne 0x8029c80           // likely

    loc_0x08029c08: // orphan
         w9 = 0xa6                // '\xa6'
         jmp 0x8029c60

    loc_0x08029c10: // orphan
         w9 = 0x37ff              // '\xff7'
         w9 = 0xe30               // '0\x0e'
         if (w11 == w9)
         jmp ifgt 0x8029cd0       // unlikely

    loc_0x08029c20: // orphan
         w9 = 0x2800
         w9 = 0xe21               // '!\x0e'
         if (w11 == w9)
         b.eq 0x8029e10           // unlikely

    loc_0x08029c30: // orphan
         w9 = 0x4800
         w9 = 0xe21               // '!\x0e'
         if (w11 == w9)
         b.ne 0x8029dd8           // likely

    loc_0x08029c40: // orphan
         w9 = 0xa5                // '\xa5'
         jmp 0x8029e14

    loc_0x08029c48: // orphan
         w9 = 0x3800
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         b.ne 0x8029d10           // likely

    loc_0x08029c58: // orphan
         jmp 0x8029cc0

    loc_0x08029c5c: // orphan
         w9 = 0xa7                // '\xa7'

    loc_0x08029c60: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8029be4, 0x8029c0c
         if (w10 == 3)
         b.eq 0x8028558           // unlikely

    loc_0x08029c68: // orphan
         w11 = 0x8
         w8 = 0x20
         w11 = w11 << w10
         [x1 + 0x20] = w8         // arg2
         [x1 + 0x1f] = (byte) w11 // arg2
         jmp 0x8029e48

    loc_0x08029c80: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         jmp ifle 0x8029cd0       // likely

    loc_0x08029c90: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         jmp ifgt 0x8029d10       // unlikely

    loc_0x08029ca0: // orphan
         w9 = 0xb800
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         b.eq 0x8029d40           // unlikely

    loc_0x08029cb0: // orphan
         w9 = 0x3800
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         b.ne 0x8029dd8           // likely

    loc_0x08029cc0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8029c58
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0x9f                // '\x9f'
         w11 = 0x1
         jmp 0x8029d7c

    loc_0x08029cd0: // orphan
         w9 = 0x3800
         w9 = 0xe30               // '0\x0e'
         if (w11 == w9)
         b.eq 0x8029d50           // unlikely

    loc_0x08029ce0: // orphan
         w9 = 0xa800
         w9 = 0xe30               // '0\x0e'
         if (w11 == w9)
         b.eq 0x8029d60           // unlikely

    loc_0x08029cf0: // orphan
         w9 = 0xa800
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         b.ne 0x8029dd8           // likely

    loc_0x08029d00: // orphan
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xa1                // '\xa1'
         jmp 0x8029d7c

    loc_0x08029d10: // orphan
         w9 = 0xa800
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         b.eq 0x8029d70           // unlikely

    loc_0x08029d20: // orphan
         w9 = 0xa800
         w9 = 0x2e31              // '1.'
         if (w11 == w9)
         b.ne 0x8029dd8           // likely

    loc_0x08029d30: // orphan
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xa3                // '\xa3'
         jmp 0x8029d7c

    loc_0x08029d40: // orphan
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0x9d                // '\x9d'
         jmp 0x8029d7c

    loc_0x08029d50: // orphan
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0x9e                // '\x9e'
         w12 = 0x1
         jmp 0x8029d7c

    loc_0x08029d60: // orphan
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xa0                // '\xa0'
         jmp 0x8029d7c

    loc_0x08029d70: // orphan
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xa2                // '\xa2'

    loc_0x08029d7c: // orphan
         // XREFS: CODE 0x08029ccc  CODE 0x08029d0c  CODE 0x08029d3c  
         // XREFS: CODE 0x08029d4c  CODE 0x08029d5c  CODE 0x08029d6c  
         if (w10 == 2)
         b.eq 0x8029d94           // unlikely

    loc_0x08029d84: // orphan
         w8 = w10                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 3)
         b.eq 0x802855c           // unlikely

    loc_0x08029d90: // orphan
         jmp 0x8029d98

    loc_0x08029d94: // orphan
         tbz w0,0x1e,0x8028558    // likely

    loc_0x08029d98: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8029d90
         w13 = w0 & 0x40000000    // arg1
         w14 = 0x1e
         if (w13 == 0)
         w13 = ~0x7f              // '\x7f'
         w15 = 0x40               // '@'
         w11 = w12 | w11
         csel w12,w15,w13, eq
         w13 = 0x8
         w10 = w13 << w10
         [x1, 0x20] = (w14,2)     // arg2
         w9 = w10 << w11
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1f] = (byte) w12 // arg2
         [x1 + 0x3e] = (byte) w10 // arg2
         [x1 + 0x3f] = (byte) w9  // arg2 // " "
         jmp 0x802855c

    loc_0x08029dd8: // orphan
         w9 = 0xfc00
         w10 = 0xd800
         w9 = 0xdfbf              // '\xbf\xdf'
         w10 = 0x5e30             // '0^'
         w9 = w0 & w9             // arg1
         if (w9 == w10)
         b.ne 0x8029e6c           // likely

    loc_0x08029df4: // orphan
         tbnz w0,0x1d,0x8029eb0   // unlikely

    loc_0x08029df8: // orphan
         tbnz w0,0x16,0x8028558   // unlikely

    loc_0x08029dfc: // orphan
         w8 = 0x10
         w9 = 0x20
         jmp 0x8029ec4

    loc_0x08029e08: // orphan
         w9 = 0xa7                // '\xa7'
         jmp 0x8029e14

    loc_0x08029e10: // orphan
         w9 = 0xa4                // '\xa4'

    loc_0x08029e14: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8029ba4, 0x8029c44, 0x8029e0c
         if (w10 == 3)
         b.eq 0x8028558           // unlikely

    loc_0x08029e1c: // orphan
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         w8 = 0x1f
         csel w11,w12,w11, eq
         [x1 + 0x20] = w8         // arg2
         [x1 + 0x1f] = (byte) w11 // arg2
         tbz w0,0x1e,0x8029e48    // likely

    loc_0x08029e3c: // orphan
         w8 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         w8 = w8 | 8
         [x1 + 0x38] = w8         // arg2

    loc_0x08029e48: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8029c7c
         w11 = 0x10
         w12 = 0x8
         w11 = w11 << w10
         w10 = w12 << w10
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x24] = w9         // arg2
         [x1 + 0x3e] = (byte) w11 // arg2
         [x1 + 0x3f] = (byte) w10 // arg2
         jmp 0x802855c

    loc_0x08029e6c: // orphan
         w8 = w8 + 0x7f,lsl 12
         w10 = 0xc7ff             // '\xff\xc7'
         w9 = w0 & w8             // arg1
         w8 = 0x1
         w10 = 0xeb0              // '\xb0\x0e'
         if (w9 == w10)
         jmp ifgt 0x8029ee0       // unlikely

    loc_0x08029e88: // orphan
         w10 = 0xc800
         w10 = 0xe30              // '0\x0e'
         if (w9 == w10)
         b.eq 0x8029f08           // unlikely

    loc_0x08029e98: // orphan
         w10 = 0xf800
         w10 = 0xe30              // '0\x0e'
         if (w9 == w10)
         b.ne 0x802855c           // likely

    loc_0x08029ea8: // orphan
         w9 = 0x33                // '3'
         jmp 0x8029f14

    loc_0x08029eb0: // orphan
         if ((w0 & 0x400000) == 0) // arg1
         w8 = 0x40                // '@'
         w9 = 0x20
         csel w8,w9,w8, eq
         w9 = w8 << 1

    loc_0x08029ec4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8029e04
         x10 = 0x1a
         [x1 + 0x3e] = (byte) w8  // arg2
         x10 = 0x18
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1f] = (byte) w9  // arg2
         [x1 + 0x20] = x10        // arg2
         jmp 0x802855c

    loc_0x08029ee0: // orphan
         w10 = 0xf800
         w10 = 0xeb0              // '\xb0\x0e'
         if (w9 == w10)
         b.eq 0x8029f10           // unlikely

    loc_0x08029ef0: // orphan
         w10 = 0xc800
         w10 = 0xeb0              // '\xb0\x0e'
         if (w9 == w10)
         b.ne 0x802855c           // likely

    loc_0x08029f00: // orphan
         w9 = 0x32                // '2'
         jmp 0x8029f14

    loc_0x08029f08: // orphan
         w9 = 0x31                // '1'
         jmp 0x8029f14

    loc_0x08029f10: // orphan
         w9 = 0x34                // '4'

    loc_0x08029f14: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8029eac, 0x8029f04, 0x8029f0c
         tbnz w0,0x1d,0x8029f30   // unlikely

    loc_0x08029f18: // orphan
         if ((w0 & 0x40000000) == 0) // arg1
         w10 = ~0x7f              // '\x7f'
         w11 = 0x40               // '@'
         w8 = 0x10
         csel w10,w11,w10, eq
         jmp 0x8029f3c

    loc_0x08029f30: // orphan
         tbz w0,0x1e,0x8028558    // likely

    loc_0x08029f34: // orphan
         w8 = 0x20
         w10 = 0x80               // '\x80'

    loc_0x08029f3c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8029f2c
         [x1 + 0x3e] = (byte) w8  // arg2
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = 0x1a
         [x1 + 0x1f] = (byte) w10 // arg2
         [x1 + 0x20] = w11        // arg2
         jmp 0x80282ac

}

/* ===== 0x0802a040 ===== */
int sym.arraylist_add (int esi, int edx) {
    loc_0x802a040:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp, 0x20] = (x20,2)
        (x9, 2) = 3   // arg1
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x10 = x9 + 1
        if (x8 == x10)
        b.hs 0x802a0ac // unlikely
            
    loc_0x802a0ac:
        x0 = [x20]    // 0xdb // 219
         // do {
    loc_0x802a0b0:
        // CODE XREF from sym.arraylist_add @ 0x802a0a8
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x20 + 8] = x10
        [x0 + x9,lsl 3] = x19
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802a070
    loc_0x802a084:
        x1 = x21 << 3 // int64_t arg2
        x0 = [x20]    // 0xdb // 219 // int64_t arg1
        w2 = 0xcc0    // '\xc0\f'
        0x802a090 ()  // 0x802a090(0x0, 0x0, 0xcc0, 0x0)
        if !x0 jmp 0x802a0d8 // likely
            
    loc_0x802a0d8:
        w8 = ~0xb
        jmp 0x802a0bc
         // do {
    loc_0x802a0bc:
        // CODE XREF from sym.arraylist_add @ 0x802a0dc
        (x20, 2) = 3
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0802a0d4
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802a10c ===== */
int sym.arraylist_remove (int esi, int edx) {
    loc_0x802a10c:
        hint 0x19
        [x18] + 8 = x30
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = [x0 + 8] // 0xc7 // 199 // arg1
        if (x9 == x1) // arg2
        b.ls 0x802a164 // likely
            
    loc_0x802a164:
        x20 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x802a168:
        // CODE XREF from sym.arraylist_remove @ 0x802a160
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        x30 = [x18 - 8]! // 0xd9 // 217
        hint 0x1d
        0x0802a17c
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0802a180 ===== */
int sym.arraylist_clear (int esi, int edx) {
    loc_0x802a180:
        hint 0x19
        [x0 + 8] = xzr // arg1
        hint 0x1d
        0x0802a18c
         // (break)
}

