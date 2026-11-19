// 6.1.ko.ko 内核模块伪代码 (radare2 pdc, 135 functions)


/* ===== 0x08003b80 ===== */
int sym.paradise_anon_open (int esi, int edx) {
    loc_0x8003b80:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8003000
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x8
        x0 = [x8]     // 0xcf // 207 // int64_t arg2
        0x8003ba4 ()  // 0x8003ba4(0x7400000048, 0xcc0, 0x8, 0x0)
        if !x0 jmp 0x8003bd8 // unlikely
            
    loc_0x8003bd8:
        // CODE XREF from sym.paradise_anon_open @ 0x8003ba8
        x0 = 0x8003000
        x0 = x0 + 0   // int64_t arg2 // U"Ht"
        0x8003be0 ()  // 0x8003be0(0x8003000, 0x0, 0x0, 0x0)
        w0 = ~0xb
        jmp 0x8003bc8
         // do {
    loc_0x8003bc8:
        // CODE XREFS from sym.paradise_anon_open @ 0x8003be8, 0x8003c04
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08003bd4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8003bac
    loc_0x8003bc0:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0xd8] = x20
    loc_0x08003bec: // orphan
             // CODE XREF from sym.paradise_anon_open @ 0x8003bbc
             x0 = 0x8003000
             x0 = x0 + 0              // int64_t arg2 // U"Ht"
             0x8003bf4 ()             // 0x8003bf4(0x8003000, 0x0, 0x0, 0x0)
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
             0x8003bfc ()             // 0x8003bfc(0x0, 0x0, 0x0, 0x0)
             w0 = ~0xb
             jmp 0x8003bc8

}

/* ===== 0x08003c9c ===== */
int sym.paradise_anon_ioctl (int esi, int edx) {
    loc_0x8003c9c:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x838] // 0xcf // 207
        w9 = [x8 + 4] // 0xcf // 207
        w8 = [x8 + 0x14] // 0xcf // 207
        w9 = w9 | w8
        if w9 jmp 0x8003fc4 // likely
            
    loc_0x8003fc4:
        // CODE XREF from sym.paradise_anon_ioctl @ 0x8003cc0
        x0 = ~0
        jmp 0x8003fb4
         // do {
    loc_0x8003fb4:
        // CODE XREF from sym.paradise_anon_ioctl @ 0x8003fc8
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08003fc0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8003cc4
    loc_0x8003ce8:
        w8 = 0x5714   // '\x14W'
        w8 = 0xc010   // '\x10\xc0'
        if (w1 == w8)
        jmp ifle 0x8003da0 // unlikely
            
    loc_0x8003da0:
        // CODE XREF from sym.paradise_anon_ioctl @ 0x8003cf4
        w8 = 0x570c   // '\fW'
        w8 = 0xc008
        if (w1 == w8)
        jmp ifle 0x8003eb0 // unlikely
            
    loc_0x8003eb0:
        // CODE XREF from sym.paradise_anon_ioctl @ 0x8003dac
        w8 = 0x5729   // ')W'
        w8 = 0xc004
        if (w1 == w8)
        b.eq 0x8003f98 // unlikely
            
    loc_0x8003f98:
        // CODE XREF from sym.paradise_anon_ioctl @ 0x8003ebc
        x0 = x2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8003f9c ()  // 0x8003f9c(0x0, 0x0, 0x0, 0x0)
        jmp 0x8003fac
         // do {
    loc_0x8003fac:
        // XREFS(21)
        x0 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8003cf8
    loc_0x8003d08:
        w8 = 0x5715   // '\x15W'
        w8 = 0xc010   // '\x10\xc0'
        if (w1 == w8)
        b.eq 0x8003f08 // unlikely
            
    loc_0x8003f08:
        // CODE XREF from sym.paradise_anon_ioctl @ 0x8003d14
        x0 = x2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8003f0c ()  // "'" // 0x8003f0c(0x0, 0x0, 0x0, 0x0)
        jmp 0x8003fac
    loc_0x08003d18: // orphan
             w8 = 0x5738              // '8W'
             w8 = 0xc010              // '\x10\xc0'
             if (w1 == w8)
             b.eq 0x8003f14           // unlikely

    loc_0x08003d28: // orphan
         w8 = 0x5739              // '9W'
         w8 = 0xc010              // '\x10\xc0'
         if (w1 == w8)
         b.ne 0x8003fb0           // likely

    loc_0x08003d38: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003d3c ()             // 0x8003d3c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003d44: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003ce4
         w8 = 0x5727              // ''W'
         w8 = 0xc198              // '\x98\xc1'
         if (w1 == w8)            // arg2
         jmp ifle 0x8003dec       // unlikely

    loc_0x08003d54: // orphan
         w8 = 0x572b              // '+W'
         w8 = 0xc360              // '`\xc3'
         if (w1 == w8)            // arg2
         jmp ifgt 0x8003e74       // likely

    loc_0x08003d64: // orphan
         w8 = 0x5728              // '(W'
         w8 = 0xc198              // '\x98\xc1'
         if (w1 == w8)
         b.eq 0x8003f20           // unlikely

    loc_0x08003d74: // orphan
         w8 = 0x572a              // '*W'
         w8 = 0xc198              // '\x98\xc1'
         if (w1 == w8)
         b.eq 0x8003f2c           // unlikely

    loc_0x08003d84: // orphan
         w8 = 0x5716              // '\x16W'
         w8 = 0xc204
         if (w1 == w8)
         b.ne 0x8003fb0           // likely

    loc_0x08003d94: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003d98 ()             // 0x8003d98(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003dc0: // orphan
         w8 = 0x570e              // '\x0eW'
         w8 = 0xc008
         if (w1 == w8)
         b.eq 0x8003f44           // unlikely

    loc_0x08003dd0: // orphan
         w8 = 0x573c              // '<W'
         w8 = 0xc008
         if (w1 == w8)
         b.ne 0x8003fb0           // likely

    loc_0x08003de0: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003de4 ()             // "q" // 0x8003de4(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003dec: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003d50
         w8 = 0x570b              // '\vW'
         w8 = 0xc028              // '(\xc0'
         if (w1 == w8)            // arg2
         jmp ifle 0x8003edc       // unlikely

    loc_0x08003dfc: // orphan
         w8 = 0x570c              // '\fW'
         w8 = 0xc028              // '(\xc0'
         if (w1 == w8)            // arg2
         b.eq 0x8003f50           // unlikely

    loc_0x08003e0c: // orphan
         w8 = 0x570b              // '\vW'
         w8 = 0xc104
         if (w1 == w8)            // arg2
         b.eq 0x8003f5c           // unlikely

    loc_0x08003e1c: // orphan
         w8 = 0x570a              // '\nW'
         w8 = 0xc120              // ' \xc1'
         if (w1 == w8)            // arg2
         b.ne 0x8003fb0           // likely

    loc_0x08003e2c: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003e30 ()             // "^" // 0x8003e30(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003e38: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003d04
         w8 = 0x5713              // '\x13W'
         w8 = 0xc018              // '\x18\xc0'
         if (w1 == w8)
         b.eq 0x8003f68           // unlikely

    loc_0x08003e48: // orphan
         w8 = 0x572b              // '+W'
         w8 = 0xc018              // '\x18\xc0'
         if (w1 == w8)
         b.eq 0x8003f74           // unlikely

    loc_0x08003e58: // orphan
         w8 = 0x573a              // ':W'
         w8 = 0xc020              // ' \xc0'
         if (w1 == w8)
         b.ne 0x8003fb0           // likely

    loc_0x08003e68: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003e6c ()             // "O" // 0x8003e6c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003e74: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003d60
         w8 = 0x572c              // ',W'
         w8 = 0xc360              // '`\xc3'
         if (w1 == w8)            // arg2
         b.eq 0x8003f80           // unlikely

    loc_0x08003e84: // orphan
         w8 = 0x571e              // '\x1eW'
         w8 = 0x4008
         if (w1 == w8)
         b.eq 0x8003f8c           // unlikely

    loc_0x08003e94: // orphan
         w8 = 0x571f              // '\x1fW'
         w8 = 0x4018              // '\x18@'
         if (w1 == w8)
         b.ne 0x8003fb0           // likely

    loc_0x08003ea4: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003ea8 ()             // "@" // 0x8003ea8(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003ed0: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003ed4 ()             // "5" // 0x8003ed4(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003edc: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003df8
         w8 = 0x573b              // '//W'
         w8 = 0xc020              // ' \xc0'
         if (w1 == w8)            // arg2
         b.eq 0x8003fa4           // unlikely

    loc_0x08003eec: // orphan
         w8 = 0x5709
         w8 = 0xc028              // '(\xc0'
         if (w1 == w8)            // arg2
         b.ne 0x8003fb0           // likely

    loc_0x08003efc: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003f00 ()             // "*" // 0x8003f00(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003f14: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003d24
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003f18 ()             // "$" // 0x8003f18(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003f20: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003d70
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003f24 ()             // "!" // 0x8003f24(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003f2c: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003d80
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003f30 ()             // 0x8003f30(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003f38: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003dbc
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003f3c ()             // 0x8003f3c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003f44: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003dcc
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003f48 ()             // 0x8003f48(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003f50: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003e08
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003f54 ()             // 0x8003f54(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003f5c: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003e18
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003f60 ()             // 0x8003f60(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003f68: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003e44
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003f6c ()             // 0x8003f6c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003f74: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003e54
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003f78 ()             // 0x8003f78(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003f80: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003e80
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003f84 ()             // "\t" // 0x8003f84(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003f8c: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003e90
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003f90 ()             // 0x8003f90(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003fac

    loc_0x08003fa4: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8003ee8
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003fa8 ()             // 0x8003fa8(0x0, 0x0, 0x0, 0x0)

    loc_0x08003fb0: // orphan
         // XREFS: CODE 0x08003d34  CODE 0x08003d90  CODE 0x08003ddc  
         // XREFS: CODE 0x08003e28  CODE 0x08003e64  CODE 0x08003ea0  
         // XREFS: CODE 0x08003ecc  CODE 0x08003ef8  
         [x19] = x20

}

/* ===== 0x08003fd0 ===== */
int sym.paradise_anon_release (int esi, int edx) {
    loc_0x8003fd0:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        x20 = [x1 + 0xd8] // 0xc8 // 200 // arg2
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x8003ff0 ()  // 0x8003ff0(0x0, 0x0, 0x0, 0x0)
        if !x20 jmp 0x8004050 // likely
            
    loc_0x8004050:
        // CODE XREF from sym.paradise_anon_release @ 0x8003ff4
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        // DATA XREFS from sym.is_file_exist @ 0x800457c, 0x80045dc
        // DATA XREF from sym.kallsyms_lookup_name_ex @ 0x8004720
        // DATA XREF from sym.disable_kprobe_blacklist @ 0x8004860
        // DATA XREF from sym.find_process_by_name @ 0x8004da4
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08004064
         // } else {
    loc_0x8003ff8:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x8004044 // likely
        }
        return eax;
    loc_0x8004000:
        // XREFS(96)
        x8 = [x0 + 8] // 0xc7 // 199
        if !x8 jmp 0x8004040 // unlikely
            
    loc_0x8004040:
        // CODE XREFS from sym.paradise_anon_release @ 0x8004004, 0x8004024
        0x8004040 ()  // 0x8004040(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x8004044:
        // CODE XREF from sym.paradise_anon_release @ 0x8003ffc
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        // XREFS: DATA 0x08004574  DATA 0x080045d4  DATA 0x08004718
        // XREFS: DATA 0x08004858  DATA 0x08004d9c  CODE 0x08004fb0
        0x8004048 ()  // 0x8004048(0x0, 0x0, 0x0, 0x0)
        [x19 + 0xd8] = xzr
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08004010: // orphan
             // CODE XREFS from sym.paradise_anon_release @ 0x8004030, 0x800403c
             x0 = [x20]               // 0xdb // 219
             w9 = w21 + 1
             // DATA XREFS from sym.is_file_exist @ 0x800459c, 0x80045fc
             // DATA XREF from sym.kallsyms_lookup_name_ex @ 0x8004740
             // DATA XREF from sym.disable_kprobe_blacklist @ 0x8004880
             // DATA XREF from sym.find_process_by_name @ 0x8004dc4
             x21 = w9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x8 = [x0 + 8]            // 0xc7 // 199
             if (x8 == x21)
             b.ls 0x8004040           // unlikely

    loc_0x08004028: // orphan
         // XREFS: CODE 0x0800400c  DATA 0x08004584  DATA 0x080045e4  
         // XREFS: DATA 0x08004728  DATA 0x08004868  DATA 0x08004dac  
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800402c ()             // 0x800402c(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8004010     // likely

    loc_0x08004034: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // DATA XREFS from sym.is_file_exist @ 0x800458c, 0x80045ec
         // DATA XREF from sym.kallsyms_lookup_name_ex @ 0x8004730
         // DATA XREF from sym.disable_kprobe_blacklist @ 0x8004870
         // DATA XREF from sym.find_process_by_name @ 0x8004db4
         0x8004038 ()             // 0x8004038(0x0, 0x0, 0x0, 0x0)
         jmp 0x8004010

}

/* ===== 0x0800406c ===== */
int sym.reboot_handler_pre (int esi, int edx) {
    loc_0x800406c:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        // DATA XREFS from sym.is_file_exist @ 0x800456c, 0x80045cc
        // DATA XREF from sym.kallsyms_lookup_name_ex @ 0x8004710
        // DATA XREF from sym.disable_kprobe_blacklist @ 0x8004850
        // DATA XREF from sym.find_process_by_name @ 0x8004d94
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x19,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x19 + 0x838] // 0xda // 218
        w9 = [x8 + 4] // 0xcf // 207
        w8 = [x8 + 0x14] // 0xcf // 207
        w8 = w9 | w8
        if w8 jmp 0x800412c // likely
            
    loc_0x800412c:
        // CODE XREFS from sym.reboot_handler_pre @ 0x8004094, 0x80040ac, 0x80040c0, 0x8004170, 0x8004188
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08004140
         // } else {
    loc_0x8004098:
        x8 = [x1]     // 0xc8 // 200 // arg2
        w10 = 0x9c4d  // 'M\x9c'
        w10 = 0x7a3b  // '//z'
        w9 = [x8]     // 0xcf // 207
        if (w9 == w10)
        b.ne 0x800412c // likely
        }
        return eax;
    loc_0x80040b0:
        w9 = [x8 + 8] // 0xcf // 207
        w10 = 0x1d6b  // 'k\x1d'
        w10 = 0x2f8e  // '\x8e/'
        if (x9 == x10)
        b.ne 0x800412c // likely
    loc_0x80040c4:
        x21 = [x8 + 0x18] // 0xcf // 207
        if !x21 jmp 0x8004144 // unlikely
            
    loc_0x8004144:
        // CODE XREF from sym.reboot_handler_pre @ 0x80040c8
        x0 = 0x8004000
        x0 = x0 + 0
        jmp 0x8004184
         // do {
    loc_0x8004184:
        // CODE XREFS from sym.reboot_handler_pre @ 0x800414c, 0x8004158
        0x8004184 ()  // 0x8004184(0x0, 0x0, 0x0, 0x0)
        jmp 0x800412c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80040cc
    loc_0x80040e4:
        x8 = 0x8004000
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8004000
        x9 = x9 + 0
        x8 = [x8]     // 0xcf // 207
        [x0, 8] = (x9,2)
        if !x8 jmp 0x800415c // unlikely
            
    loc_0x800415c:
        // CODE XREF from sym.reboot_handler_pre @ 0x80040fc
        x0 = 0x8004000
        x0 = x0 + 0   // int64_t arg1
        0x8004164 ()  // 0x8004164(0x8004000, 0x0, 0x0, 0x0)
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800416c ()  // 0x800416c(0x0, 0x0, 0x0, 0x0)
        jmp 0x800412c
    loc_0x08004100: // orphan
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w2 = 0x1
             ldur w16,[x8,-4]         // 0xcf // 207
             w17 = 0x9238             // '8\x92'
             w17 = 0x2a0
             if (w16 == w17)
             b.eq 0x8004124           // unlikely

    loc_0x08004120: // orphan
         brk 0x8228

    loc_0x08004124: // orphan
         // CODE XREF from sym.reboot_handler_pre @ 0x800411c
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         if w0 jmp 0x8004174      // unlikely

    loc_0x08004150: // orphan
         // CODE XREF from sym.reboot_handler_pre @ 0x80040e0
         x0 = 0x8004000
         x0 = x0 + 0
         jmp 0x8004184

    loc_0x08004174: // orphan
         // CODE XREF from sym.reboot_handler_pre @ 0x8004128
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004178 ()             // 0x8004178(0x0, 0x0, 0x0, 0x0)
         x0 = 0x8004000
         x0 = x0 + 0

}

/* ===== 0x08004190 ===== */
int sym.paradise_install_fd_tw_func (int esi, int edx) {
    loc_0x8004190:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x80041a4 ()  // 0x80041a4(0x0, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x80042a0 // unlikely
            
    loc_0x80042a0:
        // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80041a8
        mrs x20,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = [x20 + 0x630] // 0xdb // 219
        x0 = 0x8004000
        x0 = x0 + 0   // int64_t arg1
        0x80042b0 ()  // 0x80042b0(0x8004000, -1, 0x0, 0x0)
        x8 = [x19 + 0x10] // 0xda // 218
        if !x8 jmp 0x800427c // likely
            
    loc_0x800427c:
        // CODE XREFS from sym.paradise_install_fd_tw_func @ 0x80042b8, 0x800437c, 0x800438c, 0x80043a8
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8004280 ()  // 0x8004280(0x0, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08004290
         // } else {
    loc_0x80042bc:
        w9 = (byte) [x20 + 0x46] // 0xdb // 219
        tbnz w9,5,0x80042d0 // likely
         // } else {
        }
        return eax;
        goto loc_0x80041ac
    loc_0x80041b8:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w10,5,0x80041d0 // likely
            
    loc_0x80041d0:
        // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80041c0
        x10 = x9 << 8
        x10 = x9 & x10,asr 8
         // do {
    loc_0x80041d8:
        // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80041cc
        x11 = xzr | 0x7fffff0000
        x11 = 0xfffd  // '\xfd\xff'
        if (x10 == x11)
        b.hs 0x8004294 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080041e8: // orphan
             x9 = x9 & 0xff7fffffffffffff
             jmp 0x80043ac

    loc_0x080041f4: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80043b8
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w10 & 0x80
         if w11 jmp 0x800420c     // unlikely

    loc_0x08004200: // orphan
         
         w11 = 0x60               // '`'
         // CODE XREF from sym.paradise_install_fd_tw_func @ +0x240
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800420c: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80041fc
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004230: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80043b4
         // CODE XREF from sym.paradise_install_fd_tw_func @ +0x27c
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sttr w20,[x9]
         jmp 0x80043bc

    loc_0x08004240: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80043c8
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w9 & 0x80
         if w10 jmp 0x8004258     // unlikely

    loc_0x0800424c: // orphan
         
         w10 = 0x60               // '`'
         // CODE XREF from sym.paradise_install_fd_tw_func @ +0x248
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004258: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x8004248
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 & 0xffffffffffff
         x11 = x10 - 1,lsl 12
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004278: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80043c4
         // CODE XREF from sym.paradise_install_fd_tw_func @ +0x290
         if w8 jmp 0x8004294      // unlikely

    loc_0x08004294: // orphan
         // CODE XREFS from sym.paradise_install_fd_tw_func @ 0x80041e4, 0x8004278
         x0 = 0x8004000
         x0 = x0 + 0
         jmp 0x8004398

    loc_0x080042c4: // orphan
         x10 = [x20]              // 0xdb // 219
         x9 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w10,0x1a,0x80042d8   // likely

    loc_0x080042d0: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80042c0
         x9 = x8 << 8
         x9 = x8 & x9,asr 8

    loc_0x080042d8: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80042cc
         x10 = xzr | 0x7fffff0000
         x10 = 0xfffd             // '\xfd\xff'
         if (x9 == x10)
         b.hs 0x8004380           // unlikely

    loc_0x080042e8: // orphan
         x8 = x8 & 0xff7fffffffffffff
         jmp 0x80043dc

    loc_0x080042f4: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80043e8
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w9 & 0x80
         if w10 jmp 0x800430c     // unlikely

    loc_0x08004300: // orphan
         
         w10 = 0x60               // '`'
         // CODE XREF from sym.paradise_install_fd_tw_func @ +0x270
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800430c: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80042fc
         x10 = [x20 + 8]          // 0xdb // 219
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004330: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80043e4
         // CODE XREF from sym.paradise_install_fd_tw_func @ +0x2a4
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = ~0
         sttr w10,[x8]
         jmp 0x80043ec

    loc_0x08004344: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80043f8
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 & 0x80
         if w10 jmp 0x800435c     // unlikely

    loc_0x08004350: // orphan
         
         w10 = 0x60               // '`'
         // CODE XREF from sym.paradise_install_fd_tw_func @ +0x278
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800435c: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800434c
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 & 0xffffffffffff
         x11 = x10 - 1,lsl 12
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800437c: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80043f4
         // CODE XREF from sym.paradise_install_fd_tw_func @ +0x2b8
         if !w9 jmp 0x800427c     // likely

    loc_0x08004380: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80042e4
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004388 ()             // 0x8004388(0x8004000, 0x0, 0x0, 0x0)
         jmp 0x800427c

    loc_0x08004390: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80041b4
         x0 = 0x8004000
         x0 = x0 + 0

    loc_0x08004398: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800429c
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800439c ()             // 0x800439c(0x0, 0x0, 0x0, 0x0)
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80043a4 ()             // 0x80043a4(0x0, 0x0, 0x0, 0x0)
         jmp 0x800427c

    loc_0x080043ac: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80041ec
         x10 = 0x8004000
         x10 = [x10]              // 0xd1 // 209
         tbnz w10,0x1d,0x8004230  // likely

    loc_0x080043b8: // orphan
         jmp 0x80041f4

    loc_0x080043bc: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x8004238
         x9 = 0x8004000
         x9 = [x9]                // 0xd0 // 208
         tbnz w9,0x1d,0x8004278   // likely

    loc_0x080043c8: // orphan
         jmp 0x8004240

    loc_0x080043dc: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80042ec
         x9 = 0x8004000
         x9 = [x9]                // 0xd0 // 208
         tbnz w9,0x1d,0x8004330   // likely

    loc_0x080043e8: // orphan
         jmp 0x80042f4

    loc_0x080043ec: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800433c
         x8 = 0x8004000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x800437c   // likely

    loc_0x080043f8: // orphan
         jmp 0x8004344

}

/* ===== 0x08005ab8 ===== */
int sym.lockfree_va_to_pa (int esi, int edx) {
    loc_0x8005ab8:
        // CALL XREFS from sym.do_read_physical_memory @ 0x80055cc, 0x8005780
        // CALL XREFS from sym.do_write_physical_memory @ 0x8005dc0, 0x8005f78
        sp = sp - 0x30
        ubfx x8,x1,0x1e, 9 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x0 + x8,lsl 3] // 0xcf000000c7 // 889058230471 // arg1
        [var_28h] = x8
        x8 = [var_28h] // 0x4 // 4
        [var_20h] = x8
        x9 = [var_20h] // 0x4 // 4
        [var_0h] = x9
        if !x9 jmp 0x8005bb8 // likely
            
    loc_0x8005bb8:
        w0 = ~0xd
        sp = arg_30h
        0x08005bc0
         // } else {
    loc_0x8005adc:
        x8 = x9 & 3
        if (x8 == 3)
        b.eq 0x8005b04 // unlikely
        }
        return eax;
    loc_0x8005ae8:
        if (x8 == 1)
        b.ne 0x8005bb8 // likely
    loc_0x8005af0:
        x9 = x9 & 0xffffc0000000
        x8 = x1 & 0x3fffffff // arg2
        bfxil x9,x1,0, 0x1e // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w10 = 0x4000
        jmp 0x8005b54
         // do {
    loc_0x8005b54:
        // CODE XREF from sym.lockfree_va_to_pa @ 0x8005b00
        x8 = x10 - x8
        [x2] = x9     // arg3
         // } while (?);
        }
        return eax;
    loc_0x08005b04: // orphan
             x8 = 0x8005000
             x9 = x9 & 0x7ffffff000
             ubfx x10,x1,0x15, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
             x8 = [x8]                // 0xcf // 207
             x9 = x9 - x8
             x9 = x9 | 0xffffff8000000000
             x9 = [x9 + x10,lsl 3]    // 0xd1000000d0 // 897648165072
             [var_0h_2] = x9
             if !x9 jmp 0x8005bb8     // unlikely

    loc_0x08005b28: // orphan
         x11 = 0x1
         x10 = x9 & 3
         x11 = 0xc00
         if ((x9 & x11) == 0)
         b.eq 0x8005b6c           // unlikely

    loc_0x08005b3c: // orphan
         if (x10 == 3)
         b.eq 0x8005b6c           // unlikely

    loc_0x08005b44: // orphan
         x9 = x9 & 0xffffffe00000
         x8 = x1 & 0x1fffff       // arg2
         bfxil x9,x1,0, 0x15      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         w10 = 0x20

    loc_0x08005b5c: // orphan
         // CODE XREF from sym.lockfree_va_to_pa @ 0x8005bb4
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x3] = x8                // arg4
         sp = arg_30h
         

    loc_0x08005b6c: // orphan
         if (x10 == 3)
         b.ne 0x8005bb8           // likely

    loc_0x08005b74: // orphan
         x9 = x9 & 0x7ffffff000
         x8 = x9 - x8
         ubfx x9,x1,0xc, 9        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         x8 = x8 | 0xffffff8000000000
         x8 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         x9 = 0x1
         x9 = 0x400
         if ((x8 & x9) == 0)
         [var_0h_3] = x8
         b.eq 0x8005bb8           // unlikely

    loc_0x08005b9c: // orphan
         x9 = x1 & 0xfff          // arg2
         x10 = x8 & 0xfffffffff000
         w8 = 0x1000
         bfxil x10,x1,0, 0xc      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         x8 = x8 - x9
         [x2] = x10               // arg3
         jmp 0x8005b5c

}

/* ===== 0x08007a38 ===== */
int sym.kmap_atomic (int esi, int edx) {
    loc_0x8007a38:
        // CALL XREF from sym.do_read_physical_memory @ 0x80059dc
        // CALL XREF from sym.swap_write_page_direct @ 0x800637c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = [x8 + 0x10] // 0xcf // 207
        w9 = w9 + 1
        [x8 + 0x10] = w9
        w9 = [x8 + 0xb68] // 0xcf // 207
        w9 = w9 + 1
        [x8 + 0xb68] = w9
        x8 = 0xff00
        jmp 0x8007a64
         // do {
    loc_0x8007a64:
        // CODE XREF from sym.kmap_atomic @ 0x8007a58
        x9 = x0 << 6  // arg1
        x9 = x9 & 0xfffffffffff000
        x0 = x8 | x9
        0x08007a70
         // } while (?);
        }
        return eax;
}

/* ===== 0x08007a74 ===== */
int sym.__kunmap_atomic (int esi, int edx) {
    loc_0x8007a74:
        // CALL XREF from sym.do_read_physical_memory @ 0x80059f4
        // CALL XREF from sym.swap_write_page_direct @ 0x8006390
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = [x8 + 0xb68] // 0xcf // 207
        w9 = w9 - 1
        [x8 + 0xb68] = w9
        x9 = [x8 + 0x10] // 0xcf // 207
        x9 = x9 - 1
        [x8 + 0x10] = w9
        b.eq 0x8007ab4 // unlikely
            
    loc_0x8007ab4:
        0x8007ab4 ()  // 0x8007ab4(0x0, 0x0, 0x0, 0x0)
        jmp 0x8007aa8
         // do {
    loc_0x8007aa8:
        // CODE XREF from sym.__kunmap_atomic @ 0x8007ab8
        (x29, 2) = 3
        hint 0x1d
        0x08007ab0
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08006190 ===== */
int sym.swap_write_page_direct (int esi, int edx) {
    loc_0x8006190:
        // CALL XREF from sym.do_write_physical_memory @ 0x8006120
        hint 0x19
        [sp, -0x50]! = (x29,2)
        [sp, 0x10] = (x26,2)
        [sp, 0x20] = (x24,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w24 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = x3 + x2  // arg4
        if (x8 == 1)
        b.hi 0x800633c // unlikely
            
    loc_0x800633c:
        // CODE XREF from sym.swap_write_page_direct @ 0x8006374
        w0 = w24      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08006358
         // } else {
    loc_0x80061bc:
        x8 = 0x8006000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800633c // unlikely
        }
        return eax;
    loc_0x80061c8:
        x9 = x0 >> 0x3a // arg1
        if (w9 == 0x1b)
        b.hi 0x8006338 // unlikely
            
    loc_0x8006338:
        w24 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
    loc_0x080061d4: // orphan
             x26 = [x8 + x9,lsl 3]    // 0xd0000000cf // 893353197775
             if !x26 jmp 0x8006338    // likely

    loc_0x080061dc: // orphan
         x8 = [x26 + 0xa0]        // 0xe1 // 225
         if !x8 jmp 0x8006338     // unlikely

    loc_0x080061e4: // orphan
         x21 = x3                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         x22 = x2                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         x20 = x1                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfiz x25,x0,3, 0x3a     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w0 = 0xc00
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg4
         0x8006208 ()             // 0x8006208(0xc00, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if x22 jmp 0x80062d8     // unlikely

    loc_0x08006214: // orphan
         if (x21 == 1)
         b.ne 0x80062d8           // likely

    loc_0x0800621c: // orphan
         if !x19 jmp 0x8006338    // likely

    loc_0x08006220: // orphan
         mrs x21,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = [x21 + 0x10]        // 0xdc // 220
         w8 = w8 + 1
         [x21 + 0x10] = w8
         w8 = [x21 + 0xb68]       // 0xdc // 220
         w8 = w8 + 1
         [x21 + 0xb68] = w8
         x8 = 0xff00
         jmp 0x800624c

    loc_0x0800624c: // orphan
         // CODE XREF from sym.swap_write_page_direct @ 0x8006240
         x9 = x19 << 6
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x9 = x9 & 0xfffffffffff000
         w2 = 0x1000
         x0 = x8 | x9             // int64_t arg1
         0x8006260 ()             // 0x8006260(0x0, 0x0, 0x1000, 0x0)
         w8 = [x21 + 0xb68]       // 0xdc // 220
         w8 = w8 - 1
         [x21 + 0xb68] = w8
         x8 = [x21 + 0x10]        // 0xdc // 220
         x8 = x8 - 1
         [x21 + 0x10] = w8
         b.eq 0x8006398           // unlikely

    loc_0x08006280: // orphan
         x8 = [x21 + 0x10]        // 0xdc // 220
         if !x8 jmp 0x8006398     // likely

    loc_0x08006288: // orphan
         // CODE XREFS from sym.swap_write_page_direct @ 0x8006394, 0x800639c
         x0 = [x26 + 0xa0]        // 0xe1 // 225 // int64_t arg1
         x4 = 0x8006000
         x4 = x4 + 0
         w1 = 0x1
         w2 = 0x801
         w3 = 0xc00
         0x80062a0 ()             // 0x80062a0(-1, 0x1, 0x801, 0xc00)
         if !x0 jmp 0x8006330     // unlikely

    loc_0x080062a8: // orphan
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x1000
         w3 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x20] = x25
         0x80062bc ()             // 0x80062bc(0x0, 0x0, 0x1000, 0x0)
         if !w0 jmp 0x800635c     // likely

    loc_0x080062c4: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80062c8 ()             // 0x80062c8(0x0, 0x0, 0x0, 0x0)
         if (w0 == 0)
         cset w24,eq
         jmp 0x8006360

    loc_0x080062d8: // orphan
         if !x19 jmp 0x8006338    // likely

    loc_0x080062dc: // orphan
         x0 = [x26 + 0xa0]        // 0xe1 // 225 // int64_t arg1
         x4 = 0x8006000
         x4 = x4 + 0
         w1 = 0x1
         w2 = 0x800
         w3 = 0xc00
         0x80062f4 ()             // 0x80062f4(-1, 0x1, 0x800, 0xc00)
         if !x0 jmp 0x8006330     // unlikely

    loc_0x080062fc: // orphan
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x1000
         w3 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x20] = x25
         0x8006310 ()             // 0x8006310(0x0, 0x0, 0x1000, 0x0)
         if !w0 jmp 0x800635c     // likely

    loc_0x08006318: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800631c ()             // 0x800631c(0x0, 0x0, 0x0, 0x0)
         w24 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8006328 ()             // 0x8006328(0x0, 0x0, 0x0, 0x0)
         if !w24 jmp 0x8006378    // likely

    loc_0x08006330: // orphan
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8006368

    loc_0x0800635c: // orphan
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006360: // orphan
         // CODE XREF from sym.swap_write_page_direct @ 0x80062d4
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8006364 ()             // 0x8006364(0x0, 0x0, 0x0, 0x0)

    loc_0x08006368: // orphan
         // CODE XREF from sym.swap_write_page_direct @ 0x8006334
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006370 ()             // 0x8006370(0x0, 0x0, 0x0, 0x0)
         jmp 0x800633c

    loc_0x08006378: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.kmap_atomic ()       // sym.kmap_atomic(0x0)
         x0 = x0 + x22            // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x800638c ()             // 0x800638c(0x0, 0x0, 0x0, 0x0)
         sym.__kunmap_atomic ()
         jmp 0x8006288

    loc_0x08006398: // orphan
         0x8006398 ()             // 0x8006398(0x0, 0x0, 0x0, 0x0)
         jmp 0x8006288

}

/* ===== 0x08007034 ===== */
int sym.resolve_hide_symbols (int esi, int edx) {
    loc_0x8007034:
        // CALL XREF from sym.do_hide_path @ 0x8006c68
        // CALL XREF from sym.paradise_hide_cleanup @ 0x80074e4
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8007000
        x8 = [x19]    // 0xda // 218
        if x8 jmp 0x8007064 // likely
            
    loc_0x8007064:
        x20 = 0x8007000
        x8 = [x20]    // 0xdb // 219
        if x8 jmp 0x8007080 // likely
            
    loc_0x8007080:
        x21 = 0x8007000
        x0 = [x21]    // 0xdc // 220
        if x0 jmp 0x800709c // likely
            
    loc_0x800709c:
        x22 = 0x8007000
        x8 = [x22]    // 0xdd // 221
        if x8 jmp 0x80070c0 // likely
            
    loc_0x80070c0:
        x9 = [x19]    // 0xda // 218
        if !x9 jmp 0x80070f0 // likely
            
    loc_0x80070f0:
        x0 = 0x8007000
        x0 = x0 + 0
        0x80070f8 ()  // " " // 0x80070f8(0x8007000, 0x0, 0x0, 0x0)
        w0 = ~0x1
        jmp 0x80070dc
         // do {
    loc_0x80070dc:
        // CODE XREF from sym.resolve_hide_symbols @ 0x8007100
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x080070ec
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080070d0: // orphan
             if !x0 jmp 0x80070f0     // likely

    loc_0x080070d4: // orphan
         if !x8 jmp 0x80070f0     // likely

    loc_0x080070d8: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

}

/* ===== 0x08007104 ===== */
int sym.hide_umount_path (int esi, int edx) {
    loc_0x8007104:
        // CALL XREFS from sym.do_hide_path @ 0x8006ec8, 0x8006f30, 0x8006f80
        hint 0x19
        sp = sp - 0x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8007000
        x8 = [x8 + 0x638] // 0xcf // 207
        x2 = var_8h
        w1 = 0x1      // u"p\b"
        [x29 = x8
        x8 = [x9]     // 0xd0 // 208
        [sp, 8] = (xzr,2)
        ldur w16,[x8,-4] // 0xcf // 207
        w17 = 0x6c68  // 'hl'
        w17 = 0xf65a  // 'Z\xf6'
        if (w16 == w17) // u"p\b"
        b.eq 0x800714c // unlikely
            
    loc_0x800714c:
        blr x8        // xzr(0x0, 0x0, 0x0, 0x0)
        if w0 jmp 0x80071ac // unlikely
            
    loc_0x80071ac:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9) // u"p\b" // u"p\b"
        b.ne 0x80071d0 // likely
            
    loc_0x80071d0:
        0x80071d0 ()  // 0x80071d0(0x0, 0x0, 0x0, 0x0)
        0x080071d4
         // } else {
    loc_0x80071c0:
        (x29, 2) = 3
        sp = arg_30h
        hint 0x1d
        0x080071cc
         // } else {
         // } else {
        }
        return eax;
    loc_0x08007178: // orphan
             brk 0x8228

    loc_0x0800717c: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x80071ac     // likely

    loc_0x08007184: // orphan
         x8 = 0x8007000
         x0 = var_8h
         x8 = [x8]                // 0xcf // 207
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x3d37             // '7='
         w17 = 0x59dc             // '\xdcY'
         if (w16 == w17)          // u"p\b" // u"p\b"
         b.eq 0x80071a8           // unlikely

    loc_0x080071a4: // orphan
         brk 0x8228

    loc_0x080071a8: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x08009444 ===== */
int sym.filldir64_hook_work (int esi, int edx) {
    loc_0x8009444:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x20] = (x29,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        x8 = fcn.08009000 // 0x8009000
        (x20, 2) = 3  // arg1
        w9 = [x0 + 0x28] // 0xc7 // 199 // arg1
        w10 = [x8]    // 0xcf // 207 // fcn.08009000
        if w10 jmp 0x80094d4 // likely
            
    loc_0x80094d4:
        w10 = w22 - 0x10
        [sp, 8] = (xzr,2)
        if (w10 != 0xf) // u"p\b" // u"p\b"
        b.lo 0x80096d0 // unlikely
            
    loc_0x80096d0:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        jmp 0x80096e0
         // do {
    loc_0x80096e0:
        // CODE XREF from sym.filldir64_hook_work @ 0x80096d4
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9) // u"p\b" // u"p\b"
        b.ne 0x800970c // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8009480
    loc_0x800948c:
        x10 = fcn.08009000 // 0x8009000
        w10 = [x10]   // 0xd1 // 209 // fcn.08009000
        if w10 jmp 0x80094d4 // likely
    loc_0x8009498:
        x10 = fcn.08009000 // 0x8009000
        w10 = [x10]   // 0xd1 // 209 // fcn.08009000
        if w10 jmp 0x80094d4 // likely
    loc_0x80094a4:
        x10 = fcn.08009000 // 0x8009000
        w10 = [x10]   // 0xd1 // 209 // fcn.08009000
        if w10 jmp 0x80094d4 // likely
    loc_0x80094b0:
        x10 = fcn.08009000 // 0x8009000
        w10 = [x10]   // 0xd1 // 209 // fcn.08009000
        if w10 jmp 0x80094d4 // likely
    loc_0x80094bc:
        x10 = fcn.08009000 // 0x8009000
        w10 = [x10]   // 0xd1 // 209 // fcn.08009000
        if w10 jmp 0x80094d4 // likely
    loc_0x80094c8:
        x10 = fcn.08009000 // 0x8009000
        w10 = [x10]   // 0xd1 // 209 // fcn.08009000
        if !w10 jmp 0x80096d0 // unlikely
        }
        return eax;
    loc_0x080094e8: // orphan
             if (x9 == 4)             // u"p\b"
             b.ne 0x80096d0           // likely

    loc_0x080094f0: // orphan
         w3 = [x8]                // 0xcf // 207
         x21 = w22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w3 jmp 0x800952c     // unlikely

    loc_0x080094fc: // orphan
         x2 = fcn.08009000        // 0x8009000
         x2 = x2 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x800950c ()             // 0x800950c(0x178008, 0x10, 0x8009000, 0x0)
         if (w0 == w22)           // u"p\b"
         b.ne 0x800952c           // likely

    loc_0x08009518: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8009524 ()             // 0x8009524(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x80096d8     // likely

    loc_0x0800952c: // orphan
         x8 = fcn.08009000        // 0x8009000
         w3 = [x8]                // 0xcf // 207 // fcn.08009000
         if !w3 jmp 0x8009568     // unlikely

    loc_0x08009538: // orphan
         x2 = fcn.08009000        // 0x8009000
         x2 = x2 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x8009548 ()             // 0x8009548(0x178008, 0x10, 0x8009000, 0x0)
         if (w0 == w22)           // u"p\b"
         b.ne 0x8009568           // likely

    loc_0x08009554: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8009560 ()             // 0x8009560(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x80096d8     // likely

    loc_0x08009568: // orphan
         x8 = fcn.08009000        // 0x8009000
         w3 = [x8]                // 0xcf // 207 // fcn.08009000
         if !w3 jmp 0x80095a4     // unlikely

    loc_0x08009574: // orphan
         x2 = fcn.08009000        // 0x8009000
         x2 = x2 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x8009584 ()             // 0x8009584(0x178008, 0x10, 0x8009000, 0x0)
         if (w0 == w22)           // u"p\b"
         b.ne 0x80095a4           // likely

    loc_0x08009590: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800959c ()             // 0x800959c(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x80096d8     // likely

    loc_0x080095a4: // orphan
         x8 = fcn.08009000        // 0x8009000
         w3 = [x8]                // 0xcf // 207 // fcn.08009000
         if !w3 jmp 0x80095e0     // unlikely

    loc_0x080095b0: // orphan
         x2 = fcn.08009000        // 0x8009000
         x2 = x2 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x80095c0 ()             // 0x80095c0(0x178008, 0x10, 0x8009000, 0x0)
         if (w0 == w22)           // u"p\b"
         b.ne 0x80095e0           // likely

    loc_0x080095cc: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80095d8 ()             // 0x80095d8(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x80096d8     // likely

    loc_0x080095e0: // orphan
         x8 = fcn.08009000        // 0x8009000
         w3 = [x8]                // 0xcf // 207 // fcn.08009000
         if !w3 jmp 0x800961c     // unlikely

    loc_0x080095ec: // orphan
         x2 = fcn.08009000        // 0x8009000
         x2 = x2 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x80095fc ()             // 0x80095fc(0x178008, 0x10, 0x8009000, 0x0)
         if (w0 == w22)           // u"p\b"
         b.ne 0x800961c           // likely

    loc_0x08009608: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8009614 ()             // 0x8009614(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x80096d8     // likely

    loc_0x0800961c: // orphan
         x8 = fcn.08009000        // 0x8009000
         w3 = [x8]                // 0xcf // 207 // fcn.08009000
         if !w3 jmp 0x8009658     // unlikely

    loc_0x08009628: // orphan
         x2 = fcn.08009000        // 0x8009000
         x2 = x2 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x8009638 ()             // 0x8009638(0x178008, 0x10, 0x8009000, 0x0)
         if (w0 == w22)           // u"p\b"
         b.ne 0x8009658           // likely

    loc_0x08009644: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8009650 ()             // 0x8009650(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x80096d8     // likely

    loc_0x08009658: // orphan
         x8 = fcn.08009000        // 0x8009000
         w3 = [x8]                // 0xcf // 207 // fcn.08009000
         if !w3 jmp 0x8009694     // unlikely

    loc_0x08009664: // orphan
         x2 = fcn.08009000        // 0x8009000
         x2 = x2 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x8009674 ()             // 0x8009674(0x178008, 0x10, 0x8009000, 0x0)
         if (w0 == w22)           // u"p\b"
         b.ne 0x8009694           // likely

    loc_0x08009680: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800968c ()             // 0x800968c(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x80096d8     // likely

    loc_0x08009694: // orphan
         x8 = fcn.08009000        // 0x8009000
         w3 = [x8]                // 0xcf // 207 // fcn.08009000
         if !w3 jmp 0x80096d0     // unlikely

    loc_0x080096a0: // orphan
         x2 = fcn.08009000        // 0x8009000
         x2 = x2 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x80096b0 ()             // 0x80096b0(0x178008, 0x10, 0x8009000, 0x0)
         if (w0 == w22)           // u"p\b"
         b.ne 0x80096d0           // likely

    loc_0x080096bc: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80096c8 ()             // "`" // 0x80096c8(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x80096d8     // likely

    loc_0x080096d8: // orphan
         w0 = 0x1                 // u"p\b"
         [x19] = x0

    loc_0x080096f4: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         sp = arg_50h
         hint 0x1d
         

    loc_0x0800970c: // orphan
         0x800970c ()             // 0x800970c(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08009a80 ===== */
int sym.kgsl_process_init_hook_work (int esi, int edx) {
    loc_0x8009a80:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        sym.should_hide () // sym.should_hide(0x0)
        tbz w0,0,0x8009ab4 // likely
            
    loc_0x8009ab4:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8009ab8:
        // CODE XREF from sym.kgsl_process_init_hook_work @ 0x8009ab0
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08009ac4
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08009c24 ===== */
int sym.should_hide (int esi, int edx) {
    loc_0x8009c24:
        // CALL XREF from sym.kgsl_process_init_hook_work @ 0x8009a94
        // CALL XREF from sym.sysfs_create_group_hook_work @ 0x8009bf0
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if !w8 jmp 0x8009c48 // unlikely
            
    loc_0x8009c48:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if !w8 jmp 0x8009c6c // unlikely
            
    loc_0x8009c6c:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if !w8 jmp 0x8009c90 // unlikely
            
    loc_0x8009c90:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if !w8 jmp 0x8009cb4 // unlikely
            
    loc_0x8009cb4:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if !w8 jmp 0x8009cd8 // unlikely
            
    loc_0x8009cd8:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if !w8 jmp 0x8009cfc // unlikely
            
    loc_0x8009cfc:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if !w8 jmp 0x8009d20 // unlikely
            
    loc_0x8009d20:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if !w8 jmp 0x8009d44 // unlikely
            
    loc_0x8009d44:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x08009d48
         // } else {
    loc_0x8009d2c:
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = [x9 + 0x634] // 0xd0 // 208
        if (w9 == w8)
        b.ne 0x8009d44 // likely
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x8009c30
    loc_0x8009c40:
        w0 = 0x1
        0x08009c44
         // (break)
    loc_0x08009c64: // orphan
             w0 = 0x1
             

    loc_0x08009c88: // orphan
         w0 = 0x1
         

    loc_0x08009cac: // orphan
         w0 = 0x1
         

    loc_0x08009cd0: // orphan
         w0 = 0x1
         

    loc_0x08009cf4: // orphan
         w0 = 0x1
         

    loc_0x08009d18: // orphan
         w0 = 0x1
         

    loc_0x08009d3c: // orphan
         w0 = 0x1
         

}

/* ===== 0x08009acc ===== */
int sym.sysfs_create_group_hook_work (int esi, int edx) {
    loc_0x8009acc:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x0]     // 0xc7 // 199 // arg1
        if !x8 jmp 0x8009c10 // unlikely
            
    loc_0x8009c10:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x8009c14:
        // CODE XREF from sym.sysfs_create_group_hook_work @ 0x8009c0c
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08009c20
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8009ae4
    loc_0x8009aec:
        x20 = [x8 + 0x18] // 0xcf // 207
        if !x20 jmp 0x8009c10 // unlikely
    loc_0x8009af4:
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x8009b10 // unlikely
            
    loc_0x8009b10:
        x20 = [x20 + 0x18] // 0xdb // 219
        if !x20 jmp 0x8009c10 // unlikely
    loc_0x8009b18:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x8009b30 // unlikely
            
    loc_0x8009b30:
        x20 = [x20 + 0x18] // 0xdb // 219
        if !x20 jmp 0x8009c10 // unlikely
    loc_0x8009b38:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x8009b50 // unlikely
            
    loc_0x8009b50:
        x20 = [x20 + 0x18] // 0xdb // 219
        if !x20 jmp 0x8009c10 // unlikely
    loc_0x8009b58:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x8009b70 // unlikely
            
    loc_0x8009b70:
        x20 = [x20 + 0x18] // 0xdb // 219
        if !x20 jmp 0x8009c10 // unlikely
    loc_0x8009b78:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x8009b90 // unlikely
            
    loc_0x8009b90:
        x20 = [x20 + 0x18] // 0xdb // 219
        if !x20 jmp 0x8009c10 // unlikely
    loc_0x8009b98:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x8009bb0 // unlikely
            
    loc_0x8009bb0:
        x20 = [x20 + 0x18] // 0xdb // 219
        if !x20 jmp 0x8009c10 // unlikely
    loc_0x8009bb8:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x8009bd0 // unlikely
            
    loc_0x8009bd0:
        x8 = [x20 + 0x18] // 0xdb // 219
        if !x8 jmp 0x8009c10 // unlikely
    loc_0x8009bd8:
        x0 = [x8]     // 0xcf // 207
        if !x0 jmp 0x8009c14 // unlikely
    loc_0x8009be0:
        x1 = fcn.08009000 // 0x8009000
        x1 = x1 + 0   // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
        0x8009be8 ()  // 0x8009be8(0x0, 0x8009000, 0x0, 0x0)
        if !x0 jmp 0x8009c14 // likely
    loc_0x8009bf0:
        sym.should_hide () // sym.should_hide(0x0)
        tbz w0,0,0x8009c10 // likely
    loc_0x8009bf8:
        x8 = ~0xb
        x9 = [x19 + 0xf0] // 0xda // 218
        w0 = 0x1
        [x19] = x8
        [x19 + 0x100] = x9
        jmp 0x8009c14
    loc_0x08009b00: // orphan
             x1 = fcn.08009000        // 0x8009000
             x1 = x1 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
             0x8009b08 ()             // 0x8009b08(0x0, 0x8009000, 0x0, 0x0)
             if x0 jmp 0x8009bf0      // unlikely

    loc_0x08009b20: // orphan
         x1 = fcn.08009000        // 0x8009000
         x1 = x1 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         0x8009b28 ()             // 0x8009b28(0x0, 0x8009000, 0x0, 0x0)
         if x0 jmp 0x8009bf0      // unlikely

    loc_0x08009b40: // orphan
         x1 = fcn.08009000        // 0x8009000
         x1 = x1 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         0x8009b48 ()             // 0x8009b48(0x0, 0x8009000, 0x0, 0x0)
         if x0 jmp 0x8009bf0      // unlikely

    loc_0x08009b60: // orphan
         x1 = fcn.08009000        // 0x8009000
         x1 = x1 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         0x8009b68 ()             // 0x8009b68(0x0, 0x8009000, 0x0, 0x0)
         if x0 jmp 0x8009bf0      // unlikely

    loc_0x08009b80: // orphan
         x1 = fcn.08009000        // 0x8009000
         x1 = x1 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         0x8009b88 ()             // 0x8009b88(0x0, 0x8009000, 0x0, 0x0)
         if x0 jmp 0x8009bf0      // unlikely

    loc_0x08009ba0: // orphan
         x1 = fcn.08009000        // 0x8009000
         x1 = x1 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         0x8009ba8 ()             // 0x8009ba8(0x0, 0x8009000, 0x0, 0x0)
         if x0 jmp 0x8009bf0      // unlikely

    loc_0x08009bc0: // orphan
         x1 = fcn.08009000        // 0x8009000
         x1 = x1 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         0x8009bc8 ()             // 0x8009bc8(0x0, 0x8009000, 0x0, 0x0)
         if x0 jmp 0x8009bf0      // unlikely

}

/* ===== 0x0800a450 ===== */
int sym.gyro_unhook_all_locked (int esi, int edx) {
    loc_0x800a450:
        // CALL XREF from sym.paradise_gyro_exit @ 0x8009d94
        // CALL XREFS from sym.do_config_gyro_hook @ 0x8009fbc, 0x800a134
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x800a000
        x20 = 0x800a000
        x20 = x20 + 0
        w10 = [x19]   // 0xda // 218
        if (w10 == 1)
        b.lt 0x800a4d0 // likely
            
    loc_0x800a4d0:
        0x800a4d0 ()  // 0x800a4d0(0x0, 0x0, 0x0, 0x0)
        w8 = [x19]    // 0xda // 218
        if (w8 == 1)
        b.lt 0x800a52c // likely
            
    loc_0x800a52c:
        x8 = 0x800a000
        [x19] = wzr
        [x8] = (byte) wzr
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x0800a54c
         // } else {
    loc_0x800a4e0:
        x21 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x22 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800a500
         // } else {
        }
        return eax;
    loc_0x0800a49c: // orphan
             // CODE XREF from sym.gyro_unhook_all_locked @ 0x800a4cc
             x8 = x8 + 0x10
             if (x10 == x8)
             b.eq 0x800a4d0           // unlikely

    loc_0x0800a4a8: // orphan
         // CODE XREF from sym.gyro_unhook_all_locked @ 0x800a498
         if (x8 == 4)
         b.eq 0x800a550           // unlikely

    loc_0x0800a4b0: // orphan
         b.eq 0x800a554           // unlikely

    loc_0x0800a4b4: // orphan
         x12 = [x20 + x8]         // 0xcf000000db // 889058230491
         if !x12 jmp 0x800a49c    // unlikely

    loc_0x0800a4bc: // orphan
         x13 = [x12 + 0x20]       // 0xd3 // 211
         if (x13 == x11)
         b.ne 0x800a49c           // unlikely

    loc_0x0800a4c8: // orphan
         [x12 + 0x20] = x9
         jmp 0x800a49c

    loc_0x0800a4ec: // orphan
         // CODE XREF from sym.gyro_unhook_all_locked @ 0x800a528
         x22 = x22 + 1
         x21 = x21 + 0x10
         if (x22 == w8)
         [x23] = (xzr,2)
         b.ge 0x800a52c           // likely

    loc_0x0800a500: // orphan
         // CODE XREF from sym.gyro_unhook_all_locked @ 0x800a4e8
         if (x21 == 4)
         b.eq 0x800a550           // unlikely

    loc_0x0800a508: // orphan
         x9 = x21 + 8
         if (x9 == 4)
         b.hi 0x800a554           // unlikely

    loc_0x0800a514: // orphan
         x23 = x20 + x21
         x0 = [x23 + 8]           // 0xde // 222
         if !x0 jmp 0x800a4ec     // likely

    loc_0x0800a520: // orphan
         0x800a520 ()             // 0x800a520(0x0, 0x0, 0x0, 0x0)
         w8 = [x19]               // 0xda // 218
         jmp 0x800a4ec

    loc_0x0800a550: // orphan
         brk 0x5512

    loc_0x0800a554: // orphan
         brk 0x1

}

/* ===== 0x0800a55c ===== */
int sym.gyro_sendmsg (int esi, int edx) {
    loc_0x800a55c:
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x260
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8 + 0x638] // 0xcf // 207
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = var_b0h  // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x1a0
        [x29 = x8
        0x800a5a4 ()  // 0x800a5a4(0x177df0, 0x0, 0x1a0, 0x0)
        x8 = 0x800a000
        w8 = (byte) [x8] // 0xcf // 207
        if !w8 jmp 0x800ab0c // likely
            
    loc_0x800ab0c:
        // CODE XREF from sym.gyro_sendmsg @ 0x800a624
        x8 = 0x800a000
        x8 = [x8]     // 0xcf // 207
         // do {
    loc_0x800ab14:
        // CODE XREF from sym.gyro_sendmsg @ 0x800a650
        x8 = [x8 + 0x88] // 0xcf // 207
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800a5b4
    loc_0x800a5b8:
        if (x19 == 0x200)
        b.hi 0x800a644 // unlikely
            
    loc_0x800a644:
        x8 = 0x800a000
        x8 = [x8]     // 0xcf // 207
        [x20 + 0x20] = x8
        jmp 0x800ab14
    loc_0x0800a5c0: // orphan
             x8 = 0x4ec5              // '\xc5N'
             w9 = 0x68                // 'h'
             x8 = 0xc4ec              // '\xec\xc4'
             x8 = 0xec4e              // 'N\xec'
             x8 = 0x4ec4              // '\xc4N'
             umulh x8,x19,x8
             x8 = x8 >> 5
             msub x8,x8,x9, x19
             if x8 jmp 0x800a644      // unlikely

    loc_0x0800a5e4: // orphan
         x23 = x21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = (byte) [x23 + 0x10]! // 0xde // 222
         if !w8 jmp 0x800a5f8     // likely

    loc_0x0800a5f0: // orphan
         if (w8 == 6)
         b.ne 0x800ab0c           // likely

    loc_0x0800a5f8: // orphan
         x8 = [x21 + 0x20]        // 0xdc // 220
         if (x8 == x19)
         b.lo 0x800ab0c           // unlikely

    loc_0x0800a604: // orphan
         if (x19 == 0x208)
         b.lo 0x800a654           // likely

    loc_0x0800a60c: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = 0xcc0               // '\xc0\f'
         0x800a614 ()             // 0x800a614(0x0, 0xcc0, 0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = x19                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if x0 jmp 0x800a65c      // unlikely

    loc_0x0800a624: // orphan
         jmp 0x800ab0c

    loc_0x0800a628: // orphan
         x8 = 0x800a000
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         x8 = [x8 + 0x88]         // 0xcf // 207
         jmp 0x800ab24

    loc_0x0800a654: // orphan
         x22 = var_b0h
         w24 = 0x1a0

    loc_0x0800a65c: // orphan
         (x8, 2) = 3
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x10 = [x23 + 0x20]       // 0xde // 222
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x98] = (x8,2)
         (x8, 2) = 3
         [var_0h_2] = x10
         [sp, 0x88] = (x8,2)
         0x800a680 ()             // 0x800a680(0x0, 0x0, 0x0, 0x0)
         x2 = var_88h             // int64_t arg3
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x800a690 ()             // 0x800a690(0x0, 0x0, 0x178088, 0x0)
         if (x0 == x19)
         b.ne 0x800ac08           // unlikely

    loc_0x0800a69c: // orphan
         if (w19 == 0x67)
         b.hi 0x800a6bc           // unlikely

    loc_0x0800a6a4: // orphan
         x8 = 0x800a000
         x8 = x8 + 0
         wzr = [x8]               // 0xcf // 207
         wzr = [x8 + 4]           // 0xcf // 207
         wzr = [x8 + 8]           // 0xcf // 207
         jmp 0x800aafc

    loc_0x0800a6bc: // orphan
         w9 = 0xec4f              // 'O\xec'
         x10 = x19 & 0xffffffff
         w9 = 0x4ec4              // '\xc4N'
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         umull x9,w10,w9
         w10 = 0x68               // 'h'
         x3 = x9 >> 0x25
         if (x3 == 1)
         csinc x9,x3,xzr, hi
         umull x9,w9,w10
         x10 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a6e8: // orphan
         tbnz x8,0x3f,0x800ac1c   // unlikely

    loc_0x0800a6ec: // orphan
         if (x24 == x8)
         b.lo 0x800ac1c           // unlikely

    loc_0x0800a6f4: // orphan
         if (x10 == 4)
         b.lo 0x800ac1c           // likely

    loc_0x0800a6fc: // orphan
         w11 = [x22 + x8]         // 0xcf000000dd // 889058230493
         if (w11 == 0x68)
         b.ne 0x800aaf0           // likely

    loc_0x0800a708: // orphan
         x10 = x10 - 0x68
         x8 = x8 + 0x68
         if (x9 == x8)
         b.ne 0x800a6e8           // likely

    loc_0x0800a718: // orphan
         x9 = 0x800a000
         x9 = x9 + 0
         if (w19 == 0x68)
         w8 = [x9]                // 0xd0 // 208
         w13 = [x9 + 4]           // 0xd0 // 208
         w6 = [x9 + 8]            // 0xd0 // 208
         b.lo 0x800aafc           // likely

    loc_0x0800a734: // orphan
         w10 = w8 & 2
         w11 = w8 & 1
         w8 = w6 >> 0x1f
         w9 = w6 & 0x7fffffff
         if (x3 == 1)
         w16 = 0x80               // '\x80'
         w17 = 0x80               // '\x80'
         w27 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_4h] = w8
         ubfx w8,w6,0x17, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x15 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = w13 & 0x7fffffff
         w14 = w13 >> 0x1f
         ubfx w2,w13,0x17, 8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 8] = (w8,2)
         csinc x8,x3,xzr, hi
         bfxil w16,w13,0, 0x17    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil w17,w6,0, 0x17     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = !x8
         x4 = var_1ch
         w5 = 0x68                // 'h'

    loc_0x0800a788: // orphan
         x9 = x15 * x5
         x7 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = x15 + 1
         x8 = ~0x7
         x26 = x4 + x9
         x28 = x24 - x9
         jmp 0x800a7c0

    loc_0x0800a7a4: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x800a800
         if w30 jmp 0x800a804     // unlikely

    loc_0x0800a7a8: // orphan
         x25 = x25 + 1
         x7 = x7 + 0x68
         x8 = x8 - 0x68
         x12 = x3 + x25
         if (x12 == 1)
         b.eq 0x800ab68           // likely

    loc_0x0800a7c0: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x800a7a0
         x1 = x9 + x7
         x1 = x1 + 8
         b.mi 0x800ac1c           // likely

    loc_0x0800a7cc: // orphan
         if (x24 == x1)
         b.lo 0x800ac1c           // unlikely

    loc_0x0800a7d4: // orphan
         x1 = x28 + x8
         if (x1 == 4)
         b.lo 0x800ac1c           // likely

    loc_0x0800a7e0: // orphan
         x1 = x26 + x7
         w30 = w11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w1,[x1,-0x14]       // 0xc8 // 200
         if (w1 == 4)
         b.eq 0x800a7a4           // unlikely

    loc_0x0800a7f4: // orphan
         if (w1 == 0x10)
         b.ne 0x800a7a8           // likely

    loc_0x0800a7fc: // orphan
         w30 = w10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800a7a4

    loc_0x0800a804: // orphan
         x9 = x15 * x5
         x8 = x9 + x7
         x27 = x8 + 0x18
         tbnz x27,0x3f,0x800ac1c  // unlikely

    loc_0x0800a814: // orphan
         if (x24 == x27)
         b.lo 0x800ac1c           // unlikely

    loc_0x0800a81c: // orphan
         x9 = x24 - x9
         x9 = x9 - x7
         x9 = x9 - 0x18
         if (x9 == 4)
         b.lo 0x800ac1c           // unlikely

    loc_0x0800a830: // orphan
         x26 = x8 + x4
         ldur w9,[x26,-4]         // 0xe1 // 225
         w1 &= w9
         csel w8,w13,w9, eq
         if !w1 jmp 0x800a948     // unlikely

    loc_0x0800a844: // orphan
         if !w0 jmp 0x800a948     // likely

    loc_0x0800a848: // orphan
         ubfx w28,w9,0x17, 8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w30 = 0x80               // '\x80'
         bfxil w30,w9,0, 0x17     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = w28 - w2
         b.ls 0x800a870           // likely

    loc_0x0800a85c: // orphan
         w8 = w9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w1 == 0x18)
         jmp ifgt 0x800a948       // unlikely

    loc_0x0800a868: // orphan
         w8 = w16 >> w1
         jmp 0x800a894

    loc_0x0800a870: // orphan
         w1 = w2 - w28
         w8 = w16                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ls 0x800a894           // likely

    loc_0x0800a87c: // orphan
         w8 = w13                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w1 == 0x18)
         jmp ifgt 0x800a948       // unlikely

    loc_0x0800a888: // orphan
         w30 = w30 >> w1
         w28 = w2                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w16                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a894: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x800a86c
         w9 = w9 >> 0x1f
         w1 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == w14)
         b.ne 0x800a8bc           // unlikely

    loc_0x0800a8a4: // orphan
         x30 = x1 + w30,uxtw
         tbz w30,0x18,0x800a8b4   // likely

    loc_0x0800a8ac: // orphan
         x30 = x30 >> 1
         w28 = w28 + 1

    loc_0x0800a8b4: // orphan
         w8 = w14                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800a908

    loc_0x0800a8bc: // orphan
         w12 = w30                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp] = w2
         w2 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x12 - x1
         x12 = x1 - x12
         if (w30 == w8)
         csel x30,x12,x0, lo
         w12 = w14                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w8,w14,w9, lo
         if !x30 jmp 0x800a938    // likely

    loc_0x0800a8e4: // orphan
         w0 = w2                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbnz w30,0x17,0x800a900  // unlikely

    loc_0x0800a8ec: // orphan
         x9 = x30                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x30 = x30 << 1
         w28 = w28 - 1
         if !x30 jmp 0x800a900    // likely

    loc_0x0800a8fc: // orphan
         tbz w9,0x16,0x800a8ec    // likely

    loc_0x0800a900: // orphan
         w14 = w12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = [sp]                // 0x4 // 4

    loc_0x0800a908: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x800a8b8
         if (w28 == 0xff)
         b.lt 0x800a91c           // likely

    loc_0x0800a910: // orphan
         w9 = 0x7f80              // '\x80\x7f'
         w8 = w9 | w8,lsl 31
         jmp 0x800a948

    loc_0x0800a91c: // orphan
         w8 = w8 << 0x1f
         if (w28 == 1)
         b.lt 0x800a948           // likely

    loc_0x0800a928: // orphan
         w9 = w30 & 0x7fffff
         bfi w9,w28,0x17, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w9 | w8
         jmp 0x800a948

    loc_0x0800a938: // orphan
         w0 = w2                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = [sp]                // 0x4 // 4
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w14 = w12                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a948: // orphan
         // CODE XREFS from sym.gyro_sendmsg @ 0x800a918, 0x800a934
         tbnz x27,0x3f,0x800ac1c  // unlikely

    loc_0x0800a94c: // orphan
         if (x24 == x27)
         b.lo 0x800ac1c           // unlikely

    loc_0x0800a954: // orphan
         msub x9,x15,x5, x24
         x9 = x9 - x7
         x9 = x9 - 0x18
         if (x9 == 4)
         b.lo 0x800ac1c           // unlikely

    loc_0x0800a968: // orphan
         x9 = x15 * x5
         [x26 = w8
         x12 = x9 + x7
         x27 = x12 + 0x1c
         tbnz x27,0x3f,0x800ac1c  // unlikely

    loc_0x0800a97c: // orphan
         if (x24 == x27)
         b.lo 0x800ac1c           // unlikely

    loc_0x0800a984: // orphan
         x8 = x24 - x9
         x8 = x8 - x7
         x8 = x8 - 0x1c
         if (x8 == 4)
         b.lo 0x800ac1c           // unlikely

    loc_0x0800a998: // orphan
         x26 = x4 + x9
         w8 = [x26 + x7]          // 0xce000000e1 // 884763263201
         w12 &= w8
         csel w9,w6,w8, eq
         if !w12 jmp 0x800aab8    // likely

    loc_0x0800a9ac: // orphan
         w12 = [var_ch]           // 0x4 // 4
         if !w12 jmp 0x800aab8    // likely

    loc_0x0800a9b4: // orphan
         w9 = [var_8h]            // 0x4 // 4
         ubfx w28,w8,0x17, 8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w30 = 0x80               // '\x80'
         bfxil w30,w8,0, 0x17     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = w28 - w9
         b.ls 0x800a9e0           // likely

    loc_0x0800a9cc: // orphan
         w9 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w1 == 0x18)
         jmp ifgt 0x800aab8       // unlikely

    loc_0x0800a9d8: // orphan
         w9 = w17 >> w1
         jmp 0x800aa04

    loc_0x0800a9e0: // orphan
         w1 = w9 - w28
         w9 = w17                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ls 0x800aa04           // likely

    loc_0x0800a9ec: // orphan
         w9 = w6                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w1 == 0x18)
         jmp ifgt 0x800aab8       // unlikely

    loc_0x0800a9f8: // orphan
         w30 = w30 >> w1
         w28 = [var_8h]           // 0x4 // 4
         w9 = w17                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800aa04: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x800a9dc
         w12 = [var_4h]           // 4
         w8 = w8 >> 0x1f
         if (w8 == w12)
         b.ne 0x800aa30           // unlikely

    loc_0x0800aa14: // orphan
         w8 = w9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x30 = x8 + w30,uxtw
         tbz w30,0x18,0x800aa28   // likely

    loc_0x0800aa20: // orphan
         x30 = x30 >> 1
         w28 = w28 + 1

    loc_0x0800aa28: // orphan
         w8 = w12                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800aa7c

    loc_0x0800aa30: // orphan
         [sp] = w14
         w14 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = w9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w30 == w9)
         w9 = [var_4h]            // 4
         w12 = w30                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x12 - x0
         x12 = x0 - x12
         csel x30,x12,x1, lo
         csel w8,w9,w8, lo
         if !x30 jmp 0x800aaac    // likely

    loc_0x0800aa5c: // orphan
         w0 = w14                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbnz w30,0x17,0x800aa78  // unlikely

    loc_0x0800aa64: // orphan
         x9 = x30                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x30 = x30 << 1
         w28 = w28 - 1
         if !x30 jmp 0x800aa78    // likely

    loc_0x0800aa74: // orphan
         tbz w9,0x16,0x800aa64    // likely

    loc_0x0800aa78: // orphan
         w14 = [sp]               // 4

    loc_0x0800aa7c: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x800aa2c
         if (w28 == 0xff)
         b.lt 0x800aa90           // likely

    loc_0x0800aa84: // orphan
         w9 = 0x7f80              // '\x80\x7f'
         w9 = w9 | w8,lsl 31
         jmp 0x800aab8

    loc_0x0800aa90: // orphan
         w9 = w8 << 0x1f
         if (w28 == 1)
         b.lt 0x800aab8           // likely

    loc_0x0800aa9c: // orphan
         w8 = w30 & 0x7fffff
         bfi w8,w28,0x17, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 | w9
         jmp 0x800aab8

    loc_0x0800aaac: // orphan
         w0 = w14                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w14 = [sp]               // 4
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800aab8: // orphan
         // CODE XREFS from sym.gyro_sendmsg @ 0x800aa8c, 0x800aaa8
         tbnz x27,0x3f,0x800ac1c  // unlikely

    loc_0x0800aabc: // orphan
         if (x24 == x27)
         b.lo 0x800ac1c           // unlikely

    loc_0x0800aac4: // orphan
         msub x8,x15,x5, x24
         x8 = x8 - x7
         x8 = x8 - 0x1c
         if (x8 == 4)
         b.lo 0x800ac1c           // unlikely

    loc_0x0800aad8: // orphan
         w27 = 0x1
         x15 = x25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x3 != x25)
         [x26 + x7] = w9
         b.ne 0x800a788           // unlikely

    loc_0x0800aaec: // orphan
         jmp 0x800ab6c

    loc_0x0800aaf0: // orphan
         x8 = 0x800a000
         x8 = [x8]                // 0xcf // 207
         [x20 + 0x20] = x8

    loc_0x0800aafc: // orphan
         // CODE XREFS from sym.gyro_sendmsg @ 0x800a6b8, 0x800ac14
         if (x19 == 0x208)
         b.lo 0x800ab0c           // likely

    loc_0x0800ab04: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800ab08 ()             // 0x800ab08(0x0, 0x0, 0x0, 0x0)

    loc_0x0800ab24: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x800a640
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800ab2c: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x800ac04
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-0x10]
         if (x8 == x9)
         b.ne 0x800ac18           // likely

    loc_0x0800ab40: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sp = arg_260h
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0800ab68: // orphan
         tbz w27,0,0x800aafc      // likely

    loc_0x0800ab6c: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x800aaec
         (x8, 2) = 3
         x2 = var_78h             // int64_t arg3
         w1 = 0x1
         x10 = [x21 + 0x60]       // 0xdc // 220
         w3 = 0x1
         x4 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h_3] = x19
         [sp, 0x60] = (x8,2)
         [sp, 0x70] = (x10,2)
         (x10, 2) = 3
         (x11, 2) = 3
         [sp, 0x50] = (x10,2)
         (x10, 2) = 3
         [sp, 0x40] = (x11,2)
         (x8, 2) = 3
         [sp, 0x30] = (x10,2)
         (x10, 2) = 3
         [sp, 0x20] = (x8,2)
         x8 = sp + 0x10
         x0 = var_20h_3           // int64_t arg1
         [sp, 0x10] = (x10,2)
         0x800abc0 ()             // 0x800abc0(0x178020, 0x1, 0x178078, 0x1)
         x8 = 0x800a000
         x1 = sp + 0x10
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x8 = [x8]                // 0xcf // 207
         x8 = [x8 + 0x88]         // 0xcf // 207
         blr x8                   // 0xffffffffffffffff(0x0, 0x178010, 0x0, 0x1)
         x8 = [var_30h_2]         // 0x4 // 4
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19 - x8            // int64_t arg2
         0x800abf0 ()             // 0x800abf0(0x0, 0xc6bee4976c000000, 0x0, 0x1)
         if (x19 == 0x208)
         b.lo 0x800ab2c           // likely

    loc_0x0800abfc: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800ac00 ()             // 0x800ac00(0x0, 0x0, 0x0, 0x0)
         jmp 0x800ab2c

    loc_0x0800ac08: // orphan
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x0 = var_88h             // int64_t arg1
         0x800ac10 ()             // 0x800ac10(0x178088, 0x0, 0x0, 0x0)
         jmp 0x800aafc

    loc_0x0800ac18: // orphan
         0x800ac18 ()             // " " // 0x800ac18(0x0, 0x0, 0x0, 0x0)

    loc_0x0800ac1c: // orphan
         brk 0x1

}

/* ===== 0x0800f28c ===== */
int sym.hook_entry_remove (int esi, int edx) {
    loc_0x800f28c:
        // CALL XREF from sym.inline_hook_install_count @ 0x800f0f0
        // CALL XREF from sym.inline_hook_remove_count @ 0x800f3f4
        hint 0x19
        sp = sp - 0x60
        [sp, 0x30] = (x29,2)
        [var_40h] = x21
        [sp, 0x50] = (x20,2)
        x29 = var_30h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        w8 = (byte) [x0 + 0x30] // 0xc7 // 199 // arg1
        if !w8 jmp 0x800f358 // unlikely
            
    loc_0x800f358:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800f384 // likely
            
    loc_0x800f384:
        0x800f384 ()  // "\n" // 0x800f384(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x800f388:
        // CODE XREF from sym.hook_entry_remove @ 0x800f334
        x10 = 0x800f000
        x10 = x10 + 0
        x9 = x10 + x9,lsl 3
        prfm pstl1strm,[x9]
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800f2b8
    loc_0x800f2cc:
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f2d4 ()  // 0x800f2d4(0x800f000, 0x0, 0x0, 0x0)
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x20] = x0
        if !x0 jmp 0x800f324 // unlikely
            
    loc_0x800f324:
        w8 = [x19 + 0x34] // 0xda // 218
        w10 = 0x1
        x9 = x8 >> 6
        x8 = x10 << x8
        jmp 0x800f388
    loc_0x0800f2e4: // orphan
             x9 = x21 + 4
             x10 = x21 + 8
             x11 = x21 + 0xc
             [sp, 8] = (x21,2)
             [sp, 0x18] = (x10,2)
             if x8 jmp 0x800f314      // unlikely

    loc_0x0800f2fc: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f304 ()             // 0x800f304(0x800f000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20] = x0
         if !x0 jmp 0x800f324     // unlikely

    loc_0x0800f314: // orphan
         x1 = x19 + 0x20
         x0 = var_sp_8h
         w2 = 0x4
         blr x8                   // xzr(0x178008, 0x20, 0x4, 0x0)

    loc_0x0800f348: // orphan
         // CODE XREF from sym.hook_entry_remove @ 0x800f3a8
         w8 = ~0
         [x19 + 0x18] = xzr
         [x19 + 0x30] = (byte) wzr
         [x19 + 0x34] = w8

    loc_0x0800f398: // orphan
         ldxr x10,[x9]
         bic x10,x10,x8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w11,x10,[x9]
         if w11 jmp 0x800f398     // unlikely

    loc_0x0800f3a8: // orphan
         jmp 0x800f348

}

/* ===== 0x0800f5a0 ===== */
int sym.ret_work_finish_task_switch (int esi, int edx) {
    loc_0x800f5a0:
        // CALL XREF from sym.ret_trampoline_finish_task_switch @ 0x800f594
        hint 0x19
        sp = sp - 0x70
        [sp, 0x20] = (x29,2)
        [sp, 0x30] = (x26,2)
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x800f000
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        x8 = [x9]     // 0xd0 // 208
        if !x8 jmp 0x800f7ac // unlikely
            
    loc_0x800f7ac:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800f7e0 // likely
            
    loc_0x800f7e0:
        0x800f7e0 ()  // 0x800f7e0(0x0, 0x0, 0x0, 0x0)
        0x0800f7e4
         // } else {
    loc_0x800f7c0:
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x29, 2) = 3
        sp = arg_70h
        hint 0x1d
        0x0800f7dc
         // } else {
        }
        return eax;
        goto loc_0x800f5d8
    loc_0x800f5e8:
        w10 = [x8 + 0x10] // 0xcf // 207
        if (w10 == w9)
        ccmp w10,1,8, eq // pstate
        b.lt 0x800f7a8 // likely
            
    loc_0x800f7a8:
        sym.clear_hwbp_regs_on_cpu () // sym.clear_hwbp_regs_on_cpu(0x0, 0x0, 0x0, 0x0, -1, -1, -1, -1, -1)
    loc_0x0800f5f8: // orphan
             w11 = 0x5030             // '0P'
             x12 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x9 = x8 + 0x20
             w10 = 0x1
             w11 = 0x3
             jmp 0x800f62c

    loc_0x0800f610: // orphan
         x13 = x12 + 1
         if (x12 == 0xf)
         cset w10,lo
         x9 = x9 + x11
         x12 = x13                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x13 == 0x10)
         b.eq 0x800f640           // unlikely

    loc_0x0800f62c: // orphan
         // CODE XREF from sym.ret_work_finish_task_switch @ 0x800f60c
         if !x9 jmp 0x800f610     // likely

    loc_0x0800f630: // orphan
         x13 = [x9 + 0x18]        // 0xd0 // 208
         if !x13 jmp 0x800f610    // likely

    loc_0x0800f638: // orphan
         x13 = [x9]               // 0xd0 // 208
         if !x13 jmp 0x800f610    // unlikely

    loc_0x0800f640: // orphan
         tbz w10,0,0x800f7a8      // likely

    loc_0x0800f644: // orphan
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
         x24 = 0x800f000
         x25 = 0x800f000
         jmp 0x800f690

    loc_0x0800f684: // orphan
         // CODE XREFS from sym.ret_work_finish_task_switch @ 0x800f734, 0x800f7a4
         x22 = x22 - 1
         x20 = x20 + x23
         b.eq 0x800f7ac           // unlikely

    loc_0x0800f690: // orphan
         // CODE XREF from sym.ret_work_finish_task_switch @ 0x800f680
         [sp, 8] = (xzr,2)
         [sp] = xzr
         if !x20 jmp 0x800f684    // likely

    loc_0x0800f69c: // orphan
         x8 = [x20 + 0x18]        // 0xdb // 219
         if !x8 jmp 0x800f684     // likely

    loc_0x0800f6a4: // orphan
         x8 = [x20]               // 0xdb // 219
         if !x8 jmp 0x800f684     // unlikely

    loc_0x0800f6ac: // orphan
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.hw_breakpoint_parse () // sym.hw_breakpoint_parse(0x0, 0x178000)
         if w0 jmp 0x800f684      // unlikely

    loc_0x0800f6bc: // orphan
         w8 = (byte) [var_13h]    // 0x4 // 4
         if ((w8 & 0x18) == 0)
         b.eq 0x800f738           // unlikely

    loc_0x0800f6c8: // orphan
         w8 = [x25]               // 0xe0 // 224
         if (w21 == w8)
         b.ge 0x800f684           // unlikely

    loc_0x0800f6d4: // orphan
         x2 = [sp]                // 0x4 // 4
         w0 = 0x20
         w1 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = w21 + 1
         sym.write_wb_reg ()      // sym.write_wb_reg(0x20, 0x0)
         w8 = [var_10h]           // 0x4 // 4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x30                // '0'
         w1 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w10,w8,0x1d, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w8 >> 0xe
         if (w10 == 1)
         w10 = w8 >> 0x18
         w8 = w8 >> 0x1d
         w11 = w11 & 0x1fe0
         w10 = w10 & 0x18
         ccmp x9,8,0, eq
         w10 = w11 | w10
         bfi w10,w8,1, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w10 | 0x2000
         csel w8,w8,w10, eq
         w2 = w8 | 1
         sym.write_wb_reg ()      // sym.write_wb_reg(0x30, 0x0)
         w21 = w26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800f684

    loc_0x0800f738: // orphan
         w8 = [x24]               // 0xdf // 223
         if (w19 == w8)
         b.ge 0x800f684           // unlikely

    loc_0x0800f744: // orphan
         x2 = [sp]                // 0x4 // 4
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = w19 + 1
         sym.write_wb_reg ()      // sym.write_wb_reg(0x0, 0x0)
         w8 = [var_10h]           // 0x4 // 4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x10
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w10,w8,0x1d, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w8 >> 0xe
         if (w10 == 1)
         w10 = w8 >> 0x18
         w8 = w8 >> 0x1d
         w11 = w11 & 0x1fe0
         w10 = w10 & 0x18
         ccmp x9,8,0, eq
         w10 = w11 | w10
         bfi w10,w8,1, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w10 | 0x2000
         csel w8,w8,w10, eq
         w2 = w8 | 1
         sym.write_wb_reg ()      // sym.write_wb_reg(0x10, 0x0)
         w19 = w26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800f684

}

/* ===== 0x08011254 ===== */
int sym.hw_breakpoint_parse (int esi, int edx) {
    loc_0x8011254:
        // CALL XREF from sym.ret_work_finish_task_switch @ 0x800f6b4
        // CALL XREF from sym.clear_hwbp_regs_on_cpu @ 0x800f87c
        // CALL XREF from sym.work_trampoline_breakpoint @ 0x8011948
        // CALL XREF from sym.work_trampoline_watchpoint @ 0x8011f18
        w8 = ~0x15
        if !x0 jmp 0x8011384 // likely
            
    loc_0x8011384:
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x08011388
         // } else {
    loc_0x801125c:
        if !x1 jmp 0x8011384 // likely
        }
        return eax;
    loc_0x8011260:
        [x1, 8] = (xzr,2) // arg2
        [x1] = xzr    // arg2
        w8 = [x0 + 8] // 0xc7 // 199 // arg1
        w10 = w8 - 1
        if (w10 == 3)
        b.hi 0x80112dc // likely
            
    loc_0x80112dc:
        w0 = ~0x15
        0x080112e0
         // } else {
    loc_0x8011278:
        x11 = 0x8011000
        x11 = x11 + 0
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = 0x800    // loc.imp.memmove
        x12 = 0x8011298
        w13 = (byte) [x11 + x10] // 0xd1000000d2 // 897648165074
        x12 = x12 + x13,lsl 2 // 0x8011694
        // fcn.08011694
        br x12
        }
        return eax;
}

/* ===== 0x0801138c ===== */
int sym.write_wb_reg (int esi, int edx) {
    loc_0x801138c:
        // XREFS: CALL 0x0800f6e4  CALL 0x0800f72c  CALL 0x0800f754
        // XREFS: CALL 0x0800f79c  CALL 0x0800f914  CALL 0x0800f96c
        // XREFS: CALL 0x08011d88  CALL 0x080123bc
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w1 + w0  // arg2
        if (w8 == 0x3f)
        b.hi 0x80115c8 // unlikely
            
    loc_0x80115c8:
        x0 = 0x8011000
        x0 = x0 + 0   // int64_t arg1
        0x80115d0 ()  // 0x80115d0(0x8011000, 0x0, 0x0, 0x0)
        jmp 0x80115b8
         // do {
    loc_0x80115b8:
        // CODE XREF from sym.write_wb_reg @ 0x80115d4
        0x080115b8
        (x29, 2) = 3
        hint 0x1d
        0x080115c4
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800f7e8 ===== */
int sym.clear_hwbp_regs_on_cpu (int esi, int edx) {
    loc_0x800f7e8:
        // CALL XREF from sym.ret_work_finish_task_switch @ 0x800f7a8
        hint 0x19
        sp = sp - 0x80
        [sp, 0x20] = (x29,2)
        [var_sp_30h] = x27
        [sp, 0x40] = (x26,2)
        [sp, 0x50] = (x24,2)
        [sp, 0x60] = (x22,2)
        [sp, 0x70] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x800f000
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        x8 = [x9]     // 0xd0 // 208
        if !x8 jmp 0x800f978 // unlikely
            
    loc_0x800f978:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800f9b0 // likely
            
    loc_0x800f9b0:
        0x800f9b0 ()  // 0x800f9b0(0x0, 0x0, 0x0, 0x0)
        tbz w6,0x16,0x8013268 // likely
            
    loc_0x8013268:
        b.hi 0x8015b3c // unlikely
            
    loc_0x8015b3c:
        // XREFS(39)
        if (w23 == 0)
        cset w24,eq
        if !w23 jmp 0x8015b8c // likely
            
    loc_0x8015b8c:
        if !w23 jmp 0x8015a7c // likely
            
    loc_0x8015a7c:
        // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x8014598
        msr pan,1     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8015b94 // likely
            
    loc_0x8015b94:
        0x8015b94 ()  // 0x8015b94(0x0, 0x0, 0x0, 0x0)
        // XREFS(34)
        brk 0x5512
         // } else {
    loc_0x8015a94:
        w0 = w24      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x29, 2) = 3
        x27 = [arg_b0h] // 0x4 // 4
        sp = arg_100h
        hint 0x1d
        0x08015ab8
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
        }
        return eax;
    loc_0x0800f848: // orphan
             // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x800f918
             w19 = w19 + 1

    loc_0x0800f84c: // orphan
         // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x800f974
         x21 = x21 + x24
         x23 = x23 - 1
         b.eq 0x800f978           // unlikely

    loc_0x0800f858: // orphan
         // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x800f844
         [sp, 8] = (xzr,2)
         [sp] = xzr
         if !x21 jmp 0x800f84c    // likely

    loc_0x0800f864: // orphan
         x8 = [x21 + 0x18]        // 0xdc // 220
         if !x8 jmp 0x800f84c     // likely

    loc_0x0800f86c: // orphan
         x8 = [x21]               // 0xdc // 220
         if !x8 jmp 0x800f84c     // likely

    loc_0x0800f874: // orphan
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.hw_breakpoint_parse () // sym.hw_breakpoint_parse(0x0, 0x178000)
         if w0 jmp 0x800f84c      // unlikely

    loc_0x0800f884: // orphan
         w8 = [var_10h]           // 0x4 // 4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = (byte) [var_13h]   // 0x4 // 4
         w11 = w8 >> 0xe
         w12 = w8 >> 0x1d
         w11 = w11 & 0x1fe0
         ubfx w13,w8,0x1d, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w13 == 1)
         bfxil w11,w8,0x18, 5     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w11,w12,1, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ccmp x9,8,0, eq
         bfxil w11,w8,0x1f, 1     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w11 | 0x2000
         csel w27,w8,w11, eq
         if ((w10 & 0x18) == 0)
         b.eq 0x800f91c           // unlikely

    loc_0x0800f8c4: // orphan
         w8 = [x26]               // 0xe1 // 225
         if (w19 == w8)
         b.ge 0x800f84c           // likely

    loc_0x0800f8d0: // orphan
         w0 = 0x20
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_wb_reg ()       // "(" // sym.read_wb_reg(0x20, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x30                // '0'
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_wb_reg ()       // "(" // sym.read_wb_reg(0x30, 0x0)
         tbz w0,0,0x800f848       // likely

    loc_0x0800f8f0: // orphan
         x8 = [sp]                // 0x4 // 4
         if (x8 == x22)
         b.ne 0x800f848           // unlikely

    loc_0x0800f8fc: // orphan
         w8 = w27 ^ w0
         if (w8 == 1)
         b.hi 0x800f848           // unlikely

    loc_0x0800f908: // orphan
         x2 = x0 & 0xfffffffe
         w0 = 0x30                // '0'
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_wb_reg ()      // sym.write_wb_reg(0x30, 0x0)
         jmp 0x800f848

    loc_0x0800f91c: // orphan
         w8 = [x25]               // 0xe0 // 224
         if (w20 == w8)
         b.ge 0x800f84c           // likely

    loc_0x0800f928: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_wb_reg ()       // "(" // sym.read_wb_reg(0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x10
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_wb_reg ()       // "(" // sym.read_wb_reg(0x10, 0x0)
         tbz w0,0,0x800f970       // likely

    loc_0x0800f948: // orphan
         x8 = [sp]                // 0x4 // 4
         if (x8 == x22)
         b.ne 0x800f970           // unlikely

    loc_0x0800f954: // orphan
         w8 = w27 ^ w0
         if (w8 == 1)
         b.hi 0x800f970           // unlikely

    loc_0x0800f960: // orphan
         x2 = x0 & 0xfffffffe
         w0 = 0x10
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_wb_reg ()      // sym.write_wb_reg(0x10, 0x0)

    loc_0x0800f970: // orphan
         w20 = w20 + 1
         jmp 0x800f84c

    loc_0x08014574: // orphan
         // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x8015b90
         w3 = w21 & 0xff
         ubfx w4,w21,8, 8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w5,w21,0x10, 8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w6 = w21 >> 0x18
         x0 = 0x8014000
         x0 = x0 + 0              // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
         w2 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8014594 ()             // 0x8014594(0x8014000, 0x0, 0x0, 0x0)
         jmp 0x8015a7c

    loc_0x08015b4c: // orphan
         w8 = w26 - 1
         if (w8 == 1)
         b.hi 0x8015b9c           // likely

    loc_0x08015b58: // orphan
         x9 = var_38h
         x10 = var_30h
         x10 = x10 + w8,uxtw 4
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = [x9 + w8,uxtw 2]    // 0xb0000000d0 // 755914244304
         (x10, 2) = 3
         x9 = x22 + x9,lsl 4
         [x9] = (x10,2)
         if !w8 jmp 0x8015b8c     // likely

    loc_0x08015b7c: // orphan
         ldur w8,[x29,-0x38]
         (x10, 2) = 3
         x8 = x22 + x8,lsl 4
         [x8] = (x10,2)

    loc_0x08015b9c: // orphan
         brk 0x1

}

/* ===== 0x080115d8 ===== */
int sym.read_wb_reg (int esi, int edx) {
    loc_0x80115d8:
        // XREFS: CALL 0x0800f8d8  CALL 0x0800f8e8  CALL 0x0800f930
        // XREFS: CALL 0x0800f940  CALL 0x080118f0  CALL 0x08011900
        // XREFS: CALL 0x08011eb8  CALL 0x08011ec8
        w8 = w1 + w0  // arg2
        if (w8 == 0x3f)
        b.hi 0x80117fc // unlikely
            
    loc_0x80117fc:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8011000
        x0 = x0 + 0   // int64_t arg1
        0x8011810 ()  // 0x8011810(0x8011000, 0x0, 0x0, 0x0)
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x08011820
         // } else {
    loc_0x80115e4:
        x9 = 0x8011000
        x9 = x9 + 0
        x10 = 0x80115ec
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x0800faf0 ===== */
int sym.stop_task_run_monitor (int esi, int edx) {
    loc_0x800faf0:
        // CALL XREF from sym.do_hwbp_set @ 0x800fe90
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x24,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x23 = 0x800f000
        x19 = [x23]   // 0xde // 222
        if !x19 jmp 0x800fba0 // unlikely
            
    loc_0x800fba0:
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800fbb4
         // } else {
    loc_0x800fb14:
        x8 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x24 = 0x800f000
        x20 = 0x800f000
        x20 = x20 + 0
        x21 = 0x800f000
        x21 = x21 + 0
        }
        return eax;
    loc_0x0800fb2c: // orphan
             // CODE XREF from sym.stop_task_run_monitor @ 0x800fb64
             x2 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w1 = [x24]               // 0xdf // 223
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800fb38 ()             // 0x800fb38(0x0, 0x0, 0x0, 0x0)
             w8 = [x24]               // 0xdf // 223
             x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             if (w8 == w22)
             b.ls 0x800fb68           // likely

    loc_0x0800fb4c: // orphan
         w0 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = 0x1
         0x800fb5c ()             // 0x800fb5c(0x0, 0x0, 0x0, 0x1)
         x8 = x22 + 1
         jmp 0x800fb2c

    loc_0x0800fb68: // orphan
         x0 = 0x800f000
         x0 = x0 + 0
         w1 = 0x1
         0x800fb74 ()             // 0x800fb74(0x800f000, 0x1, 0x0, 0x0)
         x0 = 0x800f000
         x0 = x0 + 0
         w1 = 0x2
         0x800fb84 ()             // 0x800fb84(0x800f000, 0x2, 0x0, 0x0)
         w2 = 0x320
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x35                // '5'
         [x23] = xzr
         0x800fb9c ()             // 0x800fb9c(0x0, 0x0, 0x350320, 0x0)

}

/* ===== 0x08010140 ===== */
int sym.prepare_break_point_handlers (int esi, int edx) {
    loc_0x8010140:
        // CALL XREF from sym.do_hwbp_set @ 0x800ff6c
        if !x0 jmp 0x8010290 // likely
            
    loc_0x8010290:
        0x08010290
         // } else {
    loc_0x8010144:
        w8 = [x0 + 0x10] // 0xc7 // 199 // arg1
        if (w8 == 1)
        b.lt 0x8010290 // likely
        }
        return eax;
    loc_0x8010150:
        x8 = x0 + 0x6a,lsl 12 // arg1
        x10 = x0 + 0x35,lsl 12 // arg1
        x12 = [x0 + 0x38] // 0xc7 // 199 // arg1
        x9 = x8 + 0x80
        x11 = x10 + 0x50
        x8 = 0x8010000
        x8 = x8 + 0
        if !x12 jmp 0x8010174 // unlikely
            
    loc_0x8010174:
        x10 = x0 + 0x9f,lsl 12 // arg1
        x12 = [x11 + 0x18] // 0xd2 // 210
        x10 = x10 + 0xb0
        if !x12 jmp 0x8010188 // likely
            
    loc_0x8010188:
        x11 = x0 + 0xd4,lsl 12 // arg1
        x13 = [x9 + 0x18] // 0xd0 // 208
        x12 = x11 + 0xe0
        if !x13 jmp 0x801019c // likely
            
    loc_0x801019c:
        x9 = x0 + 0x109,lsl 12 // arg1
        x13 = [x10 + 0x18] // 0xd1 // 209
        x11 = x9 + 0x110
        if !x13 jmp 0x80101b0 // likely
            
    loc_0x80101b0:
        x9 = x0 + 0x13e,lsl 12 // arg1
        x13 = [x12 + 0x18] // 0xd3 // 211
        x10 = x9 + 0x140
        if !x13 jmp 0x80101c4 // likely
            
    loc_0x80101c4:
        x9 = x0 + 0x173,lsl 12 // arg1
        x12 = [x11 + 0x18] // 0xd2 // 210
        x9 = x9 + 0x170
        if !x12 jmp 0x80101d8 // likely
            
    loc_0x80101d8:
        x11 = x0 + 0x1a8,lsl 12 // arg1
        x12 = [x10 + 0x18] // 0xd1 // 209
        x11 = x11 + 0x1a0
        if !x12 jmp 0x80101ec // likely
            
    loc_0x80101ec:
        x10 = x0 + 0x1dd,lsl 12 // arg1
        x12 = [x9 + 0x18] // 0xd0 // 208
        x10 = x10 + 0x1d0
        if !x12 jmp 0x8010200 // likely
            
    loc_0x8010200:
        x9 = x0 + 0x212,lsl 12 // arg1
        x12 = [x11 + 0x18] // 0xd2 // 210
        x9 = x9 + 0x200
        if !x12 jmp 0x8010214 // likely
            
    loc_0x8010214:
        x11 = x0 + 0x247,lsl 12 // arg1
        x12 = [x10 + 0x18] // 0xd1 // 209
        x11 = x11 + 0x230
        if !x12 jmp 0x8010228 // likely
            
    loc_0x8010228:
        x10 = x0 + 0x27c,lsl 12 // arg1
        x12 = [x9 + 0x18] // 0xd0 // 208
        x10 = x10 + 0x260
        if !x12 jmp 0x801023c // likely
            
    loc_0x801023c:
        x9 = x0 + 0x2b1,lsl 12 // arg1
        x12 = [x11 + 0x18] // 0xd2 // 210
        x9 = x9 + 0x290
        if !x12 jmp 0x8010250 // likely
            
    loc_0x8010250:
        x11 = x0 + 0x2e6,lsl 12 // arg1
        x12 = [x10 + 0x18] // 0xd1 // 209
        x11 = x11 + 0x2c0
        if !x12 jmp 0x8010264 // likely
            
    loc_0x8010264:
        x10 = x0 + 0x31b,lsl 12 // arg1
        x12 = [x9 + 0x18] // 0xd0 // 208
        x10 = x10 + 0x2f0
        if !x12 jmp 0x8010278 // likely
            
    loc_0x8010278:
        x9 = [x11 + 0x18] // 0xd2 // 210
        if !x9 jmp 0x8010284 // likely
            
    loc_0x8010284:
        x9 = [x10 + 0x18] // 0xd1 // 209
        if !x9 jmp 0x8010290 // likely
    loc_0x801028c:
        [x10] = x8
    loc_0x08010170: // orphan
             [x0 + 0x20] = x8         // arg1

    loc_0x08010184: // orphan
         [x11] = x8

    loc_0x08010198: // orphan
         [x9] = x8

    loc_0x080101ac: // orphan
         [x10] = x8

    loc_0x080101c0: // orphan
         [x12] = x8

    loc_0x080101d4: // orphan
         [x11] = x8

    loc_0x080101e8: // orphan
         [x10] = x8

    loc_0x080101fc: // orphan
         [x9] = x8

    loc_0x08010210: // orphan
         [x11] = x8

    loc_0x08010224: // orphan
         [x10] = x8

    loc_0x08010238: // orphan
         [x9] = x8

    loc_0x0801024c: // orphan
         [x11] = x8

    loc_0x08010260: // orphan
         [x10] = x8

    loc_0x08010274: // orphan
         [x9] = x8

    loc_0x08010280: // orphan
         [x11] = x8

}

/* ===== 0x08010294 ===== */
int sym.start_task_run_monitor (int esi, int edx) {
    loc_0x8010294:
        // CALL XREF from sym.do_hwbp_set @ 0x800ff74
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x24,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8010354 // likely
            
    loc_0x8010354:
        w20 = ~0x15
         // do {
    loc_0x8010358:
        // CODE XREFS from sym.start_task_run_monitor @ 0x8010350, 0x80103ec, 0x80103f8, 0x8010428
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08010370
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80102b0
    loc_0x80102c0:
        w10 = 0x5030  // '0P'
        x11 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x19 + 0x20
        w9 = 0x1
        w10 = 0x3
        jmp 0x80102f4
         // do {
    loc_0x80102f4:
        // CODE XREF from sym.start_task_run_monitor @ 0x80102d4
        if !x8 jmp 0x80102d8 // likely
         // } while (?);
        }
        return eax;
    loc_0x80102f8:
        x12 = [x8 + 0x18] // 0xcf // 207
        if !x12 jmp 0x80102d8 // likely
    loc_0x80102d8:
        x12 = x11 + 1
        if (x11 == 0xf)
        cset w9,lo
        x8 = x8 + x10
        x11 = x12     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x12 == 0x10)
        b.eq 0x8010308 // unlikely
            
    loc_0x8010308:
        tbz w9,0,0x8010354 // likely
    loc_0x801030c:
        x21 = 0x8010000
        x22 = 0x8010000
        x20 = 0x8010000
        x9 = [x21]    // 0xdc // 220
        [x21] = x19
        mrs x8,id_aa64dfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w8,w8,0xc, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w8 + 1
        [x22] = w8
        mrs x8,id_aa64dfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w8,w8,0x14, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w8 + 1
        [x20] = w8
        if !x9 jmp 0x8010374 // unlikely
            
    loc_0x8010374:
        x0 = 0x8010000
        x0 = x0 + 0   // int64_t arg1
        0x801037c ()  // 0x801037c(0x8010000, 0x0, 0x0, 0x0)
        x24 = 0x8010000
        [x24] = x0
        x0 = 0x8010000
        x0 = x0 + 0   // int64_t arg1
        0x8010390 ()  // 0x8010390(0x8010000, 0x0, 0x0, 0x0)
        x23 = 0x8010000
        [x23] = x0
        x0 = 0x8010000
        x0 = x0 + 0   // int64_t arg1
        0x80103a4 ()  // 0x80103a4(0x8010000, 0x0, 0x0, 0x0)
        x8 = 0x8010000
        x9 = [x24]    // 0xdf // 223
        [x8] = x0
        if !x9 jmp 0x80103f0 // unlikely
            
    loc_0x80103f0:
        w20 = ~0x1
        [x21] = xzr
        jmp 0x8010358
    loc_0x08010300: // orphan
             x12 = [x8]               // 0xcf // 207
             if !x12 jmp 0x80102d8    // likely

    loc_0x08010344: // orphan
         w9 = [x22]               // 0xdd // 221
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19] = (x9,2)
         jmp 0x8010358

    loc_0x080103b8: // orphan
         x8 = [x23]               // 0xde // 222
         if !x8 jmp 0x80103f0     // likely

    loc_0x080103c0: // orphan
         if !x0 jmp 0x80103f0     // likely

    loc_0x080103c4: // orphan
         w8 = [x22]               // 0xdd // 221
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         w9 = [x20]               // 0xdb // 219
         w1 = 0x2
         [x19] = (x8,2)
         0x80103dc ()             // 0x80103dc(0x8010000, 0x2, 0x0, 0x0)
         if !w0 jmp 0x80103fc     // unlikely

    loc_0x080103e4: // orphan
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x21] = xzr
         jmp 0x8010358

    loc_0x080103fc: // orphan
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         w1 = 0x1
         0x8010408 ()             // 0x8010408(0x8010000, 0x1, 0x0, 0x0)
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x8010358     // unlikely

    loc_0x08010414: // orphan
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         w1 = 0x2
         [x21] = xzr
         0x8010424 ()             // 0x8010424(0x8010000, 0x2, 0x0, 0x0)
         jmp 0x8010358

}

/* ===== 0x0801042c ===== */
int sym.paradise_hwbp_fill_config (int esi, int edx) {
    loc_0x801042c:
        // CALL XREF from sym.do_hwbp_set @ 0x800ffa8
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w2 = 0x198
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x8010448 ()  // 0x8010448(0x0, 0x0, 0x198, 0x0)
        mrs x8,id_aa64dfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = 0x8010000
        ubfx x8,x8,0xc, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x11 = x8 + 1
        mrs x8,id_aa64dfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx x8,x8,0x14, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = x8 + 1
        x8 = [x10]    // 0xd1 // 209
        [x19, 8] = (x11,2)
        if !x8 jmp 0x80104f8 // unlikely
            
    loc_0x80104f8:
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08010504
         // } else {
    loc_0x8010474:
        w10 = [x8 + 0x10] // 0xcf // 207
        [x19] = w10
        x10 = [x8]    // 0xcf // 207
        if x10 jmp 0x8010488 // likely
        }
        return eax;
    loc_0x8010484:
        x10 = [x19 + 8] // 0xda // 218
         // do {
    loc_0x8010488:
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
        jmp 0x80104c0
         // } while (?);
        }
        return eax;
    loc_0x080104b4: // orphan
             // CODE XREF from sym.paradise_hwbp_fill_config @ 0x80104f4
             x8 = x8 + x10
             x9 = x9 - 1
             b.eq 0x80104f8           // unlikely

    loc_0x080104c0: // orphan
         // CODE XREF from sym.paradise_hwbp_fill_config @ 0x80104b0
         x12 = [x8]               // 0xcf // 207
         if !x12 jmp 0x80104b4    // unlikely

    loc_0x080104c8: // orphan
         w13 = [x19 + 4]          // 0xda // 218
         umaddl x14,w13,w11, x19
         w13 = w13 + 1
         [x14 + 0x18] = x12
         ldur w12,[x8,-0x10]      // 0xcf // 207
         [x14 + 0x20] = w12
         ldur w12,[x8,-0xc]       // 0xcf // 207
         [x14 + 0x24] = w12
         ldur w12,[x8,-8]         // 0xcf // 207
         [x19 + 4] = w13
         [x14 + 0x28] = w12
         jmp 0x80104b4

}

/* ===== 0x08020b34 ===== */
int sym.sample_hbp_handler_entry (int esi, int edx) {
    loc_0x8020b34:
        if !x0 jmp 0x80217f8 // likely
            
    loc_0x80217f8:
        0x080217f8
         // } else {
    loc_0x8020b38:
        if !x1 jmp 0x80217f8 // likely
        }
        return eax;
    loc_0x8020b3c:
        w12 = [x1 + 0x20] // 0xc8 // 200 // arg2
        x9 = [x0 + 0x100] // 0xc7 // 199 // arg1
        if (w12 == 1)
        b.lt 0x8020b7c // likely
            
    loc_0x8020b7c:
        x8 = w12      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w12 = 0x350
        w10 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w11 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        smaddl x14,w8,w12, x1 // arg2
        w12 = 0x3
        w13 = 0x1
        x8 = x14 + 0x30
        [x14 + 0x50] = x9
         // do {
    loc_0x8020ba0:
        w9 = w11      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w14 = w10 & 6
        x9 = x9 >> 2
        w11 = w11 + 1
        w10 = w10 + 2
        if (w11 == 0x47)
        w16 = w12 << w14
        w14 = w13 << w14
        w15 = (byte) [x8 + x9] // 0xd0000000cf // 893353197775
        bic w15,w15,w16 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w14 = w15 | w14
        [x8 + x9] = (byte) w14
        b.ne 0x8020ba0 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08020b54: // orphan
             x11 = [x8 + 0x20]        // 0xcf // 207
             if (x11 == x9)
             b.eq 0x8020b70           // unlikely

    loc_0x08020b60: // orphan
         x8 = x8 + 0x350
         x10 = x10 - 1
         b.ne 0x8020b54           // likely

    loc_0x08020b6c: // orphan
         jmp 0x8020b74

    loc_0x08020b70: // orphan
         if x8 jmp 0x8020be4      // unlikely

    loc_0x08020b74: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020b6c
         if (w12 == 0xff)
         jmp ifgt 0x80217f8       // unlikely

    loc_0x08020bd4: // orphan
         w9 = [x1 + 0x20]         // 0xc8 // 200 // arg2
         w9 = w9 + 1
         [x1 + 0x20] = w9         // arg2
         if !x8 jmp 0x80217f8     // likely

    loc_0x08020be4: // orphan
         x10 = [x8 + 0x18]        // 0xcf // 207
         w9 = (byte) [x8]         // 0xcf // 207
         x11 = x10 + 1
         w10 = w9 & 3
         if (w10 == 2)
         [x8 + 0x18] = x11
         b.eq 0x8020c14           // unlikely

    loc_0x08020c00: // orphan
         if (w10 == 1)
         b.ne 0x8020c20           // likely

    loc_0x08020c08: // orphan
         x10 = [x0 + 0x100]       // 0xc7 // 199 // arg1
         [x8 + 0x20] = x10
         jmp 0x8020c20

    loc_0x08020c14: // orphan
         x9 = [x8 + 0x20]         // 0xcf // 207
         [x0 + 0x100] = x9        // arg1
         w9 = (byte) [x8]         // 0xcf // 207

    loc_0x08020c20: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020c10
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8020c40           // unlikely

    loc_0x08020c2c: // orphan
         if (w10 == 1)
         b.ne 0x8020c4c           // likely

    loc_0x08020c34: // orphan
         x10 = [x0 + 0xf0]        // 0xc7 // 199 // arg1
         [x8 + 0x28] = x10
         jmp 0x8020c4c

    loc_0x08020c40: // orphan
         x9 = [x8 + 0x28]         // 0xcf // 207
         [x0 + 0xf0] = x9         // arg1
         w9 = (byte) [x8]         // 0xcf // 207

    loc_0x08020c4c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020c3c
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x8020c6c           // unlikely

    loc_0x08020c58: // orphan
         if (w9 == 1)
         b.ne 0x8020c74           // likely

    loc_0x08020c60: // orphan
         x9 = [x0 + 0xf8]         // 0xc7 // 199 // arg1
         [x8 + 0x30] = x9
         jmp 0x8020c74

    loc_0x08020c6c: // orphan
         x9 = [x8 + 0x30]         // 0xcf // 207
         [x0 + 0xf8] = x9         // arg1

    loc_0x08020c74: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020c68
         w9 = (byte) [x8 + 1]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x8020c98           // unlikely

    loc_0x08020c84: // orphan
         if (w10 == 1)
         b.ne 0x8020ca4           // likely

    loc_0x08020c8c: // orphan
         x10 = [x0 + 0x110]       // 0xc7 // 199 // arg1
         [x8 + 0x38] = x10
         jmp 0x8020ca4

    loc_0x08020c98: // orphan
         x9 = [x8 + 0x38]         // 0xcf // 207
         [x0 + 0x110] = x9        // arg1
         w9 = (byte) [x8 + 1]     // 0xcf // 207

    loc_0x08020ca4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020c94
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8020cc4           // unlikely

    loc_0x08020cb0: // orphan
         if (w10 == 1)
         b.ne 0x8020cd0           // likely

    loc_0x08020cb8: // orphan
         x10 = [x0 + 0x118]       // 0xc7 // 199 // arg1
         [x8 + 0x40] = x10
         jmp 0x8020cd0

    loc_0x08020cc4: // orphan
         x9 = [x8 + 0x40]         // 0xcf // 207
         [x0 + 0x118] = w9        // arg1
         w9 = (byte) [x8 + 1]     // 0xcf // 207

    loc_0x08020cd0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020cc0
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8020cf0           // unlikely

    loc_0x08020cdc: // orphan
         if (w10 == 1)
         b.ne 0x8020cfc           // likely

    loc_0x08020ce4: // orphan
         x10 = [x0 + 0x108]       // 0xc7 // 199 // arg1
         [x8 + 0x48] = x10
         jmp 0x8020cfc

    loc_0x08020cf0: // orphan
         x9 = [x8 + 0x48]         // 0xcf // 207
         [x0 + 0x108] = x9        // arg1
         w9 = (byte) [x8 + 1]     // 0xcf // 207

    loc_0x08020cfc: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020cec
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x8020d1c           // unlikely

    loc_0x08020d08: // orphan
         if (w9 == 1)
         b.ne 0x8020d24           // likely

    loc_0x08020d10: // orphan
         x9 = [x0]                // 0xc7 // 199 // arg1
         [x8 + 0x50] = x9
         jmp 0x8020d24

    loc_0x08020d1c: // orphan
         x9 = [x8 + 0x50]         // 0xcf // 207
         [x0] = x9                // arg1

    loc_0x08020d24: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020d18
         w9 = (byte) [x8 + 2]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x8020d48           // unlikely

    loc_0x08020d34: // orphan
         if (w10 == 1)
         b.ne 0x8020d54           // likely

    loc_0x08020d3c: // orphan
         x10 = [x0 + 8]           // 0xc7 // 199 // arg1
         [x8 + 0x58] = x10
         jmp 0x8020d54

    loc_0x08020d48: // orphan
         x9 = [x8 + 0x58]         // 0xcf // 207
         [x0 + 8] = x9            // arg1
         w9 = (byte) [x8 + 2]     // 0xcf // 207

    loc_0x08020d54: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020d44
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8020d74           // unlikely

    loc_0x08020d60: // orphan
         if (w10 == 1)
         b.ne 0x8020d80           // likely

    loc_0x08020d68: // orphan
         x10 = [x0 + 0x10]        // 0xc7 // 199 // arg1
         [x8 + 0x60] = x10
         jmp 0x8020d80

    loc_0x08020d74: // orphan
         x9 = [x8 + 0x60]         // 0xcf // 207
         [x0 + 0x10] = x9         // arg1
         w9 = (byte) [x8 + 2]     // 0xcf // 207

    loc_0x08020d80: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020d70
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8020da0           // unlikely

    loc_0x08020d8c: // orphan
         if (w10 == 1)
         b.ne 0x8020dac           // likely

    loc_0x08020d94: // orphan
         x10 = [x0 + 0x18]        // 0xc7 // 199 // arg1
         [x8 + 0x68] = x10
         jmp 0x8020dac

    loc_0x08020da0: // orphan
         x9 = [x8 + 0x68]         // 0xcf // 207
         [x0 + 0x18] = x9         // arg1
         w9 = (byte) [x8 + 2]     // 0xcf // 207

    loc_0x08020dac: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020d9c
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x8020dcc           // unlikely

    loc_0x08020db8: // orphan
         if (w9 == 1)
         b.ne 0x8020dd4           // likely

    loc_0x08020dc0: // orphan
         x9 = [x0 + 0x20]         // 0xc7 // 199 // arg1
         [x8 + 0x70] = x9
         jmp 0x8020dd4

    loc_0x08020dcc: // orphan
         x9 = [x8 + 0x70]         // 0xcf // 207
         [x0 + 0x20] = x9         // arg1

    loc_0x08020dd4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020dc8
         w9 = (byte) [x8 + 3]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x8020df8           // unlikely

    loc_0x08020de4: // orphan
         if (w10 == 1)
         b.ne 0x8020e04           // likely

    loc_0x08020dec: // orphan
         x10 = [x0 + 0x28]        // 0xc7 // 199 // arg1
         [x8 + 0x78] = x10
         jmp 0x8020e04

    loc_0x08020df8: // orphan
         x9 = [x8 + 0x78]         // 0xcf // 207
         [x0 + 0x28] = x9         // arg1
         w9 = (byte) [x8 + 3]     // 0xcf // 207

    loc_0x08020e04: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020df4
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8020e24           // unlikely

    loc_0x08020e10: // orphan
         if (w10 == 1)
         b.ne 0x8020e30           // likely

    loc_0x08020e18: // orphan
         x10 = [x0 + 0x30]        // 0xc7 // 199 // arg1
         [x8 + 0x80] = x10
         jmp 0x8020e30

    loc_0x08020e24: // orphan
         x9 = [x8 + 0x80]         // 0xcf // 207
         [x0 + 0x30] = x9         // arg1
         w9 = (byte) [x8 + 3]     // 0xcf // 207

    loc_0x08020e30: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020e20
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8020e50           // unlikely

    loc_0x08020e3c: // orphan
         if (w10 == 1)
         b.ne 0x8020e5c           // likely

    loc_0x08020e44: // orphan
         x10 = [x0 + 0x38]        // 0xc7 // 199 // arg1
         [x8 + 0x88] = x10
         jmp 0x8020e5c

    loc_0x08020e50: // orphan
         x9 = [x8 + 0x88]         // 0xcf // 207
         [x0 + 0x38] = x9         // arg1
         w9 = (byte) [x8 + 3]     // 0xcf // 207

    loc_0x08020e5c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020e4c
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x8020e7c           // unlikely

    loc_0x08020e68: // orphan
         if (w9 == 1)
         b.ne 0x8020e84           // likely

    loc_0x08020e70: // orphan
         x9 = [x0 + 0x40]         // 0xc7 // 199 // arg1
         [x8 + 0x90] = x9
         jmp 0x8020e84

    loc_0x08020e7c: // orphan
         x9 = [x8 + 0x90]         // 0xcf // 207
         [x0 + 0x40] = x9         // arg1

    loc_0x08020e84: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020e78
         w9 = (byte) [x8 + 4]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x8020ea8           // unlikely

    loc_0x08020e94: // orphan
         if (w10 == 1)
         b.ne 0x8020eb4           // likely

    loc_0x08020e9c: // orphan
         x10 = [x0 + 0x48]        // 0xc7 // 199 // arg1
         [x8 + 0x98] = x10
         jmp 0x8020eb4

    loc_0x08020ea8: // orphan
         x9 = [x8 + 0x98]         // 0xcf // 207
         [x0 + 0x48] = x9         // arg1
         w9 = (byte) [x8 + 4]     // 0xcf // 207

    loc_0x08020eb4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020ea4
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8020ed4           // unlikely

    loc_0x08020ec0: // orphan
         if (w10 == 1)
         b.ne 0x8020ee0           // likely

    loc_0x08020ec8: // orphan
         x10 = [x0 + 0x50]        // 0xc7 // 199 // arg1
         [x8 + 0xa0] = x10
         jmp 0x8020ee0

    loc_0x08020ed4: // orphan
         x9 = [x8 + 0xa0]         // 0xcf // 207
         [x0 + 0x50] = x9         // arg1
         w9 = (byte) [x8 + 4]     // 0xcf // 207

    loc_0x08020ee0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020ed0
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8020f00           // unlikely

    loc_0x08020eec: // orphan
         if (w10 == 1)
         b.ne 0x8020f0c           // likely

    loc_0x08020ef4: // orphan
         x10 = [x0 + 0x58]        // 0xc7 // 199 // arg1
         [x8 + 0xa8] = x10
         jmp 0x8020f0c

    loc_0x08020f00: // orphan
         x9 = [x8 + 0xa8]         // 0xcf // 207
         [x0 + 0x58] = x9         // arg1
         w9 = (byte) [x8 + 4]     // 0xcf // 207

    loc_0x08020f0c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020efc
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x8020f2c           // unlikely

    loc_0x08020f18: // orphan
         if (w9 == 1)
         b.ne 0x8020f34           // likely

    loc_0x08020f20: // orphan
         x9 = [x0 + 0x60]         // 0xc7 // 199 // arg1
         [x8 + 0xb0] = x9
         jmp 0x8020f34

    loc_0x08020f2c: // orphan
         x9 = [x8 + 0xb0]         // 0xcf // 207
         [x0 + 0x60] = x9         // arg1

    loc_0x08020f34: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020f28
         w9 = (byte) [x8 + 5]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x8020f58           // unlikely

    loc_0x08020f44: // orphan
         if (w10 == 1)
         b.ne 0x8020f64           // likely

    loc_0x08020f4c: // orphan
         x10 = [x0 + 0x68]        // 0xc7 // 199 // arg1
         [x8 + 0xb8] = x10
         jmp 0x8020f64

    loc_0x08020f58: // orphan
         x9 = [x8 + 0xb8]         // 0xcf // 207
         [x0 + 0x68] = x9         // arg1
         w9 = (byte) [x8 + 5]     // 0xcf // 207

    loc_0x08020f64: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020f54
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8020f84           // unlikely

    loc_0x08020f70: // orphan
         if (w10 == 1)
         b.ne 0x8020f90           // likely

    loc_0x08020f78: // orphan
         x10 = [x0 + 0x70]        // 0xc7 // 199 // arg1
         [x8 + 0xc0] = x10
         jmp 0x8020f90

    loc_0x08020f84: // orphan
         x9 = [x8 + 0xc0]         // 0xcf // 207
         [x0 + 0x70] = x9         // arg1
         w9 = (byte) [x8 + 5]     // 0xcf // 207

    loc_0x08020f90: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020f80
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8020fb0           // unlikely

    loc_0x08020f9c: // orphan
         if (w10 == 1)
         b.ne 0x8020fbc           // likely

    loc_0x08020fa4: // orphan
         x10 = [x0 + 0x78]        // 0xc7 // 199 // arg1
         [x8 + 0xc8] = x10
         jmp 0x8020fbc

    loc_0x08020fb0: // orphan
         x9 = [x8 + 0xc8]         // 0xcf // 207
         [x0 + 0x78] = x9         // arg1
         w9 = (byte) [x8 + 5]     // 0xcf // 207

    loc_0x08020fbc: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020fac
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x8020fdc           // unlikely

    loc_0x08020fc8: // orphan
         if (w9 == 1)
         b.ne 0x8020fe4           // likely

    loc_0x08020fd0: // orphan
         x9 = [x0 + 0x80]         // 0xc7 // 199 // arg1
         [x8 + 0xd0] = x9
         jmp 0x8020fe4

    loc_0x08020fdc: // orphan
         x9 = [x8 + 0xd0]         // 0xcf // 207
         [x0 + 0x80] = x9         // arg1

    loc_0x08020fe4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8020fd8
         w9 = (byte) [x8 + 6]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x8021008           // unlikely

    loc_0x08020ff4: // orphan
         if (w10 == 1)
         b.ne 0x8021014           // likely

    loc_0x08020ffc: // orphan
         x10 = [x0 + 0x88]        // 0xc7 // 199 // arg1
         // CODE XREFS from sym.arm64_decode_insn @ 0x80219d0, 0x80219d4
         [x8 + 0xd8] = x10
         jmp 0x8021014

    loc_0x08021008: // orphan
         x9 = [x8 + 0xd8]         // 0xcf // 207
         [x0 + 0x88] = x9         // arg1
         w9 = (byte) [x8 + 6]     // 0xcf // 207

    loc_0x08021014: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021004
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8021034           // unlikely

    loc_0x08021020: // orphan
         if (w10 == 1)
         b.ne 0x8021040           // likely

    loc_0x08021028: // orphan
         x10 = [x0 + 0x90]        // 0xc7 // 199 // arg1
         [x8 + 0xe0] = x10
         jmp 0x8021040

    loc_0x08021034: // orphan
         x9 = [x8 + 0xe0]         // 0xcf // 207
         [x0 + 0x90] = x9         // arg1
         w9 = (byte) [x8 + 6]     // 0xcf // 207

    loc_0x08021040: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021030
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8021060           // unlikely

    loc_0x0802104c: // orphan
         if (w10 == 1)
         b.ne 0x802106c           // likely

    loc_0x08021054: // orphan
         x10 = [x0 + 0x98]        // 0xc7 // 199 // arg1
         [x8 + 0xe8] = x10
         jmp 0x802106c

    loc_0x08021060: // orphan
         x9 = [x8 + 0xe8]         // 0xcf // 207
         [x0 + 0x98] = x9         // arg1
         w9 = (byte) [x8 + 6]     // 0xcf // 207

    loc_0x0802106c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x802105c
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x802108c           // unlikely

    loc_0x08021078: // orphan
         if (w9 == 1)
         b.ne 0x8021094           // likely

    loc_0x08021080: // orphan
         x9 = [x0 + 0xa0]         // 0xc7 // 199 // arg1
         [x8 + 0xf0] = x9
         jmp 0x8021094

    loc_0x0802108c: // orphan
         x9 = [x8 + 0xf0]         // 0xcf // 207
         [x0 + 0xa0] = x9         // arg1

    loc_0x08021094: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021088
         w9 = (byte) [x8 + 7]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x80210b8           // unlikely

    loc_0x080210a4: // orphan
         if (w10 == 1)
         b.ne 0x80210c4           // likely

    loc_0x080210ac: // orphan
         x10 = [x0 + 0xa8]        // 0xc7 // 199 // arg1
         [x8 + 0xf8] = x10
         jmp 0x80210c4

    loc_0x080210b8: // orphan
         x9 = [x8 + 0xf8]         // 0xcf // 207
         [x0 + 0xa8] = x9         // arg1
         w9 = (byte) [x8 + 7]     // 0xcf // 207

    loc_0x080210c4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80210b4
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x80210e4           // unlikely

    loc_0x080210d0: // orphan
         if (w10 == 1)
         b.ne 0x80210f0           // likely

    loc_0x080210d8: // orphan
         x10 = [x0 + 0xb0]        // 0xc7 // 199 // arg1
         [x8 + 0x100] = x10
         jmp 0x80210f0

    loc_0x080210e4: // orphan
         x9 = [x8 + 0x100]        // 0xcf // 207
         [x0 + 0xb0] = x9         // arg1
         w9 = (byte) [x8 + 7]     // 0xcf // 207

    loc_0x080210f0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80210e0
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8021110           // unlikely

    loc_0x080210fc: // orphan
         if (w10 == 1)
         b.ne 0x802111c           // likely

    loc_0x08021104: // orphan
         x10 = [x0 + 0xb8]        // 0xc7 // 199 // arg1
         [x8 + 0x108] = x10
         jmp 0x802111c

    loc_0x08021110: // orphan
         x9 = [x8 + 0x108]        // 0xcf // 207
         [x0 + 0xb8] = x9         // arg1
         w9 = (byte) [x8 + 7]     // 0xcf // 207

    loc_0x0802111c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x802110c
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x802113c           // unlikely

    loc_0x08021128: // orphan
         if (w9 == 1)
         b.ne 0x8021144           // likely

    loc_0x08021130: // orphan
         x9 = [x0 + 0xc0]         // 0xc7 // 199 // arg1
         [x8 + 0x110] = x9
         jmp 0x8021144

    loc_0x0802113c: // orphan
         x9 = [x8 + 0x110]        // 0xcf // 207
         [x0 + 0xc0] = x9         // arg1

    loc_0x08021144: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021138
         w9 = (byte) [x8 + 8]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x8021168           // unlikely

    loc_0x08021154: // orphan
         if (w10 == 1)
         b.ne 0x8021174           // likely

    loc_0x0802115c: // orphan
         x10 = [x0 + 0xc8]        // 0xc7 // 199 // arg1
         [x8 + 0x118] = x10
         jmp 0x8021174

    loc_0x08021168: // orphan
         x9 = [x8 + 0x118]        // 0xcf // 207
         [x0 + 0xc8] = x9         // arg1
         w9 = (byte) [x8 + 8]     // 0xcf // 207

    loc_0x08021174: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021164
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x8021194           // unlikely

    loc_0x08021180: // orphan
         if (w10 == 1)
         b.ne 0x80211a0           // likely

    loc_0x08021188: // orphan
         x10 = [x0 + 0xd0]        // 0xc7 // 199 // arg1
         [x8 + 0x120] = x10
         jmp 0x80211a0

    loc_0x08021194: // orphan
         x9 = [x8 + 0x120]        // 0xcf // 207
         [x0 + 0xd0] = x9         // arg1
         w9 = (byte) [x8 + 8]     // 0xcf // 207

    loc_0x080211a0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021190
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x80211c0           // unlikely

    loc_0x080211ac: // orphan
         if (w10 == 1)
         b.ne 0x80211cc           // likely

    loc_0x080211b4: // orphan
         x10 = [x0 + 0xd8]        // 0xc7 // 199 // arg1
         [x8 + 0x128] = x10
         jmp 0x80211cc

    loc_0x080211c0: // orphan
         x9 = [x8 + 0x128]        // 0xcf // 207
         [x0 + 0xd8] = x9         // arg1
         w9 = (byte) [x8 + 8]     // 0xcf // 207

    loc_0x080211cc: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80211bc
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x80211ec           // unlikely

    loc_0x080211d8: // orphan
         if (w9 == 1)
         b.ne 0x80211f4           // likely

    loc_0x080211e0: // orphan
         x9 = [x0 + 0xe0]         // 0xc7 // 199 // arg1
         [x8 + 0x130] = x9
         jmp 0x80211f4

    loc_0x080211ec: // orphan
         x9 = [x8 + 0x130]        // 0xcf // 207
         [x0 + 0xe0] = x9         // arg1

    loc_0x080211f4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80211e8
         w9 = (byte) [x8 + 9]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x8021218           // unlikely

    loc_0x08021204: // orphan
         if (w10 == 1)
         b.ne 0x8021224           // likely

    loc_0x0802120c: // orphan
         x10 = [x0 + 0xe8]        // 0xc7 // 199 // arg1
         [x8 + 0x138] = x10
         jmp 0x8021224

    loc_0x08021218: // orphan
         x9 = [x8 + 0x138]        // 0xcf // 207
         [x0 + 0xe8] = x9         // arg1
         w9 = (byte) [x8 + 9]     // 0xcf // 207

    loc_0x08021224: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021214
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x8021244           // unlikely

    loc_0x08021230: // orphan
         if (w9 == 1)
         b.ne 0x802124c           // likely

    loc_0x08021238: // orphan
         mrs x9,fpsr              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8 + 0x140] = w9
         jmp 0x802124c

    loc_0x08021244: // orphan
         w9 = [x8 + 0x140]        // 0xcf // 207
         msr fpsr,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802124c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021240
         w9 = (byte) [x8 + 9]     // 0xcf // 207
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x8021270           // unlikely

    loc_0x0802125c: // orphan
         if (w9 == 1)
         b.ne 0x8021278           // likely

    loc_0x08021264: // orphan
         mrs x9,fpcr              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8 + 0x144] = w9
         jmp 0x8021278

    loc_0x08021270: // orphan
         w9 = [x8 + 0x144]        // 0xcf // 207
         msr fpcr,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08021278: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x802126c
         w9 = (byte) [x8 + 9]     // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x802129c           // unlikely

    loc_0x08021288: // orphan
         if (w9 == 1)
         b.ne 0x80212a4           // likely

    loc_0x08021290: // orphan
         x9 = x8 + 0x150
         [x9] = q0
         jmp 0x80212a4

    loc_0x0802129c: // orphan
         x9 = x8 + 0x150
         q0 = [x9]                // 0xd0 // 208

    loc_0x080212a4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021298
         w9 = (byte) [x8 + 0xa]   // 0xcf // 207
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x80212c8           // unlikely

    loc_0x080212b4: // orphan
         if (w9 == 1)
         b.ne 0x80212d0           // likely

    loc_0x080212bc: // orphan
         x9 = x8 + 0x160
         [x9] = q1
         jmp 0x80212d0

    loc_0x080212c8: // orphan
         x9 = x8 + 0x160
         q1 = [x9]                // 0xd0 // 208

    loc_0x080212d0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80212c4
         w9 = (byte) [x8 + 0xa]   // 0xcf // 207
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x80212f4           // unlikely

    loc_0x080212e0: // orphan
         if (w9 == 1)
         b.ne 0x80212fc           // likely

    loc_0x080212e8: // orphan
         x9 = x8 + 0x170
         [x9] = q2
         jmp 0x80212fc

    loc_0x080212f4: // orphan
         x9 = x8 + 0x170
         q2 = [x9]                // 0xd0 // 208

    loc_0x080212fc: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80212f0
         w9 = (byte) [x8 + 0xa]   // 0xcf // 207
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x8021320           // unlikely

    loc_0x0802130c: // orphan
         if (w9 == 1)
         b.ne 0x8021328           // likely

    loc_0x08021314: // orphan
         x9 = x8 + 0x180
         [x9] = q3
         jmp 0x8021328

    loc_0x08021320: // orphan
         x9 = x8 + 0x180
         q3 = [x9]                // 0xd0 // 208

    loc_0x08021328: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x802131c
         w9 = (byte) [x8 + 0xa]   // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x802134c           // unlikely

    loc_0x08021338: // orphan
         if (w9 == 1)
         b.ne 0x8021354           // likely

    loc_0x08021340: // orphan
         x9 = x8 + 0x190
         [x9] = q4
         jmp 0x8021354

    loc_0x0802134c: // orphan
         x9 = x8 + 0x190
         q4 = [x9]                // 0xd0 // 208

    loc_0x08021354: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021348
         w9 = (byte) [x8 + 0xb]   // 0xcf // 207
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x8021378           // unlikely

    loc_0x08021364: // orphan
         if (w9 == 1)
         b.ne 0x8021380           // likely

    loc_0x0802136c: // orphan
         x9 = x8 + 0x1a0
         [x9] = q5
         jmp 0x8021380

    loc_0x08021378: // orphan
         x9 = x8 + 0x1a0
         q5 = [x9]                // 0xd0 // 208

    loc_0x08021380: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021374
         w9 = (byte) [x8 + 0xb]   // 0xcf // 207
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x80213a4           // unlikely

    loc_0x08021390: // orphan
         if (w9 == 1)
         b.ne 0x80213ac           // likely

    loc_0x08021398: // orphan
         x9 = x8 + 0x1b0
         [x9] = q6
         jmp 0x80213ac

    loc_0x080213a4: // orphan
         x9 = x8 + 0x1b0
         q6 = [x9]                // 0xd0 // 208

    loc_0x080213ac: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80213a0
         w9 = (byte) [x8 + 0xb]   // 0xcf // 207
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x80213d0           // unlikely

    loc_0x080213bc: // orphan
         if (w9 == 1)
         b.ne 0x80213d8           // likely

    loc_0x080213c4: // orphan
         x9 = x8 + 0x1c0
         [x9] = q7
         jmp 0x80213d8

    loc_0x080213d0: // orphan
         x9 = x8 + 0x1c0
         q7 = [x9]                // 0xd0 // 208

    loc_0x080213d8: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80213cc
         w9 = (byte) [x8 + 0xb]   // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x80213fc           // unlikely

    loc_0x080213e8: // orphan
         if (w9 == 1)
         b.ne 0x8021404           // likely

    loc_0x080213f0: // orphan
         x9 = x8 + 0x1d0
         [x9] = q8
         jmp 0x8021404

    loc_0x080213fc: // orphan
         x9 = x8 + 0x1d0
         q8 = [x9]                // 0xd0 // 208

    loc_0x08021404: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80213f8
         w9 = (byte) [x8 + 0xc]   // 0xcf // 207
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x8021428           // unlikely

    loc_0x08021414: // orphan
         if (w9 == 1)
         b.ne 0x8021430           // likely

    loc_0x0802141c: // orphan
         x9 = x8 + 0x1e0
         [x9] = q9
         jmp 0x8021430

    loc_0x08021428: // orphan
         x9 = x8 + 0x1e0
         q9 = [x9]                // 0xd0 // 208

    loc_0x08021430: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021424
         w9 = (byte) [x8 + 0xc]   // 0xcf // 207
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x8021454           // unlikely

    loc_0x08021440: // orphan
         if (w9 == 1)
         b.ne 0x802145c           // likely

    loc_0x08021448: // orphan
         x9 = x8 + 0x1f0
         [x9] = q10
         jmp 0x802145c

    loc_0x08021454: // orphan
         x9 = x8 + 0x1f0
         q10 = [x9]               // 0xd0 // 208

    loc_0x0802145c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021450
         w9 = (byte) [x8 + 0xc]   // 0xcf // 207
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x8021480           // unlikely

    loc_0x0802146c: // orphan
         if (w9 == 1)
         b.ne 0x8021488           // likely

    loc_0x08021474: // orphan
         x9 = x8 + 0x200
         [x9] = q11
         jmp 0x8021488

    loc_0x08021480: // orphan
         x9 = x8 + 0x200
         q11 = [x9]               // 0xd0 // 208

    loc_0x08021488: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x802147c
         w9 = (byte) [x8 + 0xc]   // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x80214ac           // unlikely

    loc_0x08021498: // orphan
         if (w9 == 1)
         b.ne 0x80214b4           // likely

    loc_0x080214a0: // orphan
         x9 = x8 + 0x210
         [x9] = q12
         jmp 0x80214b4

    loc_0x080214ac: // orphan
         x9 = x8 + 0x210
         q12 = [x9]               // 0xd0 // 208

    loc_0x080214b4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80214a8
         w9 = (byte) [x8 + 0xd]   // 0xcf // 207
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x80214d8           // unlikely

    loc_0x080214c4: // orphan
         if (w9 == 1)
         b.ne 0x80214e0           // likely

    loc_0x080214cc: // orphan
         x9 = x8 + 0x220
         [x9] = q13
         jmp 0x80214e0

    loc_0x080214d8: // orphan
         x9 = x8 + 0x220
         q13 = [x9]               // 0xd0 // 208

    loc_0x080214e0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x80214d4
         w9 = (byte) [x8 + 0xd]   // 0xcf // 207
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x8021504           // unlikely

    loc_0x080214f0: // orphan
         if (w9 == 1)
         b.ne 0x802150c           // likely

    loc_0x080214f8: // orphan
         x9 = x8 + 0x230
         [x9] = q14
         jmp 0x802150c

    loc_0x08021504: // orphan
         x9 = x8 + 0x230
         q14 = [x9]               // 0xd0 // 208

    loc_0x0802150c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021500
         w9 = (byte) [x8 + 0xd]   // 0xcf // 207
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x8021530           // unlikely

    loc_0x0802151c: // orphan
         if (w9 == 1)
         b.ne 0x8021538           // likely

    loc_0x08021524: // orphan
         x9 = x8 + 0x240
         [x9] = q15
         jmp 0x8021538

    loc_0x08021530: // orphan
         x9 = x8 + 0x240
         q15 = [x9]               // 0xd0 // 208

    loc_0x08021538: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x802152c
         w9 = (byte) [x8 + 0xd]   // 0xcf // 207
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x802155c           // unlikely

    loc_0x08021548: // orphan
         if (w9 == 1)
         b.ne 0x8021564           // likely

    loc_0x08021550: // orphan
         x9 = x8 + 0x250
         [x9] = q16
         jmp 0x8021564

    loc_0x0802155c: // orphan
         x9 = x8 + 0x250
         q16 = [x9]               // 0xd0 // 208

    loc_0x08021564: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021558
         w9 = (byte) [x8 + 0xe]   // 0xcf // 207
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x8021588           // unlikely

    loc_0x08021574: // orphan
         if (w9 == 1)
         b.ne 0x8021590           // likely

    loc_0x0802157c: // orphan
         x9 = x8 + 0x260
         [x9] = q17
         jmp 0x8021590

    loc_0x08021588: // orphan
         x9 = x8 + 0x260
         q17 = [x9]               // 0xd0 // 208

    loc_0x08021590: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x8021584
         w9 = (byte) [x8 + 0xe]   // 0xcf // 207
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x80215b4           // unlikely

    loc_0x080215a0: // orphan
         if (w9 == 1)
         b.ne 0x80215bc           // likely

    loc_0x080215b4: // orphan
         x9 = x8 + 0x270
         q18 = [x9]               // 0xd0 // 208
         w9 = (byte) [x8 + 0xe]   // 0xcf // 207
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x80215e0           // unlikely

}

/* ===== 0x08011828 ===== */
int sym.work_trampoline_finish_task_switch (int esi, int edx) {
    loc_0x8011828:
        x8 = 0x8011000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8011858 // unlikely
            
    loc_0x8011858:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801185c
         // } else {
    loc_0x8011834:
        x8 = x0 - 0x20 // arg1
        if (x0 == 0)  // arg1
        csel x8,xzr,x8, eq
        x9 = [x0 + 0xf0] // 0xc7 // 199 // arg1
        x10 = 0x8011000
        x10 = x10 + 0
        [x0 + 0xf8] = x8 // arg1
        [x8] = x9
        [x0 + 0xf0] = x10 // arg1
        }
        return eax;
}

/* ===== 0x08011864 ===== */
int sym.work_trampoline_breakpoint (int esi, int edx) {
    loc_0x8011864:
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x2f0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8011000
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        x8 = [x9]     // 0xd0 // 208
        if !x8 jmp 0x8011d8c // unlikely
            
    loc_0x8011d8c:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-0x10]
        if (x8 == x9)
        b.ne 0x8011dc8 // likely
            
    loc_0x8011dc8:
        0x8011dc8 ()  // 0x8011dc8(0x0, 0x0, 0x0, 0x0)
        0x08011dcc
         // } else {
    loc_0x8011da0:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        sp = arg_2f0h
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08011dc4
         // } else {
        }
        return eax;
        goto loc_0x80118a0
    loc_0x80118c0:
        w27 = 0x5030  // '0P'
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x21 = [x0 + 0x10] // 0xc7 // 199 // arg1
        x26 = x8 + 0x20
        w27 = 0x3
        jmp 0x80118e8
         // do {
    loc_0x80118e8:
        // CODE XREF from sym.work_trampoline_breakpoint @ 0x80118d4
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sym.read_wb_reg () // "(" // sym.read_wb_reg(0x0, 0x0)
        x22 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x10
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sym.read_wb_reg () // "(" // sym.read_wb_reg(0x10, 0x0)
        x23 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w28 = 0x10
        x20 = x0 & 0xfffffffffffffffe
        x24 = x26     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x8011924
         // } while (?);
        }
        return eax;
    loc_0x080118d8: // orphan
             w8 = [x25]               // 0xe0 // 224
             w19 = w19 + 1
             if (w19 == w8)
             b.ge 0x8011d8c           // likely

    loc_0x08011918: // orphan
         x24 = x24 + x27
         x28 = x28 - 1
         b.eq 0x80118d8           // unlikely

    loc_0x08011924: // orphan
         // CODE XREF from sym.work_trampoline_breakpoint @ 0x8011914
         [sp, 0xd0] = (xzr,2)
         [var_c8h] = xzr
         if !x24 jmp 0x8011918    // likely

    loc_0x08011930: // orphan
         x8 = [x24 + 0x18]        // 0xdf // 223
         if !x8 jmp 0x8011918     // unlikely

    loc_0x08011938: // orphan
         x8 = [x24]               // 0xdf // 223
         if !x8 jmp 0x8011918     // unlikely

    loc_0x08011940: // orphan
         x1 = var_c8h             // int64_t arg2
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.hw_breakpoint_parse () // sym.hw_breakpoint_parse(0x0, 0x1780c8)
         if w0 jmp 0x8011918      // unlikely

    loc_0x08011950: // orphan
         x8 = [var_c8h]           // 0x4
         if (x8 == x22)
         b.ne 0x8011918           // unlikely

    loc_0x0801195c: // orphan
         x8 = [x21 + 0x100]       // 0xdc // 220
         x8 = x8 & 0xfffffffffffffffc
         if (x22 == x8)
         b.ne 0x8011918           // unlikely

    loc_0x0801196c: // orphan
         tbz w23,0,0x8011918      // likely

    loc_0x08011970: // orphan
         w8 = [var_d8h]           // 0x4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w10,w8,0x1d, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w8 >> 0xe
         if (w10 == 1)
         w10 = w8 >> 0x18
         w8 = w8 >> 0x1d
         w11 = w11 & 0x1fe0
         w10 = w10 & 0x18
         ccmp x9,8,0, eq
         w10 = w11 | w10
         bfi w10,w8,1, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w10 | 0x2000
         csel w8,w8,w10, eq
         if (x20 == x8)
         b.ne 0x8011918           // unlikely

    loc_0x080119b0: // orphan
         x8 = [x24]               // 0xdf // 223
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xdd1f             // '\x1f\xdd'
         w17 = 0xd2b5             // '\xb5\xd2'
         if (w16 == w17)
         b.eq 0x80119d4           // unlikely

    loc_0x080119d0: // orphan
         brk 0x8228

    loc_0x080119d4: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x0 = var_e0h             // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x200
         x24 = var_e0h
         0x80119e8 ()             // 0x80119e8(0x1780e0, 0x0, 0x200, 0x0)
         x1 = var_e0h
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x0)
         x1 = x24 + 0x10
         w0 = 0x1
         [var_c0h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x1)
         x1 = var_20h_4
         w0 = 0x2
         [var_b8h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x2)
         x1 = var_30h_4
         w0 = 0x3
         [var_b0h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x3)
         x1 = var_40h_4
         w0 = 0x4
         [var_a8h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x4)
         x1 = var_50h_4
         w0 = 0x5
         [var_a0h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x5)
         x1 = var_60h_4
         w0 = 0x6
         [var_98h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x6)
         x1 = var_70h_2
         w0 = 0x7
         [var_90h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x7)
         x1 = var_80h_2
         w0 = 0x8
         [var_88h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x8)
         x1 = var_90h_2
         w0 = 0x9
         [var_80h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x9)
         x1 = var_a0h_2
         w0 = 0xa
         [var_78h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0xa)
         x1 = var_b0h_2
         w0 = 0xb
         [var_70h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0xb)
         x1 = var_c0h_2
         w0 = 0xc
         [var_68h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0xc)
         x1 = var_d0h_2
         w0 = 0xd
         [var_60h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0xd)
         x1 = var_e0h_2
         w0 = 0xe
         [var_58h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0xe)
         x1 = var_f0h
         w0 = 0xf
         [var_50h_2] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0xf)
         x1 = var_100h
         w0 = 0x10
         [var_48h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x10)
         x1 = var_110h
         w0 = 0x11
         [var_40h_2] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x11)
         x1 = var_120h
         w0 = 0x12
         [var_38h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x12)
         x1 = var_130h
         w0 = 0x13
         [var_30h_2] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x13)
         x1 = var_140h
         w0 = 0x14
         [var_28h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x14)
         x1 = var_150h
         w0 = 0x15
         [var_20h_2] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x15)
         x1 = var_160h
         w0 = 0x16
         [var_18h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x16)
         x1 = var_170h
         w0 = 0x17
         [var_0h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x17)
         x1 = var_180h
         w0 = 0x18
         [var_8h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x18)
         x25 = var_190h
         w0 = 0x19
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x19)
         x26 = var_1a0h
         w0 = 0x1a
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x1a)
         x27 = var_1b0h
         w0 = 0x1b
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x1b)
         x28 = var_1c0h
         w0 = 0x1c
         x1 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x1c)
         x22 = var_1d0h
         w0 = 0x1d
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x1d)
         x23 = var_1e0h
         w0 = 0x1e
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x1e)
         x24 = var_1f0h
         w0 = 0x1f                // tmp
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x1f)
         x1 = var_e0h             // int64_t arg2
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.emulate_insn ()      // sym.emulate_insn(0x0, 0x1780e0)
         w21 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = var_e0h
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // " " // sym.write_q_reg(0x0)
         w0 = 0x1
         x1 = [var_c0h]           // 0x4 // 4
         sym.write_q_reg ()       // "@" // sym.write_q_reg(0x1)
         w0 = 0x2
         x1 = [var_b8h]           // 0x4 // 4
         sym.write_q_reg ()       // "`" // sym.write_q_reg(0x2)
         w0 = 0x3
         x1 = [var_b0h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x3)
         w0 = 0x4
         x1 = [var_a8h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x4)
         w0 = 0x5
         x1 = [var_a0h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x5)
         w0 = 0x6
         x1 = [var_98h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x6)
         w0 = 0x7
         x1 = [var_90h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x7)
         w0 = 0x8
         x1 = [var_88h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x8)
         w0 = 0x9
         x1 = [var_80h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x9)
         w0 = 0xa
         x1 = [var_78h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0xa)
         w0 = 0xb
         x1 = [var_70h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0xb)
         w0 = 0xc
         x1 = [var_68h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0xc)
         w0 = 0xd
         x1 = [var_60h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0xd)
         w0 = 0xe
         x1 = [var_58h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0xe)
         w0 = 0xf
         x1 = [var_50h_2]         // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0xf)
         w0 = 0x10
         x1 = [var_48h]           // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x10)
         w0 = 0x11
         x1 = [var_40h_2]         // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x11)
         w0 = 0x12
         x1 = [var_38h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x12)
         w0 = 0x13
         x1 = [var_30h_2]         // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x13)
         w0 = 0x14
         x1 = [var_28h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x14)
         w0 = 0x15
         x1 = [var_20h_2]         // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x15)
         w0 = 0x16
         x1 = [var_18h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x16)
         w0 = 0x17
         x1 = [var_0h]            // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x17)
         w0 = 0x18
         x1 = [var_8h]            // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x18)
         w0 = 0x19
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x19)
         w0 = 0x1a
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x1a)
         w0 = 0x1b
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x1b)
         w0 = 0x1c
         x1 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x1c)
         w0 = 0x1d
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x1d)
         w0 = 0x1e
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x1e)
         w0 = 0x1f                // tmp
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x1f)
         tbnz w21,0,0x8011d8c     // unlikely

    loc_0x08011d7c: // orphan
         w0 = 0x10
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_wb_reg ()      // sym.write_wb_reg(0x10, 0x0)

}

/* ===== 0x080123c8 ===== */
int sym.read_q_reg (int esi, int edx) {
    loc_0x80123c8:
        // XREFS(64)
        if (w0 == 0x1f) // arg1
        b.hi 0x80124e8 // unlikely
            
    loc_0x80124e8:
        0x080124e8
         // } else {
    loc_0x80123d0:
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = 0x8012000
        x9 = x9 + 0   // "@"
        x10 = 0x80123dc
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x080124ec ===== */
int sym.emulate_insn (int esi, int edx) {
    loc_0x80124ec:
        // CALL XREF from sym.work_trampoline_breakpoint @ 0x8011bf0
        // CALL XREF from sym.work_trampoline_watchpoint @ 0x8012224
        hint 0x19
        sp = sp - 0x100
        [sp, 0xa0] = (x29,2)
        [var_0h] = x27
        [sp, 0xc0] = (x26,2)
        [sp, 0xd0] = (x24,2)
        [sp, 0xe0] = (x22,2)
        [sp, 0xf0] = (x20,2)
        x29 = var_a0h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        x22 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x1 = var_8h   // int64_t arg2
        [x29 = x8
        [sp, 0x40] = (xzr,2)
        [sp, 0x30] = (xzr,2)
        [sp, 0x20] = (xzr,2)
        [sp, 0x10] = (xzr,2)
        [var_8h] = xzr
        [x29, -0x20] = (xzr,2)
        [x29, -0x30] = (xzr,2)
        [x29 = xzr
        msr pan,0     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = [x0 + 0x100] // 0xc7 // 199 // arg1
        w21 = [x20]   // 0xdb // 219
        w0 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8012558 ()  // 0x8012558(0x1, 0x177f08, 0x0, 0x0)
        w8 = [var_ch] // 0x4
        if w8 jmp 0x8014570 // unlikely
            
    loc_0x8014570:
        // CODE XREFS from sym.emulate_insn @ +0x2030, +0x205c
        w24 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // chop
         // do {
    loc_0x8014574:
        // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x8015b90
        w3 = w21 & 0xff
        ubfx w4,w21,8, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w5,w21,0x10, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w6 = w21 >> 0x18
        x0 = 0x8014000
        x0 = x0 + 0   // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
        w2 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8014594 ()  // 0x8014594(0x8014000, 0x0, 0x0, 0x0)
        jmp 0x8015a7c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8012564
    loc_0x8012574:
        x9 = 0x8012000
        x9 = x9 + 0   // "@"
        x25 = x19 + 0x100
        x10 = 0x8012580
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
         // (break)
}

/* ===== 0x08015ba0 ===== */
int sym.write_q_reg (int esi, int edx) {
    loc_0x8015ba0:
        // XREFS(64)
        if (w0 == 0x1f) // arg1
        b.hi 0x8015cc0 // unlikely
            
    loc_0x8015cc0:
        0x08015cc0
         // } else {
    loc_0x8015ba8:
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = 0x8015000
        x9 = x9 + 0
        x10 = 0x8015bb4
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x08011dd0 ===== */
int sym.work_trampoline_watchpoint (int esi, int edx) {
    loc_0x8011dd0:
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x2e0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8011000
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        x8 = [x9]     // 0xd0 // 208
        if !x8 jmp 0x8011e2c // unlikely
            
    loc_0x8011e2c:
        // CODE XREF from sym.work_trampoline_watchpoint @ 0x80123c0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-0x10]
        if (x8 == x9)
        b.ne 0x80123c4 // likely
            
    loc_0x80123c4:
        0x80123c4 ()  // sym.read_q_reg // 0x80123c4(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x80123c8:
        // XREFS(64)
        if (w0 == 0x1f) // arg1
        b.hi 0x80124e8 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8011e0c
    loc_0x8011e68:
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
        jmp 0x8011eb0
         // do {
    loc_0x8011eb0:
        // CODE XREF from sym.work_trampoline_watchpoint @ 0x8011e98
        w0 = 0x20
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sym.read_wb_reg () // "(" // sym.read_wb_reg(0x20, 0x0)
        x22 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x30     // '0'
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sym.read_wb_reg () // "(" // sym.read_wb_reg(0x30, 0x0)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        tbz w20,0,0x8011e9c // likely
         // } while (?);
        }
        return eax;
    loc_0x8011ed4:
        x21 = x20 & 0xfffffffffffffffe
        w24 = 0x10
        x23 = x26     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x8011ef4
         // do {
    loc_0x8011ef4:
        // CODE XREF from sym.work_trampoline_watchpoint @ 0x8011ee0
        [sp, 0xd8] = (xzr,2)
        [var_d0h] = xzr
        if !x23 jmp 0x8011ee8 // likely
         // } while (?);
        }
        return eax;
    loc_0x8011f00:
        x8 = [x23 + 0x18] // 0xde // 222
        if !x8 jmp 0x8011ee8 // unlikely
    loc_0x8011ee8:
        x23 = x23 + x27
        x24 = x24 - 1
        b.eq 0x8011e9c // unlikely
    loc_0x8011e9c:
        x8 = 0x8011000
        w19 = w19 + 1
        w8 = [x8]     // 0xcf // 207
        if (w19 == w8)
        b.ge 0x8011e2c // likely
        }
        return eax;
    loc_0x08011ee4: // orphan
             // CODE XREF from sym.work_trampoline_watchpoint @ 0x8011fdc
             if !x8 jmp 0x8011fe0     // likely

    loc_0x08011f08: // orphan
         x8 = [x23]               // 0xde // 222
         if !x8 jmp 0x8011ee8     // unlikely

    loc_0x08011f10: // orphan
         x1 = var_d0h             // int64_t arg2
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.hw_breakpoint_parse () // sym.hw_breakpoint_parse(0x0, 0x1780d0)
         if w0 jmp 0x8011ee8      // unlikely

    loc_0x08011f20: // orphan
         x8 = [var_d0h]           // 0x4
         if (x8 == x22)
         b.ne 0x8011ee8           // unlikely

    loc_0x08011f2c: // orphan
         w8 = [var_e0h]           // 0x4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w10,w8,0x1d, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w8 >> 0xe
         if (w10 == 1)
         w10 = w8 >> 0x18
         w8 = w8 >> 0x1d
         w11 = w11 & 0x1fe0
         w10 = w10 & 0x18
         ccmp x9,8,0, eq
         w10 = w11 | w10
         bfi w10,w8,1, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w10 | 0x2000
         csel w8,w8,w10, eq
         if (x21 == x8)
         b.ne 0x8011ee8           // unlikely

    loc_0x08011f6c: // orphan
         w8 = [var_e0h]           // 0x4
         if ((w8 & 0x18000000) == 0)
         b.eq 0x8011ee8           // unlikely

    loc_0x08011f78: // orphan
         w9 = w8 >> 0x1b
         w10 = w8 & loc.__kcfi_typeid_do_read_physical_memory
         w9 = w9 & 2
         if ((x25 & 0x40) == 0)
         csel w9,w10,w9, eq
         if !x28 jmp 0x8011ee8    // likely

    loc_0x08011f90: // orphan
         if !w9 jmp 0x8011ee8     // likely

    loc_0x08011f94: // orphan
         w9 = w8 & 0x7f80000
         if !w9 jmp 0x8011ee8     // likely

    loc_0x08011f9c: // orphan
         ubfx w9,w8,0x13, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [var_c8h]          // 0x4
         rbit w8,w9
         clz w8,w8
         x8 = x22 + x8
         x8 = x8 - x10
         b.hi 0x8011ee4           // unlikely

    loc_0x08011fb8: // orphan
         clz w8,w9
         w11 = 0x1f               // tmp
         w8 = w11 - w8
         if (w9 == 0)
         w9 = 0x20
         csel w8,w9,w8, eq
         x8 = x22 + x8
         x8 = x10 - x8
         csel x8,xzr,x8, lo
         jmp 0x8011ee4

    loc_0x08011fe0: // orphan
         x21 = [var_c0h]          // 0x4
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x23]               // 0xde // 222
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xdd1f             // '\x1f\xdd'
         w17 = 0xd2b5             // '\xb5\xd2'
         if (w16 == w17)
         // CODE XREFS from sym.read_q_reg @ 0x80123d4, 0x80123d8
         // CODE XREFS from sym.emulate_insn @ 0x8012574, 0x8012578
         b.eq 0x8012008           // unlikely

    loc_0x08012004: // orphan
         brk 0x8228

    loc_0x08012008: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x0 = var_d0h             // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x200
         x24 = var_d0h
         0x801201c ()             // 0x801201c(0x1780d0, 0x0, 0x200, 0x0)
         x1 = var_d0h
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x0)
         x1 = var_e0h
         w0 = 0x1
         [var_c8h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x1)
         x1 = var_20h_4
         w0 = 0x2
         [var_b8h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x2)
         x1 = var_30h_4
         w0 = 0x3
         [var_b0h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x3)
         x1 = var_40h_4
         w0 = 0x4
         [var_a8h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x4)
         x1 = var_50h_4
         w0 = 0x5
         [var_a0h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x5)
         x1 = var_60h_4
         w0 = 0x6
         [var_98h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x6)
         x1 = var_70h_2
         w0 = 0x7
         [var_90h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x7)
         x1 = var_80h_2
         w0 = 0x8
         [var_88h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x8)
         x1 = var_90h_2
         w0 = 0x9
         [var_80h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x9)
         x1 = var_a0h_2
         w0 = 0xa
         [var_78h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0xa)
         x1 = var_b0h_2
         w0 = 0xb
         [var_70h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0xb)
         x1 = var_c0h_2
         w0 = 0xc
         [var_68h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0xc)
         x1 = var_d0h_2
         w0 = 0xd
         [var_60h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0xd)
         x1 = var_e0h_2
         w0 = 0xe
         [var_58h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0xe)
         x1 = var_f0h
         w0 = 0xf
         [var_50h_2] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0xf)
         x1 = var_100h
         w0 = 0x10
         [var_48h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x10)
         x1 = var_110h
         w0 = 0x11
         [var_40h_2] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x11)
         x1 = var_120h
         w0 = 0x12
         [var_38h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x12)
         x1 = var_130h
         w0 = 0x13
         [var_30h_2] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x13)
         x1 = var_140h
         w0 = 0x14
         [var_28h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x14)
         x1 = var_150h
         w0 = 0x15
         [var_20h_2] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x15)
         x1 = var_160h
         w0 = 0x16
         [var_18h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x16)
         x1 = var_170h
         w0 = 0x17
         [var_0h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x17)
         x1 = var_180h
         w0 = 0x18
         [var_8h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x18)
         x25 = var_190h
         w0 = 0x19
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x19)
         x26 = var_1a0h
         w0 = 0x1a
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x1a)
         x27 = var_1b0h
         w0 = 0x1b
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x1b)
         x28 = var_1c0h
         w0 = 0x1c
         x1 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x1c)
         x22 = var_1d0h
         w0 = 0x1d
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x1d)
         x23 = var_1e0h
         w0 = 0x1e
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x1e)
         x24 = var_1f0h
         w0 = 0x1f                // tmp
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x1f)
         x1 = var_d0h             // int64_t arg2
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.emulate_insn ()      // sym.emulate_insn(0x0, 0x1780d0)
         w21 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = var_d0h
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // " " // sym.write_q_reg(0x0)
         w0 = 0x1
         x1 = [var_c8h]           // 0x4 // 4
         sym.write_q_reg ()       // "@" // sym.write_q_reg(0x1)
         w0 = 0x2
         x1 = [var_b8h]           // 0x4 // 4
         sym.write_q_reg ()       // "`" // sym.write_q_reg(0x2)
         w0 = 0x3
         x1 = [var_b0h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x3)
         w0 = 0x4
         x1 = [var_a8h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x4)
         w0 = 0x5
         x1 = [var_a0h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x5)
         w0 = 0x6
         x1 = [var_98h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x6)
         w0 = 0x7
         x1 = [var_90h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x7)
         w0 = 0x8
         x1 = [var_88h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x8)
         w0 = 0x9
         x1 = [var_80h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x9)
         w0 = 0xa
         x1 = [var_78h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0xa)
         w0 = 0xb
         x1 = [var_70h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0xb)
         w0 = 0xc
         x1 = [var_68h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0xc)
         w0 = 0xd
         x1 = [var_60h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0xd)
         w0 = 0xe
         x1 = [var_58h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0xe)
         w0 = 0xf
         x1 = [var_50h_2]         // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0xf)
         w0 = 0x10
         x1 = [var_48h]           // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x10)
         w0 = 0x11
         x1 = [var_40h_2]         // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x11)
         w0 = 0x12
         x1 = [var_38h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x12)
         w0 = 0x13
         x1 = [var_30h_2]         // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x13)
         w0 = 0x14
         x1 = [var_28h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x14)
         w0 = 0x15
         x1 = [var_20h_2]         // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x15)
         w0 = 0x16
         x1 = [var_18h]           // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x16)
         w0 = 0x17
         x1 = [var_0h]            // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x17)
         w0 = 0x18
         x1 = [var_8h]            // 0x4 // 4
         sym.write_q_reg ()       // sym.write_q_reg(0x18)
         w0 = 0x19
         x1 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x19)
         w0 = 0x1a
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x1a)
         w0 = 0x1b
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x1b)
         w0 = 0x1c
         x1 = x28                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x1c)
         w0 = 0x1d
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x1d)
         w0 = 0x1e
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x1e)
         w0 = 0x1f                // tmp
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_q_reg ()       // sym.write_q_reg(0x1f)
         tbnz w21,0,0x8011e2c     // unlikely

    loc_0x080123b0: // orphan
         x2 = x20 & 0xfffffffffffffffe
         w0 = 0x30                // '0'
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_wb_reg ()      // sym.write_wb_reg(0x30, 0x0)
         jmp 0x8011e2c

}

/* ===== 0x08015cc4 ===== */
int sym.emu_simulate_fp_simd_insn (int esi, int edx) {
    loc_0x8015cc4:
        // CALL XREF from sym.emulate_insn @ +0x1c0
        hint 0x19
        sp = sp - 0x90
        [sp, 0x30] = (x29,2)
        [sp, 0x40] = (x28,2)
        [sp, 0x50] = (x26,2)
        [sp, 0x60] = (x24,2)
        [sp, 0x70] = (x22,2)
        [sp, 0x80] = (x20,2)
        x29 = var_30h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        w12 = [x2 + 0x20] // 0xc9 // 201 // arg3
        w8 = w12 - 1
        if (w8 == 0x1f)
        b.hi 0x8017964 // likely
            
    loc_0x8017964:
        w0 = 0x1
        jmp 0x8018aa4
         // do {
    loc_0x8018aa4:
        // XREFS(25)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x801eda4 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08018ab8: // orphan
             (x20, 2) = 3
             (x22, 2) = 3
             (x24, 2) = 3
             (x26, 2) = 3
             (x28, 2) = 3
             (x29, 2) = 3
             sp = arg_90h
             hint 0x1d
             

    loc_0x0801eda4: // orphan
         0x801eda4 ()             // 0x801eda4(0x0, 0x0, 0x0, 0x0)
         brk 0x5512

}

/* ===== 0x0801f044 ===== */
int sym.emu_hw_store_pair_fp (int esi, int edx) {
    loc_0x801f044:
        // CALL XREF from sym.emulate_insn @ +0x1b58
        if (w1 == 4)  // arg2
        b.ne 0x801f064 // likely
            
    loc_0x801f064:
        if (w1 == 4)  // arg2
        b.ne 0x801f080 // likely
            
    loc_0x801f080:
        if (w1 == 8)  // arg2
        b.ne 0x801f0a0 // likely
            
    loc_0x801f0a0:
        if (w1 == 8)  // arg2
        b.ne 0x801f0bc // likely
            
    loc_0x801f0bc:
        if (w1 == 0x10) // arg2
        b.ne 0x801f0dc // likely
            
    loc_0x801f0dc:
        if (w1 == 0x10) // arg2
        b.ne 0x801f0f8 // likely
            
    loc_0x801f0f8:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801f0fc
         // } else {
    loc_0x801f0e4:
        q0 = [x3]     // 0xca // 202 // arg4
        q1 = [x4]     // 0xcb // 203 // arg5
        [x0] = (q0,2) // arg1
        w0 = 0x1
        0x0801f0f4
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x801f04c
    loc_0x801f050:
        q0 = [x3]     // 0xca // 202 // arg4
        q1 = [x4]     // 0xcb // 203 // arg5
        stnp s0,s1,[x0] // arg1
        w0 = 0x1
        0x0801f060
         // (break)
    loc_0x0801f08c: // orphan
             q0 = [x3]                // 0xca // 202 // arg4
             q1 = [x4]                // 0xcb // 203 // arg5
             stnp d0,d1,[x0]          // arg1
             w0 = 0x1
             

    loc_0x0801f0c8: // orphan
         q0 = [x3]                // 0xca // 202 // arg4
         q1 = [x4]                // 0xcb // 203 // arg5
         stnp q0,q1,[x0]          // arg1
         w0 = 0x1
         

}

/* ===== 0x0801ef88 ===== */
int sym.emu_hw_load_pair_fp (int esi, int edx) {
    loc_0x801ef88:
        // CALL XREF from sym.emulate_insn @ +0x1b78
        if (w1 == 4)  // arg2
        b.ne 0x801efa8 // likely
            
    loc_0x801efa8:
        if (w1 == 4)  // arg2
        b.ne 0x801efc4 // likely
            
    loc_0x801efc4:
        if (w1 == 8)  // arg2
        b.ne 0x801efe4 // likely
            
    loc_0x801efe4:
        if (w1 == 8)  // arg2
        b.ne 0x801f000 // likely
            
    loc_0x801f000:
        // XREFS(26)
        if (w1 == 0x10) // arg2
        b.ne 0x801f020 // likely
            
    loc_0x801f020:
        if (w1 == 0x10) // arg2
        b.ne 0x801f03c // likely
            
    loc_0x801f03c:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801f040
         // } else {
    loc_0x801f028:
        (q0, 2) = 3   // arg1
        [x3] = q0     // arg4
        [x4] = q1     // arg5
        w0 = 0x1
        0x0801f038
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x801ef90
    loc_0x801ef94:
        ldnp s0,s1,[x0] // arg1
        [x3] = q0     // arg4
        [x4] = q1     // arg5
        w0 = 0x1
        0x0801efa4
         // (break)
    loc_0x0801efd0: // orphan
             ldnp d0,d1,[x0]          // arg1
             [x3] = q0                // arg4
             [x4] = q1                // arg5
             w0 = 0x1
             

    loc_0x0801f00c: // orphan
         ldnp q0,q1,[x0]          // arg1
         [x3] = q0                // arg4
         [x4] = q1                // arg5
         w0 = 0x1
         

}

/* ===== 0x0801f100 ===== */
int sym.emu_hw_store_pair_gpr (int esi, int edx) {
    loc_0x801f100:
        // CALL XREF from sym.emulate_insn @ +0x1d10
        if (w1 == 4)  // arg2
        b.ne 0x801f118 // likely
            
    loc_0x801f118:
        if (w1 == 4)  // arg2
        b.ne 0x801f12c // likely
            
    loc_0x801f12c:
        if (w1 == 8)  // arg2
        b.ne 0x801f144 // likely
            
    loc_0x801f144:
        if (w1 == 8)  // arg2
        b.ne 0x801f158 // likely
            
    loc_0x801f158:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801f15c
         // } else {
    loc_0x801f14c:
        [x0] = (x3,2) // arg5
        w0 = 0x1
        0x0801f154
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x801f108
    loc_0x801f10c:
        stnp w3,w4,[x0] // arg5
        w0 = 0x1
        0x0801f114
         // (break)
    loc_0x0801f138: // orphan
             stnp x3,x4,[x0]          // arg5
             w0 = 0x1
             

}

/* ===== 0x0801ee18 ===== */
int sym.emu_hw_load_gpr (int esi, int edx) {
    loc_0x801ee18:
        // CALL XREF from sym.emulate_insn @ +0x28b8
        if (w1 == 1)  // arg2
        w8 = w2 ^ 1   // arg3
        cset w9,ne
        w10 = w9 | w8
        w9 = w4 ^ 1   // arg5
        w11 = w10 | w9
        tbz w3,0,0x801ee7c // likely
            
    loc_0x801ee7c:
        tbz w11,0,0x801eecc // likely
            
    loc_0x801eecc:
        x9 = (byte) [x0] // 0xc7 // 199 // arg1
        jmp 0x801ef20
         // do {
    loc_0x801ef20:
        // XREFS: CODE 0x0801ee78  CODE 0x0801eec0  CODE 0x0801eec8
        // XREFS: CODE 0x0801eed0  CODE 0x0801eed8  CODE 0x0801eee0
        // XREFS: CODE 0x0801eee8  CODE 0x0801eef0  CODE 0x0801eef8
        // XREFS: CODE 0x0801ef00  CODE 0x0801ef08  CODE 0x0801ef10
        // XREFS: CODE 0x0801ef18  CODE 0x0801ef40  CODE 0x0801ef54
        // XREFS: CODE 0x0801ef6c  CODE 0x0801ef84
        w8 = 0x1
        [x5] = x9     // arg6
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801ee34
    loc_0x801ee38:
        tbz w10,0,0x801eed4 // likely
            
    loc_0x801eed4:
        ldtrsb w9,[x0]
        jmp 0x801ef20
    loc_0x0801ee3c: // orphan
             if (w1 == 1)             // arg2
             b.eq 0x801eee4           // unlikely

    loc_0x0801ee44: // orphan
         if (w1 == 2)             // arg2
         cset w10,ne
         w8 = w10 | w8
         w9 = w8 | w9
         tbz w9,0,0x801eef4       // unlikely

    loc_0x0801ee58: // orphan
         tbz w8,0,0x801ef04       // likely

    loc_0x0801ee5c: // orphan
         if (w1 == 2)             // arg2
         b.eq 0x801ef14           // unlikely

    loc_0x0801ee64: // orphan
         if (w1 == 4)             // arg2
         b.ne 0x801ef30           // likely

    loc_0x0801ee6c: // orphan
         tbz w2,0,0x801ef30       // likely

    loc_0x0801ee70: // orphan
         tbz w4,0,0x801ef30       // likely

    loc_0x0801ee74: // orphan
         ldtrsw x9,[x0]
         jmp 0x801ef20

    loc_0x0801ee84: // orphan
         if (w1 == 1)             // arg2
         b.eq 0x801eeec           // unlikely

    loc_0x0801ee8c: // orphan
         if (w1 == 2)             // arg2
         cset w10,ne
         w8 = w10 | w8
         w9 = w8 | w9
         tbz w9,0,0x801eefc       // unlikely

    loc_0x0801eea0: // orphan
         tbz w8,0,0x801ef0c       // likely

    loc_0x0801eea4: // orphan
         if (w1 == 2)             // arg2
         b.eq 0x801ef1c           // unlikely

    loc_0x0801eeac: // orphan
         if (w1 == 4)             // arg2
         b.ne 0x801ef44           // likely

    loc_0x0801eeb4: // orphan
         tbz w2,0,0x801ef44       // likely

    loc_0x0801eeb8: // orphan
         tbz w4,0,0x801ef44       // likely

    loc_0x0801eebc: // orphan
         x9 = [x0]                // 0xc7 // 199 // arg1
         jmp 0x801ef20

    loc_0x0801eec4: // orphan
         ldtrsb x9,[x0]
         jmp 0x801ef20

    loc_0x0801eedc: // orphan
         w9 = (byte) [x0]         // 0xc7 // 199 // arg1
         jmp 0x801ef20

    loc_0x0801eee4: // orphan
         ldtrb w9,[x0]
         jmp 0x801ef20

    loc_0x0801eeec: // orphan
         w9 = (byte) [x0]         // 0xc7 // 199 // arg1
         jmp 0x801ef20

    loc_0x0801eef4: // orphan
         ldtrsh x9,[x0]
         jmp 0x801ef20

    loc_0x0801eefc: // orphan
         ldrsh x9,[x0]            // 0xc7 // 199 // arg1
         jmp 0x801ef20

    loc_0x0801ef04: // orphan
         ldtrsh w9,[x0]
         jmp 0x801ef20

    loc_0x0801ef0c: // orphan
         ldrsh w9,[x0]            // 0xc7 // 199 // arg1
         jmp 0x801ef20

    loc_0x0801ef14: // orphan
         ldtrh w9,[x0]
         jmp 0x801ef20

    loc_0x0801ef1c: // orphan
         w9 = (word) [x0]         // 0xc7 // 199 // arg1

    loc_0x0801ef28: // orphan
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0801ef30: // orphan
         if (w1 == 4)             // arg2
         b.ne 0x801ef58           // likely

    loc_0x0801ef38: // orphan
         tbnz w2,0,0x801ef58      // unlikely

    loc_0x0801ef3c: // orphan
         ldtr w9,[x0]
         jmp 0x801ef20

    loc_0x0801ef44: // orphan
         if (w1 == 4)             // arg2
         b.ne 0x801ef70           // likely

    loc_0x0801ef4c: // orphan
         tbnz w2,0,0x801ef70      // unlikely

    loc_0x0801ef50: // orphan
         w9 = [x0]                // 0xc7 // 199 // arg1
         jmp 0x801ef20

    loc_0x0801ef58: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w1 == 8)             // arg2
         b.ne 0x801ef28           // likely

    loc_0x0801ef64: // orphan
         tbnz w2,0,0x801ef28      // unlikely

    loc_0x0801ef68: // orphan
         ldtr x9,[x0]
         jmp 0x801ef20

    loc_0x0801ef70: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w1 == 8)             // arg2
         b.ne 0x801ef28           // likely

    loc_0x0801ef7c: // orphan
         tbnz w2,0,0x801ef28      // unlikely

    loc_0x0801ef80: // orphan
         x9 = [x0]                // 0xc7 // 199 // arg1
         jmp 0x801ef20

}

/* ===== 0x0801f160 ===== */
int sym.emu_hw_store_fp (int esi, int edx) {
    loc_0x801f160:
        // CALL XREF from sym.emulate_insn @ +0x28ec
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w1 - 1   // arg2
        if (w9 == 0xf)
        b.hi 0x801f1c8 // likely
            
    loc_0x801f1c8:
        0x0801f1c8
         // } else {
    loc_0x801f174:
        x10 = 0x801f000
        x10 = x10 + 0 // "?@"
        x11 = 0x801f17c
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
        }
        return eax;
}

/* ===== 0x0801edac ===== */
int sym.emu_hw_load_fp (int esi, int edx) {
    loc_0x801edac:
        // CALL XREF from sym.emulate_insn @ +0x2900
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w1 - 1   // arg2
        if (w9 == 0xf)
        b.hi 0x801ee14 // likely
            
    loc_0x801ee14:
        0x0801ee14
         // } else {
    loc_0x801edc0:
        x10 = 0x801e000
        x10 = x10 + 0
        x11 = 0x801edc8
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
        }
        return eax;
}

/* ===== 0x0801f1cc ===== */
int sym.emu_hw_store_gpr (int esi, int edx) {
    loc_0x801f1cc:
        // CALL XREF from sym.emulate_insn @ +0x2918
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w1 - 1   // arg2
        if (w9 == 7)
        tbz w2,0,0x801f204 // likely
            
    loc_0x801f204:
        b.hi 0x801f258 // unlikely
            
    loc_0x801f258:
        0x0801f258
         // } else {
    loc_0x801f208:
        x10 = 0x801f000
        x10 = x10 + 0 // "?@"
        x11 = 0x801f210
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // } else {
        }
        return eax;
        goto loc_0x801f1e0
    loc_0x801f1e4:
        x10 = 0x801f000
        x10 = x10 + 0 // "?@"
        x11 = 0x801f1ec
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // (break)
}

/* ===== 0x08020744 ===== */
int sym.emu_fp16_scalar_2source_hw (int esi, int edx) {
    loc_0x8020744:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x1c8
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 - 1
        if (w8 == 9)
        b.hi 0x8020824 // likely
            
    loc_0x8020824:
        0x08020824
         // } else {
    loc_0x8020758:
        x9 = 0x8020000
        x9 = x9 + 0
        x10 = 0x8020760
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x08020828 ===== */
int sym.emu_fp16_scalar_1source_hw (int esi, int edx) {
    loc_0x8020828:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x214
        w8 = w0 - 0xb // arg1
        if (w8 == 4)
        b.hi 0x80208b4 // likely
            
    loc_0x80208b4:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x080208b8
         // } else {
    loc_0x8020834:
        x9 = 0x8020000
        x9 = x9 + 0
        x10 = 0x802083c
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x0802097c ===== */
int sym.emu_fp16_scalar_3source_hw (int esi, int edx) {
    loc_0x802097c:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x270
        w8 = w0 - 0x14 // arg1
        if (w8 == 3)
        b.hi 0x80209bc // likely
            
    loc_0x80209bc:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x080209c0
         // } else {
    loc_0x8020988:
        x9 = 0x8020000
        x9 = x9 + 0
        x10 = 0x8020990
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x080204ac ===== */
int sym.emu_simd_ext_hw (int esi, int edx) {
    loc_0x80204ac:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x438
        if (w3 == 0x40) // arg4
        b.ne 0x80204f0 // likely
            
    loc_0x80204f0:
        if (w4 == 0xf) // arg5
        b.hi 0x802052c // unlikely
            
    loc_0x802052c:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x08020530
         // } else {
    loc_0x80204f8:
        w8 = w4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg5
        x9 = 0x8020000
        x9 = x9 + 0
        x10 = 0x8020504
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
         // } else {
        }
        return eax;
        goto loc_0x80204b4
    loc_0x80204bc:
        w8 = w4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg5
        x9 = 0x8020000
        x9 = x9 + 0
        x10 = 0x80204c8
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
         // (break)
}

/* ===== 0x08020028 ===== */
int sym.emu_simd_vector_3same_extra_hw (int esi, int edx) {
    loc_0x8020028:
        // CALL XREFS from sym.emu_simulate_fp_simd_insn @ +0x6d4, +0x43f8
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 - 0x7e
        if (w8 == 0xb)
        b.hi 0x80204a8 // likely
            
    loc_0x80204a8:
        0x080204a8
         // } else {
    loc_0x802003c:
        x9 = 0x8020000
        x9 = x9 + 0
        x10 = 0x8020044
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x0801f25c ===== */
int sym.emu_simd_extract_lane_hw (int esi, int edx) {
    loc_0x801f25c:
        // CALL XREFS from sym.emu_simulate_fp_simd_insn @ +0x930, +0x1030, +0x1490, +0x14d0, +0x14f8
        if !x3 jmp 0x801f2c8 // likely
            
    loc_0x801f2c8:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801f2cc
         // } else {
    loc_0x801f260:
        w8 = w1 - 8   // arg2
        extr w9,w1,w8, 3
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 7)
        b.hi 0x801f2dc // likely
        }
        return eax;
    loc_0x801f274:
        x10 = 0x801f000
        x10 = x10 + 0 // "?@"
        x11 = 0x801f27c
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // (break)
    loc_0x0801f2dc: // orphan
             w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             

}

/* ===== 0x0801f2e4 ===== */
int sym.emu_simd_write_scalar_hw (int esi, int edx) {
    loc_0x801f2e4:
        // CALL XREFS from sym.emu_simulate_fp_simd_insn @ +0x948, +0xf00, +0x43a4
        w8 = w2 - 8   // arg3
        extr w8,w2,w8, 3
        if (w8 == 2)
        b.lo 0x801f304 // unlikely
            
    loc_0x801f304:
        s0 = w1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x0] = q0     // arg1
        w0 = 0x1
        0x0801f310
         // } else {
    loc_0x801f2f4:
        if (w8 == 7)
        b.eq 0x801f314 // unlikely
        }
        return eax;
    loc_0x801f2fc:
        if (w8 == 3)
        b.ne 0x801f324 // likely
            
    loc_0x801f324:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801f328
         // } else {
        }
        return eax;
    loc_0x0801f314: // orphan
             d0 = x1                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
             [x0] = q0                // arg1
             w0 = 0x1
             

}

/* ===== 0x0801f518 ===== */
int sym.emu_simd_fhm_by_element_hw (int esi, int edx) {
    loc_0x801f518:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x994
        hint 0x19
        sp = sp - 0x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = [x9 + 0x638] // 0xd0 // 208
        if (w4 == 0x10) // arg5
        [x29 = x9
        [sp] = (xzr,2)
        b.ne 0x801f6b4 // likely
            
    loc_0x801f6b4:
        // CODE XREF from sym.emu_simd_fhm_by_element_hw @ 0x801f640
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x801f6d8 // likely
            
    loc_0x801f6d8:
        0x801f6d8 ()  // sym.emu_simd_fcma_by_element_hw // 0x801f6d8(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x801f6dc:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0xc88
        hint 0x19
        sp = sp - 0x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h_2
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        [sp] = (xzr,2)
        mrs x8,id_aa64isar1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf0000) == 0)
        b.eq 0x801f8ac // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801f548
    loc_0x801f550:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w7 == 7)  // arg8
        mrs x9,id_aa64isar0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        b.hi 0x801f6b4 // unlikely
    loc_0x801f560:
        x9 = x9 & 0xf000000000000
        if !x9 jmp 0x801f6b4 // likely
    loc_0x801f568:
        w9 = (word) [x3 + w7,uxtw 1] // 0xaf000000ca // 751619277002 // arg4
        x10 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        s0 = w9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x10] = q0    // sp
        w9 = [var_10h] // [0x178000:4]=0
        // sp
        if (w8 == 0x13)
        b.eq 0x801f5bc // unlikely
            
    loc_0x801f5bc:
        if (w6 == 0x80) // arg7
        tbnz w9,1,0x801f614 // unlikely
            
    loc_0x801f614:
        b.eq 0x801f698 // unlikely
            
    loc_0x801f698:
        x8 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        q0 = [x1]     // 0xc8 // 200 // arg2
        q1 = [x2]     // 0xc9 // 201 // arg3
        q2 = [x8]     // 0xcf // 207 // sp
        0x0801f6a8
         // } else {
    loc_0x801f618:
        if (w6 == 0x40)
        b.ne 0x801f63c // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801f584
    loc_0x801f58c:
        if (w6 == 0x80)
        tbnz w9,1,0x801f5ec // unlikely
            
    loc_0x801f5ec:
        b.eq 0x801f67c // unlikely
            
    loc_0x801f67c:
        x8 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        q0 = [x1]     // 0xc8 // 200
        q1 = [x2]     // 0xc9 // 201
        q2 = [x8]     // 0xcf // 207 // sp
        0x0801f68c
         // } else {
    loc_0x801f5f0:
        if (w6 == 0x40)
        b.ne 0x801f63c // likely
         // } while (?);
        }
        return eax;
        goto loc_0x801f594
    loc_0x801f598:
        if (w6 == 0x40)
        b.ne 0x801f63c // likely
            
    loc_0x801f63c:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x801f6b4
    loc_0x0801f5a0: // orphan
             x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             q0 = [x1]                // 0xc8 // 200
             q1 = [x2]                // 0xc9 // 201
             q2 = [x8]                // 0xcf // 207 // sp
             

    loc_0x0801f5c8: // orphan
         if (w6 == 0x40)
         b.ne 0x801f63c           // likely

    loc_0x0801f5d0: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

    loc_0x0801f5f8: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

    loc_0x0801f620: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

    loc_0x0801f644: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

    loc_0x0801f660: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

}

/* ===== 0x0801f6dc ===== */
int sym.emu_simd_fcma_by_element_hw (int esi, int edx) {
    loc_0x801f6dc:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0xc88
        hint 0x19
        sp = sp - 0x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h_2
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        [sp] = (xzr,2)
        mrs x8,id_aa64isar1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf0000) == 0)
        b.eq 0x801f8ac // unlikely
            
    loc_0x801f8ac:
        // CODE XREF from sym.emu_simd_fcma_by_element_hw @ 0x801f720
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x801f8b0:
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = [x9 + 0x638] // 0xd0 // 208
        ldur x10,[x29,-8]
        if (x9 == x10)
        b.ne 0x801f9d8 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801f708
    loc_0x801f710:
        mrs x8,id_aa64pfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x8 & 0xf00000
        if (x8 == 0x100)
        b.eq 0x801f72c // unlikely
            
    loc_0x801f72c:
        w8 = w3 << 1  // arg4
        w9 = w8 - 8
        extr w9,w8,w9, 3
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 7)
        b.hi 0x801f8b0 // likely
    loc_0x801f744:
        x10 = 0x801f000
        x10 = x10 + 0 // "?@"
        x11 = 0x801f74c
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // } else {
    loc_0x801f720:
        jmp 0x801f8ac
        }
        return eax;
    loc_0x0801f724: // orphan
             if (w3 == 0x20)          // arg4
             b.ne 0x801f8ac           // likely

    loc_0x0801f8c4: // orphan
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x29, 2) = 3
         sp = arg_30h
         hint 0x1d
         

    loc_0x0801f9d8: // orphan
         0x801f9d8 ()             // sym.emu_simd_fp_by_element_hw // 0x801f9d8(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0801f9dc ===== */
int sym.emu_simd_fp_by_element_hw (int esi, int edx) {
    loc_0x801f9dc:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x1058
        hint 0x19
        sp = sp - 0x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h_3
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = [x9 + 0x638] // 0xd0 // 208
        if (w5 == w4) // arg6
        [x29 = x9
        [sp] = (xzr,2)
        b.ne 0x801fa90 // unlikely
            
    loc_0x801fa90:
        if (w5 == 0x40) // arg6
        b.ne 0x801facc // likely
            
    loc_0x801facc:
        w9 = w4 - 8   // arg5
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        extr w9,w4,w9, 3
        if (w9 == 7)
        b.hi 0x8020000 // likely
            
    loc_0x8020000:
        // XREFS: CODE 0x0801fac0  CODE 0x0801fac8  STRING 0x0802003c
        // XREFS: CODE 0x08020040  STRING 0x080204c0  CODE 0x080204c4
        // XREFS: STRING 0x080204fc  CODE 0x08020500  STRING 0x08020758
        // XREFS: CODE 0x0802075c  STRING 0x08020834  CODE 0x08020838
        // XREFS: STRING 0x08020988  CODE 0x0802098c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8020024 // likely
            
    loc_0x8020024:
        0x8020024 ()  // sym.emu_simd_vector_3same_extra_hw // 0x8020024(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x8020028:
        // CALL XREFS from sym.emu_simulate_fp_simd_insn @ +0x6d4, +0x43f8
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 - 0x7e
        if (w8 == 0xb)
        b.hi 0x80204a8 // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801fa08
    loc_0x801fa18:
        if (w9 == 7)
        b.eq 0x801fb10 // unlikely
            
    loc_0x801fb10:
        x9 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        d0 = x3       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        [x9] = q0     // sp
        if (w5 == 0x40) // arg6
        b.ne 0x801fa3c // likely
            
    loc_0x801fa3c:
        if (w5 == 0x20) // arg6
        b.eq 0x801fb64 // unlikely
            
    loc_0x801fb64:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 - 1
        if (w8 == 0x10)
        b.hi 0x8020000 // likely
    loc_0x801fb74:
        x9 = 0x801f000
        x9 = x9 + 0   // "?@"
        x10 = 0x801fb7c
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
         // } else {
    loc_0x801fa44:
        if (w5 == 0x10) // arg6
        b.ne 0x801fac4 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801fa20
    loc_0x801fa28:
        x9 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        s0 = w3       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        [x9] = q0     // sp
        if (w5 == 0x40) // arg6
        b.eq 0x801fb24 // unlikely
        }
        return eax;
    loc_0x0801fa4c: // orphan
             w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             w8 = w8 - 1
             if (w8 == 0x10)
             b.hi 0x8020000           // likely

    loc_0x0801fa5c: // orphan
         x9 = 0x801f000
         x9 = x9 + 0              // "?@"
         x10 = 0x801fa64
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

    loc_0x0801faa0: // orphan
         if (w4 == 0x10)          // arg5
         b.eq 0x801fbf0           // unlikely

    loc_0x0801faa8: // orphan
         if (w4 == 8)             // arg5
         b.ne 0x801fac4           // likely

    loc_0x0801fab0: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         dup v0.8b,w3             // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         [x8] = q0                // sp
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x8020000

    loc_0x0801fac4: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x8020000

    loc_0x0801fb34: // orphan
         x9 = 0x801f000
         x9 = x9 + 0              // "?@"
         x10 = 0x801fb3c
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

    loc_0x0801fba4: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x9 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         dup v0.2s,w3             // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         [x9] = q0                // sp
         w8 = w8 - 1
         if (w8 == 0x10)
         b.hi 0x8020000           // likely

    loc_0x0801fbc0: // orphan
         x9 = 0x801f000
         x9 = x9 + 0              // "?@"
         x10 = 0x801fbc8
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

    loc_0x0801fbf0: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x9 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         dup v0.4h,w3             // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         [x9] = q0                // sp
         w8 = w8 - 1
         if (w8 == 0x10)
         b.hi 0x8020000           // likely

    loc_0x0801fc0c: // orphan
         x9 = 0x801f000
         x9 = x9 + 0              // "?@"
         x10 = 0x801fc14
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

}

/* ===== 0x0801f470 ===== */
int sym.emu_simd_extract_signed_lane_hw (int esi, int edx) {
    loc_0x801f470:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x1524
        if !x4 jmp 0x801f4e8 // likely
            
    loc_0x801f4e8:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801f4ec
         // } else {
    loc_0x801f474:
        tbz w3,0,0x801f4a0 // likely
        }
        return eax;
    loc_0x801f478:
        if (w1 == 0x20) // arg2
        b.eq 0x801f4d0 // unlikely
            
    loc_0x801f4d0:
        if (w2 == 3)  // arg3
        b.hi 0x801f4e8 // unlikely
    loc_0x801f4d8:
        x8 = [x0 + w2,uxtw 2] // 0xaa000000c7 // 730144440519 // arg1
        jmp 0x801f50c
         // do {
    loc_0x801f50c:
        // CODE XREFS from sym.emu_simd_extract_signed_lane_hw @ 0x801f49c, 0x801f4dc, 0x801f4f8, 0x801f504
        w0 = 0x1
        [x4] = x8     // arg5
        0x0801f514
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801f480
    loc_0x801f488:
        if (w1 == 8)  // arg2
        b.ne 0x801f4e8 // likely
    loc_0x801f490:
        if (w2 == 0xf) // arg3
        b.hi 0x801f4e8 // unlikely
    loc_0x801f498:
        x8 = (byte) [x0 + w2,uxtw] // 0xaa000000c7 // 730144440519 // arg1
        jmp 0x801f50c
    loc_0x0801f4a0: // orphan
             if (w1 == 0x10)          // arg2
             b.eq 0x801f4c0           // unlikely

    loc_0x0801f4a8: // orphan
         if (w1 == 8)             // arg2
         b.ne 0x801f4e8           // likely

    loc_0x0801f4b0: // orphan
         if (w2 == 0xf)           // arg3
         b.ls 0x801f4f0           // likely

    loc_0x0801f4b8: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         

    loc_0x0801f4c0: // orphan
         if (w2 == 7)             // arg3
         b.ls 0x801f4fc           // likely

    loc_0x0801f4c8: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         

    loc_0x0801f4e0: // orphan
         if (w2 == 7)             // arg3
         b.ls 0x801f508           // likely

    loc_0x0801f4f0: // orphan
         w8 = (byte) [x0 + w2,uxtw] // 0xaa000000c7 // 730144440519 // arg1
         w8 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801f50c

    loc_0x0801f4fc: // orphan
         ldrsh w8,[x0,w2, uxtw 1] // 0xaa000000c7 // 730144440519 // arg1
         w8 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801f50c

    loc_0x0801f508: // orphan
         ldrsh x8,[x0,w2, uxtw 1] // 0xaa000000c7 // 730144440519 // arg1

}

/* ===== 0x0801f32c ===== */
int sym.emu_simd_dup_general_hw (int esi, int edx) {
    loc_0x801f32c:
        // CALL XREFS from sym.emu_simulate_fp_simd_insn @ +0x1c38, +0x43d0
        if (w3 == 0x40) // arg4
        b.ne 0x801f358 // likely
            
    loc_0x801f358:
        w8 = w2 - 8   // arg3
        extr w9,w2,w8, 3
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 7)
        b.hi 0x801f3d4 // likely
            
    loc_0x801f3d4:
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x0801f3d8
         // } else {
    loc_0x801f36c:
        x10 = 0x801f000
        x10 = x10 + 0 // "?@"
        x11 = 0x801f374
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // } else {
        }
        return eax;
        goto loc_0x801f334
    loc_0x801f33c:
        if (w2 == 0x10) // arg3
        b.eq 0x801f39c // unlikely
            
    loc_0x801f39c:
        dup v0.4h,w1  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x0] = q0     // arg1
        jmp 0x801f3d0
         // do {
    loc_0x801f3d0:
        // CODE XREFS from sym.emu_simd_dup_general_hw @ 0x801f354, 0x801f398, 0x801f3a4
        w8 = 0x1
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801f344
    loc_0x801f34c:
        dup v0.8b,w1  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x0] = q0     // arg1
        jmp 0x801f3d0
    loc_0x0801f390: // orphan
             dup v0.2s,w1             // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
             [x0] = q0                // arg1
             jmp 0x801f3d0

    loc_0x0801f3a8: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         

}

/* ===== 0x0801f3dc ===== */
int sym.emu_simd_insert_general_hw (int esi, int edx) {
    loc_0x801f3dc:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x1c98
        w8 = w2 - 8   // arg3
        extr w9,w2,w8, 3
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 7)
        b.hi 0x801f468 // likely
            
    loc_0x801f468:
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x0801f46c
         // } else {
    loc_0x801f3f0:
        x10 = 0x801f000
        x10 = x10 + 0 // "?@"
        x11 = 0x801f3f8
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
        }
        return eax;
}

/* ===== 0x08020a18 ===== */
int sym.emu_simd_scalar_rdm_hw (int esi, int edx) {
    loc_0x8020a18:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x43c0
        mrs x8,id_aa64isar0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf0000000) == 0)
        b.eq 0x8020ac0 // unlikely
            
    loc_0x8020ac0:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x08020ac4
         // } else {
    loc_0x8020a24:
        if (w0 == 0x7f) // arg1
        b.eq 0x8020a48 // unlikely
        }
        return eax;
    loc_0x8020a2c:
        if (w0 == 0x7e) // arg1
        b.ne 0x8020ac0 // likely
    loc_0x8020a34:
        w8 = 0x8420   // ' \x84'
        if (w4 == 0x10) // arg5
        w8 = 0x7e42   // 'B~'
        w9 = w8 + 0x400,lsl 12
        jmp 0x8020a60
         // do {
    loc_0x8020a60:
        // CODE XREF from sym.emu_simd_scalar_rdm_hw @ 0x8020a44
        csel w8,w8,w9, eq
        if (w4 == 0x20) // arg5
        b.eq 0x8020a74 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x8020a6c:
        if (w4 == 0x10) // arg5
        b.ne 0x8020ac0 // likely
    loc_0x8020a74:
        w0 = 0x1
        w9 = 0x841f   // '\x1f\x84'
        w9 = 0x7e82   // '\x82~'
        if (w8 == w9)
        jmp ifgt 0x8020ac8 // unlikely
            
    loc_0x8020ac8:
        w9 = 0x8420   // ' \x84'
        w9 = 0x7e82   // '\x82~'
        if (w8 == w9)
        b.eq 0x8020b18 // unlikely
            
    loc_0x8020b18:
        q0 = [x1]     // 0xc8 // 200 // arg2
        q1 = [x2]     // 0xc9 // 201 // arg3
        q2 = [x3]     // 0xca // 202 // arg4
        0x08020b24
         // } else {
    loc_0x8020ad8:
        w9 = 0x8c20   // ' \x8c'
        w9 = 0x7e82   // '\x82~'
        if (w8 == w9)
        b.ne 0x8020b2c // likely
         // } while (?);
        }
        return eax;
        goto loc_0x8020a88
    loc_0x8020a98:
        w9 = 0x8c20   // ' \x8c'
        w9 = 0x7e42   // 'B~'
        if (w8 == w9)
        b.ne 0x8020b2c // likely
            
    loc_0x8020b2c:
        0x08020b2c
         // } else {
    loc_0x8020aa8:
        q0 = [x1]     // 0xc8 // 200 // arg2
        q1 = [x2]     // 0xc9 // 201 // arg3
        q2 = [x3]     // 0xca // 202 // arg4
        0x08020ab4
        }
        return eax;
    loc_0x08020a48: // orphan
             w8 = 0x8420              // ' \x84'
             w9 = 0x8c20              // ' \x8c'
             w8 = 0x7e42              // 'B~'
             w9 = 0x7e82              // '\x82~'
             w8 = w8 | 0x800
             if (w4 == 0x10)          // arg5

    loc_0x08020ae8: // orphan
         q0 = [x1]                // 0xc8 // 200 // arg2
         q1 = [x2]                // 0xc9 // 201 // arg3
         q2 = [x3]                // 0xca // 202 // arg4
         

    loc_0x08020b00: // orphan
         q0 = [x1]                // 0xc8 // 200 // arg2
         q1 = [x2]                // 0xc9 // 201 // arg3
         q2 = [x3]                // 0xca // 202 // arg4
         

}

/* ===== 0x08021f14 ===== */
int sym.arm64_decode_bit_masks (int esi, int edx) {
    loc_0x8021f14:
        // CALL XREFS from sym.arm64_decode_data_processing_immediate @ 0x8021c84, 0x8021e1c
        w8 = w2 & 0x3f // arg3
        bfi w8,w0,6, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 ^ 0x3f
        if !w8 jmp 0x8021f64 // unlikely
            
    loc_0x8021f64:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x08021f68
         // } else {
    loc_0x8021f24:
        clz w8,w8
        w8 = w8 ^ 0x1f
        if !w8 jmp 0x8021f64 // unlikely
        }
        return eax;
    loc_0x8021f30:
        w9 = w3 & 0xff // arg4
        if (w9 == 0x20)
        b.ne 0x8021f44 // likely
            
    loc_0x8021f44:
        w9 = 0x1
        w8 = w9 << w8
        w10 = w8 + 0xff
        w9 = w10 & w2 // arg3
        if !w4 jmp 0x8021f6c // likely
            
    loc_0x8021f6c:
        w11 = w10 & w1 // arg2
        w12 = w8 & 0xff
        w11 = w11 & 0xff
        w15 = w9 + 1
        w13 = w8 & 0xfe
        x16 = ~0
        w14 = (unsigned) w11 / w12
        if ((w15 & 0xc0) == 0)
        x15 = x16 << x15
        w17 = w9 & 0xff
        csinv x15,x16,x15, ne
        if ((w8 & 0xc0) == 0)
        msub w14,w14,w12, w11
        x12 = x16 << x13
        csinv x9,x16,x12, ne
        w11 = w17 - w11
        x12 = x15 & x9
        if !w14 jmp 0x8021fc8 // likely
            
    loc_0x8021fc8:
        w10 = w11 & w10
        if ((w3 & 0xff) == 0) // arg4
        b.eq 0x8021ffc // unlikely
            
    loc_0x8021ffc:
        x11 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8022000:
        // XREFS: CODE 0x08021ff8  STRING 0x080222e8  CODE 0x080222ec
        // XREFS: STRING 0x08022374  CODE 0x08022378  STRING 0x08022690
        // XREFS: CODE 0x08022694  STRING 0x08022758  CODE 0x0802275c
        // XREFS: STRING 0x08022bcc  CODE 0x08022bd0
        w10 = w10 + 1
        x12 = ~0
        if ((w10 & 0xc0) == 0)
        w13 = w3 & 0xff // arg4
        [x5] = x11    // arg6
        x14 = x12 << x10
        csinv x12,x12,x14, ne
        if !w13 jmp 0x8022048 // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08021fe0: // orphan
             x14 = x12 << x13
             w13 = w13 + w8
             x11 = x14 | x11
             w13 = w13 & 0xff
             if (w13 == w3)           // arg4
             b.lo 0x8021fe0           // unlikely

    loc_0x08021ff8: // orphan
         jmp 0x8022000

    loc_0x08022020: // orphan
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x12 & x9

    loc_0x0802202c: // orphan
         x12 = x9 << x11
         w11 = w11 + w8
         x10 = x12 | x10
         w11 = w11 & 0xff
         if (w11 == w3)           // arg4
         b.lo 0x802202c           // unlikely

    loc_0x08022044: // orphan
         jmp 0x802204c

    loc_0x08022048: // orphan
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0802204c: // orphan
         // CODE XREF from sym.arm64_decode_bit_masks @ 0x8022044
         w0 = 0x1
         [x6] = x10               // arg7
         

}

/* ===== 0x08021ec8 ===== */
int sym.arm64_decode_base_registers (int esi, int edx) {
    loc_0x8021ec8:
        // XREFS: CALL 0x08021d8c  CALL 0x08021e60  CALL 0x080223fc
        // XREFS: CALL 0x08022460  CALL 0x080224b4  CALL 0x080225b8
        // XREFS: CALL 0x08022680
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
        [x1 + 0x1f] = (byte) w8 // arg2 // tmp
        tbnz w0,0x1f,0x8021f04 // unlikely
            
    loc_0x8021f04:
        w8 = [x1 + 0x14] // 0xc8 // 200 // arg2
        w8 = w8 | 1
        [x1 + 0x14] = w8 // arg2
        0x08021f10
         // } else {
    loc_0x8021f00:
        0x08021f00
        }
        return eax;
}

/* ===== 0x080260e8 ===== */
int sym.init_module (int esi, int edx) {
    loc_0x80260e8:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8026000
        x0 = x0 + 0
        0x8026100 ()  // 0x8026100(0x8026000, 0x0, 0x0, 0x0)
        0x8026104 ()  // 0x8026104(0x8026000, 0x0, 0x0, 0x0)
        if w0 jmp 0x802615c // likely
            
    loc_0x802615c:
        // CODE XREF from sym.init_module @ 0x8026108
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8026000
        x0 = x0 + 0
        jmp 0x8026188
         // do {
    loc_0x8026188:
        // CODE XREFS from sym.init_module @ 0x8026168, 0x8026178
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x802618c ()  // 0x802618c(0x0, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802610c
    loc_0x8026114:
        0x8026114 ()  // 0x8026114(0x0, 0x0, 0x0, 0x0)
        if w0 jmp 0x802617c // unlikely
            
    loc_0x802617c:
        // CODE XREF from sym.init_module @ 0x8026118
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8026000
        x0 = x0 + 0
    loc_0x0802611c: // orphan
             0x802611c ()             // 0x802611c(0x0, 0x0, 0x0, 0x0)
             0x8026120 ()             // 0x8026120(0x0, 0x0, 0x0, 0x0)
             w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             if w0 jmp 0x80261a4      // unlikely

    loc_0x0802612c: // orphan
         0x802612c ()             // 0x802612c(0x0, 0x0, 0x0, 0x0)
         w1 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x8026000
         x0 = x0 + 0
         0x802613c ()             // 0x802613c(0x8026000, 0x0, 0x0, 0x0)
         x0 = 0x8026000
         x0 = x0 + 0
         0x8026148 ()             // 0x8026148(0x8026000, 0x0, 0x0, 0x0)
         x8 = 0x8026000
         [x8] = x0
         0x8026154 ()             // 0x8026154(0x8026000, 0x0, 0x0, 0x0)
         jmp 0x8026190

    loc_0x0802616c: // orphan
         // CODE XREF from sym.init_module @ 0x8026110
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x8026000
         x0 = x0 + 0
         jmp 0x8026188

    loc_0x08026190: // orphan
         // CODE XREFS from sym.init_module @ 0x8026158, 0x80261bc
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x19 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x080261a4: // orphan
         // CODE XREF from sym.init_module @ 0x8026128
         x0 = 0x8026000
         x0 = x0 + 0
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80261b0 ()             // 0x80261b0(0x8026000, 0x0, 0x0, 0x0)
         0x80261b4 ()             // 0x80261b4(0x8026000, 0x0, 0x0, 0x0)
         0x80261b8 ()             // 0x80261b8(0x8026000, 0x0, 0x0, 0x0)
         jmp 0x8026190

}

/* ===== 0x08004814 ===== */
int sym.disable_kprobe_blacklist (int esi, int edx) {
    loc_0x8004814:
        hint 0x19
        sp = sp - 0xb0
        [sp, 0x90] = (x29,2)
        [var_a0h] = x19
        x29 = var_90h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8004000
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        x8 = [x19]    // 0xda // 218
        if x8 jmp 0x80048cc // likely
            
    loc_0x80048cc:
        // CODE XREF from sym.disable_kprobe_blacklist @ 0x800483c
        x0 = 0x8004000
        x0 = x0 + 0
        blr x8        // xzr(0x8004000, 0x0, 0x0, 0x0)
        if x0 jmp 0x80048f0 // likely
            
    loc_0x80048f0:
        // CODE XREF from sym.disable_kprobe_blacklist @ 0x80048d8
        x8 = [x0]     // 0xc7 // 199
        if (x8 == x0)
        b.ne 0x8004938 // unlikely
            
    loc_0x8004938:
        // CODE XREF from sym.disable_kprobe_blacklist @ 0x80048f8
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800494c
         // do {
    loc_0x800494c:
        // CODE XREF from sym.disable_kprobe_blacklist @ 0x800493c
        if !x8 jmp 0x8004940 // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8004840
    loc_0x8004894:
        x8 = [var_30h] // 0x4 // 4
        x0 = var_sp_8h // int64_t arg_b0h
        [x19] = x8
        0x80048a0 ()  // 0x80048a0(0x178008, 0x0, 0x0, 0x0)
        x1 = [x19]    // 0xda // 218
        if x1 jmp 0x80048bc // likely
            
    loc_0x80048bc:
        // CODE XREF from sym.disable_kprobe_blacklist @ 0x80048a8
        x0 = 0x8004000
        x0 = x0 + 0   // int64_t arg_b0h
        0x80048c4 ()  // 0x80048c4(0x8004000, 0x0, 0x0, 0x0)
        x8 = [x19]    // 0xda // 218
    loc_0x080048ac: // orphan
             x0 = 0x8004000
             x0 = x0 + 0              // int64_t arg_b0h
             0x80048b4 ()             // "\t" // 0x80048b4(0x8004000, 0x0, 0x0, 0x0)
             jmp 0x80048dc

    loc_0x08004900: // orphan
         // CODE XREF from sym.disable_kprobe_blacklist @ 0x8004948
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg_b0h
         0x8004908 ()             // 0x8004908(0x8004000, 0x0, 0x0, 0x0)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004910: // orphan
         // CODE XREF from sym.disable_kprobe_blacklist @ 0x80048ec
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x8004970           // likely

    loc_0x08004924: // orphan
         (x29, 2) = 3
         x19 = [var_a0h]          // 0x4 // 4
         sp = arg_b0h
         hint 0x1d
         

    loc_0x08004940: // orphan
         // CODE XREFS from sym.disable_kprobe_blacklist @ 0x800494c, 0x8004958, 0x8004960, 0x800496c
         x8 = [x8]                // 0xcf // 207
         if (x8 == x0)
         b.eq 0x8004900           // unlikely

    loc_0x08004950: // orphan
         x9 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x9 + 0x10]!       // 0xd0 // 208
         if !x10 jmp 0x8004940    // unlikely

    loc_0x0800495c: // orphan
         x10 = [x8 + 0x18]        // 0xcf // 207
         if !x10 jmp 0x8004940    // unlikely

    loc_0x08004964: // orphan
         w1 = w1 + 1
         [x9] = (xzr,2)
         jmp 0x8004940

    loc_0x08004970: // orphan
         // CODE XREF from sym.disable_kprobe_blacklist @ 0x8004920
         0x8004970 ()             // 0x8004970(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x0800ac74 ===== */
int sym.init_arch (int esi, int edx) {
    loc_0x800ac74:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800a000
        x0 = x0 + 0
        0x800ac8c ()  // 0x800ac8c(0x800a000, 0x0, 0x0, 0x0)
        x19 = 0x800a000
        [x19] = x0
        x0 = 0x800a000
        x0 = x0 + 0
        0x800aca0 ()  // 0x800aca0(0x800a000, 0x0, 0x0, 0x0)
        x20 = 0x800a000
        [x20] = x0
        if x0 jmp 0x800acc0 // likely
            
    loc_0x800acc0:
        x8 = [x19]    // 0xda // 218
        if (x8 == 0)
        ccmp x0,0,4, ne
        cset w0,eq
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800acdc
         // } else {
    loc_0x800acb0:
        x0 = 0x800a000
        x0 = x0 + 0
        0x800acb8 ()  // 0x800acb8(0x800a000, 0x0, 0x0, 0x0)
        [x20] = x0
        }
        return eax;
}

/* ===== 0x0800f9b8 ===== */
int sym.paradise_hwbp_init (int esi, int edx) {
    loc_0x800f9b8:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x320
        w0 = 0x35     // '5'
        0x800f9cc ()  // 0x800f9cc(0x350320, 0x0, 0x0, 0x0)
        w9 = ~0xb
        if (x0 == 0)
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        csel w0,w9,wzr, eq
        x9 = 0x800f000
        [x9] = x8
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x0800f9f0
         // (break)
}

/* ===== 0x08003c0c ===== */
int sym.paradise_supercalls_init (int esi, int edx) {
    loc_0x8003c0c:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8003000
        x0 = x0 + 0   // U"Ht"
        0x8003c20 ()  // 0x8003c20(0x8003000, 0x0, 0x0, 0x0)
        x8 = 0x8003000
        [x8] = x0     // U"Ht"
        if !x0 jmp 0x8003c4c // unlikely
            
    loc_0x8003c4c:
        // CODE XREF from sym.paradise_supercalls_init @ 0x8003c2c
        x0 = 0x8003000
        x0 = x0 + 0
        0x8003c54 ()  // 0x8003c54(0x8003000, 0x0, 0x0, 0x0)
        jmp 0x8003c30
    loc_0x08003c30: // orphan
             // CODE XREF from sym.paradise_supercalls_init @ 0x8003c58
             x0 = 0x8003000
             x0 = x0 + 0
             0x8003c38 ()             // 0x8003c38(0x8003000, 0x0, 0x0, 0x0)
             if w0 jmp 0x8003c5c      // likely

    loc_0x08003c40: // orphan
         // CODE XREF from sym.paradise_supercalls_init @ 0x8003c6c
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08003c5c: // orphan
         // CODE XREF from sym.paradise_supercalls_init @ 0x8003c3c
         w1 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x8003000
         x0 = x0 + 0
         0x8003c68 ()             // 0x8003c68(0x8003000, 0x0, 0x0, 0x0)
         jmp 0x8003c40

}

/* ===== 0x08009d50 ===== */
int sym.paradise_gyro_init (int esi, int edx) {
    loc_0x8009d50:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x08009d54
         // (break)
}

/* ===== 0x08004fd4 ===== */
int sym.cfi_bypass (int esi, int edx) {
    loc_0x8004fd4:
        hint 0x19
        sp = sp - 0x120
        [sp, 0xc0] = (x29,2)
        [sp, 0xd0] = (x28,2)
        [sp, 0xe0] = (x26,2)
        [sp, 0xf0] = (x24,2)
        [sp, 0x100] = (x22,2)
        [sp, 0x110] = (x20,2)
        x29 = var_c0h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // XREFS(68)
        w21 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w23 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        // DATA XREFS from sym.cfi_bypass @ 0x8005108, 0x80051fc
        x8 = [x8 + 0x638] // 0xcf // 207
        x20 = 0x8005000
        // DATA XREF from sym.cfi_bypass @ 0x8005058
        x20 = x20 + 0
        x26 = 0x8005000
        // DATA XREFS from sym.cfi_bypass @ 0x8005110, 0x8005204
        x26 = x26 + 0
        w22 = 0x18
        x28 = 0x8005000
        [x29 = x8
         // do {
    loc_0x8005028:
        // DATA XREFS from sym.cfi_bypass @ 0x80050f8, 0x800513c, 0x80051ec
        x8 = x19 * x22
        x27 = [x20 + x8] // 0xcf000000db // 889058230491
        x8 = [x28]    // 0xe3 // 227
        if !x8 jmp 0x80050d8 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x8005038:
        // DATA XREFS from sym.cfi_bypass @ 0x8005100, 0x8005198, 0x80051f4
        x0 = x27      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        blr x8        // xzr(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8005124 // likely
            
    loc_0x8005124:
        // CODE XREFS from sym.cfi_bypass @ 0x8005040, 0x8005168, 0x80051b0
        w25 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8005128:
        // CODE XREFS from sym.cfi_bypass @ 0x80050d4, 0x8005184, 0x80052ac, 0x8005364
        if (w21 == 0)
        ccmp w25,0,4, eq
        csel w21,w21,w25, eq
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8005044
    loc_0x8005050:
        madd x8,x19,x22, x20
        [var_14h] = w23
        // DATA XREFS from sym.cfi_bypass @ 0x80050f0, 0x80051e4
        (x23, 2) = 3
        w8 = [x24]    // 0xdf // 223
        w9 = [x23]    // 0xde // 222
        if (w8 == w9)
        // DATA XREFS from sym.cfi_bypass @ 0x80050d8, 0x80051cc
        b.ne 0x80050a4 // unlikely
            
    loc_0x80050a4:
        // CODE XREF from sym.cfi_bypass @ 0x8005068
        x8 = x25 - 4
        [x29, -0x20] = (xzr,2)
        if (x8 != 4)
        [x29 = xzr
        b.hi 0x80051b4 // likely
            
    loc_0x80051b4:
        // CODE XREF from sym.cfi_bypass @ 0x80050b4
        x8 = 0x8005000
        [var_8h] = x25
        x8 = [x8]     // 0xcf // 207
        if x8 jmp 0x80052b0 // likely
            
    loc_0x80052b0:
        // CODE XREFS from sym.cfi_bypass @ 0x80051c0, 0x8005270
        x9 = x24 + 4
        x10 = x19 & 0x1fffffffffffffff
        if (x10 == 6)
        [x29, -0x28] = (x24,2)
        b.ne 0x80052d0 // likely
            
    loc_0x80052d0:
        // CODE XREF from sym.cfi_bypass @ 0x80052c0
        x0 = x29 - 0x28
        x1 = x23      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = w25      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ldur w16,[x8,-4] // 0xcf // 207
        w17 = 0x7ce6  // '\xe6|'
        w17 = 0xfc84  // '\x84\xfc'
        if (w16 == w17)
        b.eq 0x80052f4 // unlikely
            
    loc_0x80052f4:
        // CODE XREF from sym.cfi_bypass @ 0x80052ec
        blr x8        // xzr(0x0, 0x0, 0x0, 0x0)
        w25 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if w0 jmp 0x800528c // unlikely
            
    loc_0x800528c:
        // CODE XREF from sym.cfi_bypass @ 0x80052fc
        x0 = 0x8005000
        x0 = x0 + 0   // int64_t arg1
        x1 = x27      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
        w2 = w25      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800529c ()  // 0x800529c(0x8005000, 0x0, 0x0, 0x0)
        w23 = [var_14h] // 4
        if (w25 == 1)
        b.ge 0x8005380 // unlikely
            
    loc_0x8005380:
        // CODE XREF from sym.cfi_bypass @ 0x80052a8
        w23 = w25 + w23
        jmp 0x8005134
         // do {
    loc_0x8005134:
        // CODE XREF from sym.cfi_bypass @ 0x8005384
        x19 = x19 + 1
        if (x19 == 7)
        b.ne 0x8005028 // likely
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
    loc_0x0800507c: // orphan
             // CODE XREF from sym.cfi_bypass @ 0x8005098
             if (x11 == x8)
             b.eq 0x800519c           // likely

    loc_0x08005084: // orphan
         x12 = x8 << 2
         x8 = x8 + 1
         w13 = [x10 + x12]        // 0xd3000000d1 // 906238099665
         w12 = [x9 + x12]         // 0xd3000000d0 // 906238099664
         if (w13 == w12)
         b.eq 0x800507c           // likely

    loc_0x0800509c: // orphan
         if (x8 == x25)
         b.hs 0x800519c           // likely

    loc_0x080050d8: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8005034
         (x8, 2) = 3
         x0 = var_18h             // int64_t arg1
         (x10, 2) = 3
         [sp, 0x78] = (x8,2)
         (x8, 2) = 3
         [sp, 0x88] = (x10,2)
         (x10, 2) = 3
         [sp, 0x58] = (x8,2)
         (x8, 2) = 3
         [sp, 0x68] = (x10,2)
         (x10, 2) = 3
         [sp, 0x38] = (x8,2)
         (x8, 2) = 3
         [sp, 0x48] = (x10,2)
         (x10, 2) = 3
         [sp, 0x18] = (x8,2)
         [sp, 0x28] = (x10,2)
         0x800511c ()             // 0x800511c(0x178018, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x8005144    // likely

    loc_0x08005140: // orphan
         jmp 0x8005388

    loc_0x08005144: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8005120
         x8 = [var_40h]           // 4
         x0 = var_18h             // int64_t arg1
         [x28] = x8
         0x8005150 ()             // 0x8005150(0x178018, 0x0, 0x0, 0x0)
         x1 = [x28]               // 0xe3 // 227
         if x1 jmp 0x8005188      // likely

    loc_0x0800515c: // orphan
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         0x8005164 ()             // 0x8005164(0x8005000, 0x0, 0x0, 0x0)
         jmp 0x8005124

    loc_0x0800516c: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x800504c
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800517c ()             // 0x800517c(0x8005000, 0x0, 0x0, 0x0)
         w25 = ~0x15
         jmp 0x8005128

    loc_0x08005188: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8005158
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         0x8005190 ()             // 0x8005190(0x8005000, 0x0, 0x0, 0x0)
         x8 = [x28]               // 0xe3 // 227
         jmp 0x8005038

    loc_0x0800519c: // orphan
         // CODE XREFS from sym.cfi_bypass @ 0x8005080, 0x80050a0
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         0x80051a8 ()             // 0x80051a8(0x8005000, 0x0, 0x0, 0x0)
         w23 = [var_14h]          // 4
         jmp 0x8005124

    loc_0x080051cc: // orphan
         (x8, 2) = 3
         x0 = var_18h             // int64_t arg1
         (x10, 2) = 3
         [sp, 0x78] = (x8,2)
         (x8, 2) = 3
         [sp, 0x88] = (x10,2)
         (x10, 2) = 3
         [sp, 0x58] = (x8,2)
         (x8, 2) = 3
         [sp, 0x68] = (x10,2)
         (x10, 2) = 3
         [sp, 0x38] = (x8,2)
         (x8, 2) = 3
         [sp, 0x48] = (x10,2)
         (x10, 2) = 3
         [sp, 0x18] = (x8,2)
         [sp, 0x28] = (x10,2)
         0x8005210 ()             // 0x8005210(0x178018, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x800523c   // unlikely

    loc_0x08005218: // orphan
         x8 = [var_40h]           // 4
         x0 = var_18h             // int64_t arg1
         [x28] = x8
         0x8005224 ()             // 0x8005224(0x178018, 0x0, 0x0, 0x0)
         x1 = [x28]               // 0xe3 // 227
         if x1 jmp 0x8005248      // likely

    loc_0x08005230: // orphan
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         0x8005238 ()             // 0x8005238(0x8005000, 0x0, 0x0, 0x0)

    loc_0x0800523c: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8005214
         x8 = 0x8005000
         [x8] = xzr
         jmp 0x8005274

    loc_0x08005248: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x800522c
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         0x8005250 ()             // 0x8005250(0x8005000, 0x0, 0x0, 0x0)
         x8 = [x28]               // 0xe3 // 227

    loc_0x08005258: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x80051c8
         x0 = 0x8005000
         x0 = x0 + 0
         blr x8                   // xzr(0x8005000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x8005000
         [x9] = x0
         if x0 jmp 0x80052b0      // likely

    loc_0x08005274: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8005244
         w2 = w25 << 2
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         0x8005280 ()             // 0x8005280(0x0, 0x0, 0x0, 0x0)
         w25 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x8005300     // likely

    loc_0x08005314: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x23 + 4
         x10 = x24 + 4
         x11 = x14 - 1

    loc_0x08005324: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8005340
         if (x11 == x8)
         b.eq 0x8005368           // likely

    loc_0x0800532c: // orphan
         x12 = x8 << 2
         x8 = x8 + 1
         w13 = [x10 + x12]        // 0xd3000000d1 // 906238099665
         w12 = [x9 + x12]         // 0xd3000000d0 // 906238099664
         if (w13 == w12)
         b.eq 0x8005324           // likely

    loc_0x08005344: // orphan
         if (x8 == x14)
         b.hs 0x8005368           // likely

    loc_0x0800534c: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8005310
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         0x8005358 ()             // 0x8005358(0x8005000, 0x0, 0x0, 0x0)
         w23 = [var_14h]          // 4
         w25 = ~0x4
         jmp 0x8005128

    loc_0x08005368: // orphan
         // CODE XREFS from sym.cfi_bypass @ 0x8005328, 0x8005348
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         0x8005374 ()             // 0x8005374(0x8005000, 0x0, 0x0, 0x0)
         w23 = [var_14h]          // 4
         w25 = 0x1

    loc_0x08005388: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8005140
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         if (w23 == 0)
         ldur x9,[x29,-0x10]
         csel w0,w21,w23, eq
         if (x8 == x9)
         b.ne 0x80053cc           // likely

    loc_0x080053a4: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_120h
         hint 0x1d
         

    loc_0x080053c8: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x80052cc
         brk 0x1

    loc_0x080053cc: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x80053a0
         0x80053cc ()             // 0x80053cc(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x080046c4 ===== */
int sym.kallsyms_lookup_name_ex (int esi, int edx) {
    loc_0x80046c4:
        hint 0x19
        sp = sp - 0xb0
        [sp, 0x90] = (x29,2)
        [sp, 0xa0] = (x20,2)
        x29 = var_90h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x8004000
        x8 = [x8 + 0x638] // 0xcf // 207
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x29 = x8
        x8 = [x20]    // 0xdb // 219
        if !x8 jmp 0x8004700 // unlikely
            
    loc_0x8004700:
        // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x80046f0
        x8 = 0x8004000
        x8 = x8 + 0
        x0 = var_8h   // int64_t arg1
        (x9, 2) = 3
        (x11, 2) = 3
        [sp, 0x68] = (x9,2)
        (x9, 2) = 3
        [sp, 0x78] = (x11,2)
        (x11, 2) = 3
        [sp, 0x48] = (x9,2)
        (x9, 2) = 3
        [sp, 0x58] = (x11,2)
        (x11, 2) = 3
        [sp, 0x28] = (x9,2)
        (x9, 2) = 3
        [sp, 0x38] = (x11,2)
        (x11, 2) = 3
        [sp, 8] = (x9,2)
        [sp, 0x18] = (x11,2)
        0x800474c ()  // 0x800474c(0x178008, 0x0, 0x0, 0x0)
        tbz w0,0x1f,0x8004780 // likely
            
    loc_0x8004780:
        // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x8004750
        x8 = [var_30h] // 0x4 // 4
        x0 = var_8h   // int64_t arg1
        [x20] = x8
        0x800478c ()  // 0x800478c(0x178008, 0x0, 0x0, 0x0)
        x1 = [x20]    // 0xdb // 219
        if x1 jmp 0x80047a8 // likely
            
    loc_0x80047a8:
        // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x8004794
        x0 = 0x8004000
        x0 = x0 + 0   // int64_t arg1
        0x80047b0 ()  // 0x80047b0(0x8004000, 0x0, 0x0, 0x0)
        x8 = [x20]    // 0xdb // 219
        jmp 0x80046f4
    loc_0x080046f4: // orphan
             // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x80047b8
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
             jmp 0x8004758

    loc_0x08004754: // orphan
         // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x80047a4
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004758: // orphan
         // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x80046fc
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x80047bc           // likely

    loc_0x0800476c: // orphan
         (x20, 2) = 3
         (x29, 2) = 3
         sp = arg_b0h
         hint 0x1d
         

    loc_0x08004798: // orphan
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x80047a0 ()             // 0x80047a0(0x8004000, 0x0, 0x0, 0x0)
         jmp 0x8004754

    loc_0x080047bc: // orphan
         // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x8004768
         0x80047bc ()             // 0x80047bc(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08004f80 ===== */
int sym.hide_module (int esi, int edx) {
    loc_0x8004f80:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8004000
        x19 = x19 + 0
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8004f9c ()  // 0x8004f9c(0x8004000, 0x0, 0x0, 0x0)
        tbz w0,0,0x8004fb0 // likely
            
    loc_0x8004fb0:
        // CODE XREF from sym.hide_module @ 0x8004fa0
        x0 = x19 + 0x48
        [x19] = x19
        [x19 + 8] = x19
        0x8004fbc ()  // 0x8004fbc(0x48, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08004fcc
         // } else {
    loc_0x8004fa4:
        (x9, 2) = 3
        [x9 + 8] = x8
        [x8] = x9
        }
        return eax;
}

/* ===== 0x08003c74 ===== */
int sym.paradise_supercalls_exit (int esi, int edx) {
    loc_0x8003c74:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8003000
        x0 = x0 + 0
        0x8003c88 ()  // 0x8003c88(0x8003000, 0x0, 0x0, 0x0)
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x08003c94
         // (break)
}

/* ===== 0x0800f9f8 ===== */
int sym.paradise_hwbp_cleanup (int esi, int edx) {
    loc_0x800f9f8:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x24,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800f000
        x0 = x0 + 0
        0x800fa18 ()  // 0x800fa18(0x800f000, 0x0, 0x0, 0x0)
        x23 = 0x800f000
        x8 = [x23]    // 0xde // 222
        if !x8 jmp 0x800fabc // unlikely
            
    loc_0x800fabc:
        x19 = 0x800f000
        x0 = [x19]    // 0xda // 218
        0x800fac4 ()  // 0x800fac4(0x350320, 0x0, 0x0, 0x0)
        x0 = 0x800f000
        x0 = x0 + 0
        [x19] = xzr
        0x800fad4 ()  // 0x800fad4(0x800f000, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800faec
         // } else {
    loc_0x800fa28:
        x19 = [x23]   // 0xde // 222
        if !x19 jmp 0x800fabc // likely
        }
        return eax;
    loc_0x800fa30:
        x8 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x24 = 0x800f000
        x20 = 0x800f000
        x20 = x20 + 0
        x21 = 0x800f000
        x21 = x21 + 0
         // do {
    loc_0x800fa48:
        // CODE XREF from sym.paradise_hwbp_cleanup @ 0x800fa80
        x2 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = [x24]    // 0xdf // 223
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800fa54 ()  // 0x800fa54(0x0, 0x0, 0x0, 0x0)
        w8 = [x24]    // 0xdf // 223
        x22 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w8 == w22)
        b.ls 0x800fa84 // likely
         // } while (?);
        }
        return eax;
    loc_0x800fa68:
        w0 = w22      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w3 = 0x1
        0x800fa78 ()  // 0x800fa78(0x0, 0x0, 0x0, 0x1)
        x8 = x22 + 1
        jmp 0x800fa48
    loc_0x0800fa84: // orphan
             x0 = 0x800f000
             x0 = x0 + 0
             w1 = 0x1
             0x800fa90 ()             // 0x800fa90(0x800f000, 0x1, 0x0, 0x0)
             x0 = 0x800f000
             x0 = x0 + 0
             w1 = 0x2
             0x800faa0 ()             // 0x800faa0(0x800f000, 0x2, 0x0, 0x0)
             w2 = 0x320
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w2 = 0x35                // '5'
             [x23] = xzr
             0x800fab8 ()             // 0x800fab8(0x0, 0x0, 0x350320, 0x0)

}

/* ===== 0x080261c4 ===== */
int sym.cleanup_module (int esi, int edx) {
    loc_0x80261c4:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8026000
        x0 = x0 + 0
        0x80261d8 ()  // 0x80261d8(0x8026000, 0x0, 0x0, 0x0)
        0x80261dc ()  // 0x80261dc(0x8026000, 0x0, 0x0, 0x0)
        0x80261e0 ()  // 0x80261e0(0x8026000, 0x0, 0x0, 0x0)
        0x80261e4 ()  // 0x80261e4(0x8026000, 0x0, 0x0, 0x0)
        0x80261e8 ()  // 0x80261e8(0x8026000, 0x0, 0x0, 0x0)
        0x80261ec ()  // 0x80261ec(0x8026000, 0x0, 0x0, 0x0)
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x080261f8
         // (break)
}

/* ===== 0x08009d5c ===== */
int sym.paradise_gyro_exit (int esi, int edx) {
    loc_0x8009d5c:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = fcn.08009000 // 0x8009000
        x19 = x19 + 0 // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // fcn.08009000
        0x8009d78 ()  // 0x8009d78(0x8009000, 0x0, 0x0, 0x0)
        x20 = fcn.08009000 // 0x8009000
        x20 = x20 + 0 // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
        x8 = fcn.08009000 // 0x8009000
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // fcn.08009000
        [x8] = (byte) wzr // fcn.08009000
        0x8009d90 ()  // 0x8009d90(0x8009000, 0x0, 0x0, 0x0)
        sym.gyro_unhook_all_locked ()
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // fcn.08009000
        0x8009d9c ()  // 0x8009d9c(0x8009000, 0x0, 0x0, 0x0)
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // fcn.08009000
        0x8009da4 ()  // 0x8009da4(0x8009000, 0x0, 0x0, 0x0)
        x0 = fcn.08009000 // 0x8009000
        x0 = x0 + 0   // 0x8009000
        // fcn.08009000
        0x8009db0 ()  // 0x8009db0(0x8009000, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x08009dc0
         // (break)
}

/* ===== 0x08007424 ===== */
int sym.paradise_hide_cleanup (int esi, int edx) {
    loc_0x8007424:
        hint 0x19
        sp = sp - 0x70
        [sp, 0x20] = (x29,2)
        [var_30h] = x25
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        0x8007450 ()  // 0x8007450(0x0, 0x0, 0x0, 0x0)
        0x8007454 ()  // 0x8007454(0x0, 0x0, 0x0, 0x0)
        x0 = 0x8007000
        x0 = x0 + 0   // int64_t arg_70h
        0x8007460 ()  // 0x8007460(0x8007000, 0x0, 0x0, 0x0)
        x21 = 0x8007000
        x21 = x21 + 0
        x19 = [x21]   // 0xdc // 220
        if (x19 == x21)
        b.eq 0x8007574 // unlikely
            
    loc_0x8007574:
        x0 = 0x8007000
        x0 = x0 + 0   // int64_t arg_70h
        0x800757c ()  // 0x800757c(0x8007000, 0x0, 0x0, 0x0)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x80075b4 // likely
            
    loc_0x80075b4:
        0x80075b4 ()  // 0x80075b4(0x0, 0x0, 0x0, 0x0)
        0x080075b8
         // } else {
    loc_0x8007594:
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        x25 = [var_30h] // 0x4 // 4
        sp = arg_70h
        hint 0x1d
        0x080075b0
         // } else {
        }
        return eax;
    loc_0x08007498: // orphan
             // CODE XREF from sym.paradise_hide_cleanup @ 0x8007570
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
             0x800749c ()             // 0x800749c(0x0, 0x0, 0x0, 0x0)
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
             0x80074a4 ()             // 0x80074a4(0x0, 0x0, 0x0, 0x0)
             x19 = [x21]              // 0xdc // 220
             if (x19 == x21)
             b.eq 0x8007574           // likely

    loc_0x080074b4: // orphan
         // CODE XREF from sym.paradise_hide_cleanup @ 0x8007494
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x80074b8 ()             // 0x80074b8(0x0, 0x0, 0x0, 0x0)
         tbz w0,0,0x80074cc       // likely

    loc_0x080074c0: // orphan
         (x9, 2) = 3
         [x9 + 8] = x8
         [x8] = x9

    loc_0x080074cc: // orphan
         x8 = x22 + 0x22
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         [x19] = (x22,2)
         0x80074d8 ()             // 0x80074d8(0x0, 0x0, 0x0, 0x0)
         w8 = (byte) [x19 + 0x210] // 0xda // 218
         if !w8 jmp 0x8007498     // unlikely

    loc_0x080074e4: // orphan
         sym.resolve_hide_symbols ()
         if w0 jmp 0x8007498      // unlikely

    loc_0x080074ec: // orphan
         x0 = x19 + 0x10
         x8 = [x23]               // 0xde // 222
         x2 = var_sp_8h
         w1 = 0x1
         [sp, 8] = (xzr,2)
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x6c68             // 'hl'
         w17 = 0xf65a             // 'Z\xf6'
         if (w16 == w17)
         b.eq 0x8007518           // unlikely

    loc_0x08007514: // orphan
         brk 0x8228

    loc_0x08007518: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         if w0 jmp 0x8007498      // unlikely

    loc_0x08007520: // orphan
         x8 = [x24]               // 0xdf // 223
         x0 = var_sp_8h
         w1 = 0x2
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x710f             // '\x0fq'
         w17 = 0xf8f8             // '\xf8\xf8'
         if (w16 == w17)
         b.eq 0x8007544           // unlikely

    loc_0x08007540: // orphan
         brk 0x8228

    loc_0x08007544: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8007498     // likely

    loc_0x0800754c: // orphan
         x8 = [x25]               // 0xe0 // 224
         x0 = var_sp_8h
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x3d37             // '7='
         w17 = 0x59dc             // '\xdcY'
         if (w16 == w17)
         b.eq 0x800756c           // unlikely

    loc_0x08007568: // orphan
         brk 0x8228

    loc_0x0800756c: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         jmp 0x8007498

}

/* ===== 0x0800f42c ===== */
int sym.inline_hook_remove_all (int esi, int edx) {
    loc_0x800f42c:
        hint 0x19
        sp = sp - 0x80
        [sp, 0x30] = (x29,2)
        [sp, 0x40] = (x26,2)
        [sp, 0x50] = (x24,2)
        [sp, 0x60] = (x22,2)
        [sp, 0x70] = (x20,2)
        x29 = var_30h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg_80h
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        0x800f460 ()  // 0x800f460(0x800f000, 0x0, 0x0, 0x0)
        x8 = 0x800f000
        x8 = x8 + 0
        x21 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x22 = 0x800f000
        x23 = x8 + 0x1d0
        w24 = 0x1
        x25 = 0x800f000
        x25 = x25 + 0
        x19 = 0x800f000
        x19 = x19 + 0
        jmp 0x800f4b8
         // do {
    loc_0x800f4b8:
        // CODE XREF from sym.inline_hook_remove_all @ 0x800f48c
        x8 = x21 >> 3
        x8 = x8 & 0x1ffffffffffffff8
        x8 = [x25 + x8] // 0xcf000000e0 // 889058230496
        x8 = x8 >> x21
        tbz w8,0,0x800f4a8 // likely
         // } while (?);
        }
        return eax;
    loc_0x800f4cc:
        x20 = x23     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x22]    // 0xdd // 221
        x26 = [x20] + 0xffffffffffffff14 // 0xdb // 219
        if x8 jmp 0x800f4f0 // unlikely
            
    loc_0x800f4f0:
        x9 = x26 - 0x10
        x10 = x26 - 0xc
        x11 = x26 - 8
        x12 = x26 - 4
        [sp, 8] = (x9,2)
        [sp, 0x18] = (x11,2)
        if x8 jmp 0x800f520 // unlikely
            
    loc_0x800f520:
        x0 = var_sp_8h
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x4
        blr x8        // xzr(0x178008, 0x0, 0x4, 0x0)
         // do {
    loc_0x800f530:
        x9 = x21 >> 6
        x8 = x24 << x21
        jmp 0x800f490
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800f490: // orphan
             // CODE XREF from sym.inline_hook_remove_all @ 0x800f538
             x9 = x25 + x9,lsl 3
             prfm pstl1strm,[x9]

    loc_0x0800f498: // orphan
         ldxr x10,[x9]
         bic x10,x10,x8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w11,x10,[x9]
         if w11 jmp 0x800f498     // unlikely

    loc_0x0800f4a8: // orphan
         x21 = x21 + 1
         x23 = x23 + 0x1e0        // 0x800f3b0 // "?#\x03\xd5\xfd{\xbd\xa9\xf5\v"
         if (x21 == 0x20)
         b.eq 0x800f548           // unlikely

    loc_0x0800f548: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg_80h
         0x800f550 ()             // 0x800f550(0x800f000, 0x0, 0x0, 0x0)
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x800f588           // likely

    loc_0x0800f568: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x29, 2) = 3
         sp = arg_80h
         hint 0x1d
         

    loc_0x0800f588: // orphan
         0x800f588 ()             // 0x800f588(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08003a1c ===== */
int sym.paradise_get_file_private (int esi, int edx) {
    loc_0x8003a1c:
        x8 = 0x8003000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8003a3c // unlikely
            
    loc_0x8003a3c:
        // CODE XREF from sym.paradise_get_file_private @ 0x8003a24
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x08003a40
         // } else {
    loc_0x8003a28:
        x9 = [x8 + 0x28] // 0xcf // 207
        x10 = 0x8003000
        x10 = x10 + 0
        if (x9 == x10)
        b.eq 0x8003a44 // unlikely
        }
        return eax;
    loc_0x8003a44:
        // CODE XREF from sym.paradise_get_file_private @ 0x8003a38
        x0 = [x8 + 0xd8] // 0xcf // 207
        0x08003a48
         // (break)
}

/* ===== 0x08003a50 ===== */
int sym.paradise_install_fd (int esi, int edx) {
    loc_0x8003a50:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x838] // 0xcf // 207
        w9 = [x8 + 4] // 0xcf // 207
        w8 = [x8 + 0x14] // 0xcf // 207
        w8 = w9 | w8
        if w8 jmp 0x8003b74 // likely
            
    loc_0x8003b74:
        // CODE XREF from sym.paradise_install_fd @ 0x8003a78
        w19 = ~0
        jmp 0x8003af4
         // do {
    loc_0x8003af4:
        // CODE XREFS from sym.paradise_install_fd @ 0x8003b18, 0x8003b34, 0x8003b70, 0x8003b78
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08003b08
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8003a7c
    loc_0x8003a8c:
        w3 = 0x2
        x0 = 0x8003000
        x0 = x0 + 0
        x1 = 0x8003000
        x1 = x1 + 0
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w3 = 0x8
        0x8003aa8 ()  // 0x8003aa8(0x8003000, 0x8003000, 0x0, 0x80002)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x0 != 0xfff)
        b.hs 0x8003b1c // likely
            
    loc_0x8003b1c:
        // CODE XREF from sym.paradise_install_fd @ 0x8003ab4
        x0 = 0x8003000
        x0 = x0 + 0
        0x8003b24 ()  // 0x8003b24(0x8003000, 0x0, 0x0, 0x0)
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8003b2c ()  // 0x8003b2c(0x0, 0x0, 0x0, 0x0)
        w19 = w20     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x8003af4
    loc_0x08003ab8: // orphan
             x8 = 0x8003000
             w1 = 0xcc0               // '\xc0\f'
             w2 = 0x8                 // "\""
             x0 = [x8]                // 0xcf // 207
             0x8003ac8 ()             // 0x8003ac8(0x8003000, 0xcc0, 0x8, 0x0)
             if !x0 jmp 0x8003b38     // unlikely

    loc_0x08003ad0: // orphan
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x4
         0x8003ad8 ()             // 0x8003ad8(0x4, 0x0, 0x0, 0x0)
         [x21] = x0
         if !x0 jmp 0x8003b48     // unlikely

    loc_0x08003ae4: // orphan
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20 + 0xd8] = x21
         0x8003af0 ()             // 0x8003af0(0x0, 0x0, 0x0, 0x0)

    loc_0x08003b0c: // orphan
         // CODE XREF from sym.paradise_install_fd @ 0x8003a88
         x0 = 0x8003000
         x0 = x0 + 0
         0x8003b14 ()             // 0x8003b14(0x8003000, 0x0, 0x0, 0x0)
         jmp 0x8003af4

    loc_0x08003b38: // orphan
         // CODE XREF from sym.paradise_install_fd @ 0x8003acc
         x0 = 0x8003000
         x0 = x0 + 0
         0x8003b40 ()             // 0x8003b40(0x8003000, 0x0, 0x0, 0x0)
         jmp 0x8003b5c

    loc_0x08003b48: // orphan
         // CODE XREF from sym.paradise_install_fd @ 0x8003ae0
         x0 = 0x8003000
         x0 = x0 + 0
         0x8003b50 ()             // 0x8003b50(0x8003000, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8003b58 ()             // 0x8003b58(0x0, 0x0, 0x0, 0x0)

    loc_0x08003b5c: // orphan
         // CODE XREF from sym.paradise_install_fd @ 0x8003b44
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8003b60 ()             // 0x8003b60(0x0, 0x0, 0x0, 0x0)
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8003b68 ()             // 0x8003b68(0x0, 0x0, 0x0, 0x0)
         w19 = ~0xb
         jmp 0x8003af4

}

/* ===== 0x080257d0 ===== */
int sym.arraylist_create (int esi, int edx) {
    loc_0x80257d0:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8025000
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = 0xcc0    // '\xc0\f'
        w2 = 0x18
        x0 = [x8]     // 0xcf // 207 // int64_t arg1
        0x80257f4 ()  // 0x80257f4(0x71000d5f34000d2a, 0xcc0, 0x18, 0x0)
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8025840 // unlikely
            
    loc_0x8025840:
        // CODE XREF from sym.arraylist_create @ 0x802582c
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08025850
         // } else {
    loc_0x8025800:
        if (x20 == 0x10)
        w8 = 0x10
        csel x20,x20,x8, hi
        x8 = x20 >> 0x3d
        if x8 jmp 0x8025830 // unlikely
        }
        return eax;
    loc_0x8025814:
        x0 = x20 << 3 // int64_t arg1
        w1 = 0xcc0    // '\xc0\f'
        0x802581c ()  // 0x802581c(0x0, 0xcc0, 0x0, 0x0)
        [x19] = x0
        if !x0 jmp 0x8025834 // likely
            
    loc_0x8025834:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8025838 ()  // 0x8025838(0x0, 0x0, 0x0, 0x0)
        x19 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
    loc_0x08025828: // orphan
             [x19, 8] = (xzr,2)
             jmp 0x8025840

    loc_0x08025830: // orphan
         [x19] = xzr

}

/* ===== 0x080085f0 ===== */
int sym.do_get_thread_tpidr_el0 (int esi, int edx) {
    loc_0x80085f0:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x20] = (x29,2)
        [var_30h] = x21
        [sp, 0x40] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        mrs x20,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = x0 << 8 // arg1
        [x29 = x8
        w8 = (byte) [x20 + 0x46] // 0xdb // 219
        [sp, 8] = (xzr,2)
        tbnz w8,5,0x8008638 // likely
            
    loc_0x8008638:
        x8 = x19 & x21,asr 8
         // do {
    loc_0x800863c:
        x9 = xzr | 0x7ffffffff0
        if (x8 == x9)
        b.hi 0x8008718 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08008648: // orphan
             jmp 0x80087f8

    loc_0x08008650: // orphan
         // CODE XREF from sym.do_get_thread_tpidr_el0 @ 0x8008804
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8008668      // unlikely

    loc_0x0800865c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008668: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800868c: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_50h
         x0 = var_sp_8h           // int64_t arg1
         w2 = 0x10
         0x8008698 ()             // "[" // 0x8008698(0x178008, 0x0, 0x10, 0x0)
         jmp 0x8008808

    loc_0x080086a4: // orphan
         // CODE XREF from sym.do_get_thread_tpidr_el0 @ 0x8008814
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x80086bc      // unlikely

    loc_0x080086b0: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080086bc: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080086dc: // orphan
         if x0 jmp 0x8008718      // unlikely

    loc_0x080086e0: // orphan
         w0 = [var_sp_8h]         // 0x4 // 4
         if (w0 == 1)
         b.lt 0x8008720           // likely

    loc_0x080086ec: // orphan
         0x80086ec ()             // 0x80086ec(0x0, 0x0, 0x0, 0x0)
         w8 = (byte) [x20 + 0x46] // 0xdb // 219
         [var_0h] = x0
         tbnz w8,5,0x8008708      // likely

    loc_0x080086fc: // orphan
         x9 = [x20]               // 0xdb // 219
         x8 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x800870c    // likely

    loc_0x08008708: // orphan
         x8 = x19 & x21,asr 8

    loc_0x0800870c: // orphan
         x9 = xzr | 0x7ffffffff0
         if (x8 == x9)
         b.ls 0x8008728           // likely

    loc_0x08008718: // orphan
         w0 = ~0xd
         jmp 0x80087c8

    loc_0x08008720: // orphan
         w0 = ~0x15
         jmp 0x80087c8

    loc_0x08008728: // orphan
         jmp 0x8008828

    loc_0x08008730: // orphan
         // CODE XREF from sym.do_get_thread_tpidr_el0 @ 0x8008834
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8008748      // unlikely

    loc_0x0800873c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008748: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800876c: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = var_sp_8h           // int64_t arg_50h
         w2 = 0x10
         0x8008778 ()             // "/" // 0x8008778(0x0, 0x178008, 0x10, 0x0)
         jmp 0x8008838

    loc_0x08008784: // orphan
         // CODE XREF from sym.do_get_thread_tpidr_el0 @ 0x8008844
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800879c      // unlikely

    loc_0x08008790: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800879c: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080087bc: // orphan
         if (x0 == 0)
         w8 = ~0xd
         csel w0,wzr,w8, eq

    loc_0x080087c8: // orphan
         // CODE XREFS from sym.do_get_thread_tpidr_el0 @ 0x800871c, 0x8008724
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x80087f4           // likely

    loc_0x080087dc: // orphan
         (x20, 2) = 3
         (x29, 2) = 3
         x21 = [var_30h]          // 0x4 // 4
         sp = arg_50h
         hint 0x1d
         

    loc_0x080087f4: // orphan
         0x80087f4 ()             // 0x80087f4(0x0, 0x0, 0x0, 0x0)

    loc_0x080087f8: // orphan
         // CODE XREF from sym.do_get_thread_tpidr_el0 @ 0x8008648
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x800868c   // unlikely

    loc_0x08008804: // orphan
         jmp 0x8008650

    loc_0x08008808: // orphan
         // CODE XREF from sym.do_get_thread_tpidr_el0 @ 0x800869c
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x80086dc   // unlikely

    loc_0x08008814: // orphan
         jmp 0x80086a4

    loc_0x08008828: // orphan
         // CODE XREF from sym.do_get_thread_tpidr_el0 @ 0x8008728
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x800876c   // unlikely

    loc_0x08008834: // orphan
         jmp 0x8008730

    loc_0x08008838: // orphan
         // CODE XREF from sym.do_get_thread_tpidr_el0 @ 0x800877c
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x80087bc   // unlikely

    loc_0x08008844: // orphan
         jmp 0x8008784

}

/* ===== 0x08006b08 ===== */
int sym.do_hide_path (int esi, int edx) {
    loc_0x8006b08:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x420
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        x0 = var_210h // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x204
        [x29 = x8
        0x8006b40 ()  // 0x8006b40(0x177db0, 0x0, 0x204, 0x0)
        x0 = var_10h  // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x200
        0x8006b50 ()  // 0x8006b50(0x177bb0, 0x0, 0x200, 0x0)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w9,5,0x8006b6c // likely
            
    loc_0x8006b6c:
        x9 = x19 << 8
        x9 = x19 & x9,asr 8
         // do {
    loc_0x8006b74:
        x10 = xzr | 0x7fffff0000
        x10 = 0xfdfc  // '\xfc\xfd'
        if (x9 == x10)
        b.hi 0x8006fe0 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08006b84: // orphan
             jmp 0x8007004

    loc_0x08006b8c: // orphan
         // CODE XREF from sym.do_hide_path @ 0x8007010
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w9 & 0x80
         if w10 jmp 0x8006ba4     // unlikely

    loc_0x08006b98: // orphan
         
         w10 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006ba4: // orphan
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006bc8: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_420h
         x0 = var_210h            // int64_t arg1
         w2 = 0x204
         0x8006bd4 ()             // 0x8006bd4(0x178210, 0x0, 0x204, 0x0)
         jmp 0x8007014

    loc_0x08006be0: // orphan
         // CODE XREF from sym.do_hide_path @ 0x8007020
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8006bf8      // unlikely

    loc_0x08006bec: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006bf8: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006c18: // orphan
         if x0 jmp 0x8006fe0      // unlikely

    loc_0x08006c1c: // orphan
         x0 = var_210h            // int64_t arg1
         w1 = 0x200
         [var_0h] = (byte) wzr
         0x8006c28 ()             // 0x8006c28(0x178210, 0x200, 0x0, 0x0)
         if (x0 == 0x201)
         b.hs 0x8006fec           // likely

    loc_0x08006c34: // orphan
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x0 - 1
         w0 = ~0x15
         if (x8 == 0x1fe)
         b.hi 0x8006c70           // likely

    loc_0x08006c48: // orphan
         w8 = (byte) [var_210h]   // 0x4 // 4
         if (w8 == 0x2f)
         b.ne 0x8006c70           // likely

    loc_0x08006c54: // orphan
         x21 = var_1h_2
         x0 = var_10h             // int64_t arg1
         x1 = var_210h            // int64_t arg_420h
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006c64 ()             // 0x8006c64(0x178010, 0x178210, 0x1, 0x0)
         sym.resolve_hide_symbols ()
         if !w0 jmp 0x8006ca0     // unlikely

    loc_0x08006c70: // orphan
         // CODE XREFS from sym.do_hide_path @ 0x8006d38, 0x8006f28, 0x8006f38, 0x8006fdc, 0x8006fe4
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x8006fe8           // likely

    loc_0x08006c84: // orphan
         sp = arg_420h
         (x20, 2) = 3
         (x22, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08006ca0: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         w19 = [var_410h]         // 4
         0x8006cac ()             // 0x8006cac(0x8006000, 0x0, 0x0, 0x0)
         if !w19 jmp 0x8006ed8    // likely

    loc_0x08006cb4: // orphan
         x19 = 0x8006000
         x19 = x19 + 0
         x22 = x19                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006cc0: // orphan
         x22 = [x22]              // 0xdd // 221
         if (x22 == x19)
         b.eq 0x8006cf0           // likely

    loc_0x08006ccc: // orphan
         x0 = x22 + 0x10          // int64_t arg1
         x1 = var_10h             // int64_t arg_420h
         0x8006cd4 ()             // 0x8006cd4(0x10, 0x178010, 0x0, 0x0)
         if w0 jmp 0x8006cc0      // likely

    loc_0x08006cdc: // orphan
         if !x22 jmp 0x8006cf0    // likely

    loc_0x08006ce0: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006ce8 ()             // 0x8006ce8(0x8006000, 0x0, 0x0, 0x0)
         jmp 0x8006fd8

    loc_0x08006cf0: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006cf8 ()             // 0x8006cf8(0x8006000, 0x0, 0x0, 0x0)
         x8 = 0x8006000
         x0 = var_10h
         x2 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x1
         [sp] = (xzr,2)
         x8 = [x8]                // 0xcf // 207
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x6c68             // 'hl'
         w17 = 0xf65a             // 'Z\xf6'
         if (w16 == w17)
         b.eq 0x8006d2c           // unlikely

    loc_0x08006d28: // orphan
         brk 0x8228

    loc_0x08006d2c: // orphan
         blr x8                   // "`" // xzr(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8006d3c     // likely

    loc_0x08006d34: // orphan
         w0 = ~0x1
         jmp 0x8006c70

    loc_0x08006d3c: // orphan
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006d44 ()             // 0x8006d44(0xcc0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8006e14     // unlikely

    loc_0x08006d4c: // orphan
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x0 + 0x11           // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0xfef               // '\xef\x0f'
         0x8006d5c ()             // 0x8006d5c(0x11, 0x0, 0xfef, 0x0)
         x8 = 0x8006000
         x8 = x8 + 0
         x10 = 0x8006000
         x0 = 0x8006000
         x0 = x0 + 0
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x9, 2) = 3
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = 0x800e              // '\x0e\x80'
         x4 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x22 + 0x10] = (byte) wzr
         [x22] = (x9,2)
         x9 = [x10]               // 0xd1 // 209
         ldur w16,[x9,-4]         // 0xd0 // 208
         w17 = 0xdc0b             // '\v\xdc'
         w17 = 0x7df3             // '\xf3}'
         if (w16 == w17)
         b.eq 0x8006dac           // unlikely

    loc_0x08006da8: // orphan
         brk 0x8229

    loc_0x08006dac: // orphan
         blr x9                   // xzr(0x0, 0x0, 0x0, 0x0)
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006dbc ()             // 0x8006dbc(0x0, 0x0, 0x0, 0x0)
         x8 = 0x8006000
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x3d37             // '7='
         w17 = 0x59dc             // '\xdcY'
         if (w16 == w17)
         b.eq 0x8006de4           // unlikely

    loc_0x08006de0: // orphan
         brk 0x8228

    loc_0x08006de4: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w23 jmp 0x8006e40    // likely

    loc_0x08006df0: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         x1 = var_10h             // int64_t arg_420h
         w2 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006e00 ()             // 0x8006e00(0x8006000, 0x178010, 0x0, 0x0)
         w0 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w23 == 1)
         b.eq 0x8006d34           // unlikely

    loc_0x08006e10: // orphan
         jmp 0x8006e40

    loc_0x08006e14: // orphan
         x8 = 0x8006000
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x3d37             // '7='
         w17 = 0x59dc             // '\xdcY'
         if (w16 == w17)
         b.eq 0x8006e38           // unlikely

    loc_0x08006e34: // orphan
         brk 0x8228

    loc_0x08006e38: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         w0 = ~0xb

    loc_0x08006e40: // orphan
         // CODE XREF from sym.do_hide_path @ 0x8006e10
         tbnz w0,0x1f,0x8006c70   // unlikely

    loc_0x08006e44: // orphan
         x8 = 0x8006000
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x218
         x0 = [x8]                // 0xcf // 207 // int64_t arg1
         0x8006e54 ()             // 0x8006e54(0x2a0003f617ffffd7, 0xdc0, 0x218, 0x0)
         if !x0 jmp 0x8006f2c     // unlikely

    loc_0x08006e5c: // orphan
         if (x20 == 0x208)
         b.hs 0x8006ff8           // unlikely

    loc_0x08006e64: // orphan
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x0 + 0x10           // int64_t arg1
         x1 = var_10h             // int64_t arg_420h
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006e74 ()             // "(" // 0x8006e74(0x10, 0x178010, 0x0, 0x0)
         w8 = 0x1
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         [x22 + 0x210] = (byte) w8
         [x22] = x22
         [x22 + 8] = x22
         0x8006e90 ()             // 0x8006e90(0x8006000, 0x178010, 0x0, 0x0)
         x20 = x19                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006e98: // orphan
         x20 = [x20]              // 0xdb // 219
         if (x20 == x19)
         b.eq 0x8006f98           // likely

    loc_0x08006ea4: // orphan
         x0 = x20 + 0x10          // int64_t arg1
         x1 = var_10h             // int64_t arg_420h
         0x8006eac ()             // 0x8006eac(0x10, 0x178010, 0x0, 0x0)
         if w0 jmp 0x8006e98      // likely

    loc_0x08006eb4: // orphan
         if !x20 jmp 0x8006f98    // likely

    loc_0x08006eb8: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006ec0 ()             // 0x8006ec0(0x8006000, 0x0, 0x0, 0x0)
         x0 = var_10h             // int64_t arg_30h
         sym.hide_umount_path ()  // sym.hide_umount_path(0x178010)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8006ed0 ()             // "A" // 0x8006ed0(0x0, 0x0, 0x0, 0x0)
         jmp 0x8006fd8

    loc_0x08006ed8: // orphan
         x21 = 0x8006000
         x21 = x21 + 0
         x19 = x21                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006ee4: // orphan
         x19 = [x19]              // 0xda // 218
         if (x19 == x21)
         b.eq 0x8006f08           // likely

    loc_0x08006ef0: // orphan
         x20 = x19 + 0x10
         x1 = var_10h             // int64_t arg_420h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8006efc ()             // 0x8006efc(0x10, 0x178010, 0x0, 0x0)
         if w0 jmp 0x8006ee4      // likely

    loc_0x08006f04: // orphan
         if x19 jmp 0x8006f3c     // unlikely

    loc_0x08006f08: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006f10 ()             // 0x8006f10(0x8006000, 0x0, 0x0, 0x0)
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         x1 = var_10h             // int64_t arg_420h
         0x8006f20 ()             // " " // 0x8006f20(0x8006000, 0x178010, 0x0, 0x0)
         w0 = ~0x1
         jmp 0x8006c70

    loc_0x08006f2c: // orphan
         x0 = var_10h             // int64_t arg_30h
         sym.hide_umount_path ()  // sym.hide_umount_path(0x178010)
         w0 = ~0xb
         jmp 0x8006c70

    loc_0x08006f3c: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8006f40 ()             // 0x8006f40(0x0, 0x0, 0x0, 0x0)
         tbz w0,0,0x8006f54       // likely

    loc_0x08006f48: // orphan
         (x9, 2) = 3
         [x9 + 8] = x8
         [x8] = x9

    loc_0x08006f54: // orphan
         x8 = 0x100
         w9 = 0x22                // '\"'
         x8 = 0xdead              // '\xad\xde'
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         x9 = x8 | x9
         [x19] = (x8,2)
         0x8006f70 ()             // "hBH9h" // 0x8006f70(0x8006000, 0x0, 0x0, 0x0)
         w8 = (byte) [x19 + 0x210] // 0xda // 218
         if !w8 jmp 0x8006f84     // unlikely

    loc_0x08006f7c: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_30h
         sym.hide_umount_path ()  // sym.hide_umount_path(0x0)

    loc_0x08006f84: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8006f88 ()             // 0x8006f88(0x0, 0x0, 0x0, 0x0)
         x0 = 0x8006000
         x0 = x0 + 0
         jmp 0x8006fd0

    loc_0x08006f98: // orphan
         x20 = [x19]              // 0xda // 218
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_420h
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006fa8 ()             // 0x8006fa8(0x0, 0x0, 0xdead000000000100, 0x0)
         tbz w0,0,0x8006fbc       // likely

    loc_0x08006fb0: // orphan
         [x20 + 8] = x22
         [x22] = (x20,2)
         [x19] = x22

    loc_0x08006fbc: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006fc4 ()             // 0x8006fc4(0x8006000, 0x0, 0x0, 0x0)
         x0 = 0x8006000
         x0 = x0 + 0

    loc_0x08006fd0: // orphan
         // CODE XREF from sym.do_hide_path @ 0x8006f94
         x1 = var_10h             // int64_t arg_420h
         0x8006fd4 ()             // 0x8006fd4(0x0, 0x178010, 0x0, 0x0)

    loc_0x08006fd8: // orphan
         // CODE XREFS from sym.do_hide_path @ 0x8006cec, 0x8006ed4
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8006c70

    loc_0x08006fe0: // orphan
         w0 = ~0xd
         jmp 0x8006c70

    loc_0x08006fe8: // orphan
         0x8006fe8 ()             // 0x8006fe8(0x0, 0x0, 0x0, 0x0)

    loc_0x08006fec: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         0x8006ff4 ()             // 0x8006ff4(0x8006000, 0x0, 0x0, 0x0)

    loc_0x08006ff8: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         // XREFS(50)
         0x8007000 ()             // "\t" // 0x8007000(0x8006000, 0x0, 0x0, 0x0)

    loc_0x08007004: // orphan
         // CODE XREF from sym.do_hide_path @ 0x8006b84
         x9 = 0x8007000
         x9 = [x9]                // 0xd0 // 208
         tbnz w9,0x1d,0x8006bc8   // unlikely

    loc_0x08007010: // orphan
         jmp 0x8006b8c

    loc_0x08007014: // orphan
         // CODE XREF from sym.do_hide_path @ 0x8006bd8
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8006c18   // unlikely

    loc_0x08007020: // orphan
         jmp 0x8006be0

}

/* ===== 0x08008d54 ===== */
int sym.do_bind_thread_pacga_key (int esi, int edx) {
    loc_0x8008d54:
        hint 0x19
        sp = sp - 0x20
        [sp, 0x10] = (x29,2)
        x29 = var_10h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        [var_8h] = x8
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        [sp] = xzr
        tbnz w9,5,0x8008d8c // likely
            
    loc_0x8008d8c:
        x9 = x0 << 8  // arg1
        x9 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x8008d94:
        x10 = xzr | 0x7ffffffff8
        if (x9 == x10)
        b.hi 0x8008e80 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08008da0: // orphan
             jmp 0x8008e8c

    loc_0x08008da8: // orphan
         // CODE XREF from sym.do_bind_thread_pacga_key @ 0x8008e98
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w9 & 0x80
         if w10 jmp 0x8008dc0     // unlikely

    loc_0x08008db4: // orphan
         
         w10 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008dc0: // orphan
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008de4: // orphan
         x1 = x0 & 0xff7fffffffffffff // int64_t arg_20h
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x8
         0x8008df0 ()             // "*" // 0x8008df0(0x178000, 0x0, 0x8, 0x0)
         jmp 0x8008e9c

    loc_0x08008dfc: // orphan
         // CODE XREF from sym.do_bind_thread_pacga_key @ 0x8008ea8
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8008e14      // unlikely

    loc_0x08008e08: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008e14: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008e34: // orphan
         // CODE XREF from fcn.08009000 @ 0x8009010
         if x0 jmp 0x8008e80      // unlikely

    loc_0x08008e38: // orphan
         w8 = [sp]                // 0x4 // 4
         w0 = ~0x15
         if (w8 == 1)
         b.lt 0x8008e5c           // likely

    loc_0x08008e48: // orphan
         w1 = [var_4h]            // 4
         if (w1 == 1)
         b.lt 0x8008e5c           // likely

    loc_0x08008e54: // orphan
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8008e58 ()             // 0x8008e58(0x0, 0x0, 0x0, 0x0)

    loc_0x08008e5c: // orphan
         // CODE XREF from sym.do_bind_thread_pacga_key @ 0x8008e84
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         x9 = [var_8h]            // 0x4 // 4
         if (x8 == x9)
         b.ne 0x8008e88           // likely

    loc_0x08008e70: // orphan
         (x29, 2) = 3
         sp = arg_20h
         hint 0x1d
         

    loc_0x08008e80: // orphan
         w0 = ~0xd
         jmp 0x8008e5c

    loc_0x08008e88: // orphan
         0x8008e88 ()             // "\t" // 0x8008e88(0x0, 0x0, 0x0, 0x0)

    loc_0x08008e8c: // orphan
         // CODE XREF from sym.do_bind_thread_pacga_key @ 0x8008da0
         x9 = 0x8008000
         x9 = [x9]                // 0xd0 // 208
         tbnz w9,0x1d,0x8008de4   // unlikely

    loc_0x08008e98: // orphan
         jmp 0x8008da8

    loc_0x08008e9c: // orphan
         // CODE XREF from sym.do_bind_thread_pacga_key @ 0x8008df4
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8008e34   // unlikely

    loc_0x08008ea8: // orphan
         jmp 0x8008dfc

}

/* ===== 0x080063a4 ===== */
int sym.do_get_module_base (int esi, int edx) {
    loc_0x80063a4:
        hint 0x19
        sp = sp - 0x170
        [sp, 0x130] = (x29,2)
        [var_140h] = x28
        [sp, 0x150] = (x22,2)
        [sp, 0x160] = (x20,2)
        x29 = var_130h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        x0 = var_8h   // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x120
        [x29 = x8
        0x80063dc ()  // 0x80063dc(0x177e98, 0x0, 0x120, 0x0)
        mrs x20,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = (byte) [x20 + 0x46] // 0xdb // 219
        x21 = x19 << 8
        tbnz w8,5,0x80063fc // likely
            
    loc_0x80063fc:
        x8 = x19 & x21,asr 8
         // do {
    loc_0x8006400:
        x22 = xzr | 0x7fffff0000
        x22 = 0xfee0  // '\xe0\xfe'
        if (x8 == x22)
        b.hi 0x80064e4 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08006410: // orphan
             jmp 0x80065c8

    loc_0x08006418: // orphan
         // CODE XREF from sym.do_get_module_base @ 0x80065d4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8006430      // unlikely

    loc_0x08006424: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006430: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006454: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_170h
         x0 = var_8h              // int64_t arg1
         w2 = 0x120
         0x8006460 ()             // "]" // 0x8006460(0x178008, 0x0, 0x120, 0x0)
         jmp 0x80065d8

    loc_0x0800646c: // orphan
         // CODE XREF from sym.do_get_module_base @ 0x80065e4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8006484      // unlikely

    loc_0x08006478: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006484: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080064a4: // orphan
         if x0 jmp 0x80064e4      // unlikely

    loc_0x080064a8: // orphan
         x8 = var_8h
         w0 = [var_8h]            // 0x4 // 4
         x1 = x8 | 4              // int64_t arg_170h
         w2 = [var_120h]          // 0x4 // 4
         0x80064b8 ()             // 0x80064b8(0x0, 0x17800c, 0x0, 0x0)
         if !x0 jmp 0x80064ec     // likely

    loc_0x080064c0: // orphan
         [var_0h] = x0
         w8 = (byte) [x20 + 0x46] // 0xdb // 219
         tbnz w8,5,0x80064d8      // likely

    loc_0x080064cc: // orphan
         x9 = [x20]               // 0xdb // 219
         x8 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x80064dc    // likely

    loc_0x080064d8: // orphan
         x8 = x19 & x21,asr 8

    loc_0x080064dc: // orphan
         if (x8 == x22)
         b.ls 0x80064f4           // likely

    loc_0x080064e4: // orphan
         w0 = ~0xd
         jmp 0x8006594

    loc_0x080064ec: // orphan
         w0 = ~0x76               // 'v'
         jmp 0x8006594

    loc_0x080064f4: // orphan
         jmp 0x80065f8

    loc_0x080064fc: // orphan
         // CODE XREF from sym.do_get_module_base @ 0x8006604
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8006514      // unlikely

    loc_0x08006508: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006514: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006538: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = var_8h              // int64_t arg_170h
         w2 = 0x120
         0x8006544 ()             // "0" // 0x8006544(0x0, 0x178008, 0x120, 0x0)
         jmp 0x8006608

    loc_0x08006550: // orphan
         // CODE XREF from sym.do_get_module_base @ 0x8006614
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8006568      // unlikely

    loc_0x0800655c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006568: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006588: // orphan
         if (x0 == 0)
         w8 = ~0xd
         csel w0,wzr,w8, eq

    loc_0x08006594: // orphan
         // CODE XREFS from sym.do_get_module_base @ 0x80064e8, 0x80064f0
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x80065c4           // likely

    loc_0x080065a8: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         x28 = [var_140h]         // 4
         sp = arg_170h
         hint 0x1d
         

    loc_0x080065c4: // orphan
         0x80065c4 ()             // 0x80065c4(0x0, 0x0, 0x0, 0x0)

    loc_0x080065c8: // orphan
         // CODE XREF from sym.do_get_module_base @ 0x8006410
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8006454   // unlikely

    loc_0x080065d4: // orphan
         jmp 0x8006418

    loc_0x080065d8: // orphan
         // CODE XREF from sym.do_get_module_base @ 0x8006464
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x80064a4   // unlikely

    loc_0x080065e4: // orphan
         jmp 0x800646c

    loc_0x080065f8: // orphan
         // CODE XREF from sym.do_get_module_base @ 0x80064f4
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8006538   // unlikely

    loc_0x08006604: // orphan
         jmp 0x80064fc

    loc_0x08006608: // orphan
         // CODE XREF from sym.do_get_module_base @ 0x8006548
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8006588   // unlikely

    loc_0x08006614: // orphan
         jmp 0x8006550

}

/* ===== 0x0800885c ===== */
int sym.do_get_thread_pacga_key (int esi, int edx) {
    loc_0x800885c:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x30] = (x29,2)
        [sp, 0x40] = (x20,2)
        x29 = var_30h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        mrs x20,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x29 = x8
        // CODE XREF from sym.hide_module @ +0x50
        w8 = (byte) [x20 + 0x46] // 0xdb // 219
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        tbnz w8,5,0x80088a0 // likely
            
    loc_0x80088a0:
        x8 = x19 << 8
        x8 = x19 & x8,asr 8
         // do {
    loc_0x80088a8:
        x9 = xzr | 0x7fffffffe0
        if (x8 == x9)
        b.hi 0x8008998 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080088b4: // orphan
             jmp 0x8008a74

    loc_0x080088bc: // orphan
         // CODE XREF from sym.do_get_thread_pacga_key @ 0x8008a80
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x80088d4      // unlikely

    loc_0x080088c8: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080088d4: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080088f8: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_50h
         x0 = var_sp_8h           // int64_t arg1
         w2 = 0x20
         0x8008904 ()             // "_" // 0x8008904(0x178008, 0x0, 0x20, 0x0)
         jmp 0x8008a84

    loc_0x08008910: // orphan
         // CODE XREF from sym.do_get_thread_pacga_key @ 0x8008a90
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8008928      // unlikely

    loc_0x0800891c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008928: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008948: // orphan
         if x0 jmp 0x8008998      // unlikely

    loc_0x0800894c: // orphan
         w0 = [var_sp_8h]         // 0x4 // 4
         if (w0 == 1)
         b.lt 0x80089a0           // likely

    loc_0x08008958: // orphan
         x8 = var_sp_8h
         x1 = x8 + 8              // int64_t arg_50h
         x2 = var_18h
         x3 = var_18h_2
         0x8008968 ()             // 0x8008968(0x0, 0x178010, 0x178018, 0x178020)
         if w0 jmp 0x8008a48      // unlikely

    loc_0x08008970: // orphan
         w8 = (byte) [x20 + 0x46] // 0xdb // 219
         tbnz w8,5,0x8008984      // likely

    loc_0x08008978: // orphan
         x9 = [x20]               // 0xdb // 219
         x8 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x800898c    // unlikely

    loc_0x08008984: // orphan
         x8 = x19 << 8
         x8 = x19 & x8,asr 8

    loc_0x0800898c: // orphan
         x9 = xzr | 0x7fffffffe0
         if (x8 == x9)
         b.ls 0x80089a8           // likely

    loc_0x08008998: // orphan
         w0 = ~0xd
         jmp 0x8008a48

    loc_0x080089a0: // orphan
         w0 = ~0x15
         jmp 0x8008a48

    loc_0x080089a8: // orphan
         jmp 0x8008aa4

    loc_0x080089b0: // orphan
         // CODE XREF from sym.do_get_thread_pacga_key @ 0x8008ab0
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x80089c8      // unlikely

    loc_0x080089bc: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080089c8: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080089ec: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = var_sp_8h           // int64_t arg_50h
         w2 = 0x20
         0x80089f8 ()             // "." // 0x80089f8(0x0, 0x178008, 0x20, 0x0)
         jmp 0x8008ab4

    loc_0x08008a04: // orphan
         // CODE XREF from sym.do_get_thread_pacga_key @ 0x8008ac0
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8008a1c      // unlikely

    loc_0x08008a10: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008a1c: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008a3c: // orphan
         if (x0 == 0)
         w8 = ~0xd
         csel w0,wzr,w8, eq

    loc_0x08008a48: // orphan
         // CODE XREFS from sym.do_get_thread_pacga_key @ 0x800899c, 0x80089a4
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x8008a70           // likely

    loc_0x08008a5c: // orphan
         (x20, 2) = 3
         (x29, 2) = 3
         sp = arg_50h
         hint 0x1d
         

    loc_0x08008a70: // orphan
         0x8008a70 ()             // 0x8008a70(0x0, 0x0, 0x0, 0x0)

    loc_0x08008a74: // orphan
         // CODE XREF from sym.do_get_thread_pacga_key @ 0x80088b4
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x80088f8   // unlikely

    loc_0x08008a80: // orphan
         jmp 0x80088bc

    loc_0x08008a84: // orphan
         // CODE XREF from sym.do_get_thread_pacga_key @ 0x8008908
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8008948   // unlikely

    loc_0x08008a90: // orphan
         jmp 0x8008910

    loc_0x08008aa4: // orphan
         // CODE XREF from sym.do_get_thread_pacga_key @ 0x80089a8
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x80089ec   // unlikely

    loc_0x08008ab0: // orphan
         jmp 0x80089b0

    loc_0x08008ab4: // orphan
         // CODE XREF from sym.do_get_thread_pacga_key @ 0x80089fc
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8008a3c   // unlikely

    loc_0x08008ac0: // orphan
         jmp 0x8008a04

}

/* ===== 0x08025cb0 ===== */
int sym.runEvent (int esi, int edx) {
    loc_0x8025cb0:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x20] = (x29,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x8025000
        x8 = [x8 + 0x638] // 0xcf // 207
        x19 = 0x8025000
        [x29 = x8
        w8 = [x20]    // 0xdb // 219
        w9 = [x19]    // 0xda // 218
        if (w8 == 0)
        ccmp w9,0,4, ne
        b.ne 0x8025cf8 // likely
            
    loc_0x8025cf8:
        x8 = 0x8025000
        w8 = (byte) [x8] // 0xcf // 207
        tbz w8,0,0x8025d0c // likely
            
    loc_0x8025d0c:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        [sp, 8] = (xzr,2)
        [sp] = xzr
        tbnz w9,5,0x8025d2c // likely
            
    loc_0x8025d2c:
        x9 = x0 << 8  // arg1
        x9 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x8025d34:
        x10 = xzr | 0x7fffff0000
        x10 = 0xffe8  // '\xe8\xff'
        if (x9 == x10)
        b.hi 0x8025d04 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08025d44: // orphan
             jmp 0x8026064

    loc_0x08025d4c: // orphan
         // CODE XREF from sym.runEvent @ 0x8026070
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w9 & 0x80
         if w10 jmp 0x8025d64     // unlikely

    loc_0x08025d58: // orphan
         
         w10 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08025d64: // orphan
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08025d88: // orphan
         x1 = x0 & 0xff7fffffffffffff // int64_t arg_50h
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x18
         0x8025d94 ()             // 0x8025d94(0x178000, 0x0, 0x18, 0x0)
         jmp 0x8026074

    loc_0x08025da0: // orphan
         // CODE XREF from sym.runEvent @ 0x8026080
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8025db8      // unlikely

    loc_0x08025dac: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08025db8: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08025dd8: // orphan
         if x0 jmp 0x8025d04      // unlikely

    loc_0x08025ddc: // orphan
         (w10, 2) = 3
         w8 = [x20]               // 0xdb // 219
         w9 = [x19]               // 0xda // 218
         w21 = w10 * w8
         x8 = [sp]                // 0x4 // 4
         w20 = w11 * w9
         [sp, 8] = (w21,2)
         tbnz w8,1,0x8025e74      // unlikely

    loc_0x08025dfc: // orphan
         tbz w8,2,0x8025d04       // likely

    loc_0x08025e00: // orphan
         x8 = 0x8025000
         x19 = [x8]               // 0xcf // 207
         if !x19 jmp 0x8026030    // unlikely

    loc_0x08025e0c: // orphan
         x8 = 0x8025000
         w3 = [var_10h]           // 0x4 // 4
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x2f                // '/'
         x8 = [x8]                // 0xcf // 207
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xc5ef             // '\xef\xc5'
         w17 = 0xe968             // 'h\xe9'
         if (w16 == w17)
         b.eq 0x8025e3c           // unlikely

    loc_0x08025e38: // orphan
         brk 0x8228

    loc_0x08025e3c: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = 0x8025000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xbb9b             // '\x9b\xbb'
         w17 = 0x70e0             // '\xe0p'
         if (w16 == w17)
         b.eq 0x8025e6c           // unlikely

    loc_0x08025e68: // orphan
         brk 0x8228

    loc_0x08025e6c: // orphan
         blr x8                   // "Y" // xzr(0x0, 0x0, 0x0, 0x0)
         jmp 0x8025fd4

    loc_0x08025e74: // orphan
         x8 = 0x8025000
         x19 = [x8]               // 0xcf // 207
         if !x19 jmp 0x8026030    // unlikely

    loc_0x08025e80: // orphan
         x22 = 0x8025000
         w3 = [var_10h]           // 0x4 // 4
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x2f                // '/'
         x8 = [x22]               // 0xdd // 221
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xc5ef             // '\xef\xc5'
         w17 = 0xe968             // 'h\xe9'
         if (w16 == w17)
         b.eq 0x8025eb0           // unlikely

    loc_0x08025eac: // orphan
         brk 0x8228

    loc_0x08025eb0: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = 0x8025000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x1
         x8 = [x8]                // 0xcf // 207
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xbb9b             // '\x9b\xbb'
         w17 = 0x70e0             // '\xe0p'
         if (w16 == w17)
         b.eq 0x8025ee0           // unlikely

    loc_0x08025edc: // orphan
         brk 0x8228

    loc_0x08025ee0: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = [x22]               // 0xdd // 221
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x35                // '5'
         w3 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xc5ef             // '\xef\xc5'
         w17 = 0xe968             // 'h\xe9'
         if (w16 == w17)
         b.eq 0x8025f10           // unlikely

    loc_0x08025f0c: // orphan
         brk 0x8228

    loc_0x08025f10: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = [x22]               // 0xdd // 221
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x36                // '6'
         w3 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xc5ef             // '\xef\xc5'
         w17 = 0xe968             // 'h\xe9'
         if (w16 == w17)
         b.eq 0x8025f40           // unlikely

    loc_0x08025f3c: // orphan
         brk 0x8228

    loc_0x08025f40: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = [x22]               // 0xdd // 221
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x3a                // ':'
         w3 = 0x1e
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xc5ef             // '\xef\xc5'
         w17 = 0xe968             // 'h\xe9'
         if (w16 == w17)
         b.eq 0x8025f70           // unlikely

    loc_0x08025f6c: // orphan
         brk 0x8228

    loc_0x08025f70: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = [x22]               // 0xdd // 221
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x30                // '0'
         w3 = 0x1e
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xc5ef             // '\xef\xc5'
         w17 = 0xe968             // 'h\xe9'
         if (w16 == w17)
         b.eq 0x8025fa0           // unlikely

    loc_0x08025f9c: // orphan
         brk 0x8228

    loc_0x08025fa0: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = [x22]               // 0xdd // 221
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = 0x3
         w2 = 0x32                // '2'
         w3 = 0x1e
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xc5ef             // '\xef\xc5'
         w17 = 0xe968             // 'h\xe9'
         if (w16 == w17)
         b.eq 0x8025fd0           // unlikely

    loc_0x08025fcc: // orphan
         brk 0x8228

    loc_0x08025fd0: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)

    loc_0x08025fd4: // orphan
         // CODE XREF from sym.runEvent @ 0x8025e70
         x8 = 0x8025000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x3e1d             // '\x1d>'
         w17 = 0xa281             // '\x81\xa2'
         if (w16 == w17)
         b.eq 0x8025ff8           // unlikely

    loc_0x08025ff4: // orphan
         brk 0x8228

    loc_0x08025ff8: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = 0x8025000
         // XREFS: STRING 0x08026064  STRING 0x08026074  STRING 0x080260f8  
         // XREFS: CODE 0x080260fc  STRING 0x08026134  CODE 0x08026138  
         // XREFS: STRING 0x08026140  CODE 0x08026144  STRING 0x0802614c  
         // XREFS: STRING 0x08026160  CODE 0x08026164  STRING 0x08026170  
         // XREFS: CODE 0x08026174  STRING 0x08026180  CODE 0x08026184  
         // XREFS: STRING 0x080261a4  CODE 0x080261a8  STRING 0x080261d0  
         // XREFS: CODE 0x080261d4  
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xc5ef             // '\xef\xc5'
         w17 = 0xe968             // 'h\xe9'
         if (w16 == w17)
         b.eq 0x802602c           // unlikely

    loc_0x08026028: // orphan
         brk 0x8228

    loc_0x0802602c: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)

    loc_0x08026030: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08026034: // orphan
         // CODE XREFS from sym.runEvent @ 0x8025cf4, 0x8025d08
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x8026060           // likely

    loc_0x08026048: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         sp = arg_50h
         hint 0x1d
         

    loc_0x08026060: // orphan
         0x8026060 ()             // "\t" // 0x8026060(0x0, 0x0, 0x0, 0x0)

    loc_0x08026064: // orphan
         // CODE XREF from sym.runEvent @ 0x8025d44
         x9 = 0x8026000
         x9 = [x9]                // 0xd0 // 208
         tbnz w9,0x1d,0x8025d88   // likely

    loc_0x08026070: // orphan
         jmp 0x8025d4c

    loc_0x08026074: // orphan
         // CODE XREF from sym.runEvent @ 0x8025d98
         x8 = 0x8026000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8025dd8   // likely

    loc_0x08026080: // orphan
         jmp 0x8025da0

}

/* ===== 0x08011060 ===== */
int sym.do_hwbp_clear_records (int esi, int edx) {
    loc_0x8011060:
        hint 0x19
        sp = sp - 0x40
        [sp, 0x10] = (x29,2)
        [var_20h] = x21
        [sp, 0x30] = (x20,2)
        x29 = var_10h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        [var_8h] = x8
        [sp] = wzr    // arg1
        if !x0 jmp 0x8011168 // likely
            
    loc_0x8011168:
        w19 = ~0xd
        jmp 0x80111f0
         // do {
    loc_0x80111f0:
        // CODE XREFS from sym.do_hwbp_clear_records @ 0x8011164, 0x801116c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        x9 = [var_8h] // 0x4 // 4
        if (x8 == x9)
        b.ne 0x8011220 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801108c
    loc_0x8011098:
        x10 = [x8]    // 0xcf // 207
        x9 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        tbz w10,0x1a,0x80110ac // unlikely
            
    loc_0x80110ac:
        x10 = xzr | 0x7ffffffffc
        if (x9 == x10)
        b.hi 0x8011168 // unlikely
    loc_0x80110b8:
        jmp 0x8011224
         // do {
    loc_0x8011224:
        // CODE XREF from sym.do_hwbp_clear_records @ 0x80110b8
        x9 = 0x8011000
        x9 = [x9]     // 0xd0 // 208
        tbnz w9,0x1d,0x80110fc // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080110c0: // orphan
             // CODE XREF from sym.do_hwbp_clear_records @ 0x8011230
             mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w10 = w9 & 0x80
             if w10 jmp 0x80110d8     // unlikely

    loc_0x080110cc: // orphan
         
         w10 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080110d8: // orphan
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080110fc: // orphan
         x1 = x0 & 0xff7fffffffffffff // int64_t arg_40h
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x4
         0x8011108 ()             // "J" // 0x8011108(0x178000, 0x0, 0x4, 0x0)
         jmp 0x8011234

    loc_0x08011114: // orphan
         // CODE XREF from sym.do_hwbp_clear_records @ 0x8011240
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x801112c      // unlikely

    loc_0x08011120: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801112c: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801114c: // orphan
         if x0 jmp 0x8011168      // unlikely

    loc_0x08011150: // orphan
         w8 = [sp]                // 0x4 // 4
         w8 = w8 - 0x10
         if (w8 != 0x11)
         b.hs 0x8011170           // likely

    loc_0x08011160: // orphan
         w19 = ~0x15
         jmp 0x80111f0

    loc_0x08011170: // orphan
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x8011178 ()             // 0x8011178(0x8011000, 0x0, 0x0, 0x0)
         x8 = 0x8011000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x80111e0     // unlikely

    loc_0x08011188: // orphan
         w21 = 0x5030             // '0P'
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x19 = x8 + 0x50
         w21 = 0x3
         jmp 0x80111c4

    loc_0x0801119c: // orphan
         // CODE XREF from sym.do_hwbp_clear_records @ 0x80111d4
         w2 = 0x5000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x3
         0x80111ac ()             // 0x80111ac(0x0, 0x0, 0x35000, 0x0)
         [x19 = wzr

    loc_0x080111b4: // orphan
         x20 = x20 + 1
         x19 = x19 + x21
         if (x20 == 0x10)
         b.eq 0x80111d8           // unlikely

    loc_0x080111c4: // orphan
         // CODE XREF from sym.do_hwbp_clear_records @ 0x8011198
         w8 = [sp]                // 0x4 // 4
         tbnz w8,0x1f,0x801119c   // unlikely

    loc_0x080111cc: // orphan
         if (x20 == x8)
         b.ne 0x80111b4           // unlikely

    loc_0x080111d4: // orphan
         jmp 0x801119c

    loc_0x080111d8: // orphan
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80111e4

    loc_0x080111e0: // orphan
         w19 = ~0x12

    loc_0x080111e4: // orphan
         // CODE XREF from sym.do_hwbp_clear_records @ 0x80111dc
         x0 = 0x8011000
         x0 = x0 + 0              // int64_t arg1
         0x80111ec ()             // 0x80111ec(0x8011000, 0x0, 0x0, 0x0)

    loc_0x08011204: // orphan
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x29, 2) = 3
         x21 = [var_20h]          // 0x4 // 4
         sp = arg_40h
         hint 0x1d
         

    loc_0x08011220: // orphan
         0x8011220 ()             // "\t" // 0x8011220(0x0, 0x0, 0x0, 0x0)

    loc_0x08011230: // orphan
         jmp 0x80110c0

    loc_0x08011234: // orphan
         // CODE XREF from sym.do_hwbp_clear_records @ 0x801110c
         x8 = 0x8011000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x801114c   // likely

    loc_0x08011240: // orphan
         jmp 0x8011114

}

/* ===== 0x080053d4 ===== */
int sym.do_read_physical_memory (int esi, int edx) {
    loc_0x80053d4:
        hint 0x19
        sp = sp - 0xe0
        [sp, 0x80] = (x29,2)
        [sp, 0x90] = (x28,2)
        [sp, 0xa0] = (x26,2)
        [sp, 0xb0] = (x24,2)
        [sp, 0xc0] = (x22,2)
        [sp, 0xd0] = (x20,2)
        x29 = var_80h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        mrs x22,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x29 = x8
        w8 = (byte) [x22 + 0x46] // 0xdd // 221
        [sp, 0x58] = (xzr,2)
        [sp, 0x48] = (xzr,2)
        [var_40h] = xzr
        tbnz w8,5,0x800542c // likely
            
    loc_0x800542c:
        // CODE XREF from sym.do_read_physical_memory @ 0x800541c
        x8 = x21 << 8
        x8 = x21 & x8,asr 8
         // do {
    loc_0x8005434:
        // CODE XREF from sym.do_read_physical_memory @ 0x8005428
        x23 = xzr | 0x7fffff0000
        x23 = 0xffd8  // '\xd8\xff'
        if (x8 == x23)
        b.hi 0x8005550 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08005444: // orphan
             jmp 0x8005558

    loc_0x0800544c: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005564
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8005464      // unlikely

    loc_0x08005458: // orphan
         
         w9 = 0x60                // '`'
         // CODE XREF from sym.do_read_physical_memory @ +0x1a8
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005464: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005454
         x9 = [x22 + 8]           // 0xdd // 221
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005488: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005560
         x1 = x21 & 0xff7fffffffffffff // int64_t arg_e0h
         x0 = var_40h             // int64_t arg1
         w2 = 0x28                // '('
         0x8005494 ()             // "4" // 0x8005494(0x178040, 0x0, 0x28, 0x0)
         jmp 0x8005568

    loc_0x080054a0: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005574
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x80054b8      // unlikely

    loc_0x080054ac: // orphan
         
         w9 = 0x60                // '`'
         // CODE XREF from sym.do_read_physical_memory @ +0x1b0
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080054b8: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x80054a8
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080054d8: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005570
         if x0 jmp 0x8005550      // unlikely

    loc_0x080054dc: // orphan
         x8 = [var_58h]           // 0x4 // 4
         if !x8 jmp 0x8005548     // likely

    loc_0x080054e4: // orphan
         w0 = [var_40h]           // 4
         0x80054e8 ()             // 0x80054e8(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8005540     // likely

    loc_0x080054f0: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80054f8 ()             // 0x80054f8(0x0, 0x0, 0x0, 0x0)
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8005504 ()             // 0x8005504(0x0, 0x0, 0x0, 0x0)
         if !x20 jmp 0x8005540    // likely

    loc_0x0800550c: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8005510 ()             // 0x8005510(0x0, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x20 + 0x40
         jmp 0x8005588

    loc_0x08005530: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x80055a4
         dmb ishld
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8005538 ()             // 0x8005538(0x0, 0x0, 0x0, 0x0)
         if x19 jmp 0x80055b4     // unlikely

    loc_0x08005540: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x80054ec, 0x8005508, 0x80055b0, 0x8005a80
         w23 = ~0x2
         jmp 0x80056a8

    loc_0x08005548: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x80054e0
         w23 = ~0x15
         jmp 0x80056a8

    loc_0x08005550: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x8005440, 0x80054d8
         w23 = ~0xd
         jmp 0x80056a8

    loc_0x08005558: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005444
         x8 = 0x8005000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8005488   // likely

    loc_0x08005564: // orphan
         jmp 0x800544c

    loc_0x08005568: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005498
         x8 = 0x8005000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x80054d8   // likely

    loc_0x08005574: // orphan
         jmp 0x80054a0

    loc_0x08005588: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x800551c
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08005590: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x800559c
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8005590     // unlikely

    loc_0x080055a0: // orphan
         if (w8 == 1)
         b.eq 0x8005530           // unlikely

    loc_0x080055a8: // orphan
         // CODE XREF from sym.do_read_physical_memory @ +0x158
         if (w8 == 0)
         jmp ifle 0x8005a74       // likely

    loc_0x080055b0: // orphan
         if !x19 jmp 0x8005540    // likely

    loc_0x080055b4: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x800553c
         x27 = [x19 + 0x38]       // 0xda // 218
         x2 = x29 - 0x10          // int64_t arg3
         x1 = [var_48h]           // 4 // int64_t arg2
         x3 = x29 - 0x18          // int64_t arg4
         [x29 = xzr
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.lockfree_va_to_pa () // sym.lockfree_va_to_pa(-1, 0x0, 0x177ff0, 0x177fe8, -1)
         ldur x8,[x29,-0x10]
         if (w0 == 0)
         w9 = (byte) [x22 + 0x46] // 0xdd // 221
         csel x8,xzr,x8, lt
         [var_58h_2] = x8
         tbnz w9,5,0x80055f4      // likely

    loc_0x080055e8: // orphan
         x9 = [x22]               // 0xdd // 221
         x8 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x80055fc    // unlikely

    loc_0x080055f4: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x80055e4
         x8 = x21 << 8
         x8 = x21 & x8,asr 8

    loc_0x080055fc: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x80055f0
         if (x8 == x23)
         b.hi 0x800569c           // unlikely

    loc_0x08005604: // orphan
         jmp 0x8005a88

    loc_0x0800560c: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005a94
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8005624      // unlikely

    loc_0x08005618: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005624: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005614
         x9 = [x22 + 8]           // 0xdd // 221
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005648: // orphan
         x0 = x21 & 0xff7fffffffffffff // int64_t arg1
         x1 = var_40h             // int64_t arg_e0h
         w2 = 0x28                // '('
         0x8005654 ()             // 0x8005654(0x0, 0x178040, 0x28, 0x0)
         jmp 0x8005a98

    loc_0x08005660: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005aa4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8005678      // unlikely

    loc_0x0800566c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005678: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005668
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005698: // orphan
         if !x0 jmp 0x80056e4     // likely

    loc_0x0800569c: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x8005600, 0x8005824, 0x8005a48
         w23 = ~0xd

    loc_0x080056a0: // orphan
         // XREFS: CODE 0x08005768  CODE 0x0800586c  CODE 0x08005894  
         // XREFS: CODE 0x080058c0  CODE 0x080058dc  CODE 0x080058ec  
         // XREFS: CODE 0x080058fc  CODE 0x0800590c  CODE 0x08005930  
         // XREFS: CODE 0x08005a50  CODE 0x08005a70  
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80056a4 ()             // 0x80056a4(0x0, 0x0, 0x0, 0x0)

    loc_0x080056a8: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x8005544, 0x800554c, 0x8005554
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x8005a84           // likely

    loc_0x080056bc: // orphan
         w0 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_e0h
         hint 0x1d
         

    loc_0x080056e4: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005698
         x28 = 0x8005000
         x20 = 0x8005000
         x8 = [x28]               // 0xe3 // 227
         if x8 jmp 0x8005708      // likely

    loc_0x080056f4: // orphan
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         0x80056fc ()             // 0x80056fc(0x8005000, 0x0, 0x0, 0x0)
         [x28] = x0
         if !x0 jmp 0x8005720     // unlikely

    loc_0x08005708: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x80056f0
         x8 = [x20]               // 0xdb // 219
         if x8 jmp 0x8005720      // likely

    loc_0x08005710: // orphan
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         0x8005718 ()             // 0x8005718(0x8005000, 0x0, 0x0, 0x0)
         [x20] = x0

    loc_0x08005720: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x8005704, 0x800570c
         x8 = 0x8005000
         x8 = [x8]                // 0xcf // 207
         if x8 jmp 0x8005740      // likely

    loc_0x0800572c: // orphan
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         0x8005734 ()             // 0x8005734(0x8005000, 0x0, 0x0, 0x0)
         x8 = 0x8005000
         [x8] = x0

    loc_0x08005740: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005728
         x22 = [var_58h]          // 0x4 // 4
         if !x22 jmp 0x8005a4c    // likely

    loc_0x08005748: // orphan
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = [var_48h]          // 4
         jmp 0x800576c

    loc_0x08005754: // orphan
         x21 = x25 + x21
         x20 = x25 + x20
         x22 = x22 - x25
         x27 = [var_sp_8h]        // 0x4 // 4

    loc_0x08005764: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x8005794, 0x8005840
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x22 jmp 0x80056a0    // likely

    loc_0x0800576c: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005750
         x2 = var_38h             // int64_t arg3
         x3 = var_30h             // int64_t arg4
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [sp, 0x30] = (xzr,2)
         sym.lockfree_va_to_pa () // sym.lockfree_va_to_pa(0x0, 0x0, 0x178038, 0x178030, -1)
         tbnz w0,0x1f,0x8005860   // unlikely

    loc_0x08005788: // orphan
         x8 = [var_30h]           // 0x4 // 4
         if (x22 == x8)           // u"P\b" // u"P\b"
         csel x25,x22,x8, lo
         if !x25 jmp 0x8005764    // likely

    loc_0x08005798: // orphan
         x26 = [var_38h]          // 0x4 // 4

    loc_0x0800579c: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x800583c
         x10 = 0x8005000
         x8 = x26 & 0xfff
         w11 = 0x1000
         x9 = [var_50h]           // 0x4 // 4
         x8 = x11 - x8
         x10 = [x10]              // 0xd1 // 209
         if (x8 == x25)           // u"P\b"
         csel x23,x8,x25, lo
         x0 = x9 + x20
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x26 - x10
         x24 = x8 | 0xffffff8000000000
         x8 = [x28]               // 0xe3 // 227
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xa42c             // ',\xa4'
         w17 = 0xacff             // '\xff\xac'
         if (w16 == w17)          // u"P\b"
         b.eq 0x80057ec           // unlikely

    loc_0x080057e8: // orphan
         brk 0x8228

    loc_0x080057ec: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x80057e4
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = 0x8005000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x8005844     // unlikely

    loc_0x080057fc: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x800585c
         x9 = x23 + x24
         x10 = !x8
         x11 = x9 - 1
         x9 = x24 & x10
         x10 = x11 & x10

    loc_0x08005810: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x800581c
         dc civac,x9
         x9 = x9 + x8
         if (x9 == x10)           // u"P\b" // u"P\b"
         b.ls 0x8005810           // likely

    loc_0x08005820: // orphan
         dsb sy
         if x0 jmp 0x800569c      // unlikely

    loc_0x08005828: // orphan
         x26 = x23 + x26
         x21 = x23 + x21
         x20 = x23 + x20
         x22 = x22 - x23
         x25 = x25 - x23
         b.ne 0x800579c           // likely

    loc_0x08005840: // orphan
         jmp 0x8005764

    loc_0x08005844: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x80057f8
         mrs x8,ctr_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x4
         ubfx x8,x8,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x9 << x8
         x9 = 0x8005000
         [x9] = w8
         jmp 0x80057fc

    loc_0x08005860: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005784
         x8 = 0x8005000
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x80056a0     // unlikely

    loc_0x08005870: // orphan
         ubfx x8,x21,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x27 + x8,lsl 3]    // 0xcf000000e2 // 889058230498
         [x29 = x8
         ldur x8,[x29,-0x10]
         [x29 = x8
         ldur x9,[x29,-0x18]
         w8 = ~w9
         [var_0h] = x9
         if ((x8 & 3) == 0)       // u"P\b"
         b.ne 0x80056a0           // likely

    loc_0x08005898: // orphan
         x8 = 0x8005000
         x9 = x9 & 0x7ffffff000
         ubfx x10,x21,0x15, 9     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         x9 = x9 - x8
         x9 = x9 | 0xffffff8000000000
         x9 = [x9 + x10,lsl 3]    // 0xd1000000d0 // 897648165072
         w10 = ~w9
         [var_0h_2] = x9
         if ((x10 & 3) == 0)      // u"P\b"
         b.ne 0x80056a0           // likely

    loc_0x080058c4: // orphan
         x9 = x9 & 0x7ffffff000
         x8 = x9 - x8
         ubfx x9,x21,0xc, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 | 0xffffff8000000000
         x8 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         [var_0h_3] = x8
         if !x8 jmp 0x80056a0     // unlikely

    loc_0x080058e0: // orphan
         x9 = 0x1                 // u"P\b"
         x9 = 0x400
         x9 = x8 & x9
         if x9 jmp 0x80056a0      // unlikely

    loc_0x080058f0: // orphan
         x9 = x8 << 0x37
         ubfx x26,x9,0x3a, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w26 == 0x1c)         // u"P\b"
         b.hs 0x80056a0           // unlikely

    loc_0x08005900: // orphan
         ubfx x28,x8,8, 0x32      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x9 & 0x7c00000000000000
         x8 = x28 | x8
         if !x8 jmp 0x80056a0     // likely

    loc_0x08005910: // orphan
         x24 = x21 & 0xfff
         w8 = 0x1000
         x8 = x8 - x24
         w1 = 0xc00
         if (x22 == x8)           // u"P\b"
         csel x25,x22,x8, lo
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800592c ()             // 0x800592c(0x0, 0xc00, 0x0, 0x0)
         if !x0 jmp 0x80056a0     // likely

    loc_0x08005934: // orphan
         x8 = x25 + x24
         [sp, 8] = (x27,2)
         if (x8 == 1)             // u"P\b"
         b.hi 0x8005a68           // unlikely

    loc_0x08005944: // orphan
         x8 = 0x8005000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x8005a68     // unlikely

    loc_0x08005950: // orphan
         x27 = [x8 + x26,lsl 3]   // 0xe1000000cf // 966367641807
         if !x27 jmp 0x8005a68    // unlikely

    loc_0x08005958: // orphan
         x8 = [x27 + 0xa0]        // 0xe2 // 226
         if !x8 jmp 0x8005a68     // unlikely

    loc_0x08005960: // orphan
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0xc00
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8005974 ()             // 0x8005974(0xc00, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8005a68     // unlikely

    loc_0x0800597c: // orphan
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = [x27 + 0xa0]        // 0xe2 // 226 // int64_t arg1
         w1 = 0x1                 // u"P\b"
         w2 = 0x800
         w3 = 0xc00
         x4 = 0x8005000
         x4 = x4 + 0
         0x8005998 ()             // 0x8005998(-1, 0x1, 0x800, 0xc00)
         if !x0 jmp 0x8005a5c     // unlikely

    loc_0x080059a0: // orphan
         x8 = x28 << 3
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_e0h
         w2 = 0x1000
         w3 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x20] = x8
         0x80059b8 ()             // 0x80059b8(0x0, 0x0, 0x1000, 0x0)
         if !w0 jmp 0x8005a54     // likely

    loc_0x080059c0: // orphan
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80059c4 ()             // 0x80059c4(0x0, 0x0, 0x0, 0x0)
         w28 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80059d0 ()             // 0x80059d0(0x0, 0x0, 0x0, 0x0)
         if w28 jmp 0x8005a5c     // unlikely

    loc_0x080059d8: // orphan
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.kmap_atomic ()       // sym.kmap_atomic(0x0)
         x1 = x0 + x24            // int64_t arg_e0h
         x24 = [var_sp_10h]       // 4
         x2 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80059f0 ()             // 0x80059f0(0x0, 0x0, 0x0, 0x0)
         sym.__kunmap_atomic ()
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8005a00 ()             // 0x8005a00(0x0, 0x0, 0x0, 0x0)
         x8 = [var_50h]           // 0x4 // 4
         x28 = 0x8005000
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x28]               // 0xe3 // 227
         x0 = x8 + x20
         ldur w16,[x9,-4]         // 0xd0 // 208
         w17 = 0xa42c             // ',\xa4'
         w17 = 0xacff             // '\xff\xac'
         if (w16 == w17)
         b.eq 0x8005a34           // unlikely

    loc_0x08005a30: // orphan
         brk 0x8229

    loc_0x08005a34: // orphan
         blr x9                   // xzr(0x0, 0x0, 0x0, 0x0)
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8005a40 ()             // 0x8005a40(0x0, 0x0, 0x0, 0x0)
         if !x23 jmp 0x8005754    // likely

    loc_0x08005a48: // orphan
         jmp 0x800569c

    loc_0x08005a4c: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005744
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80056a0

    loc_0x08005a54: // orphan
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8005a58 ()             // 0x8005a58(0x0, 0x0, 0x0, 0x0)

    loc_0x08005a5c: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x800599c
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8005a64 ()             // 0x8005a64(0x0, 0x0, 0x0, 0x0)

    loc_0x08005a68: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x8005940, 0x800594c, 0x8005954, 0x800595c, 0x8005978
         x0 = [var_sp_10h]        // 0x4 // 4 // int64_t arg1
         0x8005a6c ()             // 0x8005a6c(0x0, 0x0, 0x0, 0x0)
         jmp 0x80056a0

    loc_0x08005a74: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x80055ac
         w1 = 0x3
         0x8005a78 ()             // 0x8005a78(0x0, 0x3, 0x0, 0x0)
         if x19 jmp 0x80055b4     // unlikely

    loc_0x08005a80: // orphan
         jmp 0x8005540

    loc_0x08005a84: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x80056b8
         0x8005a84 ()             // 0x8005a84(0x0, 0x0, 0x0, 0x0)

    loc_0x08005a88: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005604
         x8 = 0x8005000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8005648   // unlikely

    loc_0x08005a94: // orphan
         jmp 0x800560c

    loc_0x08005a98: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8005658
         x8 = 0x8005000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8005698   // unlikely

    loc_0x08005aa4: // orphan
         jmp 0x8005660

}

/* ===== 0x08009dc8 ===== */
int sym.do_config_gyro_hook (int esi, int edx) {
    loc_0x8009dc8:
        hint 0x19
        sp = sp - 0xa0
        [sp, 0x40] = (x29,2)
        [sp, 0x50] = (x28,2)
        [sp, 0x60] = (x26,2)
        [sp, 0x70] = (x24,2)
        [sp, 0x80] = (x22,2)
        [sp, 0x90] = (x20,2)
        x29 = var_40h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        mrs x27,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = x0 << 8 // arg1
        [x29 = x8
        w8 = (byte) [x27 + 0x46] // 0xe2 // 226
        [x29, -0x18] = (xzr,2)
        tbnz w8,5,0x8009e1c // likely
            
    loc_0x8009e1c:
        x8 = x19 & x21,asr 8
         // do {
    loc_0x8009e20:
        x23 = xzr | 0x7fffff0000
        x23 = 0xfff1  // '\xf1\xff'
        if (x8 == x23) // u"P\b"
        b.hs 0x800a0c8 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08009e30: // orphan
             jmp 0x800a318

    loc_0x08009e38: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a324
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8009e50      // unlikely

    loc_0x08009e44: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08009e50: // orphan
         x9 = [x27 + 8]           // 0xe2 // 226
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08009e74: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_a0h
         x0 = x29 - 0x18          // int64_t arg1
         w2 = 0x10
         0x8009e80 ()             // 0x8009e80(0x177fe8, 0x0, 0x10, 0x0)
         jmp 0x800a328

    loc_0x08009e8c: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a334
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8009ea4      // unlikely

    loc_0x08009e98: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08009ea4: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08009ec4: // orphan
         if x0 jmp 0x800a0c8      // unlikely

    loc_0x08009ec8: // orphan
         ldur w8,[x29,-0x14]
         if w8 jmp 0x8009ed8      // unlikely

    loc_0x08009ed0: // orphan
         w8 = 0x3
         [x29 = w8

    loc_0x08009ed8: // orphan
         (w25, 2) = 3
         x0 = fcn.08009000        // 0x8009000
         x0 = x0 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // int64_t arg1 // fcn.08009000
         0x8009ee4 ()             // 0x8009ee4(0x8009000, 0x0, 0x0, 0x0)
         x8 = fcn.08009000        // 0x8009000
         ldur w9,[x29,-0x18]
         w8 = (byte) [x8]         // 0xcf // 207 // fcn.08009000
         if !w9 jmp 0x8009f9c     // likely

    loc_0x08009ef8: // orphan
         if w8 jmp 0x8009f9c      // unlikely

    loc_0x08009efc: // orphan
         x0 = fcn.08009000        // 0x8009000
         x0 = x0 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // int64_t arg1 // fcn.08009000
         0x8009f04 ()             // 0x8009f04(0x8009000, 0x0, 0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // fcn.08009000
         x0 = fcn.08009000        // 0x8009000
         x0 = x0 + 0              // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // int64_t arg1 // fcn.08009000
         0x8009f14 ()             // 0x8009f14(0x8009000, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8009fc8     // unlikely

    loc_0x08009f1c: // orphan
         [sp, 0x18] = (x21,2)
         0x8009f20 ()             // 0x8009f20(0x0, 0x0, 0x0, 0x0)
         x26 = fcn.08009000       // 0x8009000
         x26 = x26 + 0            // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         x23 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff' // fcn.08009000
         x21 = fcn.08009000       // 0x8009000
         x21 = x21 + 0            // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000

    loc_0x08009f38: // orphan
         x20 = [x23 + 0x550]      // 0xde // 222
         x23 = x20 - 0x550
         if (x23 == x26)          // u"P\b" // u"P\b"
         b.eq 0x800a0d0           // unlikely

    loc_0x08009f48: // orphan
         x0 = x20 + 0x2f8         // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
         0x8009f50 ()             // 0x8009f50(0x2f8, 0x0, 0x0, 0x0)
         if w0 jmp 0x8009f38      // likely

    loc_0x08009f58: // orphan
         x21 = x20 - 0x510
         jmp 0x800a368

    loc_0x08009f6c: // orphan
         w9 = w8 + 1              // u"P\b"
         w8 = w9 | w8             // u"P\b"
         tbnz w8,0x1f,0x800a308   // unlikely

    loc_0x08009f78: // orphan
         0x8009f78 ()             // 0x8009f78(0x0, 0x0, 0x0, 0x0)
         if !x23 jmp 0x800a0d4    // likely

    loc_0x08009f80: // orphan
         w8 = [x20 + 0xe0]        // 0xdb // 219
         [var_14h] = w8
         if !x22 jmp 0x800a0dc    // likely

    loc_0x08009f8c: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x22                  // xzr(0x0, 0x0, 0x0, 0x0)
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800a104

    loc_0x08009f9c: // orphan
         if w9 jmp 0x8009fc8      // unlikely

    loc_0x08009fa0: // orphan
         if !w8 jmp 0x8009fc8     // likely

    loc_0x08009fa4: // orphan
         x20 = fcn.08009000       // 0x8009000
         x20 = x20 + 0            // 0x8009000 // "\tF8\xd5*\t\x1bR\nF\x18\xd5\tF\x18\u0549\xff\xff\x17\bF8\xd5\t\t\x1bR\tF\x18\xd5\bF\x18\u0554\a\x05" // fcn.08009000
         x8 = fcn.08009000        // 0x8009000
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // fcn.08009000
         [x8] = (byte) wzr        // fcn.08009000
         0x8009fb8 ()             // 0x8009fb8(0x8009000, 0x0, 0x0, 0x0)
         sym.gyro_unhook_all_locked ()
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1 // fcn.08009000
         0x8009fc4 ()             // 0x8009fc4(0x8009000, 0x0, 0x0, 0x0)

    loc_0x08009fc8: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a304
         x8 = fcn.08009000        // 0x8009000
         x8 = x8 + 0              // 0x8009000
                                  // fcn.08009000
         x0 = fcn.08009000        // 0x8009000
         x0 = x0 + 0              // 0x8009000
                                  // fcn.08009000 // int64_t arg1
         [x8 + 8] = w25
         [x8 + 0xc] = w24
         ldur w9,[x29,-0x14]
         [x8 + 4] = w9
         ldur w9,[x29,-0x18]
         if (w9 == 0)             // u"P\b" // u"P\b"
         cset w9,ne
         [x8] = (byte) w9         // fcn.08009000
         [x29 = w9
         [x29, -0x10] = (w25,2)
         // XREFS(59)
         0x800a000 ()             // 0x800a000(0x8009000, 0x0, 0x0, 0x0)
         w8 = (byte) [x27 + 0x46] // 0xe2 // 226
         tbnz w8,5,0x800a018      // likely

    loc_0x0800a00c: // orphan
         x9 = [x27]               // 0xe2 // 226
         x8 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x800a01c    // likely

    loc_0x0800a018: // orphan
         x8 = x19 & x21,asr 8

    loc_0x0800a01c: // orphan
         if (x8 == x23)           // u"P\b" // u"P\b"
         b.hs 0x800a0c8           // likely

    loc_0x0800a024: // orphan
         jmp 0x800a348

    loc_0x0800a02c: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a354
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800a044      // unlikely

    loc_0x0800a038: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a044: // orphan
         x9 = [x27 + 8]           // 0xe2 // 226
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a068: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = x29 - 0x18          // int64_t arg_a0h
         w2 = 0x10
         0x800a074 ()             // 0x800a074(0x0, 0x177fe8, 0x10, 0x0)
         jmp 0x800a358

    loc_0x0800a080: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a364
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800a098      // unlikely

    loc_0x0800a08c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a098: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a0b8: // orphan
         if (x0 == 0)             // u"P\b" // u"P\b"
         w8 = ~0xd
         csel w19,wzr,w8, eq
         jmp 0x800a3e4

    loc_0x0800a0c8: // orphan
         w19 = ~0xd
         jmp 0x800a3e4

    loc_0x0800a0d0: // orphan
         0x800a0d0 ()             // "S" // 0x800a0d0(0x0, 0x0, 0x0, 0x0)

    loc_0x0800a0d4: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a394
         w19 = ~0x2
         jmp 0x800a3d8

    loc_0x0800a0dc: // orphan
         x26 = x20 + 0x3d0
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a0e4 ()             // 0x800a0e4(0x3d0, 0x0, 0x0, 0x0)
         x20 = [x20 + 0x328]      // 0xdb // 219
         if !x20 jmp 0x800a0fc    // unlikely

    loc_0x0800a0f0: // orphan
         jmp 0x800a438

    loc_0x0800a0fc: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a44c
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a100 ()             // 0x800a100(0x0, 0x0, 0x0, 0x0)

    loc_0x0800a104: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8009f98
         jmp 0x800a3a8

    loc_0x0800a118: // orphan
         dmb ishld
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a120 ()             // 0x800a120(0x0, 0x0, 0x0, 0x0)
         if !x20 jmp 0x800a3d4    // likely

    loc_0x0800a128: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a430
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800a130 ()             // 0x800a130(0x800a000, 0x0, 0x0, 0x0)
         sym.gyro_unhook_all_locked ()
         0x800a138 ()             // 0x800a138(0x800a000, 0x0, 0x0, 0x0)
         x0 = x20 + 0x80          // int64_t arg1
         [sp] = x0
         0x800a144 ()             // 0x800a144(0x80, 0x0, 0x0, 0x0)
         [var_sp_8h] = x20
         x21 = [x20 + 0x20]       // 0xdb // 219
         w8 = [x21]               // 0xdc // 220
         if w8 jmp 0x800a1ac      // likely

    loc_0x0800a158: // orphan
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a15c: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a2c4
         x0 = [sp]                // 0x4 // 4 // int64_t arg1
         0x800a160 ()             // 0x800a160(0x80, 0x0, 0x0, 0x0)
         0x800a164 ()             // 0x800a164(0x80, 0x0, 0x0, 0x0)
         x8 = 0x800a000
         if (w23 == 0)            // u"P\b" // u"P\b"
         cset w9,gt
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         [x8] = w23
         x8 = 0x800a000
         [x8] = (byte) w9
         0x800a188 ()             // 0x800a188(0x800a000, 0x0, 0x0, 0x0)
         x0 = [var_sp_8h]         // 0x4 // 4
         x8 = [var_20h]           // 0x4 // 4
         blr x8                   // "w\n" // xzr(0x0, 0x0, 0x0, 0x0)
         if w23 jmp 0x800a2e4     // unlikely

    loc_0x0800a19c: // orphan
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800a1a4 ()             // "T" // 0x800a1a4(0x800a000, 0x0, 0x0, 0x0)
         jmp 0x800a2f8

    loc_0x0800a1ac: // orphan
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = 0x800a000
         x11 = x11 + 0
         x12 = 0x800a000
         x13 = 0x800a000
         x13 = x13 + 0

    loc_0x0800a1c8: // orphan
         x8 = [x21 + 8]           // 0xdc // 220
         x20 = [x8 + x22,lsl 3]   // 0xdd000000cf // 949187772623
         if !x20 jmp 0x800a2ac    // unlikely

    loc_0x0800a1d4: // orphan
         x8 = [x20 + 0x20]        // 0xdb // 219
         if !x8 jmp 0x800a2ac     // likely

    loc_0x0800a1dc: // orphan
         w8 = (word) [x8]         // 0xcf // 207
         w8 = w8 & 0xf000
         if (w8 == 0xc)           // u"P\b"
         b.ne 0x800a2ac           // likely

    loc_0x0800a1ec: // orphan
         x28 = [x20 + 0xd8]       // 0xdb // 219
         if !x28 jmp 0x800a2ac    // unlikely

    loc_0x0800a1f4: // orphan
         w8 = (word) [x28 + 4]    // 0xe3 // 227
         if (w8 == 5)             // u"P\b"
         b.ne 0x800a2ac           // likely

    loc_0x0800a200: // orphan
         x26 = [x28 + 0x20]       // 0xe3 // 227
         if !x26 jmp 0x800a2ac    // likely

    loc_0x0800a208: // orphan
         w8 = [x26]               // 0xe1 // 225
         if (w8 == 1)             // u"P\b"
         b.ne 0x800a2ac           // likely

    loc_0x0800a214: // orphan
         x8 = [x12]               // 0xd3 // 211
         if x8 jmp 0x800a260      // likely

    loc_0x0800a21c: // orphan
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
         w2 = 0x108
         [x12] = x26
         0x800a230 ()             // 0x800a230(0x800a000, 0x0, 0x108, 0x0)
         x11 = 0x800a000
         x11 = x11 + 0
         x8 = 0x800a000
         x8 = x8 + 0
         x13 = 0x800a000
         x13 = x13 + 0
         x12 = 0x800a000
         [x11 + 0x88] = x8
         x8 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x28 + 0x20]        // 0xe3 // 227
         x26 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800a260: // orphan
         if (x26 == x8)
         b.ne 0x800a2ac           // unlikely

    loc_0x0800a268: // orphan
         jmp 0x800a2c8

    loc_0x0800a278: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a2e0
         if (w23 == 0x400)
         [x28 + 0x20] = x11
         b.hs 0x800a310           // unlikely

    loc_0x0800a284: // orphan
         w8 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfiz x9,x23,4, 0x20     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = 0x8
         bfi x10,x8,4, 0x20       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x13 + x9] = x28
         if (x10 == 4)
         b.hi 0x800a314           // unlikely

    loc_0x0800a2a0: // orphan
         x8 = x13 + x8,lsl 4
         w23 = w23 + 1
         [x8 + 8] = x20

    loc_0x0800a2ac: // orphan
         w8 = [x21]               // 0xdc // 220
         x22 = x22 + 1
         if (x22 == x8)
         b.hs 0x800a15c           // likely

    loc_0x0800a2bc: // orphan
         if (w23 == 0x400)
         b.lt 0x800a1c8           // likely

    loc_0x0800a2c4: // orphan
         jmp 0x800a15c

    loc_0x0800a2c8: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a268
         x8 = x20 + 0x38
         prfm pstl1strm,[x8]

    loc_0x0800a2d0: // orphan
         ldxr x9,[x8]
         x9 = x9 + 1
         stxr w10,x9,[x8]
         if w10 jmp 0x800a2d0     // unlikely

    loc_0x0800a2e0: // orphan
         jmp 0x800a278

    loc_0x0800a2e4: // orphan
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         w1 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = [var_14h]           // 4
         0x800a2f4 ()             // 0x800a2f4(0x800a000, 0x0, -1, 0x0)

    loc_0x0800a2f8: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a1a8
         x21 = [var_18h]          // 0x4 // 4
         x23 = xzr | 0x7fffff0000
         x23 = 0xfff1             // '\xf1\xff'
         jmp 0x8009fc8

    loc_0x0800a308: // orphan
         w1 = 0x1
         jmp 0x800a384

    loc_0x0800a310: // orphan
         brk 0x5512

    loc_0x0800a314: // orphan
         brk 0x1

    loc_0x0800a318: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8009e30
         x8 = 0x800a000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8009e74   // unlikely

    loc_0x0800a324: // orphan
         jmp 0x8009e38

    loc_0x0800a328: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8009e84
         x8 = 0x800a000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8009ec4   // unlikely

    loc_0x0800a334: // orphan
         jmp 0x8009e8c

    loc_0x0800a348: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a024
         x8 = 0x800a000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x800a068   // unlikely

    loc_0x0800a354: // orphan
         jmp 0x800a02c

    loc_0x0800a358: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a078
         x8 = 0x800a000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x800a0b8   // unlikely

    loc_0x0800a364: // orphan
         jmp 0x800a080

    loc_0x0800a368: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8009f5c
         prfm pstl1strm,[x21]

    loc_0x0800a36c: // orphan
         ldxr w8,[x21]
         w9 = w8 + 1
         stxr w10,w9,[x21]
         if w10 jmp 0x800a36c     // unlikely

    loc_0x0800a37c: // orphan
         if w8 jmp 0x8009f6c      // unlikely

    loc_0x0800a380: // orphan
         w1 = 0x2

    loc_0x0800a384: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a30c
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800a388 ()             // 0x800a388(0x0, 0x0, 0x0, 0x0)
         0x800a38c ()             // 0x800a38c(0x0, 0x0, 0x0, 0x0)
         if x23 jmp 0x8009f80     // unlikely

    loc_0x0800a394: // orphan
         jmp 0x800a0d4

    loc_0x0800a3a8: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a104
         w9 = 0x1
         prfm pstl1strm,[x21]

    loc_0x0800a3b0: // orphan
         ldxr w8,[x21]
         w10 = w8 - w9
         stlxr w11,w10,[x21]
         if w11 jmp 0x800a3b0     // unlikely

    loc_0x0800a3c0: // orphan
         if (w8 == 1)
         b.eq 0x800a118           // unlikely

    loc_0x0800a3c8: // orphan
         if (w8 == 0)
         jmp ifle 0x800a420       // likely

    loc_0x0800a3d0: // orphan
         if x20 jmp 0x800a128     // unlikely

    loc_0x0800a3d4: // orphan
         w19 = ~0x1

    loc_0x0800a3d8: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a0d8
         x0 = 0x800a000
         x0 = x0 + 0              // int64_t arg1
         0x800a3e0 ()             // 0x800a3e0(0x800a000, 0x0, 0x0, 0x0)

    loc_0x0800a3e4: // orphan
         // CODE XREFS from sym.do_config_gyro_hook @ 0x800a0c4, 0x800a0cc
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x800a434           // likely

    loc_0x0800a3f8: // orphan
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_a0h
         hint 0x1d
         

    loc_0x0800a420: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = 0x3
         0x800a428 ()             // 0x800a428(0x0, 0x3, 0x0, 0x0)
         if !x20 jmp 0x800a3d4    // likely

    loc_0x0800a430: // orphan
         jmp 0x800a128

    loc_0x0800a434: // orphan
         0x800a434 ()             // 0x800a434(0x0, 0x0, 0x0, 0x0)

    loc_0x0800a438: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800a0f0
         prfm pstl1strm,[x20]

    loc_0x0800a43c: // orphan
         ldxr w8,[x20]
         w8 = w8 + 1
         stxr w9,w8,[x20]
         if w9 jmp 0x800a43c      // unlikely

    loc_0x0800a44c: // orphan
         jmp 0x800a0fc

}

/* ===== 0x08008384 ===== */
int sym.do_get_main_thread_elf0 (int esi, int edx) {
    loc_0x8008384:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x20] = (x29,2)
        [var_30h] = x21
        [sp, 0x40] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        mrs x20,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = x0 << 8 // arg1
        [x29 = x8
        w8 = (byte) [x20 + 0x46] // 0xdb // 219
        [sp, 8] = (xzr,2)
        tbnz w8,5,0x80083cc // likely
            
    loc_0x80083cc:
        x8 = x19 & x21,asr 8
         // do {
    loc_0x80083d0:
        x9 = xzr | 0x7ffffffff0
        if (x8 == x9)
        b.hi 0x80084ac // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080083dc: // orphan
             jmp 0x800858c

    loc_0x080083e4: // orphan
         // CODE XREF from sym.do_get_main_thread_elf0 @ 0x8008598
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x80083fc      // unlikely

    loc_0x080083f0: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080083fc: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008420: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_50h
         x0 = var_sp_8h           // int64_t arg1
         w2 = 0x10
         0x800842c ()             // "[" // 0x800842c(0x178008, 0x0, 0x10, 0x0)
         jmp 0x800859c

    loc_0x08008438: // orphan
         // CODE XREF from sym.do_get_main_thread_elf0 @ 0x80085a8
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8008450      // unlikely

    loc_0x08008444: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008450: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008470: // orphan
         if x0 jmp 0x80084ac      // unlikely

    loc_0x08008474: // orphan
         w0 = [var_sp_8h]         // 0x4 // 4
         if (w0 == 1)
         b.lt 0x80084b4           // likely

    loc_0x08008480: // orphan
         0x8008480 ()             // 0x8008480(0x0, 0x0, 0x0, 0x0)
         w8 = (byte) [x20 + 0x46] // 0xdb // 219
         [var_0h] = x0
         tbnz w8,5,0x800849c      // likely

    loc_0x08008490: // orphan
         x9 = [x20]               // 0xdb // 219
         x8 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x80084a0    // likely

    loc_0x0800849c: // orphan
         x8 = x19 & x21,asr 8

    loc_0x080084a0: // orphan
         x9 = xzr | 0x7ffffffff0
         if (x8 == x9)
         b.ls 0x80084bc           // likely

    loc_0x080084ac: // orphan
         w0 = ~0xd
         jmp 0x800855c

    loc_0x080084b4: // orphan
         w0 = ~0x15
         jmp 0x800855c

    loc_0x080084bc: // orphan
         jmp 0x80085bc

    loc_0x080084c4: // orphan
         // CODE XREF from sym.do_get_main_thread_elf0 @ 0x80085c8
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x80084dc      // unlikely

    loc_0x080084d0: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080084dc: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008500: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = var_sp_8h           // int64_t arg_50h
         w2 = 0x10
         0x800850c ()             // "/" // 0x800850c(0x0, 0x178008, 0x10, 0x0)
         jmp 0x80085cc

    loc_0x08008518: // orphan
         // CODE XREF from sym.do_get_main_thread_elf0 @ 0x80085d8
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8008530      // unlikely

    loc_0x08008524: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008530: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008550: // orphan
         if (x0 == 0)
         w8 = ~0xd
         csel w0,wzr,w8, eq

    loc_0x0800855c: // orphan
         // CODE XREFS from sym.do_get_main_thread_elf0 @ 0x80084b0, 0x80084b8
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x8008588           // likely

    loc_0x08008570: // orphan
         (x20, 2) = 3
         (x29, 2) = 3
         x21 = [var_30h]          // 0x4 // 4
         sp = arg_50h
         hint 0x1d
         

    loc_0x08008588: // orphan
         0x8008588 ()             // 0x8008588(0x0, 0x0, 0x0, 0x0)

    loc_0x0800858c: // orphan
         // CODE XREF from sym.do_get_main_thread_elf0 @ 0x80083dc
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8008420   // unlikely

    loc_0x08008598: // orphan
         jmp 0x80083e4

    loc_0x0800859c: // orphan
         // CODE XREF from sym.do_get_main_thread_elf0 @ 0x8008430
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8008470   // unlikely

    loc_0x080085a8: // orphan
         jmp 0x8008438

    loc_0x080085bc: // orphan
         // CODE XREF from sym.do_get_main_thread_elf0 @ 0x80084bc
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8008500   // unlikely

    loc_0x080085c8: // orphan
         jmp 0x80084c4

    loc_0x080085cc: // orphan
         // CODE XREF from sym.do_get_main_thread_elf0 @ 0x8008510
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8008550   // unlikely

    loc_0x080085d8: // orphan
         jmp 0x8008518

}

/* ===== 0x0800fbbc ===== */
int sym.do_hwbp_set (int esi, int edx) {
    loc_0x800fbbc:
        hint 0x19
        sp = sp - 0x1e0
        [sp, 0x1a0] = (x29,2)
        [sp, 0x1b0] = (x28,2)
        [sp, 0x1c0] = (x22,2)
        [sp, 0x1d0] = (x20,2)
        x29 = var_1a0h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x198
        [x29 = x8
        0x800fbf4 ()  // 0x800fbf4(0x177e20, 0x0, 0x198, 0x0)
        if !x19 jmp 0x800ffdc // likely
            
    loc_0x800ffdc:
        w20 = ~0xd
        jmp 0x80100cc
         // do {
    loc_0x80100cc:
        // CODE XREFS from sym.do_hwbp_set @ 0x800fd40, 0x800ffa0, 0x800ffe0, 0x8010084
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x801010c // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800fbfc
    loc_0x800fc08:
        x9 = [x21]    // 0xdc // 220
        x8 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        tbz w9,0x1a,0x800fc1c // likely
            
    loc_0x800fc1c:
        x22 = xzr | 0x7fffff0000
        x22 = 0xfe68  // 'h\xfe'
        if (x8 == x22)
        b.hi 0x800ffdc // unlikely
    loc_0x800fc2c:
        jmp 0x800fd68
         // do {
    loc_0x800fd68:
        // CODE XREF from sym.do_hwbp_set @ 0x800fc2c
        x8 = 0x800f000
        x8 = [x8]     // 0xcf // 207
        tbnz w8,0x1d,0x800fc70 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800fc34: // orphan
             // CODE XREF from sym.do_hwbp_set @ 0x800fd74
             mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w9 = w8 & 0x80
             if w9 jmp 0x800fc4c      // unlikely

    loc_0x0800fc40: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800fc4c: // orphan
         x9 = [x21 + 8]           // 0xdc // 220
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800fc70: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_1e0h
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x198
         0x800fc7c ()             // ">" // 0x800fc7c(0x178000, 0x0, 0x198, 0x0)
         jmp 0x800fd78

    loc_0x0800fc88: // orphan
         // CODE XREF from sym.do_hwbp_set @ 0x800fd84
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800fca0      // unlikely

    loc_0x0800fc94: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800fca0: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800fcc0: // orphan
         if x0 jmp 0x800ffdc      // unlikely

    loc_0x0800fcc4: // orphan
         x23 = 0x800f000
         w20 = ~0x15
         x8 = [x23]               // 0xde // 222
         if !x8 jmp 0x80100cc     // unlikely

    loc_0x0800fcd4: // orphan
         w0 = [sp]                // 0x4 // 4
         if (w0 == 1)
         b.lt 0x80100cc           // unlikely

    loc_0x0800fce0: // orphan
         w8 = [var_4h]            // 4
         if !w8 jmp 0x80100cc     // likely

    loc_0x0800fce8: // orphan
         if (w8 == 0x10)
         b.hi 0x80100cc           // unlikely

    loc_0x0800fcf0: // orphan
         0x800fcf0 ()             // 0x800fcf0(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x800fd3c     // likely

    loc_0x0800fcf8: // orphan
         w9 = [x0 + 0x634]        // 0xc7 // 199
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = [sp]               // 0x4 // 4
         x0 = x0 + 0x40
         if (w9 == w10)
         b.ne 0x800fd44           // likely

    loc_0x0800fd10: // orphan
         jmp 0x800fd98

    loc_0x0800fd24: // orphan
         dmb ishld
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800fd2c ()             // 0x800fd2c(0x0, 0x0, 0x0, 0x0)
         w8 = [var_4h]            // 4
         if w8 jmp 0x800fdc8      // unlikely

    loc_0x0800fd38: // orphan
         jmp 0x800fe78

    loc_0x0800fd3c: // orphan
         w20 = ~0x2
         jmp 0x80100cc

    loc_0x0800fd44: // orphan
         jmp 0x80100a0

    loc_0x0800fd58: // orphan
         dmb ishld
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800fd60 ()             // 0x800fd60(0x0, 0x0, 0x0, 0x0)
         jmp 0x80100c8

    loc_0x0800fd74: // orphan
         jmp 0x800fc34

    loc_0x0800fd78: // orphan
         // CODE XREF from sym.do_hwbp_set @ 0x800fc80
         x8 = 0x800f000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x800fcc0   // unlikely

    loc_0x0800fd84: // orphan
         jmp 0x800fc88

    loc_0x0800fd98: // orphan
         // CODE XREF from sym.do_hwbp_set @ 0x800fd10
         w10 = 0x1
         prfm pstl1strm,[x0]

    loc_0x0800fda0: // orphan
         ldxr w9,[x0]
         w11 = w9 - w10
         stlxr w12,w11,[x0]
         if w12 jmp 0x800fda0     // unlikely

    loc_0x0800fdb0: // orphan
         if (w9 == 1)
         b.eq 0x800fd24           // unlikely

    loc_0x0800fdb8: // orphan
         if (w9 == 0)
         jmp ifle 0x8010088       // likely

    loc_0x0800fdc0: // orphan
         w8 = [var_4h]            // 4
         if !w8 jmp 0x800fe78     // likely

    loc_0x0800fdc8: // orphan
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x18
         x10 = sp                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800fdd4: // orphan
         smaddl x12,w11,w9, x10
         x12 = var_18h
         b.eq 0x80100c8           // unlikely

    loc_0x0800fde0: // orphan
         x11 = w11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         smull x13,w11,w9
         x13 = x13 - 0x181
         if (x13 != 0x199)
         b.lo 0x801009c           // unlikely

    loc_0x0800fdf4: // orphan
         if (w11 == 0x10)
         b.eq 0x801009c           // unlikely

    loc_0x0800fdfc: // orphan
         x12 = [x12]              // 0xd3 // 211
         if !x12 jmp 0x80100c8    // unlikely

    loc_0x0800fe04: // orphan
         smull x12,w11,w9
         x12 = x12 - 0x179
         if (x12 != 0x199)
         b.lo 0x801009c           // unlikely

    loc_0x0800fe14: // orphan
         smaddl x12,w11,w9, x10
         w12 = [var_20h]          // 0xd3 // 211
         w12 = w12 - 1
         if (w12 == 3)
         b.hi 0x80100c8           // likely

    loc_0x0800fe28: // orphan
         smull x12,w11,w9
         x12 = x12 - 0x175
         if (x12 != 0x199)
         b.lo 0x801009c           // unlikely

    loc_0x0800fe38: // orphan
         smaddl x12,w11,w9, x10
         w12 = [var_24h]          // 0xd3 // 211
         w12 = w12 - 9
         if (w12 != 8)
         b.lo 0x80100c8           // unlikely

    loc_0x0800fe4c: // orphan
         smull x12,w11,w9
         x12 = x12 - 0x171
         if (x12 != 0x199)
         b.lo 0x801009c           // unlikely

    loc_0x0800fe5c: // orphan
         smaddl x12,w11,w9, x10
         w12 = [var_28h]          // 0xd3 // 211
         if (w12 == 3)
         b.hs 0x80100c8           // likely

    loc_0x0800fe6c: // orphan
         w11 = w11 + 1
         if (w8 == w11)
         b.ne 0x800fdd4           // likely

    loc_0x0800fe78: // orphan
         // CODE XREFS from sym.do_hwbp_set @ 0x800fd38, 0x8010098
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800fe80 ()             // 0x800fe80(0x800f000, 0x0, 0x0, 0x0)
         x8 = 0x800f000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x800fe94     // unlikely

    loc_0x0800fe90: // orphan
         sym.stop_task_run_monitor ()

    loc_0x0800fe94: // orphan
         x20 = [x23]              // 0xde // 222
         w2 = 0x320
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x35                // '5'
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800fea8 ()             // 0x800fea8(0x100, 0x0, 0x350320, 0x0)
         (w8, 2) = 3
         [x20 + 0x10] = w8
         if !w9 jmp 0x800ff68     // likely

    loc_0x0800feb8: // orphan
         w9 = 0x5030              // '0P'
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x3
         w10 = 0x18

    loc_0x0800fecc: // orphan
         x11 = w12                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x11 + w12,sxtw 1
         x12 = x12 << 3
         x13 = x12 - 0x179
         if (x13 != 0x199)
         b.lo 0x801009c           // unlikely

    loc_0x0800fee4: // orphan
         x13 = x11 + x11,lsl 1
         smaddl x15,w11,w9, x20
         x13 = x13 << 3
         x14 = x8 + x13
         x17 = x13 - 0x175
         if (x17 != 0x199)
         w16 = [var_20h]          // 0xd5 // 213
         [x15 + 0x28] = w16
         b.lo 0x801009c           // unlikely

    loc_0x0800ff08: // orphan
         smaddl x15,w11,w9, x20
         w14 = [var_24h]          // 0xd5 // 213
         x13 = x13 - 0x171
         if (x13 != 0x199)
         [x15 + 0x2c] = w14
         b.lo 0x801009c           // unlikely

    loc_0x0800ff20: // orphan
         smaddl x13,w11,w10, x8
         x15 = x12 - 0x181
         smaddl x14,w11,w9, x20
         if (x15 != 0x199)
         w13 = [var_28h]          // 0xd4 // 212
         [x14 + 0x30] = w13
         b.lo 0x801009c           // unlikely

    loc_0x0800ff3c: // orphan
         if (w11 == 0x10)
         b.eq 0x801009c           // unlikely

    loc_0x0800ff44: // orphan
         x12 = x8 + x12
         smaddl x13,w11,w9, x20
         x12 = var_18h
         x12 = [x12]              // 0xd3 // 211
         [x13 + 0x38] = x12
         w12 = w11 + 1
         w13 = [var_4h]           // 4
         if (w12 == w13)
         b.lo 0x800fecc           // unlikely

    loc_0x0800ff68: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.prepare_break_point_handlers () // sym.prepare_break_point_handlers(0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.start_task_run_monitor () // sym.start_task_run_monitor(0x0)
         if !w0 jmp 0x800ffa4     // likely

    loc_0x0800ff7c: // orphan
         w2 = 0x320
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = [x23]               // 0xde // 222 // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x35                // '5'
         0x800ff90 ()             // 0x800ff90(0x100, 0x0, 0x350320, 0x0)
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800ff9c ()             // "K" // 0x800ff9c(0x800f000, 0x0, 0x350320, 0x0)
         jmp 0x80100cc

    loc_0x0800ffa4: // orphan
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.paradise_hwbp_fill_config () // sym.paradise_hwbp_fill_config(0x178000)
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800ffb4 ()             // 0x800ffb4(0x800f000, 0x0, 0x0, 0x0)
         w8 = (byte) [x21 + 0x46] // 0xdc // 220
         tbnz w8,5,0x800ffcc      // likely

    loc_0x0800ffc0: // orphan
         x9 = [x21]               // 0xdc // 220
         x8 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x800ffd4    // likely

    loc_0x0800ffcc: // orphan
         x8 = x19 << 8
         x8 = x19 & x8,asr 8

    loc_0x0800ffd4: // orphan
         if (x8 == x22)
         b.ls 0x800ffe4           // likely

    loc_0x0800ffe4: // orphan
         jmp 0x8010110

    loc_0x0800ffec: // orphan
         // CODE XREF from sym.do_hwbp_set @ 0x801011c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8010004      // unlikely

    loc_0x0800fff8: // orphan
         
         w9 = 0x60                // '`'
         // XREFS(67)
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010004: // orphan
         x9 = [x21 + 8]           // 0xdc // 220
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010028: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_1e0h
         w2 = 0x198
         0x8010034 ()             // ":" // 0x8010034(0x0, 0x178000, 0x198, 0x0)
         jmp 0x8010120

    loc_0x08010040: // orphan
         // CODE XREF from sym.do_hwbp_set @ 0x801012c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8010058      // unlikely

    loc_0x0801004c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010058: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010078: // orphan
         if (x0 == 0)
         w8 = ~0xd
         csel w20,wzr,w8, eq
         jmp 0x80100cc

    loc_0x08010088: // orphan
         w1 = 0x3
         0x801008c ()             // 0x801008c(0x0, 0x3, 0x0, 0x0)
         w8 = [var_4h]            // 4
         if w8 jmp 0x800fdc8      // unlikely

    loc_0x08010098: // orphan
         jmp 0x800fe78

    loc_0x0801009c: // orphan
         brk 0x1

    loc_0x080100a0: // orphan
         // CODE XREF from sym.do_hwbp_set @ 0x800fd44
         w10 = 0x1
         prfm pstl1strm,[x0]

    loc_0x080100a8: // orphan
         ldxr w9,[x0]
         w11 = w9 - w10
         stlxr w12,w11,[x0]
         if w12 jmp 0x80100a8     // unlikely

    loc_0x080100b8: // orphan
         if (w9 == 1)
         b.eq 0x800fd58           // unlikely

    loc_0x080100c0: // orphan
         if (w9 == 0)
         jmp ifle 0x8010100       // likely

    loc_0x080100c8: // orphan
         // CODE XREFS from sym.do_hwbp_set @ 0x800fd64, 0x8010108
         w20 = ~0x15

    loc_0x080100e0: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_1e0h
         hint 0x1d
         

    loc_0x08010100: // orphan
         w1 = 0x3
         0x8010104 ()             // 0x8010104(0x0, 0x3, 0x0, 0x0)
         jmp 0x80100c8

    loc_0x0801010c: // orphan
         0x801010c ()             // 0x801010c(0x0, 0x0, 0x0, 0x0)

    loc_0x08010110: // orphan
         // CODE XREF from sym.do_hwbp_set @ 0x800ffe4
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8010028   // unlikely

    loc_0x0801011c: // orphan
         jmp 0x800ffec

    loc_0x08010120: // orphan
         // CODE XREF from sym.do_hwbp_set @ 0x8010038
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8010078   // unlikely

    loc_0x0801012c: // orphan
         jmp 0x8010040

}

/* ===== 0x0801060c ===== */
int sym.do_hwbp_get_config (int esi, int edx) {
    loc_0x801060c:
        hint 0x19
        sp = sp - 0x1d0
        [sp, 0x1a0] = (x29,2)
        [var_1b0h] = x28
        [sp, 0x1c0] = (x20,2)
        x29 = var_1a0h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        if !x0 jmp 0x8010788 // likely
            
    loc_0x8010788:
        w0 = ~0xd
        jmp 0x8010830
         // do {
    loc_0x8010830:
        // CODE XREF from sym.do_hwbp_get_config @ 0x801078c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8010860 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8010634
    loc_0x8010680:
        w12 = [x10 + 0x10] // 0xd1 // 209
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [sp] = w12
        x12 = [x10]   // 0xd1 // 209
        if (x12 == 0)
        csel x9,x9,x12, eq
        w12 = 0x18
        [var_sp_8h] = x9
        x9 = [x10 + 8] // 0xd1 // 209
        if (x9 == 0)
        csel x13,x11,x9, eq
        w11 = 0x5030  // '0P'
        x9 = x10 + 0x38
        w10 = 0x10
        w11 = 0x3
        [var_0h_2] = x13
        jmp 0x80106d0
         // do {
    loc_0x80106d0:
        // CODE XREF from sym.do_hwbp_get_config @ 0x80106c0
        x14 = [x9]    // 0xd0 // 208
        if !x14 jmp 0x80106c4 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x80106d8:
        w13 = w8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x15 = x13 + w8,uxtw 1
        x15 = x15 << 3
        if (x15 == 0x180)
        ccmp w8,0x10,4, ls
        b.eq 0x801085c // unlikely
            
    loc_0x801085c:
        brk 0x1
         // } else {
    loc_0x80106f0:
        x15 = x13 + x13,lsl 1
        x15 = x15 << 3
        x16 = x20 + x15
        if (x15 == 0x178)
        [x16 + 0x18] = x14
        b.hi 0x801085c // unlikely
        }
        return eax;
    loc_0x8010708:
        ldur w14,[x9,-0x10] // 0xd0 // 208
        if (x15 == 0x174)
        [x16 + 0x20] = w14
        b.hi 0x801085c // unlikely
    loc_0x8010718:
        x14 = x13 + x13,lsl 1
        ldur w16,[x9,-0xc] // 0xd0 // 208
        x14 = x14 << 3
        x15 = x20 + x14
        if (x14 == 0x170)
        [x15 + 0x24] = w16
        b.hi 0x801085c // unlikely
    loc_0x8010734:
        umaddl x13,w13,w12, x20
        ldur w14,[x9,-8] // 0xd0 // 208
        w8 = w8 + 1
        [var_0h_3] = w14
        [var_0h_4] = w8
        jmp 0x80106c4
         // do {
    loc_0x80106c4:
        // CODE XREF from sym.do_hwbp_get_config @ 0x8010748
        x10 = x10 - 1
        x9 = x9 + x11
        b.eq 0x801074c // unlikely
         // } while (?);
        }
        return eax;
    loc_0x801074c:
        x0 = 0x8010000
        x0 = x0 + 0   // int64_t arg1
        0x8010754 ()  // 0x8010754(0x8010000, 0x0, 0x0, 0x0)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w9,5,0x8010770 // likely
            
    loc_0x8010770:
        x9 = x19 << 8
        x9 = x19 & x9,asr 8
         // do {
    loc_0x8010778:
        x10 = xzr | 0x7fffff0000
        x10 = 0xfe68  // 'h\xfe'
        if (x9 == x10)
        b.ls 0x8010790 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08010790: // orphan
             jmp 0x8010864

    loc_0x08010798: // orphan
         // CODE XREF from sym.do_hwbp_get_config @ 0x8010870
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w9 & 0x80
         if w10 jmp 0x80107b0     // unlikely

    loc_0x080107a4: // orphan
         
         w10 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080107b0: // orphan
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080107d4: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_1d0h
         w2 = 0x198
         0x80107e0 ()             // "$" // 0x80107e0(0x0, 0x178000, 0x198, 0x0)
         jmp 0x8010874

    loc_0x080107ec: // orphan
         // CODE XREF from sym.do_hwbp_get_config @ 0x8010880
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8010804      // unlikely

    loc_0x080107f8: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010804: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010824: // orphan
         if (x0 == 0)
         w8 = ~0xd
         csel w0,wzr,w8, eq

    loc_0x08010844: // orphan
         (x20, 2) = 3
         (x29, 2) = 3
         x28 = [var_1b0h]         // 0x4 // 4
         sp = arg_1d0h
         hint 0x1d
         

    loc_0x08010860: // orphan
         0x8010860 ()             // "\t" // 0x8010860(0x0, 0x0, 0x0, 0x0)

    loc_0x08010864: // orphan
         // CODE XREF from sym.do_hwbp_get_config @ 0x8010790
         x9 = 0x8010000
         x9 = [x9]                // 0xd0 // 208
         tbnz w9,0x1d,0x80107d4   // unlikely

    loc_0x08010870: // orphan
         jmp 0x8010798

    loc_0x08010874: // orphan
         // CODE XREF from sym.do_hwbp_get_config @ 0x80107e4
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8010824   // unlikely

    loc_0x08010880: // orphan
         jmp 0x80107ec

}

/* ===== 0x080068ac ===== */
int sym.do_is_process_alive (int esi, int edx) {
    loc_0x80068ac:
        hint 0x19
        sp = sp - 0x40
        [sp, 0x10] = (x29,2)
        [var_20h] = x21
        [sp, 0x30] = (x20,2)
        x29 = var_10h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        mrs x20,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = x0 << 8 // arg1
        [var_8h] = x8
        w8 = (byte) [x20 + 0x46] // 0xdb // 219
        [sp] = xzr
        tbnz w8,5,0x80068f4 // likely
            
    loc_0x80068f4:
        x8 = x19 & x21,asr 8
         // do {
    loc_0x80068f8:
        x9 = xzr | 0x7ffffffff8
        if (x8 == x9)
        b.hi 0x80069cc // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08006904: // orphan
             jmp 0x8006aa4

    loc_0x0800690c: // orphan
         // CODE XREF from sym.do_is_process_alive @ 0x8006ab0
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8006924      // unlikely

    loc_0x08006918: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006924: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006948: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_40h
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x8
         0x8006954 ()             // "W" // 0x8006954(0x178000, 0x0, 0x8, 0x0)
         jmp 0x8006ab4

    loc_0x08006960: // orphan
         // CODE XREF from sym.do_is_process_alive @ 0x8006ac0
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8006978      // unlikely

    loc_0x0800696c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006978: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006998: // orphan
         if x0 jmp 0x80069cc      // unlikely

    loc_0x0800699c: // orphan
         w0 = [sp]                // 0x4 // 4
         0x80069a0 ()             // 0x80069a0(-1, 0x0, 0x0, 0x0)
         w8 = (byte) [x20 + 0x46] // 0xdb // 219
         [var_0h_2] = w0
         tbnz w8,5,0x80069bc      // likely

    loc_0x080069b0: // orphan
         x9 = [x20]               // 0xdb // 219
         x8 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x80069c0    // likely

    loc_0x080069bc: // orphan
         x8 = x19 & x21,asr 8

    loc_0x080069c0: // orphan
         x9 = xzr | 0x7ffffffff8
         if (x8 == x9)
         b.ls 0x80069d4           // likely

    loc_0x080069cc: // orphan
         w0 = ~0xd
         jmp 0x8006a74

    loc_0x080069d4: // orphan
         jmp 0x8006ac4

    loc_0x080069dc: // orphan
         // CODE XREF from sym.do_is_process_alive @ 0x8006ad0
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x80069f4      // unlikely

    loc_0x080069e8: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080069f4: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006a18: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_40h
         w2 = 0x8
         0x8006a24 ()             // "+" // 0x8006a24(0x0, 0x178000, 0x8, 0x0)
         jmp 0x8006ad4

    loc_0x08006a30: // orphan
         // CODE XREF from sym.do_is_process_alive @ 0x8006ae0
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8006a48      // unlikely

    loc_0x08006a3c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006a48: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006a68: // orphan
         if (x0 == 0)
         w8 = ~0xd
         csel w0,wzr,w8, eq

    loc_0x08006a74: // orphan
         // CODE XREF from sym.do_is_process_alive @ 0x80069d0
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         x9 = [var_8h]            // 0x4 // 4
         if (x8 == x9)
         b.ne 0x8006aa0           // likely

    loc_0x08006a88: // orphan
         (x20, 2) = 3
         (x29, 2) = 3
         x21 = [var_20h]          // 0x4 // 4
         sp = arg_40h
         hint 0x1d
         

    loc_0x08006aa0: // orphan
         0x8006aa0 ()             // 0x8006aa0(0x0, 0x0, 0x0, 0x0)

    loc_0x08006aa4: // orphan
         // CODE XREF from sym.do_is_process_alive @ 0x8006904
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8006948   // unlikely

    loc_0x08006ab0: // orphan
         jmp 0x800690c

    loc_0x08006ab4: // orphan
         // CODE XREF from sym.do_is_process_alive @ 0x8006958
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8006998   // unlikely

    loc_0x08006ac0: // orphan
         jmp 0x8006960

    loc_0x08006ac4: // orphan
         // CODE XREF from sym.do_is_process_alive @ 0x80069d4
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8006a18   // unlikely

    loc_0x08006ad0: // orphan
         jmp 0x80069dc

    loc_0x08006ad4: // orphan
         // CODE XREF from sym.do_is_process_alive @ 0x8006a28
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8006a68   // unlikely

    loc_0x08006ae0: // orphan
         jmp 0x8006a30

}

/* ===== 0x080071d8 ===== */
int sym.do_hide_process (int esi, int edx) {
    loc_0x80071d8:
        hint 0x19
        sp = sp - 0x30
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x20,2)
        x29 = var_10h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        [var_8h] = x8
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        [sp] = xzr
        tbnz w9,5,0x8007214 // likely
            
    loc_0x8007214:
        x9 = x0 << 8  // arg1
        x9 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x800721c:
        x10 = xzr | 0x7ffffffff8
        if (x9 == x10)
        b.hi 0x8007334 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08007228: // orphan
             jmp 0x800733c

    loc_0x08007230: // orphan
         // CODE XREF from sym.do_hide_process @ 0x8007348
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w9 & 0x80
         if w10 jmp 0x8007248     // unlikely

    loc_0x0800723c: // orphan
         
         w10 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007248: // orphan
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800726c: // orphan
         x1 = x0 & 0xff7fffffffffffff // int64_t arg_30h
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x8
         0x8007278 ()             // "4" // 0x8007278(0x178000, 0x0, 0x8, 0x0)
         jmp 0x800734c

    loc_0x08007284: // orphan
         // CODE XREF from sym.do_hide_process @ 0x8007358
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800729c      // unlikely

    loc_0x08007290: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800729c: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080072bc: // orphan
         if x0 jmp 0x8007334      // unlikely

    loc_0x080072c0: // orphan
         w0 = [sp]                // 0x4 // 4
         if (w0 == 1)
         b.lt 0x8007300           // likely

    loc_0x080072cc: // orphan
         w8 = [var_4h]            // 4
         if !w8 jmp 0x8007310     // unlikely

    loc_0x080072d4: // orphan
         0x80072d4 ()             // 0x80072d4(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8007308     // likely

    loc_0x080072dc: // orphan
         x8 = x0 + 0x40
         jmp 0x800736c

    loc_0x080072f4: // orphan
         dmb ishld
         0x80072f8 ()             // "&" // 0x80072f8(0x0, 0x0, 0x0, 0x0)
         jmp 0x8007394

    loc_0x08007300: // orphan
         // CODE XREF from sym.paradise_get_file_private @ +0x30
         w19 = ~0x15
         jmp 0x80073cc

    loc_0x08007308: // orphan
         w19 = ~0x2
         jmp 0x80073cc

    loc_0x08007310: // orphan
         0x8007310 ()             // 0x8007310(0x0, 0x0, 0x0, 0x0)
         w0 = [sp]                // 0x4 // 4
         0x8007318 ()             // 0x8007318(-1, 0x0, 0x0, 0x0)
         w1 = [sp]                // 0x4 // 4
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         0x8007328 ()             // 0x8007328(0x8007000, -1, 0x0, 0x0)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80073cc

    loc_0x08007334: // orphan
         w19 = ~0xd
         jmp 0x80073cc

    loc_0x0800733c: // orphan
         // CODE XREF from sym.do_hide_process @ 0x8007228
         x9 = 0x8007000
         x9 = [x9]                // 0xd0 // 208
         tbnz w9,0x1d,0x800726c   // unlikely

    loc_0x08007348: // orphan
         jmp 0x8007230

    loc_0x0800734c: // orphan
         // CODE XREF from sym.do_hide_process @ 0x800727c
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x80072bc   // unlikely

    loc_0x08007358: // orphan
         jmp 0x8007284

    loc_0x0800736c: // orphan
         // CODE XREF from sym.do_hide_process @ 0x80072e0
         w10 = 0x1
         prfm pstl1strm,[x8]

    loc_0x08007374: // orphan
         ldxr w9,[x8]
         w11 = w9 - w10
         stlxr w12,w11,[x8]
         if w12 jmp 0x8007374     // unlikely

    loc_0x08007384: // orphan
         if (w9 == 1)
         b.eq 0x80072f4           // unlikely

    loc_0x0800738c: // orphan
         if (w9 == 0)
         jmp ifle 0x800740c       // likely

    loc_0x08007394: // orphan
         // CODE XREFS from sym.do_hide_process @ 0x80072fc, 0x8007418
         w0 = [sp]                // 0x4 // 4
         0x8007398 ()             // 0x8007398(-1, 0x0, 0x0, 0x0)
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = [sp]                // 0x4 // 4
         0x80073a4 ()             // 0x80073a4(-1, 0x0, 0x0, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x80073cc      // likely

    loc_0x080073b0: // orphan
         w0 = [sp]                // 0x4 // 4
         0x80073b4 ()             // 0x80073b4(-1, 0x0, 0x0, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x80073f8     // unlikely

    loc_0x080073c0: // orphan
         tbnz w20,0,0x80073cc     // unlikely

    loc_0x080073c4: // orphan
         w0 = [sp]                // 0x4 // 4
         0x80073c8 ()             // 0x80073c8(-1, 0x0, 0x0, 0x0)

    loc_0x080073cc: // orphan
         // CODE XREFS from sym.do_hide_process @ 0x8007304, 0x800730c, 0x8007330, 0x8007338, 0x8007408
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         x9 = [var_8h]            // 0x4 // 4
         if (x8 == x9)
         b.ne 0x800741c           // likely

    loc_0x080073e0: // orphan
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x29, 2) = 3
         sp = arg_30h
         hint 0x1d
         

    loc_0x080073f8: // orphan
         w1 = [sp]                // 0x4 // 4
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         0x8007404 ()             // 0x8007404(0x8007000, -1, 0x0, 0x0)
         jmp 0x80073cc

    loc_0x0800740c: // orphan
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = 0x3
         0x8007414 ()             // 0x8007414(0x0, 0x3, 0x0, 0x0)
         jmp 0x8007394

    loc_0x0800741c: // orphan
         0x800741c ()             // 0x800741c(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08005bc8 ===== */
int sym.do_write_physical_memory (int esi, int edx) {
    loc_0x8005bc8:
        hint 0x19
        sp = sp - 0xd0
        [sp, 0x70] = (x29,2)
        [sp, 0x80] = (x28,2)
        [sp, 0x90] = (x26,2)
        [sp, 0xa0] = (x24,2)
        [sp, 0xb0] = (x22,2)
        [sp, 0xc0] = (x20,2)
        x29 = var_70h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        mrs x22,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x29 = x8
        w8 = (byte) [x22 + 0x46] // 0xdd // 221
        [sp, 0x48] = (xzr,2)
        [sp, 0x38] = (xzr,2)
        [var_30h] = xzr
        tbnz w8,5,0x8005c20 // likely
            
    loc_0x8005c20:
        x8 = x21 << 8
        x8 = x21 & x8,asr 8
         // do {
    loc_0x8005c28:
        x23 = xzr | 0x7fffff0000
        x23 = 0xffd8  // '\xd8\xff'
        if (x8 == x23)
        b.hi 0x8005d44 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08005c38: // orphan
             jmp 0x8005d4c

    loc_0x08005c40: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8005d58
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8005c58      // unlikely

    loc_0x08005c4c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005c58: // orphan
         x9 = [x22 + 8]           // 0xdd // 221
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005c7c: // orphan
         x1 = x21 & 0xff7fffffffffffff // int64_t arg_d0h
         x0 = var_30h             // int64_t arg1
         w2 = 0x28                // '('
         0x8005c88 ()             // "4" // 0x8005c88(0x178030, 0x0, 0x28, 0x0)
         jmp 0x8005d5c

    loc_0x08005c94: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8005d68
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8005cac      // unlikely

    loc_0x08005ca0: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005cac: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005ccc: // orphan
         if x0 jmp 0x8005d44      // unlikely

    loc_0x08005cd0: // orphan
         x8 = [var_48h]           // 4
         if !x8 jmp 0x8005d3c     // likely

    loc_0x08005cd8: // orphan
         w0 = [var_30h]           // 0x4 // 4
         0x8005cdc ()             // 0x8005cdc(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8005d34     // likely

    loc_0x08005ce4: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8005cec ()             // 0x8005cec(0x0, 0x0, 0x0, 0x0)
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8005cf8 ()             // 0x8005cf8(0x0, 0x0, 0x0, 0x0)
         if !x20 jmp 0x8005d34    // likely

    loc_0x08005d00: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8005d04 ()             // 0x8005d04(0x0, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x20 + 0x40
         jmp 0x8005d7c

    loc_0x08005d24: // orphan
         dmb ishld
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8005d2c ()             // 0x8005d2c(0x0, 0x0, 0x0, 0x0)
         if x19 jmp 0x8005da8     // unlikely

    loc_0x08005d34: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8006158
         w22 = ~0x2
         jmp 0x8005e9c

    loc_0x08005d3c: // orphan
         w22 = ~0x15
         jmp 0x8005e9c

    loc_0x08005d44: // orphan
         w22 = ~0xd
         jmp 0x8005e9c

    loc_0x08005d4c: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8005c38
         x8 = 0x8005000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8005c7c   // unlikely

    loc_0x08005d58: // orphan
         jmp 0x8005c40

    loc_0x08005d5c: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8005c8c
         x8 = 0x8005000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8005ccc   // unlikely

    loc_0x08005d68: // orphan
         jmp 0x8005c94

    loc_0x08005d7c: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8005d10
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08005d84: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8005d84     // unlikely

    loc_0x08005d94: // orphan
         if (w8 == 1)
         b.eq 0x8005d24           // unlikely

    loc_0x08005d9c: // orphan
         if (w8 == 0)
         jmp ifle 0x800614c       // likely

    loc_0x08005da4: // orphan
         if !x19 jmp 0x8005d34    // likely

    loc_0x08005da8: // orphan
         x20 = [x19 + 0x38]       // 0xda // 218
         x2 = x29 - 0x10          // int64_t arg3
         x1 = [var_40h]           // 4 // int64_t arg2
         x3 = x29 - 0x18          // int64_t arg4
         [x29 = xzr
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.lockfree_va_to_pa () // sym.lockfree_va_to_pa(-1, 0x0, 0x177ff0, 0x177fe8, -1)
         ldur x8,[x29,-0x10]
         if (w0 == 0)
         w9 = (byte) [x22 + 0x46] // 0xdd // 221
         csel x8,xzr,x8, lt
         [var_48h_2] = x8
         tbnz w9,5,0x8005de8      // likely

    loc_0x08005ddc: // orphan
         x9 = [x22]               // 0xdd // 221
         x8 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x8005df0    // likely

    loc_0x08005de8: // orphan
         x8 = x21 << 8
         x8 = x21 & x8,asr 8

    loc_0x08005df0: // orphan
         if (x8 == x23)
         b.hi 0x8005e90           // unlikely

    loc_0x08005df8: // orphan
         jmp 0x8006160

    loc_0x08005e00: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x800616c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8005e18      // unlikely

    loc_0x08005e0c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005e18: // orphan
         x9 = [x22 + 8]           // 0xdd // 221
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005e3c: // orphan
         x0 = x21 & 0xff7fffffffffffff // int64_t arg1
         x1 = var_30h             // int64_t arg_d0h
         w2 = 0x28                // '('
         0x8005e48 ()             // 0x8005e48(0x0, 0x178030, 0x28, 0x0)
         jmp 0x8006170

    loc_0x08005e54: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x800617c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8005e6c      // unlikely

    loc_0x08005e60: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005e6c: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005e8c: // orphan
         if !x0 jmp 0x8005ed8     // likely

    loc_0x08005e90: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8006148
         w22 = ~0xd

    loc_0x08005e94: // orphan
         // CODE XREFS from sym.do_write_physical_memory @ 0x8006134, 0x800613c
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8005e98 ()             // 0x8005e98(0x0, 0x0, 0x0, 0x0)

    loc_0x08005e9c: // orphan
         // CODE XREFS from sym.do_write_physical_memory @ 0x8005d38, 0x8005d40, 0x8005d48
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x800615c           // likely

    loc_0x08005eb0: // orphan
         w0 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_d0h
         hint 0x1d
         

    loc_0x08005ed8: // orphan
         x21 = 0x8005000
         x25 = 0x8005000
         x8 = [x21]               // 0xdc // 220
         if x8 jmp 0x8005efc      // likely

    loc_0x08005ee8: // orphan
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         0x8005ef0 ()             // 0x8005ef0(0x8005000, 0x0, 0x0, 0x0)
         [x21] = x0
         if !x0 jmp 0x8005f14     // unlikely

    loc_0x08005efc: // orphan
         x8 = [x25]               // 0xe0 // 224
         if x8 jmp 0x8005f14      // likely

    loc_0x08005f04: // orphan
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         0x8005f0c ()             // 0x8005f0c(0x8005000, 0x0, 0x0, 0x0)
         [x25] = x0

    loc_0x08005f14: // orphan
         x26 = 0x8005000
         x8 = [x26]               // 0xe1 // 225
         if x8 jmp 0x8005f30      // likely

    loc_0x08005f20: // orphan
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         0x8005f28 ()             // 0x8005f28(0x8005000, 0x0, 0x0, 0x0)
         [x26] = x0

    loc_0x08005f30: // orphan
         x28 = [var_48h]          // 4
         if !x28 jmp 0x8006138    // likely

    loc_0x08005f38: // orphan
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = [var_40h]          // 4
         jmp 0x8005f64

    loc_0x08005f44: // orphan
         x25 = x20                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = [sp]               // 0x4 // 4
         x21 = x23 + x21
         x27 = x23 + x27
         x28 = x28 - x23
         x26 = 0x8005000

    loc_0x08005f5c: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8006000
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x28 jmp 0x8005e94    // likely

    loc_0x08005f64: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8005f40
         x2 = var_28h             // int64_t arg3
         x3 = var_20h             // int64_t arg4
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [sp, 0x20] = (xzr,2)
         sym.lockfree_va_to_pa () // sym.lockfree_va_to_pa(0x0, 0x0, 0x178028, 0x178020, -1)
         tbnz w0,0x1f,0x8006004   // unlikely

    loc_0x08005f80: // orphan
         x8 = [var_20h]           // 0x4 // 4
         if (x28 == x8)           // u"P\b" // u"P\b"
         csel x23,x28,x8, lo
         if !x23 jmp 0x8005f5c    // likely

    loc_0x08005f90: // orphan
         x24 = [var_28h]          // 4

    loc_0x08005f94: // orphan
         x10 = 0x8005000
         x8 = x24 & 0xfff
         w11 = 0x1000
         x9 = [var_38h]           // 0x4 // 4
         x8 = x11 - x8
         x10 = [x10]              // 0xd1 // 209
         if (x8 == x23)           // u"P\b"
         csel x22,x8,x23, lo
         x1 = x9 + x27
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x24 - x10
         x0 = x8 | 0xffffff8000000000
         x8 = [x25]               // 0xe0 // 224
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xa42c             // ',\xa4'
         w17 = 0xacff             // '\xff\xac'
         if (w16 == w17)          // u"P\b"
         b.eq 0x8005fe0           // unlikely

    loc_0x08005fdc: // orphan
         brk 0x8228

    loc_0x08005fe0: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         if x0 jmp 0x8005e90      // unlikely

    loc_0x08005fe8: // orphan
         x24 = x22 + x24
         x21 = x22 + x21
         x27 = x22 + x27
         x28 = x28 - x22
         x23 = x23 - x22
         b.ne 0x8005f94           // likely

    loc_0x08006000: // orphan
         // XREFS(61)
         jmp 0x8005f5c

    loc_0x08006004: // orphan
         w22 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // DATA XREF from sym.do_hide_path @ 0x8006d78
         x8 = [x26]               // 0xe1 // 225
         if !x8 jmp 0x8005e94     // unlikely

    loc_0x08006010: // orphan
         ubfx x8,x21,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x20 + x8,lsl 3]    // 0xcf000000db // 889058230491
         [x29 = x8
         ldur x8,[x29,-0x10]
         [x29 = x8
         ldur x9,[x29,-0x18]
         w8 = ~w9
         [var_0h_2] = x9
         if ((x8 & 3) == 0)       // u"P\b"
         b.ne 0x8005e94           // likely

    loc_0x08006038: // orphan
         x8 = 0x8006000
         x9 = x9 & 0x7ffffff000
         ubfx x10,x21,0x15, 9     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         x9 = x9 - x8
         x9 = x9 | 0xffffff8000000000
         x9 = [x9 + x10,lsl 3]    // 0xd1000000d0 // 897648165072
         w10 = ~w9
         [var_0h_3] = x9
         if ((x10 & 3) == 0)      // u"P\b"
         b.ne 0x8005e94           // likely

    loc_0x08006064: // orphan
         x9 = x9 & 0x7ffffff000
         x8 = x9 - x8
         ubfx x9,x21,0xc, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 | 0xffffff8000000000
         x8 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         [var_0h_4] = x8
         if !x8 jmp 0x8005e94     // unlikely

    loc_0x08006080: // orphan
         x9 = 0x1                 // u"P\b"
         x9 = 0x400
         x9 = x8 & x9
         if x9 jmp 0x8005e94      // unlikely

    loc_0x08006090: // orphan
         ubfx w9,w8,3, 5          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 0x1c)          // u"P\b"
         b.hs 0x8005e94           // unlikely

    loc_0x0800609c: // orphan
         x9 = x8 >> 8
         x8 = x9 | x8,lsl 55
         x9 = ~0x83fc             // '\xfc\x83'
         x24 = x8 & x9
         if !x24 jmp 0x8005e94    // likely

    loc_0x080060b0: // orphan
         [sp] = x20
         x20 = x25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = x21 & 0xfff
         w8 = 0x1000
         x8 = x8 - x25
         w1 = 0xc00
         if (x28 == x8)           // u"P\b"
         csel x23,x28,x8, lo
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80060d4 ()             // 0x80060d4(0x0, 0xc00, 0x0, 0x0)
         if !x0 jmp 0x8005e94     // likely

    loc_0x080060dc: // orphan
         x8 = [var_38h]           // 0x4 // 4
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x20]               // 0xdb // 219
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x8 + x27
         ldur w16,[x9,-4]         // 0xd0 // 208
         w17 = 0xa42c             // ',\xa4'
         w17 = 0xacff             // '\xff\xac'
         if (w16 == w17)          // u"P\b"
         b.eq 0x8006108           // unlikely

    loc_0x08006104: // orphan
         brk 0x8229

    loc_0x08006108: // orphan
         blr x9                   // xzr(0x0, 0x0, 0x0, 0x0)
         if x0 jmp 0x8006140      // unlikely

    loc_0x08006110: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x3 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg4
         sym.swap_write_page_direct () // sym.swap_write_page_direct(0x0, 0x0, 0x0, 0x0)
         w24 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800612c ()             // 0x800612c(0x0, 0x0, 0x0, 0x0)
         tbnz w24,0,0x8005f44     // unlikely

    loc_0x08006134: // orphan
         jmp 0x8005e94

    loc_0x08006138: // orphan
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8005e94

    loc_0x08006140: // orphan
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8006144 ()             // 0x8006144(0x0, 0x0, 0x0, 0x0)
         jmp 0x8005e90

    loc_0x0800614c: // orphan
         w1 = 0x3
         0x8006150 ()             // 0x8006150(0x0, 0x3, 0x0, 0x0)
         if x19 jmp 0x8005da8     // unlikely

    loc_0x08006158: // orphan
         jmp 0x8005d34

    loc_0x0800615c: // orphan
         0x800615c ()             // 0x800615c(0x0, 0x0, 0x0, 0x0)

    loc_0x08006160: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8005df8
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8005e3c   // unlikely

    loc_0x0800616c: // orphan
         jmp 0x8005e00

    loc_0x08006170: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8005e4c
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8005e8c   // unlikely

    loc_0x0800617c: // orphan
         jmp 0x8005e54

}

/* ===== 0x0800662c ===== */
int sym.do_find_process (int esi, int edx) {
    loc_0x800662c:
        hint 0x19
        sp = sp - 0x150
        [sp, 0x110] = (x29,2)
        [var_120h] = x28
        [sp, 0x130] = (x22,2)
        [sp, 0x140] = (x20,2)
        x29 = var_110h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x104
        [x29 = x8
        0x8006664 ()  // 0x8006664(0x177eb0, 0x0, 0x104, 0x0)
        mrs x20,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = (byte) [x20 + 0x46] // 0xdb // 219
        x21 = x19 << 8
        tbnz w8,5,0x8006684 // likely
            
    loc_0x8006684:
        x8 = x19 & x21,asr 8
         // do {
    loc_0x8006688:
        x22 = xzr | 0x7fffff0000
        x22 = 0xfefc  // '\xfc\xfe'
        if (x8 == x22) // u"P\b"
        b.hi 0x8006764 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08006698: // orphan
             jmp 0x8006848

    loc_0x080066a0: // orphan
         // CODE XREF from sym.do_find_process @ 0x8006854
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x80066b8      // unlikely

    loc_0x080066ac: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080066b8: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080066dc: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_150h
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x104
         0x80066e8 ()             // "[" // 0x80066e8(0x178000, 0x0, 0x104, 0x0)
         jmp 0x8006858

    loc_0x080066f4: // orphan
         // CODE XREF from sym.do_find_process @ 0x8006864
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800670c      // unlikely

    loc_0x08006700: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800670c: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800672c: // orphan
         if x0 jmp 0x8006764      // unlikely

    loc_0x08006730: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x8 | 4              // int64_t arg1
         0x8006738 ()             // 0x8006738(0x178004, 0x0, 0x0, 0x0)
         [sp] = w0
         if !w0 jmp 0x800676c     // unlikely

    loc_0x08006744: // orphan
         w8 = (byte) [x20 + 0x46] // 0xdb // 219
         tbnz w8,5,0x8006758      // likely

    loc_0x0800674c: // orphan
         x9 = [x20]               // 0xdb // 219
         x8 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x800675c    // likely

    loc_0x08006758: // orphan
         x8 = x19 & x21,asr 8

    loc_0x0800675c: // orphan
         if (x8 == x22)           // u"P\b" // u"P\b"
         b.ls 0x8006774           // likely

    loc_0x08006764: // orphan
         w0 = ~0xd
         jmp 0x8006814

    loc_0x0800676c: // orphan
         w0 = ~0x76               // 'v'
         jmp 0x8006814

    loc_0x08006774: // orphan
         jmp 0x8006878

    loc_0x0800677c: // orphan
         // CODE XREF from sym.do_find_process @ 0x8006884
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8006794      // unlikely

    loc_0x08006788: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006794: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080067b8: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_150h
         w2 = 0x104
         0x80067c4 ()             // "0" // 0x80067c4(0x0, 0x178000, 0x104, 0x0)
         jmp 0x8006888

    loc_0x080067d0: // orphan
         // CODE XREF from sym.do_find_process @ 0x8006894
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x80067e8      // unlikely

    loc_0x080067dc: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080067e8: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006808: // orphan
         if (x0 == 0)             // u"P\b" // u"P\b"
         w8 = ~0xd
         csel w0,wzr,w8, eq

    loc_0x08006814: // orphan
         // CODE XREFS from sym.do_find_process @ 0x8006768, 0x8006770
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)            // u"P\b" // u"P\b"
         b.ne 0x8006844           // likely

    loc_0x08006828: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         x28 = [var_120h]         // 0x4 // 4
         sp = arg_150h
         hint 0x1d
         

    loc_0x08006844: // orphan
         0x8006844 ()             // 0x8006844(0x0, 0x0, 0x0, 0x0)

    loc_0x08006848: // orphan
         // CODE XREF from sym.do_find_process @ 0x8006698
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x80066dc   // unlikely

    loc_0x08006854: // orphan
         jmp 0x80066a0

    loc_0x08006858: // orphan
         // CODE XREF from sym.do_find_process @ 0x80066ec
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x800672c   // unlikely

    loc_0x08006864: // orphan
         jmp 0x80066f4

    loc_0x08006878: // orphan
         // CODE XREF from sym.do_find_process @ 0x8006774
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x80067b8   // unlikely

    loc_0x08006884: // orphan
         jmp 0x800677c

    loc_0x08006888: // orphan
         // CODE XREF from sym.do_find_process @ 0x80067c8
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8006808   // unlikely

    loc_0x08006894: // orphan
         jmp 0x80067d0

}

/* ===== 0x080075bc ===== */
int sym.do_list_processes (int esi, int edx) {
    loc_0x80075bc:
        hint 0x19
        sp = sp - 0x70
        [sp, 0x20] = (x29,2)
        [var_30h] = x25
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        mrs x23,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x29 = x8
        w8 = (byte) [x23 + 0x46] // 0xde // 222
        [sp, 8] = (xzr,2)
        [sp] = xzr
        tbnz w8,5,0x800760c // likely
            
    loc_0x800760c:
        x8 = x19 << 8
        x8 = x19 & x8,asr 8
         // do {
    loc_0x8007614:
        x24 = xzr | 0x7fffff0000
        x24 = 0xffe8  // '\xe8\xff'
        if (x8 == x24) // u"P\b"
        b.hi 0x800798c // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08007624: // orphan
             jmp 0x80079a8

    loc_0x0800762c: // orphan
         // CODE XREF from sym.do_list_processes @ 0x80079b4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8007644      // unlikely

    loc_0x08007638: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007644: // orphan
         x9 = [x23 + 8]           // 0xde // 222
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007668: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_70h
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x18
         0x8007674 ()             // 0x8007674(0x178000, 0x0, 0x18, 0x0)
         jmp 0x80079b8

    loc_0x08007680: // orphan
         // CODE XREF from sym.do_list_processes @ 0x80079c4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8007698      // unlikely

    loc_0x0800768c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007698: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080076b8: // orphan
         if x0 jmp 0x800798c      // unlikely

    loc_0x080076bc: // orphan
         x22 = [var_sp_8h]        // 0x4 // 4
         x8 = x22 >> 0xd
         if !x8 jmp 0x8007948     // unlikely

    loc_0x080076c8: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = 0xdc0               // '\xc0\r'
         0x80076d0 ()             // 0x80076d0(0x0, 0xdc0, 0x0, 0x0)
         if !x0 jmp 0x8007960     // likely

    loc_0x080076d8: // orphan
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80076dc ()             // 0x80076dc(0x0, 0x0, 0x0, 0x0)
         x8 = 0x8007000
         x8 = x8 + 0
         x9 = [x8 + 0x550]        // 0xcf // 207
         x10 = x9 - 0x550
         if (x10 == x8)           // u"P\b" // u"P\b"
         b.eq 0x8007754           // unlikely

    loc_0x080076f8: // orphan
         x10 = [var_sp_8h]        // 0x4 // 4
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = 0x1                // u"P\b"
         x10 = x10 << 3
         jmp 0x800771c

    loc_0x0800770c: // orphan
         // CODE XREF from sym.do_list_processes @ 0x8007750
         x9 = [x9]                // 0xd0 // 208
         x12 = x9 - 0x550
         if (x12 == x8)           // u"P\b"
         b.eq 0x8007758           // unlikely

    loc_0x0800771c: // orphan
         // CODE XREF from sym.do_list_processes @ 0x8007708
         w12 = [x9 + 0xe0]        // 0xd0 // 208
         tbnz w12,0x1f,0x800770c  // likely

    loc_0x08007724: // orphan
         if (x10 == x12)          // u"P\b" // u"P\b"
         b.ls 0x800770c           // likely

    loc_0x0800772c: // orphan
         x13 = x12 >> 3
         if (x22 == x13)          // u"P\b" // u"P\b"
         b.ls 0x80079a0           // likely

    loc_0x08007738: // orphan
         w14 = (byte) [x20 + x13] // 0xd4000000db // 910533066971
         w12 = w12 & 7
         x21 = x21 + 1            // u"P\b"
         w12 = w11 << w12
         w12 = w14 | w12
         [x20 + x13] = (byte) w12
         jmp 0x800770c

    loc_0x08007754: // orphan
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007758: // orphan
         0x8007758 ()             // 0x8007758(0x0, 0x0, 0x0, 0x0)
         x22 = [var_sp_8h]        // 0x4 // 4
         x8 = x22 >> 0x1f
         if x8 jmp 0x8007994      // likely

    loc_0x08007768: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         w2 = 0x1                 // u"P\b"
         x25 = [sp]               // 0x4 // 4
         0x8007778 ()             // 0x8007778(0x0, 0x0, 0x1, 0x0)
         w8 = (byte) [x23 + 0x46] // 0xde // 222
         tbnz w8,5,0x8007790      // likely

    loc_0x08007784: // orphan
         x9 = [x23]               // 0xde // 222
         x8 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x8007798    // likely

    loc_0x08007790: // orphan
         x8 = x25 << 8
         x8 = x25 & x8,asr 8

    loc_0x08007798: // orphan
         x9 = 0x80                // '\x80'
         x9 = x9 - x22
         if (x9 == x8)            // u"P\b"
         b.lo 0x8007840           // unlikely

    loc_0x080077a8: // orphan
         jmp 0x80079c8

    loc_0x080077b0: // orphan
         // CODE XREF from sym.do_list_processes @ 0x80079d4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x80077c8      // unlikely

    loc_0x080077bc: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080077c8: // orphan
         x9 = [x23 + 8]           // 0xde // 222
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080077ec: // orphan
         x0 = x25 & 0xff7fffffffffffff // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80077f8 ()             // 0x80077f8(0x0, 0x0, 0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80079d8

    loc_0x08007808: // orphan
         // CODE XREF from sym.do_list_processes @ 0x80079e4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8007820      // unlikely

    loc_0x08007814: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007820: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007840: // orphan
         if x22 jmp 0x8007904     // unlikely

    loc_0x08007844: // orphan
         w8 = (byte) [x23 + 0x46] // 0xde // 222
         [var_0h_2] = x21
         tbnz w8,5,0x800785c      // likely

    loc_0x08007850: // orphan
         x9 = [x23]               // 0xde // 222
         x8 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x8007864    // likely

    loc_0x0800785c: // orphan
         x8 = x19 << 8
         x8 = x19 & x8,asr 8

    loc_0x08007864: // orphan
         if (x8 == x24)           // u"P\b" // u"P\b"
         b.hi 0x8007904           // unlikely

    loc_0x0800786c: // orphan
         jmp 0x8007a08

    loc_0x08007874: // orphan
         // CODE XREF from sym.do_list_processes @ 0x8007a14
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x800788c      // unlikely

    loc_0x08007880: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800788c: // orphan
         x9 = [x23 + 8]           // 0xde // 222
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080078b0: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         w2 = 0x18
         0x80078bc ()             // "V" // 0x80078bc(0x0, 0x178000, 0x18, 0x0)
         jmp 0x8007a18

    loc_0x080078c8: // orphan
         // CODE XREF from sym.do_list_processes @ 0x8007a24
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x80078e0      // unlikely

    loc_0x080078d4: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080078e0: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007900: // orphan
         if !x0 jmp 0x8007974     // likely

    loc_0x08007904: // orphan
         w19 = ~0xd

    loc_0x08007908: // orphan
         // CODE XREF from sym.do_list_processes @ 0x8007988
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800790c ()             // 0x800790c(0x0, 0x0, 0x0, 0x0)

    loc_0x08007910: // orphan
         // CODE XREFS from sym.do_list_processes @ 0x800795c, 0x8007970, 0x8007990
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)            // u"P\b" // u"P\b"
         b.ne 0x80079a4           // likely

    loc_0x08007924: // orphan
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x29, 2) = 3
         x25 = [var_30h]          // 0x4 // 4
         sp = arg_70h
         hint 0x1d
         

    loc_0x08007948: // orphan
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x8007954 ()             // 0x8007954(0x8007000, 0x0, 0x0, 0x0)
         w19 = ~0x15
         jmp 0x8007910

    loc_0x08007960: // orphan
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         0x8007968 ()             // 0x8007968(0x8007000, 0x0, 0x0, 0x0)
         w19 = ~0xb
         jmp 0x8007910

    loc_0x08007974: // orphan
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x8007980 ()             // 0x8007980(0x8007000, 0x0, 0x0, 0x0)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8007908

    loc_0x0800798c: // orphan
         w19 = ~0xd
         jmp 0x8007910

    loc_0x08007994: // orphan
         w19 = ~0xd
         brk 0x800

    loc_0x080079a0: // orphan
         brk 0x1

    loc_0x080079a4: // orphan
         0x80079a4 ()             // 0x80079a4(0x0, 0x0, 0x0, 0x0)

    loc_0x080079a8: // orphan
         // CODE XREF from sym.do_list_processes @ 0x8007624
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8007668   // unlikely

    loc_0x080079b4: // orphan
         jmp 0x800762c

    loc_0x080079b8: // orphan
         // CODE XREF from sym.do_list_processes @ 0x8007678
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x80076b8   // unlikely

    loc_0x080079c4: // orphan
         jmp 0x8007680

    loc_0x080079c8: // orphan
         // CODE XREF from sym.do_list_processes @ 0x80077a8
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x80077ec   // unlikely

    loc_0x080079d4: // orphan
         jmp 0x80077b0

    loc_0x080079d8: // orphan
         // CODE XREF from sym.do_list_processes @ 0x8007800
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8007840   // unlikely

    loc_0x080079e4: // orphan
         jmp 0x8007808

    loc_0x08007a08: // orphan
         // CODE XREF from sym.do_list_processes @ 0x800786c
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x80078b0   // unlikely

    loc_0x08007a14: // orphan
         jmp 0x8007874

    loc_0x08007a18: // orphan
         // CODE XREF from sym.do_list_processes @ 0x80078c0
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8007900   // unlikely

    loc_0x08007a24: // orphan
         jmp 0x80078c8

}

/* ===== 0x08010898 ===== */
int sym.do_hwbp_get_records (int esi, int edx) {
    loc_0x8010898:
        hint 0x19
        sp = sp - 0x60
        [sp, 0x20] = (x29,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        [sp, 8] = (xzr,2)
        [sp] = xzr
        if !x0 jmp 0x8010c80 // likely
            
    loc_0x8010c80:
        w21 = ~0xd
         // do {
    loc_0x8010c84:
        // CODE XREFS from sym.do_hwbp_get_records @ 0x8010c34, 0x8010c48, 0x8010d58
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9) // u"P\b" // u"P\b"
        b.ne 0x8010d74 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80108cc
    loc_0x80108dc:
        x9 = [x22]    // 0xdd // 221
        x8 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        tbz w9,0x1a,0x80108f0 // likely
            
    loc_0x80108f0:
        x23 = xzr | 0x7fffff0000
        x23 = 0xffe8  // '\xe8\xff'
        if (x8 == x23) // u"P\b"
        b.hi 0x8010c80 // unlikely
    loc_0x8010900:
        jmp 0x8010d78
         // do {
    loc_0x8010d78:
        // CODE XREF from sym.do_hwbp_get_records @ 0x8010900
        x8 = 0x8010000
        x8 = [x8]     // 0xcf // 207
        tbnz w8,0x1d,0x8010944 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08010908: // orphan
             // CODE XREF from sym.do_hwbp_get_records @ 0x8010d84
             mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w9 = w8 & 0x80
             if w9 jmp 0x8010920      // unlikely

    loc_0x08010914: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010920: // orphan
         x9 = [x22 + 8]           // 0xdd // 221
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010944: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_60h
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x18
         0x8010950 ()             // 0x8010950(0x178000, 0x0, 0x18, 0x0)
         jmp 0x8010d88

    loc_0x0801095c: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010d94
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8010974      // unlikely

    loc_0x08010968: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010974: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010994: // orphan
         if x0 jmp 0x8010c80      // unlikely

    loc_0x08010998: // orphan
         x8 = [var_10h]           // 0x4 // 4
         w21 = ~0x15
         if !x8 jmp 0x8010c84     // likely

    loc_0x080109a4: // orphan
         w8 = [sp]                // 0x4 // 4
         if (w8 == 0xf)           // u"P\b"
         b.hi 0x8010c84           // likely

    loc_0x080109b0: // orphan
         w8 = [var_4h]            // 4
         if (w8 == 0xff)          // u"P\b"
         b.hi 0x8010c84           // unlikely

    loc_0x080109bc: // orphan
         w8 = [var_sp_8h]         // 0x4 // 4
         if !w8 jmp 0x8010c84     // unlikely

    loc_0x080109c4: // orphan
         if (w8 == 0x100)         // u"P\b"
         b.hi 0x8010c84           // unlikely

    loc_0x080109cc: // orphan
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         0x80109d4 ()             // 0x80109d4(0x8010000, 0x0, 0x0, 0x0)
         x24 = 0x8010000
         x8 = [x24]               // 0xdf // 223
         if !x8 jmp 0x8010c38     // unlikely

    loc_0x080109e4: // orphan
         w9 = [sp]                // 0x4 // 4
         w10 = 0x5030             // '0P'
         w10 = 0x3
         umaddl x10,w9,w10, x8
         x10 = [x10 + 0x38]       // 0xd1 // 209
         if !x10 jmp 0x8010c38    // unlikely

    loc_0x080109fc: // orphan
         w10 = 0x5030             // '0P'
         w10 = 0x3
         umaddl x8,w9,w10, x8
         w9 = [var_4h]            // 4
         w10 = 0x100
         w8 = [x8 + 0x40]         // 0xcf // 207
         if (w8 == 0x100)         // u"P\b" // u"P\b"
         csel w8,w8,w10, lo
         w8 = w8 - w9
         b.ls 0x8010c4c           // unlikely

    loc_0x08010a24: // orphan
         w9 = [var_sp_8h]         // 0x4 // 4
         w1 = 0xcc0               // '\xc0\f'
         w2 = ~0
         if (w9 == w8)            // u"P\b" // u"P\b"
         csel w8,w9,w8, lo
         w9 = 0x350
         umull x21,w8,w9
         [var_0h_2] = w8
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8010a48 ()             // 0x8010a48(0x0, 0xcc0, -1, 0x0)
         if !x0 jmp 0x8010d5c     // likely

    loc_0x08010a50: // orphan
         (w9, 2) = 3
         x8 = [x24]               // 0xdf // 223
         w10 = 0x5030             // '0P'
         w10 = 0x3
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         umaddl x8,w9,w10, x8
         w9 = 0x350
         umaddl x8,w11,w9, x8
         x1 = x8 + 0x50           // int64_t arg_60h
         0x8010a78 ()             // 0x8010a78(0x0, 0x4de4759110, 0x0, 0x0)
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         0x8010a84 ()             // 0x8010a84(0x8010000, 0x4de4759110, 0x0, 0x0)
         x8 = x21 >> 0x1f
         if x8 jmp 0x8010d6c      // unlikely

    loc_0x08010a90: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         w2 = 0x1                 // u"P\b"
         x24 = [var_10h]          // 4
         0x8010aa0 ()             // 0x8010aa0(0x0, 0x0, 0x1, 0x0)
         w8 = (byte) [x22 + 0x46] // 0xdd // 221
         tbnz w8,5,0x8010ab8      // likely

    loc_0x08010aac: // orphan
         x9 = [x22]               // 0xdd // 221
         x8 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x8010ac0    // likely

    loc_0x08010ab8: // orphan
         x8 = x24 << 8
         x8 = x24 & x8,asr 8

    loc_0x08010ac0: // orphan
         x9 = 0x80                // '\x80'
         x9 = x9 - x21
         if (x9 == x8)            // u"P\b"
         b.lo 0x8010b68           // unlikely

    loc_0x08010ad0: // orphan
         jmp 0x8010dc8

    loc_0x08010ad8: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010dd4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8010af0      // unlikely

    loc_0x08010ae4: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010af0: // orphan
         x9 = [x22 + 8]           // 0xdd // 221
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010b14: // orphan
         x0 = x24 & 0xff7fffffffffffff // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8010b20 ()             // 0x8010b20(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010dd8

    loc_0x08010b30: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010de4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8010b48      // unlikely

    loc_0x08010b3c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010b48: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010b68: // orphan
         if x21 jmp 0x8010c28     // unlikely

    loc_0x08010b6c: // orphan
         w8 = (byte) [x22 + 0x46] // 0xdd // 221
         tbnz w8,5,0x8010b80      // likely

    loc_0x08010b74: // orphan
         x9 = [x22]               // 0xdd // 221
         x8 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x8010b88    // likely

    loc_0x08010b80: // orphan
         x8 = x19 << 8
         x8 = x19 & x8,asr 8

    loc_0x08010b88: // orphan
         if (x8 == x23)           // u"P\b" // u"P\b"
         b.hi 0x8010c28           // unlikely

    loc_0x08010b90: // orphan
         jmp 0x8010e08

    loc_0x08010b98: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010e14
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8010bb0      // unlikely

    loc_0x08010ba4: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010bb0: // orphan
         x9 = [x22 + 8]           // 0xdd // 221
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010bd4: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         w2 = 0x18
         0x8010be0 ()             // 0x8010be0(0x0, 0x178000, 0x18, 0x0)
         jmp 0x8010e18

    loc_0x08010bec: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010e24
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8010c04      // unlikely

    loc_0x08010bf8: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010c04: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010c24: // orphan
         if !x0 jmp 0x8010d64     // likely

    loc_0x08010c28: // orphan
         w21 = ~0xd

    loc_0x08010c2c: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010d68
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8010c30 ()             // 0x8010c30(0x0, 0x0, 0x0, 0x0)
         jmp 0x8010c84

    loc_0x08010c38: // orphan
         w21 = ~0x1

    loc_0x08010c3c: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010d60
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         0x8010c44 ()             // 0x8010c44(0x8010000, 0x0, 0x0, 0x0)
         jmp 0x8010c84

    loc_0x08010c4c: // orphan
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         [var_0h_2] = wzr
         0x8010c58 ()             // 0x8010c58(0x8010000, 0x0, 0x0, 0x0)
         w8 = (byte) [x22 + 0x46] // 0xdd // 221
         tbnz w8,5,0x8010c70      // likely

    loc_0x08010c64: // orphan
         x9 = [x22]               // 0xdd // 221
         x8 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x8010c78    // likely

    loc_0x08010c70: // orphan
         x8 = x19 << 8
         x8 = x19 & x8,asr 8

    loc_0x08010c78: // orphan
         if (x8 == x23)           // u"P\b" // u"P\b"
         b.ls 0x8010cb8           // likely

    loc_0x08010c98: // orphan
         w0 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x29, 2) = 3
         sp = arg_60h
         hint 0x1d
         

    loc_0x08010cb8: // orphan
         jmp 0x8010da8

    loc_0x08010cc0: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010db4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8010cd8      // unlikely

    loc_0x08010ccc: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010cd8: // orphan
         x9 = [x22 + 8]           // 0xdd // 221
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010cfc: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         w2 = 0x18
         0x8010d08 ()             // "+" // 0x8010d08(0x0, 0x178000, 0x18, 0x0)
         jmp 0x8010db8

    loc_0x08010d14: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010dc4
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8010d2c      // unlikely

    loc_0x08010d20: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010d2c: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010d4c: // orphan
         if (x0 == 0)             // u"P\b" // u"P\b"
         w8 = ~0xd
         csel w21,wzr,w8, eq
         jmp 0x8010c84

    loc_0x08010d5c: // orphan
         w21 = ~0xb
         jmp 0x8010c3c

    loc_0x08010d64: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010c2c

    loc_0x08010d6c: // orphan
         brk 0x800

    loc_0x08010d74: // orphan
         0x8010d74 ()             // 0x8010d74(0x0, 0x0, 0x0, 0x0)

    loc_0x08010d84: // orphan
         jmp 0x8010908

    loc_0x08010d88: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010954
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8010994   // unlikely

    loc_0x08010d94: // orphan
         jmp 0x801095c

    loc_0x08010da8: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010cb8
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8010cfc   // unlikely

    loc_0x08010db4: // orphan
         jmp 0x8010cc0

    loc_0x08010db8: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010d0c
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8010d4c   // unlikely

    loc_0x08010dc4: // orphan
         jmp 0x8010d14

    loc_0x08010dc8: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010ad0
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8010b14   // unlikely

    loc_0x08010dd4: // orphan
         jmp 0x8010ad8

    loc_0x08010dd8: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010b28
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8010b68   // unlikely

    loc_0x08010de4: // orphan
         jmp 0x8010b30

    loc_0x08010e08: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010b90
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8010bd4   // unlikely

    loc_0x08010e14: // orphan
         jmp 0x8010b98

    loc_0x08010e18: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x8010be4
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8010c24   // unlikely

    loc_0x08010e24: // orphan
         jmp 0x8010bec

}

/* ===== 0x08010e3c ===== */
int sym.do_hwbp_set_record (int esi, int edx) {
    loc_0x8010e3c:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x28
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x370
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x360
        [x29 = x8
        0x8010e70 ()  // 0x8010e70(0x177c60, 0x0, 0x360, 0x0)
        if !x19 jmp 0x8010fd0 // likely
            
    loc_0x8010fd0:
        w19 = ~0xd
        jmp 0x8010ff8
         // do {
    loc_0x8010ff8:
        // CODE XREF from sym.do_hwbp_set_record @ 0x8010fd4
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        // XREFS(27)
        ldur x9,[x29,-8]
        if (x8 == x9) // u"P\b" // u"P\b"
        b.ne 0x8011028 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8010e78
    loc_0x8010e84:
        x10 = [x8]    // 0xcf // 207
        x9 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        tbz w10,0x1a,0x8010e98 // likely
            
    loc_0x8010e98:
        x10 = xzr | 0x7fffff0000
        x10 = 0xfca0  // '\xa0\xfc'
        if (x9 == x10) // u"P\b"
        b.hi 0x8010fd0 // unlikely
    loc_0x8010ea8:
        jmp 0x801102c
         // do {
    loc_0x801102c:
        // CODE XREF from sym.do_hwbp_set_record @ 0x8010ea8
        x9 = 0x8011000
        x9 = [x9]     // 0xd0 // 208
        tbnz w9,0x1d,0x8010eec // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08010eb0: // orphan
             // CODE XREF from sym.do_hwbp_set_record @ 0x8011038
             mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w10 = w9 & 0x80
             if w10 jmp 0x8010ec8     // unlikely

    loc_0x08010ebc: // orphan
         
         w10 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010ec8: // orphan
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010eec: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_370h
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x360
         0x8010ef8 ()             // "P" // 0x8010ef8(0x178000, 0x0, 0x360, 0x0)
         jmp 0x801103c

    loc_0x08010f04: // orphan
         // CODE XREF from sym.do_hwbp_set_record @ 0x8011048
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8010f1c      // unlikely

    loc_0x08010f10: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010f1c: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010f3c: // orphan
         if x0 jmp 0x8010fd0      // unlikely

    loc_0x08010f40: // orphan
         w8 = [sp]                // 0x4 // 4
         w19 = ~0x15
         if (w8 == 0xf)           // u"P\b"
         b.hi 0x8010ff8           // likely

    loc_0x08010f50: // orphan
         w8 = [var_4h]            // 4
         if (w8 == 0xff)          // u"P\b"
         b.hi 0x8010ff8           // unlikely

    loc_0x08010f5c: // orphan
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         0x8010f64 ()             // 0x8010f64(0x8010000, 0x0, 0x0, 0x0)
         x8 = 0x8010000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x8010fd8     // unlikely

    loc_0x08010f74: // orphan
         w9 = [sp]                // 0x4 // 4
         w10 = 0x5030             // '0P'
         w10 = 0x3
         umaddl x10,w9,w10, x8
         x10 = [x10 + 0x38]       // 0xd1 // 209
         if !x10 jmp 0x8010fd8    // unlikely

    loc_0x08010f8c: // orphan
         w10 = 0x5030             // '0P'
         w11 = [var_4h]           // 4
         w10 = 0x3
         w2 = 0x350
         umaddl x20,w9,w10, x8
         w8 = 0x350
         x9 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         umaddl x8,w11,w8, x20
         x1 = var_10h_2           // int64_t arg_370h
         x0 = x8 + 0x50           // int64_t arg1
         0x8010fb4 ()             // 0x8010fb4(0x50, 0x178010, 0x350, 0x0)
         w9 = [x20 + 0x40]!       // 0xdb // 219
         w8 = [var_4h]            // 4
         if (w9 == w8)            // u"P\b" // u"P\b"
         b.ls 0x8010fe0           // unlikely

    loc_0x08010fc8: // orphan
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010fec

    loc_0x08010fd8: // orphan
         w19 = ~0x1
         jmp 0x8010fec

    loc_0x08010fe0: // orphan
         w8 = w8 + 1              // u"P\b"
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20] = w8

    loc_0x08010fec: // orphan
         // CODE XREFS from sym.do_hwbp_set_record @ 0x8010fcc, 0x8010fdc
         x0 = 0x8010000
         x0 = x0 + 0              // int64_t arg1
         0x8010ff4 ()             // 0x8010ff4(0x8010000, 0x0, 0x0, 0x0)

    loc_0x0801100c: // orphan
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sp = arg_370h
         (x20, 2) = 3
         x28 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08011028: // orphan
         0x8011028 ()             // "\t" // 0x8011028(0x0, 0x0, 0x0, 0x0)

    loc_0x08011038: // orphan
         jmp 0x8010eb0

    loc_0x0801103c: // orphan
         // CODE XREF from sym.do_hwbp_set_record @ 0x8010efc
         x8 = 0x8011000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8010f3c   // likely

    loc_0x08011048: // orphan
         jmp 0x8010f04

}

/* ===== 0x080259d0 ===== */
int sym.initEvent (int esi, int edx) {
    loc_0x80259d0:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x10] = (x29,2)
        [var_20h] = x23
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = var_10h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x8025000
        x8 = [x8 + 0x638] // 0xcf // 207
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x21 = 0x8025000
        [var_8h] = x8
        w8 = (byte) [x20] // 0xdb // 219
        tbnz w8,0,0x8025a78 // unlikely
            
    loc_0x8025a78:
        w8 = (byte) [x21] // 0xdc // 220
        tbz w8,0,0x8025a88 // unlikely
            
    loc_0x8025a88:
        x20 = 0x8025000
        x21 = 0x8025000
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        [sp] = xzr
        [x20] = wzr   // arg1 // "*\r"
        [x21] = wzr   // arg1
        tbnz w9,5,0x8025ab4 // likely
            
    loc_0x8025ab4:
        x9 = x19 << 8
        x9 = x19 & x9,asr 8
         // do {
    loc_0x8025abc:
        x10 = xzr | 0x7ffffffff8
        if (x9 == x10)
        b.hi 0x8025a80 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8025a0c
    loc_0x8025a4c:
        x8 = [x22]    // 0xdd // 221
        if !x8 jmp 0x8025a68 // unlikely
            
    loc_0x8025a68:
        w8 = 0x1
        [x21] = (byte) w8
         // do {
    loc_0x8025a70:
        w8 = 0x1
        [x20] = (byte) w8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8025a54
    loc_0x8025a5c:
        x8 = 0x8025000
        x8 = [x8]     // 0xcf // 207
        if x8 jmp 0x8025a70 // likely
        }
        return eax;
    loc_0x08025ac8: // orphan
             jmp 0x8025c7c

    loc_0x08025ad0: // orphan
         // CODE XREF from sym.initEvent @ 0x8025c88
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w9 & 0x80
         if w10 jmp 0x8025ae8     // unlikely

    loc_0x08025adc: // orphan
         
         w10 = 0x60               // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08025ae8: // orphan
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08025b0c: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_50h
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x8
         0x8025b18 ()             // "\" // 0x8025b18(0x178000, 0x0, 0x8, 0x0)
         jmp 0x8025c8c

    loc_0x08025b24: // orphan
         // CODE XREF from sym.initEvent @ 0x8025c98
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8025b3c      // unlikely

    loc_0x08025b30: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08025b3c: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08025b5c: // orphan
         if x0 jmp 0x8025a80      // unlikely

    loc_0x08025b60: // orphan
         w8 = [sp]                // 0x4 // 4
         w0 = 0x2
         if (w8 == 1)
         b.lt 0x8025c48           // likely

    loc_0x08025b70: // orphan
         w9 = [var_4h]            // 4
         if (w9 == 1)
         b.lt 0x8025c48           // likely

    loc_0x08025b7c: // orphan
         x10 = 0x8025000
         x10 = [x10]              // 0xd1 // 209
         x11 = [x10]              // 0xd1 // 209
         if (x11 == x10)
         b.eq 0x8025c2c           // likely

    loc_0x08025b90: // orphan
         x12 = 0x8025000
         jmp 0x8025ba4

    loc_0x08025b98: // orphan
         x11 = [x11]              // 0xd2 // 210
         if (x11 == x10)
         b.eq 0x8025c2c           // unlikely

    loc_0x08025ba4: // orphan
         // CODE XREF from sym.initEvent @ 0x8025b94
         x13 = x11 - 0x5e0
         [x12] = x13
         b.eq 0x8025b98           // unlikely

    loc_0x08025bb0: // orphan
         x13 = x11 - 0x488
         x13 = [x13]              // 0xd4 // 212
         if !x13 jmp 0x8025b98    // unlikely

    loc_0x08025bbc: // orphan
         x14 = x11 - 0x5b8
         x14 = [x14]              // 0xd5 // 213
         tbz w14,3,0x8025b98      // unlikely

    loc_0x08025bc8: // orphan
         x14 = x11 - 0x548
         x15 = [x14]              // 0xd5 // 213
         tbz x15,0x35,0x8025b98   // unlikely

    loc_0x08025bd4: // orphan
         x14 = [x14]              // 0xd5 // 213
         tbz x14,0x36,0x8025b98   // unlikely

    loc_0x08025bdc: // orphan
         w14 = [x13 + 0x560]      // 0xd4 // 212
         if (w14 == 1)
         b.lt 0x8025b98           // likely

    loc_0x08025be8: // orphan
         w14 = [x13 + 0x500]      // 0xd4 // 212
         if (w14 == 1)
         b.lt 0x8025b98           // likely

    loc_0x08025bf4: // orphan
         w13 = [x13 + 0x518]      // 0xd4 // 212
         if (w13 == 1)
         b.lt 0x8025b98           // likely

    loc_0x08025c00: // orphan
         if (w8 == w9)
         w10 = w14 + 1
         csel w11,w8,w9, lt
         csel w8,w8,w9, gt
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sdiv w10,w10,w11
         w11 = w13 + 1
         sdiv w8,w11,w8
         [x20] = w10
         [x21] = w8
         jmp 0x8025c48

    loc_0x08025c2c: // orphan
         w8 = [x21]               // 0xdc // 220
         w9 = [x20]               // 0xdb // 219
         if (w8 == 0)
         w8 = 0x3
         ccmp w9,0,4, ne
         w9 = 0xa
         csel w0,w9,w8, ne

    loc_0x08025c48: // orphan
         // CODE XREFS from sym.initEvent @ 0x8025a84, 0x8025c28
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         x9 = [var_8h]            // 0x4 // 4
         if (x8 == x9)
         b.ne 0x8025c78           // likely

    loc_0x08025c5c: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         x23 = [var_20h]          // 0x4 // 4
         sp = arg_50h
         hint 0x1d
         

    loc_0x08025c78: // orphan
         0x8025c78 ()             // "\t" // 0x8025c78(0x0, 0x0, 0x0, 0x0)

    loc_0x08025c7c: // orphan
         // CODE XREF from sym.initEvent @ 0x8025ac8
         x9 = 0x8025000
         x9 = [x9]                // 0xd0 // 208
         tbnz w9,0x1d,0x8025b0c   // unlikely

    loc_0x08025c88: // orphan
         jmp 0x8025ad0

    loc_0x08025c8c: // orphan
         // CODE XREF from sym.initEvent @ 0x8025b1c
         x8 = 0x8025000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8025b5c   // unlikely

    loc_0x08025c98: // orphan
         jmp 0x8025b24

}

/* ===== 0x0801050c ===== */
int sym.do_hwbp_remove (int esi, int edx) {
    loc_0x801050c:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x24,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8010000
        x0 = x0 + 0
        0x801052c ()  // 0x801052c(0x8010000, 0x0, 0x0, 0x0)
        x23 = 0x8010000
        x8 = [x23]    // 0xde // 222
        if !x8 jmp 0x8010598 // unlikely
            
    loc_0x8010598:
        x8 = 0x8010000
        x19 = [x8]    // 0xcf // 207
        if x19 jmp 0x80105cc // likely
            
    loc_0x80105cc:
        w2 = 0x320
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x35     // '5'
        0x80105dc ()  // 0x80105dc(0x0, 0x0, 0x350320, 0x0)
         // do {
    loc_0x80105e0:
        // CODE XREF from sym.do_hwbp_remove @ 0x80105a4
        x0 = 0x8010000
        x0 = x0 + 0
        0x80105e8 ()  // 0x80105e8(0x8010000, 0x0, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08010604
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801053c
    loc_0x8010544:
        x8 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x24 = 0x8010000
        x20 = 0x8010000
        x20 = x20 + 0
        x21 = 0x8010000
        x21 = x21 + 0
         // do {
    loc_0x801055c:
        // CODE XREF from sym.do_hwbp_remove @ 0x8010594
        x2 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = [x24]    // 0xdf // 223
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8010568 ()  // 0x8010568(0x0, 0x0, 0x0, 0x0)
        w8 = [x24]    // 0xdf // 223
        x22 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w8 == w22)
        b.ls 0x80105a8 // likely
         // } while (?);
        }
        return eax;
    loc_0x801057c:
        w0 = w22      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w3 = 0x1
        0x801058c ()  // 0x801058c(0x0, 0x0, 0x0, 0x1)
        x8 = x22 + 1
        jmp 0x801055c
    loc_0x080105a8: // orphan
             x0 = 0x8010000
             x0 = x0 + 0
             w1 = 0x1
             0x80105b4 ()             // 0x80105b4(0x8010000, 0x1, 0x0, 0x0)
             x0 = 0x8010000
             x0 = x0 + 0
             w1 = 0x2
             0x80105c4 ()             // 0x80105c4(0x8010000, 0x2, 0x0, 0x0)
             [x23] = xzr

}

/* ===== 0x08008ad8 ===== */
int sym.do_get_thread_pacia_key (int esi, int edx) {
    loc_0x8008ad8:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x30] = (x29,2)
        [sp, 0x40] = (x20,2)
        x29 = var_30h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        mrs x20,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x29 = x8
        w8 = (byte) [x20 + 0x46] // 0xdb // 219
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        tbnz w8,5,0x8008b1c // likely
            
    loc_0x8008b1c:
        x8 = x19 << 8
        x8 = x19 & x8,asr 8
         // do {
    loc_0x8008b24:
        x9 = xzr | 0x7fffffffe0
        if (x8 == x9)
        b.hi 0x8008c14 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08008b30: // orphan
             jmp 0x8008cf0

    loc_0x08008b38: // orphan
         // CODE XREF from sym.do_get_thread_pacia_key @ 0x8008cfc
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8008b50      // unlikely

    loc_0x08008b44: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008b50: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008b74: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_50h
         x0 = var_sp_8h           // int64_t arg1
         w2 = 0x20
         0x8008b80 ()             // "_" // 0x8008b80(0x178008, 0x0, 0x20, 0x0)
         jmp 0x8008d00

    loc_0x08008b8c: // orphan
         // CODE XREF from sym.do_get_thread_pacia_key @ 0x8008d0c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8008ba4      // unlikely

    loc_0x08008b98: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008ba4: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008bc4: // orphan
         if x0 jmp 0x8008c14      // unlikely

    loc_0x08008bc8: // orphan
         w0 = [var_sp_8h]         // 0x4 // 4
         if (w0 == 1)
         b.lt 0x8008c1c           // likely

    loc_0x08008bd4: // orphan
         x8 = var_sp_8h
         x1 = x8 + 8              // int64_t arg_50h
         x2 = var_18h
         x3 = var_18h_2
         0x8008be4 ()             // 0x8008be4(0x0, 0x178010, 0x178018, 0x178020)
         if w0 jmp 0x8008cc4      // unlikely

    loc_0x08008bec: // orphan
         w8 = (byte) [x20 + 0x46] // 0xdb // 219
         tbnz w8,5,0x8008c00      // likely

    loc_0x08008bf4: // orphan
         x9 = [x20]               // 0xdb // 219
         x8 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x8008c08    // likely

    loc_0x08008c00: // orphan
         x8 = x19 << 8
         x8 = x19 & x8,asr 8

    loc_0x08008c08: // orphan
         x9 = xzr | 0x7fffffffe0
         if (x8 == x9)
         b.ls 0x8008c24           // likely

    loc_0x08008c14: // orphan
         w0 = ~0xd
         jmp 0x8008cc4

    loc_0x08008c1c: // orphan
         w0 = ~0x15
         jmp 0x8008cc4

    loc_0x08008c24: // orphan
         jmp 0x8008d20

    loc_0x08008c2c: // orphan
         // CODE XREF from sym.do_get_thread_pacia_key @ 0x8008d2c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8008c44      // unlikely

    loc_0x08008c38: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008c44: // orphan
         x9 = [x20 + 8]           // 0xdb // 219
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008c68: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = var_sp_8h           // int64_t arg_50h
         w2 = 0x20
         0x8008c74 ()             // "." // 0x8008c74(0x0, 0x178008, 0x20, 0x0)
         jmp 0x8008d30

    loc_0x08008c80: // orphan
         // CODE XREF from sym.do_get_thread_pacia_key @ 0x8008d3c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0x80
         if w9 jmp 0x8008c98      // unlikely

    loc_0x08008c8c: // orphan
         
         w9 = 0x60                // '`'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008c98: // orphan
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008cb8: // orphan
         if (x0 == 0)
         w8 = ~0xd
         csel w0,wzr,w8, eq

    loc_0x08008cc4: // orphan
         // CODE XREFS from sym.do_get_thread_pacia_key @ 0x8008c18, 0x8008c20
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x8008cec           // likely

    loc_0x08008cd8: // orphan
         (x20, 2) = 3
         (x29, 2) = 3
         sp = arg_50h
         hint 0x1d
         

    loc_0x08008cec: // orphan
         0x8008cec ()             // 0x8008cec(0x0, 0x0, 0x0, 0x0)

    loc_0x08008cf0: // orphan
         // CODE XREF from sym.do_get_thread_pacia_key @ 0x8008b30
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8008b74   // unlikely

    loc_0x08008cfc: // orphan
         jmp 0x8008b38

    loc_0x08008d00: // orphan
         // CODE XREF from sym.do_get_thread_pacia_key @ 0x8008b84
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8008bc4   // unlikely

    loc_0x08008d0c: // orphan
         jmp 0x8008b8c

    loc_0x08008d20: // orphan
         // CODE XREF from sym.do_get_thread_pacia_key @ 0x8008c24
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8008c68   // unlikely

    loc_0x08008d2c: // orphan
         jmp 0x8008c2c

    loc_0x08008d30: // orphan
         // CODE XREF from sym.do_get_thread_pacia_key @ 0x8008c78
         x8 = 0x8008000
         x8 = [x8]                // 0xcf // 207
         tbnz w8,0x1d,0x8008cb8   // unlikely

    loc_0x08008d3c: // orphan
         jmp 0x8008c80

}

/* ===== 0x080258f4 ===== */
int sym.arraylist_get (int esi, int edx) {
    loc_0x80258f4:
        x8 = [x0 + 8] // 0xc7 // 199 // arg1
        if (x8 == x1) // arg2
        b.ls 0x802590c // likely
            
    loc_0x802590c:
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x08025910
         // } else {
    loc_0x8025900:
        x8 = [x0]     // 0xc7 // 199 // arg1
        x0 = [x8 + x1,lsl 3] // 0xc8000000cf // 858993459407
        0x08025908
        }
        return eax;
}

/* ===== 0x08025994 ===== */
int sym.arraylist_destroy (int esi, int edx) {
    loc_0x8025994:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = [x0]     // 0xc7 // 199 // arg1
        if !x0 jmp 0x80259b4 // likely
            
    loc_0x80259b4:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x80259b8 ()  // 0x80259b8(0x0, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x080259c8
         // } else {
    loc_0x80259b0:
        0x80259b0 ()  // 0x80259b0(0x0, 0x0, 0x0, 0x0)
        }
        return eax;
}

/* ===== 0x08004460 ===== */
int sym.is_file_exist (int esi, int edx) {
    loc_0x8004460:
        hint 0x19
        sp = sp - 0xc0
        [sp, 0x90] = (x29,2)
        [var_a0h] = x21
        [sp, 0xb0] = (x20,2)
        x29 = var_90h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x8004000
        x8 = [x8 + 0x638] // 0xcf // 207
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x29 = x8
        x8 = [x20]    // 0xdb // 219
        if !x8 jmp 0x800450c // unlikely
            
    loc_0x800450c:
        // CODE XREF from sym.is_file_exist @ 0x8004490
        x21 = 0x8004000
        x8 = [x21]    // 0xdc // 220
        if !x8 jmp 0x800455c // unlikely
            
    loc_0x800455c:
        // CODE XREF from sym.is_file_exist @ 0x8004514
        x8 = 0x8004000
        x8 = x8 + 0
        x0 = var_8h   // int64_t arg1
        (x9, 2) = 3
        (x11, 2) = 3
        [sp, 0x68] = (x9,2)
        (x9, 2) = 3
        [sp, 0x78] = (x11,2)
        (x11, 2) = 3
        [sp, 0x48] = (x9,2)
        (x9, 2) = 3
        [sp, 0x58] = (x11,2)
        (x11, 2) = 3
        [sp, 0x28] = (x9,2)
        (x9, 2) = 3
        [sp, 0x38] = (x11,2)
        (x11, 2) = 3
        [sp, 8] = (x9,2)
        [sp, 0x18] = (x11,2)
        0x80045a8 ()  // 0x80045a8(0x178008, 0x0, 0x0, 0x0)
        tbz w0,0x1f,0x8004644 // likely
            
    loc_0x8004644:
        // CODE XREF from sym.is_file_exist @ 0x80045ac
        x8 = [var_30h] // 0x4 // 4
        x0 = var_8h   // int64_t arg1
        [x21] = x8
        0x8004650 ()  // 0x8004650(0x178008, 0x0, 0x0, 0x0)
        x1 = [x21]    // 0xdc // 220
        if x1 jmp 0x800466c // likely
            
    loc_0x800466c:
        // CODE XREF from sym.is_file_exist @ 0x8004658
        x0 = 0x8004000
        x0 = x0 + 0   // int64_t arg1
        0x8004674 ()  // 0x8004674(0x8004000, 0x0, 0x0, 0x0)
        x8 = [x21]    // 0xdc // 220
        jmp 0x8004518
    loc_0x08004494: // orphan
             // CODE XREF from sym.is_file_exist @ 0x800452c
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             ldur w16,[x8,-4]         // 0xcf // 207
             w17 = 0xd722             // '\"\xd7'
             w17 = 0x8d6b             // 'k\x8d'
             if (w16 == w17)
             b.eq 0x80044b8           // unlikely

    loc_0x080044b4: // orphan
         brk 0x8228

    loc_0x080044b8: // orphan
         // CODE XREF from sym.is_file_exist @ 0x80044b0
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp] = x8
         if !x8 jmp 0x8004618     // likely

    loc_0x080044cc: // orphan
         if (x8 != 1)
         b.hi 0x8004618           // unlikely

    loc_0x080044d4: // orphan
         x19 = 0x8004000
         x8 = [x19]               // 0xda // 218
         if !x8 jmp 0x8004534     // unlikely

    loc_0x080044e0: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8004554
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xa300
         w17 = 0xb89d             // '\x9d\xb8'
         if (w16 == w17)
         b.eq 0x8004500           // unlikely

    loc_0x080044fc: // orphan
         brk 0x8228

    loc_0x08004500: // orphan
         // CODE XREF from sym.is_file_exist @ 0x80044f8
         blr x8                   // " " // xzr(0x0, 0x0, 0x0, 0x0)

    loc_0x08004504: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8004558
         w0 = 0x1
         jmp 0x8004618

    loc_0x08004518: // orphan
         // CODE XREF from sym.is_file_exist @ 0x800467c
         x0 = 0x8004000
         x0 = x0 + 0
         blr x8                   // xzr(0x8004000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20] = x0
         if x0 jmp 0x8004494      // likely

    loc_0x08004530: // orphan
         jmp 0x8004618

    loc_0x08004534: // orphan
         // CODE XREF from sym.is_file_exist @ 0x80044dc
         x20 = 0x8004000
         x8 = [x20]               // 0xdb // 219
         if !x8 jmp 0x80045bc     // unlikely

    loc_0x08004540: // orphan
         // CODE XREF from sym.is_file_exist @ 0x80046b8
         x0 = 0x8004000
         x0 = x0 + 0
         blr x8                   // xzr(0x8004000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19] = x0
         if x0 jmp 0x80044e0      // likely

    loc_0x08004558: // orphan
         jmp 0x8004504

    loc_0x080045b0: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8004668
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20] = xzr
         jmp 0x8004618

    loc_0x080045bc: // orphan
         // CODE XREF from sym.is_file_exist @ 0x800453c
         x8 = 0x8004000
         x8 = x8 + 0
         x0 = var_8h              // int64_t arg1
         (x9, 2) = 3
         (x11, 2) = 3
         [sp, 0x68] = (x9,2)
         (x9, 2) = 3
         [sp, 0x78] = (x11,2)
         (x11, 2) = 3
         [sp, 0x48] = (x9,2)
         (x9, 2) = 3
         [sp, 0x58] = (x11,2)
         (x11, 2) = 3
         [sp, 0x28] = (x9,2)
         (x9, 2) = 3
         [sp, 0x38] = (x11,2)
         (x11, 2) = 3
         [sp, 8] = (x9,2)
         [sp, 0x18] = (x11,2)
         0x8004608 ()             // 0x8004608(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x8004680    // likely

    loc_0x08004610: // orphan
         // CODE XREF from sym.is_file_exist @ 0x80046a4
         w0 = 0x1
         [x19] = xzr

    loc_0x08004618: // orphan
         // CODE XREFS from sym.is_file_exist @ 0x80044c8, 0x80044d0, 0x8004508, 0x8004530, 0x80045b8
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x80046bc           // likely

    loc_0x0800462c: // orphan
         (x20, 2) = 3
         (x29, 2) = 3
         x21 = [var_a0h]          // 0x4 // 4
         sp = arg_c0h
         hint 0x1d
         

    loc_0x0800465c: // orphan
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004664 ()             // 0x8004664(0x8004000, 0x0, 0x0, 0x0)
         jmp 0x80045b0

    loc_0x08004680: // orphan
         // CODE XREF from sym.is_file_exist @ 0x800460c
         x8 = [var_30h]           // 0x4 // 4
         x0 = var_8h              // int64_t arg1
         [x20] = x8
         0x800468c ()             // 0x800468c(0x178008, 0x0, 0x0, 0x0)
         x1 = [x20]               // 0xdb // 219
         if x1 jmp 0x80046a8      // likely

    loc_0x08004698: // orphan
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x80046a0 ()             // 0x80046a0(0x8004000, 0x0, 0x0, 0x0)
         jmp 0x8004610

    loc_0x080046a8: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8004694
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x80046b0 ()             // 0x80046b0(0x8004000, 0x0, 0x0, 0x0)
         x8 = [x20]               // 0xdb // 219
         jmp 0x8004540

    loc_0x080046bc: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8004628
         0x80046bc ()             // 0x80046bc(0x0, 0x0, 0x0, 0x0)
         orn x15,x27,x30, lsr 8

}

/* ===== 0x080047c4 ===== */
int sym.get_target_task (int esi, int edx) {
    loc_0x80047c4:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80047d4 ()  // 0x80047d4(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x80047f8 // likely
            
    loc_0x80047f8:
        // CODE XREF from sym.get_target_task @ 0x80047d8
        x20 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x80047fc:
        // CODE XREF from sym.get_target_task @ 0x80047f4
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800480c
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08004978 ===== */
int sym.compare_task_struct (int esi, int edx) {
    loc_0x8004978:
        0x08004978
         // (break)
}

/* ===== 0x08004980 ===== */
int sym.get_module_bounds (int esi, int edx) {
    loc_0x8004980:
        hint 0x19
        sp = sp - 0xc0
        [sp, 0x60] = (x29,2)
        [sp, 0x70] = (x28,2)
        [sp, 0x80] = (x26,2)
        [sp, 0x90] = (x24,2)
        [sp, 0xa0] = (x22,2)
        [sp, 0xb0] = (x20,2)
        x29 = var_60h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        [sp, 0x48] = (xzr,2)
        [sp, 0x38] = (xzr,2)
        [sp, 0x28] = (xzr,2)
        [sp, 0x18] = (xzr,2)
        if !x3 jmp 0x8004a54 // likely
            
    loc_0x8004a54:
        // CODE XREFS from sym.get_module_bounds @ 0x80049c0, 0x80049c8
        x0 = 0x8004000
        x0 = x0 + 0
        jmp 0x8004a80
         // do {
    loc_0x8004a80:
        // CODE XREFS from sym.get_module_bounds @ 0x8004a50, 0x8004a5c, 0x8004a68, 0x8004a74
        0x8004a80 ()  // "L" // 0x8004a80(0x0, 0x0, 0x0, 0x0)
        jmp 0x8004bb4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80049c4
    loc_0x80049cc:
        w24 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = x1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x20 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        w21 = w2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x22 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x80049e0 ()  // 0x80049e0(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8004a60 // likely
            
    loc_0x8004a60:
        // CODE XREF from sym.get_module_bounds @ 0x80049e4
        x0 = 0x8004000
        x0 = x0 + 0
        jmp 0x8004a80
    loc_0x080049e8: // orphan
             x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w0 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x80049f0 ()             // 0x80049f0(0x0, 0x0, 0x0, 0x0)
             if !x0 jmp 0x8004a6c     // likely

    loc_0x080049f8: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8004a00 ()             // 0x8004a00(0x0, 0x0, 0x0, 0x0)
         x25 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004a0c ()             // 0x8004a0c(0x0, 0x0, 0x0, 0x0)
         if !x25 jmp 0x8004a78    // likely

    loc_0x08004a14: // orphan
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004a18 ()             // 0x8004a18(0x0, 0x0, 0x0, 0x0)
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x25 + 0x40
         jmp 0x8004a88

    loc_0x08004a38: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8004aa4
         dmb ishld
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004a40 ()             // 0x8004a40(0x0, 0x0, 0x0, 0x0)
         if x24 jmp 0x8004ab4     // unlikely

    loc_0x08004a48: // orphan
         // CODE XREFS from sym.get_module_bounds @ 0x8004ab0, 0x8004bfc
         x0 = 0x8004000
         x0 = x0 + 0
         jmp 0x8004a80

    loc_0x08004a6c: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x80049f4
         x0 = 0x8004000
         x0 = x0 + 0
         jmp 0x8004a80

    loc_0x08004a78: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8004a10
         x0 = 0x8004000
         x0 = x0 + 0

    loc_0x08004a88: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8004a24
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08004a90: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8004a9c
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8004a90     // unlikely

    loc_0x08004aa0: // orphan
         if (w8 == 1)
         b.eq 0x8004a38           // unlikely

    loc_0x08004aa8: // orphan
         // CODE XREF from sym.get_module_bounds @ +0xb4
         if (w8 == 0)
         jmp ifle 0x8004bf0       // likely

    loc_0x08004ab0: // orphan
         if !x24 jmp 0x8004a48    // likely

    loc_0x08004ab4: // orphan
         // CODE XREFS from sym.get_module_bounds @ 0x8004a44, 0x8004bf8
         

    loc_0x08004ab8: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8004c10
         x0 = x24 + 0x60          // int64_t arg1
         [var_10h] = x0
         0x8004ac0 ()             // 0x8004ac0(0x60, 0x0, 0x0, 0x0)
         

    loc_0x08004ac8: // orphan
         // CODE XREF from fcn.08004c20 @ 0x8004c24
         w8 = 0x1
         x0 = var_18h             // int64_t arg1
         x1 = ~0                  // int64_t arg2
         [sp] = (x20,2)
         [sp, 0x18] = (x24,2)
         [var_28h_2] = x8
         0x8004ae0 ()             // 0x8004ae0(0x178018, -1, 0x0, 0x0)
         if !x0 jmp 0x8004b78     // unlikely

    loc_0x08004ae8: // orphan
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x28 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8004b1c

    loc_0x08004b00: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8004b54
         (x27, 2) = 3
         x25 = x19                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004b08: // orphan
         // CODE XREFS from sym.get_module_bounds @ 0x8004b20, 0x8004b30, 0x8004b50, 0x8004b5c, 0x8004b74
         x0 = var_18h             // int64_t arg1
         x1 = ~0                  // int64_t arg2
         0x8004b10 ()             // 0x8004b10(0x178018, -1, 0x0, 0x0)
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x0 jmp 0x8004b84     // unlikely

    loc_0x08004b1c: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8004afc
         x8 = [var_a0h]           // 0xe1 // 225
         if !x8 jmp 0x8004b08     // unlikely

    loc_0x08004b24: // orphan
         if !w21 jmp 0x8004b34    // likely

    loc_0x08004b28: // orphan
         x9 = [var_38h]           // 0xe1 // 225
         if ((x9 & x20) == 0)
         b.eq 0x8004b08           // unlikely

    loc_0x08004b34: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8004b24
         x19 = [x8 + 0x18]        // 0xcf // 207
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w8 = [x19 + 0x24]        // 0xda // 218
         x0 = [x19 + 0x28]        // 0xda // 218 // int64_t arg1
         if (x23 == x8)
         csel x2,x23,x8, lo       // int64_t arg3
         0x8004b4c ()             // 0x8004b4c(-1, 0x0, 0x0, 0x0)
         if w0 jmp 0x8004b08      // likely

    loc_0x08004b54: // orphan
         if !x25 jmp 0x8004b00    // likely

    loc_0x08004b58: // orphan
         if (x25 == x19)
         b.ne 0x8004b08           // unlikely

    loc_0x08004b60: // orphan
         (x8, 2) = 3
         if (x27 == x8)
         csel x27,x27,x8, lo
         if (x28 == x9)
         csel x28,x28,x9, hi
         jmp 0x8004b08

    loc_0x08004b78: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8004ae4
         x28 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004b84: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8004b18
         

    loc_0x08004b88: // orphan
         // CODE XREF from fcn.08004c30 @ 0x8004c34
         x0 = [var_10h]           // 0x4 // 4 // int64_t arg1
         0x8004b8c ()             // 0x8004b8c(0x60, 0x0, 0x0, 0x0)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004b94 ()             // 0x8004b94(0x0, 0x0, 0x0, 0x0)
         if !x25 jmp 0x8004bb4    // likely

    loc_0x08004b9c: // orphan
         x8 = [sp]                // 0x4 // 4
         w0 = 0x1
         [x8] = x27
         x8 = [var_sp_8h]         // 0x4 // 4
         [x8] = x28
         jmp 0x8004bb8

    loc_0x08004bb4: // orphan
         // CODE XREFS from sym.get_module_bounds @ 0x8004a84, 0x8004b98
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004bb8: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8004bb0
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x638]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x8004c00           // likely

    loc_0x08004bcc: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_c0h
         hint 0x1d
         

    loc_0x08004bf0: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8004aac
         w1 = 0x3
         0x8004bf4 ()             // 0x8004bf4(0x0, 0x3, 0x0, 0x0)
         if x24 jmp 0x8004ab4     // unlikely

    loc_0x08004bfc: // orphan
         jmp 0x8004a48

    loc_0x08004c00: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8004bc8
         0x8004c00 ()             // 0x8004c00(0x0, 0x0, 0x0, 0x0)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8004c0c ()             // 0x8004c0c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8004ab8

}

/* ===== 0x08004c3c ===== */
int sym.get_module_base (int esi, int edx) {
    loc_0x8004c3c:
        hint 0x19
        sp = sp - 0x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x3 = var_10h
        x8 = [x8 + 0x638] // 0xcf // 207
        x4 = var_8h
        [x29 = x8
        [sp, 8] = (xzr,2)
        0x8004c64 ()  // 0x8004c64(0x0, 0x0, 0x0, 0x177fe0)
        x8 = [var_10h] // 0x4 // 4
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = [x9 + 0x638] // 0xd0 // 208
        if (w0 == 0)
        ldur x10,[x29,-8]
        csel x0,xzr,x8, eq
        if (x9 == x10)
        b.ne 0x8004c98 // unlikely
            
    loc_0x8004c98:
        // CODE XREF from sym.get_module_base @ 0x8004c84
        0x8004c98 ()  // 0x8004c98(0x0, 0x0, 0x0, 0x0)
        0x08004c9c
         // } else {
    loc_0x8004c88:
        (x29, 2) = 3
        sp = arg_30h
        hint 0x1d
        0x08004c94
        }
        return eax;
}

/* ===== 0x08004ca0 ===== */
int sym.is_pid_alive (int esi, int edx) {
    loc_0x8004ca0:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8004cac ()  // 0x8004cac(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8004ccc // likely
            
    loc_0x8004ccc:
        // CODE XREFS from sym.is_pid_alive @ 0x8004cb0, 0x8004cbc
        (x29, 2) = 3  // "`"
        hint 0x1d
        0x08004cd4
         // } else {
    loc_0x8004cb4:
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8004cb8 ()  // 0x8004cb8(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8004ccc // likely
        }
        return eax;
    loc_0x8004cc0:
        x8 = [x0 + 0x698] // 0xc7 // 199
        if (x8 == 0)
        cset w0,ne
}

/* ===== 0x08004cdc ===== */
int sym.find_process_by_name (int esi, int edx) {
    loc_0x8004cdc:
        hint 0x19
        sp = sp - 0x1f0
        [sp, 0x190] = (x29,2)
        [var_1a0h] = x28
        [sp, 0x1b0] = (x26,2)
        [sp, 0x1c0] = (x24,2)
        [sp, 0x1d0] = (x22,2)
        [sp, 0x1e0] = (x20,2)
        x29 = var_190h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
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
        0x8004d50 ()  // 0x8004d50(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8004f10 // likely
            
    loc_0x8004f10:
        // CODE XREF from sym.find_process_by_name @ 0x8004d54
        x0 = 0x8004000
        x0 = x0 + 0   // int64_t arg1
        0x8004f18 ()  // " " // 0x8004f18(0x8004000, 0x0, 0x0, 0x0)
        w0 = ~0x1
        jmp 0x8004ed8
         // do {
    loc_0x8004ed8:
        // CODE XREFS from sym.find_process_by_name @ 0x8004ecc, 0x8004f20
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8004f78 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8004d58
    loc_0x8004d68:
        x21 = 0x8004000
        x8 = [x21]    // 0xdc // 220
        if !x8 jmp 0x8004d84 // unlikely
            
    loc_0x8004d84:
        // CODE XREF from sym.find_process_by_name @ 0x8004d70
        x8 = 0x8004000
        x8 = x8 + 0
        x0 = var_sp_8h // int64_t arg1
        (x9, 2) = 3
        (x11, 2) = 3
        [sp, 0x68] = (x9,2)
        (x9, 2) = 3
        [sp, 0x78] = (x11,2)
        (x11, 2) = 3
        [sp, 0x48] = (x9,2)
        (x9, 2) = 3
        [sp, 0x58] = (x11,2)
        (x11, 2) = 3
        [sp, 0x28] = (x9,2)
        (x9, 2) = 3
        [sp, 0x38] = (x11,2)
        (x11, 2) = 3
        [sp, 8] = (x9,2)
        [sp, 0x18] = (x11,2)
        0x8004dd0 ()  // 0x8004dd0(0x178008, 0x0, 0x0, 0x0)
        tbz w0,0x1f,0x8004f24 // likely
            
    loc_0x8004f24:
        // CODE XREF from sym.find_process_by_name @ 0x8004dd4
        x8 = [var_30h] // 0x4 // 4
        x0 = var_sp_8h // int64_t arg1
        [x21] = x8
        0x8004f30 ()  // 0x8004f30(0x178008, 0x0, 0x0, 0x0)
        x1 = [x21]    // 0xdc // 220
        if x1 jmp 0x8004f4c // likely
            
    loc_0x8004f4c:
        // CODE XREF from sym.find_process_by_name @ 0x8004f38
        x0 = 0x8004000
        x0 = x0 + 0   // int64_t arg1
        0x8004f54 ()  // 0x8004f54(0x8004000, 0x0, 0x0, 0x0)
        x8 = [x21]    // 0xdc // 220
        jmp 0x8004d74
    loc_0x08004d74: // orphan
             // CODE XREF from sym.find_process_by_name @ 0x8004f5c
             x0 = 0x8004000
             x0 = x0 + 0
             blr x8                   // xzr(0x8004000, 0x0, 0x0, 0x0)
             jmp 0x8004ddc

    loc_0x08004dd8: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8004f48
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004ddc: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8004d80
         [x23] = x0

    loc_0x08004de0: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8004d64
         0x8004de0 ()             // 0x8004de0(0x0, 0x0, 0x0, 0x0)
         x25 = 0x8004000
         x25 = x25 + 0
         x24 = [x25 + 0x550]      // 0xe0 // 224
         x21 = x24 - 0x550
         if (x21 == x25)
         b.eq 0x8004ed0           // unlikely

    loc_0x08004dfc: // orphan
         x26 = var_88h
         jmp 0x8004e14

    loc_0x08004e04: // orphan
         // CODE XREFS from sym.find_process_by_name @ 0x8004e18, 0x8004eac, 0x8004ec0
         x24 = [x21 + 0x550]      // 0xdc // 220
         x21 = x24 - 0x550
         if (x21 == x25)
         b.eq 0x8004ed0           // unlikely

    loc_0x08004e14: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8004e00
         x8 = [x24 + 0x50]        // 0xdf // 223
         if !x8 jmp 0x8004e04     // unlikely

    loc_0x08004e1c: // orphan
         x8 = [x23]               // 0xde // 222
         [var_88h] = (byte) wzr
         if !x8 jmp 0x8004e88     // likely

    loc_0x08004e28: // orphan
         x1 = var_88h
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x100
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x6c53             // 'Sl'
         w17 = 0x52b4             // '\xb4R'
         if (w16 == w17)
         b.eq 0x8004e4c           // unlikely

    loc_0x08004e48: // orphan
         brk 0x8228

    loc_0x08004e4c: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8004e44
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x8004e88   // unlikely

    loc_0x08004e54: // orphan
         x0 = var_88h             // int64_t arg1
         w1 = 0x20
         0x8004e5c ()             // "@" // 0x8004e5c(0x178088, 0x20, 0x0, 0x0)
         if !x0 jmp 0x8004e68     // unlikely

    loc_0x08004e64: // orphan
         [x0] = (byte) wzr

    loc_0x08004e68: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8004e60
         x0 = var_88h             // int64_t arg1
         w1 = 0x2f                // '/'
         0x8004e70 ()             // 0x8004e70(0x178088, 0x2f, 0x0, 0x0)
         if (x0 == 0)
         csinc x22,x26,x0, eq
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004e80 ()             // "\t" // 0x8004e80(0x178089, 0x2f, 0x0, 0x0)
         jmp 0x8004ea8

    loc_0x08004e88: // orphan
         // CODE XREFS from sym.find_process_by_name @ 0x8004e24, 0x8004e50
         x22 = x24 + 0x2f8
         w1 = 0x10
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004e94 ()             // 0x8004e94(0x2f8, 0x10, 0x0, 0x0)
         if (x0 == 0x11)
         b.hs 0x8004f60           // likely

    loc_0x08004ea0: // orphan
         if (x0 == 0x10)
         b.eq 0x8004f6c           // unlikely

    loc_0x08004ea8: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8004e84
         if (x0 == x20)
         b.ne 0x8004e04           // unlikely

    loc_0x08004eb0: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_1f0h
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8004ebc ()             // 0x8004ebc(0x0, 0x0, 0x0, 0x0)
         if w0 jmp 0x8004e04      // unlikely

    loc_0x08004ec4: // orphan
         0x8004ec4 ()             // 0x8004ec4(0x0, 0x0, 0x0, 0x0)
         w0 = [x24 + 0xe0]        // 0xdf // 223
         jmp 0x8004ed8

    loc_0x08004ed0: // orphan
         // CODE XREFS from sym.find_process_by_name @ 0x8004df8, 0x8004e10
         0x8004ed0 ()             // 0x8004ed0(0x0, 0x0, 0x0, 0x0)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004eec: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x29, 2) = 3
         x28 = [var_1a0h]         // 0x4 // 4
         sp = arg_1f0h
         hint 0x1d
         

    loc_0x08004f3c: // orphan
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004f44 ()             // 0x8004f44(0x8004000, 0x0, 0x0, 0x0)
         jmp 0x8004dd8

    loc_0x08004f60: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8004e9c
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004f68 ()             // 0x8004f68(0x8004000, 0x0, 0x0, 0x0)

    loc_0x08004f6c: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8004ea4
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004f74 ()             // 0x8004f74(0x8004000, 0x0, 0x0, 0x0)

    loc_0x08004f78: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8004ee8
         0x8004f78 ()             // 0x8004f78(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x0800ace4 ===== */
int sym.hook_write_range (int esi, int edx) {
    loc_0x800ace4:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w20 = w2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w2 == 1)  // arg3
        b.lt 0x800ad3c // likely
            
    loc_0x800ad3c:
        x8 = 0x800a000
        x1 = x19 + w20,sxtw
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8]     // 0xcf // 207
        blr x8        // 0x39411b6800000000(0x0, 0x0, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800ad54:
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x0800ad68
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800ad18: // orphan
             x8 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x9 = [x23]               // 0xde // 222
             x0 = x19 + x8
             w1 = [x21 + x8]          // 0xcf000000dc // 889058230492
             blr x9                   // xzr(0x0, 0x0, 0x0, 0x0)
             if w0 jmp 0x800ad54      // unlikely

    loc_0x0800ad30: // orphan
         w22 = w22 + 4
         if (w22 == w20)
         b.lt 0x800ad18           // unlikely

}

/* ===== 0x080098d4 ===== */
int sym.hide_kgsl_remove (int esi, int edx) {
    loc_0x80098d4:
        if (w0 == 1)  // arg1
        b.lt 0x8009a04 // likely
            
    loc_0x8009a04:
        0x08009a04
         // } else {
    loc_0x80098dc:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = fcn.08009000 // 0x8009000
        x0 = x0 + 0   // 0x8009000
        // fcn.08009000 // int64_t arg1
        0x80098f8 ()  // 0x80098f8(0x8009000, 0x0, 0x0, 0x0)
        x8 = fcn.08009000 // 0x8009000
        w9 = [x8]     // 0xcf // 207 // fcn.08009000
        if (w9 == w19)
        b.ne 0x8009910 // likely
        }
        return eax;
    loc_0x800990c:
        [x8] = wzr
         // do {
    loc_0x8009910:
        x9 = fcn.08009000 // 0x8009000
        w10 = [x9]    // 0xd0 // 208 // fcn.08009000
        if (w10 == w19)
        b.ne 0x8009924 // likely
         // } while (?);
        }
        return eax;
    loc_0x8009920:
        [x9] = wzr
         // do {
    loc_0x8009924:
        x10 = fcn.08009000 // 0x8009000
        w11 = [x10]   // 0xd1 // 209 // fcn.08009000
        if (w11 == w19)
        b.ne 0x8009938 // likely
         // } while (?);
        }
        return eax;
    loc_0x8009934:
        [x10] = wzr
         // do {
    loc_0x8009938:
        x11 = fcn.08009000 // 0x8009000
        w12 = [x11]   // 0xd2 // 210 // fcn.08009000
        if (w12 == w19)
        b.ne 0x800994c // likely
         // } while (?);
        }
        return eax;
    loc_0x8009948:
        [x11] = wzr
         // do {
    loc_0x800994c:
        x12 = fcn.08009000 // 0x8009000
        w13 = [x12]   // 0xd3 // 211 // fcn.08009000
        if (w13 == w19)
        b.ne 0x8009960 // likely
         // } while (?);
        }
        return eax;
    loc_0x800995c:
        [x12] = wzr
         // do {
    loc_0x8009960:
        x13 = fcn.08009000 // 0x8009000
        w14 = [x13]   // 0xd4 // 212 // fcn.08009000
        if (w14 == w19)
        b.ne 0x8009974 // likely
         // } while (?);
        }
        return eax;
    loc_0x8009970:
        [x13] = wzr
         // do {
    loc_0x8009974:
        x14 = fcn.08009000 // 0x8009000
        w15 = [x14]   // 0xd5 // 213 // fcn.08009000
        if (w15 == w19)
        b.ne 0x8009988 // likely
         // } while (?);
        }
        return eax;
    loc_0x8009984:
        [x14] = wzr
         // do {
    loc_0x8009988:
        x15 = fcn.08009000 // 0x8009000
        w16 = [x15]   // 0xd6 // 214 // fcn.08009000
        if (w16 == w19)
        b.ne 0x800999c // likely
         // } while (?);
        }
        return eax;
    loc_0x8009998:
        [x15] = wzr
         // do {
    loc_0x800999c:
        w8 = [x8]     // 0xcf // 207
        if w8 jmp 0x80099ec // unlikely
         // } while (?);
        }
        return eax;
    loc_0x80099a4:
        w8 = [x9]     // 0xd0 // 208
        if w8 jmp 0x80099ec // unlikely
            
    loc_0x80099ec:
        x0 = fcn.08009000 // 0x8009000
        x0 = x0 + 0   // 0x8009000
        // fcn.08009000 // int64_t arg1
        0x80099f4 ()  // 0x80099f4(0x8009000, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
    loc_0x080099ac: // orphan
             w8 = [x10]               // 0xd1 // 209
             if w8 jmp 0x80099ec      // unlikely

    loc_0x080099b4: // orphan
         w8 = [x11]               // 0xd2 // 210
         if w8 jmp 0x80099ec      // unlikely

    loc_0x080099bc: // orphan
         w8 = [x12]               // 0xd3 // 211
         if w8 jmp 0x80099ec      // unlikely

    loc_0x080099c4: // orphan
         w8 = [x13]               // 0xd4 // 212
         if w8 jmp 0x80099ec      // unlikely

    loc_0x080099cc: // orphan
         w8 = [x14]               // 0xd5 // 213
         if w8 jmp 0x80099ec      // unlikely

    loc_0x080099d4: // orphan
         w8 = [x15]               // 0xd6 // 214
         if w8 jmp 0x80099ec      // unlikely

    loc_0x080099dc: // orphan
         x0 = fcn.08009000        // 0x8009000
         x0 = x0 + 0              // 0x8009000
                                  // fcn.08009000 // int64_t arg1
         w1 = 0x3
         0x80099e8 ()             // 0x80099e8(0x8009000, 0x3, 0x0, 0x0)

}

/* ===== 0x080091bc ===== */
int sym.hide_task_remove (int esi, int edx) {
    loc_0x80091bc:
        if (w0 == 1)  // arg1
        b.lt 0x80092ec // likely
            
    loc_0x80092ec:
        0x080092ec
         // } else {
    loc_0x80091c4:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = fcn.08009000 // 0x8009000
        x0 = x0 + 0   // 0x8009000
        // fcn.08009000 // int64_t arg1
        0x80091e0 ()  // 0x80091e0(0x8009000, 0x0, 0x0, 0x0)
        x8 = fcn.08009000 // 0x8009000
        w9 = [x8]     // 0xcf // 207 // fcn.08009000
        if (w9 == w19)
        b.ne 0x80091f8 // likely
        }
        return eax;
    loc_0x80091f4:
        [x8] = wzr
         // do {
    loc_0x80091f8:
        x9 = fcn.08009000 // 0x8009000
        w10 = [x9]    // 0xd0 // 208 // fcn.08009000
        if (w10 == w19)
        b.ne 0x800920c // likely
         // } while (?);
        }
        return eax;
    loc_0x8009208:
        [x9] = wzr
         // do {
    loc_0x800920c:
        x10 = fcn.08009000 // 0x8009000
        w11 = [x10]   // 0xd1 // 209 // fcn.08009000
        if (w11 == w19)
        b.ne 0x8009220 // likely
         // } while (?);
        }
        return eax;
    loc_0x800921c:
        [x10] = wzr
         // do {
    loc_0x8009220:
        x11 = fcn.08009000 // 0x8009000
        w12 = [x11]   // 0xd2 // 210 // fcn.08009000
        if (w12 == w19)
        b.ne 0x8009234 // likely
         // } while (?);
        }
        return eax;
    loc_0x8009230:
        [x11] = wzr
         // do {
    loc_0x8009234:
        x12 = fcn.08009000 // 0x8009000
        w13 = [x12]   // 0xd3 // 211 // fcn.08009000
        if (w13 == w19)
        b.ne 0x8009248 // likely
         // } while (?);
        }
        return eax;
    loc_0x8009244:
        [x12] = wzr
         // do {
    loc_0x8009248:
        x13 = fcn.08009000 // 0x8009000
        w14 = [x13]   // 0xd4 // 212 // fcn.08009000
        if (w14 == w19)
        b.ne 0x800925c // likely
         // } while (?);
        }
        return eax;
    loc_0x8009258:
        [x13] = wzr
         // do {
    loc_0x800925c:
        x14 = fcn.08009000 // 0x8009000
        w15 = [x14]   // 0xd5 // 213 // fcn.08009000
        if (w15 == w19)
        b.ne 0x8009270 // likely
         // } while (?);
        }
        return eax;
    loc_0x800926c:
        [x14] = wzr
         // do {
    loc_0x8009270:
        x15 = fcn.08009000 // 0x8009000
        w16 = [x15]   // 0xd6 // 214 // fcn.08009000
        if (w16 == w19)
        b.ne 0x8009284 // likely
         // } while (?);
        }
        return eax;
    loc_0x8009280:
        [x15] = wzr
         // do {
    loc_0x8009284:
        w8 = [x8]     // 0xcf // 207
        if w8 jmp 0x80092d4 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800928c:
        w8 = [x9]     // 0xd0 // 208
        if w8 jmp 0x80092d4 // unlikely
            
    loc_0x80092d4:
        x0 = fcn.08009000 // 0x8009000
        x0 = x0 + 0   // 0x8009000
        // fcn.08009000 // int64_t arg1
        0x80092dc ()  // 0x80092dc(0x8009000, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
    loc_0x08009294: // orphan
             w8 = [x10]               // 0xd1 // 209
             if w8 jmp 0x80092d4      // unlikely

    loc_0x0800929c: // orphan
         w8 = [x11]               // 0xd2 // 210
         if w8 jmp 0x80092d4      // unlikely

    loc_0x080092a4: // orphan
         w8 = [x12]               // 0xd3 // 211
         if w8 jmp 0x80092d4      // unlikely

    loc_0x080092ac: // orphan
         w8 = [x13]               // 0xd4 // 212
         if w8 jmp 0x80092d4      // unlikely

    loc_0x080092b4: // orphan
         w8 = [x14]               // 0xd5 // 213
         if w8 jmp 0x80092d4      // unlikely

    loc_0x080092bc: // orphan
         w8 = [x15]               // 0xd6 // 214
         if w8 jmp 0x80092d4      // unlikely

    loc_0x080092c4: // orphan
         x0 = fcn.08009000        // 0x8009000
         x0 = x0 + 0              // 0x8009000
                                  // fcn.08009000 // int64_t arg1
         w1 = 0x1
         0x80092d0 ()             // 0x80092d0(0x8009000, 0x1, 0x0, 0x0)

}

/* ===== 0x080092f4 ===== */
int sym.hide_task_is_hidden (int esi, int edx) {
    loc_0x80092f4:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w0 == 1)  // arg1
        b.lt 0x80093a0 // likely
            
    loc_0x80093a0:
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x80093a4:
        // CODE XREF from sym.hide_task_is_hidden @ 0x800939c
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x080093b4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800930c
    loc_0x800932c:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if (w8 == w19)
        b.eq 0x800938c // unlikely
            
    loc_0x800938c:
        w19 = 0x1
         // do {
    loc_0x8009390:
        // CODE XREF from sym.hide_task_is_hidden @ 0x80093c8
        x0 = fcn.08009000 // 0x8009000
        x0 = x0 + 0   // 0x8009000
        // fcn.08009000 // int64_t arg1
        0x8009398 ()  // 0x8009398(0x8009000, 0x0, 0x0, 0x0)
        jmp 0x80093a4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800933c
    loc_0x800934c:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if (w8 == w19)
        b.eq 0x800938c // unlikely
    loc_0x800935c:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if (w8 == w19)
        b.eq 0x800938c // unlikely
    loc_0x800936c:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if (w8 == w19)
        b.eq 0x800938c // unlikely
    loc_0x800937c:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if (w8 == w19)
        b.ne 0x80093b8 // likely
            
    loc_0x80093b8:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if (w8 == w19)
        cset w19,eq
        jmp 0x8009390
}

/* ===== 0x08009028 ===== */
int sym.hide_task_install (int esi, int edx) {
    loc_0x8009028:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w0 == 1)  // arg1
        b.lt 0x80090fc // likely
            
    loc_0x80090fc:
        w20 = ~0x15
         // do {
    loc_0x8009100:
        // CODE XREF from sym.hide_task_install @ 0x80090f8
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08009110
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8009040
    loc_0x8009068:
        x8 = fcn.08009000 // 0x8009000
        w8 = [x8]     // 0xcf // 207 // fcn.08009000
        if (w8 == w19)
        b.eq 0x80090e8 // unlikely
            
    loc_0x80090e8:
        w20 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x80090ec:
        // CODE XREFS from sym.hide_task_install @ 0x80091ac, 0x80091b4
        x0 = fcn.08009000 // 0x8009000
        x0 = x0 + 0   // 0x8009000
        // fcn.08009000 // int64_t arg1
        0x80090f4 ()  // 0x80090f4(0x8009000, 0x0, 0x0, 0x0)
        jmp 0x8009100
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8009078
    loc_0x8009088:
        x9 = fcn.08009000 // 0x8009000
        w15 = [x9]    // 0xd0 // 208 // fcn.08009000
        if (w15 == w19)
        b.eq 0x80090e8 // unlikely
    loc_0x8009098:
        x9 = fcn.08009000 // 0x8009000
        w9 = [x9]     // 0xd0 // 208 // fcn.08009000
        if (w9 == w19)
        b.eq 0x80090e8 // unlikely
    loc_0x80090a8:
        x10 = fcn.08009000 // 0x8009000
        w10 = [x10]   // 0xd1 // 209 // fcn.08009000
        if (w10 == w19)
        b.eq 0x80090e8 // unlikely
    loc_0x80090b8:
        x12 = fcn.08009000 // 0x8009000
        w12 = [x12]   // 0xd3 // 211 // fcn.08009000
        if (w12 == w19)
        b.eq 0x80090e8 // unlikely
    loc_0x80090c8:
        x13 = fcn.08009000 // 0x8009000
        w13 = [x13]   // 0xd4 // 212 // fcn.08009000
        if (w13 == w19)
        b.eq 0x80090e8 // unlikely
    loc_0x80090d8:
        x14 = fcn.08009000 // 0x8009000
        w14 = [x14]   // 0xd5 // 213 // fcn.08009000
        if (w14 == w19)
        b.ne 0x8009114 // likely
            
    loc_0x8009114:
        if (w15 == 0)
        cset w15,eq
        if (w11 == 0)
        cset w11,eq
        if (w8 == 0)
        cset w8,ne
        csetm w16,ne
        w11 &= w11
        bic w11,w15,w11 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        csinc w15,w16,wzr, eq
        if ((w11 & w8) == 0)
        w8 = 0x2
        csel w8,w8,w15, ne
        if (w8 == 0)
        ccmp w9,0,0, lt
        w9 = 0x3
        csel w8,w9,w8, eq
        w9 = 0x4
        if (w8 == 0)
        ccmp w10,0,0, lt
        csel w8,w9,w8, eq
        w9 = 0x5
        if (w8 == 0)
        ccmp w12,0,0, lt
        csel w8,w9,w8, eq
        w9 = 0x6
        if (w8 == 0)
        ccmp w13,0,0, lt
        csel w8,w9,w8, eq
        w9 = 0x7
        if (w8 == 0)
        ccmp w14,0,0, lt
        csel w8,w9,w8, eq
        tbnz w8,0x1f,0x80091b0 // unlikely
            
    loc_0x80091b0:
        w20 = ~0x1b
        jmp 0x80090ec
    loc_0x0800919c: // orphan
             w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x9 = fcn.08009000        // 0x8009000
             x9 = x9 + 0              // 0x8009000
                                      // fcn.08009000
             [x9 + w8,uxtw 2] = w19
             jmp 0x80090ec

}

/* ===== 0x08009714 ===== */
int sym.hide_kgsl_install (int esi, int edx) {
    loc_0x8009714:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w0 == 1)  // arg1
        b.ge 0x8009744 // unlikely
            
    loc_0x8009744:
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = fcn.08009000 // 0x8009000
        x0 = x0 + 0   // 0x8009000
        // fcn.08009000 // int64_t arg1
        0x8009750 ()  // 0x8009750(0x8009000, 0x0, 0x0, 0x0)
        x0 = fcn.08009000 // 0x8009000
        x0 = x0 + 0   // 0x8009000
        // fcn.08009000 // int64_t arg1
        w1 = 0x3
        0x8009760 ()  // 0x8009760(0x8009000, 0x3, 0x0, 0x0)
        if w0 jmp 0x80097fc // likely
            
    loc_0x80097fc:
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = fcn.08009000 // 0x8009000
        x0 = x0 + 0   // 0x8009000
        // fcn.08009000 // int64_t arg1
        w1 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800980c ()  // 0x800980c(0x8009000, 0x0, 0x0, 0x0)
         // do {
    loc_0x8009810:
        // CODE XREFS from sym.hide_kgsl_install @ 0x80097f8, 0x80098ac
        x0 = fcn.08009000 // 0x8009000
        x0 = x0 + 0   // 0x8009000
        // fcn.08009000 // int64_t arg1
        0x8009818 ()  // 0x8009818(0x8009000, 0x0, 0x0, 0x0)
        jmp 0x8009730
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08009730: // orphan
             // CODE XREF from sym.hide_kgsl_install @ 0x800981c
             w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             (x20, 2) = 3
             (x29, 2) = 3
             hint 0x1d
             

    loc_0x08009784: // orphan
         x9 = fcn.08009000        // 0x8009000
         w11 = [x9]               // 0xd0 // 208 // fcn.08009000
         if (w11 == w19)
         b.eq 0x80097f4           // likely

    loc_0x08009794: // orphan
         x9 = fcn.08009000        // 0x8009000
         w15 = [x9]               // 0xd0 // 208 // fcn.08009000
         if (w15 == w19)
         b.eq 0x80097f4           // likely

    loc_0x080097a4: // orphan
         x9 = fcn.08009000        // 0x8009000
         w9 = [x9]                // 0xd0 // 208 // fcn.08009000
         if (w9 == w19)
         b.eq 0x80097f4           // likely

    loc_0x080097b4: // orphan
         x10 = fcn.08009000       // 0x8009000
         w10 = [x10]              // 0xd1 // 209 // fcn.08009000
         if (w10 == w19)
         b.eq 0x80097f4           // likely

    loc_0x080097c4: // orphan
         x12 = fcn.08009000       // 0x8009000
         w12 = [x12]              // 0xd3 // 211 // fcn.08009000
         if (w12 == w19)
         b.eq 0x80097f4           // likely

    loc_0x080097d4: // orphan
         x13 = fcn.08009000       // 0x8009000
         w13 = [x13]              // 0xd4 // 212 // fcn.08009000
         if (w13 == w19)
         b.eq 0x80097f4           // likely

    loc_0x080097e4: // orphan
         x14 = fcn.08009000       // 0x8009000
         w14 = [x14]              // 0xd5 // 213 // fcn.08009000
         if (w14 == w19)
         b.ne 0x8009820           // unlikely

    loc_0x080097f4: // orphan
         // CODE XREF from sym.hide_kgsl_install @ 0x80098cc
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8009810

    loc_0x08009820: // orphan
         if (w15 == 0)
         cset w15,eq
         if (w11 == 0)
         cset w11,eq
         if (w8 == 0)
         cset w8,ne
         csetm w16,ne
         w11 &= w11
         bic w11,w15,w11          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csinc w15,w16,wzr, eq
         if ((w11 & w8) == 0)
         w8 = 0x2
         csel w8,w8,w15, ne
         if (w8 == 0)
         ccmp w9,0,0, lt
         w9 = 0x3
         csel w8,w9,w8, eq
         w9 = 0x4
         if (w8 == 0)
         ccmp w10,0,0, lt
         csel w8,w9,w8, eq
         w9 = 0x5
         if (w8 == 0)
         ccmp w12,0,0, lt
         csel w8,w9,w8, eq
         w9 = 0x6
         if (w8 == 0)
         ccmp w13,0,0, lt
         csel w8,w9,w8, eq
         w9 = 0x7
         if (w8 == 0)
         ccmp w14,0,0, lt
         csel w8,w9,w8, eq
         tbz w8,0x1f,0x80098b0    // likely

    loc_0x080098a8: // orphan
         w20 = ~0x1b
         jmp 0x8009810

    loc_0x080098b0: // orphan
         x0 = fcn.08009000        // 0x8009000
         x0 = x0 + 0              // 0x8009000
                                  // fcn.08009000 // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = fcn.08009000        // 0x8009000
         x9 = x9 + 0              // 0x8009000
                                  // fcn.08009000
         [x9 + w8,uxtw 2] = w19
         0x80098c8 ()             // 0x80098c8(0x8009000, 0x0, 0x0, 0x0)
         jmp 0x80097f4

}

/* ===== 0x08009a0c ===== */
int sym.hide_kgsl_cleanup (int esi, int edx) {
    loc_0x8009a0c:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = fcn.08009000 // 0x8009000
        x19 = x19 + 0 // 0x8009000
        // fcn.08009000
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // fcn.08009000
        0x8009a28 ()  // 0x8009a28(0x8009000, 0x0, 0x0, 0x0)
        x8 = fcn.08009000 // 0x8009000
        x8 = x8 + 0   // 0x8009000
        // fcn.08009000
        x0 = fcn.08009000 // 0x8009000
        x0 = x0 + 0   // 0x8009000
        // fcn.08009000
        w1 = 0x3
        [x8] = wzr    // fcn.08009000
        [x8 + 4] = wzr
        [x8 + 8] = wzr
        [x8 + 0xc] = wzr
        [x8 + 0x10] = wzr
        [x8 + 0x14] = wzr
        [x8 + 0x18] = wzr
        [x8 + 0x1c] = wzr
        0x8009a60 ()  // 0x8009a60(0x8009000, 0x3, 0x0, 0x0)
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // fcn.08009000
        0x8009a68 ()  // 0x8009a68(0x8009000, 0x3, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x08009a78
         // (break)
}

/* ===== 0x080093d0 ===== */
int sym.hide_task_cleanup (int esi, int edx) {
    loc_0x80093d0:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = fcn.08009000 // 0x8009000
        x19 = x19 + 0 // 0x8009000
        // fcn.08009000
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // fcn.08009000
        0x80093ec ()  // 0x80093ec(0x8009000, 0x0, 0x0, 0x0)
        x8 = fcn.08009000 // 0x8009000
        x8 = x8 + 0   // 0x8009000
        // fcn.08009000
        x0 = fcn.08009000 // 0x8009000
        x0 = x0 + 0   // 0x8009000
        // fcn.08009000
        w1 = 0x1
        [x8] = wzr    // fcn.08009000
        [x8 + 4] = wzr
        [x8 + 8] = wzr
        [x8 + 0xc] = wzr
        [x8 + 0x10] = wzr
        [x8 + 0x14] = wzr
        [x8 + 0x18] = wzr
        [x8 + 0x1c] = wzr
        0x8009424 ()  // 0x8009424(0x8009000, 0x1, 0x0, 0x0)
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // fcn.08009000
        0x800942c ()  // 0x800942c(0x8009000, 0x1, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x0800943c
         // (break)
}

/* ===== 0x08007d20 ===== */
int sym.get_main_thread_elf0 (int esi, int edx) {
    loc_0x8007d20:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8007d30 ()  // 0x8007d30(0x0, 0x0, 0x0, 0x0)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8007e14 // likely
            
    loc_0x8007e14:
        // CODE XREFS from sym.get_main_thread_elf0 @ 0x8007d88, 0x8007de4
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08007e24
         // } else {
    loc_0x8007d3c:
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8007d44 ()  // 0x8007d44(0x0, 0x0, 0x0, 0x0)
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8007d50 ()  // 0x8007d50(0x0, 0x0, 0x0, 0x0)
        if !x19 jmp 0x8007e10 // likely
        }
        return eax;
    loc_0x8007d58:
        x8 = [x19 + 0x670] // 0xda // 218
        if !x8 jmp 0x8007d8c // unlikely
            
    loc_0x8007d8c:
        x0 = x19 + 0x40
        jmp 0x8007de8
         // do {
    loc_0x8007de8:
        // CODE XREF from sym.get_main_thread_elf0 @ 0x8007d90
        w9 = 0x1
        prfm pstl1strm,[x0]
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08007d7c: // orphan
             dmb ishld
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8007d84 ()             // "#" // 0x8007d84(0x0, 0x0, 0x0, 0x0)
             jmp 0x8007e14

    loc_0x08007da4: // orphan
         dmb ishld
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8007dac ()             // 0x8007dac(0x0, 0x0, 0x0, 0x0)
         jmp 0x8007e10

    loc_0x08007db4: // orphan
         // CODE XREF from sym.get_main_thread_elf0 @ 0x8007d68
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08007dbc: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8007dbc     // unlikely

    loc_0x08007dcc: // orphan
         if (w8 == 1)
         b.eq 0x8007d7c           // unlikely

    loc_0x08007dd4: // orphan
         if (w8 == 0)
         jmp ifgt 0x8007e14       // unlikely

    loc_0x08007ddc: // orphan
         w1 = 0x3
         0x8007de0 ()             // 0x8007de0(0x0, 0x3, 0x0, 0x0)
         jmp 0x8007e14

    loc_0x08007df0: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8007df0     // unlikely

    loc_0x08007e00: // orphan
         if (w8 == 1)
         b.eq 0x8007da4           // unlikely

    loc_0x08007e08: // orphan
         if (w8 == 0)
         jmp ifle 0x8007e28       // likely

    loc_0x08007e10: // orphan
         // CODE XREFS from sym.get_main_thread_elf0 @ 0x8007db0, 0x8007e30
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007e28: // orphan
         w1 = 0x3
         0x8007e2c ()             // 0x8007e2c(0x0, 0x3, 0x0, 0x0)
         jmp 0x8007e10

}

/* ===== 0x08007e38 ===== */
int sym.get_thread_tpidr_el0 (int esi, int edx) {
    loc_0x8007e38:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8007e48 ()  // 0x8007e48(0x0, 0x0, 0x0, 0x0)
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8007ecc // likely
            
    loc_0x8007ecc:
        // CODE XREFS from sym.get_thread_tpidr_el0 @ 0x8007e98, 0x8007ea0, 0x8007ee8
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08007edc
         // } else {
    loc_0x8007e54:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8007e5c ()  // 0x8007e5c(0x0, 0x0, 0x0, 0x0)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8007e68 ()  // 0x8007e68(0x0, 0x0, 0x0, 0x0)
        if !x20 jmp 0x8007e9c // likely
        }
        return eax;
    loc_0x8007e70:
        x19 = [x20 + 0xec0] // 0xdb // 219
        x0 = x20 + 0x40
        jmp 0x8007ea4
         // do {
    loc_0x8007ea4:
        // CODE XREF from sym.get_thread_tpidr_el0 @ 0x8007e78
        w9 = 0x1
        prfm pstl1strm,[x0]
         // } while (?);
        }
        return eax;
    loc_0x08007e8c: // orphan
             dmb ishld
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8007e94 ()             // "\r" // 0x8007e94(0x0, 0x0, 0x0, 0x0)
             jmp 0x8007ecc

    loc_0x08007e9c: // orphan
         x19 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8007ecc

    loc_0x08007eac: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8007eac     // unlikely

    loc_0x08007ebc: // orphan
         if (w8 == 1)
         b.eq 0x8007e8c           // unlikely

    loc_0x08007ec4: // orphan
         if (w8 == 0)
         jmp ifle 0x8007ee0       // likely

    loc_0x08007ee0: // orphan
         w1 = 0x3
         0x8007ee4 ()             // 0x8007ee4(0x0, 0x3, 0x0, 0x0)
         jmp 0x8007ecc

}

/* ===== 0x08007ef0 ===== */
int sym.get_thread_pacga_key (int esi, int edx) {
    loc_0x8007ef0:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x21 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x22 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x1] = xzr    // arg2
        [x2] = xzr    // arg3
        [x3] = wzr    // arg4
        0x8007f20 ()  // 0x8007f20(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8007f68 // likely
            
    loc_0x8007f68:
        w0 = ~0x2
        jmp 0x8008008
         // do {
    loc_0x8008008:
        // CODE XREF from sym.get_thread_pacga_key @ 0x8007f6c
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x0800801c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8007f28
    loc_0x8007f44:
        x8 = [x19 + 0x1270] // 0xda // 218
        [x22] = x8
        x8 = [x19 + 0x1278] // 0xda // 218
        [x21] = x8
        mrs x8,s3_0_c0_c6_2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf00) == 0)
        b.eq 0x8007f70 // unlikely
            
    loc_0x8007f70:
        mrs x8,id_aa64isar1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf000000) == 0)
        b.eq 0x8007fac // unlikely
            
    loc_0x8007fac:
        mrs x8,midr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w8,w8,4, 0xc // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w8 - 0xd4d
        if (w8 == 0x3a)
        b.hi 0x8007f7c // likely
    loc_0x8007fc0:
        w9 = 0x1
        x8 = x9 << x8
        x9 = 0x3
        x9 = 0x538
        if ((x8 & x9) == 0)
        b.ne 0x8007f60 // likely
    loc_0x8007fd8:
        jmp 0x8007f7c
    loc_0x08007f60: // orphan
             w8 = 0x3
             jmp 0x8007f80

    loc_0x08007f7c: // orphan
         // CODE XREF from sym.get_thread_pacga_key @ 0x8007fd8
         w8 = 0x5

    loc_0x08007f80: // orphan
         // CODE XREF from sym.get_thread_pacga_key @ 0x8007f64
         x0 = x19 + 0x40
         [x20] = w8
         jmp 0x8007fdc

    loc_0x08007f9c: // orphan
         dmb ishld
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8007fa4 ()             // 0x8007fa4(0x0, 0x0, 0x0, 0x0)
         jmp 0x8008004

    loc_0x08007fdc: // orphan
         // CODE XREF from sym.get_thread_pacga_key @ 0x8007f88
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08007fe4: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8007fe4     // unlikely

    loc_0x08007ff4: // orphan
         if (w8 == 1)
         b.eq 0x8007f9c           // unlikely

    loc_0x08007ffc: // orphan
         if (w8 == 0)
         // XREFS: STRING 0x0800858c  STRING 0x0800859c  STRING 0x080085bc  
         // XREFS: STRING 0x080085cc  STRING 0x080087f8  STRING 0x08008808  
         // XREFS: STRING 0x08008828  STRING 0x08008838  STRING 0x08008a74  
         // XREFS: STRING 0x08008a84  STRING 0x08008aa4  STRING 0x08008ab4  
         // XREFS: STRING 0x08008cf0  STRING 0x08008d00  STRING 0x08008d20  
         // XREFS: STRING 0x08008d30  STRING 0x08008e8c  STRING 0x08008e9c  
         jmp ifle 0x8008020       // likely

    loc_0x08008004: // orphan
         // CODE XREFS from sym.get_thread_pacga_key @ 0x8007fa8, 0x8008028
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008020: // orphan
         w1 = 0x3
         0x8008024 ()             // 0x8008024(0x0, 0x3, 0x0, 0x0)
         jmp 0x8008004

}

/* ===== 0x08008030 ===== */
int sym.get_thread_pacia_key (int esi, int edx) {
    loc_0x8008030:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        x21 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x22 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x1] = xzr    // arg2
        [x2] = xzr    // arg3
        [x3] = wzr    // arg4
        0x8008060 ()  // 0x8008060(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x80080a8 // likely
            
    loc_0x80080a8:
        w0 = ~0x2
        jmp 0x8008148
         // do {
    loc_0x8008148:
        // CODE XREF from sym.get_thread_pacia_key @ 0x80080ac
        (x20, 2) = 3
        (x22, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x0800815c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8008068
    loc_0x8008084:
        x8 = [x19 + 0x1230] // 0xda // 218
        [x22] = x8
        x8 = [x19 + 0x1238] // 0xda // 218
        [x21] = x8
        mrs x8,s3_0_c0_c6_2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf00) == 0)
        b.eq 0x80080b0 // unlikely
            
    loc_0x80080b0:
        mrs x8,id_aa64isar1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf000000) == 0)
        b.eq 0x80080ec // unlikely
            
    loc_0x80080ec:
        mrs x8,midr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w8,w8,4, 0xc // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w8 - 0xd4d
        if (w8 == 0x3a)
        b.hi 0x80080bc // likely
    loc_0x8008100:
        w9 = 0x1
        x8 = x9 << x8
        x9 = 0x3
        x9 = 0x538
        if ((x8 & x9) == 0)
        b.ne 0x80080a0 // likely
    loc_0x8008118:
        jmp 0x80080bc
    loc_0x080080a0: // orphan
             w8 = 0x3
             jmp 0x80080c0

    loc_0x080080bc: // orphan
         // CODE XREF from sym.get_thread_pacia_key @ 0x8008118
         w8 = 0x5

    loc_0x080080c0: // orphan
         // CODE XREF from sym.get_thread_pacia_key @ 0x80080a4
         x0 = x19 + 0x40
         // CODE XREF from sym.get_target_task @ +0x4c
         [x20] = w8
         jmp 0x800811c

    loc_0x080080dc: // orphan
         dmb ishld
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80080e4 ()             // 0x80080e4(0x0, 0x0, 0x0, 0x0)
         jmp 0x8008144

    loc_0x0800811c: // orphan
         // CODE XREF from sym.get_thread_pacia_key @ 0x80080c8
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08008124: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8008124     // unlikely

    loc_0x08008134: // orphan
         if (w8 == 1)
         b.eq 0x80080dc           // unlikely

    loc_0x0800813c: // orphan
         if (w8 == 0)
         jmp ifle 0x8008160       // likely

    loc_0x08008144: // orphan
         // CODE XREFS from sym.get_thread_pacia_key @ 0x80080e8, 0x8008168
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08008160: // orphan
         w1 = 0x3
         0x8008164 ()             // 0x8008164(0x0, 0x3, 0x0, 0x0)
         jmp 0x8008144

}

/* ===== 0x08008170 ===== */
int sym.bind_thread_pacga_key (int esi, int edx) {
    loc_0x8008170:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = w1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x800818c ()  // " \r" // 0x800818c(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8008334 // likely
            
    loc_0x8008334:
        // CODE XREFS from sym.bind_thread_pacga_key @ 0x8008270, 0x800837c
        w0 = ~0x2
         // do {
    loc_0x8008338:
        // CODE XREF from sym.bind_thread_pacga_key @ 0x80082fc
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08008348
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8008194
    loc_0x80081b0:
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80081b4 ()  // 0x80081b4(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800822c // likely
            
    loc_0x800822c:
        x0 = x19 + 0x40
        jmp 0x800830c
         // do {
    loc_0x800830c:
        // CODE XREF from sym.bind_thread_pacga_key @ 0x8008230
        w9 = 0x1
        prfm pstl1strm,[x0]
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80081bc
    loc_0x80081d8:
        x8 = [x19 + 0x1270] // 0xda // 218
        mrs x10,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x20 == x10)
        [x20 + 0x1270] = x8
        x9 = [x19 + 0x1278] // 0xda // 218
        [x20 + 0x1278] = x9
        b.ne 0x8008204 // unlikely
            
    loc_0x8008204:
        x0 = x20 + 0x40
        jmp 0x8008274
         // do {
    loc_0x8008274:
        // CODE XREF from sym.bind_thread_pacga_key @ 0x8008208
        w9 = 0x1
        prfm pstl1strm,[x0]
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800821c: // orphan
             dmb ishld
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             0x8008224 ()             // 0x8008224(0x0, 0x0, 0x0, 0x0)
             jmp 0x800829c

    loc_0x08008244: // orphan
         dmb ishld
         jmp 0x8008268

    loc_0x0800824c: // orphan
         x0 = x19 + 0x40
         jmp 0x800834c

    loc_0x08008264: // orphan
         dmb ishld

    loc_0x08008268: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x8008248
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800826c ()             // "1" // 0x800826c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8008334

    loc_0x0800827c: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800827c     // unlikely

    loc_0x0800828c: // orphan
         if (w8 == 1)
         b.eq 0x800821c           // unlikely

    loc_0x08008294: // orphan
         if (w8 == 0)
         jmp ifle 0x80082c4       // likely

    loc_0x0800829c: // orphan
         // CODE XREFS from sym.bind_thread_pacga_key @ 0x8008228, 0x80082cc
         x0 = x19 + 0x40
         jmp 0x80082d0

    loc_0x080082b4: // orphan
         dmb ishld
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80082bc ()             // 0x80082bc(0x0, 0x0, 0x0, 0x0)
         jmp 0x80082f8

    loc_0x080082c4: // orphan
         w1 = 0x3
         0x80082c8 ()             // 0x80082c8(0x0, 0x3, 0x0, 0x0)
         jmp 0x800829c

    loc_0x080082d0: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x80082a0
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x080082d8: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x80082d8     // unlikely

    loc_0x080082e8: // orphan
         if (w8 == 1)
         b.eq 0x80082b4           // unlikely

    loc_0x080082f0: // orphan
         if (w8 == 0)
         jmp ifle 0x8008300       // likely

    loc_0x080082f8: // orphan
         // CODE XREFS from sym.bind_thread_pacga_key @ 0x80082c0, 0x8008308
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8008338

    loc_0x08008300: // orphan
         w1 = 0x3
         0x8008304 ()             // 0x8008304(0x0, 0x3, 0x0, 0x0)
         jmp 0x80082f8

    loc_0x08008314: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8008314     // unlikely

    loc_0x08008324: // orphan
         if (w8 == 1)
         b.eq 0x8008244           // unlikely

    loc_0x0800832c: // orphan
         if (w8 == 0)
         jmp ifle 0x8008374       // likely

    loc_0x0800834c: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x8008250
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08008354: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8008354     // unlikely

    loc_0x08008364: // orphan
         if (w8 == 1)
         b.eq 0x8008264           // unlikely

    loc_0x0800836c: // orphan
         if (w8 == 0)
         jmp ifgt 0x8008334       // unlikely

    loc_0x08008374: // orphan
         w1 = 0x3
         0x8008378 ()             // 0x8008378(0x0, 0x3, 0x0, 0x0)
         jmp 0x8008334

}

/* ===== 0x0800ec5c ===== */
int sym.inline_hook_install_count (int esi, int edx) {
    loc_0x800ec5c:
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x600
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w23 = ~0x15
        x8 = [x8 + 0x638] // 0xcf // 207
        [x29 = x8
        if !x0 jmp 0x800f10c // likely
            
    loc_0x800f10c:
        // CODE XREF from sym.inline_hook_install_count @ 0x800ecac
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x638] // 0xcf // 207
        ldur x9,[x29,-0x10]
        if (x8 == x9)
        b.ne 0x800f244 // likely
            
    loc_0x800f244:
        0x800f244 ()  // 0x800f244(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x800f248:
        // CODE XREF from sym.inline_hook_install_count @ 0x800f188
        x8 = 0x800f000
        x8 = x8 + 0
        prfm pstl1strm,[x8]
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800ec94
    loc_0x800eca0:
        if (w20 == 0x20)
        b.ls 0x800ecb0 // likely
            
    loc_0x800ecb0:
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x800e000
        x0 = x0 + 0   // int64_t arg1
        0x800ecbc ()  // 0x800ecbc(0x800e000, 0x0, 0x0, 0x0)
        x8 = var_50h_2
        w24 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x25 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = var_e4h
        w20 = w20     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w26 = ~0
        w22 = 0x38    // '8'
        x27 = var_230h
        [sp, 0x20] = (x20,2)
        jmp 0x800ed1c
         // do {
    loc_0x800ed1c:
        // CODE XREF from sym.inline_hook_install_count @ 0x800ece4
        madd x8,x25,x22, x19
        x21 = x8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x21 + 0x30]! // 0xdc // 220
        if w9 jmp 0x800ed08 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800ece8: // orphan
             x0 = var_230h
             x1 = var_40h_2
             w2 = 0x4
             blr x8                   // xzr(0x178230, 0x178040, 0x4, 0x0)
             if w0 jmp 0x800f170      // likely

    loc_0x0800ecfc: // orphan
         w8 = 0x1
         x20 = [var_20h_2]        // 0x4 // 4
         [x21] = (byte) w8

    loc_0x0800ed08: // orphan
         x25 = x25 + 1
         w24 = w24 - 1
         w26 = w26 + 1
         if (x25 == x20)
         b.eq 0x800f148           // unlikely

    loc_0x0800ed2c: // orphan
         madd x28,x25,x22, x19
         x0 = [x28 + 8]!          // 0xe3 // 227
         if x0 jmp 0x800ed4c      // likely

    loc_0x0800ed38: // orphan
         x0 = [x8]                // 0xcf // 207
         if !x0 jmp 0x800f150     // unlikely

    loc_0x0800ed40: // orphan
         0x800ed40 ()             // 0x800ed40(0x0, 0x0, 0x0, 0x0)
         [x28] = x0
         if !x0 jmp 0x800f158     // likely

    loc_0x0800ed4c: // orphan
         madd x23,x25,x22, x19
         x8 = [x23 + 0x10]!       // 0xde // 222
         if !x8 jmp 0x800f150     // unlikely

    loc_0x0800ed58: // orphan
         w8 = 0x38                // '8'
         x1 = var_230h            // int64_t arg2
         madd x22,x25,x8, x19
         w8 = [x0]                // 0xc7 // 199
         x9 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = x22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x9 + 0x20]! = w8
         [sp, 0x30] = (x9,2)
         x28 = x22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = [x0 + 4]            // 0xc7 // 199
         [x20 + 0x24]! = w9
         w9 = [x0 + 8]            // 0xc7 // 199
         [x28 + 0x28]! = w9
         w9 = [x0 + 0xc]          // 0xc7 // 199
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h] = xzr
         [var_0h_2] = xzr
         [var_0h_3] = xzr
         [var_0h_4] = xzr
         [var_0h_5] = xzr
         [var_0h_6] = xzr
         [var_0h_7] = xzr
         [x22 + 0x2c]! = w9
         [var_0h_8] = xzr
         [var_230h] = xzr
         0x800edbc ()             // 0x800edbc(0x0, 0x178230, 0x0, 0x0)
         w8 = [var_23ch]          // 0x4 // 4
         if (w8 == 0x2c)
         b.hi 0x800ede8           // unlikely

    loc_0x0800edcc: // orphan
         w9 = 0x1
         x8 = x9 << x8
         x9 = 0xe300
         x9 = 0xf
         x9 = 0x1800
         if ((x8 & x9) == 0)
         b.ne 0x800f0d8           // likely

    loc_0x0800ede8: // orphan
         w0 = [x20]               // 0xdb // 219
         x1 = var_230h            // int64_t arg2
         [var_0h] = xzr
         [var_0h_2] = xzr
         [var_0h_3] = xzr
         [var_0h_4] = xzr
         [var_0h_5] = xzr
         [var_0h_6] = xzr
         [var_0h_7] = xzr
         [var_0h_8] = xzr
         [var_230h] = xzr
         0x800ee14 ()             // 0x800ee14(0x0, 0x178230, 0x0, 0x0)
         w8 = [var_23ch]          // 0x4 // 4
         if (w8 == 0x2c)
         b.hi 0x800ee40           // unlikely

    loc_0x0800ee24: // orphan
         w9 = 0x1
         x8 = x9 << x8
         x9 = 0xe300
         x9 = 0xf
         x9 = 0x1800
         if ((x8 & x9) == 0)
         b.ne 0x800f0d8           // likely

    loc_0x0800ee40: // orphan
         w0 = [x28]               // 0xe3 // 227
         x1 = var_230h            // int64_t arg2
         [var_0h] = xzr
         [var_0h_2] = xzr
         [var_0h_3] = xzr
         [var_0h_4] = xzr
         [var_0h_5] = xzr
         [var_0h_6] = xzr
         [var_0h_7] = xzr
         [var_0h_8] = xzr
         [var_230h] = xzr
         0x800ee6c ()             // 0x800ee6c(0x0, 0x178230, 0x0, 0x0)
         w8 = [var_23ch]          // 0x4 // 4
         if (w8 == 0x2c)
         b.hi 0x800ee98           // unlikely

    loc_0x0800ee7c: // orphan
         w9 = 0x1
         x8 = x9 << x8
         x9 = 0xe300
         x9 = 0xf
         x9 = 0x1800
         if ((x8 & x9) == 0)
         b.ne 0x800f0d8           // likely

    loc_0x0800ee98: // orphan
         w0 = [x22]               // 0xdd // 221
         x1 = var_230h            // int64_t arg2
         [var_0h] = xzr
         [var_0h_2] = xzr
         [var_0h_3] = xzr
         [var_0h_4] = xzr
         [var_0h_5] = xzr
         [var_0h_6] = xzr
         [var_0h_7] = xzr
         [var_0h_8] = xzr
         [var_230h] = xzr
         0x800eec4 ()             // 0x800eec4(0x0, 0x178230, 0x0, 0x0)
         w8 = [var_23ch]          // 0x4 // 4
         if (w8 == 0x2c)
         b.hi 0x800eef0           // unlikely

    loc_0x0800eed4: // orphan
         w9 = 0x1
         x8 = x9 << x8
         x9 = 0xe300
         x9 = 0xf
         x9 = 0x1800
         if ((x8 & x9) == 0)
         b.ne 0x800f0d8           // likely

    loc_0x0800eef0: // orphan
         x8 = 0x800e000
         x8 = [x8]                // 0xcf // 207
         x8 = x8 | 0xffffffff00000000
         x9 = ~x8
         if (x8 != 1)
         rbit x9,x9
         w8 = 0x20
         clz x9,x9
         csel x8,x8,x9, eq
         if (w8 == 0x1f)
         b.hi 0x800f160           // unlikely

    loc_0x0800ef1c: // orphan
         w9 = 0x1
         x12 = x9 << x8
         [var_0h_9] = x12
         jmp 0x800f0b8

    loc_0x0800ef38: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800f0d4
         w11 = 0x38               // '8'
         x13 = [var_38h]          // 0x4 // 4
         w12 = 0x1e0
         x10 = 0x800e000
         x10 = x10 + 0
         madd x9,x25,x11, x19
         umaddl x20,w8,w12, x10
         x10 = [x13]              // 0xd4 // 212
         madd x11,x25,x11, x19
         x9 = x9 + 0x18
         x0 = var_50h_2           // int64_t arg1
         x1 = 0x800e000
         x1 = x1 + 0              // int64_t arg2
         w2 = 0x1d0
         x22 = [x23]              // 0xde // 222
         x28 = x10 + 0x10
         [var_18h] = x9
         [x9] = x20
         [x11 + 0x34]! = w8
         [var_8h] = x11
         0x800ef88 ()             // 0x800ef88(0x178050, 0x800e000, 0x1d0, 0x0)
         x9 = [var_30h_2]         // 0x4 // 4
         x10 = 0x800e000
         [var_0h_10] = x28
         [var_0h_11] = x22
         (x8, 2) = 3
         x23 = [x10]              // 0xd1 // 209
         x10 = [var_28h]          // 0x4 // 4
         [x10] = (x8,2)
         if x23 jmp 0x800efcc     // likely

    loc_0x0800efb0: // orphan
         x0 = 0x800e000
         x0 = x0 + 0              // int64_t arg1
         0x800efb8 ()             // 0x800efb8(0x800e000, 0x0, 0x0, 0x0)
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = 0x800e000
         [x8] = x0
         if !x0 jmp 0x800f180     // unlikely

    loc_0x0800efcc: // orphan
         x0 = var_230h            // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x3c0
         0x800efd8 ()             // 0x800efd8(0x178230, 0x0, 0x3c0, 0x0)
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800efe0: // orphan
         [x27 + x8] = x20
         x8 = x8 + 8
         x20 = x20 + 4
         if (x8 == 0x3c0)
         b.ne 0x800efe0           // likely

    loc_0x0800eff4: // orphan
         w22 = 0x38               // '8'
         x28 = [var_38h]          // 0x4 // 4
         if x23 jmp 0x800f01c     // unlikely

    loc_0x0800f000: // orphan
         // XREFS(90)
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f008 ()             // 0x800f008(0x800f000, 0x0, 0x0, 0x0)
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = 0x800f000
         [x8] = x0
         if !x0 jmp 0x800f180     // unlikely

    loc_0x0800f01c: // orphan
         x0 = var_230h
         x1 = var_50h_2
         w2 = 0x78                // 'x'
         blr x23                  // xzr(0x178230, 0x178050, 0x78, 0x0)
         if w0 jmp 0x800f168      // likely

    loc_0x0800f030: // orphan
         x8 = [var_18h]           // 0x4 // 4
         x10 = 0x50               // 'P'
         x10 = 0x5800
         x20 = [x28]              // 0xe3 // 227
         x10 = 0x200
         x9 = [x8]                // 0xcf // 207
         x8 = 0x800f000
         x10 = 0xd65f             // '_\xd6'
         x8 = [x8]                // 0xcf // 207
         [sp, 0x40] = (x10,2)
         if x8 jmp 0x800f078      // likely

    loc_0x0800f05c: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f064 ()             // 0x800f064(0x800f000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x800f000
         [x9] = x0
         if !x0 jmp 0x800f1a4     // unlikely

    loc_0x0800f078: // orphan
         x9 = x20 + 4
         x10 = x20 + 8
         x11 = x20 + 0xc
         [var_230h] = x20
         [var_0h_8] = x9
         [var_0h_7] = x10
         [var_0h_6] = x11
         if x8 jmp 0x800ece8      // unlikely

    loc_0x0800f098: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f0a0 ()             // 0x800f0a0(0x800f000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x800f000
         [x9] = x0
         if x0 jmp 0x800ece8      // likely

    loc_0x0800f0b4: // orphan
         jmp 0x800f1a4

    loc_0x0800f0b8: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800ef28
         x11 = 0x800f000
         x11 = x11 + 0
         prfm pstl1strm,[x11]

    loc_0x0800f0c4: // orphan
         ldxr x9,[x11]
         x9 = x9 | x12
         stxr w10,x9,[x11]
         if w10 jmp 0x800f0c4     // unlikely

    loc_0x0800f0d4: // orphan
         jmp 0x800ef38

    loc_0x0800f0d8: // orphan
         w23 = ~0x5e              // '^'

    loc_0x0800f0dc: // orphan
         // CODE XREFS from sym.inline_hook_install_count @ 0x800f154, 0x800f15c, 0x800f164, 0x800f240
         if (w25 == 1)
         b.mi 0x800f100           // likely

    loc_0x0800f0e4: // orphan
         // STRING XREF from sym.inline_hook_remove_all @ 0x800f4d4
         w8 = 0x38                // '8'
         umaddl x19,w26,w8, x19

    loc_0x0800f0ec: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.hook_entry_remove () // sym.hook_entry_remove(0x0, 0x0)
         w24 = w24 + 1
         x19 = x19 - 0x38
         b.lo 0x800f0ec           // likely

    loc_0x0800f100: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800f14c
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f108 ()             // 0x800f108(0x800f000, 0x0, 0x0, 0x0)

    loc_0x0800f148: // orphan
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800f100

    loc_0x0800f150: // orphan
         w23 = ~0x15
         jmp 0x800f0dc

    loc_0x0800f158: // orphan
         w23 = ~0x1
         jmp 0x800f0dc

    loc_0x0800f160: // orphan
         w23 = ~0x1b
         jmp 0x800f0dc

    loc_0x0800f168: // orphan
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800f184

    loc_0x0800f170: // orphan
         x8 = 0x800f000
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         jmp 0x800f1a8

    loc_0x0800f180: // orphan
         w23 = ~0x1

    loc_0x0800f184: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800f16c
         (x12, 2) = 3
         jmp 0x800f248

    loc_0x0800f198: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800f264
         w8 = ~0
         [x12] = w8
         jmp 0x800f238

    loc_0x0800f1a4: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800f0b4
         w23 = ~0x1

    loc_0x0800f1a8: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800f17c
         x20 = [x28]              // 0xe3 // 227
         if x8 jmp 0x800f1cc      // unlikely

    loc_0x0800f1b0: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f1b8 ()             // 0x800f1b8(0x800f000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x800f000
         [x9] = x0
         if !x0 jmp 0x800f218     // unlikely

    loc_0x0800f1cc: // orphan
         x9 = x20 + 4
         // CODE XREF from sym.inline_hook_remove_all @ 0x800f474
         x10 = x20 + 8
         x11 = x20 + 0xc
         [var_230h] = x20
         [var_0h_8] = x9
         [var_0h_7] = x10
         [var_0h_6] = x11
         if x8 jmp 0x800f208      // unlikely

    loc_0x0800f1ec: // orphan
         x0 = 0x800f000
         x0 = x0 + 0              // int64_t arg1
         0x800f1f4 ()             // 0x800f1f4(0x800f000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x800f000
         [x9] = x0
         if !x0 jmp 0x800f218     // unlikely

    loc_0x0800f208: // orphan
         x0 = var_230h
         x1 = [var_30h_2]         // 0x4 // 4
         w2 = 0x4
         blr x8                   // xzr(0x178230, 0x20, 0x4, 0x0)

    loc_0x0800f218: // orphan
         jmp 0x800f268

    loc_0x0800f22c: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800f288
         x9 = [var_8h]            // 0x4 // 4
         w8 = ~0
         [x9] = w8

    loc_0x0800f238: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800f1a0
         x8 = [var_18h]           // 0x4 // 4
         [x8] = xzr
         jmp 0x800f0dc

    loc_0x0800f254: // orphan
         ldxr x9,[x8]
         bic x9,x9,x11            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w10,x9,[x8]
         if w10 jmp 0x800f254     // unlikely

    loc_0x0800f264: // orphan
         jmp 0x800f198

    loc_0x0800f268: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800f218
         x8 = 0x800f000
         x8 = x8 + 0
         x11 = [var_0h_9]         // 0x4 // 4
         prfm pstl1strm,[x8]

    loc_0x0800f278: // orphan
         ldxr x9,[x8]
         bic x9,x9,x11            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w10,x9,[x8]
         if w10 jmp 0x800f278     // unlikely

    loc_0x0800f288: // orphan
         jmp 0x800f22c

}

/* ===== 0x0800f3b0 ===== */
int sym.inline_hook_remove_count (int esi, int edx) {
    loc_0x800f3b0:
        // DATA XREF from sym.inline_hook_remove_all @ 0x800f4ac
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x800f414 // likely
            
    loc_0x800f414:
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // " "
        hint 0x1d
        0x0800f424
         // } else {
    loc_0x800f3c8:
        w20 = w1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w21 = w1 - 1  // arg2
        b.lt 0x800f414 // likely
        }
        return eax;
    loc_0x800f3d4:
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f3e0 ()  // 0x800f3e0(0x800f000, 0x0, 0x0, 0x0)
        w8 = 0x38     // '8'
        w20 = w20 + 1
        umaddl x19,w21,w8, x19
         // do {
    loc_0x800f3f0:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        sym.hook_entry_remove () // sym.hook_entry_remove(0x0, 0x0)
        w20 = w20 - 1
        x19 = x19 - 0x38
        if (w20 == 1)
        jmp ifgt 0x800f3f0 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x800f408:
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        0x800f410 ()  // 0x800f410(0x800f000, 0x0, 0x0, 0x0)
}

/* ===== 0x0800ad70 ===== */
int sym.check_target_can_hijack (int esi, int edx) {
    loc_0x800ad70:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = [x0]     // 0xc7 // 199 // arg1
        w8 = 0x9000
        w9 = w1 & 0x1f000000
        w9 = w9 | 0x80000000
        if (w9 == w8)
        b.eq 0x800b03c // unlikely
            
    loc_0x800b03c:
        x0 = 0x800b000
        x0 = x0 + 0   // int64_t arg1
        0x800b044 ()  // 0x800b044(0x800b000, 0x0, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800b04c:
        // CODE XREF from sym.check_target_can_hijack @ 0x800b038
        (x29, 2) = 3
        hint 0x1d
        0x0800b054
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800ad94
    loc_0x800ada4:
        w9 = w1 & 0xff000000
        w8 = 0x5400
        if (w9 == w8)
        b.eq 0x800b03c // unlikely
    loc_0x800adb4:
        w8 = w1 | 0x2000000
        w10 = 0x3600
        w8 = w8 & 0x7e000000
        if (w8 == w10)
        b.eq 0x800b03c // unlikely
    loc_0x800adc8:
        w8 = 0x9800
        if (w9 == w8)
        b.eq 0x800b03c // unlikely
    loc_0x800add4:
        w9 = 0xbf00
        w11 = 0x1800
        w10 = w1 & w9
        if (w10 == w11)
        b.eq 0x800b03c // unlikely
    loc_0x800ade8:
        w10 = w1 & 0x3f000000
        w11 = 0x1c00
        if (w10 == w11)
        b.eq 0x800b03c // unlikely
    loc_0x800adf8:
        w1 = [x0 + 4] // 0xc7 // 199 // arg1
        w10 = 0x9f00
        w12 = 0x9000
        w11 = w1 & w10
        w11 = w11 | 0x80000000 // pstate
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800ae14:
        w11 = w1 | 0x80000000 // pstate
        w11 = w11 >> 0x1a
        if (w11 == 0x25)
        b.eq 0x800b03c // unlikely
    loc_0x800ae24:
        w11 = w1 & 0xff000000
        w12 = 0x5400
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800ae34:
        w12 = w1 | 0x2000000
        w13 = 0x3600
        w12 = w12 & 0x7e000000
        if (w12 == w13)
        b.eq 0x800b03c // unlikely
    loc_0x800ae48:
        if (w11 == w8)
        b.eq 0x800b03c // likely
    loc_0x800ae50:
        w11 = w1 & w9
        w12 = 0x1800
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800ae60:
        w11 = w1 & 0x3f000000
        w12 = 0x1c00
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800ae70:
        w1 = [x0 + 8] // 0xc7 // 199 // arg1
        w12 = 0x9000
        w11 = w1 & w10
        w11 = w11 | 0x80000000 // pstate
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800ae88:
        w11 = w1 | 0x80000000 // pstate
        w11 = w11 >> 0x1a
        if (w11 == 0x25)
        b.eq 0x800b03c // unlikely
    loc_0x800ae98:
        w11 = w1 & 0xff000000
        w12 = 0x5400
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800aea8:
        w12 = w1 | 0x2000000
        w12 = w12 & 0x7e000000
        if (w12 == w13)
        b.eq 0x800b03c // unlikely
    loc_0x800aeb8:
        if (w11 == w8)
        b.eq 0x800b03c // likely
    loc_0x800aec0:
        w11 = w1 & w9
        w12 = 0x1800
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800aed0:
        w11 = w1 & 0x3f000000
        w12 = 0x1c00
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800aee0:
        w1 = [x0 + 0xc] // 0xc7 // 199 // arg1
        w12 = 0x9000
        w11 = w1 & w10
        w11 = w11 | 0x80000000 // pstate
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800aef8:
        w11 = w1 | 0x80000000 // pstate
        w11 = w11 >> 0x1a
        if (w11 == 0x25)
        b.eq 0x800b03c // unlikely
    loc_0x800af08:
        w11 = w1 & 0xff000000
        w12 = 0x5400
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800af18:
        w12 = w1 | 0x2000000
        w12 = w12 & 0x7e000000
        if (w12 == w13)
        b.eq 0x800b03c // unlikely
    loc_0x800af28:
        if (w11 == w8)
        b.eq 0x800b03c // likely
    loc_0x800af30:
        w11 = w1 & w9
        w12 = 0x1800
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800af40:
        w11 = w1 & 0x3f000000
        w12 = 0x1c00
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800af50:
        w1 = [x0 + 0x10] // 0xc7 // 199 // arg1
        w12 = 0x9000
        w11 = w1 & w10
        w11 = w11 | 0x80000000 // pstate
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800af68:
        w11 = w1 | 0x80000000 // pstate
        w11 = w11 >> 0x1a
        if (w11 == 0x25)
        b.eq 0x800b03c // unlikely
    loc_0x800af78:
        w11 = w1 & 0xff000000
        w12 = 0x5400
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800af88:
        w12 = w1 | 0x2000000
        w12 = w12 & 0x7e000000
        if (w12 == w13)
        b.eq 0x800b03c // unlikely
    loc_0x800af98:
        if (w11 == w8)
        b.eq 0x800b03c // likely
    loc_0x800afa0:
        w11 = w1 & w9
        w12 = 0x1800
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800afb0:
        w11 = w1 & 0x3f000000
        w12 = 0x1c00
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800afc0:
        w1 = [x0 + 0x14] // 0xc7 // 199 // arg1
        w11 = 0x9000
        w10 = w1 & w10
        w10 = w10 | 0x80000000 // pstate
        if (w10 == w11)
        b.eq 0x800b03c // unlikely
    loc_0x800afd8:
        w10 = w1 | 0x80000000 // pstate
        w10 = w10 >> 0x1a
        if (w10 == 0x25)
        b.eq 0x800b03c // unlikely
    loc_0x800afe8:
        w10 = w1 & 0xff000000
        w11 = 0x5400
        if (w10 == w11)
        b.eq 0x800b03c // unlikely
    loc_0x800aff8:
        w11 = w1 | 0x2000000
        w12 = 0x3600
        // CODE XREFS from sym.check_target_can_hijack @ 0x800b03c, 0x800b040
        w11 = w11 & 0x7e000000
        if (w11 == w12)
        b.eq 0x800b03c // unlikely
    loc_0x800b00c:
        if (w10 == w8)
        b.eq 0x800b03c // likely
    loc_0x800b014:
        w8 = w1 & w9
        w9 = 0x1800
        if (w8 == w9)
        b.eq 0x800b03c // unlikely
    loc_0x800b024:
        w8 = w1 & 0x3f000000
        w9 = 0x1c00
        if (w8 == w9)
        b.eq 0x800b03c // unlikely
    loc_0x800b034:
        w0 = 0x1
        jmp 0x800b04c
}

/* ===== 0x08021968 ===== */
int sym.arm64_decode_insn (int esi, int edx) {
    loc_0x8021968:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
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
        if w9 jmp 0x80219c0 // unlikely
            
    loc_0x80219c0:
        ubfx w9,w8,0x19, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x3
        // CODE XREFS from sym.arm64_decode_insn @ 0x80219e0, 0x80219e4
        if (w9 == 0xf)
        b.hi 0x80219ac // unlikely
            
    loc_0x80219ac:
        // XREFS: CODE 0x080219f4  CODE 0x08021a04  CODE 0x08021a14
        // XREFS: CODE 0x08021a24  CODE 0x08021a34  CODE 0x08021a44
        [x19 + 4] = w0
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x080219bc
         // } else {
    loc_0x80219d0:
        x10 = 0x8021000
        x10 = x10 + 0 // "\nm"
        x11 = 0x80219a0
        w12 = (byte) [x10 + x9] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12,lsl 2 // "?="
        br x11
         // } else {
        }
        return eax;
}

/* ===== 0x0800f590 ===== */
int sym.ret_trampoline_finish_task_switch (int esi, int edx) {
    loc_0x800f590:
        [sp + 8] = x0 // arg1 // "4"
        sym.ret_work_finish_task_switch () // sym.ret_work_finish_task_switch(0x0, 0x0)
        (x16, 2) = 3
        ret x16
         // (break)
}

/* ===== 0x08022710 ===== */
int sym.arm64_decode_branch (int esi, int edx) {
    loc_0x8022710:
        w8 = w0 >> 0x10 // arg1
        if w8 jmp 0x8022730 // unlikely
            
    loc_0x8022730:
        w9 = 0x201f   // '\x1f '
        w8 = w0 & 0xfffff01f // arg1
        w9 = 0xd503
        if (w8 == w9)
        b.ne 0x8022790 // likely
            
    loc_0x8022790:
        w9 = 0xcfa1   // '\xa1\xcf'
        w8 = w0 & 0xfffff0ff // arg1
        w9 = 0x2afc   // '\xfc*'
        w8 = w8 + w9
        ror w8,w8,5
        if (w8 == 4)
        ccmp w8,1,4, ls
        b.eq 0x80227e8 // unlikely
            
    loc_0x80227e8:
        w8 = w0 & 0xffe0001f // arg1
        w9 = 0x2
        w9 = 0xd400
        if (w8 == w9)
        jmp ifle 0x80228e0 // unlikely
            
    loc_0x80228e0:
        w9 = 0x1
        w9 = 0xd400
        if (w8 == w9)
        b.eq 0x8022924 // unlikely
            
    loc_0x8022924:
        w9 = 0xa
         // do {
    loc_0x8022928:
        // CODE XREFS from sym.arm64_decode_branch @ 0x8022828, 0x8022904, 0x8022918, 0x8022920
        x10 = xzr | 0x400000004
        w11 = w0 >> 5 // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x20] = w9 // arg2
        [x1 + 8] = x10 // arg2
        [x1 + 0x24] = (half) w11
        0x08022940
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08022758: // orphan
             x8 = 0x8022000
             x8 = x8 + 0
             x10 = 0x8022770
             w11 = (byte) [x8 + x9]   // 0xd0000000cf // 893353197775
             x10 = x10 + x11,lsl 2    // 0x8022898 // "I" // fcn.08022898
             br x10                   // fcn.08022898

    loc_0x080227d0: // orphan
         if (w8 == 0x9f)
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x80226a4, 0x80226a8
         b.eq 0x8022834           // unlikely

    loc_0x080227d8: // orphan
         if (w8 == 0x5f)
         b.ne 0x802283c           // likely

    loc_0x080227e0: // orphan
         w9 = 0x6
         jmp 0x802284c

    loc_0x0802280c: // orphan
         w9 = 0xd420              // ' \xd4'
         if (w8 == w9)
         b.eq 0x802291c           // unlikely

    loc_0x08022818: // orphan
         w9 = 0xd440              // '@\xd4'
         if (w8 == w9)
         b.ne 0x8022944           // likely

    loc_0x08022824: // orphan
         w9 = 0xe
         jmp 0x8022928

    loc_0x0802282c: // orphan
         w9 = 0x8
         jmp 0x802284c

    loc_0x08022834: // orphan
         w9 = 0x7
         jmp 0x802284c

    loc_0x0802283c: // orphan
         w8 = 0xf00
         bics wzr,w8,w0           // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         b.ne 0x8022858           // likely

    loc_0x08022848: // orphan
         w9 = 0x9

    loc_0x0802284c: // orphan
         // CODE XREFS from sym.arm64_decode_branch @ 0x80227e4, 0x8022830, 0x8022838
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = w9         // arg2
         

    loc_0x08022858: // orphan
         w0 = 0x3
         

    loc_0x08022864: // orphan
         // CODE XREFS from sym.arm64_decode_branch @ 0x8022a8c, 0x8022ad8, 0x8022ae0
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0xc] = w9          // arg2
         

    loc_0x08022900: // orphan
         w9 = 0xb
         jmp 0x8022928

    loc_0x08022908: // orphan
         w0 = 0x1
         [x1 + 0xc] = wzr         // arg2
         

    loc_0x08022914: // orphan
         w9 = 0xc
         jmp 0x8022928

    loc_0x0802291c: // orphan
         w9 = 0xd
         jmp 0x8022928

    loc_0x08022944: // orphan
         w9 = 0x3e0
         w8 = w0 | 0x200000       // arg1
         w9 = 0xd6bf              // '\xbf\xd6'
         [x1 + 0x20] = wzr        // arg2
         if (w8 == w9)
         b.ne 0x802298c           // likely

    loc_0x0802295c: // orphan
         w10 = 0x3e0
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = 0xd69f             // '\x9f\xd6'
         x9 = 0x4
         if (w0 == w10)           // arg1
         w10 = 0xf
         x9 = 0x5
         cinc w10,w10,ne
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 8] = x9            // arg2
         [x1 + 0x20] = w10        // arg2
         

    loc_0x0802298c: // orphan
         w8 = w0 & 0xfff00000     // arg1
         w9 = 0xd530              // '0\xd5'
         if (w8 == w9)
         b.eq 0x80229b0           // unlikely

    loc_0x0802299c: // orphan
         w9 = 0xd510              // '\x10\xd5'
         if (w8 == w9)
         b.ne 0x80229f4           // likely

    loc_0x080229a8: // orphan
         w9 = 0x7
         jmp 0x80229b4

    loc_0x080229b0: // orphan
         w9 = 0x6

    loc_0x080229b4: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x80229ac
         w10 = 0x4
         w11 = w0 & 0x1f          // arg1
         ubfx w12,w0,0x13, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 8] = (w10,2)        // arg2
         ubfx w9,w0,0x10, 3       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1c] = (byte) w11 // arg2
         ubfx w10,w0,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w11,w0,8, 4         // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x27] = (byte) w12 // arg2
         [x1 + 0x28] = (byte) w9  // arg2
         ubfx w9,w0,5, 3          // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x29] = (byte) w10 // arg2
         [x1 + 0x2a] = (byte) w11 // arg2
         [x1 + 0x2b] = (byte) w9  // arg2
         

    loc_0x080229f4: // orphan
         w8 = w0 | 0x80000000     // arg1 // pstate
         w8 = w8 >> 0x1a
         if (w8 == 0x25)
         b.ne 0x8022a38           // likely

    loc_0x08022a04: // orphan
         ubfiz w11,w0,2, 0x1a     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w0 == 0)             // arg1
         w10 = 0x8
         w11 = w11 ^ loc.__kcfi_typeid_do_read_physical_memory // loc.imp.memmove
         x12 = xzr | 0xfffffffff8000000
         w9 = 0x4
         cinc w10,w10,lt
         x11 = x11 + x12
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1, 8] = (w9,2)         // arg2
         [x1 + 0x20] = x11        // arg2
         

    loc_0x08022a38: // orphan
         w8 = w0 & 0xfffffc1f     // arg1
         w9 = 0xd61f              // '\x1f\xd6'
         if (w8 == w9)
         b.eq 0x8022a60           // unlikely

    loc_0x08022a48: // orphan
         w9 = 0xd65f              // '_\xd6'
         if (w8 == w9)
         b.eq 0x8022a60           // unlikely

    loc_0x08022a54: // orphan
         w9 = 0xd63f              // '?\xd6'
         if (w8 == w9)
         b.ne 0x8022a90           // likely

    loc_0x08022a60: // orphan
         w9 = 0x4
         ubfx w10,w0,5, 5         // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = 0xd63f             // '?\xd6'
         if (w8 == w11)
         [x1 + 8] = w9            // arg2
         [x1 + 0x19] = (byte) w10 // arg2
         b.eq 0x8022ad4           // unlikely

    loc_0x08022a7c: // orphan
         w9 = 0xd61f              // '\x1f\xd6'
         if (w8 == w9)
         b.ne 0x8022adc           // likely

    loc_0x08022a88: // orphan
         w9 = 0xa
         jmp 0x8022864

    loc_0x08022a90: // orphan
         w8 = w0 & 0xfffffff0     // arg1
         w9 = 0x5400
         w8 = w8 & 0xff00001f
         if (w8 == w9)
         b.ne 0x8022ae4           // likely

    loc_0x08022aa4: // orphan
         w9 = w0 >> 3             // arg1
         x10 = 0x4
         w9 = w9 & 0x1ffffc
         x10 = 0xd
         w9 = w9 ^ 0x100000
         w11 = w0 & 0xf           // arg1
         x9 = x9 - 0x100,lsl 12
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 8] = x10           // arg2
         [x1 + 0x28] = (byte) w11 // arg2
         [x1 + 0x20] = x9         // arg2
         

    loc_0x08022ad4: // orphan
         w9 = 0xb
         jmp 0x8022864

    loc_0x08022adc: // orphan
         w9 = 0xc                 // "\r"
         jmp 0x8022864

    loc_0x08022ae4: // orphan
         w8 = w0 & 0x7e000000     // arg1
         w9 = 0x3600
         if (w8 == w9)
         b.eq 0x8022b58           // unlikely

    loc_0x08022af4: // orphan
         w9 = 0x3400
         if (w8 == w9)
         b.ne 0x8022ba4           // likely

    loc_0x08022b00: // orphan
         if ((w0 & 0x1000000) == 0) // arg1
         w10 = 0xe
         w9 = 0x4
         cinc w10,w10,ne
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = 0x20
         if (w0 == 0)             // arg1
         w11 = w0 >> 0x1f         // arg1
         [x1, 8] = (w9,2)         // arg2
         w10 = w0 >> 3            // arg1
         w10 = w10 & 0x1ffffc
         w9 = 0x40                // '@'
         w10 = w10 ^ 0x100000
         csel w9,w9,w12, lt
         w12 = w0 & 0x1f          // arg1
         x10 = x10 - 0x100,lsl 12
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x14] = w11        // arg2
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         [x1 + 0x1c] = (byte) w12 // arg2
         [x1 + 0x20] = x10        // arg2
         

    loc_0x08022b58: // orphan
         if ((w0 & 0x1000000) == 0) // arg1
         w10 = 0x10
         w9 = 0x4
         cinc w10,w10,ne
         w12 = w0 >> 3            // arg1
         w11 = w0 >> 0x1a         // arg1
         w12 = w12 & 0xfffc
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = w11 & 0x20
         w12 = w12 ^ 0x8000
         bfxil w11,w0,0x13, 5     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w13 = w0 & 0x1f          // arg1
         [x1, 8] = (w9,2)         // arg2
         x9 = x12 - 8,lsl 12
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1c] = (byte) w13 // arg2
         [x1 + 0x29] = (byte) w11 // arg2
         [x1 + 0x20] = x9         // arg2
         

    loc_0x08022ba4: // orphan
         w9 = 0x4
         w0 = 0x1
         [x1 + 8] = x9            // arg2
         

}

/* ===== 0x08022bb8 ===== */
int sym.arm64_decode_ldst (int esi, int edx) {
    loc_0x8022bb8:
        ubfx w9,w0,0x18, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = 0x3
        w9 = w9 - 8
        if (w9 == 0x35)
        b.hi 0x8022dd8 // likely
            
    loc_0x8022dd8:
        // XREFS: CODE 0x0802344c  CODE 0x080234a4  CODE 0x080234b8
        // XREFS: CODE 0x08023634  CODE 0x0802363c  CODE 0x08023674
        // XREFS: CODE 0x08023680
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x08022ddc
         // } else {
    loc_0x8022bcc:
        x10 = 0x8022000
        x10 = x10 + 0
        x11 = 0x8022be4
        w12 = (byte) [x10 + x9] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12,lsl 2 // 0x8022fe0 // "-\x14"
        br x11
        }
        return eax;
}

/* ===== 0x0802205c ===== */
int sym.arm64_decode_data_processing_register (int esi, int edx) {
    loc_0x802205c:
        hint 0x19
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
        b.eq 0x8022148 // unlikely
            
    loc_0x8022148:
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
        w11 = 0x20
        w12 = 0x40    // '@'
        [x19, 0xc] = (w8,2)
        ubfx w8,w20,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w10,w20,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0x19] = (byte) w9
        csel w9,w12,w11, lt
        [x19 + 0x1b] = (byte) w8
        [x19 + 0x1a] = (byte) w10
        [x19 + 0x1f] = (byte) w9 // " " tmp
        tbnz w20,0x1f,0x8022228 // unlikely
            
    loc_0x8022228:
        w8 = [x19 + 0x14] // 0xda // 218
        w8 = w8 | 1
        [x19 + 0x14] = w8
        tbz w20,0x15,0x80221a0 // likely
            
    loc_0x80221a0:
        ubfx w8,w20,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w9,w20,0xa, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x3
        w10 = 0xc0    // '\xc0'
        bics wzr,w10,w20 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0x38] = (byte) w8
        [x19 + 0x39] = (byte) w9
        b.eq 0x802250c // unlikely
            
    loc_0x802250c:
        // XREFS: CODE 0x080221cc  CODE 0x08022258  CODE 0x08022274
        // XREFS: CODE 0x08022434  CODE 0x080224cc  CODE 0x080225c0
        // XREFS: CODE 0x080226bc
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08022518
         // } else {
    loc_0x80221c0:
        w8 = w20 & 0x80008000
        if (w8 == 8)
        b.ne 0x802225c // likely
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x8022090
    loc_0x80220a0:
        w8 = w20 & 0x1f000000
        w9 = 0xa00
        if (w8 == w9)
        b.ne 0x80221d0 // likely
            
    loc_0x80221d0:
        w8 = w20 & 0x3fe00000
        w9 = 0x1a80   // '\x80\x1a'
        if (w8 == w9)
        b.ne 0x8022278 // likely
            
    loc_0x8022278:
        w8 = w20 & 0x7fe00000
        w9 = 0x1ac0   // '\xc0\x1a'
        if (w8 == w9)
        b.ne 0x8022310 // likely
            
    loc_0x8022310:
        w8 = w20 & 0x7f000000
        w9 = 0x1b00
        if (w8 == w9)
        b.ne 0x80223d8 // likely
            
    loc_0x80223d8:
        w8 = w20 & 0x1ffffc00
        w9 = 0x1a00
        w8 = w8 & 0xffe0ffff
        if (w8 == w9)
        b.ne 0x8022438 // likely
            
    loc_0x8022438:
        w8 = 0x410
        w9 = 0x3a40   // '@:'
        w8 = 0x3fe0   // '\xe0?'
        w8 = w20 & w8
        if (w8 == w9)
        b.ne 0x802249c // likely
            
    loc_0x802249c:
        w8 = 0x6b04
        w8 = 0x3
        if (w8 == w20)
        b.ne 0x802259c // likely
            
    loc_0x802259c:
        w8 = w20 | 0x400
        w9 = 0xa3f    // '?\n'
        w9 = 0x6d6
        if (w9 == w8)
        b.ne 0x8022660 // likely
            
    loc_0x8022660:
        w8 = w20 & 0x7fff0000
        w9 = 0x5ac0   // '\xc0Z'
        if (w8 == w9)
        b.ne 0x80226b4 // likely
            
    loc_0x80226b4:
        w0 = 0x1
        [x19 + 0xc] = wzr
        jmp 0x802250c
    loc_0x080220b0: // orphan
             ubfx w10,w20,0x1d, 2     // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w9 = 0x1c
             w10 = w10 + 3
             w8 = w20 & 0x1f
             if (w20 == 0)
             ubfx w11,w20,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
             ubfx w12,w20,0xa, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
             [x19, 0xc] = (w9,2)
             w9 = 0x20
             w10 = 0x40               // '@'
             [x19 + 0x18] = (byte) w8
             ubfx w8,w20,0x10, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
             csel w9,w10,w9, lt
             [x19 + 0x19] = (byte) w11
             [x19 + 0x1b] = (byte) w12
             [x19 + 0x1a] = (byte) w8
             [x19 + 0x1f] = (byte) w9 // " " tmp
             tbz w20,0x1f,0x8022104   // likely

    loc_0x080220f8: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8

    loc_0x08022104: // orphan
         ubfx w8,w20,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w9,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w20 & 0x80008000
         if (w10 == 8)
         [x19 + 0x38] = (byte) w8
         [x19 + 0x39] = (byte) w9
         b.eq 0x8022254           // unlikely

    loc_0x08022120: // orphan
         tbz w20,0x15,0x8022130   // likely

    loc_0x08022124: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 0x800
         [x19 + 0x14] = w8

    loc_0x08022130: // orphan
         w8 = 0x6000
         bics wzr,w8,w20          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x8022270           // likely

    loc_0x0802213c: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218

    loc_0x08022140: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8022498
         w8 = w8 | 2
         jmp 0x8022504

    loc_0x080221cc: // orphan
         jmp 0x802250c

    loc_0x080221e0: // orphan
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
         [x19 + 0x1f] = (byte) w8 // " " tmp
         tbnz w20,0x1f,0x80223a0  // unlikely

    loc_0x08022220: // orphan
         tbnz w20,0xb,0x8022254   // unlikely

    loc_0x08022224: // orphan
         jmp 0x80223b0

    loc_0x08022254: // orphan
         w0 = 0x3
         jmp 0x802250c

    loc_0x0802225c: // orphan
         tbz w20,0x1d,0x802226c   // likely

    loc_0x08022260: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x14] = w8

    loc_0x0802226c: // orphan
         tbnz w20,0x1e,0x80224fc  // unlikely

    loc_0x08022270: // orphan
         // CODE XREF from fcn.08022704 @ 0x8022708
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x802250c

    loc_0x08022288: // orphan
         w8 = 0x1e
         w9 = w20 & 0x1f
         if (w20 == 0)
         ubfx w10,w20,5, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w11,w20,0xa, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w12,w20,0x10, 5     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0xc] = w8
         w8 = 0x20
         [x19 + 0x18] = (byte) w9
         w9 = 0x40                // '@'
         csel w8,w9,w8, lt
         [x19 + 0x19] = (byte) w10
         [x19 + 0x1b] = (byte) w11
         [x19 + 0x1a] = (byte) w12
         [x19 + 0x1f] = (byte) w8 // " " tmp
         tbz w20,0x1f,0x80222d4   // likely

    loc_0x080222c8: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8

    loc_0x080222d4: // orphan
         ubfx w8,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x1
         w10 = w8 - 2
         if (w10 == 0x19)
         b.hi 0x802250c           // likely

    loc_0x080222e8: // orphan
         x11 = 0x8022000
         x11 = x11 + 0
         w9 = 0x22                // '\"'
         w8 = 0x1c
         x12 = 0x8022308
         w13 = (byte) [x11 + x10] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2    // 0x8022704 // "h\x12"
         br x12

    loc_0x08022320: // orphan
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
         [x19 + 0x1f] = (byte) w9 // " " tmp
         tbz w20,0x1f,0x8022368   // likely

    loc_0x0802235c: // orphan
         w9 = [x19 + 0x14]        // 0xda // 218
         w9 = w9 | 1
         [x19 + 0x14] = w9

    loc_0x08022368: // orphan
         w0 = 0x3
         if (w10 == 6)
         b.hi 0x802250c           // unlikely

    loc_0x08022374: // orphan
         x11 = 0x8022000
         x11 = x11 + 0
         ubfx w9,w20,0xf, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = 0x8022390
         w13 = (byte) [x11 + x10] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2
         br x12

    loc_0x080223a0: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8
         tbnz w20,0xb,0x8022254   // unlikely

    loc_0x080223b0: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8022224
         w8 = w20 >> 0x1c
         ubfx w9,w20,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 & 2
         bfxil w8,w20,0xa, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x3c] = (byte) w9
         if !w8 jmp 0x8022418     // likely

    loc_0x080223c8: // orphan
         if (w8 == 1)
         b.ne 0x8022420           // likely

    loc_0x080223d0: // orphan
         w8 = 0x13
         jmp 0x802242c

    loc_0x080223ec: // orphan
         w8 = 0x21                // '!'
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19 + 0xc] = w8
         sym.arm64_decode_base_registers () // sym.arm64_decode_base_registers(0x0, 0x0)
         ubfx w8,w20,0x1d, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x80224d0     // likely

    loc_0x08022408: // orphan
         if (w8 == 1)
         b.ne 0x80224d8           // likely

    loc_0x08022410: // orphan
         w8 = 0x17
         jmp 0x80224e4

    loc_0x08022418: // orphan
         w8 = 0x12
         jmp 0x802242c

    loc_0x08022420: // orphan
         if (w8 == 2)
         w8 = 0x14
         cinc w8,w8,ne

    loc_0x0802242c: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x80223d4, 0x802241c
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x10] = w8
         jmp 0x802250c

    loc_0x08022450: // orphan
         w8 = 0x22                // '\"'
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19 + 0xc] = w8         // "!"
         sym.arm64_decode_base_registers () // sym.arm64_decode_base_registers(0x0, 0x0)
         if ((w20 & 0x40000000) == 0)
         w8 = 0x1a
         ubfx w9,w20,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         cinc w8,w8,eq
         w10 = w20 & 0xf
         [x19 + 0x3c] = (byte) w9
         [x19 + 0x10] = w8
         [x19 + 0x3d] = (byte) w10
         tbz w20,0xb,0x802213c    // likely

    loc_0x08022488: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w9 = (byte) [x19 + 0x1a] // 0xda // 218
         w8 = w8 | 0x2000
         [x19 + 0x20] = x9
         jmp 0x8022140

    loc_0x080224ac: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.arm64_decode_base_registers () // sym.arm64_decode_base_registers(0x0, 0x0)
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x8022388, 0x802238c
         tbz w20,0xd,0x80224c8    // likely

    loc_0x080224bc: // orphan
         w8 = (byte) [x19 + 0x19] // 0xda // 218
         if (w8 == 0x1f)
         b.ne 0x8022254           // likely

    loc_0x080224c8: // orphan
         w0 = 0x1
         jmp 0x802250c

    loc_0x080224d0: // orphan
         w8 = 0x16
         jmp 0x80224e4

    loc_0x080224d8: // orphan
         if (w8 == 2)
         w8 = 0x18
         cinc w8,w8,ne

    loc_0x080224e4: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x8022414, 0x80224d4
         [x19 + 0x10] = w8
         tbz w20,0x1d,0x80224f8   // likely

    loc_0x080224ec: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x14] = w8

    loc_0x080224f8: // orphan
         tbz w20,0x1e,0x8022270   // likely

    loc_0x080224fc: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 4

    loc_0x08022504: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x8022144
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x14] = w8

    loc_0x080225b0: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         sym.arm64_decode_base_registers () // " " // sym.arm64_decode_base_registers(0x0, 0x0)
         w0 = 0x1
         jmp 0x802250c

    loc_0x08022670: // orphan
         w8 = 0x23                // '#'
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19 + 0xc] = w8         // "\""
         sym.arm64_decode_base_registers () // sym.arm64_decode_base_registers(0x0, 0x0)
         ubfx w9,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 8)
         b.hi 0x80224c8           // unlikely

    loc_0x08022690: // orphan
         x10 = 0x8022000
         x10 = x10 + 0
         w8 = 0x32                // '2'
         x11 = 0x80226ac
         w12 = (byte) [x10 + x9]  // 0xd0000000d1 // 893353197777
         x11 = x11 + x12,lsl 2
         br x11

}

/* ===== 0x08023688 ===== */
int sym.arm64_decode_simd (int esi, int edx) {
    loc_0x8023688:
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
        b.ne 0x8023748 // likely
            
    loc_0x8023748:
        // CODE XREF from sym.arm64_decode_simd @ 0x80236d8
        w8 = 0xc00
        w13 = 0x400
        w8 = 0x9ff8   // '\xf8\x9f'
        w13 = 0xf00
        w9 = w0 & w8  // arg1
        if (w9 == w13)
        b.ne 0x80237b4 // likely
            
    loc_0x80237b4:
        // CODE XREF from sym.arm64_decode_simd @ 0x8023760
        w9 = 0x7c00
        w11 = 0x8000
        w9 = 0xff20   // ' \xff'
        w11 = 0xc0    // '\xc0'
        w14 = 0x400
        w11 = w9 | w11
        w14 = 0x5e00
        w11 = w0 & w11 // arg1
        if (w11 == w14)
        b.ne 0x80238e4 // likely
            
    loc_0x80238e4:
        // CODE XREF from sym.arm64_decode_simd @ 0x80237d8
        w15 = 0x800
        w11 = 0x8400
        w15 = 0xe00
        w11 = 0x9fe0  // '\xe0\x9f'
        w11 = w0 & w11 // arg1
        w13 = w15 - 0x400
        if (w11 == w13)
        b.ne 0x8023984 // likely
            
    loc_0x8023984:
        // CODE XREF from sym.arm64_decode_simd @ 0x8023900
        w11 = 0xfc00
        w11 = 0xbf01
        w10 = w11 + 0x1e9,lsl 12
        w10 = w0 & w10 // arg1
        if (w10 == w15)
        b.ne 0x8023a1c // unlikely
            
    loc_0x8023a1c:
        // CODE XREF from sym.arm64_decode_simd @ 0x8023998
        w16 = 0xe400
        w10 = 0xc400
        w16 = 0xbf20  // ' \xbf'
        w10 = 0x2e00
        w13 = w0 & w16 // arg1
        if (w13 == w10)
        b.eq 0x8023b54 // unlikely
            
    loc_0x8023b54:
        // CODE XREFS from sym.arm64_decode_simd @ 0x8023a34, 0x8023a48
        ubfx w9,w0,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w13 == w10)
        b.ne 0x8023cd8 // unlikely
            
    loc_0x8023cd8:
        // CODE XREF from sym.arm64_decode_simd @ 0x8023b5c
        if ((w0 & 0x1000) == 0) // arg1
        w8 = 0x3
        csinc w8,w8,wzr, ne
        w10 = 0x30    // '0'
         // do {
    loc_0x8023ce8:
        // CODE XREF from sym.arm64_decode_simd @ 0x8023b68
        [x1 + 0x24] = w10 // arg2
        [x1 + 0x3d] = (byte) w8 // arg2
        if !w9 jmp 0x8023e38 // likely
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
        goto loc_0x80236dc
    loc_0x80236e4:
        if (w8 == 1)
        b.eq 0x8023824 // unlikely
            
    loc_0x8023824:
        // CODE XREF from sym.arm64_decode_simd @ 0x80236e8
        x8 = 0x1
        sbfx w10,w0,0x13, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = 0xb
        ubfx w11,w0,0x13, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w0 >> 0xd // arg1
        w12 = 0x40    // '@'
        [x1 + 0x20] = x8 // arg2
        w8 = w11 << 0xa
        w11 = w8 ^ 0x400
        [x1 + 0x3d] = (byte) w9 // arg2
        bfxil w11,w10,0, 0xa // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w9,w0,0xd, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        bfxil w11,w0,0x11, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = x9 << 0x30
        ubfx w8,w0,0xd, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w10 = 0x3f    // '?'
        x9 = x9 | x11,lsl 52
        [x1 + 0x1f] = (byte) w12 // arg2 // tmp
        [x1 + 0x3e] = (byte) w12 // arg2
        jmp 0x80238cc
         // do {
    loc_0x80238cc:
        // CODE XREF from sym.arm64_decode_simd @ 0x8023870
        w8 = w8 >> 7
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = x8 << x10
        x9 = x8 | x9
        [x1 + 0x30] = x9 // arg2
        0x080238e0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80236ec
    loc_0x80236f4:
        x8 = 0x1
        w9 = w0 >> 0xd // arg1
        x8 = 0xb
        w10 = 0x1
        w10 &= w10    // arg1
        w11 = 0x10
        w10 = w10 << 4
        [x1 + 0x3d] = (byte) w9 // arg2
        [x1 + 0x20] = x8 // arg2
        w8 = 0xc      // "/"
        csel x8,xzr,x8, eq
        ubfx w9,w0,0x11, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w10 = w10 ^ 0x10
        x8 = x8 | x9
        x9 = x8 | x10
        w10 = w0 >> 7 // arg1
        w10 = w10 & 0x3c0
        ubfx w8,w0,0xd, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = x10 | x9,lsl 10
        w10 = 0xf
        jmp 0x80238c4
         // do {
    loc_0x80238c4:
        // CODE XREF from sym.arm64_decode_simd @ 0x8023744
        [x1 + 0x1f] = (byte) w11 // arg2 // tmp
        [x1 + 0x3e] = (byte) w11 // arg2 // "@"
         // } while (?);
        }
        return eax;
    loc_0x08023790: // orphan
             ubfx x10,x0,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             x11 = 0x8023000
             x11 = x11 + 0            // "`"
             x12 = 0x80237ac
             w14 = (byte) [x11 + x10] // 0xd1000000d2 // 897648165074
             x12 = x12 + x14,lsl 2    // "( "
             br x12

    loc_0x080237e4: // orphan
         rbit w8,w10
         clz w9,w8
         if (w9 == 3)
         b.hi 0x8023e38           // likely

    loc_0x080237f4: // orphan
         w11 = w9 + 1
         x12 = 0x17
         w13 = 0x8
         x12 = 0x3d               // '='
         w9 = w13 << w9
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = w10 >> w11
         [x1 + 0x20] = x12        // arg2
         [x1 + 0x3e] = (byte) w9  // arg2
         [x1 + 0x40] = (byte) w10 // arg2
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         

    loc_0x08023874: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80236e0
         x8 = 0x1
         w9 = w0 >> 0xd           // arg1
         x8 = 0xb
         w10 = 0x1
         w10 &= w10               // arg1
         w11 = 0x20
         w10 = w10 << 7
         [x1 + 0x3d] = (byte) w9  // arg2
         [x1 + 0x20] = x8         // arg2
         w8 = 0x7c                // '|'
         csel x8,xzr,x8, eq
         ubfx w9,w0,0x11, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = w10 ^ 0x80
         x8 = x8 | x9
         x9 = x8 | x10
         w10 = w0 << 6            // arg1
         w10 = w10 & 0x780000
         ubfx w8,w0,0xd, 8        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x9 = x10 | x9,lsl 23
         w10 = 0x1f               // tmp

    loc_0x0802390c: // orphan
         rbit w8,w10
         clz w11,w8
         if (w11 == 3)
         b.hi 0x8023e38           // likely

    loc_0x0802391c: // orphan
         w9 = 0x8
         w8 = 0xc                 // "/"
         w12 = w9 << w11
         w9 = w12 & 0xf8
         // CODE XREFS from sym.arm64_decode_simd @ 0x80237a4, 0x80237a8
         [x1 + 0x20] = w8         // arg2
         [x1 + 0x3e] = (byte) w12 // arg2
         tbnz w0,0x1e,0x8023940   // unlikely

    loc_0x08023938: // orphan
         if (w9 == 0x40)
         b.eq 0x8023e38           // unlikely

    loc_0x08023940: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023934
         w8 = w11 + 1
         w8 = w10 >> w8
         ubfx w10,w0,0xb, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x40] = (byte) w8  // arg2
         tbnz w0,0x1d,0x8023e34   // unlikely

    loc_0x08023954: // orphan
         w8 = 0x3
         if (w10 == 7)
         b.hi 0x8023de0           // unlikely

    loc_0x08023960: // orphan
         x11 = 0x8023000
         x11 = x11 + 0            // "`"
         x12 = 0x8023978
         w13 = (word) [x11 + x10,lsl 1] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2    // 0x8023af8 // "I\xc1\t\xaa\x9a" // fcn.08023af8
         br x12                   // fcn.08023af8

    loc_0x080239b0: // orphan
         w9 = 0x77                // 'w'
         w9 = w9 >> w8
         tbz w9,0,0x8023e38       // unlikely

    loc_0x080239bc: // orphan
         x9 = 0x8023000
         x9 = x9 + 0              // "`"
         w8 = [x9 + x8,lsl 2]     // 0xcf000000d0 // 889058230480
         ubfx w9,w0,0x16, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x24] = w8         // arg2
         tbnz w0,0x1e,0x80239dc   // unlikely

    loc_0x080239d4: // orphan
         if (w9 == 3)
         b.eq 0x8023e38           // unlikely

    loc_0x080239dc: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80239d0
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         csel w11,w12,w11, eq
         w12 = 0x8
         w10 = 0xe
         w9 = w12 << w9
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         [x1 + 0x20] = w10        // arg2
         [x1 + 0x3e] = (byte) w9  // arg2
         

    loc_0x08023a4c: // orphan
         w16 = 0x400
         w13 = 0x7c00
         w16 = 0x9f20             // ' \x9f'
         w13 = w15 + w13
         w10 = w16 | 0x8000
         w10 = w0 & w10           // arg1
         if (w10 == w13)
         b.ne 0x8023bb0           // likely

    loc_0x08023a6c: // orphan
         w13 = w0 >> 0x18         // arg1
         if ((w0 & 0x40000000) == 0) // arg1
         w13 = w13 & 0x20
         w10 = ~0x7f              // '\x7f'
         w17 = 0x40               // '@'
         bfxil w13,w0,0xb, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         csel w10,w17,w10, eq
         w17 = w13 - 0x12
         if (w17 == 0x2d)
         [x1 + 0x1f] = (byte) w10 // arg2 // tmp
         b.hi 0x8023bb0           // likely

    loc_0x08023a98: // orphan
         x2 = 0x8023000
         x2 = x2 + 0              // "`"
         w10 = w0 >> 0x1e         // arg1
         x3 = 0x8023ab4
         w4 = (word) [x2 + x17,lsl 1] // 0xd8000000c9 // 927712936137
         x3 = x3 + x4,lsl 2
         br x3

    loc_0x08023b6c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802378c
         ubfx w14,w0,0x11, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w12,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbnz w13,0,0x8023d34     // unlikely

    loc_0x08023b78: // orphan
         w10 = w14 << 7
         if (w14 == 0)
         w13 = 0x7c               // '|'
         w10 = w10 ^ 0x80
         csel x13,xzr,x13, eq
         ubfiz w11,w11,0x13, 4    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x13 | x10
         x9 = (char) w9
         x10 = x10 | x12
         x9 = x9 & 0x80000000
         x10 = x11 | x10,lsl 23
         x9 = x10 | x9
         x9 = x9 | x9,lsl 32
         jmp 0x8023d64

    loc_0x08023bb0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8023a68, 0x8023a94
         w10 = w16 + 0x40c,lsl 12
         w13 = wzr | 0x3ffc00     // arg1
         w10 = w0 & w10           // arg1
         w13 = w15 + w13
         if (w10 == w13)
         b.eq 0x8023e40           // unlikely

    loc_0x08023bc8: // orphan
         w17 = wzr | 0x1ffc00     // arg1
         w16 = w0 & w16           // arg1
         w17 = w15 + w17
         if (w16 == w17)
         b.eq 0x8023e40           // unlikely

    loc_0x08023bdc: // orphan
         w10 = 0x400
         w13 = 0x8000
         w10 = 0xdf00
         w13 = 0x20
         w13 = w10 | w13
         w16 = w14 + 8,lsl 12
         w13 = w0 & w13           // arg1
         if (w13 == w16)
         b.ne 0x8023f34           // likely

    loc_0x08023c00: // orphan
         w8 = 0x3
         w9 = w0 & 0xf000         // arg1
         if (w9 == 8)
         b.ne 0x8023de0           // likely

    loc_0x08023c10: // orphan
         ubfx w9,w0,0x16, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w9 == 3)
         b.eq 0x8023de0           // unlikely

    loc_0x08023c1c: // orphan
         tbz w0,0x1d,0x8023de0    // likely

    loc_0x08023c20: // orphan
         if !w9 jmp 0x8023de0     // likely

    loc_0x08023c24: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if ((w0 & 0x800) == 0)   // arg1
         w11 = 0x7e               // '~'
         w12 = 0x8
         w10 = 0x1b
         cinc w11,w11,ne
         w9 = w12 << w9
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1, 0x20] = (w10,2)     // arg2
         [x1 + 0x3e] = (byte) w9  // arg2
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         

    loc_0x08023cf4: // orphan
         tbnz w0,0x1e,0x8023d00   // unlikely

    loc_0x08023cf8: // orphan
         if (w9 == 3)
         b.eq 0x8023e38           // unlikely

    loc_0x08023d00: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023cf4
         w11 = 0x8
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = w11 << w9
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         w10 = 0x14               // " "
         csel w11,w12,w11, eq
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x3e] = (byte) w9  // arg2
         [x1 + 0x20] = w10        // arg2
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         

    loc_0x08023d34: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023b74
         w9 = w14 << 0xa
         if (w14 == 0)
         w11 = 0x3fc
         w9 = w9 ^ 0x400
         csel w11,wzr,w11, eq
         w10 = w10 >> 7
         w9 = w11 | w9
         ubfx w11,w0,5, 4         // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = w9 | w12
         x11 = x11 << 0x30
         x9 = x11 | x9,lsl 52
         x9 = x9 | x10,lsl 63

    loc_0x08023d64: // orphan
         // XREFS: CODE 0x080237b0  CODE 0x08023a18  CODE 0x08023afc  
         // XREFS: CODE 0x08023b08  CODE 0x08023b14  CODE 0x08023b20  
         // XREFS: CODE 0x08023b30  CODE 0x08023b40  CODE 0x08023b50  
         // XREFS: CODE 0x08023bac  CODE 0x08023cd4  
         if ((w0 & 0x40000000) == 0) // arg1
         w10 = ~0x7f              // '\x7f'
         w11 = 0x40               // '@'
         [x1 + 0x30] = x9         // arg2
         csel w10,w11,w10, eq
         if (w8 == 8)
         [x1 + 0x1f] = (byte) w10 // arg2 // tmp
         b.hs 0x8023d9c           // unlikely

    loc_0x08023d84: // orphan
         w8 = 0x20
         [x1 + 0x3e] = (byte) w8  // arg2
         tbnz w0,0xc,0x8023db0    // unlikely

    loc_0x08023d90: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023dac
         tbnz w0,0x1d,0x8023dd4   // unlikely

    loc_0x08023d94: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023dd0
         w9 = 0x38                // '8'
         jmp 0x8023dd8

    loc_0x08023d9c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023d80
         if (w8 == 0xc)
         b.hs 0x8023dc0           // unlikely

    loc_0x08023da4: // orphan
         w8 = 0x10
         [x1 + 0x3e] = (byte) w8  // arg2 // " "
         tbz w0,0xc,0x8023d90     // likely

    loc_0x08023db0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023d8c
         if ((w0 & 0x20000000) == 0) // arg1
         w8 = 0x3a                // ':'
         cinc w9,w8,ne
         jmp 0x8023dd8

    loc_0x08023dc0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023da0
         if (w8 == 0xe)
         b.hs 0x8023de8           // unlikely

    loc_0x08023dc8: // orphan
         w8 = 0x20
         [x1 + 0x3e] = (byte) w8  // arg2
         tbz w0,0x1d,0x8023d94    // likely

    loc_0x08023dd4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023d90
         w9 = 0x39                // '9'

    loc_0x08023dd8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8023d98, 0x8023dbc, 0x8023e04, 0x8023e30
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x08023ddc: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024524, 0x8024c38, 0x8025774
         [x1 + 0x24] = w9         // arg2

    loc_0x08023de0: // orphan
         // XREFS(40)
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x08023de8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023dc4
         b.ne 0x8023e08           // likely

    loc_0x08023dec: // orphan
         if ((w0 & 0x20000000) == 0) // arg1
         w8 = 0x40                // '@'
         w9 = 0x8
         csel w8,w9,w8, eq
         w9 = 0x38                // '8'
         [x1 + 0x3e] = (byte) w8  // arg2 // " "
         jmp 0x8023dd8

    loc_0x08023e08: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023de8
         if ((w0 & 0x20000000) == 0) // arg1
         w8 = 0x40                // '@'
         w9 = 0x20
         w10 = 0x2000
         csel w8,w9,w8, eq
         w9 = w0 & 0x60000000     // arg1
         if (w9 == w10)
         [x1 + 0x3e] = (byte) w8  // arg2 // "@"
         b.eq 0x8023e38           // unlikely

    loc_0x08023e2c: // orphan
         w9 = 0xb
         jmp 0x8023dd8

    loc_0x08023e34: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023950
         tbnz w0,0x1e,0x8023e8c   // unlikely

    loc_0x08023e38: // orphan
         // XREFS(41)
         w0 = 0x3
         

    loc_0x08023e40: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8023bc4, 0x8023bd8
         if ((w0 & 0x40000000) == 0) // arg1
         w8 = ~0x7f               // '\x7f'
         w9 = 0x40                // '@'
         w11 = w0 >> 0x1d         // arg1
         csel w9,w9,w8, eq
         ubfx w8,w0,0xb, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w10 == w13)
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         b.eq 0x8023eac           // likely

    loc_0x08023e64: // orphan
         if (w8 == 3)
         b.ne 0x8023eac           // likely

    loc_0x08023e6c: // orphan
         ubfx w8,w0,0x16, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xf
         bfi w8,w11,2, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == 7)
         [x1 + 0x20] = w9         // arg2
         b.ne 0x8024060           // likely

    loc_0x08023e84: // orphan
         w9 = 0x4d                // 'M'
         jmp 0x802406c

    loc_0x08023e8c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023e34
         w9 = 0x3f                // '?'
         w10 = w10 >> w11
         w11 = 0x80               // '\x80'
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x24] = w9         // arg2
         [x1 + 0x41] = (byte) w10 // arg2
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         

    loc_0x08023eac: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8023e60, 0x8023e68
         w9 = w0 >> 0x1e          // arg1
         if (w10 == w13)
         b.eq 0x8024034           // likely

    loc_0x08023eb8: // orphan
         if (w8 == 0x17)
         b.hi 0x8024034           // unlikely

    loc_0x08023ec0: // orphan
         bfi w8,w11,5, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == 0x36)
         b.hi 0x8023e38           // unlikely

    loc_0x08023ecc: // orphan
         w10 = w8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = xzr | 0xfff7fff7fff7fff7
         x11 = 0xff               // '\xff'
         x11 = 0x7f               // '\x7f'
         x10 = x11 >> x10
         tbz w10,0,0x8023e38      // unlikely

    loc_0x08023ee4: // orphan
         ubfiz x8,x8,2, 0x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = 0x8023000
         x10 = x10 + 0            // "`"
         w11 = [x10 + x8]         // 0xcf000000d1 // 889058230481
         ubfx w10,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = w11 >> w10
         tbz w11,0,0x8023e38      // likely

    loc_0x08023f00: // orphan
         x11 = 0x8023000
         x11 = x11 + 0            // "`"
         w11 = [x11 + x8]         // 0xcf000000d2 // 889058230482
         if w9 jmp 0x8023f18      // unlikely

    loc_0x08023f10: // orphan
         if (w10 == 3)
         b.eq 0x8023e38           // unlikely

    loc_0x08023f18: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023f0c
         w12 = 0x8
         w9 = 0x10
         w10 = w12 << w10
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 0x20] = (w9,2)      // arg2
         [x1 + 0x3e] = (byte) w10 // arg2 // "@"
         

    loc_0x08023f34: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023bfc
         w13 = 0xc000
         w16 = 0x400
         w13 = 0x60               // '`'
         w16 = 0x5e40             // '@^'
         w13 = w10 | w13
         w13 = w0 & w13           // arg1
         if (w13 == w16)
         b.eq 0x8024080           // unlikely

    loc_0x08023f54: // orphan
         w17 = w10 + 0x200,lsl 12
         w14 = w14 + 0x200,lsl 12
         w17 = w0 & w17           // arg1
         if (w17 == w14)
         b.eq 0x8024080           // unlikely

    loc_0x08023f68: // orphan
         w10 = w0 & w10           // arg1
         w13 = 0xf00
         if (w10 == w13)
         b.eq 0x8023f90           // unlikely

    loc_0x08023f78: // orphan
         w13 = 0x5f00
         if (w10 == w13)
         b.eq 0x8023f90           // unlikely

    loc_0x08023f84: // orphan
         w13 = 0x4f00
         if (w10 == w13)
         b.ne 0x8024990           // likely

    loc_0x08023f90: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8023f74, 0x8023f80
         ubfx w14,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w17 = w0 >> 0x1d         // arg1
         w13 = w0 >> 0xb          // arg1
         w2 = w0 >> 0x15          // arg1
         w10 = w0 >> 0x14         // arg1
         ubfx w16,w0,0x14, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w4,w0,0xc, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbz w17,0,0x802421c      // likely

    loc_0x08023fb0: // orphan
         w17 = w4 | 2
         if (w17 == 0xf)
         b.ne 0x802421c           // likely

    loc_0x08023fbc: // orphan
         w8 = w14 - 3
         if (w8 != 2)
         b.lo 0x8023e38           // unlikely

    loc_0x08023fc8: // orphan
         if (w4 == 0xd)
         w8 = 0x7e                // '~'
         cinc w8,w8,ne
         if ((w0 & 0x40000000) == 0) // arg1
         w9 = ~0x7f               // '\x7f'
         w11 = 0x40               // '@'
         csel w9,w11,w9, eq
         if ((w0 & 0x10000000) == 0) // arg1
         w11 = 0x1c
         w12 = 0x8
         cinc w11,w11,ne
         w12 = w12 << w14
         csel w9,w9,w12, eq
         if (w14 == 1)
         // XREFS(22)
         [x1, 0x20] = (w11,2)     // arg2
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3e] = (byte) w12 // arg2
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         b.ne 0x8024528           // likely

    loc_0x08024014: // orphan
         ubfiz w9,w13,2, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w10,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w9,w2,1, 1           // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08024020: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024e2c
         w9 = w9 | w16
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1a] = (byte) w10 // arg2
         [x1 + 0x40] = (byte) w9  // arg2
         

    loc_0x08024034: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8023eb4, 0x8023ebc
         if (w10 == w13)
         b.eq 0x8024468           // likely

    loc_0x0802403c: // orphan
         tbnz w0,0x16,0x8024468   // unlikely

    loc_0x08024040: // orphan
         ubfx w12,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbnz w0,0x1d,0x802442c   // unlikely

    loc_0x08024048: // orphan
         if (w8 == 0x1d)
         b.ne 0x802442c           // likely

    loc_0x08024050: // orphan
         if (w12 == 2)
         w8 = 0x12
         cinc w9,w8,hs
         jmp 0x8024450

    loc_0x08024060: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023e80
         x9 = 0x8024000
         x9 = x9 + 0
         w9 = [x9 + w8,uxtw 2]    // 0xb0000000d0 // 755914244304

    loc_0x0802406c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8023e88
         w10 = 0x8
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x24] = w9         // arg2
         [x1 + 0x3e] = (byte) w10 // arg2
         

    loc_0x08024080: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8023f50, 0x8023f64
         w8 = w0 >> 0x1d          // arg1
         if (w13 == w16)
         b.ne 0x8024280           // unlikely

    loc_0x0802408c: // orphan
         w9 = w0 >> 0x12          // arg1
         w9 = w9 & 0x20
         bfxil w9,w0,0xb, 3       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w9,w8,6, 1           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x3
         w10 = w9 - 0x44
         if (w10 == 0x21)
         b.hi 0x802439c           // likely

    loc_0x080240ac: // orphan
         x9 = 0x8024000
         x9 = x9 + 0
         x11 = 0x8023de0
         w12 = (word) [x9 + x10,lsl 1] // 0xd1000000d0 // 897648165072
         x11 = x11 + x12,lsl 2
         br x11

    loc_0x0802421c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8023fac, 0x8023fb8
         w3 = w0 >> 0x1c          // arg1
         ubfx w5,w0,0x1d, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w6 = w3 & 1
         if (w4 == 0xe)
         b.ne 0x8024330           // likely

    loc_0x08024230: // orphan
         if w6 jmp 0x8024330      // unlikely

    loc_0x08024234: // orphan
         w8 = w0 & 0xc00000       // arg1
         if (w8 == 0x800)
         b.ne 0x8023e38           // likely

    loc_0x08024240: // orphan
         w11 = 0x2008
         ubfx w14,w0,0x15, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if ((w0 & 0x40000000) == 0) // arg1
         w15 = ~0x7f              // '\x7f'
         bfi w14,w13,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w13,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3e] = (half) w11
         w11 = 0x40               // '@'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = w5 | 0x80
         w12 = 0x1c
         csel w11,w11,w15, eq
         bfi w13,w10,4, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x40] = (byte) w14 // arg2
         [x1, 0x20] = (w12,2)     // arg2
         jmp 0x80245a0

    loc_0x08024280: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024088
         ubfx w10,w0,0xb, 5       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = w10                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w9,w8,5, 1           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x9 - 1
         if (w8 == 0x36)
         b.hs 0x80242b0           // likely

    loc_0x08024298: // orphan
         x9 = 0x87f1              // '\xf1\x87'
         x9 = 0x21                // '!'
         x9 = 0x87f1              // '\xf1\x87'
         x9 = 0x21                // '!'
         x9 = x9 >> x8
         tbnz w9,0,0x80244bc      // likely

    loc_0x080242b0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024294
         w8 = w0 >> 0x16          // arg1
         ubfx w9,w0,0x1d, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = w8 << 4
         w8 = w8 & 0x20
         w8 = w8 | w9,lsl 6
         w9 = w8 | w10
         w8 = 0x3
         w11 = w9 - 0x5c
         if (w11 == 0x21)
         b.hi 0x80243fc           // likely

    loc_0x080242d8: // orphan
         x9 = 0x8024000
         x9 = x9 + 0
         x12 = 0x8023de0
         w13 = (word) [x9 + x11,lsl 1] // 0xd2000000d0 // 901943132368
         x12 = x12 + x13,lsl 2
         br x12

    loc_0x08024330: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x802422c, 0x8024230
         w17 = w0 >> 0x1e         // arg1
         tbnz w0,0x1d,0x80244cc   // unlikely

    loc_0x08024338: // orphan
         if (w4 == 0xf)
         b.ne 0x80244cc           // likely

    loc_0x08024340: // orphan
         if w6 jmp 0x80244cc      // unlikely

    loc_0x08024344: // orphan
         if (w14 == 3)
         b.ne 0x8024548           // likely

    loc_0x0802434c: // orphan
         w8 = 0x85                // '\x85'
         ubfiz w10,w13,2, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w10,w2,1, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x2010              // '\x10 '
         w11 = 0x80               // '\x80'
         w10 = w10 | w16
         [x1 + 0x24] = w8         // arg2
         ubfx w8,w0,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3e] = (half) w9
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         [x1 + 0x40] = (byte) w10 // arg2
         [x1 + 0x1a] = (byte) w8  // arg2
         tbz w17,0,0x802438c      // likely

    loc_0x08024380: // orphan
         w8 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         w8 = w8 | 4
         [x1 + 0x38] = w8         // arg2

    loc_0x0802438c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802437c
         w9 = 0x1c
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = w9         // arg2
         

    loc_0x0802439c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80240a8
         w9 = w9 | 0x18
         w10 = w9 - 0x1b
         if (w10 == 0x24)
         b.hi 0x8023de0           // likely

    loc_0x080243ac: // orphan
         x11 = 0x8024000
         x11 = x11 + 0
         w9 = 0x2
         x12 = 0x8023de0
         w13 = (word) [x11 + x10,lsl 1] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2
         br x12

    loc_0x080243fc: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80242d4
         w11 = w9 - 0x1b
         if (w11 == 0x24)
         b.hi 0x8023de0           // likely

    loc_0x08024408: // orphan
         x12 = 0x8024000
         x12 = x12 + 0
         w9 = 0x2
         x13 = 0x8023de0
         w14 = (word) [x12 + x11,lsl 1] // 0xd2000000d3 // 901943132371
         x13 = x13 + x14,lsl 2
         br x13

    loc_0x0802442c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024044, 0x802404c
         tbz w0,0x1d,0x8024468    // likely

    loc_0x08024430: // orphan
         if (w8 == 0x19)
         b.ne 0x8024468           // likely

    loc_0x08024438: // orphan
         w8 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         if (w12 == 2)
         w9 = 0x12
         cinc w9,w9,hs
         w8 = w8 | 2
         [x1 + 0x38] = w8         // arg2

    loc_0x08024450: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802405c
         w10 = 0x13
         w11 = 0x2010             // '\x10 '
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 0x20] = (w10,2)     // arg2
         [x1 + 0x3e] = (half) w11
         

    loc_0x08024468: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024038, 0x802403c, 0x802442c, 0x8024434
         w12 = w0 >> 0x16         // arg1
         w14 = w8 + 0x18
         w12 = w12 << 4
         if (w10 == w13)
         w12 = w12 & 0x20
         csel w8,w14,w8, eq
         bfi w12,w11,6, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w12 | w8
         w8 = 0x3
         w12 = w11 - 0x18
         if (w12 == 0x67)
         b.hi 0x8023de0           // unlikely

    loc_0x08024498: // orphan
         x14 = 0x8024000
         x14 = x14 + 0
         w11 = 0x8
         x15 = 0x8023de0
         w16 = (word) [x14 + x12,lsl 1] // 0xd3000000d5 // 906238099669
         x15 = x15 + x16,lsl 2
         br x15

    loc_0x080244bc: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80242ac
         x9 = 0x8024000
         x9 = x9 + 0
         w9 = [x9 + x8,lsl 2]     // 0xcf000000d0 // 889058230480
         jmp 0x80246c0

    loc_0x080244cc: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024334, 0x802433c, 0x8024340
         w6 = 0x9400
         w7 = 0x1000
         w6 = 0xbf00
         w7 = 0x2f00
         w6 = w0 & w6             // arg1
         if (w6 == w7)
         b.ne 0x80245b0           // likely

    loc_0x080244e8: // orphan
         w8 = 0x3
         if !w14 jmp 0x8023de0    // likely

    loc_0x080244f0: // orphan
         if (w14 == 3)
         b.eq 0x8023de0           // unlikely

    loc_0x080244f8: // orphan
         if (w14 == 2)
         b.ne 0x802485c           // likely

    loc_0x08024500: // orphan
         tbnz w0,0x15,0x8023de0   // unlikely

    loc_0x08024504: // orphan
         tbz w17,0,0x8023de0      // likely

    loc_0x08024508: // orphan
         ubfx w9,w0,0xb, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = 0x1
         jmp 0x8024874

    loc_0x0802451c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024db0
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = w10        // arg2
         jmp 0x8023ddc

    loc_0x08024528: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024010
         ubfx w9,w0,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w11,w0,0x15, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w9,w10,4, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w11,w13,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1a] = (byte) w9  // arg2
         [x1 + 0x40] = (byte) w11 // arg2
         

    loc_0x08024548: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024348
         x9 = 0x8024000
         x9 = x9 + 0
         w11 = w14 << 3
         w12 = 0x1c
         w9 = [x9 + w14,uxtw 2]   // 0xb6000000d0 // 781684048080
         w14 = 0x1008
         w14 = 0x8
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = w14 >> w11
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 0x20] = (w12,2)     // arg2
         ubfx w9,w0,0x15, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = 0x20
         bfi w9,w13,1, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x3e] = (byte) w11 // arg2
         w11 = ~0x7f              // '\x7f'
         w13 = 0x40               // '@'
         csel w11,w13,w11, eq
         ubfx w13,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3f] = (byte) w12 // arg2 // " "
         bfi w13,w10,4, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x40] = (byte) w9  // arg2

    loc_0x080245a0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802427c
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         [x1 + 0x1a] = (byte) w13 // arg2
         

    loc_0x080245b0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80244e4
         w6 = w0 & 0xfff000       // arg1
         w6 = w6 & 0xff803fff
         if (w6 == 0x800)
         b.ne 0x8024748           // likely

    loc_0x080245c0: // orphan
         w6 = w4 >> 3
         if (w6 == w5)
         b.ne 0x8024748           // unlikely

    loc_0x080245cc: // orphan
         w8 = 0x3
         tbnz w0,0x1c,0x8023de0   // unlikely

    loc_0x080245d4: // orphan
         if (w14 == 3)
         b.eq 0x8023de0           // unlikely

    loc_0x080245dc: // orphan
         if ((w0 & 0x4000) == 0)  // arg1
         w9 = 0x12
         w8 = 0x18
         cinc w9,w9,ne
         ubfiz w10,w13,2, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if ((w0 & 0x40000000) == 0) // arg1
         bfi w10,w2,1, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w12 = ~0x7f              // '\x7f'
         w13 = 0x40               // '@'
         w11 = 0x2010             // '\x10 '
         w10 = w10 | w16
         [x1, 0x20] = (w8,2)      // arg2
         csel w8,w13,w12, eq
         ubfx w9,w0,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3e] = (half) w11
         [x1 + 0x40] = (byte) w10 // arg2
         [x1 + 0x1f] = (byte) w8  // arg2 // tmp
         [x1 + 0x1a] = (byte) w9  // arg2
         tbz w0,0x1d,0x8024838    // likely

    loc_0x08024628: // orphan
         w8 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = w8 | 2
         [x1 + 0x38] = w9         // arg2
         

    loc_0x080246c0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80244c8
         if (w10 == 0x16)
         b.ne 0x80246e0           // likely

    loc_0x080246c8: // orphan
         ubfx w10,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0x3
         if !w10 jmp 0x8023de0    // likely

    loc_0x080246d4: // orphan
         if (w10 == 3)
         b.eq 0x8023de0           // unlikely

    loc_0x080246dc: // orphan
         jmp 0x8024714

    loc_0x080246e0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80246c4
         w8 = w0 & 0xf000         // arg1
         w10 = 0xe800
         if (w8 == 3)
         w10 = w0 & w10           // arg1
         w11 = 0x4000
         ccmp w10,w11,4, ne
         w10 = 0x8000
         ccmp w8,w10,4, ne
         w10 = 0xc0               // '\xc0'
         cset w8,eq
         bics wzr,w10,w0          // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         b.eq 0x8024714           // unlikely

    loc_0x08024710: // orphan
         tbnz w8,0,0x8023e38      // unlikely

    loc_0x08024714: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80246dc, 0x802470c
         w10 = (byte) [x1 + 0x3e] // 0xc8 // 200 // arg2
         if w10 jmp 0x802472c     // likely

    loc_0x0802471c: // orphan
         ubfx w8,w0,0x16, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = 0x8
         w10 = w10 << w8
         // XREFS: CODE 0x080240cc  CODE 0x080243d0  CODE 0x08024644  
         // XREFS: CODE 0x08024650  CODE 0x0802465c  CODE 0x08024668  
         // XREFS: CODE 0x08024674  CODE 0x08024680  
         [x1 + 0x3e] = (byte) w10 // arg2

    loc_0x0802472c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024718
         w11 = 0x1b
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = w11        // arg2
         // CODE XREFS from fcn.08023af8 @ +0x5e8, +0x604
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x24] = w9         // arg2
         [x1 + 0x1f] = (byte) w10 // arg2 // tmp
         

    loc_0x08024748: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80245bc, 0x80245c8
         tbnz w0,0x1d,0x80248d4   // unlikely

    loc_0x0802474c: // orphan
         if (w4 == 1)
         b.ne 0x80248d4           // likely

    loc_0x08024754: // orphan
         w2 = 0x10
         jmp 0x80248fc

    loc_0x08024838: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024624
         // CODE XREFS from fcn.08023af8 @ +0xd58, +0xd60
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         

    loc_0x0802485c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80244fc
         if (w14 == 1)
         ubfx w9,w0,0xb, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         cset w11,ne
         b.ne 0x8024874           // likely

    loc_0x0802486c: // orphan
         if !w9 jmp 0x8024874     // likely

    loc_0x08024870: // orphan
         tbz w17,0,0x8023de0      // likely

    loc_0x08024874: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024510, 0x8024868, 0x802486c
         x12 = 0x18
         if (w11 == 0)
         x12 = 0x2f               // '/'
         w11 = ~0x7f              // '\x7f'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w15 = 0x8
         ubfx w13,w0,0xd, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w14 = w15 << w14
         [x1 + 0x20] = x12        // arg2
         ubfx w12,w0,0x15, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = w12 | w9,lsl 1
         csel w9,w9,w12, ne
         if ((w0 & 0x40000000) == 0) // arg1
         w12 = 0x40               // '@'
         [x1 + 0x3d] = (byte) w13 // arg2
         csel w11,w12,w11, eq
         ubfx w12,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w12,w10,4, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x3e] = (byte) w14 // arg2
         [x1 + 0x40] = (byte) w9  // arg2
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         [x1 + 0x1a] = (byte) w12 // arg2
         

    loc_0x080248d4: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024748, 0x8024750
         tbnz w0,0x1d,0x80248e8   // unlikely

    loc_0x080248d8: // orphan
         if (w4 == 5)
         b.ne 0x80248e8           // likely

    loc_0x080248e0: // orphan
         w2 = 0x11
         jmp 0x80248fc

    loc_0x080248e8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80248d4, 0x80248dc
         if (w5 == 0)
         w2 = 0x1
         cinc w2,w2,ne
         if (w4 == 9)
         b.ne 0x8024990           // likely

    loc_0x080248fc: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024758, 0x80248e4
         if (w14 == 1)
         b.eq 0x8023e38           // unlikely

    loc_0x08024904: // orphan
         if (w14 == 3)
         b.ne 0x8024914           // likely

    loc_0x0802490c: // orphan
         w8 = w17 | w3
         tbz w8,0,0x8023e38       // likely

    loc_0x08024914: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024908
         ubfx w9,w0,0x15, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w14 == 3)
         b.ne 0x8024924           // likely

    loc_0x08024920: // orphan
         if w9 jmp 0x8023e38      // unlikely

    loc_0x08024924: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802491c
         w11 = 0x8
         w8 = 0x18
         if (w14 == 0)
         w11 = w11 << w14
         w12 = 0x10
         w15 = 0x40               // '@'
         csel w11,w12,w11, eq
         if ((w0 & 0x40000000) == 0) // arg1
         w12 = ~0x7f              // '\x7f'
         [x1, 0x20] = (w8,2)      // arg2
         csel w12,w15,w12, eq
         if ((w0 & 0x10000000) == 0) // arg1
         csel w12,w12,w11, eq
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3e] = (byte) w11 // arg2
         [x1 + 0x1f] = (byte) w12 // arg2 // tmp
         if !w14 jmp 0x8024e20    // likely

    loc_0x08024968: // orphan
         ubfx w11,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w9,w13,1, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w11,w10,4, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w10,w0,0xb, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w14 == 2)
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w9,w9,w10, eq
         [x1 + 0x1a] = (byte) w11 // arg2
         [x1 + 0x40] = (byte) w9  // arg2
         

    loc_0x08024990: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8023f8c, 0x80248f8
         w10 = 0x9f80             // '\x80\x9f'
         w13 = 0xf00
         w10 = w0 & w10           // arg1
         if (w10 == w13)
         b.ne 0x80249e4           // likely

    loc_0x080249a4: // orphan
         ubfx w10,w0,0x13, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if !w10 jmp 0x80249e4    // likely

    loc_0x080249ac: // orphan
         ubfx w13,w0,0xb, 5       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbz w0,0xa,0x80249c8     // likely

    loc_0x080249b4: // orphan
         if w13 jmp 0x80249c8     // unlikely

    loc_0x080249b8: // orphan
         if ((w0 & 0x20000000) == 0) // arg1
         w8 = 0x8b                // '\x8b'
         cinc w9,w8,ne
         jmp 0x8024c90

    loc_0x080249c8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80249b0, 0x80249b4
         tbnz w0,0x1d,0x80249e4   // unlikely

    loc_0x080249cc: // orphan
         if (w13 == 0xa)
         b.ne 0x80249e4           // likely

    loc_0x080249d4: // orphan
         tbnz w0,0xa,0x8024c8c    // unlikely

    loc_0x080249d8: // orphan
         w10 = w0 & 0xc00000      // arg1
         if (w10 == 0x400)
         b.eq 0x8023e38           // unlikely

    loc_0x080249e4: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80249a0, 0x80249a8, 0x80249c8, 0x80249d0
         w10 = 0xc00
         w10 = 0x8f00
         w13 = w0 & w10           // arg1
         if (w13 == w15)
         b.ne 0x8024ad0           // unlikely

    loc_0x080249f8: // orphan
         w14 = w0 & 0x3ffff000    // arg1
         w13 = w0 & 0xff0000      // arg1
         w16 = w14 & 0xe000ffff
         if (w13 == 0xf80)
         b.eq 0x8024a2c           // unlikely

    loc_0x08024a0c: // orphan
         if (w13 == 0xe00)
         b.eq 0x8024a3c           // unlikely

    loc_0x08024a14: // orphan
         if (w13 == 0xa00)
         b.ne 0x8024a4c           // likely

    loc_0x08024a1c: // orphan
         w14 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w13 = 0x20
         w15 = 0x1
         jmp 0x8024a58

    loc_0x08024a2c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024a08
         w14 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w13 = 0x10
         w15 = 0x1
         jmp 0x8024a58

    loc_0x08024a3c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024a10
         w13 = 0x40               // '@'
         w15 = 0x1
         w14 = 0x1
         jmp 0x8024a58

    loc_0x08024a4c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024a18
         w15 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w14 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w13 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x08024a58: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024a28, 0x8024a38, 0x8024a48
         if (w16 == 0xe)
         b.lt 0x8024a8c           // likely

    loc_0x08024a60: // orphan
         b.eq 0x8024aa4           // unlikely

    loc_0x08024a64: // orphan
         w17 = 0xd000
         w17 = 0x2000
         if (w16 == w17)
         b.eq 0x8024aac           // unlikely

    loc_0x08024a74: // orphan
         w17 = 0xc000
         w17 = 0x2000
         if (w16 == w17)
         b.ne 0x8024ad0           // likely

    loc_0x08024a84: // orphan
         w16 = 0x26               // '&'
         jmp 0x8024ab8

    loc_0x08024a8c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024a5c
         if (w16 == 0xc)
         b.eq 0x8024ab4           // unlikely

    loc_0x08024a94: // orphan
         if (w16 == 0xd)
         b.ne 0x8024ad0           // likely

    loc_0x08024a9c: // orphan
         w16 = 0x25               // '%'
         jmp 0x8024ab8

    loc_0x08024aa4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024a60
         w16 = 0x29               // ')'
         jmp 0x8024ab8

    loc_0x08024aac: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024a70
         w16 = 0x28               // '('
         jmp 0x8024ab8

    loc_0x08024ab4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024a90
         w16 = 0x27               // '''

    loc_0x08024ab8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024a88, 0x8024aa0, 0x8024aa8, 0x8024ab0
         if !w15 jmp 0x8024ad0    // likely

    loc_0x08024abc: // orphan
         w15 = 0x5000
         w17 = 0x1000
         w15 = w0 & w15           // arg1
         if (w15 == w17)
         b.ne 0x8024ba4           // likely

    loc_0x08024ad0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80249f4, 0x8024a80, 0x8024a98, 0x8024ab8
         w13 = w0 & 0xfffffc00    // arg1
         w14 = 0xbfff             // '\xff\xbf'
         w14 = 0x1e22             // '\"\x1e'
         if (w13 == w14)
         jmp ifgt 0x8024b1c       // unlikely

    loc_0x08024ae4: // orphan
         w14 = ~0x619e            // '\x9ea'
         if (w13 == w14)
         jmp ifle 0x8024b58       // unlikely

    loc_0x08024af0: // orphan
         w14 = 0x9e62             // 'b\x9e'
         if (w13 == w14)
         b.eq 0x8024be0           // unlikely

    loc_0x08024afc: // orphan
         w14 = 0x9e63             // 'c\x9e'
         if (w13 == w14)
         b.eq 0x8024be8           // unlikely

    loc_0x08024b08: // orphan
         w14 = 0x1e22             // '\"\x1e'
         if (w13 == w14)
         b.ne 0x8024c3c           // likely

    loc_0x08024b14: // orphan
         w9 = 0x8d                // '\x8d'
         jmp 0x8024b98

    loc_0x08024b1c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024ae0
         w14 = ~0xe19e            // '\x9e\xe1'
         if (w13 == w14)
         jmp ifle 0x8024b78       // likely

    loc_0x08024b28: // orphan
         w14 = 0x1e62             // 'b\x1e'
         if (w13 == w14)
         b.eq 0x8024bf8           // unlikely

    loc_0x08024b34: // orphan
         w14 = 0x4000
         w14 = 0x1e62             // 'b\x1e'
         if (w13 == w14)
         b.eq 0x8024c00           // unlikely

    loc_0x08024b44: // orphan
         w14 = 0x1e63             // 'c\x1e'
         if (w13 == w14)
         b.ne 0x8024c3c           // likely

    loc_0x08024b50: // orphan
         w9 = 0x93                // '\x93'
         jmp 0x8024c1c

    loc_0x08024b58: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024aec
         w14 = 0x9e22             // '\"\x9e'
         if (w13 == w14)
         b.eq 0x8024c08           // unlikely

    loc_0x08024b64: // orphan
         w14 = 0x9e23             // '#\x9e'
         if (w13 == w14)
         b.ne 0x8024c3c           // likely

    loc_0x08024b70: // orphan
         w9 = 0x92                // '\x92'
         jmp 0x8024c0c

    loc_0x08024b78: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024b24
         w14 = 0xc000
         w14 = 0x1e22             // '\"\x1e'
         if (w13 == w14)
         b.eq 0x8024c18           // unlikely

    loc_0x08024b88: // orphan
         w14 = 0x1e23             // '#\x1e'
         if (w13 == w14)
         b.ne 0x8024c3c           // likely

    loc_0x08024b94: // orphan
         w9 = 0x91                // '\x91'

    loc_0x08024b98: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024b18
         w11 = 0x20
         w10 = 0x20
         jmp 0x8024c24

    loc_0x08024ba4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024acc
         w9 = w13                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbnz w0,0x1c,0x8024bc8   // unlikely

    loc_0x08024bac: // orphan
         if ((w0 & 0x40000000) == 0) // arg1
         csel w8,wzr,w14, ne
         tbnz w8,0,0x8023e38      // unlikely

    loc_0x08024bb8: // orphan
         if ((w0 & 0x40000000) == 0) // arg1
         w8 = ~0x7f               // '\x7f'
         w9 = 0x40                // '@'
         csel w9,w9,w8, eq

    loc_0x08024bc8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024ba8
         w10 = 0x19
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         [x1 + 0x3e] = (byte) w13 // arg2
         [x1, 0x20] = (w10,2)     // arg2
         

    loc_0x08024be0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024af8
         w9 = 0x90                // '\x90'
         jmp 0x8024bec

    loc_0x08024be8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024b04
         w9 = 0x94                // '\x94'

    loc_0x08024bec: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024be4
         w11 = 0x40               // '@'
         w10 = 0x40               // '@'
         jmp 0x8024c24

    loc_0x08024bf8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024b30
         w9 = 0x8f                // '\x8f'
         jmp 0x8024c1c

    loc_0x08024c00: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024b40
         w9 = 0x97                // '\x97'
         jmp 0x8024c0c

    loc_0x08024c08: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024b60
         w9 = 0x8e                // '\x8e'

    loc_0x08024c0c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024b74, 0x8024c04
         w10 = 0x40               // '@'
         w11 = 0x20
         jmp 0x8024c24

    loc_0x08024c18: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024b84
         w9 = 0x98                // '\x98'

    loc_0x08024c1c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024b54, 0x8024bfc
         w10 = 0x20
         w11 = 0x40               // '@'

    loc_0x08024c24: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024ba0, 0x8024bf4, 0x8024c14
         w12 = 0x9
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         [x1 + 0x3e] = (byte) w10 // arg2
         [x1 + 0x20] = w12        // arg2
         jmp 0x8023ddc

    loc_0x08024c3c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024b10, 0x8024b4c, 0x8024b6c, 0x8024b90
         w10 = w10 + 0xbff,lsl 12
         w13 = 0xd7ff             // '\xff\xd7'
         w10 = w0 & w10           // arg1
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         jmp ifgt 0x8024cfc       // unlikely

    loc_0x08024c54: // orphan
         w13 = 0xa800
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         b.eq 0x8024d34           // unlikely

    loc_0x08024c64: // orphan
         w13 = 0xb800
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         b.eq 0x8024d3c           // unlikely

    loc_0x08024c74: // orphan
         w13 = 0xc800
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         b.ne 0x8024db4           // likely

    loc_0x08024c84: // orphan
         w8 = 0x5
         jmp 0x8024d58

    loc_0x08024c8c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80249d4
         w9 = 0x8a                // '\x8a'

    loc_0x08024c90: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80249c4
         clz w8,w10               // "\t"
         w11 = 0x8
         w8 = w8 ^ 0x1f           // " "
         if ((w0 & 0x40000000) == 0) // arg1
         w12 = ~0x7f              // '\x7f'
         w13 = 0x40               // '@'
         w11 = w11 << w8
         csel w8,w13,w12, eq
         w12 = w11 & 0xf8
         [x1 + 0x1f] = (byte) w8  // arg2 // tmp
         tbnz w0,0x1e,0x8024cc4   // unlikely

    loc_0x08024cbc: // orphan
         if (w12 == 0x40)
         b.eq 0x8023e38           // unlikely

    loc_0x08024cc4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024cb8
         ubfx w13,w0,0x10, 3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = w12 << 1
         w10 = w13 | w10,lsl 3
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w13 = w10 - w11
         w10 = w12 - w10
         if (w9 == 0x8a)
         w14 = 0xd
         csel w10,w13,w10, eq
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x3e] = (byte) w11 // arg2
         [x1, 0x20] = (w14,2)     // arg2
         [x1 + 0x3d] = (byte) w10 // arg2
         

    loc_0x08024cfc: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024c50
         w13 = 0xd800
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         b.eq 0x8024d44           // unlikely

    loc_0x08024d0c: // orphan
         w13 = 0xa800
         w13 = 0xea1              // '\xa1\x0e'
         if (w10 == w13)
         b.eq 0x8024d54           // unlikely

    loc_0x08024d1c: // orphan
         w13 = 0xb800
         w13 = 0xea1              // '\xa1\x0e'
         if (w10 == w13)
         b.ne 0x8024db4           // likely

    loc_0x08024d2c: // orphan
         w8 = 0x4
         jmp 0x8024d58

    loc_0x08024d34: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024c60
         w8 = 0x1
         jmp 0x8024d58

    loc_0x08024d3c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024c70
         w8 = 0x3
         jmp 0x8024d58

    loc_0x08024d44: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024d08
         if ((w0 & 0x20000000) == 0) // arg1
         w8 = 0x9b                // '\x9b'
         cinc w9,w8,ne
         jmp 0x8024d68

    loc_0x08024d54: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024d18
         w8 = 0x2

    loc_0x08024d58: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024c88, 0x8024d30, 0x8024d38, 0x8024d40
         if ((w0 & 0x20000000) == 0) // arg1
         w9 = 0x99                // '\x99'
         cinc w9,w9,ne
         [x1 + 0x28] = w8         // arg2

    loc_0x08024d68: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024d50
         if ((w0 & 0x400000) == 0) // arg1
         w8 = 0x40                // '@'
         w10 = 0x20               // "\r"
         csel w10,w10,w8, eq
         [x1 + 0x3e] = (byte) w10 // arg2
         tbnz w0,0x1c,0x8024da4   // unlikely

    loc_0x08024d80: // orphan
         if ((w0 & 0x40000000) == 0) // arg1
         w10 = ~0x7f              // '\x7f'
         csel w8,w8,w10, eq
         w10 = 0x4040             // '@@'
         w10 = w0 & w10           // arg1
         if (w10 == 0x400)
         [x1 + 0x1f] = (byte) w8  // arg2 // tmp
         b.eq 0x8023e38           // unlikely

    loc_0x08024da0: // orphan
         jmp 0x8024dac

    loc_0x08024da4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024d7c
         tbz w0,0x1e,0x8023e38    // likely

    loc_0x08024da8: // orphan
         [x1 + 0x1f] = (byte) w10 // arg2 // tmp

    loc_0x08024dac: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024da0
         w10 = 0x9
         jmp 0x802451c

    loc_0x08024db4: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024c80, 0x8024d28
         w13 = 0xfc00
         w14 = 0x1e20             // ' \x1e'
         w13 = 0x7fa0             // '\xa0\x7f'
         w10 = w0 & w13           // arg1
         if (w10 == w14)
         b.ne 0x8024dec           // likely

    loc_0x08024dcc: // orphan
         ubfx w10,w0,0x13, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w14 &= w0                // arg1
         b.eq 0x8024e68           // unlikely

    loc_0x08024dd8: // orphan
         if (w14 == 0x40)
         b.ne 0x8024dec           // likely

    loc_0x08024de0: // orphan
         if w10 jmp 0x8024dec     // unlikely

    loc_0x08024de4: // orphan
         w9 = 0x5
         jmp 0x8024e74

    loc_0x08024dec: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024dc8, 0x8024ddc, 0x8024de0
         w14 = 0xc00
         ubfx w10,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w14 = 0xff20             // ' \xff'
         w14 = w0 & w14           // arg1
         if (w14 == w12)
         b.ne 0x8024e30           // unlikely

    loc_0x08024e04: // orphan
         if !w10 jmp 0x8024ee0    // likely

    loc_0x08024e08: // orphan
         if (w10 == 3)
         b.eq 0x8024ee8           // unlikely

    loc_0x08024e10: // orphan
         if (w10 == 1)
         b.ne 0x8023e38           // likely

    loc_0x08024e18: // orphan
         w9 = 0x40                // '@'
         jmp 0x8024eec

    loc_0x08024e20: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024964
         w9 = w9 << 1
         ubfx w10,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w9,w13,2, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8024020

    loc_0x08024e30: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024e00
         w12 = 0x2000
         w15 = w0 & w9            // arg1
         w12 = 0x1e20             // ' \x1e'
         w16 = w12 + 2,lsl 12
         if (w15 == w16)
         b.ne 0x8024eb8           // likely

    loc_0x08024e48: // orphan
         w8 = 0x3
         if !w10 jmp 0x8024f9c    // likely

    loc_0x08024e50: // orphan
         if (w10 == 3)
         b.eq 0x8024fa4           // unlikely

    loc_0x08024e58: // orphan
         if (w10 == 1)
         b.ne 0x8023de0           // likely

    loc_0x08024e60: // orphan
         w9 = 0x40                // '@'
         jmp 0x8024fa8

    loc_0x08024e68: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024dd4
         x8 = 0x8024000
         x8 = x8 + 0
         w9 = [x8 + w10,uxtw 2]   // 0xb2000000cf // 764504178895

    loc_0x08024e74: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024de8
         [x1 + 0x28] = w9         // arg2
         if (w0 == 0)             // arg1
         w9 = 0x40                // '@'
         w10 = 0x20               // "\r"
         csel w11,w10,w9, ge      // "\r"
         if ((w0 & 0x400000) == 0) // arg1
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         csel w9,w10,w9, eq
         if ((w0 & 0x10000) == 0) // arg1
         w12 = 0x95               // '\x95'
         w10 = 0x9
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         cinc w11,w12,ne
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x3e] = (byte) w9  // arg2 // "@ "
         [x1, 0x20] = (w10,2)     // arg2
         

    loc_0x08024eb8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024e44
         w15 = w0 >> 0x18         // arg1
         if (w15 == 0x1f)
         b.ne 0x8024f18           // likely

    loc_0x08024ec4: // orphan
         if !w10 jmp 0x802501c    // likely

    loc_0x08024ec8: // orphan
         if (w10 == 3)
         b.eq 0x8025024           // unlikely

    loc_0x08024ed0: // orphan
         if (w10 == 1)
         b.ne 0x8023e38           // likely

    loc_0x08024ed8: // orphan
         w9 = 0x40                // '@'
         jmp 0x8025028

    loc_0x08024ee0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024e04
         w9 = 0x20                // U"\t\x96"
         jmp 0x8024eec

    loc_0x08024ee8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024e0c
         w9 = 0x10

    loc_0x08024eec: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024e1c, 0x8024ee4
         ubfx w8,w0,0xc, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w8 == 8)
         b.ls 0x8024f00           // likely

    loc_0x08024ef8: // orphan
         w0 = 0x1
         

    loc_0x08024f00: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024ef4
         w10 = 0x2
         if (w8 == 8)
         [x1 + 0x20] = w10        // arg2 // U"\t\x96"
         b.ne 0x8024f84           // likely

    loc_0x08024f10: // orphan
         w10 = 0xa
         jmp 0x8024f90

    loc_0x08024f18: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024ec0
         w15 = w9 + 8,lsl 12
         w15 = w0 & w15           // arg1
         if (w15 == w12)
         b.ne 0x8024fe0           // unlikely

    loc_0x08024f28: // orphan
         w8 = 0x3
         if ((w0 & 7) == 0)       // arg1
         b.ne 0x8023de0           // likely

    loc_0x08024f34: // orphan
         if (w10 == 2)
         b.eq 0x8023de0           // unlikely

    loc_0x08024f3c: // orphan
         if ((w0 & 0x10) == 0)    // arg1
         w8 = 0x20
         w9 = 0x5
         cinc w11,w8,ne
         [x1, 0x20] = (w9,2)      // arg2
         tbz w0,3,0x8024f60       // likely

    loc_0x08024f54: // orphan
         w9 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         w9 = w9 | 1
         [x1 + 0x38] = w9         // arg2

    loc_0x08024f60: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024f50
         if (w10 == 0)
         w9 = 0x40                // '@'
         csel w8,w8,w9, eq
         if (w10 == 3)
         w9 = 0x10
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         csel w9,w9,w8, eq
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         

    loc_0x08024f84: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024f0c
         x10 = 0x8024000
         x10 = x10 + 0
         w10 = [x10 + w8,uxtw 2]  // 0xb0000000d1 // 755914244305

    loc_0x08024f90: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024f14
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x24] = w10        // arg2 // "!"
         jmp 0x8025140

    loc_0x08024f9c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024e4c
         w9 = 0x20
         jmp 0x8024fa8

    loc_0x08024fa4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024e54
         w9 = 0x10

    loc_0x08024fa8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024e64, 0x8024fa0
         ubfx w10,w0,0xf, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = w8         // arg2
         w8 = 0x1
         if (w10 == 0xf)
         b.hi 0x8023de0           // unlikely

    loc_0x08024fbc: // orphan
         x11 = 0x8024000
         x11 = x11 + 0
         x12 = 0x8023de0
         w13 = (word) [x11 + x10,lsl 1] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2
         br x12

    loc_0x08024fe0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024f24
         w12 = 0xc00
         w12 = 0x1e20             // ' \x1e'
         if (w14 == w12)
         b.eq 0x8025054           // unlikely

    loc_0x08024ff0: // orphan
         w12 = 0x400
         w12 = 0x1e20             // ' \x1e'
         if (w14 == w12)
         b.ne 0x8025070           // likely

    loc_0x08025000: // orphan
         // XREFS(30)
         if !w10 jmp 0x80251a4    // likely

    loc_0x08025004: // orphan
         if (w10 == 3)
         b.eq 0x80251ac           // unlikely

    loc_0x0802500c: // orphan
         if (w10 == 1)
         b.ne 0x8023e38           // likely

    loc_0x08025014: // orphan
         w9 = 0x40                // '@'
         jmp 0x80251b0

    loc_0x0802501c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024ec4
         w9 = 0x20
         jmp 0x8025028

    loc_0x08025024: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024ecc
         w9 = 0x10

    loc_0x08025028: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024edc, 0x8025020
         w10 = w0 >> 0x14         // arg1
         w12 = 0x14               // " "
         w10 = w10 & 2
         w11 = 0x4
         bfxil w10,w0,0xf, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = w10 | w12          // " "
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         [x1 + 0x3e] = (byte) w9  // arg2 // "@ "
         [x1, 0x20] = (w11,2)     // arg2
         

    loc_0x08025054: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024fec
         if !w10 jmp 0x80251dc    // likely

    loc_0x08025058: // orphan
         if (w10 == 3)
         b.eq 0x80251e4           // unlikely

    loc_0x08025060: // orphan
         if (w10 == 1)
         b.ne 0x8023e38           // likely

    loc_0x08025068: // orphan
         w9 = 0x40                // '@'
         jmp 0x80251e8

    loc_0x08025070: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8024ffc
         w12 = w13 + 0x1e0,lsl 12
         w13 = 0x1e26             // '&\x1e'
         w12 = w0 & w12           // arg1
         if (w12 == w13)
         b.ne 0x8025150           // likely

    loc_0x08025084: // orphan
         ubfx w8,w0,0x16, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w8 == w0)            // arg1
         b.ne 0x8023e38           // unlikely

    loc_0x08025090: // orphan
         if ((w0 & 0x10000) == 0) // arg1
         w10 = 0x35               // '5'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         cinc w10,w10,eq
         if (w0 == 0)             // arg1
         w11 = 0x40               // '@'
         w12 = 0x20
         w9 = 0x8
         csel w11,w12,w11, ge
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1, 0x20] = (w9,2)      // arg2
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         

    loc_0x08025140: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8024f98, 0x80251d8
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         [x1 + 0x3e] = (byte) w9  // arg2
         

    loc_0x08025150: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025080
         w12 = 0x8400
         w13 = 0x2e00
         w12 = 0xbfe0             // '\xe0\xbf'
         w12 = w0 & w12           // arg1
         if (w12 == w13)
         b.ne 0x802520c           // likely

    loc_0x08025168: // orphan
         ubfx w9,w0,0xb, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 &= w0                 // arg1
         w10 = ~0x7f              // '\x7f'
         w11 = 0x40               // '@'
         csel w10,w11,w10, eq
         if (w9 == 7)
         ccmp w8,0,0, hi
         x11 = 0xa
         w8 = 0x3
         x11 = 0x37               // '7'
         [x1 + 0x3d] = (byte) w9  // arg2
         csel w0,w8,wzr, eq
         [x1 + 0x1f] = (byte) w10 // arg2 // tmp
         [x1 + 0x20] = x11        // arg2
         

    loc_0x080251a4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025000
         w9 = 0x20                // U"\n7"
         jmp 0x80251b0

    loc_0x080251ac: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025008
         w9 = 0x10

    loc_0x080251b0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8025018, 0x80251a8
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
         jmp 0x8025140

    loc_0x080251dc: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025054
         w9 = 0x20
         jmp 0x80251e8

    loc_0x080251e4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802505c
         w9 = 0x10

    loc_0x080251e8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x802506c, 0x80251e0
         x10 = 0x7
         ubfx w11,w0,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x10 = 0x24               // '$'
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         [x1 + 0x3c] = (byte) w11 // arg2
         [x1 + 0x20] = x10        // arg2
         [x1 + 0x3e] = (byte) w9  // arg2
         

    loc_0x0802520c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025164
         w12 = w0 & 0xfe0000      // arg1
         if (w12 == 0xa00)
         b.eq 0x8025234           // unlikely

    loc_0x08025218: // orphan
         if (w12 == 0xe00)
         b.eq 0x802523c           // unlikely

    loc_0x08025220: // orphan
         if (w12 == 0xf80)
         b.ne 0x8025248           // likely

    loc_0x08025228: // orphan
         w12 = 0x10
         [x1 + 0x3e] = (byte) w12 // arg2
         jmp 0x8025258

    loc_0x08025234: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025214
         w12 = 0x20
         jmp 0x8025244

    loc_0x0802523c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802521c
         tbz w0,0x1e,0x8023e38    // likely

    loc_0x08025240: // orphan
         w12 = 0x40               // '@'

    loc_0x08025244: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025238
         [x1 + 0x3e] = (byte) w12 // arg2

    loc_0x08025248: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025224
         w12 = 0xbe               // '\xbe'
         w12 = w0 & w12           // arg1
         if (w12 == 0xa00)
         b.ne 0x8025294           // likely

    loc_0x08025258: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025230
         w11 = w0 & w11           // arg1
         w12 = 0xf800
         w12 = 0xe00
         if (w11 == w12)
         b.eq 0x80252e0           // unlikely

    loc_0x0802526c: // orphan
         w12 = 0xf800
         w12 = 0x2e01
         if (w11 == w12)
         b.eq 0x80252e8           // unlikely

    loc_0x0802527c: // orphan
         w12 = 0xf800
         w12 = 0x2e00
         if (w11 == w12)
         b.ne 0x8025294           // likely

    loc_0x0802528c: // orphan
         w9 = 0xd
         jmp 0x80252ec

    loc_0x08025294: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8025254, 0x8025288
         w11 = 0xfc00
         w12 = 0x800
         w11 = 0xbf3f             // '?\xbf'
         w12 = 0x2e20             // ' .'
         w11 = w0 & w11           // arg1
         if (w11 == w12)
         b.eq 0x8025314           // unlikely

    loc_0x080252b0: // orphan
         w12 = 0x1800
         w12 = 0xe20              // ' \x0e'
         if (w11 == w12)
         b.eq 0x8025324           // unlikely

    loc_0x080252c0: // orphan
         w12 = 0x800
         w12 = 0xe20              // ' \x0e'
         if (w11 == w12)
         b.ne 0x8025360           // likely

    loc_0x080252d0: // orphan
         if (w10 == 3)
         b.eq 0x8023e38           // unlikely

    loc_0x080252d8: // orphan
         w9 = 0x4e                // 'N'
         jmp 0x802532c

    loc_0x080252e0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025268
         w9 = 0xc                 // "/"
         jmp 0x80252ec

    loc_0x080252e8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025278
         w9 = 0xe

    loc_0x080252ec: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8025290, 0x80252e4
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         w10 = 0x15
         csel w11,w12,w11, eq
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1, 0x20] = (w10,2)     // arg2
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         

    loc_0x08025314: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80252ac
         if (w10 == 1)
         b.hi 0x8023e38           // unlikely

    loc_0x0802531c: // orphan
         w9 = 0x4f                // 'O'
         jmp 0x802532c

    loc_0x08025324: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80252bc
         if w10 jmp 0x8023e38     // unlikely

    loc_0x08025328: // orphan
         w9 = 0x50                // 'P'

    loc_0x0802532c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80252dc, 0x8025320
         if ((w0 & 0x40000000) == 0) // arg1
         w12 = ~0x7f              // '\x7f'
         w13 = 0x40               // '@'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         csel w12,w13,w12, eq
         w13 = 0x8
         w11 = 0x16
         w10 = w13 << w10
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1f] = (byte) w12 // arg2 // tmp
         [x1, 0x20] = (w11,2)     // arg2
         [x1 + 0x3e] = (byte) w10 // arg2
         

    loc_0x08025360: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80252cc
         tbnz w0,0x1c,0x80253bc   // unlikely

    loc_0x08025364: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         jmp ifle 0x8025424       // likely

    loc_0x08025374: // orphan
         w9 = 0x37ff              // '\xff7'
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         jmp ifgt 0x802545c       // unlikely

    loc_0x08025384: // orphan
         w9 = 0xb800
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         b.eq 0x8025554           // unlikely

    loc_0x08025394: // orphan
         w9 = 0x2800
         w9 = 0x2e21              // '!.'
         if (w11 == w9)
         b.eq 0x802562c           // unlikely

    loc_0x080253a4: // orphan
         w9 = 0x4800
         w9 = 0x2e21              // '!.'
         if (w11 == w9)
         b.ne 0x80255fc           // likely

    loc_0x080253b4: // orphan
         w9 = 0xa6                // '\xa6'
         jmp 0x8025638

    loc_0x080253bc: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025360
         w9 = w9 + 0x1f8,lsl 12
         w12 = 0x27ff             // '\xff''
         w9 = w0 & w9             // arg1
         w12 = 0x7e21             // '!~'
         if (w9 == w12)
         jmp ifgt 0x80253fc       // unlikely

    loc_0x080253d4: // orphan
         w12 = 0x2800
         w12 = 0x5e21             // '!^'
         if (w9 == w12)
         b.eq 0x8023e38           // unlikely

    loc_0x080253e4: // orphan
         w12 = 0x4800
         w12 = 0x5e21             // '!^'
         if (w9 == w12)
         b.ne 0x8025494           // likely

    loc_0x080253f4: // orphan
         w9 = 0xa5                // '\xa5'
         jmp 0x8025474

    loc_0x080253fc: // orphan
         w12 = 0x2800
         w12 = 0x7e21             // '!~'
         if (w9 == w12)
         b.eq 0x8025470           // unlikely

    loc_0x0802540c: // orphan
         w12 = 0x4800
         w12 = 0x7e21             // '!~'
         if (w9 == w12)
         b.ne 0x8025494           // likely

    loc_0x0802541c: // orphan
         w9 = 0xa6                // '\xa6'
         jmp 0x8025474

    loc_0x08025424: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025370
         w9 = 0x37ff              // '\xff7'
         w9 = 0xe30               // '0\x0e'
         if (w11 == w9)
         jmp ifgt 0x80254e4       // unlikely

    loc_0x08025434: // orphan
         w9 = 0x2800
         w9 = 0xe21               // '!\x0e'
         if (w11 == w9)
         b.eq 0x8025634           // unlikely

    loc_0x08025444: // orphan
         w9 = 0x4800
         w9 = 0xe21               // '!\x0e'
         if (w11 == w9)
         b.ne 0x80255fc           // likely

    loc_0x08025454: // orphan
         w9 = 0xa5                // '\xa5'
         jmp 0x8025638

    loc_0x0802545c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025380
         w9 = 0x3800
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         b.ne 0x8025524           // likely

    loc_0x0802546c: // orphan
         jmp 0x80254d4

    loc_0x08025470: // orphan
         w9 = 0xa7                // '\xa7'

    loc_0x08025474: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80253f8, 0x8025420
         if (w10 == 3)
         b.eq 0x8023e38           // unlikely

    loc_0x0802547c: // orphan
         w11 = 0x8
         w8 = 0x20
         w11 = w11 << w10
         [x1 + 0x20] = w8         // arg2
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         jmp 0x802566c

    loc_0x08025494: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         jmp ifle 0x80254e4       // likely

    loc_0x080254a4: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         jmp ifgt 0x8025524       // unlikely

    loc_0x080254b4: // orphan
         w9 = 0xb800
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         b.eq 0x8025554           // unlikely

    loc_0x080254c4: // orphan
         w9 = 0x3800
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         b.ne 0x80255fc           // likely

    loc_0x080254d4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802546c
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0x9f                // '\x9f'
         w11 = 0x1
         jmp 0x8025590

    loc_0x080254e4: // orphan
         w9 = 0x3800
         w9 = 0xe30               // '0\x0e'
         if (w11 == w9)
         b.eq 0x8025564           // unlikely

    loc_0x080254f4: // orphan
         w9 = 0xa800
         w9 = 0xe30               // '0\x0e'
         if (w11 == w9)
         b.eq 0x8025574           // unlikely

    loc_0x08025504: // orphan
         w9 = 0xa800
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         b.ne 0x80255fc           // likely

    loc_0x08025514: // orphan
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xa1                // '\xa1'
         jmp 0x8025590

    loc_0x08025524: // orphan
         w9 = 0xa800
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         b.eq 0x8025584           // unlikely

    loc_0x08025534: // orphan
         w9 = 0xa800
         w9 = 0x2e31              // '1.'
         if (w11 == w9)
         b.ne 0x80255fc           // likely

    loc_0x08025544: // orphan
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xa3                // '\xa3'
         jmp 0x8025590

    loc_0x08025554: // orphan
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0x9d                // '\x9d'
         jmp 0x8025590

    loc_0x08025564: // orphan
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0x9e                // '\x9e'
         w12 = 0x1
         jmp 0x8025590

    loc_0x08025574: // orphan
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xa0                // '\xa0'
         jmp 0x8025590

    loc_0x08025584: // orphan
         w12 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xa2                // '\xa2'

    loc_0x08025590: // orphan
         // XREFS: CODE 0x080254e0  CODE 0x08025520  CODE 0x08025550  
         // XREFS: CODE 0x08025560  CODE 0x08025570  CODE 0x08025580  
         if (w10 == 2)
         b.eq 0x80255a8           // unlikely

    loc_0x08025598: // orphan
         w8 = w10                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 3)
         b.eq 0x8023de0           // unlikely

    loc_0x080255a4: // orphan
         jmp 0x80255ac

    loc_0x080255a8: // orphan
         tbz w0,0x1e,0x8023e38    // likely

    loc_0x080255ac: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80255a4
         w13 = w0 & 0x40000000    // arg1
         w14 = 0x1e
         if (w13 == 0)
         w13 = ~0x7f              // '\x7f'
         w15 = 0x40               // '@'
         w11 = w12 | w11
         csel w13,w15,w13, eq
         w15 = 0x8
         w12 = 0x10
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w15 = w15 << w10
         w10 = w12 << w10
         if (w11 == 0)
         [x1, 0x20] = (w14,2)     // arg2
         csel w9,w10,w15, ne
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1f] = (byte) w13 // arg2 // tmp
         [x1 + 0x3e] = (byte) w15 // arg2
         [x1 + 0x3f] = (byte) w9  // arg2 // " "
         

    loc_0x080255fc: // orphan
         w9 = 0xfc00
         w10 = 0xd800
         w9 = 0xdfbf              // '\xbf\xdf'
         w10 = 0x5e30             // '0^'
         w9 = w0 & w9             // arg1
         if (w9 == w10)
         b.ne 0x8025690           // likely

    loc_0x08025618: // orphan
         tbnz w0,0x1d,0x80256d4   // unlikely

    loc_0x0802561c: // orphan
         tbnz w0,0x16,0x8023e38   // unlikely

    loc_0x08025620: // orphan
         w8 = 0x10
         w9 = 0x20
         jmp 0x80256e8

    loc_0x0802562c: // orphan
         w9 = 0xa7                // '\xa7'
         jmp 0x8025638

    loc_0x08025634: // orphan
         w9 = 0xa4                // '\xa4'

    loc_0x08025638: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80253b8, 0x8025458, 0x8025630
         if (w10 == 3)
         b.eq 0x8023e38           // unlikely

    loc_0x08025640: // orphan
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         w8 = 0x1f                // tmp
         csel w11,w12,w11, eq
         [x1 + 0x20] = w8         // arg2
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         tbz w0,0x1e,0x802566c    // likely

    loc_0x08025660: // orphan
         w8 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         w8 = w8 | 8
         [x1 + 0x38] = w8         // arg2

    loc_0x0802566c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025490
         w11 = 0x10
         w12 = 0x8
         w11 = w11 << w10
         w10 = w12 << w10
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x24] = w9         // arg2
         [x1 + 0x3e] = (byte) w11 // arg2
         [x1 + 0x3f] = (byte) w10 // arg2
         

    loc_0x08025690: // orphan
         w8 = w8 + 0x7f,lsl 12
         w10 = 0xc7ff             // '\xff\xc7'
         w9 = w0 & w8             // arg1
         w8 = 0x1
         w10 = 0xeb0              // '\xb0\x0e'
         if (w9 == w10)
         jmp ifgt 0x8025704       // unlikely

    loc_0x080256ac: // orphan
         w10 = 0xc800
         w10 = 0xe30              // '0\x0e'
         if (w9 == w10)
         b.eq 0x802572c           // unlikely

    loc_0x080256bc: // orphan
         w10 = 0xf800
         w10 = 0xe30              // '0\x0e'
         if (w9 == w10)
         b.ne 0x8023de0           // likely

    loc_0x080256cc: // orphan
         w9 = 0x33                // '3'
         jmp 0x8025738

    loc_0x080256d4: // orphan
         if ((w0 & 0x400000) == 0) // arg1
         w8 = 0x40                // '@'
         w9 = 0x20
         csel w8,w9,w8, eq
         w9 = w8 << 1

    loc_0x080256e8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025628
         x10 = 0x1a
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x10 = 0x18
         [x1 + 0x3e] = (byte) w8  // arg2
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         [x1 + 0x20] = x10        // arg2
         

    loc_0x08025704: // orphan
         w10 = 0xf800
         w10 = 0xeb0              // '\xb0\x0e'
         if (w9 == w10)
         b.eq 0x8025734           // unlikely

    loc_0x08025714: // orphan
         w10 = 0xc800
         w10 = 0xeb0              // '\xb0\x0e'
         if (w9 == w10)
         b.ne 0x8023de0           // likely

    loc_0x08025724: // orphan
         w9 = 0x32                // '2'
         jmp 0x8025738

    loc_0x0802572c: // orphan
         w9 = 0x31                // '1'
         jmp 0x8025738

    loc_0x08025734: // orphan
         w9 = 0x34                // '4'

    loc_0x08025738: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80256d0, 0x8025728, 0x8025730
         tbnz w0,0x1d,0x8025754   // unlikely

    loc_0x0802573c: // orphan
         if ((w0 & 0x40000000) == 0) // arg1
         w10 = ~0x7f              // '\x7f'
         w11 = 0x40               // '@'
         w8 = 0x10
         csel w10,w11,w10, eq
         jmp 0x8025760

    loc_0x08025754: // orphan
         tbz w0,0x1e,0x8023e38    // likely

    loc_0x08025758: // orphan
         w8 = 0x20
         w10 = 0x80               // '\x80'

    loc_0x08025760: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8025750
         [x1 + 0x3e] = (byte) w8  // arg2
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = 0x1a
         [x1 + 0x1f] = (byte) w10 // arg2 // tmp
         [x1 + 0x20] = w11        // arg2
         jmp 0x8023ddc

}

/* ===== 0x08021a4c ===== */
int sym.arm64_decode_data_processing_immediate (int esi, int edx) {
    loc_0x8021a4c:
        hint 0x19
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
        b.ne 0x8021acc // likely
            
    loc_0x8021acc:
        w8 = w20 & 0x1f800000
        w9 = 0x1100
        if (w8 == w9)
        b.ne 0x8021b58 // likely
            
    loc_0x8021b58:
        w9 = w20 & 0x7ff00000
        w10 = 0x11c0  // '\xc0\x11'
        if (w9 == w10)
        b.ne 0x8021c04 // likely
            
    loc_0x8021c04:
        w9 = 0x1200
        if (w8 == w9)
        b.ne 0x8021cac // likely
            
    loc_0x8021cac:
        w9 = w20 & 0x7f800000
        w10 = 0x1300
        if (w9 == w10)
        b.eq 0x8021cd4 // unlikely
            
    loc_0x8021cd4:
        w8 = 0x17
        w9 = w20 & 0x1f
        if (w20 == 0)
        ubfx w10,w20,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w11,w20,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w12,w20,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0xc] = w8 // "/"
        w8 = 0x40     // '@'
        [x19 + 0x18] = (byte) w9
        w9 = 0x20
        csel w3,w9,w8, ge
        [x19 + 0x19] = (byte) w10
        [x19 + 0x1b] = (byte) w11
        [x19 + 0x1a] = (byte) w12
        [x19 + 0x1f] = (byte) w3 // arg4 // tmp
        tbz w20,0x1f,0x8021d20 // likely
            
    loc_0x8021d20:
        ubfx w0,w20,0x1d, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !w0 jmp 0x8021dcc // likely
            
    loc_0x8021dcc:
        w8 = 0x7
         // do {
    loc_0x8021dd0:
        // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8021d3c
        if (w20 == 0)
        ubfx w0,w20,0x16, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w1,w20,0x10, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = w20 & 0x400000
        [x19 + 0x10] = w8
        cset w8,ge
        if (w8 == w9)
        [x19 + 0x3a] = (byte) w0
        [x19 + 0x3b] = (byte) w1
        b.eq 0x8021e30 // unlikely
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
    loc_0x08021b28: // orphan
             w8 = [x19 + 0x14]        // 0xda // 218
             w8 = w8 | 1
             [x19 + 0x14] = w8

    loc_0x08021b34: // orphan
         sbfx w9,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w20,0xa, 0xc     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9 & 0xc
         [x19 + 0x20] = x8
         [x19 + 0x39] = (byte) w9
         tbnz w20,0x16,0x8021bd4  // unlikely

    loc_0x08021b4c: // orphan
         tbnz w20,0x1d,0x8021be0  // unlikely

    loc_0x08021b50: // orphan
         tbnz w20,0x1e,0x8021bf0  // unlikely

    loc_0x08021b54: // orphan
         jmp 0x8021ca4

    loc_0x08021ba8: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8

    loc_0x08021bb4: // orphan
         ubfx w9,w20,0xa, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w20,0x12, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x20] = x9
         if !w8 jmp 0x8021d40     // likely

    loc_0x08021bc4: // orphan
         if (w8 == 1)
         b.ne 0x8021d48           // likely

    loc_0x08021bcc: // orphan
         w8 = 0x10
         jmp 0x8021d58

    loc_0x08021bd4: // orphan
         x8 = x8 << 0xc
         [x19 + 0x20] = x8
         tbz w20,0x1d,0x8021b50   // likely

    loc_0x08021be0: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x14] = w8
         tbz w20,0x1e,0x8021ca4   // likely

    loc_0x08021bf0: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 4

    loc_0x08021bf8: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8021ca0
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x14] = w8
         jmp 0x8021e34

    loc_0x08021c5c: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8

    loc_0x08021c68: // orphan
         ubfx w0,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w1,w20,0x10, 6      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x19 + 0x20          // int64_t arg7
         x6 = x19 + 0x30
         w4 = 0x1
         [x19 + 0x3a] = (byte) w0
         [x19 + 0x3b] = (byte) w1
         sym.arm64_decode_bit_masks () // "@\r" // sym.arm64_decode_bit_masks(0x0, 0x0, 0x0, 0x0, -1, -1)
         if !w0 jmp 0x8021e30     // likely

    loc_0x08021c8c: // orphan
         w8 = 0x6000
         bics wzr,w8,w20          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x8021ca4           // likely

    loc_0x08021c98: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 2
         jmp 0x8021bf8

    loc_0x08021ca4: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8021b54
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8021e34

    loc_0x08021cc8: // orphan
         w10 = 0x3300
         if (w9 == w10)
         b.ne 0x8021d64           // likely

    loc_0x08021d30: // orphan
         if (w0 == 1)
         w8 = 0x8
         cinc w8,w8,ne
         jmp 0x8021dd0

    loc_0x08021d40: // orphan
         w8 = 0xe
         jmp 0x8021d58

    loc_0x08021d48: // orphan
         if (w8 == 2)
         w8 = 0x11
         w9 = 0xf
         csel w8,w9,w8, eq

    loc_0x08021d58: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_immediate @ 0x8021bd0, 0x8021d44
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x10] = w8
         jmp 0x8021e34

    loc_0x08021d64: // orphan
         w9 = 0x7fa0              // '\xa0\x7f'
         w10 = 0x1380             // '\x80\x13'
         w9 = w20 & w9
         if (w9 == w10)
         b.ne 0x8021e44           // likely

    loc_0x08021d78: // orphan
         x8 = 0x18
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = 0xa
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19 = x8
         sym.arm64_decode_base_registers () // sym.arm64_decode_base_registers(0x0, 0x0)
         w8 = (byte) [x19 + 0x1f] // 0xda // 218 // tmp
         ubfx w10,w20,0xa, 6      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w20 & 0x400000
         ubfx w9,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == 0x40)
         [x19 + 0x39] = (byte) w10
         cset w12,ne
         if (w10 == w8)
         w8 = w12 ^ w11,lsr 22
         cset w11,lo
         if ((w8 & w11) == 0)
         w8 = 0x3
         csel w0,wzr,w8, ne
         [x19 + 0x3a] = (byte) w9
         jmp 0x8021e34

    loc_0x08021df8: // orphan
         tbnz w20,0x1f,0x8021e0c  // unlikely

    loc_0x08021dfc: // orphan
         w8 = w20 >> 0xa
         w9 = w20 >> 0x10
         w8 = w9 | w8
         tbnz w8,5,0x8021e30      // unlikely

    loc_0x08021e0c: // orphan
         ubfx w2,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x19 + 0x28          // int64_t arg7
         x6 = x19 + 0x30
         w4 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.arm64_decode_bit_masks () // "h" // sym.arm64_decode_bit_masks(0x0, 0x0, 0x0, 0x0, -1, -1)
         w8 = 0x3
         if (w0 == 0)
         csel w0,w8,wzr, eq
         jmp 0x8021e34

    loc_0x08021e30: // orphan
         w0 = 0x3

    loc_0x08021e34: // orphan
         // XREFS: CODE 0x08021ac8  CODE 0x08021c00  CODE 0x08021ca8  
         // XREFS: CODE 0x08021d60  CODE 0x08021dc8  CODE 0x08021e2c  
         // XREFS: CODE 0x08021e90  CODE 0x08021ec4  
         (x20, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08021e44: // orphan
         w9 = 0x1280              // '\x80\x12'
         if (w8 == w9)
         b.ne 0x8021e88           // likely

    loc_0x08021e50: // orphan
         w8 = 0x19
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19 + 0xc] = w8
         sym.arm64_decode_base_registers () // sym.arm64_decode_base_registers(0x0, 0x0)
         ubfx w8,w20,0x1d, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x3
         if !w8 jmp 0x8021e94     // likely

    loc_0x08021e70: // orphan
         if (w8 == 1)
         b.eq 0x8021e34           // unlikely

    loc_0x08021e78: // orphan
         if (w8 == 2)
         w8 = 0xc
         cinc w8,w8,ne
         jmp 0x8021e98

    loc_0x08021e88: // orphan
         w0 = 0x1
         [x19 + 0xc] = wzr
         jmp 0x8021e34

    loc_0x08021e94: // orphan
         w8 = 0xb

    loc_0x08021e98: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x8021e84
         w9 = (byte) [x19 + 0x1f] // 0xda // 218 // tmp
         w10 = w20 >> 0x11
         w10 = w10 & 0x30
         [x19 + 0x10] = w8        // U"\n\x01"
         if (w9 == 0x20)
         w9 = w20 & 0x400000
         ccmp w9,0,4, eq
         ubfx w9,w20,5, 0x10      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x39] = (byte) w10
         csel w0,wzr,w0, eq
         [x19 + 0x20] = x9
         jmp 0x8021e34

}

/* ===== 0x0802577c ===== */
int sym.arm64_decode_sme (int esi, int edx) {
    loc_0x802577c:
        tbnz w0,0x1f,0x8025788 // unlikely
            
    loc_0x8025788:
        x8 = 0x7
        w0 = 0x1
        x8 = 0x31     // '1'
        [x1 + 8] = x8 // arg2
        0x08025798
         // } else {
    loc_0x8025780:
        w0 = 0x3
        0x08025784
        }
        return eax;
}

/* ===== 0x080257a0 ===== */
int sym.arm64_decode_sve (int esi, int edx) {
    loc_0x80257a0:
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
        0x080257c8
         // (break)
}

/* ===== 0x08025858 ===== */
int sym.arraylist_add (int esi, int edx) {
    loc_0x8025858:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x9, 2) = 3   // arg1
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x10 = x9 + 1
        if (x8 == x10)
        b.hs 0x80258c0 // unlikely
            
    loc_0x80258c0:
        x0 = [x20]    // 0xdb // 219
         // do {
    loc_0x80258c4:
        // CODE XREF from sym.arraylist_add @ 0x80258bc
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x20 + 8] = x10
        [x0 + x9,lsl 3] = x19
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8025884
    loc_0x8025898:
        x0 = [x20]    // 0xdb // 219 // int64_t arg1
        x1 = x21 << 3 // int64_t arg2
        w2 = 0xcc0    // '\xc0\f'
        0x80258a4 ()  // 0x80258a4(0x0, 0x0, 0xcc0, 0x0)
        if !x0 jmp 0x80258e8 // likely
            
    loc_0x80258e8:
        w8 = ~0xb
        jmp 0x80258d0
         // do {
    loc_0x80258d0:
        // CODE XREF from sym.arraylist_add @ 0x80258ec
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // " "
        hint 0x1d
        0x080258e4
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08025918 ===== */
int sym.arraylist_remove (int esi, int edx) {
    loc_0x8025918:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = [x0 + 8] // 0xc7 // 199 // arg1
        if (x9 == x1) // arg2
        b.ls 0x802596c // likely
            
    loc_0x802596c:
        x20 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8025970:
        // CODE XREF from sym.arraylist_remove @ 0x8025968
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08025980
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08025988 ===== */
int sym.arraylist_clear (int esi, int edx) {
    loc_0x8025988:
        [x0 + 8] = xzr // arg1
        0x0802598c
         // (break)
}

