// 6.6.ko.ko 内核模块伪代码 (radare2 pdc, 145 functions)


/* ===== 0x08002168 ===== */
int sym.paradise_anon_open (int esi, int edx) {
    loc_0x8002168:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = sym..text // 0x8002000
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w1 = 0xcc0    // '\xc0\f'
        x0 = [x8]     // 0xcf // 207 // int64_t arg2 // sym..text
        w2 = 0x8
        0x800218c ()  // 0x800218c(0x90000008b4d2f862, 0xcc0, 0x8, 0x0)
        if !x0 jmp 0x80021c0 // unlikely
            
    loc_0x80021c0:
        // CODE XREF from sym.paradise_anon_open @ 0x8002190
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000 // "b\xf8\u04b4\b" // int64_t arg2 // sym..text
        0x80021c8 ()  // 0x80021c8(0x8002000, 0x0, 0x0, 0x0)
        w0 = ~0xb
        jmp 0x80021b0
         // do {
    loc_0x80021b0:
        // CODE XREFS from sym.paradise_anon_open @ 0x80021d0, 0x80021ec
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x080021bc
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8002194
    loc_0x80021a8:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0xd8] = x20
    loc_0x080021d4: // orphan
             // CODE XREF from sym.paradise_anon_open @ 0x80021a4
             x0 = sym..text           // 0x8002000
             x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // int64_t arg2 // sym..text
             0x80021dc ()             // 0x80021dc(0x8002000, 0x0, 0x0, 0x0)
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
             0x80021e4 ()             // 0x80021e4(0x0, 0x0, 0x0, 0x0)
             w0 = ~0xb
             jmp 0x80021b0

}

/* ===== 0x08002284 ===== */
int sym.paradise_anon_ioctl (int esi, int edx) {
    loc_0x8002284:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x820] // 0xcf // 207
        w9 = [x8 + 8] // 0xcf // 207
        w8 = [x8 + 0x18] // 0xcf // 207
        w8 = w9 | w8
        if w8 jmp 0x8002328 // likely
            
    loc_0x8002328:
        // CODE XREF from sym.paradise_anon_ioctl @ 0x8002298
        x0 = ~0
        0x0800232c
         // } else {
    loc_0x800229c:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = sym..text // 0x8002000
        w8 = 0x573a   // ':W'
        w8 = 0xc020   // ' \xc0'
        x20 = [x19]   // 0xda // 218 // sym..text
        [x19] = x0    // arg1 // sym..text
        if (w1 == w8) // arg2
        x0 = ~0x18
        jmp ifgt 0x8002330 // likely
        }
        return eax;
    loc_0x80022cc:
        w8 = 0x5714   // '\x14W'
        w8 = 0xc010   // '\x10\xc0'
        if (w1 == w8)
        jmp ifle 0x800238c // unlikely
            
    loc_0x800238c:
        // CODE XREF from sym.paradise_anon_ioctl @ 0x80022d8
        w8 = 0x570c   // '\fW'
        w8 = 0xc008
        if (w1 == w8)
        jmp ifle 0x800249c // unlikely
            
    loc_0x800249c:
        // CODE XREF from sym.paradise_anon_ioctl @ 0x8002398
        w8 = 0x5729   // ')W'
        w8 = 0xc004
        if (w1 == w8)
        b.eq 0x8002584 // unlikely
            
    loc_0x8002584:
        // CODE XREF from sym.paradise_anon_ioctl @ 0x80024a8
        x0 = x2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8002588 ()  // 0x8002588(0x0, 0x0, 0x0, 0x0)
        jmp 0x8002598
         // do {
    loc_0x8002598:
        // XREFS(21)
        x0 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80022dc
    loc_0x80022ec:
        w8 = 0x5715   // '\x15W'
        w8 = 0xc010   // '\x10\xc0'
        if (w1 == w8)
        b.eq 0x80024f4 // unlikely
            
    loc_0x80024f4:
        // CODE XREF from sym.paradise_anon_ioctl @ 0x80022f8
        x0 = x2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x80024f8 ()  // "'" // 0x80024f8(0x0, 0x0, 0x0, 0x0)
        jmp 0x8002598
    loc_0x080022fc: // orphan
             w8 = 0x5738              // '8W'
             w8 = 0xc010              // '\x10\xc0'
             if (w1 == w8)
             b.eq 0x8002500           // unlikely

    loc_0x0800230c: // orphan
         w8 = 0x5739              // '9W'
         w8 = 0xc010              // '\x10\xc0'
         if (w1 == w8)
         b.ne 0x800259c           // likely

    loc_0x0800231c: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002320 ()             // 0x8002320(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x08002330: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x80022c8
         w8 = 0x5727              // ''W'
         w8 = 0xc198              // '\x98\xc1'
         if (w1 == w8)            // arg2
         jmp ifle 0x80023d8       // unlikely

    loc_0x08002340: // orphan
         w8 = 0x572b              // '+W'
         w8 = 0xc360              // '`\xc3'
         if (w1 == w8)            // arg2
         jmp ifgt 0x8002460       // likely

    loc_0x08002350: // orphan
         w8 = 0x5728              // '(W'
         w8 = 0xc198              // '\x98\xc1'
         if (w1 == w8)
         b.eq 0x800250c           // unlikely

    loc_0x08002360: // orphan
         w8 = 0x572a              // '*W'
         w8 = 0xc198              // '\x98\xc1'
         if (w1 == w8)
         b.eq 0x8002518           // unlikely

    loc_0x08002370: // orphan
         w8 = 0x5716              // '\x16W'
         w8 = 0xc204
         if (w1 == w8)
         b.ne 0x800259c           // likely

    loc_0x08002380: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002384 ()             // 0x8002384(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x080023ac: // orphan
         w8 = 0x570e              // '\x0eW'
         w8 = 0xc008
         if (w1 == w8)
         b.eq 0x8002530           // unlikely

    loc_0x080023bc: // orphan
         w8 = 0x573c              // '<W'
         w8 = 0xc008
         if (w1 == w8)
         b.ne 0x800259c           // likely

    loc_0x080023cc: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80023d0 ()             // "q" // 0x80023d0(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x080023d8: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x800233c
         w8 = 0x570b              // '\vW'
         w8 = 0xc028              // '(\xc0'
         if (w1 == w8)            // arg2
         jmp ifle 0x80024c8       // unlikely

    loc_0x080023e8: // orphan
         w8 = 0x570c              // '\fW'
         w8 = 0xc028              // '(\xc0'
         if (w1 == w8)            // arg2
         b.eq 0x800253c           // unlikely

    loc_0x080023f8: // orphan
         w8 = 0x570b              // '\vW'
         w8 = 0xc104
         if (w1 == w8)            // arg2
         b.eq 0x8002548           // unlikely

    loc_0x08002408: // orphan
         w8 = 0x570a              // '\nW'
         w8 = 0xc120              // ' \xc1'
         if (w1 == w8)            // arg2
         b.ne 0x800259c           // likely

    loc_0x08002418: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800241c ()             // "^" // 0x800241c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x08002424: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x80022e8
         w8 = 0x5713              // '\x13W'
         w8 = 0xc018              // '\x18\xc0'
         if (w1 == w8)
         b.eq 0x8002554           // unlikely

    loc_0x08002434: // orphan
         w8 = 0x572b              // '+W'
         w8 = 0xc018              // '\x18\xc0'
         if (w1 == w8)
         b.eq 0x8002560           // unlikely

    loc_0x08002444: // orphan
         w8 = 0x573a              // ':W'
         w8 = 0xc020              // ' \xc0'
         if (w1 == w8)
         b.ne 0x800259c           // likely

    loc_0x08002454: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002458 ()             // "O" // 0x8002458(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x08002460: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x800234c
         w8 = 0x572c              // ',W'
         w8 = 0xc360              // '`\xc3'
         if (w1 == w8)            // arg2
         b.eq 0x800256c           // unlikely

    loc_0x08002470: // orphan
         w8 = 0x571e              // '\x1eW'
         w8 = 0x4008
         if (w1 == w8)
         b.eq 0x8002578           // unlikely

    loc_0x08002480: // orphan
         w8 = 0x571f              // '\x1fW'
         w8 = 0x4018              // '\x18@'
         if (w1 == w8)
         b.ne 0x800259c           // likely

    loc_0x08002490: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002494 ()             // "@" // 0x8002494(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x080024bc: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80024c0 ()             // "5" // 0x80024c0(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x080024c8: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x80023e4
         w8 = 0x573b              // '//W'
         w8 = 0xc020              // ' \xc0'
         if (w1 == w8)            // arg2
         b.eq 0x8002590           // unlikely

    loc_0x080024d8: // orphan
         w8 = 0x5709
         w8 = 0xc028              // '(\xc0'
         if (w1 == w8)            // arg2
         b.ne 0x800259c           // likely

    loc_0x080024e8: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80024ec ()             // "*" // 0x80024ec(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x08002500: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8002308
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002504 ()             // "$" // 0x8002504(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x0800250c: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x800235c
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002510 ()             // "!" // 0x8002510(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x08002518: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x800236c
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800251c ()             // 0x800251c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x08002524: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x80023a8
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002528 ()             // 0x8002528(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x08002530: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x80023b8
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002534 ()             // 0x8002534(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x0800253c: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x80023f4
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002540 ()             // 0x8002540(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x08002548: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8002404
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800254c ()             // 0x800254c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x08002554: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8002430
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002558 ()             // 0x8002558(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x08002560: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x8002440
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002564 ()             // 0x8002564(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x0800256c: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x800246c
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002570 ()             // "\t" // 0x8002570(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x08002578: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x800247c
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800257c ()             // 0x800257c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002598

    loc_0x08002590: // orphan
         // CODE XREF from sym.paradise_anon_ioctl @ 0x80024d4
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002594 ()             // 0x8002594(0x0, 0x0, 0x0, 0x0)

    loc_0x0800259c: // orphan
         // XREFS: CODE 0x08002318  CODE 0x0800237c  CODE 0x080023c8  
         // XREFS: CODE 0x08002414  CODE 0x08002450  CODE 0x0800248c  
         // XREFS: CODE 0x080024b8  CODE 0x080024e4  
         [x19] = x20
         (x20, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

}

/* ===== 0x080025b4 ===== */
int sym.paradise_anon_release (int esi, int edx) {
    loc_0x80025b4:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = [x1 + 0xd8] // 0xc8 // 200 // arg2
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x80025d4 ()  // 0x80025d4(0x0, 0x0, 0x0, 0x0)
        if !x20 jmp 0x8002634 // likely
            
    loc_0x8002634:
        // CODE XREF from sym.paradise_anon_release @ 0x80025d8
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08002648
         // } else {
    loc_0x80025dc:
        x0 = [x20]    // 0xdb // 219
        if !x0 jmp 0x8002628 // likely
        }
        return eax;
    loc_0x80025e4:
        x8 = [x0 + 8] // 0xc7 // 199
        if !x8 jmp 0x8002624 // unlikely
            
    loc_0x8002624:
        // CODE XREFS from sym.paradise_anon_release @ 0x80025e8, 0x800260c
        0x8002624 ()  // 0x8002624(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x8002628:
        // CODE XREF from sym.paradise_anon_release @ 0x80025e0
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        0x800262c ()  // 0x800262c(0x0, 0x0, 0x0, 0x0)
        [x19 + 0xd8] = xzr
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080025f8: // orphan
             // CODE XREFS from sym.paradise_anon_release @ 0x8002614, 0x8002620
             x0 = [x20]               // 0xdb // 219
             x1 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w21 = w21 + 1
             x8 = [x0 + 8]            // 0xc7 // 199
             if (x8 == x1)
             b.ls 0x8002624           // unlikely

    loc_0x08002610: // orphan
         // CODE XREF from sym.paradise_anon_release @ 0x80025f4
         0x8002610 ()             // 0x8002610(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x80025f8     // likely

    loc_0x08002618: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800261c ()             // 0x800261c(0x0, 0x0, 0x0, 0x0)
         jmp 0x80025f8

}

/* ===== 0x08002650 ===== */
int sym.reboot_handler_pre (int esi, int edx) {
    loc_0x8002650:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x19,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x19 + 0x820] // 0xda // 218
        w9 = [x8 + 8] // 0xcf // 207
        w8 = [x8 + 0x18] // 0xcf // 207
        w8 = w9 | w8
        if w8 jmp 0x8002710 // likely
            
    loc_0x8002710:
        // CODE XREFS from sym.reboot_handler_pre @ 0x8002678, 0x8002690, 0x80026a4, 0x8002754, 0x800276c
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08002724
         // } else {
    loc_0x800267c:
        x8 = [x1]     // 0xc8 // 200 // arg2
        w10 = 0x9c4d  // 'M\x9c'
        w10 = 0x7a3b  // '//z'
        w9 = [x8]     // 0xcf // 207
        if (w9 == w10)
        b.ne 0x8002710 // likely
        }
        return eax;
    loc_0x8002694:
        w9 = [x8 + 8] // 0xcf // 207
        w10 = 0x1d6b  // 'k\x1d'
        w10 = 0x2f8e  // '\x8e/'
        if (x9 == x10)
        b.ne 0x8002710 // likely
    loc_0x80026a8:
        x21 = [x8 + 0x18] // 0xcf // 207
        if !x21 jmp 0x8002728 // unlikely
            
    loc_0x8002728:
        // CODE XREF from sym.reboot_handler_pre @ 0x80026ac
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000
        // sym..text
        jmp 0x8002768
         // do {
    loc_0x8002768:
        // CODE XREFS from sym.reboot_handler_pre @ 0x8002730, 0x800273c
        0x8002768 ()  // 0x8002768(0x0, 0x0, 0x0, 0x0)
        jmp 0x8002710
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80026b0
    loc_0x80026c8:
        x8 = sym..text // 0x8002000
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = sym..text // 0x8002000
        x9 = x9 + 0   // 0x8002000
        // sym..text
        x8 = [x8]     // 0xcf // 207 // sym..text
        [x0, 8] = (x9,2)
        if !x8 jmp 0x8002740 // likely
            
    loc_0x8002740:
        // CODE XREF from sym.reboot_handler_pre @ 0x80026e0
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000
        // sym..text // int64_t arg1
        0x8002748 ()  // 0x8002748(0x8002000, 0x0, 0x0, 0x0)
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8002750 ()  // 0x8002750(0x0, 0x0, 0x0, 0x0)
        jmp 0x8002710
    loc_0x080026e4: // orphan
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w2 = 0x1
             ldur w16,[x8,-4]         // 0xcf // 207
             w17 = 0x9238             // '8\x92'
             w17 = 0x2a0
             if (w16 == w17)
             b.eq 0x8002708           // unlikely

    loc_0x08002704: // orphan
         brk 0x8228

    loc_0x08002708: // orphan
         // CODE XREF from sym.reboot_handler_pre @ 0x8002700
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         if w0 jmp 0x8002758      // unlikely

    loc_0x08002734: // orphan
         // CODE XREF from sym.reboot_handler_pre @ 0x80026c4
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000
                                  // sym..text
         jmp 0x8002768

    loc_0x08002758: // orphan
         // CODE XREF from sym.reboot_handler_pre @ 0x800270c
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800275c ()             // 0x800275c(0x0, 0x0, 0x0, 0x0)
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000
                                  // sym..text

}

/* ===== 0x08002774 ===== */
int sym.paradise_install_fd_tw_func (int esi, int edx) {
    loc_0x8002774:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x8002788 ()  // 0x8002788(0x0, 0x0, 0x0, 0x0)
        tbnz w0,0x1f,0x800285c // unlikely
            
    loc_0x800285c:
        // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800278c
        mrs x20,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = [x20 + 0x618] // 0xdb // 219
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000
        // sym..text // int64_t arg1
        0x800286c ()  // 0x800286c(0x8002000, -1, 0x0, 0x0)
        x8 = [x19 + 0x10] // 0xda // 218
        if !x8 jmp 0x8002838 // likely
            
    loc_0x8002838:
        // CODE XREFS from sym.paradise_install_fd_tw_func @ 0x8002874, 0x8002910, 0x8002920, 0x800293c
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x800283c ()  // 0x800283c(0x0, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800284c
         // } else {
    loc_0x8002878:
        w9 = (byte) [x20 + 0x46] // 0xdb // 219
        tbnz w9,5,0x800288c // likely
         // } else {
        }
        return eax;
        goto loc_0x8002790
    loc_0x800279c:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w10,5,0x80027b4 // likely
            
    loc_0x80027b4:
        // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80027a4
        x10 = x9 << 8
        x10 = x9 & x10,asr 8
         // do {
    loc_0x80027bc:
        // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80027b0
        x11 = xzr | 0x7fffff0000
        x11 = 0xfffd  // '\xfd\xff'
        if (x10 == x11)
        b.hs 0x8002850 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080027cc: // orphan
             x9 = x9 & 0xff7fffffffffffff
             jmp 0x8002940

    loc_0x080027d8: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800294c
         mrs x10,daif             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207 // sym..text
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // sym..text
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x10             // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08002800: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x8002948
         // CODE XREF from sym.paradise_install_fd_tw_func @ +0x20c
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sttr w20,[x9]
         jmp 0x8002950

    loc_0x08002810: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800295c
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 & 0xffffffffffff
         x11 = x10 - 1,lsl 12
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08002834: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x8002958
         // CODE XREF from sym.paradise_install_fd_tw_func @ +0x210
         if w8 jmp 0x8002850      // unlikely

    loc_0x08002850: // orphan
         // CODE XREFS from sym.paradise_install_fd_tw_func @ 0x80027c8, 0x8002834
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000
                                  // sym..text
         jmp 0x800292c

    loc_0x08002880: // orphan
         x10 = [x20]              // 0xdb // 219
         x9 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w10,0x1a,0x8002894   // likely

    loc_0x0800288c: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800287c
         x9 = x8 << 8
         x9 = x8 & x9,asr 8

    loc_0x08002894: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x8002888
         x10 = xzr | 0x7fffff0000
         x10 = 0xfffd             // '\xfd\xff'
         if (x9 == x10)
         b.hs 0x8002914           // unlikely

    loc_0x080028a4: // orphan
         x8 = x8 & 0xff7fffffffffffff
         jmp 0x8002960

    loc_0x080028b0: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800296c
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x20 + 8]          // 0xdb // 219 // sym..text
         mrs x11,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = x10                // '\xff\xff\xff\xff\xff\xff\xff\xff' // sym..text
         bfxil x12,x11,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x12        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080028d8: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x8002968
         // CODE XREF from sym.paradise_install_fd_tw_func @ +0x214
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = ~0
         sttr w10,[x8]
         jmp 0x8002970

    loc_0x080028ec: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x800297c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 & 0xffffffffffff
         x11 = x10 - 1,lsl 12
         msr ttbr0_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08002910: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x8002978
         // CODE XREF from sym.paradise_install_fd_tw_func @ +0x218
         if !w9 jmp 0x8002838     // likely

    loc_0x08002914: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80028a0
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000
                                  // sym..text // int64_t arg1
         0x800291c ()             // 0x800291c(0x8002000, 0x0, 0x0, 0x0)
         jmp 0x8002838

    loc_0x08002924: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x8002798
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000
                                  // sym..text

    loc_0x0800292c: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x8002858
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8002930 ()             // 0x8002930(0x0, 0x0, 0x0, 0x0)
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8002938 ()             // 0x8002938(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002838

    loc_0x08002940: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80027d0
         x10 = sym..text          // 0x8002000
         x10 = [x10]              // 0xd1 // 209 // sym..text
         tbnz x10,0x26,0x8002800  // unlikely

    loc_0x0800294c: // orphan
         jmp 0x80027d8

    loc_0x08002950: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x8002808
         x9 = sym..text           // 0x8002000
         x9 = [x9]                // 0xd0 // 208 // sym..text
         tbnz x9,0x26,0x8002834   // unlikely

    loc_0x0800295c: // orphan
         jmp 0x8002810

    loc_0x08002960: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80028a8
         x9 = sym..text           // 0x8002000
         x9 = [x9]                // 0xd0 // 208 // sym..text
         tbnz x9,0x26,0x80028d8   // unlikely

    loc_0x0800296c: // orphan
         jmp 0x80028b0

    loc_0x08002970: // orphan
         // CODE XREF from sym.paradise_install_fd_tw_func @ 0x80028e4
         x8 = sym..text           // 0x8002000
         x8 = [x8]                // 0xcf // 207 // sym..text
         tbnz x8,0x26,0x8002910   // unlikely

    loc_0x0800297c: // orphan
         jmp 0x80028ec

}

/* ===== 0x0800530c ===== */
int sym._copy_from_user (int esi, int edx) {
    loc_0x800530c:
        // XREFS: CALL 0x08003978  CALL 0x08003fa8  CALL 0x080045c4
        // XREFS: CALL 0x0800468c  CALL 0x08004738  CALL 0x080047f4
        // XREFS: CALL 0x08004e48  CALL 0x0800517c
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        tbnz w9,5,0x8005340 // likely
            
    loc_0x8005340:
        x9 = x1 << 8  // arg2
        x9 = x1 & x9,asr 8 // arg2
         // do {
    loc_0x8005348:
        x10 = 0x80    // '\x80'
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x19 == x10)
        b.hi 0x80053d8 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08005358: // orphan
             x10 = x10 - x19
             x21 = x19                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             if (x10 == x9)
             b.lo 0x80053d8           // unlikely

    loc_0x08005368: // orphan
         jmp 0x800540c

    loc_0x08005370: // orphan
         // CODE XREF from sym._copy_from_user @ 0x8005418
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207 // sym..text
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // sym..text
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005398: // orphan
         x1 = x1 & 0xff7fffffffffffff // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x80053a4 ()             // 0x80053a4(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800541c

    loc_0x080053b4: // orphan
         // CODE XREF from sym._copy_from_user @ 0x8005428
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080053d8: // orphan
         if x21 jmp 0x80053f4     // unlikely

    loc_0x080053dc: // orphan
         // CODE XREF from sym._copy_from_user @ 0x8005408
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x080053f4: // orphan
         x8 = x19 - x21
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = x20 + x8            // int64_t arg1
         0x8005404 ()             // 0x8005404(0x0, 0x0, 0x0, 0x0)
         jmp 0x80053dc

    loc_0x0800540c: // orphan
         // CODE XREF from sym._copy_from_user @ 0x8005368
         x9 = 0x8005000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x8005398   // likely

    loc_0x08005418: // orphan
         jmp 0x8005370

    loc_0x0800541c: // orphan
         // CODE XREF from sym._copy_from_user @ 0x80053ac
         x8 = 0x8005000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x80053d8   // likely

    loc_0x08005428: // orphan
         jmp 0x80053b4

}

/* ===== 0x08003e54 ===== */
int sym.lockfree_va_to_pa (int esi, int edx) {
    loc_0x8003e54:
        // CALL XREFS from sym.do_read_physical_memory @ 0x8003a40, 0x8003b3c
        // CALL XREFS from sym.do_write_physical_memory @ 0x8004070, 0x8004180
        sp = sp - 0x30
        ubfx x8,x1,0x1e, 9 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x0 + x8,lsl 3] // 0xcf000000c7 // 889058230471 // arg1
        [var_28h] = x8
        x8 = [var_28h] // 0x4 // 4
        [var_20h] = x8
        x9 = [var_20h] // 0x4 // 4
        [var_0h] = x9
        if !x9 jmp 0x8003f4c // likely
            
    loc_0x8003f4c:
        // CODE XREFS from sym.lockfree_va_to_pa @ 0x8003e74, 0x8003e88, 0x8003ec0, 0x8003ef8, 0x8003f20
        w0 = ~0xd
        sp = arg_30h
        0x08003f54
         // } else {
    loc_0x8003e78:
        x8 = x9 & 3
        if (x8 == 3)
        b.eq 0x8003ea0 // unlikely
        }
        return eax;
    loc_0x8003e84:
        if (x8 == 1)
        b.ne 0x8003f4c // likely
    loc_0x8003e8c:
        x8 = x9 & 0xffffc0000000
        x9 = x1 & 0x3fffffff // arg2
        w10 = 0x4000
        bfxil x8,x1,0, 0x1e // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        jmp 0x8003f34
         // do {
    loc_0x8003f34:
        // CODE XREFS from sym.lockfree_va_to_pa @ 0x8003e9c, 0x8003ef0
        [x2] = x8     // arg3
        x8 = x10 - x9
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x3] = x8     // arg4
        sp = arg_30h
        0x08003f48
         // } while (?);
        }
        return eax;
    loc_0x08003ea0: // orphan
             // CODE XREF from sym.lockfree_va_to_pa @ 0x8003e80
             x8 = 0x8003000
             x9 = x9 & 0x7ffffff000
             ubfx x10,x1,0x15, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
             x8 = [x8]                // 0xcf // 207
             x9 = x9 - x8
             x9 = x9 | 0xffffff8000000000
             x9 = [x9 + x10,lsl 3]    // 0xd1000000d0 // 897648165072
             [var_0h_2] = x9
             if !x9 jmp 0x8003f4c     // unlikely

    loc_0x08003ec4: // orphan
         x10 = 0x1
         x10 = 0xc00
         if ((x9 & x10) == 0)
         x10 = x9 & 3
         b.eq 0x8003ef4           // unlikely

    loc_0x08003ed8: // orphan
         if (x10 == 3)
         b.eq 0x8003ef4           // unlikely

    loc_0x08003ee0: // orphan
         x8 = x9 & 0xffffffe00000
         x9 = x1 & 0x1fffff       // arg2
         w10 = 0x20
         bfxil x8,x1,0, 0x15      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         jmp 0x8003f34

    loc_0x08003ef4: // orphan
         // CODE XREFS from sym.lockfree_va_to_pa @ 0x8003ed4, 0x8003edc
         if (x10 == 3)
         b.ne 0x8003f4c           // likely

    loc_0x08003efc: // orphan
         x9 = x9 & 0x7ffffff000
         x8 = x9 - x8
         ubfx x9,x1,0xc, 9        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         x8 = x8 | 0xffffff8000000000
         x8 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         x9 = 0x1
         x9 = 0x400
         if ((x8 & x9) == 0)
         [var_0h_3] = x8
         b.eq 0x8003f4c           // unlikely

    loc_0x08003f24: // orphan
         x8 = x8 & 0xfffffffff000
         x9 = x1 & 0xfff          // arg2
         w10 = 0x1000
         bfxil x8,x1,0, 0xc       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2

}

/* ===== 0x0800542c ===== */
int sym._copy_to_user (int esi, int edx) {
    loc_0x800542c:
        // XREFS: CALL 0x08003a60  CALL 0x08004090  CALL 0x080045f8
        // XREFS: CALL 0x080046b8  CALL 0x0800475c  CALL 0x08005258
        // XREFS: CALL 0x08005270
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w9,5,0x8005444 // likely
            
    loc_0x8005444:
        x9 = x0 << 8  // arg1
        x9 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x800544c:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = 0x80    // '\x80'
        if (x2 == x10) // arg3
        b.hi 0x80054d8 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08005464: // orphan
             x10 = x10 - x2           // arg3
             if (x10 == x9)
             b.lo 0x80054d8           // unlikely

    loc_0x08005470: // orphan
         jmp 0x80054e8

    loc_0x08005478: // orphan
         // CODE XREF from sym._copy_to_user @ 0x80054f4
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207 // sym..text
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // sym..text
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080054a0: // orphan
         x0 = x0 & 0xff7fffffffffffff // int64_t arg1
         0x80054a4 ()             // 0x80054a4(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80054f8

    loc_0x080054b4: // orphan
         // CODE XREF from sym._copy_to_user @ 0x8005504
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080054d8: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x080054e8: // orphan
         // CODE XREF from sym._copy_to_user @ 0x8005470
         x9 = 0x8005000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x80054a0   // likely

    loc_0x080054f4: // orphan
         jmp 0x8005478

    loc_0x080054f8: // orphan
         // CODE XREF from sym._copy_to_user @ 0x80054ac
         x8 = 0x8005000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x80054d8   // likely

    loc_0x08005504: // orphan
         jmp 0x80054b4

}

/* ===== 0x08005508 ===== */
int sym.kmap_atomic (int esi, int edx) {
    loc_0x8005508:
        // CALL XREF from sym.do_read_physical_memory @ 0x8003d98
        // CALL XREF from sym.swap_write_page_direct @ 0x8004554
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = [x8 + 0x10] // 0xcf // 207
        w9 = w9 + 1
        [x8 + 0x10] = w9
        w9 = [x8 + 0xb54] // 0xcf // 207
        w9 = w9 + 1
        [x8 + 0xb54] = w9
        x8 = 0xff00
        jmp 0x8005534
         // do {
    loc_0x8005534:
        // CODE XREF from sym.kmap_atomic @ 0x8005528
        x9 = x0 << 6  // arg1
        x9 = x9 & 0xfffffffffff000
        x0 = x8 | x9
        0x08005540
         // } while (?);
        }
        return eax;
}

/* ===== 0x08005544 ===== */
int sym.__kunmap_atomic (int esi, int edx) {
    loc_0x8005544:
        // CALL XREF from sym.do_read_physical_memory @ 0x8003db0
        // CALL XREF from sym.swap_write_page_direct @ 0x8004568
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = [x8 + 0xb54] // 0xcf // 207
        w9 = w9 - 1
        [x8 + 0xb54] = w9
        x9 = [x8 + 0x10] // 0xcf // 207
        x9 = x9 - 1
        [x8 + 0x10] = w9
        b.eq 0x8005570 // unlikely
            
    loc_0x8005570:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800557c ()  // 0x800557c(0x0, 0x0, 0x0, 0x0)
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x08005588
         // } else {
    loc_0x8005564:
        x8 = [x8 + 0x10] // 0xcf // 207
        if !x8 jmp 0x8005570 // likely
        }
        return eax;
    loc_0x800556c:
        0x0800556c
         // (break)
}

/* ===== 0x08004368 ===== */
int sym.swap_write_page_direct (int esi, int edx) {
    loc_0x8004368:
        // CALL XREF from sym.do_write_physical_memory @ 0x8004328
        hint 0x19
        [sp, -0x50]! = (x29,2)
        [sp, 0x10] = (x26,2)
        [sp, 0x20] = (x24,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x3 + x2  // arg4
        w24 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (x8 == 1)
        b.hi 0x8004514 // unlikely
            
    loc_0x8004514:
        // CODE XREF from sym.swap_write_page_direct @ 0x800454c
        w0 = w24      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08004530
         // } else {
    loc_0x8004394:
        x8 = 0x8004000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x8004514 // unlikely
        }
        return eax;
    loc_0x80043a0:
        x9 = x0 >> 0x3a // arg1
        if (w9 == 0x1b)
        b.hi 0x8004510 // unlikely
            
    loc_0x8004510:
        w24 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
    loc_0x080043ac: // orphan
             x26 = [x8 + x9,lsl 3]    // 0xd0000000cf // 893353197775
             if !x26 jmp 0x8004510    // likely

    loc_0x080043b4: // orphan
         x8 = [x26 + 0x140]       // 0xe1 // 225
         if !x8 jmp 0x8004510     // unlikely

    loc_0x080043bc: // orphan
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = x3                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         x22 = x2                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         x20 = x1                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
         ubfiz x25,x0,3, 0x3a     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w0 = 0xc00
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg4
         0x80043e0 ()             // 0x80043e0(0xc00, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if x22 jmp 0x80044b0     // unlikely

    loc_0x080043ec: // orphan
         if (x21 == 1)
         b.ne 0x80044b0           // likely

    loc_0x080043f4: // orphan
         if !x19 jmp 0x8004510    // likely

    loc_0x080043f8: // orphan
         mrs x21,sp_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = [x21 + 0x10]        // 0xdc // 220
         w8 = w8 + 1
         [x21 + 0x10] = w8
         w8 = [x21 + 0xb54]       // 0xdc // 220
         w8 = w8 + 1
         [x21 + 0xb54] = w8
         x8 = 0xff00
         jmp 0x8004424

    loc_0x08004424: // orphan
         // CODE XREF from sym.swap_write_page_direct @ 0x8004418
         x9 = x19 << 6
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x1000
         x9 = x9 & 0xfffffffffff000
         x0 = x8 | x9             // int64_t arg1
         0x8004438 ()             // 0x8004438(0x0, 0x0, 0x1000, 0x0)
         w8 = [x21 + 0xb54]       // 0xdc // 220
         w8 = w8 - 1
         [x21 + 0xb54] = w8
         x8 = [x21 + 0x10]        // 0xdc // 220
         x8 = x8 - 1
         [x21 + 0x10] = w8
         b.eq 0x8004570           // unlikely

    loc_0x08004458: // orphan
         x8 = [x21 + 0x10]        // 0xdc // 220
         if !x8 jmp 0x8004570     // likely

    loc_0x08004460: // orphan
         // CODE XREFS from sym.swap_write_page_direct @ 0x800456c, 0x8004574
         x0 = [x26 + 0x140]       // 0xe1 // 225 // int64_t arg1
         x4 = 0x8004000
         x4 = x4 + 0
         w1 = 0x1
         w2 = 0x801
         w3 = 0xc00
         0x8004478 ()             // 0x8004478(-1, 0x1, 0x801, 0xc00)
         if !x0 jmp 0x8004508     // unlikely

    loc_0x08004480: // orphan
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x1000
         w3 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x20] = x25
         0x8004494 ()             // 0x8004494(0x0, 0x0, 0x1000, 0x0)
         if !w0 jmp 0x8004534     // likely

    loc_0x0800449c: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80044a0 ()             // 0x80044a0(0x0, 0x0, 0x0, 0x0)
         if (w0 == 0)
         cset w24,eq
         jmp 0x8004538

    loc_0x080044b0: // orphan
         if !x19 jmp 0x8004510    // likely

    loc_0x080044b4: // orphan
         x0 = [x26 + 0x140]       // 0xe1 // 225 // int64_t arg1
         x4 = 0x8004000
         x4 = x4 + 0
         w1 = 0x1
         w2 = 0x800
         w3 = 0xc00
         0x80044cc ()             // 0x80044cc(-1, 0x1, 0x800, 0xc00)
         if !x0 jmp 0x8004508     // unlikely

    loc_0x080044d4: // orphan
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = 0x1000
         w3 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x20] = x25
         0x80044e8 ()             // 0x80044e8(0x0, 0x0, 0x1000, 0x0)
         if !w0 jmp 0x8004534     // likely

    loc_0x080044f0: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80044f4 ()             // 0x80044f4(0x0, 0x0, 0x0, 0x0)
         w24 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004500 ()             // 0x8004500(0x0, 0x0, 0x0, 0x0)
         if !w24 jmp 0x8004550    // likely

    loc_0x08004508: // orphan
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8004540

    loc_0x08004534: // orphan
         w24 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004538: // orphan
         // CODE XREF from sym.swap_write_page_direct @ 0x80044ac
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800453c ()             // 0x800453c(0x0, 0x0, 0x0, 0x0)

    loc_0x08004540: // orphan
         // CODE XREF from sym.swap_write_page_direct @ 0x800450c
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8004548 ()             // 0x8004548(0x0, 0x0, 0x0, 0x0)
         jmp 0x8004514

    loc_0x08004550: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.kmap_atomic ()       // sym.kmap_atomic(0x0)
         x0 = x0 + x22            // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x8004564 ()             // 0x8004564(0x0, 0x0, 0x0, 0x0)
         sym.__kunmap_atomic ()
         jmp 0x8004460

    loc_0x08004570: // orphan
         0x8004570 ()             // 0x8004570(0x0, 0x0, 0x0, 0x0)
         jmp 0x8004460

}

/* ===== 0x08004ba0 ===== */
int sym.resolve_hide_symbols (int esi, int edx) {
    loc_0x8004ba0:
        // CALL XREF from sym.do_hide_path @ 0x800487c
        // CALL XREF from sym.paradise_hide_cleanup @ 0x8005058
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [sp, 0x10] = (x22,2)
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8004000
        x8 = [x19]    // 0xda // 218
        if x8 jmp 0x8004bd0 // likely
            
    loc_0x8004bd0:
        x20 = 0x8004000
        x8 = [x20]    // 0xdb // 219
        if x8 jmp 0x8004bec // likely
            
    loc_0x8004bec:
        x21 = 0x8004000
        x0 = [x21]    // 0xdc // 220
        if x0 jmp 0x8004c08 // likely
            
    loc_0x8004c08:
        x22 = 0x8004000
        x8 = [x22]    // 0xdd // 221
        if !x8 jmp 0x8004c24 // unlikely
            
    loc_0x8004c24:
        x0 = 0x8004000
        x0 = x0 + 0
        0x8004c2c ()  // 0x8004c2c(0x8004000, 0x0, 0x0, 0x0)
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = [x21]    // 0xdc // 220
        if (x8 == 0)
        [x22] = x8
        cset w8,ne    // u"@\b"
        x9 = [x19]    // 0xda // 218
        if !x9 jmp 0x8004c74 // unlikely
            
    loc_0x8004c74:
        // CODE XREF from sym.resolve_hide_symbols @ 0x8004c20
        x0 = 0x8004000
        x0 = x0 + 0
        0x8004c7c ()  // " " // 0x8004c7c(0x8004000, 0x0, 0x0, 0x0)
        w0 = ~0x1
        jmp 0x8004c60
         // do {
    loc_0x8004c60:
        // CODE XREF from sym.resolve_hide_symbols @ 0x8004c84
        (x20, 2) = 3
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08004c70
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08004c20: // orphan
             jmp 0x8004c74

    loc_0x08004c54: // orphan
         if !x0 jmp 0x8004c74     // likely

    loc_0x08004c58: // orphan
         tbz w8,0,0x8004c74       // likely

    loc_0x08004c5c: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

}

/* ===== 0x08004c88 ===== */
int sym.hide_umount_path (int esi, int edx) {
    loc_0x8004c88:
        // CALL XREFS from sym.do_hide_path @ 0x8004aac, 0x8004b14, 0x8004b40
        hint 0x19
        sp = sp - 0x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x2 = var_8h
        w1 = 0x1      // u"@\b"
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        x8 = 0x8004000
        x8 = [x8]     // 0xcf // 207
        [sp, 8] = (xzr,2)
        ldur w16,[x8,-4] // 0xcf // 207
        w17 = 0x6c68  // 'hl'
        w17 = 0xf65a  // 'Z\xf6'
        if (w16 == w17) // u"@\b"
        b.eq 0x8004cd0 // unlikely
            
    loc_0x8004cd0:
        blr x8        // xzr(0x0, 0x0, 0x0, 0x0)
        if w0 jmp 0x8004d30 // unlikely
            
    loc_0x8004d30:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9) // u"@\b" // u"@\b"
        b.ne 0x8004d54 // likely
            
    loc_0x8004d54:
        0x8004d54 ()  // sym.list_add // 0x8004d54(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x8004d58:
        // CALL XREF from sym.do_hide_path @ 0x8004b5c
        x8 = 0x8004000
        x9 = 0x8004000
        x9 = x9 + 0
        x2 = [x8]     // 0xcf // 207
        x10 = [x2 + 8] // 0xc9 // 201
        if (x2 == x0) // arg1 // u"@\b"
        ccmp x0,x9,4, ne // arg1 // u"@\b"
        ccmp x10,x9,0, ne // u"@\b" // u"@\b"
        b.ne 0x8004d8c // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08004cfc: // orphan
             brk 0x8228

    loc_0x08004d00: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8004d30     // likely

    loc_0x08004d08: // orphan
         x8 = 0x8004000
         x0 = var_8h
         x8 = [x8]                // 0xcf // 207
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x3d37             // '7='
         w17 = 0x59dc             // '\xdcY'
         if (w16 == w17)          // u"@\b" // u"@\b"
         b.eq 0x8004d2c           // unlikely

    loc_0x08004d28: // orphan
         brk 0x8228

    loc_0x08004d2c: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x08004db0 ===== */
int sym.list_del (int esi, int edx) {
    loc_0x8004db0:
        // CALL XREF from sym.do_hide_path @ 0x8004b24
        x8 = [x0 + 8] // 0xc7 // 199 // arg1 // sym..text
        x9 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x10 = [x8]    // 0xcf // 207 // sym..text
        if (x10 == x0) // arg1 // u"@\b" // u"@\b"
        b.ne 0x8004df4 // unlikely
            
    loc_0x8004df4:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x9       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8004e04 ()  // 0x8004e04(0x0, 0x0, 0x0, 0x0)
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        jmp 0x8004ddc
         // do {
    loc_0x8004ddc:
        // CODE XREF from sym.list_del @ 0x8004e10
        x8 = 0x100
        w10 = 0x22    // '\"'
        x8 = 0xdead   // '\xad\xde'
        x10 = x8 | x10
        [x9] = (x8,2)
        0x08004df0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8004dc4
    loc_0x8004dd4:
        [x10 + 8] = x8
        [x8] = x10
}

/* ===== 0x08004d58 ===== */
int sym.list_add (int esi, int edx) {
    loc_0x8004d58:
        // CALL XREF from sym.do_hide_path @ 0x8004b5c
        x8 = 0x8004000
        x9 = 0x8004000
        x9 = x9 + 0
        x2 = [x8]     // 0xcf // 207
        x10 = [x2 + 8] // 0xc9 // 201
        if (x2 == x0) // arg1
        ccmp x0,x9,4, ne // arg1
        ccmp x10,x9,0, ne
        b.ne 0x8004d8c // likely
            
    loc_0x8004d8c:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = 0x8004000
        x1 = x1 + 0
        0x8004da0 ()  // 0x8004da0(0x0, 0x8004000, 0x0, 0x0)
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x08004dac
         // } else {
    loc_0x8004d7c:
        [x2 + 8] = x0 // arg1
        [x0] = (x2,2) // arg1
        [x8] = x0     // arg1
        0x08004d88
        }
        return eax;
}

/* ===== 0x08005f6c ===== */
int sym._copy_from_user_1 (int esi, int edx) {
    loc_0x8005f6c:
        // CALL XREF from sym.do_get_main_thread_elf0 @ 0x8005c40
        // CALL XREF from sym.do_get_thread_tpidr_el0 @ 0x8005cec
        // CALL XREF from sym.do_get_thread_pacga_key @ 0x8005d9c
        // CALL XREF from sym.do_get_thread_pacia_key @ 0x8005e5c
        // CALL XREF from sym.do_bind_thread_pacga_key @ 0x8005f10
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        tbnz w9,5,0x8005fa0 // likely
            
    loc_0x8005fa0:
        x9 = x1 << 8  // arg2
        x9 = x1 & x9,asr 8 // arg2
         // do {
    loc_0x8005fa8:
        x10 = 0x80    // '\x80'
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = x10 - x19
        if (x10 == x9)
        b.lo 0x800602c // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08005fbc: // orphan
             jmp 0x8006060

    loc_0x08005fc4: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x800606c
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005fec: // orphan
         x1 = x1 & 0xff7fffffffffffff // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x8005ff8 ()             // 0x8005ff8(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // XREFS(158)
         jmp 0x8006070

    loc_0x08006008: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x800607c
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800602c: // orphan
         if x21 jmp 0x8006048     // unlikely

    loc_0x08006030: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x800605c
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08006048: // orphan
         x8 = x19 - x21
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = x20 + x8            // int64_t arg1
         0x8006058 ()             // 0x8006058(0x0, 0x0, 0x0, 0x0)
         jmp 0x8006030

    loc_0x08006060: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x8005fbc
         x9 = 0x8006000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x8005fec   // unlikely

    loc_0x0800606c: // orphan
         jmp 0x8005fc4

    loc_0x08006070: // orphan
         // CODE XREF from sym._copy_from_user_1 @ 0x8006000
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x800602c   // unlikely

    loc_0x0800607c: // orphan
         jmp 0x8006008

}

/* ===== 0x08006080 ===== */
int sym._copy_to_user_1 (int esi, int edx) {
    loc_0x8006080:
        // CALL XREF from sym.do_get_main_thread_elf0 @ 0x8005c70
        // CALL XREF from sym.do_get_thread_tpidr_el0 @ 0x8005d1c
        // CALL XREF from sym.do_get_thread_pacga_key @ 0x8005e00
        // CALL XREF from sym.do_get_thread_pacia_key @ 0x8005ec0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w9,5,0x8006098 // likely
            
    loc_0x8006098:
        x9 = x0 << 8  // arg1
        x9 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x80060a0:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = 0x80    // '\x80'
        x10 = x10 - x2 // arg3
        if (x10 == x9)
        b.lo 0x8006124 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080060bc: // orphan
             jmp 0x8006134

    loc_0x080060c4: // orphan
         // CODE XREF from sym._copy_to_user_1 @ 0x8006140
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080060ec: // orphan
         x0 = x0 & 0xff7fffffffffffff // int64_t arg1
         0x80060f0 ()             // 0x80060f0(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8006144

    loc_0x08006100: // orphan
         // CODE XREF from sym._copy_to_user_1 @ 0x8006150
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006124: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08006134: // orphan
         // CODE XREF from sym._copy_to_user_1 @ 0x80060bc
         x9 = 0x8006000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x80060ec   // unlikely

    loc_0x08006140: // orphan
         jmp 0x80060c4

    loc_0x08006144: // orphan
         // CODE XREF from sym._copy_to_user_1 @ 0x80060f8
         x8 = 0x8006000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x8006124   // unlikely

    loc_0x08006150: // orphan
         jmp 0x8006100

}

/* ===== 0x08006584 ===== */
int sym.filldir64_hook_work (int esi, int edx) {
    loc_0x8006584:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x20] = (x29,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        x8 = 0x8006000
        (x20, 2) = 3  // arg1
        w9 = [x0 + 0x28] // 0xc7 // 199 // arg1
        w10 = [x8]    // 0xcf // 207
        if w10 jmp 0x8006614 // likely
            
    loc_0x8006614:
        w10 = w22 - 0x10
        if (w10 != 0xf)
        b.lo 0x8006810 // unlikely
            
    loc_0x8006810:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        jmp 0x8006820
         // do {
    loc_0x8006820:
        // CODE XREF from sym.filldir64_hook_work @ 0x8006814
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800684c // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80065c0
    loc_0x80065cc:
        x10 = 0x8006000
        w10 = [x10]   // 0xd1 // 209
        if w10 jmp 0x8006614 // likely
    loc_0x80065d8:
        x10 = 0x8006000
        w10 = [x10]   // 0xd1 // 209
        if w10 jmp 0x8006614 // likely
    loc_0x80065e4:
        x10 = 0x8006000
        w10 = [x10]   // 0xd1 // 209
        if w10 jmp 0x8006614 // likely
    loc_0x80065f0:
        x10 = 0x8006000
        // CODE XREF from sym.get_target_task @ +0x4c
        w10 = [x10]   // 0xd1 // 209
        if w10 jmp 0x8006614 // likely
    loc_0x80065fc:
        x10 = 0x8006000
        w10 = [x10]   // 0xd1 // 209
        if w10 jmp 0x8006614 // likely
    loc_0x8006608:
        x10 = 0x8006000
        w10 = [x10]   // 0xd1 // 209
        if !w10 jmp 0x8006810 // unlikely
        }
        return eax;
    loc_0x08006624: // orphan
             if (x9 == 4)
             b.ne 0x8006810           // likely

    loc_0x0800662c: // orphan
         [sp, 8] = (xzr,2)
         x21 = w22                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = [x8]                // 0xcf // 207
         if !w3 jmp 0x800666c     // likely

    loc_0x0800663c: // orphan
         x2 = 0x8006000
         x2 = x2 + 0
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x800664c ()             // 0x800664c(0x178008, 0x10, 0x8006000, 0x0)
         if (w0 == w22)
         b.ne 0x800666c           // likely

    loc_0x08006658: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006664 ()             // 0x8006664(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x8006818     // likely

    loc_0x0800666c: // orphan
         x8 = 0x8006000
         w3 = [x8]                // 0xcf // 207
         if !w3 jmp 0x80066a8     // unlikely

    loc_0x08006678: // orphan
         x2 = 0x8006000
         x2 = x2 + 0
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x8006688 ()             // 0x8006688(0x178008, 0x10, 0x8006000, 0x0)
         if (w0 == w22)
         b.ne 0x80066a8           // likely

    loc_0x08006694: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80066a0 ()             // 0x80066a0(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x8006818     // likely

    loc_0x080066a8: // orphan
         x8 = 0x8006000
         w3 = [x8]                // 0xcf // 207
         if !w3 jmp 0x80066e4     // unlikely

    loc_0x080066b4: // orphan
         x2 = 0x8006000
         x2 = x2 + 0
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x80066c4 ()             // 0x80066c4(0x178008, 0x10, 0x8006000, 0x0)
         if (w0 == w22)
         b.ne 0x80066e4           // likely

    loc_0x080066d0: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80066dc ()             // 0x80066dc(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x8006818     // likely

    loc_0x080066e4: // orphan
         x8 = 0x8006000
         w3 = [x8]                // 0xcf // 207
         if !w3 jmp 0x8006720     // unlikely

    loc_0x080066f0: // orphan
         x2 = 0x8006000
         x2 = x2 + 0
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x8006700 ()             // 0x8006700(0x178008, 0x10, 0x8006000, 0x0)
         if (w0 == w22)
         b.ne 0x8006720           // likely

    loc_0x0800670c: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006718 ()             // 0x8006718(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x8006818     // likely

    loc_0x08006720: // orphan
         x8 = 0x8006000
         w3 = [x8]                // 0xcf // 207
         if !w3 jmp 0x800675c     // unlikely

    loc_0x0800672c: // orphan
         x2 = 0x8006000
         x2 = x2 + 0
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x800673c ()             // 0x800673c(0x178008, 0x10, 0x8006000, 0x0)
         if (w0 == w22)
         b.ne 0x800675c           // likely

    loc_0x08006748: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006754 ()             // 0x8006754(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x8006818     // likely

    loc_0x0800675c: // orphan
         x8 = 0x8006000
         w3 = [x8]                // 0xcf // 207
         if !w3 jmp 0x8006798     // unlikely

    loc_0x08006768: // orphan
         x2 = 0x8006000
         x2 = x2 + 0
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x8006778 ()             // 0x8006778(0x178008, 0x10, 0x8006000, 0x0)
         if (w0 == w22)
         b.ne 0x8006798           // likely

    loc_0x08006784: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006790 ()             // 0x8006790(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x8006818     // likely

    loc_0x08006798: // orphan
         x8 = 0x8006000
         w3 = [x8]                // 0xcf // 207
         if !w3 jmp 0x80067d4     // unlikely

    loc_0x080067a4: // orphan
         x2 = 0x8006000
         x2 = x2 + 0
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x80067b4 ()             // 0x80067b4(0x178008, 0x10, 0x8006000, 0x0)
         if (w0 == w22)
         b.ne 0x80067d4           // likely

    loc_0x080067c0: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80067cc ()             // 0x80067cc(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x8006818     // likely

    loc_0x080067d4: // orphan
         x8 = 0x8006000
         w3 = [x8]                // 0xcf // 207
         if !w3 jmp 0x8006810     // unlikely

    loc_0x080067e0: // orphan
         x2 = 0x8006000
         x2 = x2 + 0
         x0 = var_sp_8h           // int64_t arg1
         w1 = 0x10
         0x80067f0 ()             // 0x80067f0(0x178008, 0x10, 0x8006000, 0x0)
         if (w0 == w22)
         b.ne 0x8006810           // likely

    loc_0x080067fc: // orphan
         x1 = var_sp_8h           // int64_t arg_50h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8006808 ()             // "`" // 0x8006808(0x0, 0x178008, 0x0, 0x0)
         if !w0 jmp 0x8006818     // likely

    loc_0x08006818: // orphan
         w0 = 0x1
         [x19] = x0

    loc_0x08006834: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x29, 2) = 3
         sp = arg_50h
         hint 0x1d
         

    loc_0x0800684c: // orphan
         0x800684c ()             // 0x800684c(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08006bc0 ===== */
int sym.kgsl_process_init_hook_work (int esi, int edx) {
    loc_0x8006bc0:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        sym.should_hide () // sym.should_hide(0x0)
        tbz w0,0,0x8006bf4 // likely
            
    loc_0x8006bf4:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8006bf8:
        // CODE XREF from sym.kgsl_process_init_hook_work @ 0x8006bf0
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08006c04
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08006d6c ===== */
int sym.should_hide (int esi, int edx) {
    loc_0x8006d6c:
        // CALL XREF from sym.kgsl_process_init_hook_work @ 0x8006bd4
        // CALL XREF from sym.sysfs_create_group_hook_work @ 0x8006d30
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if !w8 jmp 0x8006d90 // unlikely
            
    loc_0x8006d90:
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if !w8 jmp 0x8006db4 // unlikely
            
    loc_0x8006db4:
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if !w8 jmp 0x8006dd8 // unlikely
            
    loc_0x8006dd8:
        x8 = 0x8006000
        // CODE XREF from sym.hide_module @ +0x68
        w8 = [x8]     // 0xcf // 207
        if !w8 jmp 0x8006dfc // unlikely
            
    loc_0x8006dfc:
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if !w8 jmp 0x8006e20 // unlikely
            
    loc_0x8006e20:
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if !w8 jmp 0x8006e44 // unlikely
            
    loc_0x8006e44:
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if !w8 jmp 0x8006e68 // unlikely
            
    loc_0x8006e68:
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if !w8 jmp 0x8006e8c // unlikely
            
    loc_0x8006e8c:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x08006e90
         // } else {
    loc_0x8006e74:
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = [x9 + 0x61c] // 0xd0 // 208
        if (w9 == w8)
        b.ne 0x8006e8c // likely
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x8006d78
    loc_0x8006d88:
        w0 = 0x1
        0x08006d8c
         // (break)
    loc_0x08006dac: // orphan
             w0 = 0x1
             

    loc_0x08006dd0: // orphan
         w0 = 0x1
         

    loc_0x08006df4: // orphan
         w0 = 0x1
         

    loc_0x08006e18: // orphan
         w0 = 0x1
         

    loc_0x08006e3c: // orphan
         w0 = 0x1
         

    loc_0x08006e60: // orphan
         w0 = 0x1
         

    loc_0x08006e84: // orphan
         w0 = 0x1
         

}

/* ===== 0x08006c0c ===== */
int sym.sysfs_create_group_hook_work (int esi, int edx) {
    loc_0x8006c0c:
        x8 = [x0]     // 0xc7 // 199 // arg1
        if !x8 jmp 0x8006d64 // unlikely
            
    loc_0x8006d64:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x08006d68
         // } else {
    loc_0x8006c14:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = [x8]     // 0xcf // 207
        if !x9 jmp 0x8006d50 // unlikely
        }
        return eax;
    loc_0x8006c2c:
        x20 = [x8 + 0x18] // 0xcf // 207
        if !x20 jmp 0x8006d50 // unlikely
            
    loc_0x8006d50:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x8006d54:
        // CODE XREF from sym.sysfs_create_group_hook_work @ 0x8006d4c
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08006d60
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8006c34
    loc_0x8006c40:
        x1 = 0x8006000
        x1 = x1 + 0
        0x8006c48 ()  // 0x8006c48(0x0, 0x8006000, 0x0, 0x0)
        if x0 jmp 0x8006d30 // unlikely
            
    loc_0x8006d30:
        sym.should_hide () // sym.should_hide(0x0)
        tbz w0,0,0x8006d50 // likely
    loc_0x8006d38:
        x9 = [x19 + 0xf0] // 0xda // 218
        x8 = ~0xb
        w0 = 0x1
        [x19] = x8
        [x19 + 0x100] = x9
        jmp 0x8006d54
    loc_0x08006c50: // orphan
             x20 = [x20 + 0x18]       // 0xdb // 219
             if !x20 jmp 0x8006d50    // unlikely

    loc_0x08006c58: // orphan
         x0 = [x20]               // 0xdb // 219
         if !x0 jmp 0x8006c70     // unlikely

    loc_0x08006c60: // orphan
         x1 = 0x8006000
         x1 = x1 + 0
         0x8006c68 ()             // 0x8006c68(0x0, 0x8006000, 0x0, 0x0)
         if x0 jmp 0x8006d30      // unlikely

    loc_0x08006c70: // orphan
         x20 = [x20 + 0x18]       // 0xdb // 219
         if !x20 jmp 0x8006d50    // unlikely

    loc_0x08006c78: // orphan
         x0 = [x20]               // 0xdb // 219
         if !x0 jmp 0x8006c90     // unlikely

    loc_0x08006c80: // orphan
         x1 = 0x8006000
         x1 = x1 + 0
         0x8006c88 ()             // 0x8006c88(0x0, 0x8006000, 0x0, 0x0)
         if x0 jmp 0x8006d30      // unlikely

    loc_0x08006c90: // orphan
         x20 = [x20 + 0x18]       // 0xdb // 219
         if !x20 jmp 0x8006d50    // unlikely

    loc_0x08006c98: // orphan
         x0 = [x20]               // 0xdb // 219
         if !x0 jmp 0x8006cb0     // unlikely

    loc_0x08006ca0: // orphan
         x1 = 0x8006000
         x1 = x1 + 0
         0x8006ca8 ()             // 0x8006ca8(0x0, 0x8006000, 0x0, 0x0)
         if x0 jmp 0x8006d30      // unlikely

    loc_0x08006cb0: // orphan
         x20 = [x20 + 0x18]       // 0xdb // 219
         if !x20 jmp 0x8006d50    // unlikely

    loc_0x08006cb8: // orphan
         x0 = [x20]               // 0xdb // 219
         if !x0 jmp 0x8006cd0     // unlikely

    loc_0x08006cc0: // orphan
         x1 = 0x8006000
         x1 = x1 + 0
         0x8006cc8 ()             // 0x8006cc8(0x0, 0x8006000, 0x0, 0x0)
         if x0 jmp 0x8006d30      // unlikely

    loc_0x08006cd0: // orphan
         x20 = [x20 + 0x18]       // 0xdb // 219
         if !x20 jmp 0x8006d50    // unlikely

    loc_0x08006cd8: // orphan
         x0 = [x20]               // 0xdb // 219
         if !x0 jmp 0x8006cf0     // unlikely

    loc_0x08006ce0: // orphan
         x1 = 0x8006000
         x1 = x1 + 0
         0x8006ce8 ()             // 0x8006ce8(0x0, 0x8006000, 0x0, 0x0)
         if x0 jmp 0x8006d30      // unlikely

    loc_0x08006cf0: // orphan
         x20 = [x20 + 0x18]       // 0xdb // 219
         if !x20 jmp 0x8006d50    // unlikely

    loc_0x08006cf8: // orphan
         x0 = [x20]               // 0xdb // 219
         if !x0 jmp 0x8006d10     // unlikely

    loc_0x08006d00: // orphan
         x1 = 0x8006000
         x1 = x1 + 0
         0x8006d08 ()             // 0x8006d08(0x0, 0x8006000, 0x0, 0x0)
         if x0 jmp 0x8006d30      // unlikely

    loc_0x08006d10: // orphan
         x8 = [x20 + 0x18]        // 0xdb // 219
         if !x8 jmp 0x8006d50     // unlikely

    loc_0x08006d18: // orphan
         x0 = [x8]                // 0xcf // 207
         if !x0 jmp 0x8006d54     // unlikely

    loc_0x08006d20: // orphan
         x1 = 0x8006000
         x1 = x1 + 0
         0x8006d28 ()             // 0x8006d28(0x0, 0x8006000, 0x0, 0x0)
         if !x0 jmp 0x8006d54     // likely

}

/* ===== 0x08007540 ===== */
int sym.gyro_unhook_all_locked (int esi, int edx) {
    loc_0x8007540:
        // CALL XREF from sym.paradise_gyro_exit @ 0x8006edc
        // CALL XREFS from sym.do_config_gyro_hook @ 0x80070dc, 0x8007224
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8007000
        x20 = 0x8007000
        x20 = x20 + 0
        w10 = [x19]   // 0xda // 218
        if (w10 == 1)
        b.lt 0x80075c0 // likely
            
    loc_0x80075c0:
        0x80075c0 ()  // 0x80075c0(0x0, 0x0, 0x0, 0x0)
        w8 = [x19]    // 0xda // 218
        if (w8 == 1)
        b.lt 0x800761c // likely
            
    loc_0x800761c:
        x8 = 0x8007000
        [x19] = wzr
        [x8] = (byte) wzr
        (x20, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800763c
         // } else {
    loc_0x80075d0:
        x21 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x22 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x80075f0
         // } else {
        }
        return eax;
    loc_0x0800758c: // orphan
             // CODE XREF from sym.gyro_unhook_all_locked @ 0x80075bc
             x8 = x8 + 0x10
             if (x10 == x8)
             b.eq 0x80075c0           // unlikely

    loc_0x08007598: // orphan
         // CODE XREF from sym.gyro_unhook_all_locked @ 0x8007588
         if (x8 == 4)
         b.eq 0x8007640           // unlikely

    loc_0x080075a0: // orphan
         b.eq 0x8007644           // unlikely

    loc_0x080075a4: // orphan
         x12 = [x20 + x8]         // 0xcf000000db // 889058230491
         if !x12 jmp 0x800758c    // unlikely

    loc_0x080075ac: // orphan
         x13 = [x12 + 0x20]       // 0xd3 // 211
         if (x13 == x11)
         b.ne 0x800758c           // unlikely

    loc_0x080075b8: // orphan
         [x12 + 0x20] = x9
         jmp 0x800758c

    loc_0x080075dc: // orphan
         // CODE XREF from sym.gyro_unhook_all_locked @ 0x8007618
         x22 = x22 + 1
         x21 = x21 + 0x10
         [x23] = (xzr,2)
         if (x22 == w8)
         b.ge 0x800761c           // likely

    loc_0x080075f0: // orphan
         // CODE XREF from sym.gyro_unhook_all_locked @ 0x80075d8
         if (x21 == 4)
         b.eq 0x8007640           // unlikely

    loc_0x080075f8: // orphan
         x9 = x21 + 8
         if (x9 == 4)
         b.hi 0x8007644           // unlikely

    loc_0x08007604: // orphan
         x23 = x20 + x21
         x0 = [x23 + 8]           // 0xde // 222
         if !x0 jmp 0x80075dc     // likely

    loc_0x08007610: // orphan
         0x8007610 ()             // 0x8007610(0x0, 0x0, 0x0, 0x0)
         w8 = [x19]               // 0xda // 218
         jmp 0x80075dc

    loc_0x08007640: // orphan
         brk 0x5512

    loc_0x08007644: // orphan
         brk 0x1

}

/* ===== 0x0800764c ===== */
int sym.gyro_sendmsg (int esi, int edx) {
    loc_0x800764c:
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x270
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x21 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8 + 0x620] // 0xcf // 207
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = var_c0h  // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x1a0
        [x29 = x8
        0x8007694 ()  // 0x8007694(0x177df0, 0x0, 0x1a0, 0x0)
        x8 = 0x8007000
        w8 = (byte) [x8] // 0xcf // 207
        if !w8 jmp 0x8007bfc // likely
            
    loc_0x8007bfc:
        // CODE XREF from sym.gyro_sendmsg @ 0x8007714
        x8 = 0x8007000
        x8 = [x8]     // 0xcf // 207
         // do {
    loc_0x8007c04:
        // CODE XREF from sym.gyro_sendmsg @ 0x8007740
        x8 = [x8 + 0x88] // 0xcf // 207
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x2 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80076a4
    loc_0x80076a8:
        if (x19 == 0x200)
        b.hi 0x8007734 // unlikely
            
    loc_0x8007734:
        x8 = 0x8007000
        x8 = [x8]     // 0xcf // 207
        [x20 + 0x20] = x8
        jmp 0x8007c04
    loc_0x080076b0: // orphan
             x8 = 0x4ec5              // '\xc5N'
             w9 = 0x68                // 'h'
             x8 = 0xc4ec              // '\xec\xc4'
             x8 = 0xec4e              // 'N\xec'
             x8 = 0x4ec4              // '\xc4N'
             umulh x8,x19,x8
             x8 = x8 >> 5
             msub x8,x8,x9, x19
             if x8 jmp 0x8007734      // unlikely

    loc_0x080076d4: // orphan
         x23 = x21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = (byte) [x23 + 0x10]! // 0xde // 222
         if !w8 jmp 0x80076e8     // likely

    loc_0x080076e0: // orphan
         if (w8 == 5)
         b.ne 0x8007bfc           // likely

    loc_0x080076e8: // orphan
         x8 = [x21 + 0x28]        // 0xdc // 220
         if (x8 == x19)
         b.lo 0x8007bfc           // unlikely

    loc_0x080076f4: // orphan
         if (x19 == 0x208)
         b.lo 0x8007744           // likely

    loc_0x080076fc: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = 0xcc0               // '\xc0\f'
         0x8007704 ()             // 0x8007704(0x0, 0xcc0, 0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = x19                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if x0 jmp 0x800774c      // unlikely

    loc_0x08007714: // orphan
         jmp 0x8007bfc

    loc_0x08007718: // orphan
         x8 = 0x8007000
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         x2 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x88]         // 0xcf // 207
         jmp 0x8007c14

    loc_0x08007744: // orphan
         x22 = var_c0h
         w24 = 0x1a0

    loc_0x0800774c: // orphan
         (x8, 2) = 3
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x10 = [x23 + 0x20]       // 0xde // 222
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0xa8] = (x8,2)
         (x9, 2) = 3
         [var_0h] = x10
         [sp, 0x98] = (x9,2)
         0x8007770 ()             // 0x8007770(0x0, 0x0, 0x0, 0x0)
         x2 = var_98h             // int64_t arg3
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         0x8007780 ()             // 0x8007780(0x0, 0x0, 0x178098, 0x0)
         if (x0 == x19)
         b.ne 0x8007cf8           // unlikely

    loc_0x0800778c: // orphan
         if (w19 == 0x67)
         b.hi 0x80077ac           // unlikely

    loc_0x08007794: // orphan
         x8 = 0x8007000
         x8 = x8 + 0
         wzr = [x8]               // 0xcf // 207
         wzr = [x8 + 4]           // 0xcf // 207
         wzr = [x8 + 8]           // 0xcf // 207
         jmp 0x8007bec

    loc_0x080077ac: // orphan
         w9 = 0xec4f              // 'O\xec'
         x10 = x19 & 0xffffffff
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x4ec4              // '\xc4N'
         umull x9,w10,w9
         w10 = 0x68               // 'h'
         x2 = x9 >> 0x25
         if (x2 == 1)
         csinc x9,x2,xzr, hi
         umull x9,w9,w10
         x10 = x24                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080077d8: // orphan
         tbnz x8,0x3f,0x8007d0c   // unlikely

    loc_0x080077dc: // orphan
         if (x24 == x8)
         b.lo 0x8007d0c           // unlikely

    loc_0x080077e4: // orphan
         if (x10 == 4)
         b.lo 0x8007d0c           // likely

    loc_0x080077ec: // orphan
         w11 = [x22 + x8]         // 0xcf000000dd // 889058230493
         if (w11 == 0x68)
         b.ne 0x8007be0           // likely

    loc_0x080077f8: // orphan
         x8 = x8 + 0x68
         x10 = x10 - 0x68
         if (x9 == x8)
         b.ne 0x80077d8           // likely

    loc_0x08007808: // orphan
         x9 = 0x8007000
         x9 = x9 + 0
         if (w19 == 0x68)
         w8 = [x9]                // 0xd0 // 208
         w13 = [x9 + 4]           // 0xd0 // 208
         w9 = [x9 + 8]            // 0xd0 // 208
         b.lo 0x8007bec           // likely

    loc_0x08007824: // orphan
         w10 = w8 & 2
         w11 = w8 & 1
         w8 = w13 & 0x7fffffff
         [var_1ch] = w8
         ubfx w8,w13,0x17, 8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w16 = 0x80               // '\x80'
         w17 = 0x80               // '\x80'
         if (x2 == 1)
         w0 = w13 >> 0x1f
         [var_14h] = w8
         w8 = w9 & 0x7fffffff
         bfxil w16,w13,0, 0x17    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_18h] = w8
         w8 = w9 >> 0x1f
         bfxil w17,w9,0, 0x17     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x15 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x4 = var_1ch_2
         [var_0h_2] = w8
         csinc x8,x2,xzr, hi
         ubfx w2,w9,0x17, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = !x8
         w5 = 0x68                // 'h'
         w14 = 0x7f80             // '\x80\x7f'

    loc_0x08007884: // orphan
         x27 = x15 * x5
         x7 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = x15 + 1
         x6 = ~0x7
         x8 = x4 + x27
         x28 = x24 - x27
         jmp 0x80078bc

    loc_0x080078a0: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x80078fc
         if w30 jmp 0x8007900     // unlikely

    loc_0x080078a4: // orphan
         x25 = x25 + 1
         x7 = x7 + 0x68
         x6 = x6 - 0x68
         x12 = x3 + x25
         if (x12 == 1)
         b.eq 0x8007c58           // likely

    loc_0x080078bc: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x800789c
         x1 = x27 + x7
         x1 = x1 + 8
         b.mi 0x8007d0c           // likely

    loc_0x080078c8: // orphan
         if (x24 == x1)
         b.lo 0x8007d0c           // unlikely

    loc_0x080078d0: // orphan
         x1 = x28 + x6
         if (x1 == 4)
         b.lo 0x8007d0c           // likely

    loc_0x080078dc: // orphan
         x1 = x8 + x7
         w30 = w11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w1,[x1,-0x14]       // 0xc8 // 200
         if (w1 == 4)
         b.eq 0x80078a0           // unlikely

    loc_0x080078f0: // orphan
         if (w1 == 0x10)
         b.ne 0x80078a4           // likely

    loc_0x080078f8: // orphan
         w30 = w10                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80078a0

    loc_0x08007900: // orphan
         x1 = x15 * x5
         x8 = x1 + x7
         x26 = x8 + 0x18
         tbnz x26,0x3f,0x8007d0c  // unlikely

    loc_0x08007910: // orphan
         if (x24 == x26)
         b.lo 0x8007d0c           // unlikely

    loc_0x08007918: // orphan
         x1 = x24 - x1
         x1 = x1 - x7
         x1 = x1 - 0x18
         if (x1 == 4)
         b.lo 0x8007d0c           // unlikely

    loc_0x0800792c: // orphan
         x27 = x8 + x4
         ldur w8,[x27,-4]         // 0xe2 // 226
         w1 &= w8
         csel w6,w13,w8, eq
         if !w1 jmp 0x8007a3c     // unlikely

    loc_0x08007940: // orphan
         w12 = [var_1ch]          // 0x4 // 4
         if !w12 jmp 0x8007a3c    // likely

    loc_0x08007948: // orphan
         ubfx w28,w8,0x17, 8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w30 = 0x80               // '\x80'
         w12 = [var_14h]          // 4
         bfxil w30,w8,0, 0x17     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = w28 - w12
         b.ls 0x8007974           // likely

    loc_0x08007960: // orphan
         if (w1 == 0x18)
         w6 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp ifgt 0x8007a3c       // unlikely

    loc_0x0800796c: // orphan
         w6 = w16 >> w1
         jmp 0x8007998

    loc_0x08007974: // orphan
         w1 = w12 - w28
         w6 = w16                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ls 0x8007998           // likely

    loc_0x08007980: // orphan
         if (w1 == 0x18)
         w6 = w13                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp ifgt 0x8007a3c       // unlikely

    loc_0x0800798c: // orphan
         w30 = w30 >> w1
         w28 = [var_14h]          // 4
         w6 = w16                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007998: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8007970
         w8 = w8 >> 0x1f
         w1 = w6                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == w0)
         b.ne 0x80079c0           // unlikely

    loc_0x080079a8: // orphan
         x30 = x1 + w30,uxtw
         tbz w30,0x18,0x80079b8   // likely

    loc_0x080079b0: // orphan
         x30 = x30 >> 1
         w28 = w28 + 1

    loc_0x080079b8: // orphan
         w8 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8007a08

    loc_0x080079c0: // orphan
         w12 = w30                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w14 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w30 == w6)
         x0 = x12 - x1
         x12 = x1 - x12
         csel w8,w14,w8, lo
         csel x30,x12,x0, lo
         w0 = w14                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_ch] = w2
         if !x30 jmp 0x8007a30    // likely

    loc_0x080079e8: // orphan
         tbnz w30,0x17,0x8007a00  // unlikely

    loc_0x080079ec: // orphan
         x1 = x30                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x30 = x30 << 1
         w28 = w28 - 1
         if !x30 jmp 0x8007a00    // likely

    loc_0x080079fc: // orphan
         tbz w1,0x16,0x80079ec    // likely

    loc_0x08007a00: // orphan
         w2 = [var_ch]            // 0x4 // 4
         w14 = 0x7f80             // '\x80\x7f'

    loc_0x08007a08: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x80079bc
         if (w28 == 0xff)
         b.lt 0x8007a18           // likely

    loc_0x08007a10: // orphan
         w6 = w14 | w8,lsl 31
         jmp 0x8007a3c

    loc_0x08007a18: // orphan
         w6 = w8 << 0x1f
         if (w28 == 1)
         b.lt 0x8007a3c           // likely

    loc_0x08007a24: // orphan
         bfi w30,w28,0x17, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w6 = w30 | w6
         jmp 0x8007a3c

    loc_0x08007a30: // orphan
         w2 = [var_ch]            // 0x4 // 4
         w6 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w14 = 0x7f80             // '\x80\x7f'

    loc_0x08007a3c: // orphan
         // CODE XREFS from sym.gyro_sendmsg @ 0x8007a14, 0x8007a2c
         tbnz x26,0x3f,0x8007d0c  // unlikely

    loc_0x08007a40: // orphan
         if (x24 == x26)
         b.lo 0x8007d0c           // unlikely

    loc_0x08007a48: // orphan
         msub x8,x15,x5, x24
         x8 = x8 - x7
         x8 = x8 - 0x18
         if (x8 == 4)
         b.lo 0x8007d0c           // unlikely

    loc_0x08007a5c: // orphan
         x8 = x15 * x5
         [x27 = w6
         x12 = x8 + x7
         x26 = x12 + 0x1c
         tbnz x26,0x3f,0x8007d0c  // unlikely

    loc_0x08007a70: // orphan
         if (x24 == x26)
         b.lo 0x8007d0c           // unlikely

    loc_0x08007a78: // orphan
         x12 = x24 - x8
         x12 = x12 - x7
         x12 = x12 - 0x1c
         if (x12 == 4)
         b.lo 0x8007d0c           // unlikely

    loc_0x08007a8c: // orphan
         x27 = x4 + x8
         w6 = [x27 + x7]          // 0xce000000e2 // 884763263202
         w12 &= w6
         csel w8,w9,w6, eq
         if !w12 jmp 0x8007ba8    // likely

    loc_0x08007aa0: // orphan
         w12 = [var_18h]          // 0x4 // 4
         if !w12 jmp 0x8007ba8    // likely

    loc_0x08007aa8: // orphan
         ubfx w28,w6,0x17, 8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w30 = 0x80               // '\x80'
         bfxil w30,w6,0, 0x17     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = w28 - w2
         b.ls 0x8007ad0           // likely

    loc_0x08007abc: // orphan
         if (w1 == 0x18)
         w8 = w6                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp ifgt 0x8007ba8       // unlikely

    loc_0x08007ac8: // orphan
         w8 = w17 >> w1
         jmp 0x8007af4

    loc_0x08007ad0: // orphan
         w1 = w2 - w28
         w8 = w17                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ls 0x8007af4           // likely

    loc_0x08007adc: // orphan
         if (w1 == 0x18)
         w8 = w9                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp ifgt 0x8007ba8       // unlikely

    loc_0x08007ae8: // orphan
         w30 = w30 >> w1
         w28 = w2                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w17                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007af4: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8007acc
         w14 = w2                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w6 = w6 >> 0x1f
         w2 = [var_0h_2]          // 0x4 // 4
         if (w6 == w2)
         b.ne 0x8007b28           // unlikely

    loc_0x08007b08: // orphan
         w8 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x30 = x8 + w30,uxtw
         tbz w30,0x18,0x8007b1c   // likely

    loc_0x08007b14: // orphan
         x30 = x30 >> 1
         w28 = w28 + 1

    loc_0x08007b1c: // orphan
         w8 = [var_0h_2]          // 0x4 // 4
         w2 = w14                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8007b6c

    loc_0x08007b28: // orphan
         [var_ch] = w0
         w12 = w30                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x12 - x0
         x12 = x0 - x12
         if (w30 == w8)
         csel x30,x12,x1, lo
         csel w8,w2,w6, lo
         if !x30 jmp 0x8007b98    // likely

    loc_0x08007b4c: // orphan
         w2 = w14                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbnz w30,0x17,0x8007b68  // unlikely

    loc_0x08007b54: // orphan
         x1 = x30                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x30 = x30 << 1
         w28 = w28 - 1
         if !x30 jmp 0x8007b68    // likely

    loc_0x08007b64: // orphan
         tbz w1,0x16,0x8007b54    // likely

    loc_0x08007b68: // orphan
         w0 = [var_ch]            // 0x4 // 4

    loc_0x08007b6c: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8007b24
         w14 = 0x7f80             // '\x80\x7f'
         if (w28 == 0xff)
         b.lt 0x8007b80           // likely

    loc_0x08007b78: // orphan
         w8 = w14 | w8,lsl 31
         jmp 0x8007ba8

    loc_0x08007b80: // orphan
         w8 = w8 << 0x1f
         if (w28 == 1)
         b.lt 0x8007ba8           // likely

    loc_0x08007b8c: // orphan
         bfi w30,w28,0x17, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w30 | w8
         jmp 0x8007ba8

    loc_0x08007b98: // orphan
         w0 = [var_ch]            // 0x4 // 4
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = w14                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w14 = 0x7f80             // '\x80\x7f'

    loc_0x08007ba8: // orphan
         // CODE XREFS from sym.gyro_sendmsg @ 0x8007b7c, 0x8007b94
         tbnz x26,0x3f,0x8007d0c  // unlikely

    loc_0x08007bac: // orphan
         if (x24 == x26)
         b.lo 0x8007d0c           // unlikely

    loc_0x08007bb4: // orphan
         msub x12,x15,x5, x24
         x12 = x12 - x7
         x12 = x12 - 0x1c
         if (x12 == 4)
         b.lo 0x8007d0c           // unlikely

    loc_0x08007bc8: // orphan
         if (x3 != x25)
         w26 = 0x1
         x15 = x25                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x27 + x7] = w8
         b.ne 0x8007884           // unlikely

    loc_0x08007bdc: // orphan
         jmp 0x8007c5c

    loc_0x08007be0: // orphan
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         [x20 + 0x20] = x8

    loc_0x08007bec: // orphan
         // CODE XREFS from sym.gyro_sendmsg @ 0x80077a8, 0x8007d04
         if (x19 == 0x208)
         b.lo 0x8007bfc           // likely

    loc_0x08007bf4: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8007bf8 ()             // 0x8007bf8(0x0, 0x0, 0x0, 0x0)

    loc_0x08007c14: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8007730
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007c1c: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8007cf4
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x620]        // 0xcf // 207
         ldur x9,[x29,-0x10]
         if (x8 == x9)
         b.ne 0x8007d08           // likely

    loc_0x08007c30: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sp = arg_270h
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08007c58: // orphan
         tbz w26,0,0x8007bec      // likely

    loc_0x08007c5c: // orphan
         // CODE XREF from sym.gyro_sendmsg @ 0x8007bdc
         (x8, 2) = 3
         x2 = var_88h             // int64_t arg3
         x10 = [x21 + 0x60]       // 0xdc // 220
         w1 = 0x1
         w3 = 0x1
         x4 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp, 0x88] = (x22,2)
         [sp, 0x70] = (x8,2)
         (x8, 2) = 3
         [var_0h_3] = x10
         [sp, 0x50] = (x8,2)
         (x8, 2) = 3
         [sp, 0x60] = (x8,2)
         (x9, 2) = 3
         [sp, 0x30] = (x9,2)
         (x8, 2) = 3
         [sp, 0x40] = (x8,2)
         (x8, 2) = 3
         x10 = var_20h_2
         x0 = var_30h_3           // int64_t arg1
         [sp, 0x20] = (x8,2)
         0x8007cb0 ()             // 0x8007cb0(0x178030, 0x1, 0x178088, 0x1)
         x8 = 0x8007000
         x1 = var_20h_2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x8 = [x8 + 0x88]         // 0xcf // 207
         blr x8                   // 0xffffffffffffffff(0x0, 0x178020, 0x0, 0x1)
         x8 = [var_48h]           // 4
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19 - x8            // int64_t arg2
         0x8007ce0 ()             // 0x8007ce0(0x0, 0x1, 0x0, 0x1)
         if (x19 == 0x208)
         b.lo 0x8007c1c           // likely

    loc_0x08007cec: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8007cf0 ()             // 0x8007cf0(0x0, 0x0, 0x0, 0x0)
         jmp 0x8007c1c

    loc_0x08007cf8: // orphan
         x1 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x0 = var_98h             // int64_t arg1
         0x8007d00 ()             // 0x8007d00(0x178098, 0x0, 0x0, 0x0)
         jmp 0x8007bec

    loc_0x08007d08: // orphan
         0x8007d08 ()             // " " // 0x8007d08(0x0, 0x0, 0x0, 0x0)

    loc_0x08007d0c: // orphan
         brk 0x1

}

/* ===== 0x0800c324 ===== */
int sym.hook_entry_remove (int esi, int edx) {
    loc_0x800c324:
        // CALL XREF from sym.inline_hook_install_count @ 0x800c17c
        // CALL XREF from sym.inline_hook_remove_count @ 0x800c490
        hint 0x19
        sp = sp - 0x60
        [sp, 0x30] = (x29,2)
        [var_40h] = x21
        [sp, 0x50] = (x20,2)
        x29 = var_30h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        w8 = (byte) [x0 + 0x30] // 0xc7 // 199 // arg1
        if !w8 jmp 0x800c3f0 // unlikely
            
    loc_0x800c3f0:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800c41c // likely
            
    loc_0x800c41c:
        0x800c41c ()  // "\n" // 0x800c41c(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x800c420:
        // CODE XREF from sym.hook_entry_remove @ 0x800c3cc
        x10 = 0x800c000
        x10 = x10 + 0
        x9 = x10 + x9,lsl 3
        prfm pstl1strm,[x9]
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800c350
    loc_0x800c364:
        x0 = 0x800c000
        x0 = x0 + 0   // int64_t arg1
        0x800c36c ()  // 0x800c36c(0x800c000, 0x0, 0x0, 0x0)
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x20] = x0
        if !x0 jmp 0x800c3bc // unlikely
            
    loc_0x800c3bc:
        w8 = [x19 + 0x34] // 0xda // 218
        w10 = 0x1
        x9 = x8 >> 6
        x8 = x10 << x8
        jmp 0x800c420
    loc_0x0800c37c: // orphan
             x9 = x21 + 4
             x10 = x21 + 8
             [sp, 8] = (x21,2)
             x9 = x21 + 0xc
             [sp, 0x18] = (x10,2)
             if x8 jmp 0x800c3ac      // unlikely

    loc_0x0800c394: // orphan
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800c39c ()             // 0x800c39c(0x800c000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20] = x0
         if !x0 jmp 0x800c3bc     // unlikely

    loc_0x0800c3ac: // orphan
         x1 = x19 + 0x20
         // CODE XREF from sym.inline_hook_remove_all @ 0x800c544
         x0 = var_sp_8h
         w2 = 0x4
         blr x8                   // xzr(0x178008, 0x20, 0x4, 0x0)

    loc_0x0800c3e0: // orphan
         // CODE XREF from sym.hook_entry_remove @ 0x800c440
         w8 = ~0
         [x19 + 0x18] = xzr
         [x19 + 0x34] = w8
         [x19 + 0x30] = (byte) wzr

    loc_0x0800c430: // orphan
         ldxr x10,[x9]
         bic x10,x10,x8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w11,x10,[x9]
         if w11 jmp 0x800c430     // unlikely

    loc_0x0800c440: // orphan
         jmp 0x800c3e0

}

/* ===== 0x0800c638 ===== */
int sym.ret_work_finish_task_switch (int esi, int edx) {
    loc_0x800c638:
        // CALL XREF from sym.ret_trampoline_finish_task_switch @ 0x800c62c
        hint 0x19
        sp = sp - 0x70
        [sp, 0x20] = (x29,2)
        [sp, 0x30] = (x26,2)
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        x8 = 0x800c000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800c844 // unlikely
            
    loc_0x800c844:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800c878 // likely
            
    loc_0x800c878:
        0x800c878 ()  // 0x800c878(0x0, 0x0, 0x0, 0x0)
        0x0800c87c
         // } else {
    loc_0x800c858:
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x29, 2) = 3
        sp = arg_70h
        hint 0x1d
        0x0800c874
         // } else {
        }
        return eax;
        goto loc_0x800c670
    loc_0x800c680:
        w10 = [x8 + 0x10] // 0xcf // 207
        if (w10 == w9)
        b.ne 0x800c840 // unlikely
            
    loc_0x800c840:
        sym.clear_hwbp_regs_on_cpu () // sym.clear_hwbp_regs_on_cpu(0x0, 0x0)
    loc_0x0800c68c: // orphan
             if (w10 == 1)
             b.lt 0x800c840           // likely

    loc_0x0800c694: // orphan
         w11 = 0x5030             // '0P'
         x12 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x8 + 0x20
         w10 = 0x1
         w11 = 0x3
         jmp 0x800c6c4

    loc_0x0800c6ac: // orphan
         if (x12 == 0xf)
         x12 = x12 + 1
         x9 = x9 + x11
         cset w10,lo
         if (x12 == 0x10)
         b.eq 0x800c6d8           // unlikely

    loc_0x0800c6c4: // orphan
         // CODE XREF from sym.ret_work_finish_task_switch @ 0x800c6a8
         if !x9 jmp 0x800c6ac     // likely

    loc_0x0800c6c8: // orphan
         x13 = [x9 + 0x18]        // 0xd0 // 208
         if !x13 jmp 0x800c6ac    // likely

    loc_0x0800c6d0: // orphan
         x13 = [x9]               // 0xd0 // 208
         if !x13 jmp 0x800c6ac    // unlikely

    loc_0x0800c6d8: // orphan
         tbz w10,0,0x800c840      // likely

    loc_0x0800c6dc: // orphan
         msr oslar_el1,xzr        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         w9 = 0xa000
         w23 = 0x5030             // '0P'
         mrs x10,mdscr_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = x10 | x9
         msr mdscr_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x20 = x8 + 0x20
         w22 = 0x10
         w23 = 0x3
         x24 = 0x800c000
         x25 = 0x800c000
         jmp 0x800c728

    loc_0x0800c71c: // orphan
         // CODE XREFS from sym.ret_work_finish_task_switch @ 0x800c7cc, 0x800c83c
         x22 = x22 - 1
         x20 = x20 + x23
         b.eq 0x800c844           // unlikely

    loc_0x0800c728: // orphan
         // CODE XREF from sym.ret_work_finish_task_switch @ 0x800c718
         [sp, 8] = (xzr,2)
         [sp] = xzr
         if !x20 jmp 0x800c71c    // likely

    loc_0x0800c734: // orphan
         x8 = [x20 + 0x18]        // 0xdb // 219
         if !x8 jmp 0x800c71c     // likely

    loc_0x0800c73c: // orphan
         x8 = [x20]               // 0xdb // 219
         if !x8 jmp 0x800c71c     // unlikely

    loc_0x0800c744: // orphan
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.hw_breakpoint_parse () // sym.hw_breakpoint_parse(0x0, 0x178000)
         if w0 jmp 0x800c71c      // unlikely

    loc_0x0800c754: // orphan
         w8 = (byte) [var_13h]    // 0x4 // 4
         if ((w8 & 0x18) == 0)
         b.eq 0x800c7d0           // unlikely

    loc_0x0800c760: // orphan
         w8 = [x25]               // 0xe0 // 224
         if (w21 == w8)
         b.ge 0x800c71c           // unlikely

    loc_0x0800c76c: // orphan
         x2 = [sp]                // 0x4 // 4
         w0 = 0x20
         w1 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = w21 + 1
         sym.write_wb_reg ()      // sym.write_wb_reg(0x20, 0x0)
         w8 = [var_10h]           // 0x4 // 4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x30                // '0'
         w1 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 >> 0xe
         w11 = w8 >> 0x18
         w12 = w8 >> 0x1d
         ubfx w8,w8,0x1d, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w10 & 0x1fe0
         w11 = w11 & 0x18
         w10 = w10 | w11
         if (w8 == 1)
         bfi w10,w12,1, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ccmp x9,8,0, eq
         w8 = w10 | 0x2000
         csel w8,w8,w10, eq
         w2 = w8 | 1
         sym.write_wb_reg ()      // sym.write_wb_reg(0x30, 0x0)
         w21 = w26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800c71c

    loc_0x0800c7d0: // orphan
         w8 = [x24]               // 0xdf // 223
         if (w19 == w8)
         b.ge 0x800c71c           // unlikely

    loc_0x0800c7dc: // orphan
         x2 = [sp]                // 0x4 // 4
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w26 = w19 + 1
         sym.write_wb_reg ()      // sym.write_wb_reg(0x0, 0x0)
         w8 = [var_10h]           // 0x4 // 4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x10
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 >> 0xe
         w11 = w8 >> 0x18
         w12 = w8 >> 0x1d
         ubfx w8,w8,0x1d, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w10 & 0x1fe0
         w11 = w11 & 0x18
         w10 = w10 | w11
         if (w8 == 1)
         bfi w10,w12,1, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ccmp x9,8,0, eq
         w8 = w10 | 0x2000
         csel w8,w8,w10, eq
         w2 = w8 | 1
         sym.write_wb_reg ()      // sym.write_wb_reg(0x10, 0x0)
         w19 = w26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800c71c

}

/* ===== 0x0800da58 ===== */
int sym.hw_breakpoint_parse (int esi, int edx) {
    loc_0x800da58:
        // CALL XREF from sym.ret_work_finish_task_switch @ 0x800c74c
        // CALL XREF from sym.clear_hwbp_regs_on_cpu @ 0x800c914
        // CALL XREF from sym.work_trampoline_breakpoint @ 0x800e14c
        // CALL XREF from sym.work_trampoline_watchpoint @ 0x800e72c
        w8 = ~0x15
        if !x0 jmp 0x800db88 // likely
            
    loc_0x800db88:
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x0800db8c
         // } else {
    loc_0x800da60:
        if !x1 jmp 0x800db88 // likely
        }
        return eax;
    loc_0x800da64:
        [x1, 8] = (xzr,2) // arg2
        [x1] = xzr    // arg2
        w8 = [x0 + 8] // 0xc7 // 199 // arg1
        w9 = w8 - 1
        if (w9 == 3)
        b.hi 0x800dae0 // likely
            
    loc_0x800dae0:
        w0 = ~0x15
        0x0800dae4
         // } else {
    loc_0x800da7c:
        x10 = 0x800d000
        x10 = x10 + 0 // "a"
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x11 = 0x800da9c
        w12 = (byte) [x10 + x9] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12,lsl 2 // 0x800de98
        // fcn.0800de98
        w9 = 0x800    // loc.imp.memmove
        br x11
        }
        return eax;
}

/* ===== 0x0800db90 ===== */
int sym.write_wb_reg (int esi, int edx) {
    loc_0x800db90:
        // XREFS: CALL 0x0800c77c  CALL 0x0800c7c4  CALL 0x0800c7ec
        // XREFS: CALL 0x0800c834  CALL 0x0800c9b0  CALL 0x0800ca08
        // XREFS: CALL 0x0800e58c  CALL 0x0800ebc4
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w1 + w0  // arg2
        if (w8 == 0x3f)
        b.hi 0x800ddcc // unlikely
            
    loc_0x800ddcc:
        x0 = 0x800d000
        x0 = x0 + 0   // int64_t arg1 // "a"
        0x800ddd4 ()  // 0x800ddd4(0x800d000, 0x0, 0x0, 0x0)
        jmp 0x800ddbc
         // do {
    loc_0x800ddbc:
        // CODE XREF from sym.write_wb_reg @ 0x800ddd8
        0x0800ddbc
        (x29, 2) = 3
        hint 0x1d
        0x0800ddc8
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x0800c880 ===== */
int sym.clear_hwbp_regs_on_cpu (int esi, int edx) {
    loc_0x800c880:
        // CALL XREF from sym.ret_work_finish_task_switch @ 0x800c840
        hint 0x19
        sp = sp - 0x80
        [sp, 0x20] = (x29,2)
        [var_30h] = x27
        [sp, 0x40] = (x26,2)
        [sp, 0x50] = (x24,2)
        [sp, 0x60] = (x22,2)
        [sp, 0x70] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        x8 = 0x800c000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800ca14 // unlikely
            
    loc_0x800ca14:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800ca4c // likely
            
    loc_0x800ca4c:
        0x800ca4c ()  // 0x800ca4c(0x0, 0x0, 0x0, 0x0)
        tbz w6,0x16,0x8010304 // likely
            
    loc_0x8010304:
        b.ne 0x801031c // likely
            
    loc_0x801031c:
        if (w12 == 2)
        tbnz w10,1,0x8010340 // unlikely
            
    loc_0x8010340:
        b.ne 0x801056c // likely
            
    loc_0x801056c:
        w9 = w9 + w11
        mrs x10,nzcv  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8010574:
        // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x801034c
        w9 = w9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800c8e0: // orphan
             // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x800c9b4
             w19 = w19 + 1

    loc_0x0800c8e4: // orphan
         // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x800ca10
         x23 = x23 - 1
         x21 = x21 + x24
         b.eq 0x800ca14           // unlikely

    loc_0x0800c8f0: // orphan
         // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x800c8dc
         [sp, 8] = (xzr,2)
         [sp] = xzr
         if !x21 jmp 0x800c8e4    // likely

    loc_0x0800c8fc: // orphan
         x8 = [x21 + 0x18]        // 0xdc // 220
         if !x8 jmp 0x800c8e4     // likely

    loc_0x0800c904: // orphan
         x8 = [x21]               // 0xdc // 220
         if !x8 jmp 0x800c8e4     // likely

    loc_0x0800c90c: // orphan
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.hw_breakpoint_parse () // sym.hw_breakpoint_parse(0x0, 0x178000)
         if w0 jmp 0x800c8e4      // unlikely

    loc_0x0800c91c: // orphan
         w8 = [var_10h]           // 0x4 // 4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = (byte) [var_13h]   // 0x4 // 4
         w11 = w8 >> 0xe
         w12 = w8 >> 0x18
         w13 = w8 >> 0x1d
         ubfx w8,w8,0x1d, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w11 & 0x1fe0
         w12 = w12 & 0x18
         w11 = w11 | w12
         if (w8 == 1)
         bfi w11,w13,1, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ccmp x9,8,0, eq
         w8 = w11 | 0x2000
         csel w27,w8,w11, eq
         if ((w10 & 0x18) == 0)
         b.eq 0x800c9b8           // unlikely

    loc_0x0800c960: // orphan
         w8 = [x26]               // 0xe1 // 225
         if (w19 == w8)
         b.ge 0x800c8e4           // likely

    loc_0x0800c96c: // orphan
         w0 = 0x20
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_wb_reg ()       // "(" // sym.read_wb_reg(0x20, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x30                // '0'
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_wb_reg ()       // "(" // sym.read_wb_reg(0x30, 0x0)
         tbz w0,0,0x800c8e0       // likely

    loc_0x0800c98c: // orphan
         x8 = [sp]                // 0x4 // 4
         if (x8 == x22)
         b.ne 0x800c8e0           // unlikely

    loc_0x0800c998: // orphan
         w8 = w0 & 0xfffffffe
         if (w27 == w8)
         b.ne 0x800c8e0           // unlikely

    loc_0x0800c9a4: // orphan
         x2 = x0 & 0xfffffffe
         w0 = 0x30                // '0'
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_wb_reg ()      // sym.write_wb_reg(0x30, 0x0)
         jmp 0x800c8e0

    loc_0x0800c9b8: // orphan
         w8 = [x25]               // 0xe0 // 224
         if (w20 == w8)
         b.ge 0x800c8e4           // likely

    loc_0x0800c9c4: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_wb_reg ()       // "(" // sym.read_wb_reg(0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x10
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_wb_reg ()       // "(" // sym.read_wb_reg(0x10, 0x0)
         tbz w0,0,0x800ca0c       // likely

    loc_0x0800c9e4: // orphan
         x8 = [sp]                // 0x4 // 4
         if (x8 == x22)
         b.ne 0x800ca0c           // unlikely

    loc_0x0800c9f0: // orphan
         w8 = w0 & 0xfffffffe
         if (w27 == w8)
         b.ne 0x800ca0c           // unlikely

    loc_0x0800c9fc: // orphan
         x2 = x0 & 0xfffffffe
         w0 = 0x10
         w1 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_wb_reg ()      // sym.write_wb_reg(0x10, 0x0)

    loc_0x0800ca0c: // orphan
         w20 = w20 + 1
         jmp 0x800c8e4

    loc_0x08010310: // orphan
         b.ne 0x8010528           // likely

    loc_0x08010314: // orphan
         x8 = x9 - x11
         jmp 0x8010538

    loc_0x08010328: // orphan
         w8 = w9 - w11
         jmp 0x8010534

    loc_0x08010330: // orphan
         b.ne 0x8010560           // likely

    loc_0x08010334: // orphan
         x9 = x9 - x11
         mrs x10,nzcv             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010578

    loc_0x08010528: // orphan
         x8 = x9 + x11
         jmp 0x8010538

    loc_0x08010530: // orphan
         w8 = w9 + w11

    loc_0x08010534: // orphan
         // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x801032c
         w8 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08010538: // orphan
         // CODE XREFS from sym.clear_hwbp_regs_on_cpu @ 0x8010318, 0x801052c
         w9 = (byte) [var_20h]    // 0x4 // 4
         if (w9 == 0x1f)
         b.ne 0x8010550           // likely

    loc_0x08010544: // orphan
         x9 = x19 + 0xf8
         [x9] = x8
         jmp 0x8011788

    loc_0x08010550: // orphan
         b.hs 0x801244c           // unlikely

    loc_0x08010554: // orphan
         x9 = x19 + x9,lsl 3
         [x9] = x8
         jmp 0x8011788

    loc_0x08010560: // orphan
         x9 = x9 + x11
         mrs x10,nzcv             // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8010578

    loc_0x08010578: // orphan
         // CODE XREFS from sym.clear_hwbp_regs_on_cpu @ 0x801033c, 0x8010568
         x11 = [x19 + 0x108]      // 0xda // 218
         x12 = x10 >> 0x1c
         w10 = (byte) [var_20h]   // 0x4 // 4
         bfi x11,x12,0x1c, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 0x1f)
         [x19 + 0x108] = x11
         b.ne 0x8011774           // likely

    loc_0x08010594: // orphan
         jmp 0x8011788

    loc_0x08011774: // orphan
         b.hs 0x801244c           // unlikely

    loc_0x08011778: // orphan
         x11 = x9 & 0xffffffff
         if (w8 == 0x40)
         csel x8,x9,x11, eq
         [x19 + x10,lsl 3] = x8

    loc_0x08011788: // orphan
         // CODE XREFS from sym.clear_hwbp_regs_on_cpu @ 0x801054c, 0x801055c, 0x8010594
         x8 = [x19 + 0x100]       // 0xda // 218
         x8 = x8 + 4
         jmp 0x801238c

    loc_0x0801238c: // orphan
         // CODE XREF from sym.clear_hwbp_regs_on_cpu @ 0x8011790
         [x19 + 0x100] = x8
         w23 = 0x1

    loc_0x0801244c: // orphan
         // CODE XREF from sym.emulate_insn @ +0x3680
         // CODE XREFS from fcn.08012394 @ +0x58, +0x7c, +0xac
         brk 0x5512

}

/* ===== 0x0800dddc ===== */
int sym.read_wb_reg (int esi, int edx) {
    loc_0x800dddc:
        // XREFS: CALL 0x0800c974  CALL 0x0800c984  CALL 0x0800c9cc
        // XREFS: CALL 0x0800c9dc  CALL 0x0800e0f4  CALL 0x0800e104
        // XREFS: CALL 0x0800e6cc  CALL 0x0800e6dc
        w8 = w1 + w0  // arg2
        if (w8 == 0x3f)
        b.hi 0x800e000 // unlikely
            
    loc_0x800e000:
        // XREFS: STRING 0x0800e00c  CODE 0x0800e010  STRING 0x0800e02c
        // XREFS: STRING 0x0800e050  CODE 0x0800e054  STRING 0x0800e098
        // XREFS: STRING 0x0800e0ac  STRING 0x0800e604  STRING 0x0800e618
        // XREFS: STRING 0x0800ebdc  CODE 0x0800ebe0  STRING 0x0800ed78
        // XREFS: CODE 0x0800ed7c
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800e000
        x0 = x0 + 0   // int64_t arg1
        0x800e014 ()  // 0x800e014(0x800e000, 0x0, 0x0, 0x0)
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x0800e024
         // } else {
    loc_0x800dde8:
        x9 = 0x800d000
        x9 = x9 + 0   // "a"
        x10 = 0x800ddf0
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x0800cb98 ===== */
int sym.stop_task_run_monitor (int esi, int edx) {
    loc_0x800cb98:
        // CALL XREF from sym.do_hwbp_set @ 0x800ce90
        hint 0x19
        [sp, -0x50]! = (x29,2)
        [var_10h] = x25
        [sp, 0x20] = (x24,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x22 = 0x800c000
        x19 = [x22]   // 0xdd // 221
        if !x19 jmp 0x800cc50 // unlikely
            
    loc_0x800cc50:
        (x20, 2) = 3
        x25 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800cc68
         // } else {
    loc_0x800cbc0:
        x8 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x23 = 0x800c000
        x24 = ~0
        w25 = 0x20
        x20 = 0x800c000
        x20 = x20 + 0
        }
        return eax;
    loc_0x0800cbd8: // orphan
             w9 = [x23]               // 0xde // 222
             x8 = x24 << x8
             w8 &= w8
             rbit x8,x8
             clz x8,x8
             csel x21,x25,x8, eq
             if (w21 == 0x1f)
             b.hi 0x800cc18           // likely

    loc_0x0800cbf8: // orphan
         w0 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = 0x1
         0x800cc08 ()             // 0x800cc08(0x0, 0x0, 0x0, 0x1)
         if (x21 == 0x1f)
         x8 = x21 + 1
         b.lo 0x800cbd8           // likely

    loc_0x0800cc18: // orphan
         x0 = 0x800c000
         x0 = x0 + 0
         w1 = 0x1
         0x800cc24 ()             // 0x800cc24(0x800c000, 0x1, 0x0, 0x0)
         x0 = 0x800c000
         x0 = x0 + 0
         w1 = 0x2
         0x800cc34 ()             // 0x800cc34(0x800c000, 0x2, 0x0, 0x0)
         w2 = 0x320
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x35                // '5'
         [x22] = xzr
         0x800cc4c ()             // 0x800cc4c(0x0, 0x0, 0x350320, 0x0)

}

/* ===== 0x0801e0fc ===== */
int sym._copy_from_user_2 (int esi, int edx) {
    loc_0x801e0fc:
        // CALL XREF from sym.do_hwbp_set @ 0x800ccb8
        // CALL XREF from sym.do_hwbp_get_records @ 0x800d5e0
        // CALL XREF from sym.do_hwbp_set_record @ 0x800d838
        // CALL XREF from sym.do_hwbp_clear_records @ 0x800d97c
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        tbnz w9,5,0x801e130 // likely
            
    loc_0x801e130:
        x9 = x1 << 8  // arg2
        x9 = x1 & x9,asr 8 // arg2
         // do {
    loc_0x801e138:
        x10 = 0x80    // '\x80'
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x19 == x10)
        b.hi 0x801e1c8 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0801e148: // orphan
             x10 = x10 - x19
             x21 = x19                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             if (x10 == x9)
             b.lo 0x801e1c8           // unlikely

    loc_0x0801e158: // orphan
         jmp 0x801e1fc

    loc_0x0801e160: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x801e208
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801e188: // orphan
         x1 = x1 & 0xff7fffffffffffff // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x801e194 ()             // 0x801e194(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801e20c

    loc_0x0801e1a4: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x801e218
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801e1c8: // orphan
         if x21 jmp 0x801e1e4     // unlikely

    loc_0x0801e1cc: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x801e1f8
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0801e1e4: // orphan
         x8 = x19 - x21
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = x20 + x8            // int64_t arg1
         0x801e1f4 ()             // 0x801e1f4(0x0, 0x0, 0x0, 0x0)
         jmp 0x801e1cc

    loc_0x0801e1fc: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x801e158
         x9 = 0x801e000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x801e188   // unlikely

    loc_0x0801e208: // orphan
         jmp 0x801e160

    loc_0x0801e20c: // orphan
         // CODE XREF from sym._copy_from_user_2 @ 0x801e19c
         x8 = 0x801e000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x801e1c8   // unlikely

    loc_0x0801e218: // orphan
         jmp 0x801e1a4

}

/* ===== 0x0800d010 ===== */
int sym.prepare_break_point_handlers (int esi, int edx) {
    loc_0x800d010:
        // CALL XREF from sym.do_hwbp_set @ 0x800cf40
        if !x0 jmp 0x800d160 // likely
            
    loc_0x800d160:
        0x0800d160
         // } else {
    loc_0x800d014:
        w8 = [x0 + 0x10] // 0xc7 // 199 // arg1
        if (w8 == 1)
        b.lt 0x800d160 // likely
        }
        return eax;
    loc_0x800d020:
        x8 = x0 + 0x6a,lsl 12 // arg1
        x10 = [x0 + 0x38] // 0xc7 // 199 // arg1
        x9 = x8 + 0x80
        x8 = x0 + 0x35,lsl 12 // arg1
        x11 = x8 + 0x50
        x8 = 0x800d000
        x8 = x8 + 0   // "a"
        if !x10 jmp 0x800d044 // unlikely
            
    loc_0x800d044:
        x12 = [x11 + 0x18] // 0xd2 // 210
        x10 = x0 + 0x9f,lsl 12 // arg1
        x10 = x10 + 0xb0
        if !x12 jmp 0x800d058 // likely
            
    loc_0x800d058:
        x11 = [x9 + 0x18] // 0xd0 // 208
        x12 = x0 + 0xd4,lsl 12 // arg1
        x12 = x12 + 0xe0
        if !x11 jmp 0x800d06c // likely
            
    loc_0x800d06c:
        x9 = [x10 + 0x18] // 0xd1 // 209
        x11 = x0 + 0x109,lsl 12 // arg1
        x11 = x11 + 0x110
        if !x9 jmp 0x800d080 // likely
            
    loc_0x800d080:
        x9 = [x12 + 0x18] // 0xd3 // 211
        x10 = x0 + 0x13e,lsl 12 // arg1
        x10 = x10 + 0x140
        if !x9 jmp 0x800d094 // likely
            
    loc_0x800d094:
        x12 = [x11 + 0x18] // 0xd2 // 210
        x9 = x0 + 0x173,lsl 12 // arg1
        x9 = x9 + 0x170
        if !x12 jmp 0x800d0a8 // likely
            
    loc_0x800d0a8:
        x12 = [x10 + 0x18] // 0xd1 // 209
        x11 = x0 + 0x1a8,lsl 12 // arg1
        x11 = x11 + 0x1a0
        if !x12 jmp 0x800d0bc // likely
            
    loc_0x800d0bc:
        x12 = [x9 + 0x18] // 0xd0 // 208
        x10 = x0 + 0x1dd,lsl 12 // arg1
        x10 = x10 + 0x1d0
        if !x12 jmp 0x800d0d0 // likely
            
    loc_0x800d0d0:
        x12 = [x11 + 0x18] // 0xd2 // 210
        x9 = x0 + 0x212,lsl 12 // arg1
        x9 = x9 + 0x200
        if !x12 jmp 0x800d0e4 // likely
            
    loc_0x800d0e4:
        x12 = [x10 + 0x18] // 0xd1 // 209
        x11 = x0 + 0x247,lsl 12 // arg1
        x11 = x11 + 0x230
        if !x12 jmp 0x800d0f8 // likely
            
    loc_0x800d0f8:
        x12 = [x9 + 0x18] // 0xd0 // 208
        x10 = x0 + 0x27c,lsl 12 // arg1
        x10 = x10 + 0x260
        if !x12 jmp 0x800d10c // likely
            
    loc_0x800d10c:
        x12 = [x11 + 0x18] // 0xd2 // 210
        x9 = x0 + 0x2b1,lsl 12 // arg1
        x9 = x9 + 0x290
        if !x12 jmp 0x800d120 // likely
            
    loc_0x800d120:
        x12 = [x10 + 0x18] // 0xd1 // 209
        x11 = x0 + 0x2e6,lsl 12 // arg1
        x11 = x11 + 0x2c0
        if !x12 jmp 0x800d134 // likely
            
    loc_0x800d134:
        x12 = [x9 + 0x18] // 0xd0 // 208
        x10 = x0 + 0x31b,lsl 12 // arg1
        x10 = x10 + 0x2f0
        if !x12 jmp 0x800d148 // likely
            
    loc_0x800d148:
        x9 = [x11 + 0x18] // 0xd2 // 210
        if !x9 jmp 0x800d154 // likely
            
    loc_0x800d154:
        x9 = [x10 + 0x18] // 0xd1 // 209
        if !x9 jmp 0x800d160 // likely
    loc_0x800d15c:
        [x10] = x8
    loc_0x0800d040: // orphan
             [x0 + 0x20] = x8         // arg1

    loc_0x0800d054: // orphan
         [x11] = x8

    loc_0x0800d068: // orphan
         [x9] = x8

    loc_0x0800d07c: // orphan
         [x10] = x8

    loc_0x0800d090: // orphan
         [x12] = x8

    loc_0x0800d0a4: // orphan
         [x11] = x8

    loc_0x0800d0b8: // orphan
         [x10] = x8

    loc_0x0800d0cc: // orphan
         [x9] = x8

    loc_0x0800d0e0: // orphan
         [x11] = x8

    loc_0x0800d0f4: // orphan
         [x10] = x8

    loc_0x0800d108: // orphan
         [x9] = x8

    loc_0x0800d11c: // orphan
         [x11] = x8

    loc_0x0800d130: // orphan
         [x10] = x8

    loc_0x0800d144: // orphan
         [x9] = x8

    loc_0x0800d150: // orphan
         [x11] = x8

}

/* ===== 0x0800d164 ===== */
int sym.start_task_run_monitor (int esi, int edx) {
    loc_0x800d164:
        // CALL XREF from sym.do_hwbp_set @ 0x800cf48
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x24,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x800d220 // likely
            
    loc_0x800d220:
        w20 = ~0x15
         // do {
    loc_0x800d224:
        // CODE XREFS from sym.start_task_run_monitor @ 0x800d21c, 0x800d2b8, 0x800d2c4, 0x800d2f4
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800d23c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800d180
    loc_0x800d190:
        w10 = 0x5030  // '0P'
        x11 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x19 + 0x20
        w9 = 0x1
        w10 = 0x3
        jmp 0x800d1c0
         // do {
    loc_0x800d1c0:
        // CODE XREF from sym.start_task_run_monitor @ 0x800d1a4
        if !x8 jmp 0x800d1a8 // likely
         // } while (?);
        }
        return eax;
    loc_0x800d1c4:
        x12 = [x8 + 0x18] // 0xcf // 207
        if !x12 jmp 0x800d1a8 // likely
    loc_0x800d1a8:
        if (x11 == 0xf)
        x11 = x11 + 1
        x8 = x8 + x10
        cset w9,lo
        if (x11 == 0x10)
        b.eq 0x800d1d4 // unlikely
            
    loc_0x800d1d4:
        tbz w9,0,0x800d220 // likely
    loc_0x800d1d8:
        x21 = 0x800d000
        x22 = 0x800d000
        x20 = 0x800d000
        x9 = [x21]    // 0xdc // 220
        [x21] = x19   // "a"
        mrs x8,id_aa64dfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w8,w8,0xc, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w8 + 1
        [x22] = w8
        mrs x8,id_aa64dfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w8,w8,0x14, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w8 + 1
        [x20] = w8
        if !x9 jmp 0x800d240 // unlikely
            
    loc_0x800d240:
        x0 = 0x800d000
        x0 = x0 + 0   // int64_t arg1
        0x800d248 ()  // 0x800d248(0x800d000, 0x0, 0x0, 0x0)
        x24 = 0x800d000
        [x24] = x0
        x0 = 0x800d000
        x0 = x0 + 0   // int64_t arg1
        0x800d25c ()  // 0x800d25c(0x800d000, 0x0, 0x0, 0x0)
        x23 = 0x800d000
        [x23] = x0
        x0 = 0x800d000
        x0 = x0 + 0   // int64_t arg1
        0x800d270 ()  // 0x800d270(0x800d000, 0x0, 0x0, 0x0)
        x8 = [x24]    // 0xdf // 223
        x9 = 0x800d000
        [x9] = x0
        if !x8 jmp 0x800d2bc // unlikely
            
    loc_0x800d2bc:
        [x21] = xzr
        w20 = ~0x1
        jmp 0x800d224
    loc_0x0800d1cc: // orphan
             x12 = [x8]               // 0xcf // 207
             if !x12 jmp 0x800d1a8    // likely

    loc_0x0800d210: // orphan
         w9 = [x22]               // 0xdd // 221
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19] = (x9,2)
         jmp 0x800d224

    loc_0x0800d284: // orphan
         x8 = [x23]               // 0xde // 222
         if !x8 jmp 0x800d2bc     // likely

    loc_0x0800d28c: // orphan
         if !x0 jmp 0x800d2bc     // likely

    loc_0x0800d290: // orphan
         w8 = [x22]               // 0xdd // 221
         w9 = [x20]               // 0xdb // 219
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         w1 = 0x2
         [x19] = (x8,2)
         0x800d2a8 ()             // 0x800d2a8(0x800d000, 0x2, 0x0, 0x0)
         if !w0 jmp 0x800d2c8     // unlikely

    loc_0x0800d2b0: // orphan
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x21] = xzr
         jmp 0x800d224

    loc_0x0800d2c8: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         w1 = 0x1
         0x800d2d4 ()             // 0x800d2d4(0x800d000, 0x1, 0x0, 0x0)
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x800d224     // unlikely

    loc_0x0800d2e0: // orphan
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1
         w1 = 0x2
         [x21] = xzr
         0x800d2f0 ()             // 0x800d2f0(0x800d000, 0x2, 0x0, 0x0)
         jmp 0x800d224

}

/* ===== 0x0800d2f8 ===== */
int sym.paradise_hwbp_fill_config (int esi, int edx) {
    loc_0x800d2f8:
        // CALL XREF from sym.do_hwbp_set @ 0x800cf7c
        // CALL XREF from sym.do_hwbp_get_config @ 0x800d540
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w2 = 0x198
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x800d314 ()  // 0x800d314(0x0, 0x0, 0x198, 0x0)
        mrs x8,id_aa64dfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx x8,x8,0xc, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = x8 + 1
        mrs x8,id_aa64dfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx x9,x8,0x14, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x800d000
        x8 = [x8]     // 0xcf // 207
        x9 = x9 + 1
        [x19, 8] = (x10,2)
        if !x8 jmp 0x800d3cc // unlikely
            
    loc_0x800d3cc:
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x0800d3d8
         // } else {
    loc_0x800d340:
        w10 = [x8 + 0x10] // 0xcf // 207
        [x19] = w10
        x10 = [x8]    // 0xcf // 207
        if x10 jmp 0x800d354 // likely
        }
        return eax;
    loc_0x800d350:
        x10 = [x19 + 8] // 0xda // 218
         // do {
    loc_0x800d354:
        [x19 + 8] = x10
        w11 = 0x18
        x10 = [x8 + 8] // 0xcf // 207
        x8 = x8 + 0x38
        if (x10 == 0)
        csel x9,x9,x10, eq
        w10 = 0x5030  // '0P'
        [x19 + 0x10] = x9
        w9 = 0x10
        w10 = 0x3
        jmp 0x800d3b4
         // } while (?);
        }
        return eax;
    loc_0x0800d380: // orphan
             umaddl x14,w12,w11, x19
             w12 = w12 + 1
             [x14 + 0x18] = x13
             ldur w13,[x8,-0x10]      // 0xcf // 207
             [x14 + 0x20] = w13
             ldur w13,[x8,-0xc]       // 0xcf // 207
             [x14 + 0x24] = w13
             ldur w13,[x8,-8]         // 0xcf // 207
             [x19 + 4] = w12
             [x14 + 0x28] = w13

    loc_0x0800d3a8: // orphan
         x9 = x9 - 1
         x8 = x8 + x10
         b.eq 0x800d3cc           // unlikely

    loc_0x0800d3b4: // orphan
         // CODE XREF from sym.paradise_hwbp_fill_config @ 0x800d37c
         x13 = [x8]               // 0xcf // 207
         if !x13 jmp 0x800d3a8    // unlikely

    loc_0x0800d3bc: // orphan
         w12 = [x19 + 4]          // 0xda // 218
         if (w12 == 0xf)
         b.ls 0x800d380           // likely

    loc_0x0800d3c8: // orphan
         brk 0x5512

}

/* ===== 0x0801ef04 ===== */
int sym._copy_to_user_2 (int esi, int edx) {
    loc_0x801ef04:
        // CALL XREF from sym.do_hwbp_set @ 0x800cf98
        // CALL XREF from sym.do_hwbp_get_config @ 0x800d558
        // CALL XREFS from sym.do_hwbp_get_records @ 0x800d75c, 0x800d770, 0x800d7b8
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        tbnz w9,5,0x801ef1c // likely
            
    loc_0x801ef1c:
        x9 = x0 << 8  // arg1
        x9 = x0 & x9,asr 8 // arg1
         // do {
    loc_0x801ef24:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = 0x80    // '\x80'
        if (x2 == x10) // arg3
        b.hi 0x801efb0 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0801ef3c: // orphan
             x10 = x10 - x2           // arg3
             if (x10 == x9)
             b.lo 0x801efb0           // unlikely

    loc_0x0801ef48: // orphan
         jmp 0x801efc0

    loc_0x0801ef50: // orphan
         // CODE XREF from sym._copy_to_user_2 @ 0x801efcc
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801ef78: // orphan
         x0 = x0 & 0xff7fffffffffffff // int64_t arg1
         0x801ef7c ()             // 0x801ef7c(0x0, 0x0, 0x0, 0x0)
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801efd0

    loc_0x0801ef8c: // orphan
         // CODE XREF from sym._copy_to_user_2 @ 0x801efdc
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801efb0: // orphan
         x0 = x2                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0801efc0: // orphan
         // CODE XREF from sym._copy_to_user_2 @ 0x801ef48
         x9 = 0x801e000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x801ef78   // unlikely

    loc_0x0801efcc: // orphan
         jmp 0x801ef50

    loc_0x0801efd0: // orphan
         // CODE XREF from sym._copy_to_user_2 @ 0x801ef84
         x8 = 0x801e000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x801efb0   // unlikely

    loc_0x0801efdc: // orphan
         jmp 0x801ef8c

}

/* ===== 0x0801e220 ===== */
int sym.sample_hbp_handler_entry (int esi, int edx) {
    loc_0x801e220:
        if !x0 jmp 0x801eefc // likely
            
    loc_0x801eefc:
        0x0801eefc
         // } else {
    loc_0x801e224:
        if !x1 jmp 0x801eefc // likely
        }
        return eax;
    loc_0x801e228:
        w9 = [x1 + 0x20] // 0xc8 // 200 // arg2
        if (w9 == 1)
        b.lt 0x801e27c // likely
            
    loc_0x801e27c:
        if (w9 == 0x100)
        b.hi 0x801ef00 // unlikely
            
    loc_0x801ef00:
        brk 0x5512
         // } else {
    loc_0x801e284:
        w8 = 0x350
        x13 = [x0 + 0x100] // 0xc7 // 199 // arg1
        w10 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        umaddl x12,w9,w8, x1 // arg2
        w11 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = x12 + 0x30
        [x12 + 0x50] = x13
        w12 = 0x3
        w13 = 0x1
         // } else {
        }
        return eax;
    loc_0x0801e244: // orphan
             if (x11 == 0x35)
             b.eq 0x801ef00           // unlikely

    loc_0x0801e24c: // orphan
         x12 = x1 + x11           // arg2
         x13 = [x12 + 0x50]       // 0xd3 // 211
         if (x13 == x10)
         b.eq 0x801e26c           // likely

    loc_0x0801e25c: // orphan
         x11 = x11 + 0x350
         if (x8 == x11)
         b.ne 0x801e244           // likely

    loc_0x0801e268: // orphan
         jmp 0x801e274

    loc_0x0801e26c: // orphan
         x8 = x12 + 0x30
         b.ne 0x801e2e8           // likely

    loc_0x0801e274: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e268
         if (w9 == 0xff)
         jmp ifgt 0x801eefc       // unlikely

    loc_0x0801e2a8: // orphan
         w14 = w11                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w15 = w10 & 6
         w11 = w11 + 1
         x14 = x14 >> 2
         w16 = w12 << w15
         w15 = w13 << w15
         if (w11 == 0x47)
         w10 = w10 + 2
         w17 = (byte) [x8 + x14]  // 0xd5000000cf // 914828034255
         bic w16,w17,w16          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w15 = w16 | w15
         [x8 + x14] = (byte) w15
         b.ne 0x801e2a8           // likely

    loc_0x0801e2dc: // orphan
         w9 = w9 + 1
         [x1 + 0x20] = w9         // arg2
         if !x8 jmp 0x801eefc     // likely

    loc_0x0801e2e8: // orphan
         w9 = (byte) [x8]         // 0xcf // 207
         x11 = [x8 + 0x18]        // 0xcf // 207
         w10 = w9 & 3
         x11 = x11 + 1
         if (w10 == 2)
         [x8 + 0x18] = x11
         b.eq 0x801e318           // unlikely

    loc_0x0801e304: // orphan
         if (w10 == 1)
         b.ne 0x801e324           // likely

    loc_0x0801e30c: // orphan
         x10 = [x0 + 0x100]       // 0xc7 // 199 // arg1
         [x8 + 0x20] = x10
         jmp 0x801e324

    loc_0x0801e318: // orphan
         x9 = [x8 + 0x20]         // 0xcf // 207
         [x0 + 0x100] = x9        // arg1
         w9 = (byte) [x8]         // 0xcf // 207

    loc_0x0801e324: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e314
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e344           // unlikely

    loc_0x0801e330: // orphan
         if (w10 == 1)
         b.ne 0x801e350           // likely

    loc_0x0801e338: // orphan
         x10 = [x0 + 0xf0]        // 0xc7 // 199 // arg1
         [x8 + 0x28] = x10
         jmp 0x801e350

    loc_0x0801e344: // orphan
         x9 = [x8 + 0x28]         // 0xcf // 207
         [x0 + 0xf0] = x9         // arg1
         w9 = (byte) [x8]         // 0xcf // 207

    loc_0x0801e350: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e340
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801e370           // unlikely

    loc_0x0801e35c: // orphan
         if (w9 == 1)
         b.ne 0x801e378           // likely

    loc_0x0801e364: // orphan
         x9 = [x0 + 0xf8]         // 0xc7 // 199 // arg1
         [x8 + 0x30] = x9
         jmp 0x801e378

    loc_0x0801e370: // orphan
         x9 = [x8 + 0x30]         // 0xcf // 207
         [x0 + 0xf8] = x9         // arg1

    loc_0x0801e378: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e36c
         w9 = (byte) [x8 + 1]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x801e39c           // unlikely

    loc_0x0801e388: // orphan
         if (w10 == 1)
         b.ne 0x801e3a8           // likely

    loc_0x0801e390: // orphan
         x10 = [x0 + 0x110]       // 0xc7 // 199 // arg1
         [x8 + 0x38] = x10
         jmp 0x801e3a8

    loc_0x0801e39c: // orphan
         x9 = [x8 + 0x38]         // 0xcf // 207
         [x0 + 0x110] = x9        // arg1
         w9 = (byte) [x8 + 1]     // 0xcf // 207

    loc_0x0801e3a8: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e398
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e3c8           // unlikely

    loc_0x0801e3b4: // orphan
         if (w10 == 1)
         b.ne 0x801e3d4           // likely

    loc_0x0801e3bc: // orphan
         x10 = [x0 + 0x118]       // 0xc7 // 199 // arg1
         [x8 + 0x40] = x10
         jmp 0x801e3d4

    loc_0x0801e3c8: // orphan
         x9 = [x8 + 0x40]         // 0xcf // 207
         [x0 + 0x118] = w9        // arg1
         w9 = (byte) [x8 + 1]     // 0xcf // 207

    loc_0x0801e3d4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e3c4
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e3f4           // unlikely

    loc_0x0801e3e0: // orphan
         if (w10 == 1)
         b.ne 0x801e400           // likely

    loc_0x0801e3e8: // orphan
         x10 = [x0 + 0x108]       // 0xc7 // 199 // arg1
         [x8 + 0x48] = x10
         jmp 0x801e400

    loc_0x0801e3f4: // orphan
         x9 = [x8 + 0x48]         // 0xcf // 207
         [x0 + 0x108] = x9        // arg1
         w9 = (byte) [x8 + 1]     // 0xcf // 207

    loc_0x0801e400: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e3f0
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801e420           // unlikely

    loc_0x0801e40c: // orphan
         if (w9 == 1)
         b.ne 0x801e428           // likely

    loc_0x0801e414: // orphan
         x9 = [x0]                // 0xc7 // 199 // arg1
         [x8 + 0x50] = x9
         jmp 0x801e428

    loc_0x0801e420: // orphan
         x9 = [x8 + 0x50]         // 0xcf // 207
         [x0] = x9                // arg1

    loc_0x0801e428: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e41c
         w9 = (byte) [x8 + 2]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x801e44c           // unlikely

    loc_0x0801e438: // orphan
         if (w10 == 1)
         b.ne 0x801e458           // likely

    loc_0x0801e440: // orphan
         x10 = [x0 + 8]           // 0xc7 // 199 // arg1
         [x8 + 0x58] = x10
         jmp 0x801e458

    loc_0x0801e44c: // orphan
         x9 = [x8 + 0x58]         // 0xcf // 207
         [x0 + 8] = x9            // arg1
         w9 = (byte) [x8 + 2]     // 0xcf // 207

    loc_0x0801e458: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e448
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e478           // unlikely

    loc_0x0801e464: // orphan
         if (w10 == 1)
         b.ne 0x801e484           // likely

    loc_0x0801e46c: // orphan
         x10 = [x0 + 0x10]        // 0xc7 // 199 // arg1
         [x8 + 0x60] = x10
         jmp 0x801e484

    loc_0x0801e478: // orphan
         x9 = [x8 + 0x60]         // 0xcf // 207
         [x0 + 0x10] = x9         // arg1
         w9 = (byte) [x8 + 2]     // 0xcf // 207

    loc_0x0801e484: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e474
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e4a4           // unlikely

    loc_0x0801e490: // orphan
         if (w10 == 1)
         b.ne 0x801e4b0           // likely

    loc_0x0801e498: // orphan
         x10 = [x0 + 0x18]        // 0xc7 // 199 // arg1
         [x8 + 0x68] = x10
         jmp 0x801e4b0

    loc_0x0801e4a4: // orphan
         x9 = [x8 + 0x68]         // 0xcf // 207
         [x0 + 0x18] = x9         // arg1
         w9 = (byte) [x8 + 2]     // 0xcf // 207

    loc_0x0801e4b0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e4a0
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801e4d0           // unlikely

    loc_0x0801e4bc: // orphan
         if (w9 == 1)
         b.ne 0x801e4d8           // likely

    loc_0x0801e4c4: // orphan
         x9 = [x0 + 0x20]         // 0xc7 // 199 // arg1
         [x8 + 0x70] = x9
         jmp 0x801e4d8

    loc_0x0801e4d0: // orphan
         x9 = [x8 + 0x70]         // 0xcf // 207
         [x0 + 0x20] = x9         // arg1

    loc_0x0801e4d8: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e4cc
         w9 = (byte) [x8 + 3]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x801e4fc           // unlikely

    loc_0x0801e4e8: // orphan
         if (w10 == 1)
         b.ne 0x801e508           // likely

    loc_0x0801e4f0: // orphan
         x10 = [x0 + 0x28]        // 0xc7 // 199 // arg1
         [x8 + 0x78] = x10
         jmp 0x801e508

    loc_0x0801e4fc: // orphan
         x9 = [x8 + 0x78]         // 0xcf // 207
         [x0 + 0x28] = x9         // arg1
         w9 = (byte) [x8 + 3]     // 0xcf // 207

    loc_0x0801e508: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e4f8
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e528           // unlikely

    loc_0x0801e514: // orphan
         if (w10 == 1)
         b.ne 0x801e534           // likely

    loc_0x0801e51c: // orphan
         x10 = [x0 + 0x30]        // 0xc7 // 199 // arg1
         [x8 + 0x80] = x10
         jmp 0x801e534

    loc_0x0801e528: // orphan
         x9 = [x8 + 0x80]         // 0xcf // 207
         [x0 + 0x30] = x9         // arg1
         w9 = (byte) [x8 + 3]     // 0xcf // 207

    loc_0x0801e534: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e524
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e554           // unlikely

    loc_0x0801e540: // orphan
         if (w10 == 1)
         b.ne 0x801e560           // likely

    loc_0x0801e548: // orphan
         x10 = [x0 + 0x38]        // 0xc7 // 199 // arg1
         [x8 + 0x88] = x10
         jmp 0x801e560

    loc_0x0801e554: // orphan
         x9 = [x8 + 0x88]         // 0xcf // 207
         [x0 + 0x38] = x9         // arg1
         w9 = (byte) [x8 + 3]     // 0xcf // 207

    loc_0x0801e560: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e550
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801e580           // unlikely

    loc_0x0801e56c: // orphan
         if (w9 == 1)
         b.ne 0x801e588           // likely

    loc_0x0801e574: // orphan
         x9 = [x0 + 0x40]         // 0xc7 // 199 // arg1
         [x8 + 0x90] = x9
         jmp 0x801e588

    loc_0x0801e580: // orphan
         x9 = [x8 + 0x90]         // 0xcf // 207
         [x0 + 0x40] = x9         // arg1

    loc_0x0801e588: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e57c
         w9 = (byte) [x8 + 4]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x801e5ac           // unlikely

    loc_0x0801e598: // orphan
         if (w10 == 1)
         b.ne 0x801e5b8           // likely

    loc_0x0801e5a0: // orphan
         x10 = [x0 + 0x48]        // 0xc7 // 199 // arg1
         [x8 + 0x98] = x10
         jmp 0x801e5b8

    loc_0x0801e5ac: // orphan
         x9 = [x8 + 0x98]         // 0xcf // 207
         [x0 + 0x48] = x9         // arg1
         w9 = (byte) [x8 + 4]     // 0xcf // 207

    loc_0x0801e5b8: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e5a8
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e5d8           // unlikely

    loc_0x0801e5c4: // orphan
         if (w10 == 1)
         b.ne 0x801e5e4           // likely

    loc_0x0801e5cc: // orphan
         x10 = [x0 + 0x50]        // 0xc7 // 199 // arg1
         [x8 + 0xa0] = x10
         jmp 0x801e5e4

    loc_0x0801e5d8: // orphan
         x9 = [x8 + 0xa0]         // 0xcf // 207
         [x0 + 0x50] = x9         // arg1
         w9 = (byte) [x8 + 4]     // 0xcf // 207

    loc_0x0801e5e4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e5d4
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e604           // unlikely

    loc_0x0801e5f0: // orphan
         if (w10 == 1)
         b.ne 0x801e610           // likely

    loc_0x0801e5f8: // orphan
         x10 = [x0 + 0x58]        // 0xc7 // 199 // arg1
         [x8 + 0xa8] = x10
         jmp 0x801e610

    loc_0x0801e604: // orphan
         x9 = [x8 + 0xa8]         // 0xcf // 207
         [x0 + 0x58] = x9         // arg1
         w9 = (byte) [x8 + 4]     // 0xcf // 207

    loc_0x0801e610: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e600
         // CODE XREF from fcn.080227f0 @ +0x670
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801e630           // unlikely

    loc_0x0801e61c: // orphan
         if (w9 == 1)
         b.ne 0x801e638           // likely

    loc_0x0801e624: // orphan
         x9 = [x0 + 0x60]         // 0xc7 // 199 // arg1
         [x8 + 0xb0] = x9
         jmp 0x801e638

    loc_0x0801e630: // orphan
         x9 = [x8 + 0xb0]         // 0xcf // 207
         // CODE XREF from sym.arm64_decode_sme @ +0x20
         [x0 + 0x60] = x9         // arg1

    loc_0x0801e638: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e62c
         w9 = (byte) [x8 + 5]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x801e65c           // unlikely

    loc_0x0801e648: // orphan
         if (w10 == 1)
         b.ne 0x801e668           // likely

    loc_0x0801e650: // orphan
         x10 = [x0 + 0x68]        // 0xc7 // 199 // arg1
         [x8 + 0xb8] = x10
         jmp 0x801e668

    loc_0x0801e65c: // orphan
         x9 = [x8 + 0xb8]         // 0xcf // 207
         [x0 + 0x68] = x9         // arg1
         w9 = (byte) [x8 + 5]     // 0xcf // 207

    loc_0x0801e668: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e658
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e688           // unlikely

    loc_0x0801e674: // orphan
         if (w10 == 1)
         b.ne 0x801e694           // likely

    loc_0x0801e67c: // orphan
         x10 = [x0 + 0x70]        // 0xc7 // 199 // arg1
         [x8 + 0xc0] = x10
         jmp 0x801e694

    loc_0x0801e688: // orphan
         x9 = [x8 + 0xc0]         // 0xcf // 207
         [x0 + 0x70] = x9         // arg1
         w9 = (byte) [x8 + 5]     // 0xcf // 207

    loc_0x0801e694: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e684
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e6b4           // unlikely

    loc_0x0801e6a0: // orphan
         if (w10 == 1)
         b.ne 0x801e6c0           // likely

    loc_0x0801e6a8: // orphan
         x10 = [x0 + 0x78]        // 0xc7 // 199 // arg1
         [x8 + 0xc8] = x10
         jmp 0x801e6c0

    loc_0x0801e6b4: // orphan
         x9 = [x8 + 0xc8]         // 0xcf // 207
         [x0 + 0x78] = x9         // arg1
         w9 = (byte) [x8 + 5]     // 0xcf // 207

    loc_0x0801e6c0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e6b0
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801e6e0           // unlikely

    loc_0x0801e6cc: // orphan
         if (w9 == 1)
         b.ne 0x801e6e8           // likely

    loc_0x0801e6d4: // orphan
         x9 = [x0 + 0x80]         // 0xc7 // 199 // arg1
         [x8 + 0xd0] = x9
         jmp 0x801e6e8

    loc_0x0801e6e0: // orphan
         x9 = [x8 + 0xd0]         // 0xcf // 207
         [x0 + 0x80] = x9         // arg1

    loc_0x0801e6e8: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e6dc
         w9 = (byte) [x8 + 6]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x801e70c           // unlikely

    loc_0x0801e6f8: // orphan
         if (w10 == 1)
         b.ne 0x801e718           // likely

    loc_0x0801e700: // orphan
         x10 = [x0 + 0x88]        // 0xc7 // 199 // arg1
         [x8 + 0xd8] = x10
         jmp 0x801e718

    loc_0x0801e70c: // orphan
         x9 = [x8 + 0xd8]         // 0xcf // 207
         [x0 + 0x88] = x9         // arg1
         w9 = (byte) [x8 + 6]     // 0xcf // 207

    loc_0x0801e718: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e708
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e738           // unlikely

    loc_0x0801e724: // orphan
         if (w10 == 1)
         b.ne 0x801e744           // likely

    loc_0x0801e72c: // orphan
         x10 = [x0 + 0x90]        // 0xc7 // 199 // arg1
         [x8 + 0xe0] = x10
         jmp 0x801e744

    loc_0x0801e738: // orphan
         x9 = [x8 + 0xe0]         // 0xcf // 207
         [x0 + 0x90] = x9         // arg1
         w9 = (byte) [x8 + 6]     // 0xcf // 207

    loc_0x0801e744: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e734
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e764           // unlikely

    loc_0x0801e750: // orphan
         if (w10 == 1)
         b.ne 0x801e770           // likely

    loc_0x0801e758: // orphan
         x10 = [x0 + 0x98]        // 0xc7 // 199 // arg1
         [x8 + 0xe8] = x10
         jmp 0x801e770

    loc_0x0801e764: // orphan
         x9 = [x8 + 0xe8]         // 0xcf // 207
         [x0 + 0x98] = x9         // arg1
         w9 = (byte) [x8 + 6]     // 0xcf // 207

    loc_0x0801e770: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e760
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801e790           // unlikely

    loc_0x0801e77c: // orphan
         if (w9 == 1)
         b.ne 0x801e798           // likely

    loc_0x0801e784: // orphan
         x9 = [x0 + 0xa0]         // 0xc7 // 199 // arg1
         [x8 + 0xf0] = x9
         jmp 0x801e798

    loc_0x0801e790: // orphan
         x9 = [x8 + 0xf0]         // 0xcf // 207
         [x0 + 0xa0] = x9         // arg1

    loc_0x0801e798: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e78c
         w9 = (byte) [x8 + 7]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x801e7bc           // unlikely

    loc_0x0801e7a8: // orphan
         if (w10 == 1)
         b.ne 0x801e7c8           // likely

    loc_0x0801e7b0: // orphan
         x10 = [x0 + 0xa8]        // 0xc7 // 199 // arg1
         [x8 + 0xf8] = x10
         jmp 0x801e7c8

    loc_0x0801e7bc: // orphan
         x9 = [x8 + 0xf8]         // 0xcf // 207
         [x0 + 0xa8] = x9         // arg1
         w9 = (byte) [x8 + 7]     // 0xcf // 207

    loc_0x0801e7c8: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e7b8
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e7e8           // unlikely

    loc_0x0801e7d4: // orphan
         if (w10 == 1)
         b.ne 0x801e7f4           // likely

    loc_0x0801e7dc: // orphan
         x10 = [x0 + 0xb0]        // 0xc7 // 199 // arg1
         [x8 + 0x100] = x10
         jmp 0x801e7f4

    loc_0x0801e7e8: // orphan
         x9 = [x8 + 0x100]        // 0xcf // 207
         [x0 + 0xb0] = x9         // arg1
         w9 = (byte) [x8 + 7]     // 0xcf // 207

    loc_0x0801e7f4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e7e4
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e814           // unlikely

    loc_0x0801e800: // orphan
         if (w10 == 1)
         b.ne 0x801e820           // likely

    loc_0x0801e808: // orphan
         x10 = [x0 + 0xb8]        // 0xc7 // 199 // arg1
         [x8 + 0x108] = x10
         jmp 0x801e820

    loc_0x0801e814: // orphan
         x9 = [x8 + 0x108]        // 0xcf // 207
         [x0 + 0xb8] = x9         // arg1
         w9 = (byte) [x8 + 7]     // 0xcf // 207

    loc_0x0801e820: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e810
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801e840           // unlikely

    loc_0x0801e82c: // orphan
         if (w9 == 1)
         b.ne 0x801e848           // likely

    loc_0x0801e834: // orphan
         x9 = [x0 + 0xc0]         // 0xc7 // 199 // arg1
         [x8 + 0x110] = x9
         jmp 0x801e848

    loc_0x0801e840: // orphan
         x9 = [x8 + 0x110]        // 0xcf // 207
         [x0 + 0xc0] = x9         // arg1

    loc_0x0801e848: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e83c
         w9 = (byte) [x8 + 8]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x801e86c           // unlikely

    loc_0x0801e858: // orphan
         if (w10 == 1)
         b.ne 0x801e878           // likely

    loc_0x0801e860: // orphan
         x10 = [x0 + 0xc8]        // 0xc7 // 199 // arg1
         [x8 + 0x118] = x10
         jmp 0x801e878

    loc_0x0801e86c: // orphan
         x9 = [x8 + 0x118]        // 0xcf // 207
         [x0 + 0xc8] = x9         // arg1
         w9 = (byte) [x8 + 8]     // 0xcf // 207

    loc_0x0801e878: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e868
         ubfx w10,w9,2, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e898           // unlikely

    loc_0x0801e884: // orphan
         if (w10 == 1)
         b.ne 0x801e8a4           // likely

    loc_0x0801e88c: // orphan
         x10 = [x0 + 0xd0]        // 0xc7 // 199 // arg1
         [x8 + 0x120] = x10
         jmp 0x801e8a4

    loc_0x0801e898: // orphan
         x9 = [x8 + 0x120]        // 0xcf // 207
         [x0 + 0xd0] = x9         // arg1
         w9 = (byte) [x8 + 8]     // 0xcf // 207

    loc_0x0801e8a4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e894
         ubfx w10,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w10 == 2)
         b.eq 0x801e8c4           // unlikely

    loc_0x0801e8b0: // orphan
         if (w10 == 1)
         b.ne 0x801e8d0           // likely

    loc_0x0801e8b8: // orphan
         x10 = [x0 + 0xd8]        // 0xc7 // 199 // arg1
         [x8 + 0x128] = x10
         jmp 0x801e8d0

    loc_0x0801e8c4: // orphan
         x9 = [x8 + 0x128]        // 0xcf // 207
         [x0 + 0xd8] = x9         // arg1
         w9 = (byte) [x8 + 8]     // 0xcf // 207

    loc_0x0801e8d0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e8c0
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801e8f0           // unlikely

    loc_0x0801e8dc: // orphan
         if (w9 == 1)
         b.ne 0x801e8f8           // likely

    loc_0x0801e8e4: // orphan
         x9 = [x0 + 0xe0]         // 0xc7 // 199 // arg1
         [x8 + 0x130] = x9
         jmp 0x801e8f8

    loc_0x0801e8f0: // orphan
         x9 = [x8 + 0x130]        // 0xcf // 207
         [x0 + 0xe0] = x9         // arg1

    loc_0x0801e8f8: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e8ec
         w9 = (byte) [x8 + 9]     // 0xcf // 207
         w10 = w9 & 3
         if (w10 == 2)
         b.eq 0x801e91c           // unlikely

    loc_0x0801e908: // orphan
         if (w10 == 1)
         b.ne 0x801e928           // likely

    loc_0x0801e910: // orphan
         x10 = [x0 + 0xe8]        // 0xc7 // 199 // arg1
         [x8 + 0x138] = x10
         jmp 0x801e928

    loc_0x0801e91c: // orphan
         x9 = [x8 + 0x138]        // 0xcf // 207
         [x0 + 0xe8] = x9         // arg1
         w9 = (byte) [x8 + 9]     // 0xcf // 207

    loc_0x0801e928: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e918
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x801e948           // unlikely

    loc_0x0801e934: // orphan
         if (w9 == 1)
         b.ne 0x801e950           // likely

    loc_0x0801e93c: // orphan
         mrs x9,fpsr              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8 + 0x140] = w9
         jmp 0x801e950

    loc_0x0801e948: // orphan
         w9 = [x8 + 0x140]        // 0xcf
         msr fpsr,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801e950: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e944
         w9 = (byte) [x8 + 9]     // 0xcf
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x801e974           // unlikely

    loc_0x0801e960: // orphan
         if (w9 == 1)
         b.ne 0x801e97c           // likely

    loc_0x0801e968: // orphan
         mrs x9,fpcr              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x8 + 0x144] = w9
         jmp 0x801e97c

    loc_0x0801e974: // orphan
         w9 = [x8 + 0x144]        // 0xcf
         msr fpcr,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801e97c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e970
         w9 = (byte) [x8 + 9]     // 0xcf
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801e9a0           // unlikely

    loc_0x0801e98c: // orphan
         if (w9 == 1)
         b.ne 0x801e9a8           // likely

    loc_0x0801e994: // orphan
         x9 = x8 + 0x150
         [x9] = q0
         jmp 0x801e9a8

    loc_0x0801e9a0: // orphan
         x9 = x8 + 0x150
         q0 = [x9]                // 0xd0 // 208

    loc_0x0801e9a8: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e99c
         w9 = (byte) [x8 + 0xa]   // 0xcf
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x801e9cc           // unlikely

    loc_0x0801e9b8: // orphan
         if (w9 == 1)
         b.ne 0x801e9d4           // likely

    loc_0x0801e9c0: // orphan
         x9 = x8 + 0x160
         [x9] = q1
         jmp 0x801e9d4

    loc_0x0801e9cc: // orphan
         x9 = x8 + 0x160
         q1 = [x9]                // 0xd0 // 208

    loc_0x0801e9d4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e9c8
         w9 = (byte) [x8 + 0xa]   // 0xcf
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x801e9f8           // unlikely

    loc_0x0801e9e4: // orphan
         if (w9 == 1)
         b.ne 0x801ea00           // likely

    loc_0x0801e9ec: // orphan
         x9 = x8 + 0x170
         [x9] = q2
         jmp 0x801ea00

    loc_0x0801e9f8: // orphan
         x9 = x8 + 0x170
         q2 = [x9]                // 0xd0 // 208

    loc_0x0801ea00: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801e9f4
         w9 = (byte) [x8 + 0xa]   // 0xcf
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x801ea24           // unlikely

    loc_0x0801ea10: // orphan
         if (w9 == 1)
         b.ne 0x801ea2c           // likely

    loc_0x0801ea18: // orphan
         x9 = x8 + 0x180
         [x9] = q3
         jmp 0x801ea2c

    loc_0x0801ea24: // orphan
         x9 = x8 + 0x180
         q3 = [x9]                // 0xd0 // 208

    loc_0x0801ea2c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801ea20
         w9 = (byte) [x8 + 0xa]   // 0xcf
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801ea50           // unlikely

    loc_0x0801ea3c: // orphan
         if (w9 == 1)
         b.ne 0x801ea58           // likely

    loc_0x0801ea44: // orphan
         x9 = x8 + 0x190
         [x9] = q4
         jmp 0x801ea58

    loc_0x0801ea50: // orphan
         x9 = x8 + 0x190
         q4 = [x9]                // 0xd0 // 208

    loc_0x0801ea58: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801ea4c
         w9 = (byte) [x8 + 0xb]   // 0xcf
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x801ea7c           // unlikely

    loc_0x0801ea68: // orphan
         if (w9 == 1)
         b.ne 0x801ea84           // likely

    loc_0x0801ea70: // orphan
         x9 = x8 + 0x1a0
         [x9] = q5
         jmp 0x801ea84

    loc_0x0801ea7c: // orphan
         x9 = x8 + 0x1a0
         q5 = [x9]                // 0xd0 // 208

    loc_0x0801ea84: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801ea78
         w9 = (byte) [x8 + 0xb]   // 0xcf
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x801eaa8           // unlikely

    loc_0x0801ea94: // orphan
         if (w9 == 1)
         b.ne 0x801eab0           // likely

    loc_0x0801ea9c: // orphan
         x9 = x8 + 0x1b0
         [x9] = q6
         jmp 0x801eab0

    loc_0x0801eaa8: // orphan
         x9 = x8 + 0x1b0
         q6 = [x9]                // 0xd0 // 208

    loc_0x0801eab0: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801eaa4
         w9 = (byte) [x8 + 0xb]   // 0xcf
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x801ead4           // unlikely

    loc_0x0801eac0: // orphan
         if (w9 == 1)
         b.ne 0x801eadc           // likely

    loc_0x0801eac8: // orphan
         x9 = x8 + 0x1c0
         [x9] = q7
         jmp 0x801eadc

    loc_0x0801ead4: // orphan
         x9 = x8 + 0x1c0
         q7 = [x9]                // 0xd0 // 208

    loc_0x0801eadc: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801ead0
         w9 = (byte) [x8 + 0xb]   // 0xcf
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801eb00           // unlikely

    loc_0x0801eaec: // orphan
         if (w9 == 1)
         b.ne 0x801eb08           // likely

    loc_0x0801eaf4: // orphan
         x9 = x8 + 0x1d0
         [x9] = q8
         jmp 0x801eb08

    loc_0x0801eb00: // orphan
         x9 = x8 + 0x1d0
         q8 = [x9]                // 0xd0 // 208

    loc_0x0801eb08: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801eafc
         w9 = (byte) [x8 + 0xc]   // 0xcf
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x801eb2c           // unlikely

    loc_0x0801eb18: // orphan
         if (w9 == 1)
         b.ne 0x801eb34           // likely

    loc_0x0801eb20: // orphan
         x9 = x8 + 0x1e0
         [x9] = q9
         jmp 0x801eb34

    loc_0x0801eb2c: // orphan
         x9 = x8 + 0x1e0
         q9 = [x9]                // 0xd0 // 208

    loc_0x0801eb34: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801eb28
         w9 = (byte) [x8 + 0xc]   // 0xcf
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x801eb58           // unlikely

    loc_0x0801eb44: // orphan
         if (w9 == 1)
         b.ne 0x801eb60           // likely

    loc_0x0801eb4c: // orphan
         x9 = x8 + 0x1f0
         [x9] = q10
         jmp 0x801eb60

    loc_0x0801eb58: // orphan
         x9 = x8 + 0x1f0
         q10 = [x9]               // 0xd0 // 208

    loc_0x0801eb60: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801eb54
         w9 = (byte) [x8 + 0xc]   // 0xcf
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x801eb84           // unlikely

    loc_0x0801eb70: // orphan
         if (w9 == 1)
         b.ne 0x801eb8c           // likely

    loc_0x0801eb78: // orphan
         x9 = x8 + 0x200
         [x9] = q11
         jmp 0x801eb8c

    loc_0x0801eb84: // orphan
         x9 = x8 + 0x200
         q11 = [x9]               // 0xd0 // 208

    loc_0x0801eb8c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801eb80
         w9 = (byte) [x8 + 0xc]   // 0xcf
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801ebb0           // unlikely

    loc_0x0801eb9c: // orphan
         if (w9 == 1)
         b.ne 0x801ebb8           // likely

    loc_0x0801eba4: // orphan
         x9 = x8 + 0x210
         [x9] = q12
         jmp 0x801ebb8

    loc_0x0801ebb0: // orphan
         x9 = x8 + 0x210
         q12 = [x9]               // 0xd0 // 208

    loc_0x0801ebb8: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801ebac
         w9 = (byte) [x8 + 0xd]   // 0xcf
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x801ebdc           // unlikely

    loc_0x0801ebc8: // orphan
         if (w9 == 1)
         b.ne 0x801ebe4           // likely

    loc_0x0801ebd0: // orphan
         x9 = x8 + 0x220
         [x9] = q13
         jmp 0x801ebe4

    loc_0x0801ebdc: // orphan
         x9 = x8 + 0x220
         q13 = [x9]               // 0xd0 // 208

    loc_0x0801ebe4: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801ebd8
         w9 = (byte) [x8 + 0xd]   // 0xcf
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x801ec08           // unlikely

    loc_0x0801ebf4: // orphan
         if (w9 == 1)
         b.ne 0x801ec10           // likely

    loc_0x0801ebfc: // orphan
         x9 = x8 + 0x230
         [x9] = q14
         jmp 0x801ec10

    loc_0x0801ec08: // orphan
         x9 = x8 + 0x230
         q14 = [x9]               // 0xd0 // 208

    loc_0x0801ec10: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801ec04
         w9 = (byte) [x8 + 0xd]   // 0xcf
         ubfx w9,w9,4, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x801ec34           // unlikely

    loc_0x0801ec20: // orphan
         if (w9 == 1)
         b.ne 0x801ec3c           // likely

    loc_0x0801ec28: // orphan
         x9 = x8 + 0x240
         [x9] = q15
         jmp 0x801ec3c

    loc_0x0801ec34: // orphan
         x9 = x8 + 0x240
         q15 = [x9]               // 0xd0 // 208

    loc_0x0801ec3c: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801ec30
         w9 = (byte) [x8 + 0xd]   // 0xcf
         w9 = w9 >> 6
         if (w9 == 2)
         b.eq 0x801ec60           // unlikely

    loc_0x0801ec4c: // orphan
         if (w9 == 1)
         b.ne 0x801ec68           // likely

    loc_0x0801ec54: // orphan
         x9 = x8 + 0x250
         [x9] = q16
         jmp 0x801ec68

    loc_0x0801ec60: // orphan
         x9 = x8 + 0x250
         q16 = [x9]               // 0xd0 // 208

    loc_0x0801ec68: // orphan
         // CODE XREF from sym.sample_hbp_handler_entry @ 0x801ec5c
         w9 = (byte) [x8 + 0xe]   // 0xcf
         w9 = w9 & 3
         if (w9 == 2)
         b.eq 0x801ec8c           // unlikely

    loc_0x0801ec78: // orphan
         if (w9 == 1)
         b.ne 0x801ec94           // likely

    loc_0x0801ec8c: // orphan
         x9 = x8 + 0x260
         q17 = [x9]               // 0xd0 // 208
         w9 = (byte) [x8 + 0xe]   // 0xcf
         ubfx w9,w9,2, 2          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 2)
         b.eq 0x801ecb8           // unlikely

}

/* ===== 0x0800e02c ===== */
int sym.work_trampoline_finish_task_switch (int esi, int edx) {
    loc_0x800e02c:
        x8 = 0x800e000
        x8 = [x8]     // 0xcf
        if !x8 jmp 0x800e05c // unlikely
            
    loc_0x800e05c:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0800e060
         // } else {
    loc_0x800e038:
        x8 = x0 - 0x20 // arg1
        if (x0 == 0)  // arg1
        x9 = [x0 + 0xf0] // 0xc7 // arg1
        csel x8,xzr,x8, eq
        [x0 + 0xf8] = x8 // arg1
        [x8] = x9
        x8 = 0x800e000
        x8 = x8 + 0
        [x0 + 0xf0] = x8 // arg1
        }
        return eax;
}

/* ===== 0x0800e068 ===== */
int sym.work_trampoline_breakpoint (int esi, int edx) {
    loc_0x800e068:
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
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        x8 = 0x800e000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800e590 // unlikely
            
    loc_0x800e590:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf
        ldur x9,[x29,-0x10]
        if (x8 == x9)
        b.ne 0x800e5cc // likely
            
    loc_0x800e5cc:
        0x800e5cc ()  // 0x800e5cc(0x0, 0x0, 0x0, 0x0)
        0x0800e5d0
         // } else {
    loc_0x800e5a4:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        sp = arg_2f0h
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x26, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800e5c8
         // } else {
        }
        return eax;
        goto loc_0x800e0a4
    loc_0x800e0c4:
        x21 = [x0 + 0x10] // 0xc7 // arg1
        w27 = 0x5030  // '0P'
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x26 = x8 + 0x20
        w27 = 0x3
        jmp 0x800e0ec
         // do {
    loc_0x800e0ec:
        // CODE XREF from sym.work_trampoline_breakpoint @ 0x800e0d8
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
        jmp 0x800e128
         // } while (?);
        }
        return eax;
    loc_0x0800e0dc: // orphan
             w8 = [x25]               // 0xe0 // 224
             w19 = w19 + 1
             if (w19 == w8)
             b.ge 0x800e590           // likely

    loc_0x0800e11c: // orphan
         x28 = x28 - 1
         x24 = x24 + x27
         b.eq 0x800e0dc           // unlikely

    loc_0x0800e128: // orphan
         // CODE XREF from sym.work_trampoline_breakpoint @ 0x800e118
         [sp, 0xd0] = (xzr,2)
         [var_c8h] = xzr
         if !x24 jmp 0x800e11c    // likely

    loc_0x0800e134: // orphan
         x8 = [x24 + 0x18]        // 0xdf
         if !x8 jmp 0x800e11c     // unlikely

    loc_0x0800e13c: // orphan
         x8 = [x24]               // 0xdf
         if !x8 jmp 0x800e11c     // unlikely

    loc_0x0800e144: // orphan
         x1 = var_c8h             // int64_t arg2
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.hw_breakpoint_parse () // sym.hw_breakpoint_parse(0x0, 0x1780c8)
         if w0 jmp 0x800e11c      // unlikely

    loc_0x0800e154: // orphan
         x8 = [var_c8h]           // 0x4
         if (x8 == x22)
         b.ne 0x800e11c           // unlikely

    loc_0x0800e160: // orphan
         x8 = [x21 + 0x100]       // 0xdc // 220
         x8 = x8 & 0xfffffffffffffffc
         if (x22 == x8)
         b.ne 0x800e11c           // unlikely

    loc_0x0800e170: // orphan
         tbz w23,0,0x800e11c      // likely

    loc_0x0800e174: // orphan
         w8 = [var_d8h]           // 0x4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 >> 0xe
         w11 = w8 >> 0x18
         w12 = w8 >> 0x1d
         ubfx w8,w8,0x1d, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w10 & 0x1fe0
         w11 = w11 & 0x18
         w10 = w10 | w11
         if (w8 == 1)
         bfi w10,w12,1, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ccmp x9,8,0, eq
         w8 = w10 | 0x2000
         csel w8,w8,w10, eq
         if (x20 == x8)
         b.ne 0x800e11c           // unlikely

    loc_0x0800e1b4: // orphan
         x8 = [x24]               // 0xdf // 223
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w16,[x8,-4]         // 0xcf
         w17 = 0xdd1f             // '\x1f\xdd'
         w17 = 0xd2b5             // '\xb5\xd2'
         if (w16 == w17)
         b.eq 0x800e1d8           // unlikely

    loc_0x0800e1d4: // orphan
         brk 0x8228

    loc_0x0800e1d8: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x0 = var_e0h             // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x200
         x24 = var_e0h
         0x800e1ec ()             // 0x800e1ec(0x1780e0, 0x0, 0x200, 0x0)
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
         sym.write_q_reg ()       // sym.write_q_reg(0x0)
         x1 = [var_c0h]           // 0x4 // 4
         w0 = 0x1
         sym.write_q_reg ()       // sym.write_q_reg(0x1)
         x1 = [var_b8h]           // 0x4 // 4
         w0 = 0x2
         sym.write_q_reg ()       // sym.write_q_reg(0x2)
         x1 = [var_b0h]           // 0x4 // 4
         w0 = 0x3
         sym.write_q_reg ()       // sym.write_q_reg(0x3)
         x1 = [var_a8h]           // 0x4 // 4
         w0 = 0x4
         sym.write_q_reg ()       // sym.write_q_reg(0x4)
         x1 = [var_a0h]           // 0x4 // 4
         w0 = 0x5
         sym.write_q_reg ()       // sym.write_q_reg(0x5)
         x1 = [var_98h]           // 0x4 // 4
         w0 = 0x6
         sym.write_q_reg ()       // sym.write_q_reg(0x6)
         x1 = [var_90h]           // 0x4 // 4
         w0 = 0x7
         sym.write_q_reg ()       // sym.write_q_reg(0x7)
         x1 = [var_88h]           // 0x4 // 4
         w0 = 0x8
         sym.write_q_reg ()       // sym.write_q_reg(0x8)
         x1 = [var_80h]           // 0x4 // 4
         w0 = 0x9
         sym.write_q_reg ()       // sym.write_q_reg(0x9)
         x1 = [var_78h]           // 0x4 // 4
         w0 = 0xa
         sym.write_q_reg ()       // sym.write_q_reg(0xa)
         x1 = [var_70h]           // 0x4 // 4
         w0 = 0xb
         sym.write_q_reg ()       // sym.write_q_reg(0xb)
         x1 = [var_68h]           // 0x4 // 4
         w0 = 0xc
         sym.write_q_reg ()       // sym.write_q_reg(0xc)
         x1 = [var_60h]           // 0x4 // 4
         w0 = 0xd
         sym.write_q_reg ()       // sym.write_q_reg(0xd)
         x1 = [var_58h]           // 0x4 // 4
         w0 = 0xe
         sym.write_q_reg ()       // sym.write_q_reg(0xe)
         x1 = [var_50h_2]         // 0x4 // 4
         w0 = 0xf
         sym.write_q_reg ()       // sym.write_q_reg(0xf)
         x1 = [var_48h]           // 4
         w0 = 0x10
         sym.write_q_reg ()       // sym.write_q_reg(0x10)
         x1 = [var_40h_2]         // 4
         w0 = 0x11
         sym.write_q_reg ()       // sym.write_q_reg(0x11)
         x1 = [var_38h]           // 0x4 // 4
         w0 = 0x12
         sym.write_q_reg ()       // sym.write_q_reg(0x12)
         x1 = [var_30h_2]         // 0x4 // 4
         w0 = 0x13
         sym.write_q_reg ()       // sym.write_q_reg(0x13)
         x1 = [var_28h]           // 0x4 // 4
         w0 = 0x14
         sym.write_q_reg ()       // sym.write_q_reg(0x14)
         x1 = [var_20h_2]         // 0x4 // 4
         w0 = 0x15
         sym.write_q_reg ()       // sym.write_q_reg(0x15)
         x1 = [var_18h]           // 0x4 // 4
         w0 = 0x16
         sym.write_q_reg ()       // sym.write_q_reg(0x16)
         x1 = [var_0h]            // 0x4 // 4
         w0 = 0x17
         sym.write_q_reg ()       // sym.write_q_reg(0x17)
         x1 = [var_8h]            // 0x4 // 4
         w0 = 0x18
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
         tbnz w21,0,0x800e590     // unlikely

    loc_0x0800e580: // orphan
         w0 = 0x10
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_wb_reg ()      // sym.write_wb_reg(0x10, 0x0)

}

/* ===== 0x0800ebd0 ===== */
int sym.read_q_reg (int esi, int edx) {
    loc_0x800ebd0:
        // XREFS(64)
        if (w0 == 0x1f) // arg1
        b.hi 0x800ebf8 // unlikely
            
    loc_0x800ebf8:
        0x0800ebf8
         // } else {
    loc_0x800ebd8:
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = 0x800e000
        x9 = x9 + 0
        x10 = 0x800ebe4
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x0800ecf4 ===== */
int sym.emulate_insn (int esi, int edx) {
    loc_0x800ecf4:
        // CALL XREF from sym.work_trampoline_breakpoint @ 0x800e3f4
        // CALL XREF from sym.work_trampoline_watchpoint @ 0x800ea2c
        hint 0x19
        sp = sp - 0xf0
        [sp, 0xa0] = (x29,2)
        [sp, 0xb0] = (x26,2)
        [sp, 0xc0] = (x24,2)
        [sp, 0xd0] = (x22,2)
        [sp, 0xe0] = (x20,2)
        x29 = var_a0h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x22 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x8 = [x8 + 0x620] // 0xcf // 207
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
        0x800ed5c ()  // 0x800ed5c(0x1, 0x177f18, 0x0, 0x0)
        w8 = [var_ch] // 0x4
        if w8 jmp 0x800f2a4 // unlikely
            
    loc_0x800f2a4:
        w23 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w4,w21,8, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w5,w21,0x10, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w6 = w21 >> 0x18
        w3 = w21 & 0xff
        x0 = 0x800f000
        x0 = x0 + 0   // int64_t arg1
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800f2c8 ()  // 0x800f2c8(0x800f000, 0x0, 0x0, 0x0)
        jmp fcn.08012394 // fcn.08012394(0x800f000, 0x0, 0x0, 0x0, -1, -1)
        // chop
         // do {
    loc_0x8012394:
        // CODE XREF from sym.emulate_insn @ 0x800f2cc
        msr pan,1     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8012450 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800ed68
    loc_0x800ed78:
        x9 = 0x800e000
        x9 = x9 + 0
        x10 = 0x800ed80
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
         // (break)
}

/* ===== 0x08012458 ===== */
int sym.write_q_reg (int esi, int edx) {
    loc_0x8012458:
        // XREFS(64)
        if (w0 == 0x1f) // arg1
        b.hi 0x8012480 // unlikely
            
    loc_0x8012480:
        // CODE XREF from sym.write_q_reg @ 0x801245c
        0x08012480
         // } else {
    loc_0x8012460:
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = 0x8012000
        x9 = x9 + 0
        x10 = 0x801246c
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x0800e5d4 ===== */
int sym.work_trampoline_watchpoint (int esi, int edx) {
    loc_0x800e5d4:
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
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        x8 = 0x800e000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800e630 // unlikely
            
    loc_0x800e630:
        // CODE XREF from sym.work_trampoline_watchpoint @ 0x800ebc8
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-0x10]
        if (x8 == x9)
        b.ne 0x800ebcc // likely
            
    loc_0x800ebcc:
        0x800ebcc ()  // sym.read_q_reg // 0x800ebcc(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x800ebd0:
        // XREFS(64)
        if (w0 == 0x1f) // arg1
        b.hi 0x800ebf8 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800e610
    loc_0x800e66c:
        (x9, 2) = 3   // arg1
        x11 = var_d0h
        x11 = var_e0h
        x12 = [x0 + 0x10] // 0xc7 // 199 // arg1
        w21 = 0x5030  // '0P'
        [var_c8h] = x11
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x28 = x8 + 0x20
        x11 = x9 << 8
        [var_b8h] = x12
        if ((x10 & 0x40) == 0)
        w10 = 0x1000
        w12 = 0x800   // loc.imp.memmove
        w21 = 0x3
        x27 = x9 & x11,asr 8
        csel w10,w12,w10, eq
        [var_c0h] = w10
        jmp 0x800e6c4
         // do {
    loc_0x800e6c4:
        // CODE XREF from sym.work_trampoline_watchpoint @ 0x800e6b0
        w0 = 0x20
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sym.read_wb_reg () // "(" // sym.read_wb_reg(0x20, 0x0)
        x22 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x30     // '0'
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sym.read_wb_reg () // "(" // sym.read_wb_reg(0x30, 0x0)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        tbz w20,0,0x800e6b4 // likely
         // } while (?);
        }
        return eax;
    loc_0x800e6e8:
        x26 = x20 & 0xfffffffffffffffe
        w25 = 0x10
        x23 = x28     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800e708
         // do {
    loc_0x800e708:
        // CODE XREF from sym.work_trampoline_watchpoint @ 0x800e6f4
        [sp, 0xd8] = (xzr,2)
        [var_d0h] = xzr
        if !x23 jmp 0x800e6fc // likely
         // } while (?);
        }
        return eax;
    loc_0x800e714:
        x8 = [x23 + 0x18] // 0xde // 222
        if !x8 jmp 0x800e6fc // unlikely
    loc_0x800e6fc:
        x25 = x25 - 1
        x23 = x23 + x21
        b.eq 0x800e6b4 // unlikely
    loc_0x800e6b4:
        w8 = [x24]    // 0xdf // 223
        w19 = w19 + 1
        if (w19 == w8)
        b.ge 0x800e630 // likely
        }
        return eax;
    loc_0x0800e6f8: // orphan
             // CODE XREF from sym.work_trampoline_watchpoint @ 0x800e7e4
             if !x8 jmp 0x800e7e8     // likely

    loc_0x0800e71c: // orphan
         x8 = [x23]               // 0xde // 222
         if !x8 jmp 0x800e6fc     // unlikely

    loc_0x0800e724: // orphan
         x1 = var_d0h             // int64_t arg2
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.hw_breakpoint_parse () // sym.hw_breakpoint_parse(0x0, 0x1780d0)
         if w0 jmp 0x800e6fc      // unlikely

    loc_0x0800e734: // orphan
         x8 = [var_d0h]           // 0x4 // 4
         if (x8 == x22)
         b.ne 0x800e6fc           // unlikely

    loc_0x0800e740: // orphan
         w8 = [var_e0h]           // 0x4 // 4
         mrs x9,currentel         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w8 >> 0xe
         w11 = w8 >> 0x18
         w12 = w8 >> 0x1d
         ubfx w8,w8,0x1d, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w10 & 0x1fe0
         w11 = w11 & 0x18
         w10 = w10 | w11
         if (w8 == 1)
         bfi w10,w12,1, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ccmp x9,8,0, eq
         w8 = w10 | 0x2000
         csel w8,w8,w10, eq
         if (x26 == x8)
         b.ne 0x800e6fc           // unlikely

    loc_0x0800e780: // orphan
         w8 = [var_e0h]           // 0x4 // 4
         if ((w8 & 0x18000000) == 0)
         b.eq 0x800e6fc           // unlikely

    loc_0x0800e78c: // orphan
         if ((w8 & 0x7f80000) == 0)
         b.eq 0x800e6fc           // unlikely

    loc_0x0800e794: // orphan
         x9 = [var_c8h]           // 0x4 // 4
         if !x9 jmp 0x800e6fc     // unlikely

    loc_0x0800e79c: // orphan
         w9 = [var_c0h]           // 0x4 // 4
         w9 = w8 & w9
         if !w9 jmp 0x800e6fc     // likely

    loc_0x0800e7a8: // orphan
         ubfx w9,w8,0x13, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         rbit w8,w9
         clz w8,w8
         x8 = x22 + x8
         x8 = x8 - x27
         b.hi 0x800e6f8           // unlikely

    loc_0x0800e7c0: // orphan
         clz w8,w9
         w10 = 0x1f               // tmp
         if (w9 == 0)
         w8 = w10 - w8
         w9 = 0x20
         csel w8,w9,w8, eq
         x8 = x22 + x8
         x8 = x27 - x8
         csel x8,xzr,x8, lo
         jmp 0x800e6f8

    loc_0x0800e7e8: // orphan
         x21 = [var_b8h]          // 0x4 // 4
         x8 = [x23]               // 0xde // 222
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xdd1f             // '\x1f\xdd'
         w17 = 0xd2b5             // '\xb5\xd2'
         if (w16 == w17)
         b.eq 0x800e810           // unlikely

    loc_0x0800e80c: // orphan
         brk 0x8228

    loc_0x0800e810: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x0 = var_d0h             // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x200
         x24 = var_d0h
         0x800e824 ()             // 0x800e824(0x1780d0, 0x0, 0x200, 0x0)
         x1 = var_d0h
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.read_q_reg ()        // sym.read_q_reg(0x0)
         x1 = var_e0h
         w0 = 0x1
         [var_c8h] = x1
         sym.read_q_reg ()        // sym.read_q_reg(0x1)
         x1 = var_20h_4
         w0 = 0x2
         [var_c0h] = x1
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
         sym.write_q_reg ()       // sym.write_q_reg(0x0)
         x1 = [var_c8h]           // 0x4 // 4
         w0 = 0x1
         sym.write_q_reg ()       // sym.write_q_reg(0x1)
         x1 = [var_c0h]           // 0x4 // 4
         w0 = 0x2
         sym.write_q_reg ()       // sym.write_q_reg(0x2)
         x1 = [var_b0h]           // 0x4 // 4
         w0 = 0x3
         sym.write_q_reg ()       // sym.write_q_reg(0x3)
         x1 = [var_a8h]           // 0x4 // 4
         w0 = 0x4
         sym.write_q_reg ()       // sym.write_q_reg(0x4)
         x1 = [var_a0h]           // 0x4 // 4
         w0 = 0x5
         sym.write_q_reg ()       // sym.write_q_reg(0x5)
         x1 = [var_98h]           // 0x4 // 4
         w0 = 0x6
         sym.write_q_reg ()       // sym.write_q_reg(0x6)
         x1 = [var_90h]           // 0x4 // 4
         w0 = 0x7
         sym.write_q_reg ()       // sym.write_q_reg(0x7)
         x1 = [var_88h]           // 0x4 // 4
         w0 = 0x8
         sym.write_q_reg ()       // sym.write_q_reg(0x8)
         x1 = [var_80h]           // 0x4 // 4
         w0 = 0x9
         sym.write_q_reg ()       // sym.write_q_reg(0x9)
         x1 = [var_78h]           // 0x4 // 4
         w0 = 0xa
         sym.write_q_reg ()       // sym.write_q_reg(0xa)
         x1 = [var_70h]           // 0x4 // 4
         w0 = 0xb
         sym.write_q_reg ()       // sym.write_q_reg(0xb)
         x1 = [var_68h]           // 0x4 // 4
         w0 = 0xc
         sym.write_q_reg ()       // sym.write_q_reg(0xc)
         x1 = [var_60h]           // 0x4 // 4
         w0 = 0xd
         sym.write_q_reg ()       // sym.write_q_reg(0xd)
         x1 = [var_58h]           // 0x4 // 4
         w0 = 0xe
         sym.write_q_reg ()       // sym.write_q_reg(0xe)
         x1 = [var_50h_2]         // 0x4 // 4
         w0 = 0xf
         sym.write_q_reg ()       // sym.write_q_reg(0xf)
         x1 = [var_48h]           // 4
         w0 = 0x10
         sym.write_q_reg ()       // sym.write_q_reg(0x10)
         x1 = [var_40h_2]         // 4
         w0 = 0x11
         sym.write_q_reg ()       // sym.write_q_reg(0x11)
         x1 = [var_38h]           // 0x4 // 4
         w0 = 0x12
         sym.write_q_reg ()       // sym.write_q_reg(0x12)
         x1 = [var_30h_2]         // 0x4 // 4
         w0 = 0x13
         sym.write_q_reg ()       // sym.write_q_reg(0x13)
         x1 = [var_28h]           // 0x4 // 4
         w0 = 0x14
         sym.write_q_reg ()       // sym.write_q_reg(0x14)
         x1 = [var_20h_2]         // 0x4 // 4
         w0 = 0x15
         sym.write_q_reg ()       // sym.write_q_reg(0x15)
         x1 = [var_18h]           // 0x4 // 4
         w0 = 0x16
         sym.write_q_reg ()       // sym.write_q_reg(0x16)
         x1 = [var_0h]            // 0x4 // 4
         w0 = 0x17
         sym.write_q_reg ()       // sym.write_q_reg(0x17)
         x1 = [var_8h]            // 0x4 // 4
         w0 = 0x18
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
         tbnz w21,0,0x800e630     // unlikely

    loc_0x0800ebb8: // orphan
         x2 = x20 & 0xfffffffffffffffe
         w0 = 0x30                // '0'
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.write_wb_reg ()      // sym.write_wb_reg(0x30, 0x0)
         jmp 0x800e630

}

/* ===== 0x0801257c ===== */
int sym.emu_simulate_fp_simd_insn (int esi, int edx) {
    loc_0x801257c:
        // CALL XREF from sym.emulate_insn @ +0x1d0
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
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        w11 = [x2 + 0x20] // 0xc9 // 201 // arg3
        w8 = w11 - 1
        if (w8 == 0x1f)
        b.hi 0x8014584 // likely
            
    loc_0x8014584:
        // XREFS(85)
        w0 = 0x1
        jmp 0x8015988
         // do {
    loc_0x8015988:
        // XREFS(61)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x801c37c // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0801599c: // orphan
             (x20, 2) = 3
             (x22, 2) = 3
             (x24, 2) = 3
             (x26, 2) = 3
             (x28, 2) = 3
             (x29, 2) = 3
             sp = arg_90h
             hint 0x1d
             

    loc_0x0801c37c: // orphan
         0x801c37c ()             // sym.emu_hw_load_fp // 0x801c37c(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0801c618 ===== */
int sym.emu_hw_store_pair_fp (int esi, int edx) {
    loc_0x801c618:
        // CALL XREF from sym.emulate_insn @ +0x1c28
        if (w1 == 4)  // arg2
        b.ne 0x801c638 // likely
            
    loc_0x801c638:
        if (w1 == 4)  // arg2
        b.ne 0x801c654 // likely
            
    loc_0x801c654:
        if (w1 == 8)  // arg2
        b.ne 0x801c674 // likely
            
    loc_0x801c674:
        if (w1 == 8)  // arg2
        b.ne 0x801c690 // likely
            
    loc_0x801c690:
        if (w1 == 0x10) // arg2
        b.ne 0x801c6b0 // likely
            
    loc_0x801c6b0:
        if (w1 == 0x10) // arg2
        b.ne 0x801c6cc // likely
            
    loc_0x801c6cc:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801c6d0
         // } else {
    loc_0x801c6b8:
        q0 = [x3]     // 0xca // 202 // arg4
        q1 = [x4]     // 0xcb // 203 // arg5
        [x0] = (q0,2) // arg1
        w0 = 0x1
        0x0801c6c8
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x801c620
    loc_0x801c624:
        q0 = [x3]     // 0xca // 202 // arg4
        q1 = [x4]     // 0xcb // 203 // arg5
        stnp s0,s1,[x0] // arg1
        w0 = 0x1
        0x0801c634
         // (break)
    loc_0x0801c660: // orphan
             q0 = [x3]                // 0xca // 202 // arg4
             q1 = [x4]                // 0xcb // 203 // arg5
             stnp d0,d1,[x0]          // arg1
             w0 = 0x1
             

    loc_0x0801c69c: // orphan
         q0 = [x3]                // 0xca // 202 // arg4
         q1 = [x4]                // 0xcb // 203 // arg5
         stnp q0,q1,[x0]          // arg1
         w0 = 0x1
         

}

/* ===== 0x0801c55c ===== */
int sym.emu_hw_load_pair_fp (int esi, int edx) {
    loc_0x801c55c:
        // CALL XREF from sym.emulate_insn @ +0x1c58
        if (w1 == 4)  // arg2
        b.ne 0x801c57c // likely
            
    loc_0x801c57c:
        if (w1 == 4)  // arg2
        b.ne 0x801c598 // likely
            
    loc_0x801c598:
        if (w1 == 8)  // arg2
        b.ne 0x801c5b8 // likely
            
    loc_0x801c5b8:
        if (w1 == 8)  // arg2
        b.ne 0x801c5d4 // likely
            
    loc_0x801c5d4:
        if (w1 == 0x10) // arg2
        b.ne 0x801c5f4 // likely
            
    loc_0x801c5f4:
        if (w1 == 0x10) // arg2
        b.ne 0x801c610 // likely
            
    loc_0x801c610:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801c614
         // } else {
    loc_0x801c5fc:
        (q0, 2) = 3   // arg1
        [x3] = q0     // arg4
        [x4] = q1     // arg5
        w0 = 0x1
        0x0801c60c
         // } else {
         // } else {
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x801c564
    loc_0x801c568:
        ldnp s0,s1,[x0] // arg1
        [x3] = q0     // arg4
        [x4] = q1     // arg5
        w0 = 0x1
        0x0801c578
         // (break)
    loc_0x0801c5a4: // orphan
             ldnp d0,d1,[x0]          // arg1
             [x3] = q0                // arg4
             [x4] = q1                // arg5
             w0 = 0x1
             

    loc_0x0801c5e0: // orphan
         ldnp q0,q1,[x0]          // arg1
         [x3] = q0                // arg4
         [x4] = q1                // arg5
         w0 = 0x1
         

}

/* ===== 0x0801c6d4 ===== */
int sym.emu_hw_store_pair_gpr (int esi, int edx) {
    loc_0x801c6d4:
        // CALL XREF from sym.emulate_insn @ +0x1df4
        if (w1 == 4)  // arg2
        b.ne 0x801c6ec // likely
            
    loc_0x801c6ec:
        if (w1 == 4)  // arg2
        b.ne 0x801c700 // likely
            
    loc_0x801c700:
        if (w1 == 8)  // arg2
        b.ne 0x801c718 // likely
            
    loc_0x801c718:
        if (w1 == 8)  // arg2
        b.ne 0x801c72c // likely
            
    loc_0x801c72c:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801c730
         // } else {
    loc_0x801c720:
        [x0] = (x3,2) // arg5
        w0 = 0x1
        0x0801c728
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x801c6dc
    loc_0x801c6e0:
        stnp w3,w4,[x0] // arg5
        w0 = 0x1
        0x0801c6e8
         // (break)
    loc_0x0801c70c: // orphan
             stnp x3,x4,[x0]          // arg5
             w0 = 0x1
             

}

/* ===== 0x0801c3ec ===== */
int sym.emu_hw_load_gpr (int esi, int edx) {
    loc_0x801c3ec:
        // CALL XREF from sym.emulate_insn @ +0x2994
        if (w1 == 1)  // arg2
        w8 = w2 ^ 1   // arg3
        cset w9,ne
        w10 = w9 | w8
        w9 = w4 ^ 1   // arg5
        w11 = w10 | w9
        tbz w3,0,0x801c450 // likely
            
    loc_0x801c450:
        tbz w11,0,0x801c4a0 // likely
            
    loc_0x801c4a0:
        x8 = (byte) [x0] // 0xc7 // 199 // arg1
        jmp 0x801c4f4
         // do {
    loc_0x801c4f4:
        // XREFS: CODE 0x0801c44c  CODE 0x0801c494  CODE 0x0801c49c
        // XREFS: CODE 0x0801c4a4  CODE 0x0801c4ac  CODE 0x0801c4b4
        // XREFS: CODE 0x0801c4bc  CODE 0x0801c4c4  CODE 0x0801c4cc
        // XREFS: CODE 0x0801c4d4  CODE 0x0801c4dc  CODE 0x0801c4e4
        // XREFS: CODE 0x0801c4ec  CODE 0x0801c514  CODE 0x0801c528
        // XREFS: CODE 0x0801c540  CODE 0x0801c558
        [x5] = x8     // arg6
        w8 = 0x1
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801c408
    loc_0x801c40c:
        tbz w10,0,0x801c4a8 // likely
            
    loc_0x801c4a8:
        ldtrsb w8,[x0]
        jmp 0x801c4f4
    loc_0x0801c410: // orphan
             if (w1 == 1)             // arg2
             b.eq 0x801c4b8           // unlikely

    loc_0x0801c418: // orphan
         if (w1 == 2)             // arg2
         cset w10,ne
         w8 = w10 | w8
         w9 = w8 | w9
         tbz w9,0,0x801c4c8       // unlikely

    loc_0x0801c42c: // orphan
         tbz w8,0,0x801c4d8       // likely

    loc_0x0801c430: // orphan
         if (w1 == 2)             // arg2
         b.eq 0x801c4e8           // unlikely

    loc_0x0801c438: // orphan
         if (w1 == 4)             // arg2
         b.ne 0x801c504           // likely

    loc_0x0801c440: // orphan
         tbz w2,0,0x801c504       // likely

    loc_0x0801c444: // orphan
         tbz w4,0,0x801c504       // likely

    loc_0x0801c448: // orphan
         ldtrsw x8,[x0]
         jmp 0x801c4f4

    loc_0x0801c458: // orphan
         if (w1 == 1)             // arg2
         b.eq 0x801c4c0           // unlikely

    loc_0x0801c460: // orphan
         if (w1 == 2)             // arg2
         cset w10,ne
         w8 = w10 | w8
         w9 = w8 | w9
         tbz w9,0,0x801c4d0       // unlikely

    loc_0x0801c474: // orphan
         tbz w8,0,0x801c4e0       // likely

    loc_0x0801c478: // orphan
         if (w1 == 2)             // arg2
         b.eq 0x801c4f0           // unlikely

    loc_0x0801c480: // orphan
         if (w1 == 4)             // arg2
         b.ne 0x801c518           // likely

    loc_0x0801c488: // orphan
         tbz w2,0,0x801c518       // likely

    loc_0x0801c48c: // orphan
         tbz w4,0,0x801c518       // likely

    loc_0x0801c490: // orphan
         x8 = [x0]                // 0xc7 // 199 // arg1
         jmp 0x801c4f4

    loc_0x0801c498: // orphan
         ldtrsb x8,[x0]
         jmp 0x801c4f4

    loc_0x0801c4b0: // orphan
         w8 = (byte) [x0]         // 0xc7 // 199 // arg1
         jmp 0x801c4f4

    loc_0x0801c4b8: // orphan
         ldtrb w8,[x0]
         jmp 0x801c4f4

    loc_0x0801c4c0: // orphan
         w8 = (byte) [x0]         // 0xc7 // 199 // arg1
         jmp 0x801c4f4

    loc_0x0801c4c8: // orphan
         ldtrsh x8,[x0]
         jmp 0x801c4f4

    loc_0x0801c4d0: // orphan
         ldrsh x8,[x0]            // 0xc7 // 199 // arg1
         jmp 0x801c4f4

    loc_0x0801c4d8: // orphan
         ldtrsh w8,[x0]
         jmp 0x801c4f4

    loc_0x0801c4e0: // orphan
         ldrsh w8,[x0]            // 0xc7 // 199 // arg1
         jmp 0x801c4f4

    loc_0x0801c4e8: // orphan
         ldtrh w8,[x0]
         jmp 0x801c4f4

    loc_0x0801c4f0: // orphan
         w8 = (word) [x0]         // 0xc7 // 199 // arg1

    loc_0x0801c4fc: // orphan
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x0801c504: // orphan
         if (w1 == 4)             // arg2
         b.ne 0x801c52c           // likely

    loc_0x0801c50c: // orphan
         tbnz w2,0,0x801c52c      // unlikely

    loc_0x0801c510: // orphan
         ldtr w8,[x0]
         jmp 0x801c4f4

    loc_0x0801c518: // orphan
         if (w1 == 4)             // arg2
         b.ne 0x801c544           // likely

    loc_0x0801c520: // orphan
         tbnz w2,0,0x801c544      // unlikely

    loc_0x0801c524: // orphan
         w8 = [x0]                // 0xc7 // 199 // arg1
         jmp 0x801c4f4

    loc_0x0801c52c: // orphan
         if (w1 == 8)             // arg2
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         b.ne 0x801c4fc           // likely

    loc_0x0801c538: // orphan
         tbnz w2,0,0x801c4fc      // unlikely

    loc_0x0801c53c: // orphan
         ldtr x8,[x0]
         jmp 0x801c4f4

    loc_0x0801c544: // orphan
         if (w1 == 8)             // arg2
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         b.ne 0x801c4fc           // likely

    loc_0x0801c550: // orphan
         tbnz w2,0,0x801c4fc      // unlikely

    loc_0x0801c554: // orphan
         x8 = [x0]                // 0xc7 // 199 // arg1
         jmp 0x801c4f4

}

/* ===== 0x0801c734 ===== */
int sym.emu_hw_store_fp (int esi, int edx) {
    loc_0x801c734:
        // CALL XREF from sym.emulate_insn @ +0x29d0
        w9 = w1 - 1   // arg2
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 0xf)
        b.hi 0x801c79c // likely
            
    loc_0x801c79c:
        0x0801c79c
         // } else {
    loc_0x801c748:
        x10 = 0x801c000
        x10 = x10 + 0
        x11 = 0x801c750
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
        }
        return eax;
}

/* ===== 0x0801c380 ===== */
int sym.emu_hw_load_fp (int esi, int edx) {
    loc_0x801c380:
        // CALL XREF from sym.emulate_insn @ +0x29ec
        w9 = w1 - 1   // arg2
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 0xf)
        b.hi 0x801c3e8 // likely
            
    loc_0x801c3e8:
        0x0801c3e8
         // } else {
    loc_0x801c394:
        x10 = 0x801c000
        x10 = x10 + 0
        x11 = 0x801c39c
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
        }
        return eax;
}

/* ===== 0x0801c7a0 ===== */
int sym.emu_hw_store_gpr (int esi, int edx) {
    loc_0x801c7a0:
        // CALL XREF from sym.emulate_insn @ +0x2a04
        w9 = w1 - 1   // arg2
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 7)
        tbz w2,0,0x801c7d8 // likely
            
    loc_0x801c7d8:
        b.hi 0x801c82c // unlikely
            
    loc_0x801c82c:
        0x0801c82c
         // } else {
    loc_0x801c7dc:
        x10 = 0x801c000
        x10 = x10 + 0
        x11 = 0x801c7e4
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // } else {
        }
        return eax;
        goto loc_0x801c7b4
    loc_0x801c7b8:
        x10 = 0x801c000
        x10 = x10 + 0
        x11 = 0x801c7c0
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // (break)
}

/* ===== 0x0801dd14 ===== */
int sym.emu_fp16_scalar_2source_hw (int esi, int edx) {
    loc_0x801dd14:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x210
        w8 = w0 - 1   // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w8 == 9)
        b.hi 0x801ddf0 // likely
            
    loc_0x801ddf0:
        0x0801ddf0
         // } else {
    loc_0x801dd24:
        x9 = 0x801d000
        x9 = x9 + 0   // "`"
        x10 = 0x801dd2c
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x0801ddf4 ===== */
int sym.emu_fp16_scalar_1source_hw (int esi, int edx) {
    loc_0x801ddf4:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x26c
        w8 = w0 - 0xb // arg1
        if (w8 == 4)
        b.hi 0x801de80 // likely
            
    loc_0x801de80:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801de84
         // } else {
    loc_0x801de00:
        x9 = 0x801d000
        x9 = x9 + 0   // "`"
        x10 = 0x801de08
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x0801df48 ===== */
int sym.emu_fp16_scalar_3source_hw (int esi, int edx) {
    loc_0x801df48:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x2e8
        w8 = w0 - 0x14 // arg1
        if (w8 == 3)
        b.hi 0x801df88 // likely
            
    loc_0x801df88:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801df8c
         // } else {
    loc_0x801df54:
        x9 = 0x801d000
        x9 = x9 + 0   // "`"
        x10 = 0x801df5c
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x0801da7c ===== */
int sym.emu_simd_ext_hw (int esi, int edx) {
    loc_0x801da7c:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x500
        if (w3 == 0x40) // arg4
        b.ne 0x801dac0 // likely
            
    loc_0x801dac0:
        if (w4 == 0xf) // arg5
        b.hi 0x801dafc // unlikely
            
    loc_0x801dafc:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801db00
         // } else {
    loc_0x801dac8:
        w8 = w4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg5
        x9 = 0x801d000
        x9 = x9 + 0   // "`"
        x10 = 0x801dad4
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
         // } else {
        }
        return eax;
        goto loc_0x801da84
    loc_0x801da8c:
        w8 = w4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg5
        x9 = 0x801d000
        x9 = x9 + 0   // "`"
        x10 = 0x801da98
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
         // (break)
}

/* ===== 0x0801d5fc ===== */
int sym.emu_simd_vector_3same_extra_hw (int esi, int edx) {
    loc_0x801d5fc:
        // CALL XREFS from sym.emu_simulate_fp_simd_insn @ +0x814, +0x4ba4
        w8 = w0 - 0x7e // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w8 == 0xb)
        b.hi 0x801da78 // likely
            
    loc_0x801da78:
        0x0801da78
         // } else {
    loc_0x801d60c:
        x9 = 0x801d000
        x9 = x9 + 0   // "`"
        x10 = 0x801d614
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
        }
        return eax;
}

/* ===== 0x0801c830 ===== */
int sym.emu_simd_extract_lane_hw (int esi, int edx) {
    loc_0x801c830:
        // CALL XREFS from sym.emu_simulate_fp_simd_insn @ +0xae0, +0x12c4, +0x17a8, +0x1800, +0x1838
        if !x3 jmp 0x801c89c // likely
            
    loc_0x801c89c:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801c8a0
         // } else {
    loc_0x801c834:
        w8 = w1 - 8   // arg2
        extr w9,w1,w8, 3
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 7)
        b.hi 0x801c8b0 // likely
        }
        return eax;
    loc_0x801c848:
        x10 = 0x801c000
        x10 = x10 + 0
        x11 = 0x801c850
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // (break)
    loc_0x0801c8b0: // orphan
             w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             

}

/* ===== 0x0801c8b8 ===== */
int sym.emu_simd_write_scalar_hw (int esi, int edx) {
    loc_0x801c8b8:
        // CALL XREFS from sym.emu_simulate_fp_simd_insn @ +0xb00, +0x11f0, +0x4b50
        w8 = w2 - 8   // arg3
        extr w8,w2,w8, 3
        if (w8 == 2)
        b.lo 0x801c8d8 // unlikely
            
    loc_0x801c8d8:
        s0 = w1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x0] = q0     // arg1
        w0 = 0x1
        0x0801c8e4
         // } else {
    loc_0x801c8c8:
        if (w8 == 7)
        b.eq 0x801c8e8 // unlikely
        }
        return eax;
    loc_0x801c8d0:
        if (w8 == 3)
        b.ne 0x801c8f8 // likely
            
    loc_0x801c8f8:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801c8fc
         // } else {
        }
        return eax;
    loc_0x0801c8e8: // orphan
             d0 = x1                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
             [x0] = q0                // arg1
             w0 = 0x1
             

}

/* ===== 0x0801caec ===== */
int sym.emu_simd_fhm_by_element_hw (int esi, int edx) {
    loc_0x801caec:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0xb64
        hint 0x19
        sp = sp - 0x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = [x9 + 0x620] // 0xd0 // 208
        if (w4 == 0x10) // arg5
        [x29 = x9
        b.ne 0x801cc88 // likely
            
    loc_0x801cc88:
        // CODE XREF from sym.emu_simd_fhm_by_element_hw @ 0x801cc14
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x801ccac // likely
            
    loc_0x801ccac:
        0x801ccac ()  // sym.emu_simd_fcma_by_element_hw // 0x801ccac(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x801ccb0:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0xe94
        hint 0x19
        sp = sp - 0x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h_2
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        [sp] = (xzr,2)
        mrs x8,id_aa64isar1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf0000) == 0)
        b.eq 0x801ce80 // unlikely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801cb18
    loc_0x801cb20:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w7 == 7)  // arg8
        [sp] = (xzr,2)
        mrs x9,id_aa64isar0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        b.hi 0x801cc88 // unlikely
    loc_0x801cb34:
        x9 = x9 & 0xf000000000000
        if !x9 jmp 0x801cc88 // likely
    loc_0x801cb3c:
        w9 = (word) [x3 + w7,uxtw 1] // 0xaf000000ca // 751619277002 // arg4
        x10 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w8 == 0x13)
        s0 = w9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x10] = q0    // sp
        w9 = [var_10h] // [0x178000:4]=0
        // sp
        b.eq 0x801cb90 // unlikely
            
    loc_0x801cb90:
        if (w6 == 0x80) // arg7
        tbnz w9,1,0x801cbe8 // unlikely
            
    loc_0x801cbe8:
        b.eq 0x801cc6c // unlikely
            
    loc_0x801cc6c:
        x8 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        q0 = [x1]     // 0xc8 // 200 // arg2
        q1 = [x2]     // 0xc9 // 201 // arg3
        q2 = [x8]     // 0xcf // 207 // sp
        0x0801cc7c
         // } else {
    loc_0x801cbec:
        if (w6 == 0x40)
        b.ne 0x801cc10 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801cb58
    loc_0x801cb60:
        if (w6 == 0x80)
        tbnz w9,1,0x801cbc0 // unlikely
            
    loc_0x801cbc0:
        b.eq 0x801cc50 // unlikely
            
    loc_0x801cc50:
        x8 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        q0 = [x1]     // 0xc8 // 200
        q1 = [x2]     // 0xc9 // 201
        q2 = [x8]     // 0xcf // 207 // sp
        0x0801cc60
         // } else {
    loc_0x801cbc4:
        if (w6 == 0x40)
        b.ne 0x801cc10 // likely
         // } while (?);
        }
        return eax;
        goto loc_0x801cb68
    loc_0x801cb6c:
        if (w6 == 0x40)
        b.ne 0x801cc10 // likely
            
    loc_0x801cc10:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x801cc88
    loc_0x0801cb74: // orphan
             x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             q0 = [x1]                // 0xc8 // 200
             q1 = [x2]                // 0xc9 // 201
             q2 = [x8]                // 0xcf // 207 // sp
             

    loc_0x0801cb9c: // orphan
         if (w6 == 0x40)
         b.ne 0x801cc10           // likely

    loc_0x0801cba4: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

    loc_0x0801cbcc: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

    loc_0x0801cbf4: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

    loc_0x0801cc18: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

    loc_0x0801cc34: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         q0 = [x1]                // 0xc8 // 200
         q1 = [x2]                // 0xc9 // 201
         q2 = [x8]                // 0xcf // 207 // sp
         

}

/* ===== 0x0801ccb0 ===== */
int sym.emu_simd_fcma_by_element_hw (int esi, int edx) {
    loc_0x801ccb0:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0xe94
        hint 0x19
        sp = sp - 0x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h_2
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        [sp] = (xzr,2)
        mrs x8,id_aa64isar1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf0000) == 0)
        b.eq 0x801ce80 // unlikely
            
    loc_0x801ce80:
        // CODE XREF from sym.emu_simd_fcma_by_element_hw @ 0x801ccf4
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x801ce84:
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = [x9 + 0x620] // 0xd0 // 208
        ldur x10,[x29,-8]
        if (x9 == x10)
        b.ne 0x801cfac // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801ccdc
    loc_0x801cce4:
        mrs x8,id_aa64pfr0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x8 & 0xf00000
        if (x8 == 0x100)
        b.eq 0x801cd00 // unlikely
            
    loc_0x801cd00:
        w8 = w3 << 1  // arg4
        w9 = w8 - 8
        extr w9,w8,w9, 3
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 7)
        b.hi 0x801ce84 // likely
    loc_0x801cd18:
        x10 = 0x801c000
        x10 = x10 + 0
        x11 = 0x801cd20
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // } else {
    loc_0x801ccf4:
        jmp 0x801ce80
        }
        return eax;
    loc_0x0801ccf8: // orphan
             if (w3 == 0x20)          // arg4
             b.ne 0x801ce80           // likely

    loc_0x0801ce98: // orphan
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x29, 2) = 3
         sp = arg_30h
         hint 0x1d
         

    loc_0x0801cfac: // orphan
         0x801cfac ()             // sym.emu_simd_fp_by_element_hw // 0x801cfac(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0801cfb0 ===== */
int sym.emu_simd_fp_by_element_hw (int esi, int edx) {
    loc_0x801cfb0:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x12fc
        hint 0x19
        sp = sp - 0x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h_3
        mrs x9,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = [x9 + 0x620] // 0xd0 // 208
        if (w5 == w4) // arg6
        [x29 = x9
        [sp] = (xzr,2)
        b.ne 0x801d064 // unlikely
            
    loc_0x801d064:
        if (w5 == 0x40) // arg6
        b.ne 0x801d0a0 // likely
            
    loc_0x801d0a0:
        w9 = w4 - 8   // arg5
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        extr w9,w4,w9, 3
        if (w9 == 7)
        b.hi 0x801d5d4 // likely
            
    loc_0x801d5d4:
        // CODE XREFS from sym.emu_simd_fp_by_element_hw @ 0x801d094, 0x801d09c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x801d5f8 // likely
            
    loc_0x801d5f8:
        0x801d5f8 ()  // sym.emu_simd_vector_3same_extra_hw // 0x801d5f8(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x801d5fc:
        // CALL XREFS from sym.emu_simulate_fp_simd_insn @ +0x814, +0x4ba4
        w8 = w0 - 0x7e // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w8 == 0xb)
        b.hi 0x801da78 // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801cfdc
    loc_0x801cfec:
        if (w9 == 7)
        b.eq 0x801d0e4 // unlikely
            
    loc_0x801d0e4:
        x9 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        d0 = x3       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        [x9] = q0     // sp
        if (w5 == 0x40) // arg6
        b.ne 0x801d010 // likely
            
    loc_0x801d010:
        if (w5 == 0x20) // arg6
        b.eq 0x801d138 // unlikely
            
    loc_0x801d138:
        w8 = w8 - 1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w8 == 0x10)
        b.hi 0x801d5d4 // likely
    loc_0x801d148:
        x9 = 0x801d000
        x9 = x9 + 0   // "`"
        x10 = 0x801d150
        x11 = [x9 + x8,lsl 2] // 0xcf000000d0 // 889058230480
        x10 = x10 + x11
        br x10
         // } else {
    loc_0x801d018:
        if (w5 == 0x10) // arg6
        b.ne 0x801d098 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801cff4
    loc_0x801cffc:
        x9 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // XREFS(24)
        s0 = w3       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        [x9] = q0     // sp
        if (w5 == 0x40) // arg6
        b.eq 0x801d0f8 // unlikely
        }
        return eax;
    loc_0x0801d020: // orphan
             w8 = w8 - 1
             w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             if (w8 == 0x10)
             b.hi 0x801d5d4           // likely

    loc_0x0801d030: // orphan
         x9 = 0x801d000
         x9 = x9 + 0              // "`"
         x10 = 0x801d038
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

    loc_0x0801d074: // orphan
         if (w4 == 0x10)          // arg5
         b.eq 0x801d1c4           // unlikely

    loc_0x0801d07c: // orphan
         if (w4 == 8)             // arg5
         b.ne 0x801d098           // likely

    loc_0x0801d084: // orphan
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         dup v0.8b,w3             // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         [x8] = q0                // sp
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x801d5d4

    loc_0x0801d098: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         jmp 0x801d5d4

    loc_0x0801d108: // orphan
         x9 = 0x801d000
         x9 = x9 + 0              // "`"
         x10 = 0x801d110
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

    loc_0x0801d178: // orphan
         x9 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         dup v0.2s,w3             // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         [x9] = q0                // sp
         w8 = w8 - 1
         if (w8 == 0x10)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         b.hi 0x801d5d4           // likely

    loc_0x0801d194: // orphan
         x9 = 0x801d000
         x9 = x9 + 0              // "`"
         x10 = 0x801d19c
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

    loc_0x0801d1c4: // orphan
         x9 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         dup v0.4h,w3             // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
         [x9] = q0                // sp
         w8 = w8 - 1
         if (w8 == 0x10)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         b.hi 0x801d5d4           // likely

    loc_0x0801d1e0: // orphan
         x9 = 0x801d000
         x9 = x9 + 0              // "`"
         x10 = 0x801d1e8
         x11 = [x9 + x8,lsl 2]    // 0xcf000000d0 // 889058230480
         x10 = x10 + x11
         br x10

}

/* ===== 0x0801ca44 ===== */
int sym.emu_simd_extract_signed_lane_hw (int esi, int edx) {
    loc_0x801ca44:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x186c
        if !x4 jmp 0x801cabc // likely
            
    loc_0x801cabc:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801cac0
         // } else {
    loc_0x801ca48:
        tbz w3,0,0x801ca74 // likely
        }
        return eax;
    loc_0x801ca4c:
        if (w1 == 0x20) // arg2
        b.eq 0x801caa4 // unlikely
            
    loc_0x801caa4:
        if (w2 == 3)  // arg3
        b.hi 0x801cabc // unlikely
    loc_0x801caac:
        x8 = [x0 + w2,uxtw 2] // 0xaa000000c7 // 730144440519 // arg1
        jmp 0x801cae0
         // do {
    loc_0x801cae0:
        // CODE XREFS from sym.emu_simd_extract_signed_lane_hw @ 0x801ca70, 0x801cab0, 0x801cacc, 0x801cad8
        w0 = 0x1
        [x4] = x8     // arg5
        0x0801cae8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801ca54
    loc_0x801ca5c:
        if (w1 == 8)  // arg2
        b.ne 0x801cabc // likely
    loc_0x801ca64:
        if (w2 == 0xf) // arg3
        b.hi 0x801cabc // unlikely
    loc_0x801ca6c:
        x8 = (byte) [x0 + w2,uxtw] // 0xaa000000c7 // 730144440519 // arg1
        jmp 0x801cae0
    loc_0x0801ca74: // orphan
             if (w1 == 0x10)          // arg2
             b.eq 0x801ca94           // unlikely

    loc_0x0801ca7c: // orphan
         if (w1 == 8)             // arg2
         b.ne 0x801cabc           // likely

    loc_0x0801ca84: // orphan
         if (w2 == 0xf)           // arg3
         b.ls 0x801cac4           // likely

    loc_0x0801ca8c: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         

    loc_0x0801ca94: // orphan
         if (w2 == 7)             // arg3
         b.ls 0x801cad0           // likely

    loc_0x0801ca9c: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         

    loc_0x0801cab4: // orphan
         if (w2 == 7)             // arg3
         b.ls 0x801cadc           // likely

    loc_0x0801cac4: // orphan
         w8 = (byte) [x0 + w2,uxtw] // 0xaa000000c7 // 730144440519 // arg1
         w8 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801cae0

    loc_0x0801cad0: // orphan
         ldrsh w8,[x0,w2, uxtw 1] // 0xaa000000c7 // 730144440519 // arg1
         w8 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801cae0

    loc_0x0801cadc: // orphan
         ldrsh x8,[x0,w2, uxtw 1] // 0xaa000000c7 // 730144440519 // arg1

}

/* ===== 0x0801c900 ===== */
int sym.emu_simd_dup_general_hw (int esi, int edx) {
    loc_0x801c900:
        // CALL XREFS from sym.emu_simulate_fp_simd_insn @ +0x1fa0, +0x4b7c
        if (w3 == 0x40) // arg4
        b.ne 0x801c92c // likely
            
    loc_0x801c92c:
        w8 = w2 - 8   // arg3
        extr w9,w2,w8, 3
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 7)
        b.hi 0x801c9a8 // likely
            
    loc_0x801c9a8:
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x0801c9ac
         // } else {
    loc_0x801c940:
        x10 = 0x801c000
        x10 = x10 + 0
        x11 = 0x801c948
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
         // } else {
        }
        return eax;
        goto loc_0x801c908
    loc_0x801c910:
        if (w2 == 0x10) // arg3
        b.eq 0x801c970 // unlikely
            
    loc_0x801c970:
        dup v0.4h,w1  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x0] = q0     // arg1
        jmp 0x801c9a4
         // do {
    loc_0x801c9a4:
        // CODE XREFS from sym.emu_simd_dup_general_hw @ 0x801c928, 0x801c96c, 0x801c978
        w8 = 0x1
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801c918
    loc_0x801c920:
        dup v0.8b,w1  // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x0] = q0     // arg1
        jmp 0x801c9a4
    loc_0x0801c964: // orphan
             dup v0.2s,w1             // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
             [x0] = q0                // arg1
             jmp 0x801c9a4

    loc_0x0801c97c: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         

}

/* ===== 0x0801c9b0 ===== */
int sym.emu_simd_insert_general_hw (int esi, int edx) {
    loc_0x801c9b0:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x2000
        w8 = w2 - 8   // arg3
        extr w9,w2,w8, 3
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w9 == 7)
        b.hi 0x801ca3c // likely
            
    loc_0x801ca3c:
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x0801ca40
         // } else {
    loc_0x801c9c4:
        x10 = 0x801c000
        x10 = x10 + 0
        x11 = 0x801c9cc
        x12 = [x10 + x9,lsl 2] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12
        br x11
        }
        return eax;
}

/* ===== 0x0801dfe4 ===== */
int sym.emu_simd_scalar_rdm_hw (int esi, int edx) {
    loc_0x801dfe4:
        // CALL XREF from sym.emu_simulate_fp_simd_insn @ +0x4b6c
        mrs x8,id_aa64isar0_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf0000000) == 0)
        b.eq 0x801e08c // unlikely
            
    loc_0x801e08c:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801e090
         // } else {
    loc_0x801dff0:
        if (w0 == 0x7f) // arg1
        b.eq 0x801e014 // unlikely
        }
        return eax;
    loc_0x801dff8:
        if (w0 == 0x7e) // arg1
        b.ne 0x801e08c // likely
    loc_0x801e000:
        // STRING XREFS from sym._copy_from_user_2 @ 0x801e1fc, 0x801e20c
        // STRING XREFS from sym._copy_to_user_2 @ 0x801efc0, 0x801efd0
        w8 = 0x8420   // ' \x84'
        if (w4 == 0x10) // arg5
        w8 = 0x7e42   // 'B~'
        w9 = w8 + 0x400,lsl 12
        jmp 0x801e02c
         // do {
    loc_0x801e02c:
        // CODE XREF from sym.emu_simd_scalar_rdm_hw @ 0x801e010
        csel w8,w8,w9, eq
        if (w4 == 0x20) // arg5
        b.eq 0x801e040 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x801e038:
        if (w4 == 0x10) // arg5
        b.ne 0x801e08c // likely
    loc_0x801e040:
        w9 = 0x841f   // '\x1f\x84'
        w0 = 0x1
        w9 = 0x7e82   // '\x82~'
        if (w8 == w9)
        jmp ifgt 0x801e094 // unlikely
            
    loc_0x801e094:
        w9 = 0x8420   // ' \x84'
        w9 = 0x7e82   // '\x82~'
        if (w8 == w9)
        b.eq 0x801e0e4 // unlikely
            
    loc_0x801e0e4:
        q0 = [x1]     // 0xc8 // 200 // arg2
        q1 = [x2]     // 0xc9 // 201 // arg3
        q2 = [x3]     // 0xca // 202 // arg4
        0x0801e0f0
         // } else {
    loc_0x801e0a4:
        w9 = 0x8c20   // ' \x8c'
        w9 = 0x7e82   // '\x82~'
        if (w8 == w9)
        b.ne 0x801e0f8 // likely
         // } while (?);
        }
        return eax;
        goto loc_0x801e054
    loc_0x801e064:
        w9 = 0x8c20   // ' \x8c'
        w9 = 0x7e42   // 'B~'
        if (w8 == w9)
        b.ne 0x801e0f8 // likely
            
    loc_0x801e0f8:
        0x0801e0f8
         // } else {
    loc_0x801e074:
        q0 = [x1]     // 0xc8 // 200 // arg2
        q1 = [x2]     // 0xc9 // 201 // arg3
        q2 = [x3]     // 0xca // 202 // arg4
        0x0801e080
        }
        return eax;
    loc_0x0801e014: // orphan
             w8 = 0x8420              // ' \x84'
             w9 = 0x8c20              // ' \x8c'
             if (w4 == 0x10)          // arg5
             w8 = 0x7e42              // 'B~'
             w9 = 0x7e82              // '\x82~'
             w8 = w8 | 0x800

    loc_0x0801e0b4: // orphan
         q0 = [x1]                // 0xc8 // 200 // arg2
         q1 = [x2]                // 0xc9 // 201 // arg3
         q2 = [x3]                // 0xca // 202 // arg4
         

    loc_0x0801e0cc: // orphan
         q0 = [x1]                // 0xc8 // 200 // arg2
         q1 = [x2]                // 0xc9 // 201 // arg3
         q2 = [x3]                // 0xca // 202 // arg4
         

}

/* ===== 0x0801f590 ===== */
int sym.arm64_decode_bit_masks (int esi, int edx) {
    loc_0x801f590:
        // CALL XREFS from sym.arm64_decode_data_processing_immediate @ 0x801f2f8, 0x801f498
        w8 = w2 & 0x3f // arg3
        bfi w8,w0,6, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 ^ 0x3f
        if !w8 jmp 0x801f5e0 // unlikely
            
    loc_0x801f5e0:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x0801f5e4
         // } else {
    loc_0x801f5a0:
        clz w8,w8
        w8 = w8 ^ 0x1f
        if !w8 jmp 0x801f5e0 // unlikely
        }
        return eax;
    loc_0x801f5ac:
        w9 = w3 & 0xff // arg4
        if (w9 == 0x20)
        b.ne 0x801f5c0 // likely
            
    loc_0x801f5c0:
        w9 = 0x1
        w8 = w9 << w8
        w10 = w8 + 0xff
        w9 = w10 & w2 // arg3
        if !w4 jmp 0x801f5e8 // likely
            
    loc_0x801f5e8:
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
        b.eq 0x801f640 // unlikely
            
    loc_0x801f640:
        if ((w3 & 0xff) == 0) // arg4
        w10 = w11 & w10
        b.eq 0x801f674 // unlikely
            
    loc_0x801f674:
        x11 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x801f678:
        // CODE XREF from sym.arm64_decode_bit_masks @ 0x801f670
        w10 = w10 + 1
        x12 = ~0
        w14 = w3 & 0xff // arg4
        x13 = x12 << x10
        if ((w10 & 0xc0) == 0)
        [x5] = x11    // arg6
        csinv x12,x12,x13, ne
        if !w14 jmp 0x801f6c0 // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0801f658: // orphan
             w14 = w13 + w8
             x15 = x12 << x13
             w13 = w14 & 0xff
             if (w13 == w3)           // arg4
             x11 = x15 | x11
             b.lo 0x801f658           // unlikely

    loc_0x0801f670: // orphan
         jmp 0x801f678

    loc_0x0801f698: // orphan
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x12 & x9

    loc_0x0801f6a4: // orphan
         w12 = w11 + w8
         x13 = x9 << x11
         w11 = w12 & 0xff
         if (w11 == w3)           // arg4
         x10 = x13 | x10
         b.lo 0x801f6a4           // unlikely

    loc_0x0801f6bc: // orphan
         jmp 0x801f6c4

    loc_0x0801f6c0: // orphan
         x10 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0801f6c4: // orphan
         // CODE XREF from sym.arm64_decode_bit_masks @ 0x801f6bc
         w0 = 0x1
         [x6] = x10               // arg7
         

}

/* ===== 0x0801f544 ===== */
int sym.arm64_decode_base_registers (int esi, int edx) {
    loc_0x801f544:
        // XREFS: CALL 0x0801f408  CALL 0x0801f4dc  CALL 0x0801fa78
        // XREFS: CALL 0x0801fadc  CALL 0x0801fb30  CALL 0x0801fc38
        // XREFS: CALL 0x0801fcfc
        ubfx w10,w0,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w0 & 0x1f // arg1
        w8 = 0x40     // '@'
        ubfx w11,w0,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x18] = (byte) w9 // arg2
        ubfx w9,w0,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x19] = (byte) w10 // arg2
        w10 = 0x20
        if (w0 == 0)  // arg1
        csel w8,w10,w8, ge
        [x1 + 0x1b] = (byte) w11 // arg2
        [x1 + 0x1a] = (byte) w9 // arg2
        [x1 + 0x1f] = (byte) w8 // arg2 // tmp
        tbnz w0,0x1f,0x801f580 // unlikely
            
    loc_0x801f580:
        w8 = [x1 + 0x14] // 0xc8 // 200 // arg2
        w8 = w8 | 1
        [x1 + 0x14] = w8 // arg2
        0x0801f58c
         // } else {
    loc_0x801f57c:
        0x0801f57c
        }
        return eax;
}

/* ===== 0x080235b0 ===== */
int sym._copy_from_user_3 (int esi, int edx) {
    loc_0x80235b0:
        // CALL XREF from sym.initEvent @ 0x8023188
        // CALL XREF from sym.runEvent @ 0x8023318
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        tbnz w9,5,0x80235e4 // likely
            
    loc_0x80235e4:
        // CODE XREF from sym._copy_from_user_3 @ 0x80235d4
        x9 = x1 << 8  // arg2
        x9 = x1 & x9,asr 8 // arg2
         // do {
    loc_0x80235ec:
        // CODE XREF from sym._copy_from_user_3 @ 0x80235e0
        x10 = 0x80    // '\x80'
        x21 = x19     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x10 = x10 - x19
        if (x10 == x9)
        b.lo 0x8023670 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08023600: // orphan
             jmp 0x80236a4

    loc_0x08023608: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x80236b0
         mrs x9,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 8]            // 0xcf // 207
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x8         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x9              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08023630: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x80236ac
         // CODE XREF from sym._copy_from_user_3 @ +0x114
         x1 = x1 & 0xff7fffffffffffff // int64_t arg2
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x2 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         0x802363c ()             // 0x802363c(0x0, 0x0, 0x0, 0x0)
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80236b4

    loc_0x0802364c: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x80236c0
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08023670: // orphan
         // CODE XREFS from sym._copy_from_user_3 @ 0x80235fc, 0x80236bc
         if x21 jmp 0x802368c     // unlikely

    loc_0x08023674: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x80236a0
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x21 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0802368c: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x8023670
         x8 = x19 - x21
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = x20 + x8            // int64_t arg1
         0x802369c ()             // 0x802369c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8023674

    loc_0x080236a4: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x8023600
         x9 = 0x8023000
         x9 = [x9]                // 0xd0 // 208
         tbnz x9,0x26,0x8023630   // unlikely

    loc_0x080236b0: // orphan
         jmp 0x8023608

    loc_0x080236b4: // orphan
         // CODE XREF from sym._copy_from_user_3 @ 0x8023644
         x8 = 0x8023000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x8023670   // unlikely

    loc_0x080236c0: // orphan
         jmp 0x802364c

}

/* ===== 0x080236d0 ===== */
int sym.init_module (int esi, int edx) {
    loc_0x80236d0:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8023000
        x0 = x0 + 0
        0x80236e8 ()  // 0x80236e8(0x8023000, 0x0, 0x0, 0x0)
        0x80236ec ()  // 0x80236ec(0x8023000, 0x0, 0x0, 0x0)
        if w0 jmp 0x8023744 // likely
            
    loc_0x8023744:
        // CODE XREF from sym.init_module @ 0x80236f0
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8023000
        x0 = x0 + 0
        jmp 0x8023770
         // do {
    loc_0x8023770:
        // CODE XREFS from sym.init_module @ 0x8023750, 0x8023760
        w1 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8023774 ()  // 0x8023774(0x0, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80236f4
    loc_0x80236fc:
        0x80236fc ()  // 0x80236fc(0x0, 0x0, 0x0, 0x0)
        if w0 jmp 0x8023764 // unlikely
            
    loc_0x8023764:
        // CODE XREF from sym.init_module @ 0x8023700
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8023000
        x0 = x0 + 0
    loc_0x08023704: // orphan
             0x8023704 ()             // 0x8023704(0x0, 0x0, 0x0, 0x0)
             0x8023708 ()             // 0x8023708(0x0, 0x0, 0x0, 0x0)
             w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             if w0 jmp 0x802378c      // unlikely

    loc_0x08023714: // orphan
         0x8023714 ()             // 0x8023714(0x0, 0x0, 0x0, 0x0)
         w1 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x8023000
         x0 = x0 + 0
         0x8023724 ()             // 0x8023724(0x8023000, 0x0, 0x0, 0x0)
         x0 = 0x8023000
         x0 = x0 + 0
         0x8023730 ()             // 0x8023730(0x8023000, 0x0, 0x0, 0x0)
         x8 = 0x8023000
         [x8] = x0
         0x802373c ()             // 0x802373c(0x8023000, 0x0, 0x0, 0x0)
         jmp 0x8023778

    loc_0x08023754: // orphan
         // CODE XREF from sym.init_module @ 0x80236f8
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x8023000
         x0 = x0 + 0
         jmp 0x8023770

    loc_0x08023778: // orphan
         // CODE XREFS from sym.init_module @ 0x8023740, 0x80237a4
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x19 = [var_10h]          // 0x4 // 4
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0802378c: // orphan
         // CODE XREF from sym.init_module @ 0x8023710
         x0 = 0x8023000
         x0 = x0 + 0
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8023798 ()             // 0x8023798(0x8023000, 0x0, 0x0, 0x0)
         0x802379c ()             // 0x802379c(0x8023000, 0x0, 0x0, 0x0)
         0x80237a0 ()             // 0x80237a0(0x8023000, 0x0, 0x0, 0x0)
         jmp 0x8023778

}

/* ===== 0x08002d44 ===== */
int sym.disable_kprobe_blacklist (int esi, int edx) {
    loc_0x8002d44:
        hint 0x19
        sp = sp - 0xb0
        [sp, 0x90] = (x29,2)
        [var_a0h] = x19
        x29 = var_90h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = sym..text // 0x8002000
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        x8 = [x19]    // 0xda // 218 // sym..text
        if x8 jmp 0x8002dfc // likely
            
    loc_0x8002dfc:
        // CODE XREF from sym.disable_kprobe_blacklist @ 0x8002d6c
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000 // "b\xf8\u04b4\b" // sym..text
        blr x8        // xzr(0x8002000, 0x0, 0x0, 0x0)
        if x0 jmp 0x8002e20 // likely
            
    loc_0x8002e20:
        // CODE XREF from sym.disable_kprobe_blacklist @ 0x8002e08
        x8 = [x0]     // 0xc7 // 199
        if (x8 == x0)
        b.ne 0x8002e68 // unlikely
            
    loc_0x8002e68:
        // CODE XREF from sym.disable_kprobe_blacklist @ 0x8002e28
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x8002e7c
         // do {
    loc_0x8002e7c:
        // CODE XREF from sym.disable_kprobe_blacklist @ 0x8002e6c
        if !x8 jmp 0x8002e70 // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8002d70
    loc_0x8002dc4:
        x8 = [var_30h] // 0x4 // 4
        x0 = var_sp_8h // int64_t arg_b0h
        [x19] = x8
        0x8002dd0 ()  // 0x8002dd0(0x178008, 0x0, 0x0, 0x0)
        x1 = [x19]    // 0xda // 218
        if x1 jmp 0x8002dec // likely
            
    loc_0x8002dec:
        // CODE XREF from sym.disable_kprobe_blacklist @ 0x8002dd8
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000 // "b\xf8\u04b4\b" // int64_t arg_b0h // sym..text
        0x8002df4 ()  // 0x8002df4(0x8002000, 0x0, 0x0, 0x0)
        x8 = [x19]    // 0xda // 218
    loc_0x08002ddc: // orphan
             x0 = sym..text           // 0x8002000
             x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // int64_t arg_b0h // sym..text
             0x8002de4 ()             // "\t" // 0x8002de4(0x8002000, 0x0, 0x0, 0x0)
             jmp 0x8002e0c

    loc_0x08002e30: // orphan
         // CODE XREF from sym.disable_kprobe_blacklist @ 0x8002e78
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // int64_t arg_b0h // sym..text
         0x8002e38 ()             // 0x8002e38(0x8002000, 0x0, 0x0, 0x0)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08002e40: // orphan
         // CODE XREF from sym.disable_kprobe_blacklist @ 0x8002e1c
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x620]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x8002ea0           // likely

    loc_0x08002e54: // orphan
         (x29, 2) = 3
         x19 = [var_a0h]          // 0x4 // 4
         sp = arg_b0h
         hint 0x1d
         

    loc_0x08002e70: // orphan
         // CODE XREFS from sym.disable_kprobe_blacklist @ 0x8002e7c, 0x8002e88, 0x8002e90, 0x8002e9c
         x8 = [x8]                // 0xcf // 207
         if (x8 == x0)
         b.eq 0x8002e30           // unlikely

    loc_0x08002e80: // orphan
         x9 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = [x9 + 0x10]!       // 0xd0 // 208
         if !x10 jmp 0x8002e70    // unlikely

    loc_0x08002e8c: // orphan
         x10 = [x8 + 0x18]        // 0xcf // 207
         if !x10 jmp 0x8002e70    // unlikely

    loc_0x08002e94: // orphan
         w1 = w1 + 1
         [x9] = (xzr,2)
         jmp 0x8002e70

    loc_0x08002ea0: // orphan
         // CODE XREF from sym.disable_kprobe_blacklist @ 0x8002e50
         0x8002ea0 ()             // 0x8002ea0(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08007d24 ===== */
int sym.init_arch (int esi, int edx) {
    loc_0x8007d24:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8007000
        x0 = x0 + 0
        0x8007d3c ()  // 0x8007d3c(0x8007000, 0x0, 0x0, 0x0)
        x19 = 0x8007000
        [x19] = x0
        x0 = 0x8007000
        x0 = x0 + 0
        0x8007d50 ()  // 0x8007d50(0x8007000, 0x0, 0x0, 0x0)
        x20 = 0x8007000
        [x20] = x0
        if x0 jmp 0x8007d70 // likely
            
    loc_0x8007d70:
        x8 = [x19]    // 0xda // 218
        if (x8 == 0)
        ccmp x0,0,4, ne
        cset w0,eq
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08007d8c
         // } else {
    loc_0x8007d60:
        x0 = 0x8007000
        x0 = x0 + 0
        0x8007d68 ()  // 0x8007d68(0x8007000, 0x0, 0x0, 0x0)
        [x20] = x0
        }
        return eax;
}

/* ===== 0x0800ca54 ===== */
int sym.paradise_hwbp_init (int esi, int edx) {
    loc_0x800ca54:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x320
        w0 = 0x35     // '5'
        0x800ca68 ()  // 0x800ca68(0x350320, 0x0, 0x0, 0x0)
        w9 = ~0xb
        if (x0 == 0)  // u"p\b"
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        csel w0,w9,wzr, eq
        x9 = 0x800c000
        [x9] = x8
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x0800ca8c
         // (break)
}

/* ===== 0x080021f4 ===== */
int sym.paradise_supercalls_init (int esi, int edx) {
    loc_0x80021f4:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000 // "b\xf8\u04b4\b" // sym..text
        0x8002208 ()  // 0x8002208(0x8002000, 0x0, 0x0, 0x0)
        x8 = sym..text // 0x8002000
        [x8] = x0     // sym..text
        if !x0 jmp 0x8002234 // unlikely
            
    loc_0x8002234:
        // CODE XREF from sym.paradise_supercalls_init @ 0x8002214
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000
        // sym..text
        0x800223c ()  // 0x800223c(0x8002000, 0x0, 0x0, 0x0)
        jmp 0x8002218
    loc_0x08002218: // orphan
             // CODE XREF from sym.paradise_supercalls_init @ 0x8002240
             x0 = sym..text           // 0x8002000
             x0 = x0 + 0              // 0x8002000
                                      // sym..text
             0x8002220 ()             // 0x8002220(0x8002000, 0x0, 0x0, 0x0)
             if w0 jmp 0x8002244      // likely

    loc_0x08002228: // orphan
         // CODE XREF from sym.paradise_supercalls_init @ 0x8002254
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x08002244: // orphan
         // CODE XREF from sym.paradise_supercalls_init @ 0x8002224
         w1 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000
                                  // sym..text
         0x8002250 ()             // 0x8002250(0x8002000, 0x0, 0x0, 0x0)
         jmp 0x8002228

}

/* ===== 0x08006e98 ===== */
int sym.paradise_gyro_init (int esi, int edx) {
    loc_0x8006e98:
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        0x08006e9c
         // (break)
}

/* ===== 0x0800352c ===== */
int sym.cfi_bypass (int esi, int edx) {
    loc_0x800352c:
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
        w21 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        w23 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x20 = 0x8003000
        x20 = x20 + 0
        x26 = 0x8003000
        x26 = x26 + 0
        w22 = 0x18
        x28 = 0x8003000
        [x29 = x8
         // do {
    loc_0x8003580:
        // CODE XREF from sym.cfi_bypass @ 0x800368c
        x9 = x19 * x22
        x8 = [x28]    // 0xe3 // 227
        x27 = [x20 + x9] // 0xd0000000db // 893353197787
        if !x8 jmp 0x8003628 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x8003590:
        // CODE XREF from sym.cfi_bypass @ 0x80036e8
        x0 = x27      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        blr x8        // xzr(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8003674 // likely
            
    loc_0x8003674:
        // CODE XREFS from sym.cfi_bypass @ 0x8003598, 0x80036b8, 0x8003700
        w25 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8003678:
        // CODE XREFS from sym.cfi_bypass @ 0x8003624, 0x80036d4, 0x8003804, 0x80038bc
        if (w21 == 0) // u"p\b" // u"p\b"
        ccmp w25,0,4, eq // u"p\b" // u"p\b"
        csel w21,w21,w25, eq
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800359c
    loc_0x80035a8:
        madd x8,x19,x22, x20
        [var_14h] = w23
        (x23, 2) = 3
        w8 = [x24]    // 0xdf // 223
        w9 = [x23]    // 0xde // 222
        if (w8 == w9) // u"p\b" // u"p\b"
        b.ne 0x80035fc // unlikely
            
    loc_0x80035fc:
        // CODE XREF from sym.cfi_bypass @ 0x80035c0
        x8 = x25 - 4
        if (x8 != 4)  // u"p\b" // u"p\b"
        b.hi 0x8003704 // likely
            
    loc_0x8003704:
        // CODE XREF from sym.cfi_bypass @ 0x8003604
        x8 = 0x8003000
        [x29, -0x20] = (xzr,2)
        x8 = [x8]     // 0xcf // 207
        [x29 = xzr
        [var_8h] = x25
        if x8 jmp 0x8003808 // likely
            
    loc_0x8003808:
        // CODE XREFS from sym.cfi_bypass @ 0x8003718, 0x80037c8
        x9 = x19 & 0x1fffffffffffffff
        x10 = x24 + 4
        if (x9 == 6)  // u"p\b"
        [x29, -0x28] = (x24,2)
        b.ne 0x8003828 // likely
            
    loc_0x8003828:
        // CODE XREF from sym.cfi_bypass @ 0x8003818
        x0 = x29 - 0x28
        x1 = x23      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = w25      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ldur w16,[x8,-4] // 0xcf // 207
        w17 = 0x7ce6  // '\xe6|'
        w17 = 0xfc84  // '\x84\xfc'
        if (w16 == w17) // u"p\b"
        b.eq 0x800384c // unlikely
            
    loc_0x800384c:
        // CODE XREF from sym.cfi_bypass @ 0x8003844
        blr x8        // xzr(0x0, 0x0, 0x0, 0x0)
        w25 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if w0 jmp 0x80037e4 // unlikely
            
    loc_0x80037e4:
        // CODE XREF from sym.cfi_bypass @ 0x8003854
        x0 = 0x8003000
        x0 = x0 + 0   // int64_t arg1
        x1 = x27      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
        w2 = w25      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80037f4 ()  // 0x80037f4(0x8003000, 0x0, 0x0, 0x0)
        w23 = [var_14h] // 4
        if (w25 == 1) // u"p\b"
        b.ge 0x80038d8 // unlikely
            
    loc_0x80038d8:
        // CODE XREF from sym.cfi_bypass @ 0x8003800
        w23 = w25 + w23
        jmp 0x8003684
         // do {
    loc_0x8003684:
        // CODE XREF from sym.cfi_bypass @ 0x80038dc
        x19 = x19 + 1 // u"p\b"
        if (x19 == 7) // u"p\b"
        b.ne 0x8003580 // likely
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
    loc_0x080035d4: // orphan
             // CODE XREF from sym.cfi_bypass @ 0x80035f0
             if (x11 == x8)           // u"p\b" // u"p\b"
             b.eq 0x80036ec           // likely

    loc_0x080035dc: // orphan
         x12 = x8 << 2
         x8 = x8 + 1              // u"p\b"
         w13 = [x10 + x12]        // 0xd3000000d1 // 906238099665
         w12 = [x9 + x12]         // 0xd3000000d0 // 906238099664
         if (w13 == w12)          // u"p\b" // u"p\b"
         b.eq 0x80035d4           // likely

    loc_0x080035f4: // orphan
         if (x8 == x25)           // u"p\b" // u"p\b"
         b.hs 0x80036ec           // likely

    loc_0x08003628: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x800358c
         (x8, 2) = 3
         x0 = var_18h             // int64_t arg1
         [sp, 0x78] = (x8,2)
         (x8, 2) = 3
         [sp, 0x88] = (x8,2)
         (x9, 2) = 3
         [sp, 0x58] = (x9,2)
         (x10, 2) = 3
         [sp, 0x68] = (x10,2)
         (x9, 2) = 3
         [sp, 0x38] = (x9,2)
         (x10, 2) = 3
         [sp, 0x48] = (x10,2)
         (x9, 2) = 3
         [sp, 0x18] = (x9,2)
         (x10, 2) = 3
         [sp, 0x28] = (x10,2)
         0x800366c ()             // 0x800366c(0x178018, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x8003694    // likely

    loc_0x08003690: // orphan
         jmp 0x80038e0

    loc_0x08003694: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8003670
         x8 = [var_40h]           // 4
         x0 = var_18h             // int64_t arg1
         [x28] = x8
         0x80036a0 ()             // 0x80036a0(0x178018, 0x0, 0x0, 0x0)
         x1 = [x28]               // 0xe3 // 227
         if x1 jmp 0x80036d8      // likely

    loc_0x080036ac: // orphan
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         0x80036b4 ()             // 0x80036b4(0x8003000, 0x0, 0x0, 0x0)
         jmp 0x8003674

    loc_0x080036bc: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x80035a4
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         x2 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80036cc ()             // 0x80036cc(0x8003000, 0x0, 0x0, 0x0)
         w25 = ~0x15
         jmp 0x8003678

    loc_0x080036d8: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x80036a8
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         0x80036e0 ()             // 0x80036e0(0x8003000, 0x0, 0x0, 0x0)
         x8 = [x28]               // 0xe3 // 227
         jmp 0x8003590

    loc_0x080036ec: // orphan
         // CODE XREFS from sym.cfi_bypass @ 0x80035d8, 0x80035f8
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         0x80036f8 ()             // 0x80036f8(0x8003000, 0x0, 0x0, 0x0)
         w23 = [var_14h]          // 4
         jmp 0x8003674

    loc_0x08003724: // orphan
         (x8, 2) = 3
         x0 = var_18h             // int64_t arg1
         [sp, 0x78] = (x8,2)
         (x8, 2) = 3
         [sp, 0x88] = (x8,2)
         (x9, 2) = 3
         [sp, 0x58] = (x9,2)
         (x10, 2) = 3
         [sp, 0x68] = (x10,2)
         (x9, 2) = 3
         [sp, 0x38] = (x9,2)
         (x10, 2) = 3
         [sp, 0x48] = (x10,2)
         (x9, 2) = 3
         [sp, 0x18] = (x9,2)
         (x10, 2) = 3
         [sp, 0x28] = (x10,2)
         0x8003768 ()             // 0x8003768(0x178018, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x8003794   // unlikely

    loc_0x08003770: // orphan
         x8 = [var_40h]           // 4
         x0 = var_18h             // int64_t arg1
         [x28] = x8
         0x800377c ()             // 0x800377c(0x178018, 0x0, 0x0, 0x0)
         x1 = [x28]               // 0xe3 // 227
         if x1 jmp 0x80037a0      // likely

    loc_0x08003788: // orphan
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         0x8003790 ()             // 0x8003790(0x8003000, 0x0, 0x0, 0x0)

    loc_0x08003794: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x800376c
         x8 = 0x8003000
         [x8] = xzr
         jmp 0x80037cc

    loc_0x080037a0: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8003784
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         0x80037a8 ()             // 0x80037a8(0x8003000, 0x0, 0x0, 0x0)
         x8 = [x28]               // 0xe3 // 227

    loc_0x080037b0: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8003720
         x0 = 0x8003000
         x0 = x0 + 0
         blr x8                   // xzr(0x8003000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x8003000
         [x9] = x0
         if x0 jmp 0x8003808      // likely

    loc_0x080037cc: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x800379c
         w2 = w25 << 2
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         0x80037d8 ()             // 0x80037d8(0x0, 0x0, 0x0, 0x0)
         w25 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x8003858     // likely

    loc_0x0800386c: // orphan
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x23 + 4
         x10 = x24 + 4
         x11 = x14 - 1

    loc_0x0800387c: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8003898
         if (x11 == x8)
         b.eq 0x80038c0           // likely

    loc_0x08003884: // orphan
         x12 = x8 << 2
         x8 = x8 + 1
         w13 = [x10 + x12]        // 0xd3000000d1 // 906238099665
         w12 = [x9 + x12]         // 0xd3000000d0 // 906238099664
         if (w13 == w12)
         b.eq 0x800387c           // likely

    loc_0x0800389c: // orphan
         if (x8 == x14)
         b.hs 0x80038c0           // likely

    loc_0x080038a4: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8003868
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         0x80038b0 ()             // 0x80038b0(0x8003000, 0x0, 0x0, 0x0)
         w23 = [var_14h]          // 4
         w25 = ~0x4
         jmp 0x8003678

    loc_0x080038c0: // orphan
         // CODE XREFS from sym.cfi_bypass @ 0x8003880, 0x80038a0
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         x1 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_120h
         0x80038cc ()             // 0x80038cc(0x8003000, 0x0, 0x0, 0x0)
         w23 = [var_14h]          // 4
         w25 = 0x1

    loc_0x080038e0: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8003690
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x620]        // 0xcf // 207
         ldur x9,[x29,-0x10]
         if (w23 == 0)
         csel w0,w21,w23, eq
         if (x8 == x9)
         b.ne 0x8003924           // likely

    loc_0x080038fc: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_120h
         hint 0x1d
         

    loc_0x08003920: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x8003824
         brk 0x1

    loc_0x08003924: // orphan
         // CODE XREF from sym.cfi_bypass @ 0x80038f8
         0x8003924 ()             // 0x8003924(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08002bf4 ===== */
int sym.kallsyms_lookup_name_ex (int esi, int edx) {
    loc_0x8002bf4:
        hint 0x19
        sp = sp - 0xb0
        [sp, 0x90] = (x29,2)
        [sp, 0xa0] = (x20,2)
        x29 = var_90h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = sym..text // 0x8002000
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        x8 = [x20]    // 0xdb // 219 // sym..text // sym..text
        if !x8 jmp 0x8002c30 // unlikely
            
    loc_0x8002c30:
        // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x8002c20
        x8 = sym..text // 0x8002000
        x8 = x8 + 0   // 0x8002000
        // sym..text
        x0 = var_8h   // int64_t arg1
        (x9, 2) = 3
        [sp, 0x68] = (x9,2)
        (x9, 2) = 3
        [sp, 0x78] = (x9,2)
        (x10, 2) = 3
        [sp, 0x48] = (x10,2)
        (x11, 2) = 3
        [sp, 0x58] = (x11,2)
        (x10, 2) = 3
        [sp, 0x28] = (x10,2)
        (x11, 2) = 3  // [0x8002038:4]=0xd503233f // "?#\x03\xd5\xfd{\xbd\xa9\xf5\v"
        [sp, 0x38] = (x11,2)
        (x10, 2) = 3  // sym..text
        (x11, 2) = 3
        [sp, 8] = (x10,2)
        [sp, 0x18] = (x11,2)
        0x8002c7c ()  // 0x8002c7c(0x178008, 0x0, 0x0, 0x0)
        tbz w0,0x1f,0x8002cb0 // likely
            
    loc_0x8002cb0:
        // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x8002c80
        x8 = [var_30h] // 0x4 // 4
        x0 = var_8h   // int64_t arg1
        [x20] = x8
        0x8002cbc ()  // 0x8002cbc(0x178008, 0x0, 0x0, 0x0)
        x1 = [x20]    // 0xdb // 219
        if x1 jmp 0x8002cd8 // likely
            
    loc_0x8002cd8:
        // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x8002cc4
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000
        // sym..text // int64_t arg1
        0x8002ce0 ()  // 0x8002ce0(0x8002000, 0x0, 0x0, 0x0)
        x8 = [x20]    // 0xdb // 219
        jmp 0x8002c24
    loc_0x08002c24: // orphan
             // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x8002ce8
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
             jmp 0x8002c88

    loc_0x08002c84: // orphan
         // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x8002cd4
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08002c88: // orphan
         // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x8002c2c
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x620]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x8002cec           // likely

    loc_0x08002c9c: // orphan
         (x20, 2) = 3
         (x29, 2) = 3
         sp = arg_b0h
         hint 0x1d
         

    loc_0x08002cc8: // orphan
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000
                                  // sym..text // int64_t arg1
         0x8002cd0 ()             // 0x8002cd0(0x8002000, 0x0, 0x0, 0x0)
         jmp 0x8002c84

    loc_0x08002cec: // orphan
         // CODE XREF from sym.kallsyms_lookup_name_ex @ 0x8002c98
         0x8002cec ()             // 0x8002cec(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x080034c0 ===== */
int sym.hide_module (int esi, int edx) {
    loc_0x80034c0:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = 0x8003000
        x9 = x9 + 0
        x8 = [x9 + 8] // 0xd0 // 208
        x10 = [x8]    // 0xcf // 207
        if (x10 == x9)
        b.ne 0x8003518 // likely
            
    loc_0x8003518:
        // CODE XREFS from sym.hide_module @ 0x80034e0, 0x80034f0
        x0 = 0x8003000
        x0 = x0 + 0
        0x8003520 ()  // 0x8003520(0x8003000, 0x0, 0x0, 0x0)
        jmp 0x80034fc
         // do {
    loc_0x80034fc:
        // CODE XREF from sym.hide_module @ 0x8003524
        x0 = x9 + 0x60
        [x9] = x9
        [x9 + 8] = x9
        0x8003508 ()  // 0x8003508(0x60, 0x0, 0x0, 0x0)
        (x29, 2) = 3  // sym..text
        hint 0x1d
        // sym..text
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80034e4
    loc_0x80034f4:
        [x10 + 8] = x8
        [x8] = x10
}

/* ===== 0x0800225c ===== */
int sym.paradise_supercalls_exit (int esi, int edx) {
    loc_0x800225c:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000
        // sym..text
        0x8002270 ()  // 0x8002270(0x8002000, 0x0, 0x0, 0x0)
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x0800227c
         // (break)
}

/* ===== 0x0800ca94 ===== */
int sym.paradise_hwbp_cleanup (int esi, int edx) {
    loc_0x800ca94:
        hint 0x19
        [sp, -0x50]! = (x29,2)
        [var_10h] = x25
        [sp, 0x20] = (x24,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800c000
        x0 = x0 + 0
        0x800cab8 ()  // 0x800cab8(0x800c000, 0x0, 0x0, 0x0)
        x22 = 0x800c000
        x8 = [x22]    // 0xdd // 221
        if !x8 jmp 0x800cb60 // unlikely
            
    loc_0x800cb60:
        x19 = 0x800c000
        x0 = [x19]    // 0xda // 218
        0x800cb68 ()  // 0x800cb68(0x350320, 0x0, 0x0, 0x0)
        x0 = 0x800c000
        x0 = x0 + 0
        [x19] = xzr
        0x800cb78 ()  // 0x800cb78(0x800c000, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        x25 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3  // sym..text
        hint 0x1d
        // sym..text
         // } else {
    loc_0x800cac8:
        x19 = [x22]   // 0xdd // 221
        if !x19 jmp 0x800cb60 // likely
        }
        return eax;
    loc_0x800cad0:
        x8 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x23 = 0x800c000
        x24 = ~0
        w25 = 0x20
        x20 = 0x800c000
        x20 = x20 + 0
         // do {
    loc_0x800cae8:
        w9 = [x23]    // 0xde // 222
        x8 = x24 << x8
        w8 &= w8
        rbit x8,x8
        clz x8,x8
        csel x21,x25,x8, eq
        if (w21 == 0x1f)
        b.hi 0x800cb28 // likely
         // } while (?);
        }
        return eax;
    loc_0x800cb08:
        w0 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w3 = 0x1
        0x800cb18 ()  // 0x800cb18(0x0, 0x0, 0x0, 0x1)
        if (x21 == 0x1f)
        x8 = x21 + 1
        b.lo 0x800cae8 // likely
    loc_0x800cb28:
        x0 = 0x800c000
        x0 = x0 + 0
        w1 = 0x1
        0x800cb34 ()  // 0x800cb34(0x800c000, 0x1, 0x0, 0x0)
        x0 = 0x800c000
        x0 = x0 + 0
        w1 = 0x2
        0x800cb44 ()  // 0x800cb44(0x800c000, 0x2, 0x0, 0x0)
        w2 = 0x320
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x35     // '5'
        [x22] = xzr
        0x800cb5c ()  // 0x800cb5c(0x0, 0x0, 0x350320, 0x0)
}

/* ===== 0x080237ac ===== */
int sym.cleanup_module (int esi, int edx) {
    loc_0x80237ac:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8023000
        x0 = x0 + 0
        0x80237c0 ()  // 0x80237c0(0x8023000, 0x0, 0x0, 0x0)
        0x80237c4 ()  // 0x80237c4(0x8023000, 0x0, 0x0, 0x0)
        0x80237c8 ()  // 0x80237c8(0x8023000, 0x0, 0x0, 0x0)
        0x80237cc ()  // 0x80237cc(0x8023000, 0x0, 0x0, 0x0)
        0x80237d0 ()  // 0x80237d0(0x8023000, 0x0, 0x0, 0x0)
        0x80237d4 ()  // 0x80237d4(0x8023000, 0x0, 0x0, 0x0)
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x080237e0
         // (break)
}

/* ===== 0x08006ea4 ===== */
int sym.paradise_gyro_exit (int esi, int edx) {
    loc_0x8006ea4:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8006000
        x19 = x19 + 0
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8006ec0 ()  // 0x8006ec0(0x8006000, 0x0, 0x0, 0x0)
        x20 = 0x8006000
        x20 = x20 + 0
        x8 = 0x8006000
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x8] = (byte) wzr
        0x8006ed8 ()  // 0x8006ed8(0x8006000, 0x0, 0x0, 0x0)
        sym.gyro_unhook_all_locked ()
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8006ee4 ()  // 0x8006ee4(0x8006000, 0x0, 0x0, 0x0)
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8006eec ()  // 0x8006eec(0x8006000, 0x0, 0x0, 0x0)
        x0 = 0x8006000
        x0 = x0 + 0
        0x8006ef8 ()  // 0x8006ef8(0x8006000, 0x0, 0x0, 0x0)
        (x20, 2) = 3
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x08006f08
         // (break)
}

/* ===== 0x08004f88 ===== */
int sym.paradise_hide_cleanup (int esi, int edx) {
    loc_0x8004f88:
        hint 0x19
        sp = sp - 0x70
        [sp, 0x20] = (x29,2)
        [var_30h] = x25
        [sp, 0x40] = (x24,2)
        [sp, 0x50] = (x22,2)
        [sp, 0x60] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        0x8004fb4 ()  // 0x8004fb4(0x0, 0x0, 0x0, 0x0)
        0x8004fb8 ()  // 0x8004fb8(0x0, 0x0, 0x0, 0x0)
        x0 = 0x8004000
        x0 = x0 + 0   // int64_t arg_70h
        0x8004fc4 ()  // 0x8004fc4(0x8004000, 0x0, 0x0, 0x0)
        x21 = 0x8004000
        x21 = x21 + 0
        x19 = [x21]   // 0xdc // 220
        if (x19 == x21)
        b.eq 0x80050f4 // unlikely
            
    loc_0x80050f4:
        x0 = 0x8005000
        x0 = x0 + 0   // int64_t arg_70h
        0x80050fc ()  // 0x80050fc(0x8005000, 0x0, 0x0, 0x0)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8005134 // likely
            
    loc_0x8005134:
        0x8005134 ()  // 0x8005134(0x0, 0x0, 0x0, 0x0)
        0x08005138
         // } else {
    loc_0x8005114:
        (x20, 2) = 3
        x25 = [var_30h] // 0x4 // 4
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        sp = arg_70h
        hint 0x1d
        0x08005130
         // } else {
        }
        return eax;
    loc_0x08004ffc: // orphan
             // CODE XREF from sym.paradise_hide_cleanup @ 0x80050e4
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
             // XREFS: STRING 0x080050f4  CODE 0x080050f8  STRING 0x080051b0  
             // XREFS: CODE 0x080051b4  STRING 0x080052b8  CODE 0x080052bc  
             // XREFS: STRING 0x080052d0  CODE 0x080052d4  STRING 0x080052e4  
             // XREFS: CODE 0x080052e8  STRING 0x0800540c  STRING 0x0800541c  
             // XREFS: STRING 0x080054e8  STRING 0x080054f8  
             0x8005000 ()             // 0x8005000(0x0, 0x0, 0x0, 0x0)
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
             0x8005008 ()             // 0x8005008(0x0, 0x0, 0x0, 0x0)
             x19 = [x21]              // 0xdc // 220
             if (x19 == x21)
             b.eq 0x80050f4           // unlikely

    loc_0x08005018: // orphan
         // CODE XREF from sym.paradise_hide_cleanup @ 0x8004ff8
         x8 = [x19 + 8]           // 0xda // 218
         x9 = [x8]                // 0xcf // 207
         if (x9 == x19)
         b.ne 0x80050e8           // likely

    loc_0x08005028: // orphan
         x9 = [x19]               // 0xda // 218
         x10 = [x9 + 8]           // 0xd0 // 208
         if (x10 == x19)
         b.ne 0x80050e8           // likely

    loc_0x08005038: // orphan
         [x9 + 8] = x8
         [x8] = x9

    loc_0x08005040: // orphan
         // CODE XREF from sym.paradise_hide_cleanup @ 0x80050f0
         x8 = x22 + 0x22
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         [x19] = (x22,2)
         0x800504c ()             // 0x800504c(0x0, 0x0, 0x0, 0x0)
         w8 = (byte) [x19 + 0x210] // 0xda // 218
         if !w8 jmp 0x8004ffc     // unlikely

    loc_0x08005058: // orphan
         sym.resolve_hide_symbols ()
         if w0 jmp 0x8004ffc      // unlikely

    loc_0x08005060: // orphan
         x8 = [x23]               // 0xde // 222
         x0 = x19 + 0x10
         x2 = var_sp_8h
         w1 = 0x1
         [sp, 8] = (xzr,2)
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x6c68             // 'hl'
         w17 = 0xf65a             // 'Z\xf6'
         if (w16 == w17)
         b.eq 0x800508c           // unlikely

    loc_0x08005088: // orphan
         brk 0x8228

    loc_0x0800508c: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         if w0 jmp 0x8004ffc      // unlikely

    loc_0x08005094: // orphan
         x8 = [x24]               // 0xdf // 223
         x0 = var_sp_8h
         w1 = 0x2
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x710f             // '\x0fq'
         w17 = 0xf8f8             // '\xf8\xf8'
         if (w16 == w17)
         b.eq 0x80050b8           // unlikely

    loc_0x080050b4: // orphan
         brk 0x8228

    loc_0x080050b8: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8004ffc     // likely

    loc_0x080050c0: // orphan
         x8 = [x25]               // 0xe0 // 224
         x0 = var_sp_8h
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x3d37             // '7='
         w17 = 0x59dc             // '\xdcY'
         if (w16 == w17)
         b.eq 0x80050e0           // unlikely

    loc_0x080050dc: // orphan
         brk 0x8228

    loc_0x080050e0: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         jmp 0x8004ffc

    loc_0x080050e8: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_70h
         0x80050ec ()             // 0x80050ec(0x0, 0x0, 0x0, 0x0)
         jmp 0x8005040

}

/* ===== 0x0800c4c4 ===== */
int sym.inline_hook_remove_all (int esi, int edx) {
    loc_0x800c4c4:
        hint 0x19
        sp = sp - 0x80
        [sp, 0x30] = (x29,2)
        [sp, 0x40] = (x26,2)
        [sp, 0x50] = (x24,2)
        [sp, 0x60] = (x22,2)
        [sp, 0x70] = (x20,2)
        x29 = var_30h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800c000
        x0 = x0 + 0   // int64_t arg_80h
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        0x800c4f8 ()  // 0x800c4f8(0x800c000, 0x0, 0x0, 0x0)
        x8 = 0x800c000
        x8 = x8 + 0
        x21 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x22 = x8 + 0x1d0
        x23 = 0x800c000
        x23 = x23 + 0
        x24 = 0x800c000
        x19 = 0x800c000
        x19 = x19 + 0
        w25 = 0x1
        jmp 0x800c550
         // do {
    loc_0x800c550:
        // CODE XREF from sym.inline_hook_remove_all @ 0x800c524
        x8 = x21 >> 3
        x8 = x8 & 0x1ffffffffffffff8
        x8 = [x23 + x8] // 0xcf000000de // 889058230494
        x8 = x8 >> x21
        tbz w8,0,0x800c540 // likely
         // } while (?);
        }
        return eax;
    loc_0x800c564:
        x20 = x22     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x24]    // 0xdf // 223
        x26 = [x20] + 0xffffffffffffff14 // 0xdb // 219
        if x8 jmp 0x800c588 // unlikely
            
    loc_0x800c588:
        x9 = x26 - 0x10
        x10 = x26 - 0xc
        [sp, 8] = (x9,2)
        x9 = x26 - 8
        x10 = x26 - 4
        [sp, 0x18] = (x9,2)
        if x8 jmp 0x800c5b8 // unlikely
            
    loc_0x800c5b8:
        x0 = var_sp_8h
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x4
        blr x8        // xzr(0x178008, 0x0, 0x4, 0x0)
         // do {
    loc_0x800c5c8:
        ubfx x9,x21,6, 0x1a // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = x25 << x21
        jmp 0x800c528
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800c528: // orphan
             // CODE XREF from sym.inline_hook_remove_all @ 0x800c5d0
             x9 = x23 + x9,lsl 3
             prfm pstl1strm,[x9]

    loc_0x0800c530: // orphan
         ldxr x10,[x9]
         bic x10,x10,x8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w11,x10,[x9]
         if w11 jmp 0x800c530     // unlikely

    loc_0x0800c540: // orphan
         x21 = x21 + 1
         x22 = x22 + 0x1e0
         if (x21 == 0x20)
         b.eq 0x800c5e0           // unlikely

    loc_0x0800c5e0: // orphan
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg_80h
         0x800c5e8 ()             // 0x800c5e8(0x800c000, 0x0, 0x0, 0x0)
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x620]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x800c620           // likely

    loc_0x0800c600: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x29, 2) = 3
         sp = arg_80h
         hint 0x1d
         

    loc_0x0800c620: // orphan
         0x800c620 ()             // 0x800c620(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08002004 ===== */
int sym.paradise_get_file_private (int esi, int edx) {
    loc_0x8002004:
        x8 = sym..text // 0x8002000
        // DATA XREFS from sym.is_file_exist @ 0x8002acc, 0x8002b54
        // DATA XREF from sym.kallsyms_lookup_name_ex @ 0x8002c6c
        // DATA XREF from sym.disable_kprobe_blacklist @ 0x8002dac
        x8 = [x8]     // 0xcf // 207 // sym..text
        if !x8 jmp 0x8002024 // unlikely
            
    loc_0x8002024:
        // CODE XREF from sym.paradise_get_file_private @ 0x800200c
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        // DATA XREFS from sym.is_file_exist @ 0x8002abc, 0x8002b44
        // DATA XREF from sym.kallsyms_lookup_name_ex @ 0x8002c5c
        // DATA XREF from sym.disable_kprobe_blacklist @ 0x8002d9c
        0x08002028
         // } else {
    loc_0x8002010:
        x9 = [x8 + 0xc0] // 0xcf // 207
        x10 = sym..text // 0x8002000
        // DATA XREFS from sym.is_file_exist @ 0x8002ad0, 0x8002b58
        // DATA XREF from sym.kallsyms_lookup_name_ex @ 0x8002c70
        // DATA XREF from sym.disable_kprobe_blacklist @ 0x8002db0
        x10 = x10 + 0 // 0x8002000 // "b\xf8\u04b4\b" // sym..text
        if (x9 == x10)
        b.eq 0x800202c // unlikely
        }
        return eax;
    loc_0x800202c:
        // CODE XREF from sym.paradise_get_file_private @ 0x8002020
        x0 = [x8 + 0xd8] // 0xcf // 207
        0x08002030
         // (break)
}

/* ===== 0x08002038 ===== */
int sym.paradise_install_fd (int esi, int edx) {
    loc_0x8002038:
        // DATA XREFS from sym.is_file_exist @ 0x8002ac4, 0x8002b4c
        // DATA XREF from sym.kallsyms_lookup_name_ex @ 0x8002c64
        // DATA XREF from sym.disable_kprobe_blacklist @ 0x8002da4
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        // DATA XREFS from sym.is_file_exist @ 0x8002aac, 0x8002b34
        // DATA XREF from sym.kallsyms_lookup_name_ex @ 0x8002c4c
        // DATA XREF from sym.disable_kprobe_blacklist @ 0x8002d8c
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x820] // 0xcf // 207
        w9 = [x8 + 8] // 0xcf // 207
        // DATA XREFS from sym.is_file_exist @ 0x8002ab4, 0x8002b3c
        // DATA XREF from sym.kallsyms_lookup_name_ex @ 0x8002c54
        // DATA XREF from sym.disable_kprobe_blacklist @ 0x8002d94
        w8 = [x8 + 0x18] // 0xcf // 207
        w8 = w9 | w8
        if w8 jmp 0x80020e0 // likely
            
    loc_0x80020e0:
        // CODE XREF from sym.paradise_install_fd @ 0x8002060
        w19 = ~0
         // do {
    loc_0x80020e4:
        // CODE XREFS from sym.paradise_install_fd @ 0x80020dc, 0x8002108, 0x8002124, 0x8002160
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x080020f8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8002064
    loc_0x8002074:
        w3 = 0x2
        // DATA XREFS from sym.is_file_exist @ 0x8002aa4, 0x8002b2c
        // DATA XREF from sym.kallsyms_lookup_name_ex @ 0x8002c44
        // DATA XREF from sym.disable_kprobe_blacklist @ 0x8002d84
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000 // "b\xf8\u04b4\b" // sym..text
        x1 = sym..text // 0x8002000
        x1 = x1 + 0   // 0x8002000 // "b\xf8\u04b4\b" // sym..text
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w3 = 0x8
        0x8002090 ()  // 0x8002090(0x8002000, 0x8002000, 0x0, 0x80002)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // sym..text
        if (x0 != 0xfff)
        b.hs 0x800210c // likely
            
    loc_0x800210c:
        // CODE XREF from sym.paradise_install_fd @ 0x800209c
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000 // "b\xf8\u04b4\b" // sym..text
        0x8002114 ()  // 0x8002114(0x8002000, 0x0, 0x0, 0x0)
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800211c ()  // 0x800211c(0x0, 0x0, 0x0, 0x0)
        w19 = w20     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x80020e4
    loc_0x080020a0: // orphan
             x8 = sym..text           // 0x8002000
             w1 = 0xcc0               // '\xc0\f'
             w2 = 0x8                 // "\""
             x0 = [x8]                // 0xcf // 207 // sym..text
             0x80020b0 ()             // 0x80020b0(0x90000008b4d2f862, 0xcc0, 0x8, 0x0)
             if !x0 jmp 0x8002128     // unlikely

    loc_0x080020b8: // orphan
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x4
         0x80020c0 ()             // 0x80020c0(0x4, 0x0, 0x0, 0x0)
         [x21] = x0
         if !x0 jmp 0x8002138     // unlikely

    loc_0x080020cc: // orphan
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20 + 0xd8] = x21
         0x80020d8 ()             // 0x80020d8(0x0, 0x0, 0x0, 0x0)
         jmp 0x80020e4

    loc_0x080020fc: // orphan
         // CODE XREF from sym.paradise_install_fd @ 0x8002070
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // sym..text
         0x8002104 ()             // 0x8002104(0x8002000, 0x0, 0x0, 0x0)
         jmp 0x80020e4

    loc_0x08002128: // orphan
         // CODE XREF from sym.paradise_install_fd @ 0x80020b4
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // sym..text
         0x8002130 ()             // 0x8002130(0x8002000, 0x0, 0x0, 0x0)
         jmp 0x800214c

    loc_0x08002138: // orphan
         // CODE XREF from sym.paradise_install_fd @ 0x80020c8
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // sym..text
         0x8002140 ()             // 0x8002140(0x8002000, 0x0, 0x0, 0x0)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8002148 ()             // 0x8002148(0x0, 0x0, 0x0, 0x0)

    loc_0x0800214c: // orphan
         // CODE XREF from sym.paradise_install_fd @ 0x8002134
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8002150 ()             // 0x8002150(0x0, 0x0, 0x0, 0x0)
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8002158 ()             // 0x8002158(0x0, 0x0, 0x0, 0x0)
         w19 = ~0xb
         jmp 0x80020e4

}

/* ===== 0x08022eb8 ===== */
int sym.arraylist_create (int esi, int edx) {
    loc_0x8022eb8:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = 0x8022000
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w1 = 0xcc0    // '\xc0\f'
        x8 = [x8]     // 0xcf // 207
        w2 = 0x18
        x0 = x8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8022ee0 ()  // 0x8022ee0(0x710005bf540004c1, 0xcc0, 0x18, 0x0)
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8022f2c // unlikely
            
    loc_0x8022f2c:
        // CODE XREFS from sym.arraylist_create @ 0x8022ee8, 0x8022f18
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08022f3c
         // } else {
    loc_0x8022eec:
        if (x20 == 0x10)
        w8 = 0x10
        csel x20,x20,x8, hi
        x8 = x20 >> 0x3d
        if x8 jmp 0x8022f1c // unlikely
        }
        return eax;
    loc_0x8022f00:
        x0 = x20 << 3 // int64_t arg1
        w1 = 0xcc0    // '\xc0\f'
        0x8022f08 ()  // 0x8022f08(0x0, 0xcc0, 0x0, 0x0)
        [x19] = x0
        if !x0 jmp 0x8022f20 // likely
            
    loc_0x8022f20:
        // CODE XREF from sym.arraylist_create @ 0x8022f10
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x8022f24 ()  // 0x8022f24(0x0, 0x0, 0x0, 0x0)
        x19 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
    loc_0x08022f14: // orphan
             [x19, 8] = (xzr,2)
             jmp 0x8022f2c

    loc_0x08022f1c: // orphan
         // CODE XREF from sym.arraylist_create @ 0x8022efc
         [x19] = xzr

}

/* ===== 0x08005cb8 ===== */
int sym.do_get_thread_tpidr_el0 (int esi, int edx) {
    loc_0x8005cb8:
        hint 0x19
        sp = sp - 0x40
        [sp, 0x20] = (x29,2)
        [var_30h] = x19
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = var_8h   // int64_t arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = 0x10
        [x29 = x8
        [sp, 8] = (xzr,2)
        sym._copy_from_user_1 () // "`" // sym._copy_from_user_1(0x177fc8, 0x0, 0x10)
        if !x0 jmp 0x8005cfc // unlikely
            
    loc_0x8005cfc:
        w0 = [var_8h] // 0x4 // 4
        if (w0 == 1)
        b.lt 0x8005d30 // likely
            
    loc_0x8005d30:
        w0 = ~0x15
         // do {
    loc_0x8005d34:
        // CODE XREFS from sym.do_get_thread_tpidr_el0 @ 0x8005cf8, 0x8005d2c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8005d5c // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08005d48: // orphan
             (x29, 2) = 3
             x19 = [var_30h]          // 0x4 // 4
             sp = arg_40h
             hint 0x1d
             

    loc_0x08005d5c: // orphan
         0x8005d5c ()             // 0x8005d5c(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x0800479c ===== */
int sym.do_hide_path (int esi, int edx) {
    loc_0x800479c:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x420
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = var_214h // int64_t arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x204
        [x29 = x8
        0x80047d4 ()  // 0x80047d4(0x177db4, 0x0, 0x204, 0x0)
        x0 = var_14h  // int64_t arg1
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x200
        0x80047e4 ()  // 0x80047e4(0x177bb4, 0x0, 0x200, 0x0)
        x0 = var_214h // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = 0x204
        sym._copy_from_user () // sym._copy_from_user(0x177db4, 0x0, 0x204)
        if !x0 jmp 0x8004830 // unlikely
            
    loc_0x8004830:
        x0 = var_214h // int64_t arg1
        w1 = 0x200
        [var_0h_2] = (byte) wzr
        0x800483c ()  // 0x800483c(0x178214, 0x200, 0x0, 0x0)
        if (x0 == 0x201)
        b.hs 0x8004b88 // likely
            
    loc_0x8004b88:
        x0 = 0x8004000
        x0 = x0 + 0   // int64_t arg1
        0x8004b90 ()  // 0x8004b90(0x8004000, 0x0, 0x0, 0x0)
         // do {
    loc_0x8004b94:
        x0 = 0x8004000
        x0 = x0 + 0   // int64_t arg1
        0x8004b9c ()  // sym.resolve_hide_symbols // 0x8004b9c(0x8004000, 0x0, 0x0, 0x0)
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08004800: // orphan
             // CODE XREFS from sym.do_hide_path @ 0x800491c, 0x8004b0c, 0x8004b1c, 0x8004b80
             mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x8 = [x8 + 0x620]        // 0xcf // 207
             ldur x9,[x29,-8]
             if (x8 == x9)
             b.ne 0x8004b84           // likely

    loc_0x08004814: // orphan
         sp = arg_420h
         (x20, 2) = 3
         (x22, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0800485c: // orphan
         w8 = (byte) [var_214h]   // 4
         if (w8 == 0x2f)
         b.ne 0x8004800           // likely

    loc_0x08004868: // orphan
         x20 = var_1h_2
         x0 = var_14h             // int64_t arg1
         x1 = var_214h            // int64_t arg_420h
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8004878 ()             // 0x8004878(0x178014, 0x178214, 0x1, 0x0)
         sym.resolve_hide_symbols ()
         if w0 jmp 0x8004800      // likely

    loc_0x08004884: // orphan
         w21 = [var_414h]         // 4
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004890 ()             // 0x8004890(0x8004000, 0x0, 0x0, 0x0)
         if !w21 jmp 0x8004abc    // likely

    loc_0x08004898: // orphan
         x23 = 0x8004000
         x23 = x23 + 0
         x21 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080048a4: // orphan
         x21 = [x21]              // 0xdc // 220
         if (x21 == x23)
         b.eq 0x80048d4           // likely

    loc_0x080048b0: // orphan
         x0 = x21 + 0x10          // int64_t arg1
         x1 = var_14h             // int64_t arg_420h
         0x80048b8 ()             // 0x80048b8(0x10, 0x178014, 0x0, 0x0)
         if w0 jmp 0x80048a4      // likely

    loc_0x080048c0: // orphan
         if !x21 jmp 0x80048d4    // likely

    loc_0x080048c4: // orphan
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x80048cc ()             // 0x80048cc(0x8004000, 0x0, 0x0, 0x0)
         jmp 0x8004b7c

    loc_0x080048d4: // orphan
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x80048dc ()             // 0x80048dc(0x8004000, 0x0, 0x0, 0x0)
         x8 = 0x8004000
         x0 = var_14h
         x2 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         w1 = 0x1
         [sp] = (xzr,2)
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x6c68             // 'hl'
         w17 = 0xf65a             // 'Z\xf6'
         if (w16 == w17)
         b.eq 0x8004910           // unlikely

    loc_0x0800490c: // orphan
         brk 0x8228

    loc_0x08004910: // orphan
         blr x8                   // "`" // xzr(0x0, 0x0, 0x0, 0x0)
         if !w0 jmp 0x8004920     // likely

    loc_0x08004918: // orphan
         w0 = ~0x1
         jmp 0x8004800

    loc_0x08004920: // orphan
         w0 = 0xcc0               // '\xc0\f'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8004928 ()             // 0x8004928(0xcc0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x80049f8     // unlikely

    loc_0x08004930: // orphan
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x0 + 0x11           // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0xfef               // '\xef\x0f'
         0x8004940 ()             // 0x8004940(0x11, 0x0, 0xfef, 0x0)
         x8 = 0x8004000
         x8 = x8 + 0
         x10 = 0x8004000
         (x9, 2) = 3
         x0 = 0x8004000
         x0 = x0 + 0
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = 0x800e              // '\x0e\x80'
         x2 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x4 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x21 + 0x10] = (byte) wzr
         [x21] = (x9,2)
         x9 = [x10]               // 0xd1 // 209
         ldur w16,[x9,-4]         // 0xd0 // 208
         w17 = 0xdc0b             // '\v\xdc'
         w17 = 0x7df3             // '\xf3}'
         if (w16 == w17)
         b.eq 0x8004990           // unlikely

    loc_0x0800498c: // orphan
         brk 0x8229

    loc_0x08004990: // orphan
         blr x9                   // xzr(0x0, 0x0, 0x0, 0x0)
         w22 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80049a0 ()             // 0x80049a0(0x0, 0x0, 0x0, 0x0)
         x8 = 0x8004000
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x3d37             // '7='
         w17 = 0x59dc             // '\xdcY'
         if (w16 == w17)
         b.eq 0x80049c8           // unlikely

    loc_0x080049c4: // orphan
         brk 0x8228

    loc_0x080049c8: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w22 jmp 0x8004a24    // likely

    loc_0x080049d4: // orphan
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         x1 = var_14h             // int64_t arg_420h
         w2 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80049e4 ()             // 0x80049e4(0x8004000, 0x178014, 0x0, 0x0)
         if (w22 == 1)
         w0 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.eq 0x8004918           // unlikely

    loc_0x080049f4: // orphan
         jmp 0x8004a24

    loc_0x080049f8: // orphan
         x8 = 0x8004000
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x3d37             // '7='
         w17 = 0x59dc             // '\xdcY'
         if (w16 == w17)
         b.eq 0x8004a1c           // unlikely

    loc_0x08004a18: // orphan
         brk 0x8228

    loc_0x08004a1c: // orphan
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         w0 = ~0xb

    loc_0x08004a24: // orphan
         // CODE XREF from sym.do_hide_path @ 0x80049f4
         tbnz w0,0x1f,0x8004800   // unlikely

    loc_0x08004a28: // orphan
         x8 = 0x8004000
         w1 = 0xdc0               // '\xc0\r'
         w2 = 0x218
         x0 = [x8]                // 0xcf // 207 // int64_t arg1
         0x8004a38 ()             // 0x8004a38(0x7100051fb8680008, 0xdc0, 0x218, 0x0)
         if !x0 jmp 0x8004b10     // unlikely

    loc_0x08004a40: // orphan
         if (x19 == 0x208)
         b.hs 0x8004b94           // unlikely

    loc_0x08004a48: // orphan
         x21 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x0 + 0x10           // int64_t arg1
         x1 = var_14h             // int64_t arg_420h
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8004a58 ()             // "(" // 0x8004a58(0x10, 0x178014, 0x0, 0x0)
         w8 = 0x1
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         [x21 + 0x210] = (byte) w8
         [x21] = x21
         [x21 + 8] = x21
         0x8004a74 ()             // 0x8004a74(0x8004000, 0x178014, 0x0, 0x0)
         x19 = x23                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004a7c: // orphan
         x19 = [x19]              // 0xda // 218
         if (x19 == x23)
         b.eq 0x8004b58           // likely

    loc_0x08004a88: // orphan
         x0 = x19 + 0x10          // int64_t arg1
         x1 = var_14h             // int64_t arg_420h
         0x8004a90 ()             // 0x8004a90(0x10, 0x178014, 0x0, 0x0)
         if w0 jmp 0x8004a7c      // likely

    loc_0x08004a98: // orphan
         if !x19 jmp 0x8004b58    // likely

    loc_0x08004a9c: // orphan
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004aa4 ()             // 0x8004aa4(0x8004000, 0x0, 0x0, 0x0)
         x0 = var_14h             // int64_t arg_30h
         sym.hide_umount_path ()  // sym.hide_umount_path(0x178014)
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004ab4 ()             // "1" // 0x8004ab4(0x0, 0x0, 0x0, 0x0)
         jmp 0x8004b7c

    loc_0x08004abc: // orphan
         x21 = 0x8004000
         x21 = x21 + 0
         x19 = x21                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08004ac8: // orphan
         x19 = [x19]              // 0xda // 218
         if (x19 == x21)
         b.eq 0x8004aec           // likely

    loc_0x08004ad4: // orphan
         x20 = x19 + 0x10
         x1 = var_14h             // int64_t arg_420h
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004ae0 ()             // 0x8004ae0(0x10, 0x178014, 0x0, 0x0)
         if w0 jmp 0x8004ac8      // likely

    loc_0x08004ae8: // orphan
         if x19 jmp 0x8004b20     // unlikely

    loc_0x08004aec: // orphan
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004af4 ()             // 0x8004af4(0x8004000, 0x0, 0x0, 0x0)
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         x1 = var_14h             // int64_t arg_420h
         0x8004b04 ()             // " " // 0x8004b04(0x8004000, 0x178014, 0x0, 0x0)
         w0 = ~0x1
         jmp 0x8004800

    loc_0x08004b10: // orphan
         x0 = var_14h             // int64_t arg_30h
         sym.hide_umount_path ()  // sym.hide_umount_path(0x178014)
         w0 = ~0xb
         jmp 0x8004800

    loc_0x08004b20: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.list_del ()          // sym.list_del(0x0)
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004b30 ()             // "hBH9h" // 0x8004b30(0x8004000, 0x0, 0x0, 0x0)
         w8 = (byte) [x19 + 0x210] // 0xda // 218
         if !w8 jmp 0x8004b44     // unlikely

    loc_0x08004b3c: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_30h
         sym.hide_umount_path ()  // sym.hide_umount_path(0x0)

    loc_0x08004b44: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004b48 ()             // 0x8004b48(0x0, 0x0, 0x0, 0x0)
         x0 = 0x8004000
         x0 = x0 + 0
         jmp 0x8004b74

    loc_0x08004b58: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.list_add ()          // sym.list_add(0x0)
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004b68 ()             // 0x8004b68(0x8004000, 0x0, 0x0, 0x0)
         x0 = 0x8004000
         x0 = x0 + 0

    loc_0x08004b74: // orphan
         // CODE XREF from sym.do_hide_path @ 0x8004b54
         x1 = var_14h             // int64_t arg_420h
         0x8004b78 ()             // 0x8004b78(0x0, 0x178014, 0x0, 0x0)

    loc_0x08004b7c: // orphan
         // CODE XREFS from sym.do_hide_path @ 0x80048d0, 0x8004ab8
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8004800

    loc_0x08004b84: // orphan
         0x8004b84 ()             // 0x8004b84(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x08005ee4 ===== */
int sym.do_bind_thread_pacga_key (int esi, int edx) {
    loc_0x8005ee4:
        hint 0x19
        sp = sp - 0x20
        [sp, 0x10] = (x29,2)
        x29 = var_10h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        w2 = 0x8
        [var_8h] = x8
        [sp] = xzr
        sym._copy_from_user_1 () // "`" // sym._copy_from_user_1(0x177fe0, 0x0, 0x8)
        if !x0 jmp 0x8005f20 // unlikely
            
    loc_0x8005f20:
        w8 = [sp]     // 0x4 // 4
        w0 = ~0x15
        if (w8 == 1)
        b.lt 0x8005f44 // likely
            
    loc_0x8005f44:
        // CODE XREF from sym.do_bind_thread_pacga_key @ 0x8005f1c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        x9 = [var_8h] // 0x4 // 4
        if (x8 == x9)
        b.ne 0x8005f68 // likely
            
    loc_0x8005f68:
        0x8005f68 ()  // sym._copy_from_user_1 // 0x8005f68(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x8005f6c:
        // CALL XREF from sym.do_get_main_thread_elf0 @ 0x8005c40
        // CALL XREF from sym.do_get_thread_tpidr_el0 @ 0x8005cec
        // CALL XREF from sym.do_get_thread_pacga_key @ 0x8005d9c
        // CALL XREF from sym.do_get_thread_pacia_key @ 0x8005e5c
        // CALL XREF from sym.do_bind_thread_pacga_key @ 0x8005f10
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        tbnz w9,5,0x8005fa0 // likely
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08005f3c: // orphan
             w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8005f40 ()             // 0x8005f40(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800457c ===== */
int sym.do_get_module_base (int esi, int edx) {
    loc_0x800457c:
        hint 0x19
        sp = sp - 0x160
        [sp, 0x130] = (x29,2)
        [var_140h] = x28
        [sp, 0x150] = (x20,2)
        x29 = var_130h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = var_8h   // int64_t arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x120
        x20 = var_8h
        [x29 = x8
        0x80045b4 ()  // 0x80045b4(0x177ea8, 0x0, 0x120, 0x0)
        x0 = var_8h   // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = 0x120
        sym._copy_from_user () // "`" // sym._copy_from_user(0x177ea8, 0x0, 0x120)
        if !x0 jmp 0x80045d4 // unlikely
            
    loc_0x80045d4:
        w0 = [var_8h] // 0x4 // 4
        w2 = [var_120h] // 0x4 // 4
        x1 = x20 | 4  // int64_t arg_160h
        0x80045e0 ()  // 0x80045e0(0x0, 0x4, 0x0, 0x0)
        if !x0 jmp 0x800460c // likely
            
    loc_0x800460c:
        w0 = ~0x76    // 'v'
         // do {
    loc_0x8004610:
        // CODE XREFS from sym.do_get_module_base @ 0x80045d0, 0x8004608
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800463c // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08004624: // orphan
             (x20, 2) = 3
             x28 = [var_140h]         // 4
             (x29, 2) = 3
             sp = arg_160h
             hint 0x1d
             

    loc_0x0800463c: // orphan
         0x800463c ()             // 0x800463c(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08005d64 ===== */
int sym.do_get_thread_pacga_key (int esi, int edx) {
    loc_0x8005d64:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x30] = (x29,2)
        [var_40h] = x19
        x29 = var_30h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = var_8h   // int64_t arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = 0x20
        [x29 = x8
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        sym._copy_from_user_1 () // sym._copy_from_user_1(0x177fb8, 0x0, 0x20)
        if !x0 jmp 0x8005dd0 // unlikely
            
    loc_0x8005dd0:
        w0 = [var_8h] // 0x4 // 4
        if (w0 == 1)
        b.lt 0x8005e14 // likely
            
    loc_0x8005e14:
        w0 = ~0x15
        jmp 0x8005da8
         // do {
    loc_0x8005da8:
        // CODE XREFS from sym.do_get_thread_pacga_key @ 0x8005e10, 0x8005e18
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8005e1c // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08005dbc: // orphan
             (x29, 2) = 3
             x19 = [var_40h]          // 4
             sp = arg_50h
             hint 0x1d
             

    loc_0x08005df4: // orphan
         x1 = var_8h              // int64_t arg3
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x20
         sym._copy_to_user_1 ()   // sym._copy_to_user_1(0x0, 0x178008)
         w8 = ~0xd
         if (x0 == 0)
         csel w0,wzr,w8, eq
         jmp 0x8005da8

    loc_0x08005e1c: // orphan
         0x8005e1c ()             // 0x8005e1c(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x080232b8 ===== */
int sym.runEvent (int esi, int edx) {
    loc_0x80232b8:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x20] = (x29,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8023000
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        w0 = 0x3
        [x29 = x8
        w8 = [x19]    // 0xda // 218
        if !w8 jmp 0x8023324 // unlikely
            
    loc_0x8023324:
        // CODE XREFS from sym.runEvent @ 0x80232ec, 0x80232f8, 0x80235a8
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x80235ac // likely
            
    loc_0x80235ac:
        // CODE XREF from sym.runEvent @ 0x8023334
        0x80235ac ()  // sym._copy_from_user_3 // 0x80235ac(0x0, 0x0, 0x0, 0x0)
        // chop
         // do {
    loc_0x80235b0:
        // CALL XREF from sym.initEvent @ 0x8023188
        // CALL XREF from sym.runEvent @ 0x8023318
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x8 + 0x46] // 0xcf // 207
        x19 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        tbnz w9,5,0x80235e4 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80232f0
    loc_0x80232fc:
        x8 = 0x8023000
        w8 = (byte) [x8] // 0xcf // 207
        tbnz w8,0,0x8023320 // likely
            
    loc_0x8023320:
        // CODE XREFS from sym.runEvent @ 0x8023304, 0x8023370
        w0 = 0x1
    loc_0x08023308: // orphan
             x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             w2 = 0x18
             [sp, 8] = (xzr,2)
             [sp] = xzr
             sym._copy_from_user_3 () // sym._copy_from_user_3(0x178000, 0x0, 0x18)
             if !x0 jmp 0x8023350     // unlikely

    loc_0x08023350: // orphan
         // CODE XREF from sym.runEvent @ 0x802331c
         (w9, 2) = 3
         w8 = [x19]               // 0xda // 218
         w10 = [x20]              // 0xdb // 219
         w21 = w9 * w8
         x8 = [sp]                // 0x4 // 4
         w20 = w11 * w10
         [sp, 8] = (w21,2)
         tbnz w8,1,0x80233e8      // unlikely

    loc_0x08023370: // orphan
         tbz w8,2,0x8023320       // likely

    loc_0x08023374: // orphan
         x8 = 0x8023000
         x19 = [x8]               // 0xcf // 207
         if !x19 jmp 0x80235a4    // unlikely

    loc_0x08023380: // orphan
         x8 = 0x8023000
         w3 = [var_10h]           // 0x4 // 4
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         w1 = 0x3
         w2 = 0x2f                // '/'
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xc5ef             // '\xef\xc5'
         w17 = 0xe968             // 'h\xe9'
         if (w16 == w17)
         b.eq 0x80233b0           // unlikely

    loc_0x080233ac: // orphan
         brk 0x8228

    loc_0x080233b0: // orphan
         // CODE XREF from sym.runEvent @ 0x80233a8
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = 0x8023000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xbb9b             // '\x9b\xbb'
         w17 = 0x70e0             // '\xe0p'
         if (w16 == w17)
         b.eq 0x80233e0           // unlikely

    loc_0x080233dc: // orphan
         brk 0x8228

    loc_0x080233e0: // orphan
         // CODE XREF from sym.runEvent @ 0x80233d8
         blr x8                   // "Y" // xzr(0x0, 0x0, 0x0, 0x0)
         jmp 0x8023548

    loc_0x080233e8: // orphan
         // CODE XREF from sym.runEvent @ 0x802336c
         x8 = 0x8023000
         x19 = [x8]               // 0xcf // 207
         if !x19 jmp 0x80235a4    // unlikely

    loc_0x080233f4: // orphan
         x22 = 0x8023000
         w3 = [var_10h]           // 0x4 // 4
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x22]               // 0xdd // 221
         w1 = 0x3
         w2 = 0x2f                // '/'
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xc5ef             // '\xef\xc5'
         w17 = 0xe968             // 'h\xe9'
         if (w16 == w17)
         b.eq 0x8023424           // unlikely

    loc_0x08023420: // orphan
         brk 0x8228

    loc_0x08023424: // orphan
         // CODE XREF from sym.runEvent @ 0x802341c
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = 0x8023000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         w2 = 0x1
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xbb9b             // '\x9b\xbb'
         w17 = 0x70e0             // '\xe0p'
         if (w16 == w17)
         b.eq 0x8023454           // unlikely

    loc_0x08023450: // orphan
         brk 0x8228

    loc_0x08023454: // orphan
         // CODE XREF from sym.runEvent @ 0x802344c
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
         b.eq 0x8023484           // unlikely

    loc_0x08023480: // orphan
         brk 0x8228

    loc_0x08023484: // orphan
         // CODE XREF from sym.runEvent @ 0x802347c
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
         b.eq 0x80234b4           // unlikely

    loc_0x080234b0: // orphan
         brk 0x8228

    loc_0x080234b4: // orphan
         // CODE XREF from sym.runEvent @ 0x80234ac
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
         b.eq 0x80234e4           // unlikely

    loc_0x080234e0: // orphan
         brk 0x8228

    loc_0x080234e4: // orphan
         // CODE XREF from sym.runEvent @ 0x80234dc
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
         b.eq 0x8023514           // unlikely

    loc_0x08023510: // orphan
         brk 0x8228

    loc_0x08023514: // orphan
         // CODE XREF from sym.runEvent @ 0x802350c
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
         b.eq 0x8023544           // unlikely

    loc_0x08023540: // orphan
         brk 0x8228

    loc_0x08023544: // orphan
         // CODE XREF from sym.runEvent @ 0x802353c
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)

    loc_0x08023548: // orphan
         // CODE XREF from sym.runEvent @ 0x80233e4
         x8 = 0x8023000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x3e1d             // '\x1d>'
         w17 = 0xa281             // '\x81\xa2'
         if (w16 == w17)
         b.eq 0x802356c           // unlikely

    loc_0x08023568: // orphan
         brk 0x8228

    loc_0x0802356c: // orphan
         // CODE XREF from sym.runEvent @ 0x8023564
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = 0x8023000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w3 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xc5ef             // '\xef\xc5'
         w17 = 0xe968             // 'h\xe9'
         if (w16 == w17)
         b.eq 0x80235a0           // unlikely

    loc_0x0802359c: // orphan
         brk 0x8228

    loc_0x080235a0: // orphan
         // CODE XREF from sym.runEvent @ 0x8023598
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)

    loc_0x080235a4: // orphan
         // CODE XREFS from sym.runEvent @ 0x802337c, 0x80233f0
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8023324

}

/* ===== 0x0800d944 ===== */
int sym.do_hwbp_clear_records (int esi, int edx) {
    loc_0x800d944:
        hint 0x19
        sp = sp - 0x40
        [sp, 0x10] = (x29,2)
        [var_20h] = x21
        [sp, 0x30] = (x20,2)
        x29 = var_10h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        [var_8h] = x8
        if !x0 jmp 0x800d984 // likely
            
    loc_0x800d984:
        w19 = ~0xd
         // do {
    loc_0x800d988:
        // CODE XREFS from sym.do_hwbp_clear_records @ 0x800d9cc, 0x800da50
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        x9 = [var_8h] // 0x4 // 4
        if (x8 == x9)
        b.ne 0x800da54 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800d96c
    loc_0x800d9b8:
        w8 = [var_4h] // 4
        w8 = w8 - 0x10
        if (w8 != 0x11)
        b.hs 0x800d9d0 // likely
            
    loc_0x800d9d0:
        x0 = 0x800d000
        x0 = x0 + 0   // int64_t arg1 // "a"
        0x800d9d8 ()  // 0x800d9d8(0x800d000, 0x0, 0x0, 0x0)
        x8 = 0x800d000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800da40 // unlikely
            
    loc_0x800da40:
        w19 = ~0x12
         // do {
    loc_0x800da44:
        // CODE XREF from sym.do_hwbp_clear_records @ 0x800da3c
        x0 = 0x800d000
        x0 = x0 + 0   // int64_t arg1 // "a"
        0x800da4c ()  // 0x800da4c(0x800d000, 0x0, 0x0, 0x0)
        jmp 0x800d988
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800d99c: // orphan
             w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             (x20, 2) = 3
             x21 = [var_20h]          // 0x4 // 4
             (x29, 2) = 3
             sp = arg_40h
             hint 0x1d
             

    loc_0x0800d9fc: // orphan
         // CODE XREF from sym.do_hwbp_clear_records @ 0x800da34
         w2 = 0x5000
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x3
         0x800da0c ()             // 0x800da0c(0x0, 0x0, 0x35000, 0x0)
         [x19 = wzr

    loc_0x0800da14: // orphan
         x20 = x20 + 1
         x19 = x19 + x21
         if (x20 == 0x10)
         b.eq 0x800da38           // unlikely

    loc_0x0800da24: // orphan
         // CODE XREF from sym.do_hwbp_clear_records @ 0x800d9f8
         w8 = [var_4h]            // 4
         tbnz w8,0x1f,0x800d9fc   // unlikely

    loc_0x0800da2c: // orphan
         if (x20 == x8)
         b.ne 0x800da14           // unlikely

    loc_0x0800da34: // orphan
         jmp 0x800d9fc

    loc_0x0800da38: // orphan
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800da44

    loc_0x0800da54: // orphan
         0x800da54 ()             // sym.hw_breakpoint_parse // 0x800da54(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800392c ===== */
int sym.do_read_physical_memory (int esi, int edx) {
    loc_0x800392c:
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
        x0 = var_40h  // int64_t arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = 0x28     // '('
        [x29 = x8
        [sp, 0x58] = (xzr,2)
        [sp, 0x48] = (xzr,2)
        [var_40h] = xzr
        sym._copy_from_user () // "`" // sym._copy_from_user(0x177f60, 0x0, 0x28)
        if !x0 jmp 0x8003988 // unlikely
            
    loc_0x8003988:
        // CODE XREF from sym.do_read_physical_memory @ 0x800397c
        x8 = [var_58h] // 0x4 // 4
        if !x8 jmp 0x80039f4 // likely
            
    loc_0x80039f4:
        // CODE XREF from sym.do_read_physical_memory @ 0x800398c
        w23 = ~0x15
        jmp 0x8003a74
         // do {
    loc_0x8003a74:
        // CODE XREFS from sym.do_read_physical_memory @ 0x8003984, 0x80039f0, 0x80039f8
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8003e50 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800399c: // orphan
             w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x80039a4 ()             // 0x80039a4(0x0, 0x0, 0x0, 0x0)
             x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             0x80039b0 ()             // 0x80039b0(0x0, 0x0, 0x0, 0x0)
             if !x20 jmp 0x80039ec    // likely

    loc_0x080039b8: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80039bc ()             // 0x80039bc(0x0, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x20 + 0x40
         jmp 0x80039fc

    loc_0x080039dc: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003a18
         dmb ishld
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80039e4 ()             // 0x80039e4(0x0, 0x0, 0x0, 0x0)
         if x19 jmp 0x8003a28     // unlikely

    loc_0x080039ec: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x8003998, 0x80039b4, 0x8003a24, 0x8003e4c
         w23 = ~0x2
         jmp 0x8003a74

    loc_0x080039fc: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x80039c8
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08003a04: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003a10
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8003a04     // unlikely

    loc_0x08003a14: // orphan
         if (w8 == 1)
         b.eq 0x80039dc           // unlikely

    loc_0x08003a1c: // orphan
         // CODE XREF from sym.do_read_physical_memory @ +0xac
         if (w8 == 0)
         jmp ifle 0x8003e40       // likely

    loc_0x08003a24: // orphan
         if !x19 jmp 0x80039ec    // likely

    loc_0x08003a28: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x80039e8, 0x8003e48
         x27 = [x19 + 0x70]       // 0xda // 218
         x1 = [var_48h]           // 4 // int64_t arg2
         x2 = x29 - 0x10          // int64_t arg3
         x3 = x29 - 0x18          // int64_t arg4
         [x29 = xzr
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.lockfree_va_to_pa () // sym.lockfree_va_to_pa(-1, 0x0, 0x177ff0, 0x177fe8, -1)
         ldur x8,[x29,-0x10]
         if (w0 == 0)
         x1 = var_40h             // int64_t arg3
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x28                // '('
         csel x8,xzr,x8, lt
         [var_58h_2] = x8
         sym._copy_to_user ()     // sym._copy_to_user(0x0, 0x178040)
         if !x0 jmp 0x8003ab0     // likely

    loc_0x08003a68: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x8003be0, 0x8003e00
         w23 = ~0xd

    loc_0x08003a6c: // orphan
         // XREFS: CODE 0x08003b24  CODE 0x08003c28  CODE 0x08003c50  
         // XREFS: CODE 0x08003c7c  CODE 0x08003c98  CODE 0x08003ca8  
         // XREFS: CODE 0x08003cb8  CODE 0x08003cc8  CODE 0x08003cec  
         // XREFS: CODE 0x08003e1c  CODE 0x08003e3c  
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003a70 ()             // 0x8003a70(0x0, 0x0, 0x0, 0x0)

    loc_0x08003a88: // orphan
         w0 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_e0h
         hint 0x1d
         

    loc_0x08003ab0: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003a64
         x28 = 0x8003000
         x20 = 0x8003000
         x8 = [x28]               // 0xe3 // 227
         if x8 jmp 0x8003ad4      // likely

    loc_0x08003ac0: // orphan
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         0x8003ac8 ()             // 0x8003ac8(0x8003000, 0x0, 0x0, 0x0)
         [x28] = x0
         if !x0 jmp 0x8003aec     // unlikely

    loc_0x08003ad4: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003abc
         x8 = [x20]               // 0xdb // 219
         if x8 jmp 0x8003aec      // likely

    loc_0x08003adc: // orphan
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         0x8003ae4 ()             // 0x8003ae4(0x8003000, 0x0, 0x0, 0x0)
         [x20] = x0

    loc_0x08003aec: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x8003ad0, 0x8003ad8
         x8 = 0x8003000
         x8 = [x8]                // 0xcf // 207
         if x8 jmp 0x8003b0c      // likely

    loc_0x08003af8: // orphan
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         0x8003b00 ()             // 0x8003b00(0x8003000, 0x0, 0x0, 0x0)
         x8 = 0x8003000
         [x8] = x0

    loc_0x08003b0c: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003af4
         x22 = [var_58h]          // 0x4 // 4
         if !x22 jmp 0x8003e18    // likely

    loc_0x08003b14: // orphan
         x21 = [var_48h]          // 4
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8003b28

    loc_0x08003b20: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x8003b50, 0x8003bfc, 0x8003e14
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x22 jmp 0x8003a6c    // likely

    loc_0x08003b28: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003b1c
         x2 = var_38h             // int64_t arg3
         x3 = var_30h             // int64_t arg4
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [sp, 0x30] = (xzr,2)
         sym.lockfree_va_to_pa () // sym.lockfree_va_to_pa(0x0, 0x0, 0x178038, 0x178030, -1)
         tbnz w0,0x1f,0x8003c1c   // unlikely

    loc_0x08003b44: // orphan
         x8 = [var_30h]           // 0x4 // 4
         if (x22 == x8)           // u"0\b" // u"0\b"
         csel x25,x22,x8, lo
         if !x25 jmp 0x8003b20    // likely

    loc_0x08003b54: // orphan
         x26 = [var_38h]          // 0x4 // 4

    loc_0x08003b58: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003bf8
         x9 = 0x8003000
         x8 = x26 & 0xfff
         w10 = 0x1000
         x9 = [x9]                // 0xd0 // 208
         x8 = x10 - x8
         x10 = [var_50h]          // 0x4 // 4
         if (x8 == x25)           // u"0\b"
         x11 = [x28]              // 0xe3 // 227
         x9 = x26 - x9
         csel x23,x8,x25, lo
         x0 = x10 + x20
         x24 = x9 | 0xffffff8000000000
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w16,[x11,-4]        // 0xd2 // 210
         w17 = 0xa42c             // ',\xa4'
         w17 = 0xacff             // '\xff\xac'
         if (w16 == w17)          // u"0\b"
         b.eq 0x8003ba8           // unlikely

    loc_0x08003ba4: // orphan
         brk 0x822b

    loc_0x08003ba8: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003ba0
         blr x11                  // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = 0x8003000
         w8 = [x8]                // 0xcf // 207
         if !w8 jmp 0x8003c00     // unlikely

    loc_0x08003bb8: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003c18
         x9 = x23 + x24
         x10 = !x8
         x11 = x9 - 1
         x9 = x24 & x10
         x10 = x11 & x10

    loc_0x08003bcc: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003bd8
         dc civac,x9
         x9 = x9 + x8
         if (x9 == x10)           // u"0\b" // u"0\b"
         b.ls 0x8003bcc           // likely

    loc_0x08003bdc: // orphan
         dsb sy
         if x0 jmp 0x8003a68      // unlikely

    loc_0x08003be4: // orphan
         x26 = x23 + x26
         x25 = x25 - x23
         x21 = x23 + x21
         x20 = x23 + x20
         x22 = x22 - x23
         b.ne 0x8003b58           // likely

    loc_0x08003bfc: // orphan
         jmp 0x8003b20

    loc_0x08003c00: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003bb4
         mrs x8,ctr_el0           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x4
         ubfx x8,x8,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x9 << x8
         x9 = 0x8003000
         [x9] = w8
         jmp 0x8003bb8

    loc_0x08003c1c: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003b40
         x8 = 0x8003000
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x8003a6c     // unlikely

    loc_0x08003c2c: // orphan
         ubfx x8,x21,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x27 + x8,lsl 3]    // 0xcf000000e2 // 889058230498
         [x29 = x8
         ldur x8,[x29,-0x10]
         [x29 = x8
         ldur x9,[x29,-0x18]
         w8 = ~w9
         [var_0h] = x9
         if ((x8 & 3) == 0)       // u"0\b"
         b.ne 0x8003a6c           // likely

    loc_0x08003c54: // orphan
         x8 = 0x8003000
         x9 = x9 & 0x7ffffff000
         ubfx x10,x21,0x15, 9     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         x9 = x9 - x8
         x9 = x9 | 0xffffff8000000000
         x9 = [x9 + x10,lsl 3]    // 0xd1000000d0 // 897648165072
         w10 = ~w9
         [var_0h_2] = x9
         if ((x10 & 3) == 0)      // u"0\b"
         b.ne 0x8003a6c           // likely

    loc_0x08003c80: // orphan
         x9 = x9 & 0x7ffffff000
         x8 = x9 - x8
         ubfx x9,x21,0xc, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 | 0xffffff8000000000
         x8 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         [var_0h_3] = x8
         if !x8 jmp 0x8003a6c     // unlikely

    loc_0x08003c9c: // orphan
         x9 = 0x1                 // u"0\b"
         x9 = 0x400
         x9 = x8 & x9
         if x9 jmp 0x8003a6c      // unlikely

    loc_0x08003cac: // orphan
         x9 = x8 << 0x37
         ubfx x26,x9,0x3a, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w26 == 0x1c)         // u"0\b"
         b.hs 0x8003a6c           // unlikely

    loc_0x08003cbc: // orphan
         ubfx x28,x8,8, 0x32      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x9 & 0x7c00000000000000
         x8 = x28 | x8
         if !x8 jmp 0x8003a6c     // likely

    loc_0x08003ccc: // orphan
         x24 = x21 & 0xfff
         w8 = 0x1000
         w1 = 0xc00
         x8 = x8 - x24
         if (x22 == x8)           // u"0\b"
         csel x25,x22,x8, lo
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003ce8 ()             // 0x8003ce8(0x0, 0xc00, 0x0, 0x0)
         if !x0 jmp 0x8003a6c     // likely

    loc_0x08003cf0: // orphan
         x8 = x25 + x24
         [sp, 8] = (x27,2)
         if (x8 == 1)             // u"0\b"
         b.hi 0x8003e34           // unlikely

    loc_0x08003d00: // orphan
         x8 = 0x8003000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x8003e34     // unlikely

    loc_0x08003d0c: // orphan
         x27 = [x8 + x26,lsl 3]   // 0xe1000000cf // 966367641807
         if !x27 jmp 0x8003e34    // unlikely

    loc_0x08003d14: // orphan
         x8 = [x27 + 0x140]       // 0xe2 // 226
         if !x8 jmp 0x8003e34     // unlikely

    loc_0x08003d1c: // orphan
         mrs x8,tpidr_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0xc00
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x3 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8003d30 ()             // 0x8003d30(0xc00, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8003e34     // unlikely

    loc_0x08003d38: // orphan
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = [x27 + 0x140]       // 0xe2 // 226 // int64_t arg1
         w1 = 0x1                 // u"0\b"
         w2 = 0x800
         w3 = 0xc00
         x4 = 0x8003000
         x4 = x4 + 0
         0x8003d54 ()             // 0x8003d54(-1, 0x1, 0x800, 0xc00)
         if !x0 jmp 0x8003e28     // unlikely

    loc_0x08003d5c: // orphan
         x8 = x28 << 3
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_e0h
         w2 = 0x1000
         w3 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x0 + 0x20] = x8
         0x8003d74 ()             // 0x8003d74(0x0, 0x0, 0x1000, 0x0)
         if !w0 jmp 0x8003e20     // likely

    loc_0x08003d7c: // orphan
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003d80 ()             // 0x8003d80(0x0, 0x0, 0x0, 0x0)
         w28 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003d8c ()             // 0x8003d8c(0x0, 0x0, 0x0, 0x0)
         if w28 jmp 0x8003e28     // unlikely

    loc_0x08003d94: // orphan
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.kmap_atomic ()       // sym.kmap_atomic(0x0)
         x1 = x0 + x24            // int64_t arg_e0h
         x24 = [var_sp_10h]       // 4
         x2 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003dac ()             // 0x8003dac(0x0, 0x0, 0x0, 0x0)
         sym.__kunmap_atomic ()
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8003dbc ()             // 0x8003dbc(0x0, 0x0, 0x0, 0x0)
         x8 = [var_50h]           // 0x4 // 4
         x28 = 0x8003000
         x1 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x28]               // 0xe3 // 227
         x2 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x8 + x20
         ldur w16,[x9,-4]         // 0xd0 // 208
         w17 = 0xa42c             // ',\xa4'
         w17 = 0xacff             // '\xff\xac'
         if (w16 == w17)
         b.eq 0x8003df0           // unlikely

    loc_0x08003dec: // orphan
         brk 0x8229

    loc_0x08003df0: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003de8
         blr x9                   // xzr(0x0, 0x0, 0x0, 0x0)
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003dfc ()             // 0x8003dfc(0x0, 0x0, 0x0, 0x0)
         if x23 jmp 0x8003a68     // unlikely

    loc_0x08003e04: // orphan
         x27 = [var_sp_8h]        // 0x4 // 4
         x21 = x25 + x21
         x20 = x25 + x20
         x22 = x22 - x25
         jmp 0x8003b20

    loc_0x08003e18: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003b10
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8003a6c

    loc_0x08003e20: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003d78
         x0 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003e24 ()             // 0x8003e24(0x0, 0x0, 0x0, 0x0)

    loc_0x08003e28: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x8003d58, 0x8003d90
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8003e30 ()             // 0x8003e30(0x0, 0x0, 0x0, 0x0)

    loc_0x08003e34: // orphan
         // CODE XREFS from sym.do_read_physical_memory @ 0x8003cfc, 0x8003d08, 0x8003d10, 0x8003d18, 0x8003d34
         x0 = [var_sp_10h]        // 0x4 // 4 // int64_t arg1
         0x8003e38 ()             // 0x8003e38(0x0, 0x0, 0x0, 0x0)
         jmp 0x8003a6c

    loc_0x08003e40: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003a20
         w1 = 0x3
         0x8003e44 ()             // 0x8003e44(0x0, 0x3, 0x0, 0x0)
         if x19 jmp 0x8003a28     // unlikely

    loc_0x08003e4c: // orphan
         jmp 0x80039ec

    loc_0x08003e50: // orphan
         // CODE XREF from sym.do_read_physical_memory @ 0x8003a84
         0x8003e50 ()             // sym.lockfree_va_to_pa // 0x8003e50(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x08006f10 ===== */
int sym.do_config_gyro_hook (int esi, int edx) {
    loc_0x8006f10:
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
        mrs x27,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x21 = x0 << 8 // arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x29 = x8
        w8 = (byte) [x27 + 0x46] // 0xe2 // 226
        [x29, -0x18] = (xzr,2)
        tbnz w8,5,0x8006f64 // likely
            
    loc_0x8006f64:
        x8 = x19 & x21,asr 8
         // do {
    loc_0x8006f68:
        x23 = xzr | 0x7fffff0000
        x23 = 0xfff1  // '\xf1\xff'
        if (x8 == x23) // u"0\b"
        b.hs 0x80073f8 // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08006f78: // orphan
             jmp 0x8007428

    loc_0x08006f80: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8007434
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x27 + 8]           // 0xe2 // 226
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006fa8: // orphan
         x1 = x19 & 0xff7fffffffffffff // int64_t arg_a0h
         x0 = x29 - 0x18          // int64_t arg1
         w2 = 0x10
         0x8006fb4 ()             // 0x8006fb4(0x177fe8, 0x0, 0x10, 0x0)
         jmp 0x8007438

    loc_0x08006fc0: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8007444
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08006fe4: // orphan
         if x0 jmp 0x80073fc      // unlikely

    loc_0x08006fe8: // orphan
         ldur w8,[x29,-0x14]
         if w8 jmp 0x8006ff8      // unlikely

    loc_0x08006ff0: // orphan
         w8 = 0x3
         [x29 = w8

    loc_0x08006ff8: // orphan
         (w25, 2) = 3
         x0 = 0x8006000
         // XREFS(78)
         x0 = x0 + 0              // int64_t arg1
         0x8007004 ()             // 0x8007004(0x8006000, 0x0, 0x0, 0x0)
         x8 = 0x8007000
         ldur w9,[x29,-0x18]
         w8 = (byte) [x8]         // 0xcf // 207
         if !w9 jmp 0x80070bc     // likely

    loc_0x08007018: // orphan
         if w8 jmp 0x80070bc      // unlikely

    loc_0x0800701c: // orphan
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         0x8007024 ()             // 0x8007024(0x8007000, 0x0, 0x0, 0x0)
         x22 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         0x8007034 ()             // 0x8007034(0x8007000, 0x0, 0x0, 0x0)
         if !x0 jmp 0x80070e8     // unlikely

    loc_0x0800703c: // orphan
         [sp, 0x18] = (x0,2)
         0x8007040 ()             // 0x8007040(0x0, 0x0, 0x0, 0x0)
         x26 = 0x8007000
         x26 = x26 + 0
         x21 = 0x8007000
         x21 = x21 + 0
         x23 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007058: // orphan
         x20 = [x23 + 0x550]      // 0xde // 222
         x23 = x20 - 0x550
         if (x23 == x26)          // u"0\b" // u"0\b"
         b.eq 0x80071c0           // unlikely

    loc_0x08007068: // orphan
         x0 = x20 + 0x2e0         // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
         0x8007070 ()             // 0x8007070(0x2e0, 0x0, 0x0, 0x0)
         if w0 jmp 0x8007058      // likely

    loc_0x08007078: // orphan
         x21 = x20 - 0x510
         jmp 0x8007468

    loc_0x0800708c: // orphan
         w9 = w8 + 1              // u"0\b"
         w8 = w9 | w8             // u"0\b"
         tbnz w8,0x1f,0x800740c   // unlikely

    loc_0x08007098: // orphan
         0x8007098 ()             // "W\t" // 0x8007098(0x0, 0x0, 0x0, 0x0)
         if !x23 jmp 0x80071c4    // likely

    loc_0x080070a0: // orphan
         w8 = [x20 + 0xc8]        // 0xdb // 219
         [var_sp_14h] = w8
         if !x22 jmp 0x80071cc    // likely

    loc_0x080070ac: // orphan
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         blr x22                  // xzr(0x0, 0x0, 0x0, 0x0)
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x80071f4

    loc_0x080070bc: // orphan
         if w9 jmp 0x80070e8      // unlikely

    loc_0x080070c0: // orphan
         if !w8 jmp 0x80070e8     // likely

    loc_0x080070c4: // orphan
         x20 = 0x8007000
         x20 = x20 + 0
         x8 = 0x8007000
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         [x8] = (byte) wzr
         0x80070d8 ()             // 0x80070d8(0x8007000, 0x0, 0x0, 0x0)
         sym.gyro_unhook_all_locked ()
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80070e4 ()             // 0x80070e4(0x8007000, 0x0, 0x0, 0x0)

    loc_0x080070e8: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x80073f4
         x8 = 0x8007000
         x8 = x8 + 0
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         [x8 + 8] = w25
         [x8 + 0xc] = w24
         ldur w9,[x29,-0x14]
         [x8 + 4] = w9
         ldur w9,[x29,-0x18]
         if (w9 == 0)             // u"0\b" // u"0\b"
         cset w9,ne
         [x8] = (byte) w9
         [x29 = w9
         [x29, -0x10] = (w25,2)
         0x8007120 ()             // 0x8007120(0x8007000, 0x0, 0x0, 0x0)
         w8 = (byte) [x27 + 0x46] // 0xe2 // 226
         tbnz w8,5,0x8007138      // likely

    loc_0x0800712c: // orphan
         x9 = [x27]               // 0xe2 // 226
         x8 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbz w9,0x1a,0x800713c    // likely

    loc_0x08007138: // orphan
         x8 = x19 & x21,asr 8

    loc_0x0800713c: // orphan
         if (x8 == x23)           // u"0\b" // u"0\b"
         b.hs 0x8007404           // likely

    loc_0x08007144: // orphan
         jmp 0x8007448

    loc_0x0800714c: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8007454
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x27 + 8]           // 0xe2 // 226
         mrs x10,ttbr1_el1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfxil x11,x10,0, 0x30    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x11        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr0_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007174: // orphan
         x0 = x19 & 0xff7fffffffffffff // int64_t arg1
         x1 = x29 - 0x18          // int64_t arg_a0h
         w2 = 0x10
         0x8007180 ()             // 0x8007180(0x0, 0x177fe8, 0x10, 0x0)
         jmp 0x8007458

    loc_0x0800718c: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8007464
         mrs x8,daif              // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr daifset,3            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         mrs x9,ttbr1_el1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x9 & 0xffffffffffff
         x10 = x9 - 1,lsl 12
         msr ttbr0_el1,x10        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         msr ttbr1_el1,x9         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         
         msr daif,x8              // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080071b0: // orphan
         if (x0 == 0)             // u"0\b" // u"0\b"
         w8 = ~0xd
         csel w19,wzr,w8, eq
         jmp 0x80074d4

    loc_0x080071c0: // orphan
         0x80071c0 ()             // "S" // 0x80071c0(0x0, 0x0, 0x0, 0x0)

    loc_0x080071c4: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8007494
         w19 = ~0x2
         jmp 0x80074c8

    loc_0x080071cc: // orphan
         x26 = x20 + 0x3b8
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80071d4 ()             // 0x80071d4(0x3b8, 0x0, 0x0, 0x0)
         x20 = [x20 + 0x310]      // 0xdb // 219
         if !x20 jmp 0x80071ec    // unlikely

    loc_0x080071e0: // orphan
         jmp 0x8007528

    loc_0x080071ec: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800753c
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80071f0 ()             // 0x80071f0(0x0, 0x0, 0x0, 0x0)

    loc_0x080071f4: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x80070b8
         jmp 0x8007498

    loc_0x08007208: // orphan
         dmb ishld
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8007210 ()             // 0x8007210(0x0, 0x0, 0x0, 0x0)
         if !x20 jmp 0x80074c4    // likely

    loc_0x08007218: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8007520
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         0x8007220 ()             // 0x8007220(0x8007000, 0x0, 0x0, 0x0)
         sym.gyro_unhook_all_locked ()
         0x8007228 ()             // 0x8007228(0x8007000, 0x0, 0x0, 0x0)
         x0 = x20 + 0x80          // int64_t arg1
         [sp] = x0
         0x8007234 ()             // 0x8007234(0x80, 0x0, 0x0, 0x0)
         [var_sp_8h] = x20
         x21 = [x20 + 0x20]       // 0xdb // 219
         w8 = [x21]               // 0xdc // 220
         if w8 jmp 0x800729c      // likely

    loc_0x08007248: // orphan
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800724c: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x80073b4
         x0 = [sp]                // 0x4 // 4 // int64_t arg1
         0x8007250 ()             // 0x8007250(0x80, 0x0, 0x0, 0x0)
         0x8007254 ()             // 0x8007254(0x80, 0x0, 0x0, 0x0)
         x8 = 0x8007000
         if (w23 == 0)            // u"0\b" // u"0\b"
         x9 = 0x8007000
         [x8] = w23
         cset w8,gt
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         [x9] = (byte) w8
         0x8007278 ()             // 0x8007278(0x8007000, 0x0, 0x0, 0x0)
         x0 = [var_sp_8h]         // 0x4 // 4
         x8 = [var_sp_18h]        // 0x4 // 4
         blr x8                   // "w\n" // xzr(0x0, 0x0, 0x0, 0x0)
         if w23 jmp 0x80073d4     // unlikely

    loc_0x0800728c: // orphan
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         0x8007294 ()             // "T" // 0x8007294(0x8007000, 0x0, 0x0, 0x0)
         jmp 0x80073e8

    loc_0x0800729c: // orphan
         x22 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = 0x8007000
         x12 = 0x8007000
         x12 = x12 + 0
         x13 = 0x8007000
         x13 = x13 + 0

    loc_0x080072b8: // orphan
         x8 = [x21 + 8]           // 0xdc // 220
         x20 = [x8 + x22,lsl 3]   // 0xdd000000cf // 949187772623
         if !x20 jmp 0x800739c    // unlikely

    loc_0x080072c4: // orphan
         x8 = [x20 + 0xb8]        // 0xdb // 219
         if !x8 jmp 0x800739c     // unlikely

    loc_0x080072cc: // orphan
         w8 = (word) [x8]         // 0xcf // 207
         w8 = w8 & 0xf000
         if (w8 == 0xc)           // u"0\b"
         b.ne 0x800739c           // likely

    loc_0x080072dc: // orphan
         x28 = [x20 + 0xd8]       // 0xdb // 219
         if !x28 jmp 0x800739c    // likely

    loc_0x080072e4: // orphan
         w8 = (word) [x28 + 4]    // 0xe3 // 227
         if (w8 == 5)             // u"0\b"
         b.ne 0x800739c           // likely

    loc_0x080072f0: // orphan
         x26 = [x28 + 0x20]       // 0xe3 // 227
         if !x26 jmp 0x800739c    // likely

    loc_0x080072f8: // orphan
         w8 = [x26]               // 0xe1 // 225
         if (w8 == 1)             // u"0\b"
         b.ne 0x800739c           // likely

    loc_0x08007304: // orphan
         x8 = [x11]               // 0xd2 // 210
         if x8 jmp 0x8007350      // likely

    loc_0x0800730c: // orphan
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_a0h
         w2 = 0x100
         [x11] = x26
         0x8007320 ()             // 0x8007320(0x8007000, 0x0, 0x100, 0x0)
         x12 = 0x8007000
         x12 = x12 + 0
         x8 = 0x8007000
         x8 = x8 + 0
         x13 = 0x8007000
         x13 = x13 + 0
         [x12 + 0x88] = x8
         x11 = 0x8007000
         x8 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = [x28 + 0x20]        // 0xe3 // 227
         x26 = x9                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08007350: // orphan
         if (x26 == x8)
         b.ne 0x800739c           // unlikely

    loc_0x08007358: // orphan
         jmp 0x80073b8

    loc_0x08007368: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x80073d0
         if (w23 == 0x400)
         [x28 + 0x20] = x12
         b.hs 0x8007414           // unlikely

    loc_0x08007374: // orphan
         w8 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x8
         ubfiz x10,x23,4, 0x20    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi x9,x8,4, 0x20        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x13 + x10] = x28
         if (x9 == 4)
         b.hi 0x8007418           // unlikely

    loc_0x08007390: // orphan
         x8 = x13 + x8,lsl 4
         w23 = w23 + 1
         [x8 + 8] = x20

    loc_0x0800739c: // orphan
         w8 = [x21]               // 0xdc // 220
         x22 = x22 + 1
         if (x22 == x8)
         b.hs 0x800724c           // likely

    loc_0x080073ac: // orphan
         if (w23 == 0x400)
         b.lt 0x80072b8           // likely

    loc_0x080073b4: // orphan
         jmp 0x800724c

    loc_0x080073b8: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8007358
         x8 = x20 + 0x18
         prfm pstl1strm,[x8]

    loc_0x080073c0: // orphan
         ldxr x9,[x8]
         x9 = x9 + 1
         stxr w10,x9,[x8]
         if w10 jmp 0x80073c0     // unlikely

    loc_0x080073d0: // orphan
         jmp 0x8007368

    loc_0x080073d4: // orphan
         w2 = [var_sp_14h]        // 4
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         w1 = w23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80073e4 ()             // 0x80073e4(0x8007000, 0x0, -1, 0x0)

    loc_0x080073e8: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8007298
         x21 = [var_20h]          // 0x4 // 4
         x23 = xzr | 0x7fffff0000
         x23 = 0xfff1             // '\xf1\xff'
         jmp 0x80070e8

    loc_0x080073f8: // orphan
         w0 = 0x10

    loc_0x080073fc: // orphan
         if (x0 == 0x11)
         b.hs 0x800741c           // unlikely

    loc_0x08007404: // orphan
         w19 = ~0xd
         jmp 0x80074d4

    loc_0x0800740c: // orphan
         w1 = 0x1
         jmp 0x8007484

    loc_0x08007414: // orphan
         brk 0x5512

    loc_0x08007418: // orphan
         brk 0x1

    loc_0x0800741c: // orphan
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         0x8007424 ()             // 0x8007424(0x8007000, 0x0, 0x0, 0x0)

    loc_0x08007428: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8006f78
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x8006fa8   // unlikely

    loc_0x08007434: // orphan
         jmp 0x8006f80

    loc_0x08007438: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8006fb8
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x8006fe4   // unlikely

    loc_0x08007444: // orphan
         jmp 0x8006fc0

    loc_0x08007448: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8007144
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x8007174   // unlikely

    loc_0x08007454: // orphan
         jmp 0x800714c

    loc_0x08007458: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8007184
         x8 = 0x8007000
         x8 = [x8]                // 0xcf // 207
         tbnz x8,0x26,0x80071b0   // unlikely

    loc_0x08007464: // orphan
         jmp 0x800718c

    loc_0x08007468: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x800707c
         prfm pstl1strm,[x21]

    loc_0x0800746c: // orphan
         ldxr w8,[x21]
         w9 = w8 + 1
         stxr w10,w9,[x21]
         if w10 jmp 0x800746c     // unlikely

    loc_0x0800747c: // orphan
         if w8 jmp 0x800708c      // unlikely

    loc_0x08007480: // orphan
         w1 = 0x2

    loc_0x08007484: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x8007410
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8007488 ()             // 0x8007488(0x0, 0x0, 0x0, 0x0)
         0x800748c ()             // 0x800748c(0x0, 0x0, 0x0, 0x0)
         if x23 jmp 0x80070a0     // unlikely

    loc_0x08007494: // orphan
         jmp 0x80071c4

    loc_0x08007498: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x80071f4
         w9 = 0x1
         prfm pstl1strm,[x21]

    loc_0x080074a0: // orphan
         ldxr w8,[x21]
         w10 = w8 - w9
         stlxr w11,w10,[x21]
         if w11 jmp 0x80074a0     // unlikely

    loc_0x080074b0: // orphan
         if (w8 == 1)
         b.eq 0x8007208           // unlikely

    loc_0x080074b8: // orphan
         if (w8 == 0)
         jmp ifle 0x8007510       // likely

    loc_0x080074c0: // orphan
         if x20 jmp 0x8007218     // unlikely

    loc_0x080074c4: // orphan
         w19 = ~0x1

    loc_0x080074c8: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x80071c8
         x0 = 0x8007000
         x0 = x0 + 0              // int64_t arg1
         0x80074d0 ()             // 0x80074d0(0x8007000, 0x0, 0x0, 0x0)

    loc_0x080074d4: // orphan
         // CODE XREFS from sym.do_config_gyro_hook @ 0x80071bc, 0x8007408
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x620]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x8007524           // likely

    loc_0x080074e8: // orphan
         w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_a0h
         hint 0x1d
         

    loc_0x08007510: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = 0x3
         0x8007518 ()             // 0x8007518(0x0, 0x3, 0x0, 0x0)
         if !x20 jmp 0x80074c4    // likely

    loc_0x08007520: // orphan
         jmp 0x8007218

    loc_0x08007524: // orphan
         0x8007524 ()             // 0x8007524(0x0, 0x0, 0x0, 0x0)

    loc_0x08007528: // orphan
         // CODE XREF from sym.do_config_gyro_hook @ 0x80071e0
         prfm pstl1strm,[x20]

    loc_0x0800752c: // orphan
         ldxr w8,[x20]
         w8 = w8 + 1
         stxr w9,w8,[x20]
         if w9 jmp 0x800752c      // unlikely

    loc_0x0800753c: // orphan
         jmp 0x80071ec

}

/* ===== 0x08005c0c ===== */
int sym.do_get_main_thread_elf0 (int esi, int edx) {
    loc_0x8005c0c:
        hint 0x19
        sp = sp - 0x40
        [sp, 0x20] = (x29,2)
        [var_30h] = x19
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = var_8h   // int64_t arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = 0x10
        [x29 = x8
        [sp, 8] = (xzr,2)
        sym._copy_from_user_1 () // "`" // sym._copy_from_user_1(0x177fc8, 0x0, 0x10)
        if !x0 jmp 0x8005c50 // unlikely
            
    loc_0x8005c50:
        w0 = [var_8h] // 0x4 // 4
        if (w0 == 1)
        b.lt 0x8005c84 // likely
            
    loc_0x8005c84:
        w0 = ~0x15
         // do {
    loc_0x8005c88:
        // CODE XREFS from sym.do_get_main_thread_elf0 @ 0x8005c4c, 0x8005c80
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8005cb0 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08005c9c: // orphan
             (x29, 2) = 3
             x19 = [var_30h]          // 0x4 // 4
             sp = arg_40h
             hint 0x1d
             

    loc_0x08005cb0: // orphan
         0x8005cb0 ()             // 0x8005cb0(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x0800cc70 ===== */
int sym.do_hwbp_set (int esi, int edx) {
    loc_0x800cc70:
        hint 0x19
        sp = sp - 0x1d0
        [sp, 0x1a0] = (x29,2)
        [sp, 0x1b0] = (x28,2)
        [sp, 0x1c0] = (x20,2)
        x29 = var_1a0h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        if !x0 jmp 0x800ccc0 // likely
            
    loc_0x800ccc0:
        w20 = ~0xd
         // do {
    loc_0x800ccc4:
        // XREFS: CODE 0x0800cd68  CODE 0x0800cd8c  CODE 0x0800cf74
        // XREFS: CODE 0x0800cfa8  CODE 0x0800cff8  CODE 0x0800d00c
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800cd90 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800cc98
    loc_0x800ccf4:
        x21 = 0x800c000
        w20 = ~0x15
        x8 = [x21]    // 0xdc // 220
        if !x8 jmp 0x800ccc4 // unlikely
    loc_0x800cd04:
        w0 = [sp]     // 0x4 // 4
        if (w0 == 1)
        b.lt 0x800ccc4 // unlikely
    loc_0x800cd10:
        w8 = [var_4h] // 4
        if !w8 jmp 0x800ccc4 // likely
    loc_0x800cd18:
        if (w8 == 0x10)
        b.hi 0x800ccc4 // unlikely
    loc_0x800cd20:
        0x800cd20 ()  // 0x800cd20(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800cd64 // likely
            
    loc_0x800cd64:
        w20 = ~0x2
        jmp 0x800ccc4
    loc_0x0800ccd8: // orphan
             w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             (x20, 2) = 3
             (x28, 2) = 3
             (x29, 2) = 3
             sp = arg_1d0h
             hint 0x1d
             

    loc_0x0800cd28: // orphan
         w8 = [x0 + 0x61c]        // 0xc7 // 199
         w9 = [sp]                // 0x4 // 4
         if (w8 == w9)
         x8 = x0 + 0x40
         b.ne 0x800cd6c           // likely

    loc_0x0800cd3c: // orphan
         jmp 0x800cd94

    loc_0x0800cd50: // orphan
         dmb ishld
         0x800cd54 ()             // 0x800cd54(0x0, 0x0, 0x0, 0x0)
         w9 = [var_4h]            // 4
         if w9 jmp 0x800cdc4      // unlikely

    loc_0x0800cd60: // orphan
         jmp 0x800ce78

    loc_0x0800cd6c: // orphan
         jmp 0x800cfcc

    loc_0x0800cd80: // orphan
         dmb ishld
         0x800cd84 ()             // 0x800cd84(0x0, 0x0, 0x0, 0x0)
         w20 = ~0x15
         jmp 0x800ccc4

    loc_0x0800cd90: // orphan
         0x800cd90 ()             // "*" // 0x800cd90(0x0, 0x0, 0x0, 0x0)

    loc_0x0800cd94: // orphan
         // CODE XREF from sym.do_hwbp_set @ 0x800cd3c
         w10 = 0x1
         prfm pstl1strm,[x8]

    loc_0x0800cd9c: // orphan
         ldxr w9,[x8]
         w11 = w9 - w10
         stlxr w12,w11,[x8]
         if w12 jmp 0x800cd9c     // unlikely

    loc_0x0800cdac: // orphan
         if (w9 == 1)
         b.eq 0x800cd50           // unlikely

    loc_0x0800cdb4: // orphan
         if (w9 == 0)
         jmp ifle 0x800cfac       // likely

    loc_0x0800cdbc: // orphan
         w9 = [var_4h]            // 4
         if !w9 jmp 0x800ce78     // likely

    loc_0x0800cdc4: // orphan
         x10 = xzr | 0x5555555555555555
         x8 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = ~0x7
         x10 = 0xf555             // 'U\xf5'
         madd x10,x8,x10, x11
         x11 = x9 + x9,lsl 1
         x9 = x10 >> 3
         x10 = x11 << 3
         x11 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800cde8: // orphan
         if (x11 == 0x198)
         b.eq 0x800cfc8           // unlikely

    loc_0x0800cdf0: // orphan
         if !x9 jmp 0x800cff4     // likely

    loc_0x0800cdf4: // orphan
         x12 = x11 - 0x180
         if (x12 != 0x198)
         b.lo 0x800cfc4           // unlikely

    loc_0x0800ce00: // orphan
         x12 = x8 + x11
         x12 = [var_18h]          // 0xd3 // 211
         if !x12 jmp 0x800cff4    // unlikely

    loc_0x0800ce0c: // orphan
         x12 = x11 - 0x178
         if (x12 != 0x198)
         b.lo 0x800cfc4           // unlikely

    loc_0x0800ce18: // orphan
         x12 = x8 + x11
         w12 = [var_20h]          // 0xd3 // 211
         w12 = w12 - 1
         if (w12 == 3)
         b.hi 0x800cff4           // likely

    loc_0x0800ce2c: // orphan
         x12 = x11 - 0x175
         if (x12 != 0x199)
         b.lo 0x800cfc4           // unlikely

    loc_0x0800ce38: // orphan
         x12 = x8 + x11
         w12 = [var_24h]          // 0xd3 // 211
         w12 = w12 - 9
         if (w12 != 8)
         b.lo 0x800cff4           // unlikely

    loc_0x0800ce4c: // orphan
         x12 = x11 - 0x170
         if (x12 != 0x198)
         b.lo 0x800cfc4           // unlikely

    loc_0x0800ce58: // orphan
         x12 = x8 + x11
         w12 = [var_28h]          // 0xd3 // 211
         if (w12 == 3)
         b.hs 0x800cff4           // likely

    loc_0x0800ce68: // orphan
         x11 = x11 + 0x18
         x9 = x9 - 1
         if (x10 == x11)
         b.ne 0x800cde8           // likely

    loc_0x0800ce78: // orphan
         // CODE XREFS from sym.do_hwbp_set @ 0x800cd60, 0x800cfc0
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800ce80 ()             // 0x800ce80(0x800c000, 0x0, 0x0, 0x0)
         x8 = 0x800c000
         x8 = [x8]                // 0xcf // 207
         if !x8 jmp 0x800ce94     // unlikely

    loc_0x0800ce90: // orphan
         sym.stop_task_run_monitor ()

    loc_0x0800ce94: // orphan
         x20 = [x21]              // 0xdc // 220
         w2 = 0x320
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x35                // '5'
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800cea8 ()             // 0x800cea8(0x100, 0x0, 0x350320, 0x0)
         (w8, 2) = 3
         [x20 + 0x10] = w8
         if !w9 jmp 0x800cf3c     // likely

    loc_0x0800ceb8: // orphan
         w12 = 0x5030             // '0P'
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = x20 + 0x38
         x10 = ~0x17f
         x11 = sp                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w12 = 0x3

    loc_0x0800ced0: // orphan
         if !x10 jmp 0x800cfc8    // likely

    loc_0x0800ced4: // orphan
         x13 = x10 + 8
         if (x13 != 0x198)
         b.lo 0x800cfc4           // likely

    loc_0x0800cee0: // orphan
         x13 = x11 + x10
         x15 = x10 + 0xb
         w14 = [var_20h]          // 0xd4 // 212
         if (x15 != 0x199)
         [x9 = w14
         b.lo 0x800cfc4           // likely

    loc_0x0800cef8: // orphan
         x14 = x11 + x10
         x16 = x10 + 0x10
         w15 = [var_24h]          // 0xd5 // 213
         if (x16 != 0x198)
         [x9 = w15
         b.lo 0x800cfc4           // likely

    loc_0x0800cf10: // orphan
         w14 = [var_28h]          // 0xd5 // 213
         [x9 = w14
         if !x10 jmp 0x800cfc4    // likely

    loc_0x0800cf1c: // orphan
         x13 = [var_18h]          // 0xd4 // 212
         x8 = x8 + 1
         x10 = x10 + 0x18
         [x9] = x13
         x9 = x9 + x12
         w13 = [var_4h]           // 4
         if (x8 == x13)
         b.lo 0x800ced0           // likely

    loc_0x0800cf3c: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.prepare_break_point_handlers () // sym.prepare_break_point_handlers(0x0)
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.start_task_run_monitor () // sym.start_task_run_monitor(0x0)
         if !w0 jmp 0x800cf78     // likely

    loc_0x0800cf50: // orphan
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = [x21]               // 0xdc // 220 // int64_t arg1
         w2 = 0x320
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x35                // '5'
         0x800cf64 ()             // 0x800cf64(-1, 0x0, 0x350320, 0x0)
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800cf70 ()             // 0x800cf70(0x800c000, 0x0, 0x350320, 0x0)
         jmp 0x800ccc4

    loc_0x0800cf78: // orphan
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.paradise_hwbp_fill_config () // sym.paradise_hwbp_fill_config(0x178000)
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800cf88 ()             // 0x800cf88(0x800c000, 0x0, 0x0, 0x0)
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x198
         sym._copy_to_user_2 ()   // sym._copy_to_user_2(0x0, 0x178000)
         w8 = ~0xd
         if (x0 == 0)
         csel w20,wzr,w8, eq
         jmp 0x800ccc4

    loc_0x0800cfac: // orphan
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = 0x3
         0x800cfb4 ()             // 0x800cfb4(0x0, 0x3, 0x0, 0x0)
         w9 = [var_4h]            // 4
         if w9 jmp 0x800cdc4      // unlikely

    loc_0x0800cfc0: // orphan
         jmp 0x800ce78

    loc_0x0800cfc4: // orphan
         brk 0x1

    loc_0x0800cfc8: // orphan
         brk 0x5512

    loc_0x0800cfcc: // orphan
         // CODE XREF from sym.do_hwbp_set @ 0x800cd6c
         w10 = 0x1
         prfm pstl1strm,[x8]

    loc_0x0800cfd4: // orphan
         ldxr w9,[x8]
         w11 = w9 - w10
         stlxr w12,w11,[x8]
         if w12 jmp 0x800cfd4     // unlikely

    loc_0x0800cfe4: // orphan
         if (w9 == 1)
         b.eq 0x800cd80           // unlikely

    loc_0x0800cfec: // orphan
         if (w9 == 0)
         jmp ifle 0x800cffc       // likely

    loc_0x0800cff4: // orphan
         w20 = ~0x15
         jmp 0x800ccc4

    loc_0x0800cffc: // orphan
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         // XREFS(63)
         w1 = 0x3
         0x800d004 ()             // 0x800d004(0x0, 0x3, 0x0, 0x0)
         w20 = ~0x15
         jmp 0x800ccc4

}

/* ===== 0x0800d4ec ===== */
int sym.do_hwbp_get_config (int esi, int edx) {
    loc_0x800d4ec:
        hint 0x19
        sp = sp - 0x1d0
        [sp, 0x1a0] = (x29,2)
        [sp, 0x1b0] = (x28,2)
        [sp, 0x1c0] = (x20,2)
        x29 = var_1a0h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = ~0xd
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        if !x0 jmp 0x800d564 // likely
            
    loc_0x800d564:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x800d594 // likely
            
    loc_0x800d594:
        0x800d594 ()  // 0x800d594(0x0, 0x0, 0x0, 0x0)
        0x0800d598
         // } else {
    loc_0x800d578:
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x28, 2) = 3
        (x29, 2) = 3
        sp = arg_1d0h
        hint 0x1d
        0x0800d590
         // } else {
        }
        return eax;
}

/* ===== 0x08004704 ===== */
int sym.do_is_process_alive (int esi, int edx) {
    loc_0x8004704:
        hint 0x19
        sp = sp - 0x30
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x20,2)
        x29 = var_10h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = 0x8
        [var_8h] = x8
        [sp] = xzr
        sym._copy_from_user () // sym._copy_from_user(0x177fd0, 0x0, 0x8)
        w19 = ~0xd
        if x0 jmp 0x8004768 // likely
            
    loc_0x8004768:
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        x9 = [var_8h] // 0x4 // 4
        if (x8 == x9)
        b.ne 0x8004794 // likely
            
    loc_0x8004794:
        0x8004794 ()  // 0x8004794(0x0, 0x0, 0x0, 0x0)
        0x08004798
         // } else {
    loc_0x800477c:
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        sp = arg_30h
        hint 0x1d
        0x08004790
         // } else {
        }
        return eax;
}

/* ===== 0x08004e18 ===== */
int sym.do_hide_process (int esi, int edx) {
    loc_0x8004e18:
        hint 0x19
        sp = sp - 0x30
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x20,2)
        x29 = var_10h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        w2 = 0x8
        [var_8h] = x8
        [sp] = xzr
        sym._copy_from_user () // sym._copy_from_user(0x177fd0, 0x0, 0x8)
        if !x0 jmp 0x8004e80 // unlikely
            
    loc_0x8004e80:
        w0 = [sp]     // 0x4 // 4
        if (w0 == 1)
        b.lt 0x8004ec0 // unlikely
            
    loc_0x8004ec0:
        w19 = ~0x15
        jmp 0x8004e54
         // do {
    loc_0x8004e54:
        // CODE XREFS from sym.do_hide_process @ 0x8004ec4, 0x8004ecc, 0x8004ef0, 0x8004f5c, 0x8004f70
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        x9 = [var_8h] // 0x4 // 4
        if (x8 == x9)
        b.ne 0x8004ef4 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08004e68: // orphan
             w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             (x20, 2) = 3
             (x29, 2) = 3
             sp = arg_30h
             hint 0x1d
             

    loc_0x08004e94: // orphan
         0x8004e94 ()             // 0x8004e94(0x0, 0x0, 0x0, 0x0)
         if !x0 jmp 0x8004ec8     // likely

    loc_0x08004e9c: // orphan
         x8 = x0 + 0x40
         jmp 0x8004ef8

    loc_0x08004eb4: // orphan
         dmb ishld
         0x8004eb8 ()             // 0x8004eb8(0x0, 0x0, 0x0, 0x0)
         jmp 0x8004f20

    loc_0x08004ec8: // orphan
         w19 = ~0x2
         jmp 0x8004e54

    loc_0x08004ed0: // orphan
         0x8004ed0 ()             // 0x8004ed0(0x0, 0x0, 0x0, 0x0)
         w0 = [sp]                // 0x4 // 4
         0x8004ed8 ()             // 0x8004ed8(0x80, 0x0, 0x0, 0x0)
         w1 = [sp]                // 0x4 // 4
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004ee8 ()             // 0x8004ee8(0x8004000, 0x80, 0x0, 0x0)
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8004e54

    loc_0x08004ef4: // orphan
         0x8004ef4 ()             // "*" // 0x8004ef4(0x0, 0x0, 0x0, 0x0)

    loc_0x08004ef8: // orphan
         // CODE XREF from sym.do_hide_process @ 0x8004ea0
         w10 = 0x1
         prfm pstl1strm,[x8]

    loc_0x08004f00: // orphan
         ldxr w9,[x8]
         w11 = w9 - w10
         stlxr w12,w11,[x8]
         if w12 jmp 0x8004f00     // unlikely

    loc_0x08004f10: // orphan
         if (w9 == 1)
         b.eq 0x8004eb4           // unlikely

    loc_0x08004f18: // orphan
         if (w9 == 0)
         jmp ifle 0x8004f74       // likely

    loc_0x08004f20: // orphan
         // CODE XREFS from sym.do_hide_process @ 0x8004ebc, 0x8004f80
         w0 = [sp]                // 0x4 // 4
         0x8004f24 ()             // 0x8004f24(0x80, 0x0, 0x0, 0x0)
         w8 = [sp]                // 0x4 // 4
         w20 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8004f34 ()             // 0x8004f34(0x80, 0x0, 0x0, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if w0 jmp 0x8004e54      // likely

    loc_0x08004f40: // orphan
         w0 = [sp]                // 0x4 // 4
         0x8004f44 ()             // 0x8004f44(0x80, 0x0, 0x0, 0x0)
         w19 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w0 jmp 0x8004f60     // unlikely

    loc_0x08004f50: // orphan
         tbnz w20,0,0x8004e54     // unlikely

    loc_0x08004f54: // orphan
         w0 = [sp]                // 0x4 // 4
         0x8004f58 ()             // 0x8004f58(0x80, 0x0, 0x0, 0x0)
         jmp 0x8004e54

    loc_0x08004f60: // orphan
         w1 = [sp]                // 0x4 // 4
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004f6c ()             // 0x8004f6c(0x8004000, 0x80, 0x0, 0x0)
         jmp 0x8004e54

    loc_0x08004f74: // orphan
         x0 = x8                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = 0x3
         0x8004f7c ()             // 0x8004f7c(0x0, 0x3, 0x0, 0x0)
         jmp 0x8004f20

}

/* ===== 0x08003f5c ===== */
int sym.do_write_physical_memory (int esi, int edx) {
    loc_0x8003f5c:
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
        x0 = var_30h  // int64_t arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        x1 = x21      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = 0x28     // '('
        [x29 = x8
        [sp, 0x48] = (xzr,2)
        [sp, 0x38] = (xzr,2)
        [var_30h] = xzr
        sym._copy_from_user () // "`" // sym._copy_from_user(0x177f60, 0x0, 0x28)
        if !x0 jmp 0x8003fb8 // unlikely
            
    loc_0x8003fb8:
        x8 = [var_48h] // 4
        if !x8 jmp 0x8004024 // likely
            
    loc_0x8004024:
        w22 = ~0x15
        jmp 0x80040a4
         // do {
    loc_0x80040a4:
        // CODE XREFS from sym.do_write_physical_memory @ 0x8003fb4, 0x8004020, 0x8004028
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8004364 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08003fcc: // orphan
             w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8003fd4 ()             // 0x8003fd4(0x0, 0x0, 0x0, 0x0)
             x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             0x8003fe0 ()             // 0x8003fe0(0x0, 0x0, 0x0, 0x0)
             if !x20 jmp 0x800401c    // likely

    loc_0x08003fe8: // orphan
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8003fec ()             // 0x8003fec(0x0, 0x0, 0x0, 0x0)
         x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x20 + 0x40
         jmp 0x800402c

    loc_0x0800400c: // orphan
         dmb ishld
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004014 ()             // 0x8004014(0x0, 0x0, 0x0, 0x0)
         if x19 jmp 0x8004058     // unlikely

    loc_0x0800401c: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8004360
         w22 = ~0x2
         jmp 0x80040a4

    loc_0x0800402c: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8003ff8
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08004034: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8004034     // unlikely

    loc_0x08004044: // orphan
         if (w8 == 1)
         b.eq 0x800400c           // unlikely

    loc_0x0800404c: // orphan
         if (w8 == 0)
         jmp ifle 0x8004354       // likely

    loc_0x08004054: // orphan
         if !x19 jmp 0x800401c    // likely

    loc_0x08004058: // orphan
         x25 = [x19 + 0x70]       // 0xda // 218
         x1 = [var_40h]           // 4 // int64_t arg2
         x2 = var_10h             // int64_t arg3
         x3 = var_18h             // int64_t arg4
         [x29 = xzr
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         sym.lockfree_va_to_pa () // sym.lockfree_va_to_pa(-1, 0x0, 0x177ff0, 0x177fe8, -1)
         ldur x8,[x29,-0x10]
         if (w0 == 0)
         x1 = var_30h             // int64_t arg3
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x28                // '('
         csel x8,xzr,x8, lt
         [var_48h_2] = x8
         sym._copy_to_user ()     // sym._copy_to_user(0x0, 0x178030)
         if !x0 jmp 0x80040e0     // likely

    loc_0x08004098: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8004350
         w22 = ~0xd

    loc_0x0800409c: // orphan
         // CODE XREFS from sym.do_write_physical_memory @ 0x800433c, 0x8004344
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80040a0 ()             // 0x80040a0(0x0, 0x0, 0x0, 0x0)

    loc_0x080040b8: // orphan
         w0 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_d0h
         hint 0x1d
         

    loc_0x080040e0: // orphan
         x20 = 0x8004000
         x26 = 0x8004000
         x8 = [x20]               // 0xdb // 219
         if x8 jmp 0x8004104      // likely

    loc_0x080040f0: // orphan
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x80040f8 ()             // 0x80040f8(0x8004000, 0x0, 0x0, 0x0)
         [x20] = x0
         if !x0 jmp 0x800411c     // unlikely

    loc_0x08004104: // orphan
         x8 = [x26]               // 0xe1 // 225
         if x8 jmp 0x800411c      // likely

    loc_0x0800410c: // orphan
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004114 ()             // 0x8004114(0x8004000, 0x0, 0x0, 0x0)
         [x26] = x0

    loc_0x0800411c: // orphan
         x27 = 0x8004000
         x8 = [x27]               // 0xe2 // 226
         if x8 jmp 0x8004138      // likely

    loc_0x08004128: // orphan
         x0 = 0x8004000
         x0 = x0 + 0              // int64_t arg1
         0x8004130 ()             // 0x8004130(0x8004000, 0x0, 0x0, 0x0)
         [x27] = x0

    loc_0x08004138: // orphan
         x28 = [var_48h]          // 4
         if !x28 jmp 0x8004340    // likely

    loc_0x08004140: // orphan
         x21 = [var_40h]          // 4
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800416c

    loc_0x0800414c: // orphan
         x25 = [sp]               // 0x4 // 4
         x21 = x23 + x21
         x20 = x23 + x20
         x28 = x28 - x23
         x26 = x27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = 0x8004000

    loc_0x08004164: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8004208
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x28 jmp 0x800409c    // likely

    loc_0x0800416c: // orphan
         // CODE XREF from sym.do_write_physical_memory @ 0x8004148
         x2 = var_28h             // int64_t arg3
         x3 = var_20h             // int64_t arg4
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [sp, 0x20] = (xzr,2)
         sym.lockfree_va_to_pa () // sym.lockfree_va_to_pa(0x0, 0x0, 0x178028, 0x178020, -1)
         tbnz w0,0x1f,0x800420c   // unlikely

    loc_0x08004188: // orphan
         x8 = [var_20h]           // 0x4 // 4
         if (x28 == x8)           // u"@\b" // u"@\b"
         csel x23,x28,x8, lo
         if !x23 jmp 0x8004164    // likely

    loc_0x08004198: // orphan
         x24 = [var_28h]          // 4

    loc_0x0800419c: // orphan
         x8 = x24 & 0xfff
         x9 = 0x8004000
         w10 = 0x1000
         x9 = [x9]                // 0xd0 // 208
         x8 = x10 - x8
         x10 = [var_38h]          // 0x4 // 4
         if (x8 == x23)           // u"@\b"
         x11 = [x26]              // 0xe1 // 225
         x9 = x24 - x9
         csel x22,x8,x23, lo
         x1 = x10 + x20
         x0 = x9 | 0xffffff8000000000
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w16,[x11,-4]        // 0xd2 // 210
         w17 = 0xa42c             // ',\xa4'
         w17 = 0xacff             // '\xff\xac'
         if (w16 == w17)
         b.eq 0x80041e8           // unlikely

    loc_0x080041e4: // orphan
         brk 0x822b

    loc_0x080041e8: // orphan
         blr x11                  // xzr(0x0, 0x0, 0x0, 0x0)
         if x0 jmp 0x8004098      // unlikely

    loc_0x080041f0: // orphan
         x24 = x22 + x24
         x23 = x23 - x22
         x21 = x22 + x21
         x20 = x22 + x20
         x28 = x28 - x22
         b.ne 0x800419c           // likely

    loc_0x08004208: // orphan
         jmp 0x8004164

    loc_0x0800420c: // orphan
         x8 = [x27]               // 0xe2 // 226
         w22 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !x8 jmp 0x800409c     // unlikely

    loc_0x08004218: // orphan
         ubfx x8,x21,0x1e, 9      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x25 + x8,lsl 3]    // 0xcf000000e0 // 889058230496
         [x29 = x8
         ldur x8,[x29,-0x10]
         [x29 = x8
         ldur x9,[x29,-0x18]
         w8 = ~w9
         [var_0h_2] = x9
         if ((x8 & 3) == 0)       // u"@\b"
         b.ne 0x800409c           // likely

    loc_0x08004240: // orphan
         x8 = 0x8004000
         x9 = x9 & 0x7ffffff000
         ubfx x10,x21,0x15, 9     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         x9 = x9 - x8
         x9 = x9 | 0xffffff8000000000
         x9 = [x9 + x10,lsl 3]    // 0xd1000000d0 // 897648165072
         w10 = ~w9
         [var_0h_3] = x9
         if ((x10 & 3) == 0)      // u"@\b"
         b.ne 0x800409c           // likely

    loc_0x0800426c: // orphan
         x9 = x9 & 0x7ffffff000
         x8 = x9 - x8
         ubfx x9,x21,0xc, 9       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x8 | 0xffffff8000000000
         x8 = [x8 + x9,lsl 3]     // 0xd0000000cf // 893353197775
         [var_0h_4] = x8
         if !x8 jmp 0x800409c     // unlikely

    loc_0x08004288: // orphan
         x9 = 0x1                 // u"@\b"
         x9 = 0x400
         x9 = x8 & x9
         if x9 jmp 0x800409c      // unlikely

    loc_0x08004298: // orphan
         ubfx w9,w8,3, 5          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w9 == 0x1c)          // u"@\b"
         b.hs 0x800409c           // unlikely

    loc_0x080042a4: // orphan
         x9 = x8 >> 8
         x8 = x9 | x8,lsl 55
         x9 = ~0x83fc             // '\xfc\x83'
         x24 = x8 & x9
         if !x24 jmp 0x800409c    // likely

    loc_0x080042b8: // orphan
         [sp] = x25
         x25 = x21 & 0xfff
         w8 = 0x1000
         x8 = x8 - x25
         w1 = 0xc00
         x27 = x26                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (x28 == x8)           // u"@\b"
         csel x23,x28,x8, lo
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80042dc ()             // 0x80042dc(0x0, 0xc00, 0x0, 0x0)
         if !x0 jmp 0x800409c     // likely

    loc_0x080042e4: // orphan
         x8 = [var_38h]           // 0x4 // 4
         x9 = [x27]               // 0xe2 // 226
         x2 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x8 + x20
         ldur w16,[x9,-4]         // 0xd0 // 208
         w17 = 0xa42c             // ',\xa4'
         w17 = 0xacff             // '\xff\xac'
         if (w16 == w17)
         b.eq 0x8004310           // unlikely

    loc_0x0800430c: // orphan
         brk 0x8229

    loc_0x08004310: // orphan
         blr x9                   // xzr(0x0, 0x0, 0x0, 0x0)
         if x0 jmp 0x8004348      // unlikely

    loc_0x08004318: // orphan
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x2 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x3 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg4
         sym.swap_write_page_direct () // sym.swap_write_page_direct(0x0, 0x0, 0x0, 0x0)
         w24 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8004334 ()             // 0x8004334(0x0, 0x0, 0x0, 0x0)
         tbnz w24,0,0x800414c     // unlikely

    loc_0x0800433c: // orphan
         jmp 0x800409c

    loc_0x08004340: // orphan
         w22 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800409c

    loc_0x08004348: // orphan
         x0 = x26                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800434c ()             // 0x800434c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8004098

    loc_0x08004354: // orphan
         w1 = 0x3
         0x8004358 ()             // 0x8004358(0x0, 0x3, 0x0, 0x0)
         if x19 jmp 0x8004058     // unlikely

    loc_0x08004360: // orphan
         jmp 0x800401c

    loc_0x08004364: // orphan
         0x8004364 ()             // sym.swap_write_page_direct // 0x8004364(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x08004644 ===== */
int sym.do_find_process (int esi, int edx) {
    loc_0x8004644:
        hint 0x19
        sp = sp - 0x140
        [sp, 0x110] = (x29,2)
        [var_120h] = x28
        [sp, 0x130] = (x20,2)
        x29 = var_110h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = var_4h   // int64_t arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x104
        x20 = var_4h
        [x29 = x8
        0x800467c ()  // 0x800467c(0x177ec4, 0x0, 0x104, 0x0)
        x0 = var_4h   // int64_t arg1
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = 0x104
        sym._copy_from_user () // "`" // sym._copy_from_user(0x177ec4, 0x0, 0x104)
        if !x0 jmp 0x800469c // unlikely
            
    loc_0x800469c:
        x0 = var_4h_2 // int64_t arg1
        0x80046a0 ()  // 0x80046a0(0x4, 0x0, 0x0, 0x0)
        [var_4h] = w0
        if !w0 jmp 0x80046cc // unlikely
            
    loc_0x80046cc:
        w0 = ~0x76    // 'v'
         // do {
    loc_0x80046d0:
        // CODE XREFS from sym.do_find_process @ 0x8004698, 0x80046c8
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9) // u"@\b" // u"@\b"
        b.ne 0x80046fc // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080046e4: // orphan
             (x20, 2) = 3
             x28 = [var_120h]         // 0x4 // 4
             (x29, 2) = 3
             sp = arg_140h
             hint 0x1d
             

    loc_0x080046fc: // orphan
         0x80046fc ()             // 0x80046fc(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x0800513c ===== */
int sym.do_list_processes (int esi, int edx) {
    loc_0x800513c:
        hint 0x19
        sp = sp - 0x60
        [sp, 0x20] = (x29,2)
        [var_30h] = x23
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = 0x18
        [x29 = x8
        [sp, 8] = (xzr,2)
        [sp] = xzr
        sym._copy_from_user () // "`" // sym._copy_from_user(0x177fa0, 0x0, 0x18)
        if !x0 jmp 0x800518c // unlikely
            
    loc_0x800518c:
        x22 = [var_8h] // 0x4 // 4
        x8 = x22 >> 0xd
        if !x8 jmp 0x80052b8 // unlikely
            
    loc_0x80052b8:
        x0 = 0x8005000
        x0 = x0 + 0   // int64_t arg1
        x1 = x22      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
        0x80052c4 ()  // 0x80052c4(0x8005000, 0x0, 0x0, 0x0)
        w20 = ~0x15
        jmp 0x8005284
         // do {
    loc_0x8005284:
        // CODE XREFS from sym.do_list_processes @ 0x8005188, 0x80052cc, 0x80052e0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9) // u"@\b" // u"@\b"
        b.ne 0x8005308 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x080051a8: // orphan
             x19 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x80051ac ()             // 0x80051ac(0x0, 0x0, 0x0, 0x0)
             x8 = 0x8005000
             x8 = x8 + 0
             x9 = [x8 + 0x550]        // 0xcf // 207
             x10 = x9 - 0x550
             if (x10 == x8)           // u"@\b" // u"@\b"
             b.eq 0x8005224           // unlikely

    loc_0x080051c8: // orphan
         x10 = [var_8h]           // 0x4 // 4
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = 0x1                // u"@\b"
         x10 = x10 << 3
         jmp 0x80051ec

    loc_0x080051dc: // orphan
         // CODE XREF from sym.do_list_processes @ 0x8005220
         x9 = [x9]                // 0xd0 // 208
         x12 = x9 - 0x550
         if (x12 == x8)           // u"@\b"
         b.eq 0x8005228           // unlikely

    loc_0x080051ec: // orphan
         // CODE XREF from sym.do_list_processes @ 0x80051d8
         w12 = [x9 + 0xc8]        // 0xd0 // 208
         tbnz w12,0x1f,0x80051dc  // likely

    loc_0x080051f4: // orphan
         if (x10 == x12)          // u"@\b" // u"@\b"
         b.ls 0x80051dc           // likely

    loc_0x080051fc: // orphan
         x13 = x12 >> 3
         if (x22 == x13)          // u"@\b" // u"@\b"
         b.ls 0x8005304           // likely

    loc_0x08005208: // orphan
         w12 = w12 & 7
         w14 = (byte) [x19 + x13] // 0xd4000000da // 910533066970
         x21 = x21 + 1            // u"@\b"
         w12 = w11 << w12
         w12 = w14 | w12
         [x19 + x13] = (byte) w12
         jmp 0x80051dc

    loc_0x08005224: // orphan
         x21 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08005228: // orphan
         0x8005228 ()             // 0x8005228(0x0, 0x0, 0x0, 0x0)
         x22 = [var_8h]           // 0x4 // 4
         x8 = x22 >> 0x1f
         if x8 jmp 0x80052fc      // likely

    loc_0x08005238: // orphan
         x23 = [sp]               // 0x4 // 4
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         w2 = 0x1                 // u"@\b"
         0x8005248 ()             // 0x8005248(0x0, 0x0, 0x1, 0x0)
         x0 = x23                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x2 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym._copy_to_user ()     // sym._copy_to_user(0x400000000, 0x0)
         if x0 jmp 0x8005278      // likely

    loc_0x08005260: // orphan
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x18
         [var_8h_2] = x21
         sym._copy_to_user ()     // sym._copy_to_user(0x0, 0x178000)
         if !x0 jmp 0x80052e4     // likely

    loc_0x08005278: // orphan
         w20 = ~0xd

    loc_0x0800527c: // orphan
         // CODE XREF from sym.do_list_processes @ 0x80052f8
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8005280 ()             // 0x8005280(0x0, 0x0, 0x0, 0x0)

    loc_0x08005298: // orphan
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         (x20, 2) = 3
         x23 = [var_30h]          // 0x4 // 4
         (x22, 2) = 3
         (x29, 2) = 3
         sp = arg_60h
         hint 0x1d
         

    loc_0x080052d0: // orphan
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         0x80052d8 ()             // 0x80052d8(0x8005000, 0x0, 0x0, 0x0)
         w20 = ~0xb
         jmp 0x8005284

    loc_0x080052e4: // orphan
         x0 = 0x8005000
         x0 = x0 + 0              // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         0x80052f0 ()             // 0x80052f0(0x8005000, 0x0, 0x0, 0x0)
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800527c

    loc_0x080052fc: // orphan
         brk 0x800

    loc_0x08005304: // orphan
         brk 0x1

    loc_0x08005308: // orphan
         0x8005308 ()             // sym._copy_from_user // 0x8005308(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x0800d59c ===== */
int sym.do_hwbp_get_records (int esi, int edx) {
    loc_0x800d59c:
        hint 0x19
        sp = sp - 0x60
        [sp, 0x20] = (x29,2)
        [var_30h] = x23
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        if !x0 jmp 0x800d5e8 // likely
            
    loc_0x800d5e8:
        w21 = ~0xd
         // do {
    loc_0x800d5ec:
        // CODE XREFS from sym.do_hwbp_get_records @ 0x800d784, 0x800d798, 0x800d7c8
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9) // u"@\b" // u"@\b"
        b.ne 0x800d7e4 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800d5c8
    loc_0x800d620:
        x8 = [var_10h] // 0x4 // 4
        w21 = ~0x15
        if !x8 jmp 0x800d5ec // likely
    loc_0x800d62c:
        w8 = [sp]     // 0x4 // 4
        if (w8 == 0xf) // u"@\b"
        b.hi 0x800d5ec // unlikely
    loc_0x800d638:
        w8 = [var_4h] // 4
        if (w8 == 0xff) // u"@\b"
        b.hi 0x800d5ec // unlikely
    loc_0x800d644:
        w8 = [var_sp_8h] // 0x4 // 4
        if !w8 jmp 0x800d5ec // likely
    loc_0x800d64c:
        if (w8 == 0x100) // u"@\b"
        b.hi 0x800d5ec // unlikely
    loc_0x800d654:
        x0 = 0x800d000
        x0 = x0 + 0   // int64_t arg1 // "a"
        0x800d65c ()  // 0x800d65c(0x800d000, 0x0, 0x0, 0x0)
        x22 = 0x800d000
        x8 = [x22]    // 0xdd // 221
        if !x8 jmp 0x800d788 // unlikely
            
    loc_0x800d788:
        w21 = ~0x1
         // do {
    loc_0x800d78c:
        // CODE XREF from sym.do_hwbp_get_records @ 0x800d7d0
        x0 = 0x800d000
        x0 = x0 + 0   // int64_t arg1 // "a"
        0x800d794 ()  // 0x800d794(0x800d000, 0x0, 0x0, 0x0)
        jmp 0x800d5ec
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800d66c
    loc_0x800d678:
        w10 = 0x5030  // '0P'
        w10 = 0x3
        umaddl x10,w9,w10, x8
        x10 = [x10 + 0x38] // 0xd1 // 209
        if !x10 jmp 0x800d788 // unlikely
    loc_0x800d68c:
        w10 = 0x5030  // '0P'
        w10 = 0x3
        umaddl x8,w9,w10, x8
        w9 = 0x100
        w10 = [var_4h] // 4
        w8 = [x8 + 0x40] // 0xcf // 207
        if (w8 == 0x100) // u"@\b" // u"@\b"
        csel w8,w8,w9, lo
        w8 = w8 - w10
        b.ls 0x800d79c // unlikely
            
    loc_0x800d79c:
        x0 = 0x800d000
        x0 = x0 + 0   // int64_t arg1 // "a"
        [var_0h_2] = wzr
        0x800d7a8 ()  // 0x800d7a8(0x800d000, 0x0, 0x0, 0x0)
        x1 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        w2 = 0x18
        sym._copy_to_user_2 () // sym._copy_to_user_2(0x0, 0x178000)
        w8 = ~0xd
        if (x0 == 0)  // u"@\b" // u"@\b"
        csel w21,wzr,w8, eq
        jmp 0x800d5ec
    loc_0x0800d600: // orphan
             w0 = w21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             (x20, 2) = 3
             x23 = [var_30h]          // 0x4 // 4
             (x22, 2) = 3
             (x29, 2) = 3
             sp = arg_60h
             hint 0x1d
             

    loc_0x0800d6b4: // orphan
         w9 = [var_sp_8h]         // 0x4 // 4
         w1 = 0xcc0               // '\xc0\f'
         w2 = ~0
         if (w9 == w8)            // u"@\b" // u"@\b"
         csel w23,w9,w8, lo
         w8 = 0x350
         umull x21,w23,w8
         [var_0h_2] = w23
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800d6d8 ()             // 0x800d6d8(0x0, 0xcc0, -1, 0x0)
         if !x0 jmp 0x800d7cc     // likely

    loc_0x0800d6e0: // orphan
         w8 = [sp]                // 0x4 // 4
         if (w8 == 0xf)           // u"@\b"
         b.hi 0x800d7e8           // unlikely

    loc_0x0800d6ec: // orphan
         w9 = [var_4h]            // 4
         if (w9 == 0x100)         // u"@\b"
         b.hi 0x800d7e8           // unlikely

    loc_0x0800d6f8: // orphan
         w10 = 0x5030             // '0P'
         x11 = [x22]              // 0xdd // 221
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = 0x3
         x20 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         umaddl x8,w8,w10, x11
         w10 = 0x350
         umaddl x8,w9,w10, x8
         x1 = x8 + 0x50           // int64_t arg_60h
         0x800d71c ()             // 0x800d71c(0x0, 0x8004050, 0x0, 0x0)
         x0 = 0x800d000
         x0 = x0 + 0              // int64_t arg1 // "a"
         0x800d728 ()             // 0x800d728(0x800d000, 0x8004050, 0x0, 0x0)
         w8 = 0xa43a              // ':\xa4'
         w8 = 0x26                // '&'
         if (w23 == w8)           // u"@\b"
         b.hs 0x800d7dc           // unlikely

    loc_0x0800d73c: // orphan
         x22 = [var_10h]          // 0x4 // 4
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_60h
         w2 = 0x1                 // u"@\b"
         0x800d74c ()             // 0x800d74c(0x0, 0x0, 0x1, 0x0)
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x2 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym._copy_to_user_2 ()   // sym._copy_to_user_2(0x0, 0x0)
         if x0 jmp 0x800d778      // unlikely

    loc_0x0800d764: // orphan
         x1 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg3
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x18
         sym._copy_to_user_2 ()   // sym._copy_to_user_2(0x0, 0x178000)
         if !x0 jmp 0x800d7d4     // likely

    loc_0x0800d778: // orphan
         w21 = ~0xd

    loc_0x0800d77c: // orphan
         // CODE XREF from sym.do_hwbp_get_records @ 0x800d7d8
         x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800d780 ()             // 0x800d780(0x0, 0x0, 0x0, 0x0)
         jmp 0x800d5ec

    loc_0x0800d7cc: // orphan
         w21 = ~0xb
         jmp 0x800d78c

    loc_0x0800d7d4: // orphan
         w21 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800d77c

    loc_0x0800d7dc: // orphan
         brk 0x800

    loc_0x0800d7e4: // orphan
         0x800d7e4 ()             // 0x800d7e4(0x0, 0x0, 0x0, 0x0)

    loc_0x0800d7e8: // orphan
         brk 0x5512

}

/* ===== 0x0800d7f0 ===== */
int sym.do_hwbp_set_record (int esi, int edx) {
    loc_0x800d7f0:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x28
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x370
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        if !x0 jmp 0x800d840 // likely
            
    loc_0x800d840:
        w19 = ~0xd
         // do {
    loc_0x800d844:
        // CODE XREF from sym.do_hwbp_set_record @ 0x800d934
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9) // u"@\b" // u"@\b"
        b.ne 0x800d938 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800d818
    loc_0x800d874:
        w8 = [sp]     // 0x4 // 4
        w19 = ~0x15
        if (w8 == 0xf) // u"@\b"
        b.hi 0x800d844 // unlikely
    loc_0x800d884:
        w8 = [var_4h] // 4
        if (w8 == 0xff) // u"@\b"
        b.hi 0x800d844 // unlikely
    loc_0x800d890:
        x0 = 0x800d000
        x0 = x0 + 0   // int64_t arg1 // "a"
        0x800d898 ()  // 0x800d898(0x800d000, 0x0, 0x0, 0x0)
        x8 = 0x800d000
        x8 = [x8]     // 0xcf // 207
        if !x8 jmp 0x800d914 // unlikely
            
    loc_0x800d914:
        w19 = ~0x1
        jmp 0x800d928
         // do {
    loc_0x800d928:
        // CODE XREFS from sym.do_hwbp_set_record @ 0x800d910, 0x800d918
        x0 = 0x800d000
        x0 = x0 + 0   // int64_t arg1 // "a"
        0x800d930 ()  // 0x800d930(0x800d000, 0x0, 0x0, 0x0)
        jmp 0x800d844
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800d8a8
    loc_0x800d8b4:
        w10 = 0x5030  // '0P'
        w10 = 0x3
        umaddl x10,w9,w10, x8
        x10 = [x10 + 0x38] // 0xd1 // 209
        if !x10 jmp 0x800d914 // unlikely
    loc_0x800d8c8:
        w10 = [var_4h] // 4
        if (w10 == 0x100) // u"@\b"
        b.hi 0x800d93c // unlikely
            
    loc_0x800d93c:
        brk 0x5512
         // } else {
    loc_0x800d8d4:
        w11 = 0x5030  // '0P'
        w2 = 0x350
        w11 = 0x3
        umaddl x20,w9,w11, x8
        w8 = 0x350
        x9 = sp       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        umaddl x8,w10,w8, x20
        x1 = var_10h_2 // int64_t arg_370h
        x0 = x8 + 0x50 // int64_t arg1
        0x800d8f8 ()  // 0x800d8f8(0x50, 0x178010, 0x350, 0x0)
        w9 = [x20 + 0x40]! // 0xdb // 219
        w8 = [var_4h] // 4
        if (w9 == w8) // u"@\b" // u"@\b"
        b.ls 0x800d91c // unlikely
        }
        return eax;
    loc_0x800d90c:
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x800d928
    loc_0x0800d858: // orphan
             w0 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             sp = arg_370h
             (x20, 2) = 3
             x28 = [var_10h]          // 0x4 // 4
             (x29, 2) = 3
             hint 0x1d
             

    loc_0x0800d91c: // orphan
         w19 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 + 1              // u"@\b"
         [x20] = w8

    loc_0x0800d938: // orphan
         0x800d938 ()             // 0x800d938(0x0, 0x0, 0x0, 0x0)

}

/* ===== 0x080230b8 ===== */
int sym.initEvent (int esi, int edx) {
    loc_0x80230b8:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x10] = (x29,2)
        [var_20h] = x23
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = var_10h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = 0x8023000
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        x21 = 0x8023000
        [var_8h] = x8
        w8 = (byte) [x20] // 0xdb // 219
        tbnz w8,0,0x8023160 // likely
            
    loc_0x8023160:
        // CODE XREF from sym.initEvent @ 0x80230f0
        w8 = (byte) [x21] // 0xdc // 220
        tbnz w8,0,0x8023190 // likely
            
    loc_0x8023190:
        // CODE XREF from sym.initEvent @ 0x8023164
        w0 = 0x1
         // do {
    loc_0x8023194:
        // CODE XREFS from sym.initEvent @ 0x80231d0, 0x80231dc, 0x802328c, 0x80232ac
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        x9 = [var_8h] // 0x4 // 4
        if (x8 == x9)
        b.ne 0x80232b0 // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80230f4
    loc_0x8023134:
        x8 = [x22]    // 0xdd // 221
        if !x8 jmp 0x8023150 // unlikely
            
    loc_0x8023150:
        // CODE XREFS from sym.initEvent @ 0x8023130, 0x8023138, 0x8023140
        w8 = 0x1
        [x21] = (byte) w8
         // do {
    loc_0x8023158:
        // CODE XREF from sym.initEvent @ 0x802314c
        w8 = 0x1
        [x20] = (byte) w8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802313c
    loc_0x8023144:
        x8 = 0x8023000
        x8 = [x8]     // 0xcf // 207
        if x8 jmp 0x8023158 // likely
        }
        return eax;
    loc_0x080231a8: // orphan
             (x20, 2) = 3
             x23 = [var_20h]          // 0x4 // 4
             (x22, 2) = 3
             (x29, 2) = 3
             sp = arg_50h
             hint 0x1d
             

    loc_0x080231c4: // orphan
         // CODE XREF from sym.initEvent @ 0x802318c
         w8 = [sp]                // 0x4 // 4
         w0 = 0x2
         if (w8 == 1)
         b.lt 0x8023194           // likely

    loc_0x080231d4: // orphan
         w9 = [var_4h]            // 4
         if (w9 == 1)
         b.lt 0x8023194           // likely

    loc_0x080231e0: // orphan
         x10 = 0x8023000
         x10 = [x10]              // 0xd1 // 209
         x11 = [x10]              // 0xd1 // 209
         if (x11 == x10)
         b.eq 0x8023290           // likely

    loc_0x080231f4: // orphan
         x12 = 0x8023000
         jmp 0x8023208

    loc_0x080231fc: // orphan
         // XREFS: CODE 0x08023210  CODE 0x0802321c  CODE 0x08023228  
         // XREFS: CODE 0x08023234  CODE 0x0802323c  CODE 0x08023248  
         // XREFS: CODE 0x08023254  CODE 0x08023260  
         x11 = [x11]              // 0xd2 // 210
         if (x11 == x10)
         b.eq 0x8023290           // unlikely

    loc_0x08023208: // orphan
         // CODE XREF from sym.initEvent @ 0x80231f8
         x13 = x11 - 0x5f8
         [x12] = x13
         b.eq 0x80231fc           // unlikely

    loc_0x08023214: // orphan
         x13 = x11 - 0x4a0
         x13 = [x13]              // 0xd4 // 212
         if !x13 jmp 0x80231fc    // unlikely

    loc_0x08023220: // orphan
         x14 = x11 - 0x5d0
         x14 = [x14]              // 0xd5 // 213
         tbz w14,3,0x80231fc      // unlikely

    loc_0x0802322c: // orphan
         x14 = x11 - 0x560
         x15 = [x14]              // 0xd5 // 213
         tbz x15,0x35,0x80231fc   // unlikely

    loc_0x08023238: // orphan
         x14 = [x14]              // 0xd5 // 213
         tbz x14,0x36,0x80231fc   // unlikely

    loc_0x08023240: // orphan
         w14 = [x13 + 0x560]      // 0xd4 // 212
         if (w14 == 1)
         b.lt 0x80231fc           // likely

    loc_0x0802324c: // orphan
         w14 = [x13 + 0x500]      // 0xd4 // 212
         if (w14 == 1)
         b.lt 0x80231fc           // likely

    loc_0x08023258: // orphan
         w13 = [x13 + 0x518]      // 0xd4 // 212
         if (w13 == 1)
         b.lt 0x80231fc           // likely

    loc_0x08023264: // orphan
         if (w8 == w9)
         w10 = w14 + 1
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w11,w8,w9, lt
         csel w8,w8,w9, gt
         sdiv w10,w10,w11
         w11 = w13 + 1
         sdiv w8,w11,w8
         [x20] = w10
         [x21] = w8
         jmp 0x8023194

    loc_0x08023290: // orphan
         // CODE XREFS from sym.initEvent @ 0x80231f0, 0x8023204
         w8 = [x21]               // 0xdc // 220
         w9 = [x20]               // 0xdb // 219
         if (w8 == 0)
         w8 = 0x3
         ccmp w9,0,4, ne
         w9 = 0xa
         csel w0,w9,w8, ne
         jmp 0x8023194

    loc_0x080232b0: // orphan
         // CODE XREF from sym.initEvent @ 0x80231a4
         0x80232b0 ()             // 0x80232b0(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x0800d3e0 ===== */
int sym.do_hwbp_remove (int esi, int edx) {
    loc_0x800d3e0:
        hint 0x19
        [sp, -0x50]! = (x29,2)
        [var_10h] = x25
        [sp, 0x20] = (x24,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x800d000
        x0 = x0 + 0   // "a"
        0x800d404 ()  // 0x800d404(0x800d000, 0x0, 0x0, 0x0)
        x22 = 0x800d000
        x8 = [x22]    // 0xdd // 221
        if !x8 jmp 0x800d49c // unlikely
            
    loc_0x800d49c:
        x8 = 0x800d000
        x19 = [x8]    // 0xcf // 207
        if !x19 jmp 0x800d4bc // unlikely
            
    loc_0x800d4bc:
        x0 = 0x800d000
        x0 = x0 + 0   // "a"
        0x800d4c4 ()  // 0x800d4c4(0x800d000, 0x0, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x25 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0800d4e4
         // } else {
    loc_0x800d4a8:
        // CODE XREF from sym.do_hwbp_remove @ 0x800d498
        w2 = 0x320
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w2 = 0x35     // '5'
        0x800d4b8 ()  // 0x800d4b8(0x0, 0x0, 0x350320, 0x0)
         // } else {
        }
        return eax;
        goto loc_0x800d414
    loc_0x800d41c:
        x8 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x23 = 0x800d000
        x24 = ~0
        w25 = 0x20
        x20 = 0x800d000
        x20 = x20 + 0 // "a"
         // do {
    loc_0x800d434:
        w9 = [x23]    // 0xde // 222
        x8 = x24 << x8
        w8 &= w8
        rbit x8,x8
        clz x8,x8
        csel x21,x25,x8, eq
        if (w21 == 0x1f)
        b.hi 0x800d474 // likely
         // } while (?);
        }
        return eax;
    loc_0x800d454:
        w0 = w21      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x1 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x2 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w3 = 0x1
        0x800d464 ()  // 0x800d464(0x0, 0x0, 0x0, 0x1)
        if (x21 == 0x1f)
        x8 = x21 + 1
        b.lo 0x800d434 // likely
    loc_0x800d474:
        x0 = 0x800d000
        x0 = x0 + 0   // "a"
        w1 = 0x1
        0x800d480 ()  // 0x800d480(0x800d000, 0x1, 0x0, 0x0)
        x0 = 0x800d000
        x0 = x0 + 0   // "a"
        w1 = 0x2
        0x800d490 ()  // 0x800d490(0x800d000, 0x2, 0x0, 0x0)
        [x22] = xzr
        jmp 0x800d4a8
}

/* ===== 0x08005e24 ===== */
int sym.do_get_thread_pacia_key (int esi, int edx) {
    loc_0x8005e24:
        hint 0x19
        sp = sp - 0x50
        [sp, 0x30] = (x29,2)
        [var_40h] = x19
        x29 = var_30h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = var_8h   // int64_t arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        x1 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
        w2 = 0x20
        [x29 = x8
        [sp, 0x18] = (xzr,2)
        [sp, 8] = (xzr,2)
        sym._copy_from_user_1 () // sym._copy_from_user_1(0x177fb8, 0x0, 0x20)
        if !x0 jmp 0x8005e90 // unlikely
            
    loc_0x8005e90:
        w0 = [var_8h] // 0x4 // 4
        if (w0 == 1)
        b.lt 0x8005ed4 // likely
            
    loc_0x8005ed4:
        w0 = ~0x15
        jmp 0x8005e68
         // do {
    loc_0x8005e68:
        // CODE XREFS from sym.do_get_thread_pacia_key @ 0x8005ed0, 0x8005ed8
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x8005edc // likely
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08005e7c: // orphan
             (x29, 2) = 3
             x19 = [var_40h]          // 4
             sp = arg_50h
             hint 0x1d
             

    loc_0x08005eb4: // orphan
         x1 = var_8h              // int64_t arg3
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w2 = 0x20
         sym._copy_to_user_1 ()   // sym._copy_to_user_1(0x0, 0x178008)
         w8 = ~0xd
         if (x0 == 0)
         csel w0,wzr,w8, eq
         jmp 0x8005e68

    loc_0x08005edc: // orphan
         0x8005edc ()             // 0x8005edc(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08022fe0 ===== */
int sym.arraylist_get (int esi, int edx) {
    loc_0x8022fe0:
        x8 = [x0 + 8] // 0xc7 // 199 // arg1
        if (x8 == x1) // arg2
        b.ls 0x8022ff8 // likely
            
    loc_0x8022ff8:
        // CODE XREF from sym.arraylist_get @ 0x8022fe8
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x08022ffc
         // } else {
    loc_0x8022fec:
        x8 = [x0]     // 0xc7 // 199 // arg1
        x0 = [x8 + x1,lsl 3] // 0xc8000000cf // 858993459407
        0x08022ff4
        }
        return eax;
}

/* ===== 0x0802307c ===== */
int sym.arraylist_destroy (int esi, int edx) {
    loc_0x802307c:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = [x0]     // 0xc7 // 199 // arg1
        if !x0 jmp 0x802309c // likely
            
    loc_0x802309c:
        // CODE XREF from sym.arraylist_destroy @ 0x8023094
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        0x80230a0 ()  // 0x80230a0(0x0, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x080230b0
         // } else {
    loc_0x8023098:
        0x8023098 ()  // 0x8023098(0x0, 0x0, 0x0, 0x0)
        }
        return eax;
}

/* ===== 0x08002994 ===== */
int sym.is_file_exist (int esi, int edx) {
    loc_0x8002994:
        hint 0x19
        sp = sp - 0xc0
        [sp, 0x90] = (x29,2)
        [var_a0h] = x21
        [sp, 0xb0] = (x20,2)
        x29 = var_90h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x20 = sym..text // 0x8002000
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        x8 = [x20]    // 0xdb // 219 // sym..text
        if !x8 jmp 0x8002a40 // unlikely
            
    loc_0x8002a40:
        // CODE XREF from sym.is_file_exist @ 0x80029c4
        x21 = sym..text // 0x8002000
        x8 = [x21]    // 0xdc // 220 // sym..text
        if !x8 jmp 0x8002a90 // unlikely
            
    loc_0x8002a90:
        // CODE XREF from sym.is_file_exist @ 0x8002a48
        x8 = sym..text // 0x8002000
        x8 = x8 + 0   // 0x8002000 // "b\xf8\u04b4\b" // sym..text
        x0 = var_8h   // int64_t arg1
        (x9, 2) = 3
        [sp, 0x68] = (x9,2)
        (x9, 2) = 3
        [sp, 0x78] = (x9,2)
        (x10, 2) = 3
        [sp, 0x48] = (x10,2)
        (x11, 2) = 3
        [sp, 0x58] = (x11,2)
        (x10, 2) = 3
        [sp, 0x28] = (x10,2)
        (x11, 2) = 3  // [0x8002038:4]=0xd503233f // "?#\x03\xd5\xfd{\xbd\xa9\xf5\v"
        [sp, 0x38] = (x11,2)
        (x10, 2) = 3
        (x11, 2) = 3
        [sp, 8] = (x10,2)
        [sp, 0x18] = (x11,2)
        0x8002adc ()  // 0x8002adc(0x178008, 0x0, 0x0, 0x0)
        tbz w0,0x1f,0x8002b74 // likely
            
    loc_0x8002b74:
        // CODE XREF from sym.is_file_exist @ 0x8002ae0
        x8 = [var_30h] // 0x4 // 4
        x0 = var_8h   // int64_t arg1
        [x21] = x8
        0x8002b80 ()  // 0x8002b80(0x178008, 0x0, 0x0, 0x0)
        x1 = [x21]    // 0xdc // 220
        if x1 jmp 0x8002b9c // likely
            
    loc_0x8002b9c:
        // CODE XREF from sym.is_file_exist @ 0x8002b88
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000 // "b\xf8\u04b4\b" // int64_t arg1 // sym..text
        0x8002ba4 ()  // 0x8002ba4(0x8002000, 0x0, 0x0, 0x0)
        x8 = [x21]    // 0xdc // 220
        jmp 0x8002a4c
    loc_0x080029c8: // orphan
             // CODE XREF from sym.is_file_exist @ 0x8002a60
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w2 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             ldur w16,[x8,-4]         // 0xcf // 207
             w17 = 0xd722             // '\"\xd7'
             w17 = 0x8d6b             // 'k\x8d'
             if (w16 == w17)
             b.eq 0x80029ec           // unlikely

    loc_0x080029e8: // orphan
         brk 0x8228

    loc_0x080029ec: // orphan
         // CODE XREF from sym.is_file_exist @ 0x80029e4
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [sp] = x8
         if !x8 jmp 0x8002aec     // likely

    loc_0x08002a00: // orphan
         if (x8 != 1)
         b.hi 0x8002aec           // unlikely

    loc_0x08002a08: // orphan
         x19 = sym..text          // 0x8002000
         x8 = [x19]               // 0xda // 218 // sym..text
         if !x8 jmp 0x8002a68     // unlikely

    loc_0x08002a14: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8002a88
         x0 = sp                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0xa300
         w17 = 0xb89d             // '\x9d\xb8'
         if (w16 == w17)
         b.eq 0x8002a34           // unlikely

    loc_0x08002a30: // orphan
         brk 0x8228

    loc_0x08002a34: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8002a2c
         blr x8                   // " " // xzr(0x0, 0x0, 0x0, 0x0)

    loc_0x08002a38: // orphan
         // CODE XREFS from sym.is_file_exist @ 0x8002a8c, 0x8002b70
         w0 = 0x1
         jmp 0x8002aec

    loc_0x08002a4c: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8002bac
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // sym..text
         blr x8                   // xzr(0x8002000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // sym..text
         [x20] = x0
         if x0 jmp 0x80029c8      // likely

    loc_0x08002a64: // orphan
         jmp 0x8002aec

    loc_0x08002a68: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8002a10
         x20 = sym..text          // 0x8002000
         x8 = [x20]               // 0xdb // 219 // sym..text
         if !x8 jmp 0x8002b18     // unlikely

    loc_0x08002a74: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8002be8
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // sym..text
         blr x8                   // xzr(0x8002000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff' // sym..text
         [x19] = x0
         if x0 jmp 0x8002a14      // likely

    loc_0x08002a8c: // orphan
         jmp 0x8002a38

    loc_0x08002ae4: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8002b98
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x20] = xzr

    loc_0x08002aec: // orphan
         // CODE XREFS from sym.is_file_exist @ 0x80029fc, 0x8002a04, 0x8002a3c, 0x8002a64
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x620]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x8002bec           // likely

    loc_0x08002b00: // orphan
         (x20, 2) = 3
         x21 = [var_a0h]          // 0x4 // 4
         (x29, 2) = 3
         sp = arg_c0h
         hint 0x1d
         

    loc_0x08002b18: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8002a70
         x8 = sym..text           // 0x8002000
         x8 = x8 + 0              // 0x8002000 // "b\xf8\u04b4\b" // sym..text
         x0 = var_8h              // int64_t arg1
         (x9, 2) = 3
         [sp, 0x68] = (x9,2)
         (x9, 2) = 3
         [sp, 0x78] = (x9,2)
         (x10, 2) = 3
         [sp, 0x48] = (x10,2)
         (x11, 2) = 3
         [sp, 0x58] = (x11,2)
         (x10, 2) = 3
         [sp, 0x28] = (x10,2)
         (x11, 2) = 3             // [0x8002038:4]=0xd503233f // "?#\x03\xd5\xfd{\xbd\xa9\xf5\v"
         [sp, 0x38] = (x11,2)
         (x10, 2) = 3
         (x11, 2) = 3
         [sp, 8] = (x10,2)
         [sp, 0x18] = (x11,2)
         0x8002b64 ()             // 0x8002b64(0x178008, 0x0, 0x0, 0x0)
         tbz w0,0x1f,0x8002bb0    // likely

    loc_0x08002b6c: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8002bd4
         [x19] = xzr
         jmp 0x8002a38

    loc_0x08002b8c: // orphan
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // int64_t arg1 // sym..text
         0x8002b94 ()             // 0x8002b94(0x8002000, 0x0, 0x0, 0x0)
         jmp 0x8002ae4

    loc_0x08002bb0: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8002b68
         x8 = [var_30h]           // 0x4 // 4
         x0 = var_8h              // int64_t arg1
         [x20] = x8
         0x8002bbc ()             // 0x8002bbc(0x178008, 0x0, 0x0, 0x0)
         x1 = [x20]               // 0xdb // 219
         if x1 jmp 0x8002bd8      // likely

    loc_0x08002bc8: // orphan
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // int64_t arg1 // sym..text
         0x8002bd0 ()             // 0x8002bd0(0x8002000, 0x0, 0x0, 0x0)
         jmp 0x8002b6c

    loc_0x08002bd8: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8002bc4
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // int64_t arg1 // sym..text
         0x8002be0 ()             // 0x8002be0(0x8002000, 0x0, 0x0, 0x0)
         x8 = [x20]               // 0xdb // 219
         jmp 0x8002a74

    loc_0x08002bec: // orphan
         // CODE XREF from sym.is_file_exist @ 0x8002afc
         0x8002bec ()             // 0x8002bec(0x0, 0x0, 0x0, 0x0)
         orn x15,x27,x30, lsr 8

}

/* ===== 0x08002cf4 ===== */
int sym.get_target_task (int esi, int edx) {
    loc_0x8002cf4:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8002d04 ()  // 0x8002d04(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8002d28 // likely
            
    loc_0x8002d28:
        // CODE XREF from sym.get_target_task @ 0x8002d08
        x20 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8002d2c:
        // CODE XREF from sym.get_target_task @ 0x8002d24
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08002d3c
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08002ea8 ===== */
int sym.compare_task_struct (int esi, int edx) {
    loc_0x8002ea8:
        0x08002ea8
         // (break)
}

/* ===== 0x08002eb0 ===== */
int sym.get_module_bounds (int esi, int edx) {
    loc_0x8002eb0:
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
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        [sp, 0x48] = (xzr,2)
        [sp, 0x38] = (xzr,2)
        [sp, 0x28] = (xzr,2)
        [sp, 0x18] = (xzr,2)
        if !x3 jmp 0x8002f84 // likely
            
    loc_0x8002f84:
        // CODE XREFS from sym.get_module_bounds @ 0x8002ef0, 0x8002ef8
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000 // "b\xf8\u04b4\b" // sym..text
        jmp 0x8002fb0
         // do {
    loc_0x8002fb0:
        // CODE XREFS from sym.get_module_bounds @ 0x8002f80, 0x8002f8c, 0x8002f98, 0x8002fa4
        0x8002fb0 ()  // "P" // 0x8002fb0(0x0, 0x0, 0x0, 0x0)
        jmp 0x80030f4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8002ef4
    loc_0x8002efc:
        w24 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = x1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
        x20 = x3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        w21 = w2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        x22 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x8002f10 ()  // 0x8002f10(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8002f90 // likely
            
    loc_0x8002f90:
        // CODE XREF from sym.get_module_bounds @ 0x8002f14
        x0 = sym..text // 0x8002000
        x0 = x0 + 0   // 0x8002000 // "b\xf8\u04b4\b" // sym..text
        jmp 0x8002fb0
    loc_0x08002f18: // orphan
             x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w0 = w24                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x8002f20 ()             // 0x8002f20(0x0, 0x0, 0x0, 0x0)
             if !x0 jmp 0x8002f9c     // likely

    loc_0x08002f28: // orphan
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8002f30 ()             // 0x8002f30(0x0, 0x0, 0x0, 0x0)
         x25 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002f3c ()             // 0x8002f3c(0x0, 0x0, 0x0, 0x0)
         if !x25 jmp 0x8002fa8    // likely

    loc_0x08002f44: // orphan
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002f48 ()             // 0x8002f48(0x0, 0x0, 0x0, 0x0)
         x24 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x0 = x25 + 0x40
         jmp 0x8002fb8

    loc_0x08002f68: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8002fd4
         dmb ishld
         x0 = x25                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8002f70 ()             // 0x8002f70(0x0, 0x0, 0x0, 0x0)
         if x24 jmp 0x8002fe4     // unlikely

    loc_0x08002f78: // orphan
         // CODE XREFS from sym.get_module_bounds @ 0x8002fe0, 0x800313c
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // sym..text
         jmp 0x8002fb0

    loc_0x08002f9c: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8002f24
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // sym..text
         jmp 0x8002fb0

    loc_0x08002fa8: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8002f40
         x0 = sym..text           // 0x8002000
         x0 = x0 + 0              // 0x8002000 // "b\xf8\u04b4\b" // sym..text

    loc_0x08002fb8: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8002f54
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08002fc0: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8002fcc
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8002fc0     // unlikely

    loc_0x08002fd0: // orphan
         if (w8 == 1)
         b.eq 0x8002f68           // unlikely

    loc_0x08002fd8: // orphan
         // CODE XREF from sym.get_module_bounds @ +0xb4
         if (w8 == 0)
         jmp ifle 0x8003130       // likely

    loc_0x08002fe0: // orphan
         if !x24 jmp 0x8002f78    // likely

    loc_0x08002fe4: // orphan
         // CODE XREFS from sym.get_module_bounds @ 0x8002f74, 0x8003138
         

    loc_0x08002fe8: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8003150
         x0 = x24 + 0x90          // int64_t arg1
         [var_10h] = x0
         0x8002ff0 ()             // 0x8002ff0(0x90, 0x0, 0x0, 0x0)
         

    loc_0x08002ff8: // orphan
         // CODE XREF from fcn.08003160 @ 0x8003164
         x8 = x24 + 0x40
         x0 = var_18h             // int64_t arg1
         // XREFS(73)
                                  // int64_t arg2
         
         // DATA XREF from sym.find_process_by_name @ 0x8003300
         // DATA XREFS from sym.cfi_bypass @ 0x800365c, 0x8003758
         x8 = ~0
         [sp, 0x38] = (xzr,2)
         // DATA XREF from sym.cfi_bypass @ 0x80035b0
         w8 = 0x1
         [sp] = (x20,2)
         // DATA XREF from sym.find_process_by_name @ 0x8003304
         // DATA XREFS from sym.cfi_bypass @ 0x8003664, 0x8003760
         [sp, 0x48] = (xzr,2)
         [sp, 0x28] = (xzr,2)
         0x8003020 ()             // 0x8003020(0x178018, 0x0, 0x0, 0x0)
         if !x0 jmp 0x80030b8     // unlikely

    loc_0x08003028: // orphan
         // DATA XREF from sym.find_process_by_name @ 0x80032f0
         // DATA XREFS from sym.cfi_bypass @ 0x800364c, 0x8003748
         x20 = w21                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // DATA XREF from sym.find_process_by_name @ 0x80032f8
         // DATA XREFS from sym.cfi_bypass @ 0x8003654, 0x8003750
         x19 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800305c

    loc_0x08003040: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8003094
         (x27, 2) = 3
         x25 = x28                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08003048: // orphan
         // XREFS: CODE 0x08003060  CODE 0x08003070  CODE 0x08003090  
         // XREFS: CODE 0x0800309c  CODE 0x080030b4  DATA 0x080032e0  
         // XREFS: DATA 0x0800363c  DATA 0x08003738  
         x0 = var_18h             // int64_t arg1
         x1 = ~0                  // int64_t arg2
         0x8003050 ()             // 0x8003050(0x178018, -1, 0x0, 0x0)
         x26 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // DATA XREF from sym.find_process_by_name @ 0x80032e8
         // DATA XREFS from sym.cfi_bypass @ 0x8003644, 0x8003740
         if !x0 jmp 0x80030c4     // unlikely

    loc_0x0800305c: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x800303c
         x8 = [var_90h_2]         // 0xe1 // 225
         // CODE XREF from sym.hide_module @ 0x80034fc
         if !x8 jmp 0x8003048     // unlikely

    loc_0x08003064: // orphan
         if !w21 jmp 0x8003074    // likely

    loc_0x08003068: // orphan
         // DATA XREF from sym.find_process_by_name @ 0x80032d0
         // DATA XREFS from sym.cfi_bypass @ 0x8003628, 0x8003724
         x9 = [var_38h]           // 0xe1 // 225
         if ((x9 & x20) == 0)
         b.eq 0x8003048           // likely

    loc_0x08003074: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8003064
         x28 = [x8 + 0xb0]        // 0xcf // 207
         // DATA XREF from sym.find_process_by_name @ 0x80032d8
         // DATA XREFS from sym.cfi_bypass @ 0x8003634, 0x8003730
         x1 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         w8 = [x28 + 0x24]        // 0xe3 // 227
         x0 = [x28 + 0x28]        // 0xe3 // 227 // int64_t arg1
         if (x23 == x8)
         csel x2,x23,x8, lo       // int64_t arg3
         0x800308c ()             // 0x800308c(0xffffffffffffff00, 0x0, 0x0, 0x0)
         if w0 jmp 0x8003048      // likely

    loc_0x08003094: // orphan
         if !x25 jmp 0x8003040    // likely

    loc_0x08003098: // orphan
         if (x25 == x28)
         b.ne 0x8003048           // unlikely

    loc_0x080030a0: // orphan
         (x8, 2) = 3
         if (x27 == x8)
         csel x27,x27,x8, lo
         if (x19 == x9)
         csel x19,x19,x9, hi
         jmp 0x8003048

    loc_0x080030b8: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8003024
         x19 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x27 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x25 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080030c4: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8003058
         

    loc_0x080030c8: // orphan
         // CODE XREF from fcn.08003170 @ 0x8003174
         x0 = [var_10h]           // 0x4 // 4 // int64_t arg1
         0x80030cc ()             // 0x80030cc(0x90, 0x0, 0x0, 0x0)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80030d4 ()             // 0x80030d4(0x0, 0x0, 0x0, 0x0)
         if !x25 jmp 0x80030f4    // likely

    loc_0x080030dc: // orphan
         x8 = [sp]                // 0x4 // 4
         w0 = 0x1
         [x8] = x27
         x8 = [var_sp_8h]         // 0x4 // 4
         [x8] = x19
         jmp 0x80030f8

    loc_0x080030f4: // orphan
         // CODE XREFS from sym.get_module_bounds @ 0x8002fb4, 0x80030d8
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080030f8: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x80030f0
         mrs x8,sp_el0            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8 + 0x620]        // 0xcf // 207
         ldur x9,[x29,-8]
         if (x8 == x9)
         b.ne 0x8003140           // likely

    loc_0x0800310c: // orphan
         (x20, 2) = 3
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x28, 2) = 3
         (x29, 2) = 3
         sp = arg_c0h
         hint 0x1d
         

    loc_0x08003130: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8002fdc
         w1 = 0x3
         0x8003134 ()             // 0x8003134(0x0, 0x3, 0x0, 0x0)
         if x24 jmp 0x8002fe4     // unlikely

    loc_0x0800313c: // orphan
         jmp 0x8002f78

    loc_0x08003140: // orphan
         // CODE XREF from sym.get_module_bounds @ 0x8003108
         0x8003140 ()             // 0x8003140(0x0, 0x0, 0x0, 0x0)
         x0 = x24                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x800314c ()             // 0x800314c(0x0, 0x0, 0x0, 0x0)
         jmp 0x8002fe8

}

/* ===== 0x0800317c ===== */
int sym.get_module_base (int esi, int edx) {
    loc_0x800317c:
        hint 0x19
        sp = sp - 0x30
        [sp, 0x20] = (x29,2)
        x29 = var_20h
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x3 = var_10h
        x4 = var_8h
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        [sp, 8] = (xzr,2)
        0x80031a4 ()  // 0x80031a4(0x0, 0x0, 0x0, 0x177fe0)
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        x9 = [var_10h] // 0x4 // 4
        ldur x10,[x29,-8]
        if (w0 == 0)
        csel x0,xzr,x9, eq
        if (x8 == x10)
        b.ne 0x80031d8 // unlikely
            
    loc_0x80031d8:
        // CODE XREF from sym.get_module_base @ 0x80031c4
        0x80031d8 ()  // 0x80031d8(0x0, 0x0, 0x0, 0x0)
        0x080031dc
         // } else {
    loc_0x80031c8:
        (x29, 2) = 3
        sp = arg_30h
        hint 0x1d
        0x080031d4
        }
        return eax;
}

/* ===== 0x080031e0 ===== */
int sym.is_pid_alive (int esi, int edx) {
    loc_0x80031e0:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80031ec ()  // 0x80031ec(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800320c // likely
            
    loc_0x800320c:
        // CODE XREFS from sym.is_pid_alive @ 0x80031f0, 0x80031fc
        (x29, 2) = 3
        hint 0x1d
        0x08003214
         // } else {
    loc_0x80031f4:
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80031f8 ()  // 0x80031f8(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x800320c // likely
        }
        return eax;
    loc_0x8003200:
        x8 = [x0 + 0x680] // 0xc7 // 199
        if (x8 == 0)
        cset w0,ne
}

/* ===== 0x0800321c ===== */
int sym.find_process_by_name (int esi, int edx) {
    loc_0x800321c:
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
        x8 = [x8 + 0x620] // 0xcf // 207
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
        0x8003290 ()  // 0x8003290(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8003450 // likely
            
    loc_0x8003450:
        // CODE XREF from sym.find_process_by_name @ 0x8003294
        x0 = 0x8003000
        x0 = x0 + 0   // int64_t arg1
        0x8003458 ()  // " " // 0x8003458(0x8003000, 0x0, 0x0, 0x0)
        w0 = ~0x1
        jmp 0x8003418
         // do {
    loc_0x8003418:
        // CODE XREFS from sym.find_process_by_name @ 0x800340c, 0x8003460
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-8]
        if (x8 == x9)
        b.ne 0x80034b8 // likely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8003298
    loc_0x80032a8:
        x21 = 0x8003000
        x8 = [x21]    // 0xdc // 220
        if !x8 jmp 0x80032c4 // unlikely
            
    loc_0x80032c4:
        // CODE XREF from sym.find_process_by_name @ 0x80032b0
        x8 = 0x8003000
        x8 = x8 + 0
        x0 = var_sp_8h // int64_t arg1
        (x9, 2) = 3
        [sp, 0x68] = (x9,2)
        (x9, 2) = 3
        [sp, 0x78] = (x9,2)
        (x10, 2) = 3
        [sp, 0x48] = (x10,2)
        (x11, 2) = 3
        [sp, 0x58] = (x11,2)
        (x10, 2) = 3
        [sp, 0x28] = (x10,2)
        (x11, 2) = 3
        [sp, 0x38] = (x11,2)
        (x10, 2) = 3
        (x11, 2) = 3
        [sp, 8] = (x10,2)
        [sp, 0x18] = (x11,2)
        0x8003310 ()  // 0x8003310(0x178008, 0x0, 0x0, 0x0)
        tbz w0,0x1f,0x8003464 // likely
            
    loc_0x8003464:
        // CODE XREF from sym.find_process_by_name @ 0x8003314
        x8 = [var_30h] // 0x4 // 4
        x0 = var_sp_8h // int64_t arg1
        [x21] = x8
        0x8003470 ()  // 0x8003470(0x178008, 0x0, 0x0, 0x0)
        x1 = [x21]    // 0xdc // 220
        if x1 jmp 0x800348c // likely
            
    loc_0x800348c:
        // CODE XREF from sym.find_process_by_name @ 0x8003478
        x0 = 0x8003000
        x0 = x0 + 0   // int64_t arg1
        0x8003494 ()  // 0x8003494(0x8003000, 0x0, 0x0, 0x0)
        x8 = [x21]    // 0xdc // 220
        jmp 0x80032b4
    loc_0x080032b4: // orphan
             // CODE XREF from sym.find_process_by_name @ 0x800349c
             x0 = 0x8003000
             x0 = x0 + 0
             blr x8                   // xzr(0x8003000, 0x0, 0x0, 0x0)
             jmp 0x800331c

    loc_0x08003318: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8003488
         x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800331c: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x80032c0
         [x23] = x0

    loc_0x08003320: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x80032a4
         0x8003320 ()             // 0x8003320(0x0, 0x0, 0x0, 0x0)
         x25 = 0x8003000
         x25 = x25 + 0
         x24 = [x25 + 0x550]      // 0xe0 // 224
         x21 = x24 - 0x550
         if (x21 == x25)
         b.eq 0x8003410           // unlikely

    loc_0x0800333c: // orphan
         x26 = var_88h
         jmp 0x8003354

    loc_0x08003344: // orphan
         // CODE XREFS from sym.find_process_by_name @ 0x8003358, 0x80033ec, 0x8003400
         x24 = [x21 + 0x550]      // 0xdc // 220
         x21 = x24 - 0x550
         if (x21 == x25)
         b.eq 0x8003410           // unlikely

    loc_0x08003354: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8003340
         x8 = [x24 + 0x50]        // 0xdf // 223
         if !x8 jmp 0x8003344     // unlikely

    loc_0x0800335c: // orphan
         x8 = [x23]               // 0xde // 222
         [var_88h] = (byte) wzr
         if !x8 jmp 0x80033c8     // likely

    loc_0x08003368: // orphan
         x1 = var_88h
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x100
         ldur w16,[x8,-4]         // 0xcf // 207
         w17 = 0x6c53             // 'Sl'
         w17 = 0x52b4             // '\xb4R'
         if (w16 == w17)
         b.eq 0x800338c           // unlikely

    loc_0x08003388: // orphan
         brk 0x8228

    loc_0x0800338c: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8003384
         blr x8                   // xzr(0x0, 0x0, 0x0, 0x0)
         tbnz w0,0x1f,0x80033c8   // unlikely

    loc_0x08003394: // orphan
         x0 = var_88h             // int64_t arg1
         w1 = 0x20
         0x800339c ()             // "@" // 0x800339c(0x178088, 0x20, 0x0, 0x0)
         if !x0 jmp 0x80033a8     // unlikely

    loc_0x080033a4: // orphan
         [x0] = (byte) wzr

    loc_0x080033a8: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x80033a0
         x0 = var_88h             // int64_t arg1
         w1 = 0x2f                // '/'
         0x80033b0 ()             // 0x80033b0(0x178088, 0x2f, 0x0, 0x0)
         if (x0 == 0)
         csinc x22,x26,x0, eq
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80033c0 ()             // "\t" // 0x80033c0(0x178089, 0x2f, 0x0, 0x0)
         jmp 0x80033e8

    loc_0x080033c8: // orphan
         // CODE XREFS from sym.find_process_by_name @ 0x8003364, 0x8003390
         x22 = x24 + 0x2e0
         w1 = 0x10
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x80033d4 ()             // 0x80033d4(0x2e0, 0x10, 0x0, 0x0)
         if (x0 == 0x11)
         b.hs 0x80034a0           // likely

    loc_0x080033e0: // orphan
         if (x0 == 0x10)
         b.eq 0x80034ac           // unlikely

    loc_0x080033e8: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x80033c4
         if (x0 == x20)
         b.ne 0x8003344           // unlikely

    loc_0x080033f0: // orphan
         x0 = x22                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg_1f0h
         x2 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x80033fc ()             // 0x80033fc(0x0, 0x0, 0x0, 0x0)
         if w0 jmp 0x8003344      // unlikely

    loc_0x08003404: // orphan
         0x8003404 ()             // 0x8003404(0x0, 0x0, 0x0, 0x0)
         w0 = [x24 + 0xc8]        // 0xdf // 223
         jmp 0x8003418

    loc_0x08003410: // orphan
         // CODE XREFS from sym.find_process_by_name @ 0x8003338, 0x8003350
         0x8003410 ()             // 0x8003410(0x0, 0x0, 0x0, 0x0)
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800342c: // orphan
         (x20, 2) = 3
         x28 = [var_1a0h]         // 0x4 // 4
         (x22, 2) = 3
         (x24, 2) = 3
         (x26, 2) = 3
         (x29, 2) = 3
         sp = arg_1f0h
         hint 0x1d
         

    loc_0x0800347c: // orphan
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         0x8003484 ()             // 0x8003484(0x8003000, 0x0, 0x0, 0x0)
         jmp 0x8003318

    loc_0x080034a0: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x80033dc
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         0x80034a8 ()             // 0x80034a8(0x8003000, 0x0, 0x0, 0x0)

    loc_0x080034ac: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x80033e4
         x0 = 0x8003000
         x0 = x0 + 0              // int64_t arg1
         0x80034b4 ()             // 0x80034b4(0x8003000, 0x0, 0x0, 0x0)

    loc_0x080034b8: // orphan
         // CODE XREF from sym.find_process_by_name @ 0x8003428
         0x80034b8 ()             // 0x80034b8(0x0, 0x0, 0x0, 0x0)
         

}

/* ===== 0x08007d94 ===== */
int sym.hook_write_range (int esi, int edx) {
    loc_0x8007d94:
        hint 0x19
        [sp, -0x40]! = (x29,2)
        [var_10h] = x23
        [sp, 0x20] = (x22,2)
        [sp, 0x30] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = w2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        if (w2 == 1)  // arg3
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        b.lt 0x8007dec // likely
            
    loc_0x8007dec:
        x8 = 0x8007000
        x1 = x20 + w19,sxtw
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8]     // 0xcf // 207
        blr x8        // 0x300000000(0x0, 0x0, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8007e04:
        (x20, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08007e18
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08007dc8: // orphan
             x8 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x9 = [x23]               // 0xde // 222
             w1 = [x21 + x8]          // 0xcf000000dc // 889058230492
             x0 = x20 + x8
             blr x9                   // xzr(0x0, 0x0, 0x0, 0x0)
             if w0 jmp 0x8007e04      // unlikely

    loc_0x08007de0: // orphan
         w22 = w22 + 4
         if (w22 == w19)
         b.lt 0x8007dc8           // unlikely

}

/* ===== 0x08006a14 ===== */
int sym.hide_kgsl_remove (int esi, int edx) {
    loc_0x8006a14:
        if (w0 == 1)  // arg1
        b.lt 0x8006b44 // likely
            
    loc_0x8006b44:
        0x08006b44
         // } else {
    loc_0x8006a1c:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x8006a38 ()  // 0x8006a38(0x8006000, 0x0, 0x0, 0x0)
        x8 = 0x8006000
        w9 = [x8]     // 0xcf // 207
        if (w9 == w19)
        b.ne 0x8006a50 // likely
        }
        return eax;
    loc_0x8006a4c:
        [x8] = wzr
         // do {
    loc_0x8006a50:
        x9 = 0x8006000
        w10 = [x9]    // 0xd0 // 208
        if (w10 == w19)
        b.ne 0x8006a64 // likely
         // } while (?);
        }
        return eax;
    loc_0x8006a60:
        [x9] = wzr
         // do {
    loc_0x8006a64:
        x10 = 0x8006000
        w11 = [x10]   // 0xd1 // 209
        if (w11 == w19)
        b.ne 0x8006a78 // likely
         // } while (?);
        }
        return eax;
    loc_0x8006a74:
        [x10] = wzr
         // do {
    loc_0x8006a78:
        x11 = 0x8006000
        w12 = [x11]   // 0xd2 // 210
        if (w12 == w19)
        b.ne 0x8006a8c // likely
         // } while (?);
        }
        return eax;
    loc_0x8006a88:
        [x11] = wzr
         // do {
    loc_0x8006a8c:
        x12 = 0x8006000
        w13 = [x12]   // 0xd3 // 211
        if (w13 == w19)
        b.ne 0x8006aa0 // likely
         // } while (?);
        }
        return eax;
    loc_0x8006a9c:
        [x12] = wzr
         // do {
    loc_0x8006aa0:
        x13 = 0x8006000
        w14 = [x13]   // 0xd4 // 212
        if (w14 == w19)
        b.ne 0x8006ab4 // likely
         // } while (?);
        }
        return eax;
    loc_0x8006ab0:
        [x13] = wzr
         // do {
    loc_0x8006ab4:
        x14 = 0x8006000
        w15 = [x14]   // 0xd5 // 213
        if (w15 == w19)
        b.ne 0x8006ac8 // likely
         // } while (?);
        }
        return eax;
    loc_0x8006ac4:
        [x14] = wzr
         // do {
    loc_0x8006ac8:
        x15 = 0x8006000
        w16 = [x15]   // 0xd6 // 214
        if (w16 == w19)
        b.ne 0x8006adc // likely
         // } while (?);
        }
        return eax;
    loc_0x8006ad8:
        [x15] = wzr
         // do {
    loc_0x8006adc:
        w8 = [x8]     // 0xcf // 207
        if w8 jmp 0x8006b2c // unlikely
         // } while (?);
        }
        return eax;
    loc_0x8006ae4:
        w8 = [x9]     // 0xd0 // 208
        if w8 jmp 0x8006b2c // unlikely
            
    loc_0x8006b2c:
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x8006b34 ()  // 0x8006b34(0x8006000, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
    loc_0x08006aec: // orphan
             w8 = [x10]               // 0xd1 // 209
             if w8 jmp 0x8006b2c      // unlikely

    loc_0x08006af4: // orphan
         w8 = [x11]               // 0xd2 // 210
         if w8 jmp 0x8006b2c      // unlikely

    loc_0x08006afc: // orphan
         w8 = [x12]               // 0xd3 // 211
         if w8 jmp 0x8006b2c      // unlikely

    loc_0x08006b04: // orphan
         w8 = [x13]               // 0xd4 // 212
         if w8 jmp 0x8006b2c      // unlikely

    loc_0x08006b0c: // orphan
         w8 = [x14]               // 0xd5 // 213
         if w8 jmp 0x8006b2c      // unlikely

    loc_0x08006b14: // orphan
         w8 = [x15]               // 0xd6 // 214
         if w8 jmp 0x8006b2c      // unlikely

    loc_0x08006b1c: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         w1 = 0x3
         0x8006b28 ()             // 0x8006b28(0x8006000, 0x3, 0x0, 0x0)

}

/* ===== 0x080062fc ===== */
int sym.hide_task_remove (int esi, int edx) {
    loc_0x80062fc:
        if (w0 == 1)  // arg1
        b.lt 0x800642c // likely
            
    loc_0x800642c:
        0x0800642c
         // } else {
    loc_0x8006304:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x8006320 ()  // 0x8006320(0x8006000, 0x0, 0x0, 0x0)
        x8 = 0x8006000
        w9 = [x8]     // 0xcf // 207
        if (w9 == w19)
        b.ne 0x8006338 // likely
        }
        return eax;
    loc_0x8006334:
        [x8] = wzr
         // do {
    loc_0x8006338:
        x9 = 0x8006000
        w10 = [x9]    // 0xd0 // 208
        if (w10 == w19)
        b.ne 0x800634c // likely
         // } while (?);
        }
        return eax;
    loc_0x8006348:
        [x9] = wzr
         // do {
    loc_0x800634c:
        x10 = 0x8006000
        w11 = [x10]   // 0xd1 // 209
        if (w11 == w19)
        b.ne 0x8006360 // likely
         // } while (?);
        }
        return eax;
    loc_0x800635c:
        [x10] = wzr
         // do {
    loc_0x8006360:
        x11 = 0x8006000
        w12 = [x11]   // 0xd2 // 210
        if (w12 == w19)
        b.ne 0x8006374 // likely
         // } while (?);
        }
        return eax;
    loc_0x8006370:
        [x11] = wzr
         // do {
    loc_0x8006374:
        x12 = 0x8006000
        w13 = [x12]   // 0xd3 // 211
        if (w13 == w19)
        b.ne 0x8006388 // likely
         // } while (?);
        }
        return eax;
    loc_0x8006384:
        [x12] = wzr
         // do {
    loc_0x8006388:
        x13 = 0x8006000
        w14 = [x13]   // 0xd4 // 212
        if (w14 == w19)
        b.ne 0x800639c // likely
         // } while (?);
        }
        return eax;
    loc_0x8006398:
        [x13] = wzr
         // do {
    loc_0x800639c:
        x14 = 0x8006000
        w15 = [x14]   // 0xd5 // 213
        if (w15 == w19)
        b.ne 0x80063b0 // likely
         // } while (?);
        }
        return eax;
    loc_0x80063ac:
        [x14] = wzr
         // do {
    loc_0x80063b0:
        x15 = 0x8006000
        w16 = [x15]   // 0xd6 // 214
        if (w16 == w19)
        b.ne 0x80063c4 // likely
         // } while (?);
        }
        return eax;
    loc_0x80063c0:
        [x15] = wzr
         // do {
    loc_0x80063c4:
        w8 = [x8]     // 0xcf // 207
        if w8 jmp 0x8006414 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x80063cc:
        w8 = [x9]     // 0xd0 // 208
        if w8 jmp 0x8006414 // unlikely
            
    loc_0x8006414:
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x800641c ()  // 0x800641c(0x8006000, 0x0, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
    loc_0x080063d4: // orphan
             w8 = [x10]               // 0xd1 // 209
             if w8 jmp 0x8006414      // unlikely

    loc_0x080063dc: // orphan
         w8 = [x11]               // 0xd2 // 210
         if w8 jmp 0x8006414      // unlikely

    loc_0x080063e4: // orphan
         w8 = [x12]               // 0xd3 // 211
         if w8 jmp 0x8006414      // unlikely

    loc_0x080063ec: // orphan
         w8 = [x13]               // 0xd4 // 212
         if w8 jmp 0x8006414      // unlikely

    loc_0x080063f4: // orphan
         w8 = [x14]               // 0xd5 // 213
         if w8 jmp 0x8006414      // unlikely

    loc_0x080063fc: // orphan
         w8 = [x15]               // 0xd6 // 214
         if w8 jmp 0x8006414      // unlikely

    loc_0x08006404: // orphan
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         w1 = 0x1
         0x8006410 ()             // 0x8006410(0x8006000, 0x1, 0x0, 0x0)

}

/* ===== 0x08006434 ===== */
int sym.hide_task_is_hidden (int esi, int edx) {
    loc_0x8006434:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w0 == 1)  // arg1
        b.lt 0x80064e0 // likely
            
    loc_0x80064e0:
        w19 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         // do {
    loc_0x80064e4:
        // CODE XREF from sym.hide_task_is_hidden @ 0x80064dc
        w0 = w19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x080064f4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800644c
    loc_0x800646c:
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if (w8 == w19)
        b.eq 0x80064cc // unlikely
            
    loc_0x80064cc:
        w19 = 0x1
         // do {
    loc_0x80064d0:
        // CODE XREF from sym.hide_task_is_hidden @ 0x8006508
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x80064d8 ()  // 0x80064d8(0x8006000, 0x0, 0x0, 0x0)
        jmp 0x80064e4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800647c
    loc_0x800648c:
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if (w8 == w19)
        b.eq 0x80064cc // unlikely
    loc_0x800649c:
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if (w8 == w19)
        b.eq 0x80064cc // unlikely
    loc_0x80064ac:
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if (w8 == w19)
        b.eq 0x80064cc // unlikely
    loc_0x80064bc:
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if (w8 == w19)
        b.ne 0x80064f8 // likely
            
    loc_0x80064f8:
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if (w8 == w19)
        cset w19,eq
        jmp 0x80064d0
}

/* ===== 0x08006168 ===== */
int sym.hide_task_install (int esi, int edx) {
    loc_0x8006168:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w0 == 1)  // arg1
        b.lt 0x800623c // likely
            
    loc_0x800623c:
        w20 = ~0x15
         // do {
    loc_0x8006240:
        // CODE XREF from sym.hide_task_install @ 0x8006238
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08006250
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8006180
    loc_0x80061a8:
        x8 = 0x8006000
        w8 = [x8]     // 0xcf // 207
        if (w8 == w19)
        b.eq 0x8006228 // unlikely
            
    loc_0x8006228:
        w20 = wzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x800622c:
        // CODE XREFS from sym.hide_task_install @ 0x80062ec, 0x80062f4
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x8006234 ()  // 0x8006234(0x8006000, 0x0, 0x0, 0x0)
        jmp 0x8006240
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80061b8
    loc_0x80061c8:
        x9 = 0x8006000
        w15 = [x9]    // 0xd0 // 208
        if (w15 == w19)
        b.eq 0x8006228 // unlikely
    loc_0x80061d8:
        x9 = 0x8006000
        w9 = [x9]     // 0xd0 // 208
        if (w9 == w19)
        b.eq 0x8006228 // unlikely
    loc_0x80061e8:
        x10 = 0x8006000
        w10 = [x10]   // 0xd1 // 209
        if (w10 == w19)
        b.eq 0x8006228 // unlikely
    loc_0x80061f8:
        x12 = 0x8006000
        w12 = [x12]   // 0xd3 // 211
        if (w12 == w19)
        b.eq 0x8006228 // unlikely
    loc_0x8006208:
        x13 = 0x8006000
        w13 = [x13]   // 0xd4 // 212
        if (w13 == w19)
        b.eq 0x8006228 // unlikely
    loc_0x8006218:
        x14 = 0x8006000
        w14 = [x14]   // 0xd5 // 213
        if (w14 == w19)
        b.ne 0x8006254 // likely
            
    loc_0x8006254:
        if (w15 == 0)
        cset w15,eq
        if (w11 == 0)
        cset w11,eq
        if (w8 == 0)
        cset w8,ne
        csetm w16,ne
        w11 &= w11
        w8 = w11 ^ w8
        csinc w11,w16,wzr, eq
        if ((w15 & w8) == 0)
        w8 = 0x2
        csel w8,w8,w11, ne
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
        tbnz w8,0x1f,0x80062f0 // unlikely
            
    loc_0x80062f0:
        w20 = ~0x1b
        jmp 0x800622c
    loc_0x080062dc: // orphan
             w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             x9 = 0x8006000
             x9 = x9 + 0
             [x9 + w8,uxtw 2] = w19
             jmp 0x800622c

}

/* ===== 0x08006854 ===== */
int sym.hide_kgsl_install (int esi, int edx) {
    loc_0x8006854:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w0 == 1)  // arg1
        b.ge 0x8006884 // unlikely
            
    loc_0x8006884:
        w19 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x8006890 ()  // 0x8006890(0x8006000, 0x0, 0x0, 0x0)
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        w1 = 0x3
        0x80068a0 ()  // 0x80068a0(0x8006000, 0x3, 0x0, 0x0)
        if w0 jmp 0x800693c // likely
            
    loc_0x800693c:
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        w1 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800694c ()  // 0x800694c(0x8006000, 0x0, 0x0, 0x0)
         // do {
    loc_0x8006950:
        // CODE XREFS from sym.hide_kgsl_install @ 0x8006938, 0x80069ec
        x0 = 0x8006000
        x0 = x0 + 0   // int64_t arg1
        0x8006958 ()  // 0x8006958(0x8006000, 0x0, 0x0, 0x0)
        jmp 0x8006870
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08006870: // orphan
             // CODE XREF from sym.hide_kgsl_install @ 0x800695c
             w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             (x20, 2) = 3
             (x29, 2) = 3
             hint 0x1d
             

    loc_0x080068c4: // orphan
         x9 = 0x8006000
         w11 = [x9]               // 0xd0 // 208
         if (w11 == w19)
         b.eq 0x8006934           // likely

    loc_0x080068d4: // orphan
         x9 = 0x8006000
         w15 = [x9]               // 0xd0 // 208
         if (w15 == w19)
         b.eq 0x8006934           // likely

    loc_0x080068e4: // orphan
         x9 = 0x8006000
         w9 = [x9]                // 0xd0 // 208
         if (w9 == w19)
         b.eq 0x8006934           // likely

    loc_0x080068f4: // orphan
         x10 = 0x8006000
         w10 = [x10]              // 0xd1 // 209
         if (w10 == w19)
         b.eq 0x8006934           // likely

    loc_0x08006904: // orphan
         x12 = 0x8006000
         w12 = [x12]              // 0xd3 // 211
         if (w12 == w19)
         b.eq 0x8006934           // likely

    loc_0x08006914: // orphan
         x13 = 0x8006000
         w13 = [x13]              // 0xd4 // 212
         if (w13 == w19)
         b.eq 0x8006934           // likely

    loc_0x08006924: // orphan
         x14 = 0x8006000
         w14 = [x14]              // 0xd5 // 213
         if (w14 == w19)
         b.ne 0x8006960           // unlikely

    loc_0x08006934: // orphan
         // CODE XREF from sym.hide_kgsl_install @ 0x8006a0c
         w20 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8006950

    loc_0x08006960: // orphan
         if (w15 == 0)
         cset w15,eq
         if (w11 == 0)
         cset w11,eq
         if (w8 == 0)
         cset w8,ne
         csetm w16,ne
         w11 &= w11
         w8 = w11 ^ w8
         csinc w11,w16,wzr, eq
         if ((w15 & w8) == 0)
         w8 = 0x2
         csel w8,w8,w11, ne
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
         tbz w8,0x1f,0x80069f0    // likely

    loc_0x080069e8: // orphan
         w20 = ~0x1b
         jmp 0x8006950

    loc_0x080069f0: // orphan
         x9 = 0x8006000
         x9 = x9 + 0
         x0 = 0x8006000
         x0 = x0 + 0              // int64_t arg1
         w1 = w19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x9 + w8,uxtw 2] = w19
         0x8006a08 ()             // 0x8006a08(0x8006000, 0x0, 0x0, 0x0)
         jmp 0x8006934

}

/* ===== 0x08006b4c ===== */
int sym.hide_kgsl_cleanup (int esi, int edx) {
    loc_0x8006b4c:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8006000
        x19 = x19 + 0
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8006b68 ()  // 0x8006b68(0x8006000, 0x0, 0x0, 0x0)
        x8 = 0x8006000
        x8 = x8 + 0
        x0 = 0x8006000
        x0 = x0 + 0
        w1 = 0x3
        [x8] = wzr
        [x8 + 4] = wzr
        [x8 + 8] = wzr
        [x8 + 0xc] = wzr
        [x8 + 0x10] = wzr
        [x8 + 0x14] = wzr
        [x8 + 0x18] = wzr
        [x8 + 0x1c] = wzr
        0x8006ba0 ()  // 0x8006ba0(0x8006000, 0x3, 0x0, 0x0)
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8006ba8 ()  // 0x8006ba8(0x8006000, 0x3, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x08006bb8
         // (break)
}

/* ===== 0x08006510 ===== */
int sym.hide_task_cleanup (int esi, int edx) {
    loc_0x8006510:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [var_10h] = x19
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = 0x8006000
        x19 = x19 + 0
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800652c ()  // 0x800652c(0x8006000, 0x0, 0x0, 0x0)
        x8 = 0x8006000
        x8 = x8 + 0
        x0 = 0x8006000
        x0 = x0 + 0
        w1 = 0x1
        [x8] = wzr
        [x8 + 4] = wzr
        [x8 + 8] = wzr
        [x8 + 0xc] = wzr
        [x8 + 0x10] = wzr
        [x8 + 0x14] = wzr
        [x8 + 0x18] = wzr
        [x8 + 0x1c] = wzr
        0x8006564 ()  // 0x8006564(0x8006000, 0x1, 0x0, 0x0)
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x800656c ()  // 0x800656c(0x8006000, 0x1, 0x0, 0x0)
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // sp // sp
        hint 0x1d
        0x0800657c
         // (break)
}

/* ===== 0x080055a8 ===== */
int sym.get_main_thread_elf0 (int esi, int edx) {
    loc_0x80055a8:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80055b8 ()  // 0x80055b8(0x0, 0x0, 0x0, 0x0)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x800569c // likely
            
    loc_0x800569c:
        // CODE XREFS from sym.get_main_thread_elf0 @ 0x8005610, 0x800566c
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x080056ac
         // } else {
    loc_0x80055c4:
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80055cc ()  // 0x80055cc(0x0, 0x0, 0x0, 0x0)
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80055d8 ()  // 0x80055d8(0x0, 0x0, 0x0, 0x0)
        if !x19 jmp 0x8005698 // likely
        }
        return eax;
    loc_0x80055e0:
        x8 = [x19 + 0x658] // 0xda // 218
        if !x8 jmp 0x8005614 // unlikely
            
    loc_0x8005614:
        x0 = x19 + 0x40
        jmp 0x8005670
         // do {
    loc_0x8005670:
        // CODE XREF from sym.get_main_thread_elf0 @ 0x8005618
        w9 = 0x1
        prfm pstl1strm,[x0]
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08005604: // orphan
             dmb ishld
             x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800560c ()             // "#" // 0x800560c(0x0, 0x0, 0x0, 0x0)
             jmp 0x800569c

    loc_0x0800562c: // orphan
         dmb ishld
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         0x8005634 ()             // 0x8005634(0x0, 0x0, 0x0, 0x0)
         jmp 0x8005698

    loc_0x0800563c: // orphan
         // CODE XREF from sym.get_main_thread_elf0 @ 0x80055f0
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08005644: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8005644     // unlikely

    loc_0x08005654: // orphan
         if (w8 == 1)
         b.eq 0x8005604           // unlikely

    loc_0x0800565c: // orphan
         if (w8 == 0)
         jmp ifgt 0x800569c       // unlikely

    loc_0x08005664: // orphan
         w1 = 0x3
         0x8005668 ()             // 0x8005668(0x0, 0x3, 0x0, 0x0)
         jmp 0x800569c

    loc_0x08005678: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8005678     // unlikely

    loc_0x08005688: // orphan
         if (w8 == 1)
         b.eq 0x800562c           // unlikely

    loc_0x08005690: // orphan
         if (w8 == 0)
         jmp ifle 0x80056b0       // likely

    loc_0x08005698: // orphan
         // CODE XREFS from sym.get_main_thread_elf0 @ 0x8005638, 0x80056b8
         x20 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080056b0: // orphan
         w1 = 0x3
         0x80056b4 ()             // 0x80056b4(0x0, 0x3, 0x0, 0x0)
         jmp 0x8005698

}

/* ===== 0x080056c0 ===== */
int sym.get_thread_tpidr_el0 (int esi, int edx) {
    loc_0x80056c0:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80056d0 ()  // 0x80056d0(0x0, 0x0, 0x0, 0x0)
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x0 jmp 0x8005754 // likely
            
    loc_0x8005754:
        // CODE XREFS from sym.get_thread_tpidr_el0 @ 0x8005720, 0x8005728, 0x8005770
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08005764
         // } else {
    loc_0x80056dc:
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w1 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80056e4 ()  // 0x80056e4(0x0, 0x0, 0x0, 0x0)
        x20 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x0 = x19      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x80056f0 ()  // 0x80056f0(0x0, 0x0, 0x0, 0x0)
        if !x20 jmp 0x8005724 // likely
        }
        return eax;
    loc_0x80056f8:
        x19 = [x20 + 0xeb0] // 0xdb // 219
        x0 = x20 + 0x40
        jmp 0x800572c
         // do {
    loc_0x800572c:
        // CODE XREF from sym.get_thread_tpidr_el0 @ 0x8005700
        w9 = 0x1
        prfm pstl1strm,[x0]
         // } while (?);
        }
        return eax;
    loc_0x08005714: // orphan
             dmb ishld
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             0x800571c ()             // "\r" // 0x800571c(0x0, 0x0, 0x0, 0x0)
             jmp 0x8005754

    loc_0x08005724: // orphan
         x19 = xzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8005754

    loc_0x08005734: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8005734     // unlikely

    loc_0x08005744: // orphan
         if (w8 == 1)
         b.eq 0x8005714           // unlikely

    loc_0x0800574c: // orphan
         if (w8 == 0)
         jmp ifle 0x8005768       // likely

    loc_0x08005768: // orphan
         w1 = 0x3
         0x800576c ()             // 0x800576c(0x0, 0x3, 0x0, 0x0)
         jmp 0x8005754

}

/* ===== 0x08005778 ===== */
int sym.get_thread_pacga_key (int esi, int edx) {
    loc_0x8005778:
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
        0x80057a8 ()  // 0x80057a8(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x80057f0 // likely
            
    loc_0x80057f0:
        w0 = ~0x2
        jmp 0x8005890
         // do {
    loc_0x8005890:
        // CODE XREF from sym.get_thread_pacga_key @ 0x80057f4
        (x20, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x080058a4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80057b0
    loc_0x80057cc:
        x8 = [x19 + 0x1258] // 0xda // 218
        [x22] = x8
        x8 = [x19 + 0x1260] // 0xda // 218
        [x21] = x8
        mrs x8,s3_0_c0_c6_2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf00) == 0)
        b.eq 0x80057f8 // unlikely
            
    loc_0x80057f8:
        mrs x8,id_aa64isar1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf000000) == 0)
        b.eq 0x8005834 // unlikely
            
    loc_0x8005834:
        mrs x8,midr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w8,w8,4, 0xc // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w8 - 0xd4d
        if (w8 == 0x3a)
        b.hi 0x8005804 // likely
    loc_0x8005848:
        w9 = 0x1
        x8 = x9 << x8
        x9 = 0x3
        x9 = 0x538
        if ((x8 & x9) == 0)
        b.ne 0x80057e8 // likely
    loc_0x8005860:
        jmp 0x8005804
    loc_0x080057e8: // orphan
             w8 = 0x3
             jmp 0x8005808

    loc_0x08005804: // orphan
         // CODE XREF from sym.get_thread_pacga_key @ 0x8005860
         w8 = 0x5

    loc_0x08005808: // orphan
         // CODE XREF from sym.get_thread_pacga_key @ 0x80057ec
         x0 = x19 + 0x40
         [x20] = w8
         jmp 0x8005864

    loc_0x08005824: // orphan
         dmb ishld
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800582c ()             // 0x800582c(0x0, 0x0, 0x0, 0x0)
         jmp 0x800588c

    loc_0x08005864: // orphan
         // CODE XREF from sym.get_thread_pacga_key @ 0x8005810
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x0800586c: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x800586c     // unlikely

    loc_0x0800587c: // orphan
         if (w8 == 1)
         b.eq 0x8005824           // unlikely

    loc_0x08005884: // orphan
         if (w8 == 0)
         jmp ifle 0x80058a8       // likely

    loc_0x0800588c: // orphan
         // CODE XREFS from sym.get_thread_pacga_key @ 0x8005830, 0x80058b0
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080058a8: // orphan
         w1 = 0x3
         0x80058ac ()             // 0x80058ac(0x0, 0x3, 0x0, 0x0)
         jmp 0x800588c

}

/* ===== 0x080058b8 ===== */
int sym.get_thread_pacia_key (int esi, int edx) {
    loc_0x80058b8:
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
        // CODE XREF from sym.paradise_get_file_private @ +0x30
        0x80058e8 ()  // 0x80058e8(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8005930 // likely
            
    loc_0x8005930:
        w0 = ~0x2
        jmp 0x80059d0
         // do {
    loc_0x80059d0:
        // CODE XREF from sym.get_thread_pacia_key @ 0x8005934
        (x20, 2) = 3
        x23 = [var_10h] // 0x4 // 4
        (x22, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x080059e4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80058f0
    loc_0x800590c:
        x8 = [x19 + 0x1218] // 0xda // 218
        [x22] = x8
        x8 = [x19 + 0x1220] // 0xda // 218
        [x21] = x8
        mrs x8,s3_0_c0_c6_2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf00) == 0)
        b.eq 0x8005938 // unlikely
            
    loc_0x8005938:
        mrs x8,id_aa64isar1_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if ((x8 & 0xf000000) == 0)
        b.eq 0x8005974 // unlikely
            
    loc_0x8005974:
        mrs x8,midr_el1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w8,w8,4, 0xc // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w8 - 0xd4d
        if (w8 == 0x3a)
        b.hi 0x8005944 // likely
    loc_0x8005988:
        w9 = 0x1
        x8 = x9 << x8
        x9 = 0x3
        x9 = 0x538
        if ((x8 & x9) == 0)
        b.ne 0x8005928 // likely
    loc_0x80059a0:
        jmp 0x8005944
    loc_0x08005928: // orphan
             w8 = 0x3
             jmp 0x8005948

    loc_0x08005944: // orphan
         // CODE XREF from sym.get_thread_pacia_key @ 0x80059a0
         w8 = 0x5

    loc_0x08005948: // orphan
         // CODE XREF from sym.get_thread_pacia_key @ 0x800592c
         x0 = x19 + 0x40
         [x20] = w8
         jmp 0x80059a4

    loc_0x08005964: // orphan
         dmb ishld
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x800596c ()             // 0x800596c(0x0, 0x0, 0x0, 0x0)
         jmp 0x80059cc

    loc_0x080059a4: // orphan
         // CODE XREF from sym.get_thread_pacia_key @ 0x8005950
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x080059ac: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x80059ac     // unlikely

    loc_0x080059bc: // orphan
         if (w8 == 1)
         b.eq 0x8005964           // unlikely

    loc_0x080059c4: // orphan
         if (w8 == 0)
         jmp ifle 0x80059e8       // likely

    loc_0x080059cc: // orphan
         // CODE XREFS from sym.get_thread_pacia_key @ 0x8005970, 0x80059f0
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x080059e8: // orphan
         w1 = 0x3
         0x80059ec ()             // 0x80059ec(0x0, 0x3, 0x0, 0x0)
         jmp 0x80059cc

}

/* ===== 0x080059f8 ===== */
int sym.bind_thread_pacga_key (int esi, int edx) {
    loc_0x80059f8:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = w1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        0x8005a14 ()  // " \r" // 0x8005a14(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8005bbc // likely
            
    loc_0x8005bbc:
        // CODE XREFS from sym.bind_thread_pacga_key @ 0x8005af8, 0x8005c04
        w0 = ~0x2
         // do {
    loc_0x8005bc0:
        // CODE XREF from sym.bind_thread_pacga_key @ 0x8005b84
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x08005bd0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8005a1c
    loc_0x8005a38:
        w0 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x8005a3c ()  // 0x8005a3c(0x0, 0x0, 0x0, 0x0)
        if !x0 jmp 0x8005ab4 // likely
            
    loc_0x8005ab4:
        x0 = x19 + 0x40
        jmp 0x8005b94
         // do {
    loc_0x8005b94:
        // CODE XREF from sym.bind_thread_pacga_key @ 0x8005ab8
        w9 = 0x1
        prfm pstl1strm,[x0]
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8005a44
    loc_0x8005a60:
        x8 = [x19 + 0x1258] // 0xda // 218
        mrs x10,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (x20 == x10)
        [x20 + 0x1258] = x8
        x9 = [x19 + 0x1260] // 0xda // 218
        [x20 + 0x1260] = x9
        b.ne 0x8005a8c // unlikely
            
    loc_0x8005a8c:
        x0 = x20 + 0x40
        jmp 0x8005afc
         // do {
    loc_0x8005afc:
        // CODE XREF from sym.bind_thread_pacga_key @ 0x8005a90
        w9 = 0x1
        prfm pstl1strm,[x0]
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x08005aa4: // orphan
             dmb ishld
             x0 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
             0x8005aac ()             // 0x8005aac(0x0, 0x0, 0x0, 0x0)
             jmp 0x8005b24

    loc_0x08005acc: // orphan
         dmb ishld
         jmp 0x8005af0

    loc_0x08005ad4: // orphan
         x0 = x19 + 0x40
         jmp 0x8005bd4

    loc_0x08005aec: // orphan
         dmb ishld

    loc_0x08005af0: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x8005ad0
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8005af4 ()             // "1" // 0x8005af4(0x0, 0x0, 0x0, 0x0)
         jmp 0x8005bbc

    loc_0x08005b04: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8005b04     // unlikely

    loc_0x08005b14: // orphan
         if (w8 == 1)
         b.eq 0x8005aa4           // unlikely

    loc_0x08005b1c: // orphan
         if (w8 == 0)
         jmp ifle 0x8005b4c       // likely

    loc_0x08005b24: // orphan
         // CODE XREFS from sym.bind_thread_pacga_key @ 0x8005ab0, 0x8005b54
         x0 = x19 + 0x40
         jmp 0x8005b58

    loc_0x08005b3c: // orphan
         dmb ishld
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg1
         0x8005b44 ()             // 0x8005b44(0x0, 0x0, 0x0, 0x0)
         jmp 0x8005b80

    loc_0x08005b4c: // orphan
         w1 = 0x3
         0x8005b50 ()             // 0x8005b50(0x0, 0x3, 0x0, 0x0)
         jmp 0x8005b24

    loc_0x08005b58: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x8005b28
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08005b60: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8005b60     // unlikely

    loc_0x08005b70: // orphan
         if (w8 == 1)
         b.eq 0x8005b3c           // unlikely

    loc_0x08005b78: // orphan
         if (w8 == 0)
         jmp ifle 0x8005b88       // likely

    loc_0x08005b80: // orphan
         // CODE XREFS from sym.bind_thread_pacga_key @ 0x8005b48, 0x8005b90
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8005bc0

    loc_0x08005b88: // orphan
         w1 = 0x3
         0x8005b8c ()             // 0x8005b8c(0x0, 0x3, 0x0, 0x0)
         jmp 0x8005b80

    loc_0x08005b9c: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8005b9c     // unlikely

    loc_0x08005bac: // orphan
         if (w8 == 1)
         b.eq 0x8005acc           // unlikely

    loc_0x08005bb4: // orphan
         if (w8 == 0)
         jmp ifle 0x8005bfc       // likely

    loc_0x08005bd4: // orphan
         // CODE XREF from sym.bind_thread_pacga_key @ 0x8005ad8
         w9 = 0x1
         prfm pstl1strm,[x0]

    loc_0x08005bdc: // orphan
         ldxr w8,[x0]
         w10 = w8 - w9
         stlxr w11,w10,[x0]
         if w11 jmp 0x8005bdc     // unlikely

    loc_0x08005bec: // orphan
         if (w8 == 1)
         b.eq 0x8005aec           // unlikely

    loc_0x08005bf4: // orphan
         if (w8 == 0)
         jmp ifgt 0x8005bbc       // unlikely

    loc_0x08005bfc: // orphan
         w1 = 0x3
         0x8005c00 ()             // 0x8005c00(0x0, 0x3, 0x0, 0x0)
         jmp 0x8005bbc

}

/* ===== 0x0800bd04 ===== */
int sym.inline_hook_install_count (int esi, int edx) {
    loc_0x800bd04:
        hint 0x19
        [sp, -0x60]! = (x29,2)
        [sp, 0x10] = (x28,2)
        [sp, 0x20] = (x26,2)
        [sp, 0x30] = (x24,2)
        [sp, 0x40] = (x22,2)
        [sp, 0x50] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        sp = sp - 0x5f0
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w23 = ~0x15
        x8 = [x8 + 0x620] // 0xcf // 207
        [x29 = x8
        if !x0 jmp 0x800c198 // likely
            
    loc_0x800c198:
        // CODE XREFS from sym.inline_hook_install_count @ 0x800bd38, 0x800bd44, 0x800bd54
        mrs x8,sp_el0 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x8 = [x8 + 0x620] // 0xcf // 207
        ldur x9,[x29,-0x10]
        if (x8 == x9)
        b.ne 0x800c2dc // likely
            
    loc_0x800c2dc:
        0x800c2dc ()  // 0x800c2dc(0x0, 0x0, 0x0, 0x0)
         // do {
    loc_0x800c2e0:
        // CODE XREF from sym.inline_hook_install_count @ 0x800c2bc
        x8 = 0x800c000
        x8 = x8 + 0
        prfm pstl1strm,[x8]
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x800bd3c
    loc_0x800bd48:
        if (w20 == 0x20)
        b.ls 0x800bd58 // likely
            
    loc_0x800bd58:
        // CODE XREF from sym.inline_hook_install_count @ 0x800bd4c
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x800b000
        x0 = x0 + 0   // int64_t arg1
        0x800bd64 ()  // 0x800bd64(0x800b000, 0x0, 0x0, 0x0)
        x8 = var_40h_2
        x24 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w20 = w20     // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w21 = 0x38    // '8'
        x8 = var_e4h
        x26 = var_220h
        w25 = 0x1
        [sp, 0x18] = (x20,2)
        jmp 0x800bd9c
         // do {
    loc_0x800bd9c:
        // CODE XREF from sym.inline_hook_install_count @ 0x800bd88
        madd x8,x24,x21, x19
        x28 = x8      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = (byte) [x28 + 0x30]! // 0xe3 // 227
        if w9 jmp 0x800bd8c // likely
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0800bd8c: // orphan
             // CODE XREFS from sym.inline_hook_install_count @ 0x800bda8, 0x800c144
             x24 = x24 + 1
             w25 = w25 + 1
             if (x24 == x20)
             b.eq 0x800c1d4           // unlikely

    loc_0x0800bdac: // orphan
         madd x22,x24,x21, x19
         x0 = [x22 + 8]!          // 0xdd // 221
         if x0 jmp 0x800bdcc      // likely

    loc_0x0800bdb8: // orphan
         x0 = [x8]                // 0xcf // 207
         if !x0 jmp 0x800c1dc     // unlikely

    loc_0x0800bdc0: // orphan
         0x800bdc0 ()             // 0x800bdc0(0x0, 0x0, 0x0, 0x0)
         [x22] = x0
         if !x0 jmp 0x800c1e4     // likely

    loc_0x0800bdcc: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800bdb4
         madd x23,x24,x21, x19
         x8 = [x23 + 0x10]!       // 0xde // 222
         if !x8 jmp 0x800c1dc     // unlikely

    loc_0x0800bdd8: // orphan
         madd x27,x24,x21, x19
         w8 = [x0]                // 0xc7 // 199
         x1 = var_220h            // int64_t arg2
         x9 = x27                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x20 = x27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x21 = x27                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x9 + 0x20]! = w8
         [var_28h] = x9
         w9 = [x0 + 4]            // 0xc7 // 199
         [x20 + 0x24]! = w9
         w9 = [x0 + 8]            // 0xc7 // 199
         [x21 + 0x28]! = w9
         w9 = [x0 + 0xc]          // 0xc7 // 199
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [var_0h_2] = xzr
         [var_0h_3] = xzr
         [var_0h_4] = xzr
         [var_0h_5] = xzr
         [var_0h_6] = xzr
         [var_0h_7] = xzr
         [var_0h_8] = xzr
         [x27 + 0x2c]! = w9
         [var_0h_9] = xzr
         [var_220h] = xzr
         0x800be38 ()             // 0x800be38(0x0, 0x178220, 0x0, 0x0)
         w8 = [var_22ch]          // 0x4 // 4
         if (w8 == 0x2c)
         b.hi 0x800be64           // unlikely

    loc_0x0800be48: // orphan
         w9 = 0x1
         x8 = x9 << x8
         x9 = 0xe300
         x9 = 0xf
         x9 = 0x1800
         if ((x8 & x9) == 0)
         b.ne 0x800c168           // likely

    loc_0x0800be64: // orphan
         w0 = [x20]               // 0xdb // 219
         x1 = var_220h            // int64_t arg2
         [var_0h_2] = xzr
         [var_0h_3] = xzr
         [var_0h_4] = xzr
         [var_0h_5] = xzr
         [var_0h_6] = xzr
         [var_0h_7] = xzr
         [var_0h_8] = xzr
         [var_0h_9] = xzr
         [var_220h] = xzr
         0x800be90 ()             // 0x800be90(0x0, 0x178220, 0x0, 0x0)
         w8 = [var_22ch]          // 0x4 // 4
         if (w8 == 0x2c)
         b.hi 0x800bebc           // unlikely

    loc_0x0800bea0: // orphan
         w9 = 0x1
         x8 = x9 << x8
         x9 = 0xe300
         x9 = 0xf
         x9 = 0x1800
         if ((x8 & x9) == 0)
         b.ne 0x800c168           // likely

    loc_0x0800bebc: // orphan
         w0 = [x21]               // 0xdc // 220
         x1 = var_220h            // int64_t arg2
         [var_0h_2] = xzr
         [var_0h_3] = xzr
         [var_0h_4] = xzr
         [var_0h_5] = xzr
         [var_0h_6] = xzr
         [var_0h_7] = xzr
         [var_0h_8] = xzr
         [var_0h_9] = xzr
         [var_220h] = xzr
         0x800bee8 ()             // 0x800bee8(0x0, 0x178220, 0x0, 0x0)
         w8 = [var_22ch]          // 0x4 // 4
         if (w8 == 0x2c)
         b.hi 0x800bf14           // unlikely

    loc_0x0800bef8: // orphan
         w9 = 0x1
         x8 = x9 << x8
         x9 = 0xe300
         x9 = 0xf
         x9 = 0x1800
         if ((x8 & x9) == 0)
         b.ne 0x800c168           // likely

    loc_0x0800bf14: // orphan
         w0 = [x27]               // 0xe2 // 226
         x1 = var_220h            // int64_t arg2
         [var_0h_2] = xzr
         [var_0h_3] = xzr
         [var_0h_4] = xzr
         [var_0h_5] = xzr
         [var_0h_6] = xzr
         [var_0h_7] = xzr
         [var_0h_8] = xzr
         [var_0h_9] = xzr
         [var_220h] = xzr
         0x800bf40 ()             // 0x800bf40(0x0, 0x178220, 0x0, 0x0)
         w8 = [var_22ch]          // 0x4 // 4
         if (w8 == 0x2c)
         b.hi 0x800bf6c           // unlikely

    loc_0x0800bf50: // orphan
         w9 = 0x1
         x8 = x9 << x8
         x9 = 0xe300
         x9 = 0xf
         x9 = 0x1800
         if ((x8 & x9) == 0)
         b.ne 0x800c168           // likely

    loc_0x0800bf6c: // orphan
         x8 = 0x800b000
         x8 = [x8]                // 0xcf // 207
         x8 = x8 | 0xffffffff00000000
         x9 = ~x8
         if (x8 != 1)
         w8 = 0x20
         rbit x9,x9
         clz x9,x9
         csel x8,x8,x9, eq
         if (w8 == 0x1f)
         b.hi 0x800c1ec           // unlikely

    loc_0x0800bf98: // orphan
         w9 = 0x1
         x12 = x9 << x8
         [var_8h] = x12
         jmp 0x800c148

    loc_0x0800bfb4: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800c164
         w10 = 0x38               // '8'
         w11 = 0x1e0
         x21 = [x23]              // 0xde // 222
         madd x9,x24,x10, x19
         x0 = var_40h_2           // int64_t arg1
         x1 = 0x800b000
         x1 = x1 + 0              // int64_t arg2
         w2 = 0x1d0
         madd x12,x24,x10, x19
         x10 = 0x800b000
         x10 = x10 + 0
         umaddl x20,w8,w11, x10
         x10 = [x22]              // 0xdd // 221
         x9 = x9 + 0x18
         [var_0h_10] = x9
         x27 = x10 + 0x10
         [x9] = x20
         [x12 + 0x34]! = w8
         [sp] = x12
         // XREFS(89)
         0x800c000 ()             // 0x800c000(0x178040, 0x800b000, 0x1d0, 0x0)
         (x10, 2) = 3
         [var_0h_11] = x27
         [var_0h_12] = x21
         (x8, 2) = 3
         [x10] = (x8,2)
         x8 = 0x800c000
         x23 = [x8]               // 0xcf // 207
         if x23 jmp 0x800c040     // likely

    loc_0x0800c024: // orphan
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800c02c ()             // 0x800c02c(0x800c000, 0x0, 0x0, 0x0)
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = 0x800c000
         [x8] = x0
         if !x0 jmp 0x800c2a4     // unlikely

    loc_0x0800c040: // orphan
         x0 = var_220h            // int64_t arg1
         w1 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w2 = 0x3c0
         0x800c04c ()             // 0x800c04c(0x178220, 0x0, 0x3c0, 0x0)
         x8 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x0800c054: // orphan
         [x26 + x8] = x20
         x8 = x8 + 8
         x20 = x20 + 4
         if (x8 == 0x3c0)
         b.ne 0x800c054           // likely

    loc_0x0800c068: // orphan
         x27 = [var_0h_10]        // 0x4 // 4
         w21 = 0x38               // '8'
         if x23 jmp 0x800c090     // unlikely

    loc_0x0800c074: // orphan
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800c07c ()             // 0x800c07c(0x800c000, 0x0, 0x0, 0x0)
         x23 = x0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = 0x800c000
         [x8] = x0
         if !x0 jmp 0x800c2b0     // unlikely

    loc_0x0800c090: // orphan
         x0 = var_220h
         x1 = var_40h_2
         w2 = 0x78                // 'x'
         blr x23                  // xzr(0x178220, 0x178040, 0x78, 0x0)
         if w0 jmp 0x800c1f4      // likely

    loc_0x0800c0a4: // orphan
         x10 = 0x50               // 'P'
         x8 = 0x800c000
         x9 = [x27]               // 0xe2 // 226
         x10 = 0x5800
         x8 = [x8]                // 0xcf // 207
         x20 = [x22]              // 0xdd // 221
         x10 = 0x200
         x10 = 0xd65f             // '_\xd6'
         [sp, 0x30] = (x10,2)
         if x8 jmp 0x800c0e8      // likely

    loc_0x0800c0cc: // orphan
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800c0d4 ()             // 0x800c0d4(0x800c000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x800c000
         [x9] = x0
         // STRING XREF from sym.inline_hook_remove_all @ 0x800c56c
         if !x0 jmp 0x800c20c     // unlikely

    loc_0x0800c0e8: // orphan
         x9 = x20 + 4
         x10 = x20 + 8
         [var_220h] = x20
         [var_0h_9] = x9
         x9 = x20 + 0xc
         [var_0h_8] = x10
         [var_0h_7] = x9
         if x8 jmp 0x800c124      // unlikely

    loc_0x0800c108: // orphan
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800c110 ()             // 0x800c110(0x800c000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x800c000
         [x9] = x0
         if !x0 jmp 0x800c20c     // unlikely

    loc_0x0800c124: // orphan
         x0 = var_220h
         x1 = var_30h_2           // "P"
         w2 = 0x4
         blr x8                   // xzr(0x178220, 0x178030, 0x4, 0x0)
         if w0 jmp 0x800c1fc      // likely

    loc_0x0800c138: // orphan
         x20 = [var_18h]          // 0x4 // 4
         w8 = 0x1
         [x28] = (byte) w8
         jmp 0x800bd8c

    loc_0x0800c148: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800bfa4
         x11 = 0x800c000
         x11 = x11 + 0
         prfm pstl1strm,[x11]

    loc_0x0800c154: // orphan
         ldxr x9,[x11]
         x9 = x9 | x12
         stxr w10,x9,[x11]
         if w10 jmp 0x800c154     // unlikely

    loc_0x0800c164: // orphan
         jmp 0x800bfb4

    loc_0x0800c168: // orphan
         w23 = ~0x5e              // '^'

    loc_0x0800c16c: // orphan
         // CODE XREFS from sym.inline_hook_install_count @ 0x800c1e0, 0x800c1e8, 0x800c1f0, 0x800c2d8
         if !w24 jmp 0x800c18c    // likely

    loc_0x0800c170: // orphan
         w20 = 0x38               // '8'

    loc_0x0800c174: // orphan
         w8 = w25 - 2
         umaddl x0,w8,w20, x19    // int64_t arg1
         sym.hook_entry_remove () // sym.hook_entry_remove(0x0, 0x0)
         w25 = w25 - 1
         if (w25 == 1)
         jmp ifgt 0x800c174       // unlikely

    loc_0x0800c18c: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800c1d8
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800c194 ()             // 0x800c194(0x800c000, 0x0, 0x0, 0x0)

    loc_0x0800c1d4: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800bd98
         w23 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800c18c

    loc_0x0800c1dc: // orphan
         // CODE XREFS from sym.inline_hook_install_count @ 0x800bdbc, 0x800bdd4
         w23 = ~0x15
         jmp 0x800c16c

    loc_0x0800c1e4: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800bdc8
         w23 = ~0x1
         jmp 0x800c16c

    loc_0x0800c1ec: // orphan
         w23 = ~0x1b
         jmp 0x800c16c

    loc_0x0800c1f4: // orphan
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x800c2b4

    loc_0x0800c1fc: // orphan
         x8 = 0x800c000
         w23 = w0                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = [x8]                // 0xcf // 207
         jmp 0x800c210

    loc_0x0800c20c: // orphan
         w23 = ~0x1

    loc_0x0800c210: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800c208
         x20 = [x22]              // 0xdd // 221
         if x8 jmp 0x800c234      // unlikely

    loc_0x0800c218: // orphan
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800c220 ()             // 0x800c220(0x800c000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x800c000
         [x9] = x0
         if !x0 jmp 0x800c280     // unlikely

    loc_0x0800c234: // orphan
         x9 = x20 + 4
         x10 = x20 + 8
         [var_220h] = x20
         [var_0h_9] = x9
         x9 = x20 + 0xc
         [var_0h_8] = x10
         [var_0h_7] = x9
         if x8 jmp 0x800c270      // unlikely

    loc_0x0800c254: // orphan
         x0 = 0x800c000
         x0 = x0 + 0              // int64_t arg1
         0x800c25c ()             // 0x800c25c(0x800c000, 0x0, 0x0, 0x0)
         x8 = x0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = 0x800c000
         [x9] = x0
         if !x0 jmp 0x800c280     // unlikely

    loc_0x0800c270: // orphan
         x1 = [var_28h]           // 0x4 // 4
         x0 = var_220h
         w2 = 0x4
         blr x8                   // " " // xzr(0x178220, 0x20, 0x4, 0x0)

    loc_0x0800c280: // orphan
         jmp 0x800c300

    loc_0x0800c294: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800c320
         x9 = [sp]                // 0x4 // 4
         w8 = ~0
         [x9] = w8
         jmp 0x800c2d4

    loc_0x0800c2a4: // orphan
         (x11, 2) = 3
         w23 = ~0x1
         jmp 0x800c2b8

    loc_0x0800c2b0: // orphan
         w23 = ~0x1

    loc_0x0800c2b4: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800c1f8
         x11 = [var_8h]           // 0x4 // 4

    loc_0x0800c2b8: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800c2ac
         x12 = [sp]               // 0x4 // 4
         jmp 0x800c2e0

    loc_0x0800c2cc: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800c2fc
         w8 = ~0
         [x12] = w8

    loc_0x0800c2d4: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800c2a0
         [x27] = xzr
         jmp 0x800c16c

    loc_0x0800c2ec: // orphan
         ldxr x9,[x8]
         bic x9,x9,x11            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w10,x9,[x8]
         if w10 jmp 0x800c2ec     // unlikely

    loc_0x0800c2fc: // orphan
         jmp 0x800c2cc

    loc_0x0800c300: // orphan
         // CODE XREF from sym.inline_hook_install_count @ 0x800c280
         x8 = 0x800c000
         x8 = x8 + 0
         x11 = [var_8h]           // 0x4 // 4
         prfm pstl1strm,[x8]

    loc_0x0800c310: // orphan
         ldxr x9,[x8]
         bic x9,x9,x11            // '\xff\xff\xff\xff\xff\xff\xff\xff'
         stxr w10,x9,[x8]
         if w10 jmp 0x800c310     // unlikely

    loc_0x0800c320: // orphan
         jmp 0x800c294

}

/* ===== 0x0800c448 ===== */
int sym.inline_hook_remove_count (int esi, int edx) {
    loc_0x800c448:
        if !x0 jmp 0x800c4bc // likely
            
    loc_0x800c4bc:
        0x0800c4bc
         // } else {
    loc_0x800c44c:
        hint 0x19
        [sp, -0x30]! = (x29,2)
        [var_10h] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff' // (pstr 0x00178000) "4"
        w20 = w1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        if (w1 == 1)  // arg2
        b.lt 0x800c4ac // likely
        }
        return eax;
    loc_0x800c46c:
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = 0x800c000
        x0 = x0 + 0   // int64_t arg1
        0x800c478 ()  // 0x800c478(0x800c000, 0x0, 0x0, 0x0)
        w8 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w21 = 0x38    // '8'
        x20 = x8 + 1
         // do {
    loc_0x800c488:
        w8 = w20 - 2
        umaddl x0,w8,w21, x19 // int64_t arg1
        sym.hook_entry_remove () // sym.hook_entry_remove(0x0, 0x0)
        x20 = x20 - 1
        if (x20 == 1)
        b.hi 0x800c488 // likely
         // } while (?);
        }
        return eax;
    loc_0x800c4a0:
        x0 = 0x800c000
        x0 = x0 + 0   // int64_t arg1
        0x800c4a8 ()  // 0x800c4a8(0x800c000, 0x0, 0x0, 0x0)
         // do {
    loc_0x800c4ac:
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // "P"
        hint 0x1d
         // } while (?);
        }
        return eax;
}

/* ===== 0x08007e20 ===== */
int sym.check_target_can_hijack (int esi, int edx) {
    loc_0x8007e20:
        w1 = [x0]     // 0xc7 // 199 // arg1
        w8 = 0x9000
        w9 = w1 & 0x1f000000
        w9 = w9 | 0x80000000 // pstate
        if (w9 == w8)
        b.eq 0x80080d8 // unlikely
            
    loc_0x80080d8:
        hint 0x19
        [sp, -0x10]! = (x29,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff' // (pstr 0x00178000) "4"
        x0 = 0x8008000
        x0 = x0 + 0   // int64_t arg1
        0x80080ec ()  // 0x80080ec(0x8008000, 0x0, 0x0, 0x0)
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x29, 2) = 3  // "4" sp // "4" sp
        hint 0x1d
        0x080080fc
         // } else {
    loc_0x8007e38:
        w8 = w1 | 0x80000000 // pstate
        w9 = w1 & 0xff000000
        w10 = w1 | 0x2000000
        w8 = w8 >> 0x1a
        if (w8 == 0x25)
        w8 = 0x5400
        ccmp w9,w8,4, ne
        w8 = w10 & 0x7e000000
        w10 = 0x3600
        ccmp w8,w10,4, ne
        b.eq 0x80080d8 // unlikely
        }
        return eax;
    loc_0x8007e64:
        w8 = 0x9800
        if (w9 == w8)
        b.eq 0x80080d8 // unlikely
    loc_0x8007e70:
        w9 = 0xbf00
        w11 = 0x1800
        w10 = w1 & w9
        if (w10 == w11)
        b.eq 0x80080d8 // unlikely
    loc_0x8007e84:
        w10 = w1 & 0x3f000000
        w11 = 0x1c00
        if (w10 == w11)
        b.eq 0x80080d8 // unlikely
    loc_0x8007e94:
        w1 = [x0 + 4] // 0xc7 // 199 // arg1
        w10 = 0x9f00
        w12 = 0x9000
        w11 = w1 & w10
        w11 = w11 | 0x80000000 // pstate
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x8007eb0:
        w11 = w1 | 0x80000000 // pstate
        w11 = w11 >> 0x1a
        if (w11 == 0x25)
        b.eq 0x80080d8 // unlikely
    loc_0x8007ec0:
        w11 = w1 & 0xff000000
        w12 = 0x5400
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x8007ed0:
        w12 = w1 | 0x2000000
        w13 = 0x3600
        w12 = w12 & 0x7e000000
        if (w12 == w13)
        b.eq 0x80080d8 // unlikely
    loc_0x8007ee4:
        if (w11 == w8)
        b.eq 0x80080d8 // likely
    loc_0x8007eec:
        w11 = w1 & w9
        w12 = 0x1800
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x8007efc:
        w11 = w1 & 0x3f000000
        w12 = 0x1c00
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x8007f0c:
        w1 = [x0 + 8] // 0xc7 // 199 // arg1
        w12 = 0x9000
        w11 = w1 & w10
        w11 = w11 | 0x80000000 // pstate
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x8007f24:
        w11 = w1 | 0x80000000 // pstate
        w11 = w11 >> 0x1a
        if (w11 == 0x25)
        b.eq 0x80080d8 // unlikely
    loc_0x8007f34:
        w11 = w1 & 0xff000000
        w12 = 0x5400
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x8007f44:
        w12 = w1 | 0x2000000
        w12 = w12 & 0x7e000000
        if (w12 == w13)
        b.eq 0x80080d8 // unlikely
    loc_0x8007f54:
        if (w11 == w8)
        b.eq 0x80080d8 // likely
    loc_0x8007f5c:
        w11 = w1 & w9
        w12 = 0x1800
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x8007f6c:
        w11 = w1 & 0x3f000000
        w12 = 0x1c00
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x8007f7c:
        w1 = [x0 + 0xc] // 0xc7 // 199 // arg1
        w12 = 0x9000
        w11 = w1 & w10
        w11 = w11 | 0x80000000 // pstate
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x8007f94:
        w11 = w1 | 0x80000000 // pstate
        w11 = w11 >> 0x1a
        if (w11 == 0x25)
        b.eq 0x80080d8 // unlikely
    loc_0x8007fa4:
        w11 = w1 & 0xff000000
        w12 = 0x5400
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x8007fb4:
        w12 = w1 | 0x2000000
        w12 = w12 & 0x7e000000
        if (w12 == w13)
        b.eq 0x80080d8 // unlikely
    loc_0x8007fc4:
        if (w11 == w8)
        b.eq 0x80080d8 // likely
    loc_0x8007fcc:
        w11 = w1 & w9
        w12 = 0x1800
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x8007fdc:
        w11 = w1 & 0x3f000000
        w12 = 0x1c00
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x8007fec:
        w1 = [x0 + 0x10] // 0xc7 // 199 // arg1
        w12 = 0x9000
        w11 = w1 & w10
        w11 = w11 | 0x80000000 // pstate
        if (w11 == w12)
        // CODE XREFS from sym.check_target_can_hijack @ 0x80080e4, 0x80080e8
        b.eq 0x80080d8 // unlikely
    loc_0x8008004:
        w11 = w1 | 0x80000000 // pstate
        w11 = w11 >> 0x1a
        if (w11 == 0x25)
        b.eq 0x80080d8 // unlikely
    loc_0x8008014:
        w11 = w1 & 0xff000000
        w12 = 0x5400
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x8008024:
        w12 = w1 | 0x2000000
        w12 = w12 & 0x7e000000
        if (w12 == w13)
        b.eq 0x80080d8 // unlikely
    loc_0x8008034:
        if (w11 == w8)
        b.eq 0x80080d8 // likely
    loc_0x800803c:
        w11 = w1 & w9
        w12 = 0x1800
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x800804c:
        w11 = w1 & 0x3f000000
        w12 = 0x1c00
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x800805c:
        w1 = [x0 + 0x14] // 0xc7 // 199 // arg1
        w11 = 0x9000
        w10 = w1 & w10
        w10 = w10 | 0x80000000 // pstate
        if (w10 == w11)
        b.eq 0x80080d8 // unlikely
    loc_0x8008074:
        w10 = w1 | 0x80000000 // pstate
        w10 = w10 >> 0x1a
        if (w10 == 0x25)
        b.eq 0x80080d8 // unlikely
    loc_0x8008084:
        w10 = w1 & 0xff000000
        w11 = 0x5400
        if (w10 == w11)
        b.eq 0x80080d8 // unlikely
    loc_0x8008094:
        w11 = w1 | 0x2000000
        w12 = 0x3600
        w11 = w11 & 0x7e000000
        if (w11 == w12)
        b.eq 0x80080d8 // unlikely
    loc_0x80080a8:
        if (w10 == w8)
        b.eq 0x80080d8 // likely
    loc_0x80080b0:
        w8 = w1 & w9
        w9 = 0x1800
        if (w8 == w9)
        b.eq 0x80080d8 // unlikely
    loc_0x80080c0:
        w8 = w1 & 0x3f000000
        w9 = 0x1c00
        if (w8 == w9)
        b.eq 0x80080d8 // unlikely
    loc_0x80080d0:
        w0 = 0x1
        0x080080d4
         // (break)
}

/* ===== 0x0801eff4 ===== */
int sym.arm64_decode_insn (int esi, int edx) {
    loc_0x801eff4:
        hint 0x19
        [sp, -0x20]! = (x29,2) // (cstr 0x00178000) "4"
        [var_10h] = x19 // (pstr 0x00178000) "4"
        // XREFS: STRING 0x0801f058  CODE 0x0801f05c  STRING 0x0801f964
        // XREFS: CODE 0x0801f968  STRING 0x0801f9f0  CODE 0x0801f9f4
        // XREFS: STRING 0x0801fd0c  CODE 0x0801fd10  STRING 0x0801fdd4
        // XREFS: CODE 0x0801fdd8
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff' // (pstr 0x00178000) "4"
        w8 = w0 >> 0x10 // arg1
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [x1, 0x38] = (xzr,2) // arg2
        [x1, 0x28] = (xzr,2) // arg2
        [x1, 0x18] = (xzr,2) // arg2
        [x1, 8] = (xzr,2) // arg2
        [x1] = xzr    // arg2
        [x1] = w0     // arg2
        if w8 jmp 0x801f048 // unlikely
            
    loc_0x801f048:
        ubfx w9,w0,0x19, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = 0x3
        if (w9 == 0xf)
        b.hi 0x801f034 // unlikely
            
    loc_0x801f034:
        [x19 + 4] = w8
        x19 = [var_10h] // 0x4 // 4
        (x29, 2) = 3
        hint 0x1d
        0x0801f044
         // } else {
    loc_0x801f058:
        x10 = 0x801f000
        x10 = x10 + 0
        x11 = 0x801f028
        w12 = (byte) [x10 + x9] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12,lsl 2
        br x11
         // } else {
        }
        return eax;
    loc_0x0801f030: // orphan
             // XREFS: CODE 0x0801f078  CODE 0x0801f084  CODE 0x0801f090  
             // XREFS: CODE 0x0801f09c  CODE 0x0801f0a8  CODE 0x0801f0b4  
             w8 = w0                  // '\xff\xff\xff\xff\xff\xff\xff\xff'

}

/* ===== 0x0800c628 ===== */
int sym.ret_trampoline_finish_task_switch (int esi, int edx) {
    loc_0x800c628:
        [sp + 8] = x0 // arg1
        sym.ret_work_finish_task_switch () // sym.ret_work_finish_task_switch(0x0, 0x0)
        (x16, 2) = 3
        ret x16
         // (break)
}

/* ===== 0x0801fd8c ===== */
int sym.arm64_decode_branch (int esi, int edx) {
    loc_0x801fd8c:
        w9 = w0 >> 0x10 // arg1
        w8 = w0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if w9 jmp 0x801fdac // unlikely
            
    loc_0x801fdac:
        w10 = 0x201f  // '\x1f '
        w9 = w8 & 0xfffff01f
        w10 = 0xd503
        if (w9 == w10)
        b.ne 0x801fe0c // likely
            
    loc_0x801fe0c:
        w10 = 0xcfa1  // '\xa1\xcf'
        w9 = w8 & 0xfffff0ff
        w10 = 0x2afc  // '\xfc*'
        w9 = w9 + w10
        ror w9,w9,5
        if (w9 == 4)
        b.hi 0x801fe70 // likely
            
    loc_0x801fe70:
        w10 = 0x2
        w9 = w8 & 0xffe0001f
        w10 = 0xd400
        if (w9 == w10)
        jmp ifle 0x801ff74 // unlikely
            
    loc_0x801ff74:
        w10 = 0x1
        w10 = 0xd400
        if (w9 == w10)
        b.eq 0x801ffb8 // unlikely
            
    loc_0x801ffb8:
        w9 = 0xa
         // do {
    loc_0x801ffbc:
        // CODE XREFS from sym.arm64_decode_branch @ 0x801feb0, 0x801ff98, 0x801ffac, 0x801ffb4
        w8 = w8 >> 5
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x20] = w9 // arg2
        x9 = xzr | 0x400000004
        [x1 + 8] = x9 // arg2
        [x1 + 0x24] = (half) w8
        0x0801ffd4
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x0801fdd4: // orphan
             x9 = 0x801f000
             x9 = x9 + 0
             x10 = 0x801fdec
             w11 = (byte) [x9 + x8]   // 0xcf000000d0 // 889058230480
             x10 = x10 + x11,lsl 2    // "(p"
             br x10

    loc_0x0801fe30: // orphan
         x10 = 0x4
         ubfx w11,w8,8, 4         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w8 & 0xff
         x10 = 0x3
         if (w9 == 0xbf)
         [x1 + 8] = x10           // arg2
         [x1 + 0x26] = (byte) w11 // arg2
         b.eq 0x801feb4           // unlikely

    loc_0x0801fe50: // orphan
         if (w9 == 0x9f)
         b.eq 0x801fec4           // unlikely

    loc_0x0801fe58: // orphan
         if (w9 == 0x5f)
         b.ne 0x801fed4           // likely

    loc_0x0801fe60: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0x6
         [x1 + 0x20] = w8         // arg2
         

    loc_0x0801fe94: // orphan
         w10 = 0xd420             // ' \xd4'
         if (w9 == w10)
         b.eq 0x801ffb0           // unlikely

    loc_0x0801fea0: // orphan
         w10 = 0xd440             // '@\xd4'
         if (w9 == w10)
         b.ne 0x801ffd8           // likely

    loc_0x0801feac: // orphan
         w9 = 0xe
         jmp 0x801ffbc

    loc_0x0801feb4: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0x8
         [x1 + 0x20] = w8         // arg2
         

    loc_0x0801fec4: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0x7
         [x1 + 0x20] = w8         // arg2
         

    loc_0x0801fed4: // orphan
         w9 = 0xf00
         bics wzr,w9,w8           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x801fef0           // likely

    loc_0x0801fee0: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x9
         [x1 + 0x20] = w8         // arg2
         

    loc_0x0801fef0: // orphan
         w0 = 0x3
         

    loc_0x0801ff94: // orphan
         w9 = 0xb
         jmp 0x801ffbc

    loc_0x0801ff9c: // orphan
         w0 = 0x1
         [x1 + 0xc] = wzr         // arg2
         

    loc_0x0801ffa8: // orphan
         w9 = 0xc
         jmp 0x801ffbc

    loc_0x0801ffb0: // orphan
         w9 = 0xd
         jmp 0x801ffbc

    loc_0x0801ffd8: // orphan
         w10 = 0x3e0
         w9 = w8 | 0x200000
         [x1 + 0x20] = wzr        // arg2 // "\t"
         w10 = 0xd6bf             // '\xbf\xd6'
         if (w9 == w10)
         b.ne 0x802001c           // likely

    loc_0x0801fff0: // orphan
         w9 = 0x3e0
         x10 = 0x4
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xd69f              // '\x9f\xd6'
         // CODE XREFS from sym.arm64_decode_ldst @ 0x8020260, 0x8020264
         // CODE XREFS from sym.arm64_decode_simd @ 0x8020e80, 0x8020e84
         x10 = 0x5
         if (w8 == w9)
         w8 = 0xf
         [x1 + 8] = x10           // arg2
         cinc w8,w8,ne
         [x1 + 0x20] = w8         // arg2
         

    loc_0x0802001c: // orphan
         w9 = w8 & 0xfff00000
         w10 = 0xd530             // '0\xd5'
         if (w9 == w10)
         b.eq 0x8020040           // unlikely

    loc_0x0802002c: // orphan
         w10 = 0xd510             // '\x10\xd5'
         if (w9 == w10)
         b.ne 0x8020084           // likely

    loc_0x08020038: // orphan
         w9 = 0x7
         jmp 0x8020044

    loc_0x08020040: // orphan
         w9 = 0x6

    loc_0x08020044: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x802003c
         w10 = 0x4
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 8] = (w10,2)        // arg2
         w10 = w8 & 0x1f
         ubfx w9,w8,0x13, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1c] = (byte) w10 // arg2
         ubfx w10,w8,0x10, 3      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x27] = (byte) w9  // arg2
         ubfx w9,w8,0xc, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x28] = (byte) w10 // arg2
         ubfx w10,w8,8, 4         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w8,5, 3          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x29] = (byte) w9  // arg2
         [x1 + 0x2a] = (byte) w10 // arg2
         [x1 + 0x2b] = (byte) w8  // arg2
         

    loc_0x08020084: // orphan
         w9 = w8 | 0x80000000     // pstate
         w9 = w9 >> 0x1a
         if (w9 == 0x25)
         b.ne 0x80200c4           // likely

    loc_0x08020094: // orphan
         if (w8 == 0)
         ubfiz w8,w8,2, 0x1a      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = 0x8
         x11 = xzr | 0xfffffffff8000000
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = 0x4
         w8 = w8 ^ loc.__kcfi_typeid_do_read_physical_memory // loc.imp.memmove
         cinc w9,w9,lt
         x8 = x8 + x11
         [x1, 8] = (w10,2)        // arg2
         [x1 + 0x20] = x8         // arg2
         

    loc_0x080200c4: // orphan
         w9 = w8 & 0xfffffc1f
         w10 = 0xd61f             // '\x1f\xd6'
         if (w9 == w10)
         b.eq 0x80200ec           // unlikely

    loc_0x080200d4: // orphan
         w10 = 0xd65f             // '_\xd6'
         if (w9 == w10)
         b.eq 0x80200ec           // unlikely

    loc_0x080200e0: // orphan
         w10 = 0xd63f             // '?\xd6'
         if (w9 == w10)
         b.ne 0x8020124           // likely

    loc_0x080200ec: // orphan
         ubfx w8,w8,5, 5          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = 0xd63f             // '?\xd6'
         w10 = 0x4
         if (w9 == w11)
         [x1 + 8] = w10           // arg2
         [x1 + 0x19] = (byte) w8  // arg2
         b.eq 0x8020160           // unlikely

    loc_0x08020108: // orphan
         w8 = 0xd61f              // '\x1f\xd6'
         if (w9 == w8)
         b.ne 0x8020170           // likely

    loc_0x08020114: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0xa
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x801fd1c, 0x801fd24
         [x1 + 0xc] = w8          // arg2
         

    loc_0x08020124: // orphan
         w9 = w8 & 0xfffffff0
         w10 = 0x5400
         w9 = w9 & 0xff00001f
         if (w9 == w10)
         b.ne 0x8020180           // likely

    loc_0x08020138: // orphan
         w9 = w8 >> 3
         x10 = 0x4
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x10 = 0xd
         w8 = w8 & 0xf
         w9 = w9 & 0x1ffffc
         [x1 + 8] = x10           // arg2
         w9 = w9 ^ 0x100000
         [x1 + 0x28] = (byte) w8  // arg2
         jmp 0x80201e4

    loc_0x08020160: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0xb
         [x1 + 0xc] = w8          // arg2 // "\r"
         

    loc_0x08020170: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = 0xc
         [x1 + 0xc] = w8          // arg2
         

    loc_0x08020180: // orphan
         w9 = w8 & 0x7e000000
         w10 = 0x3600
         if (w9 == w10)
         b.eq 0x80201f0           // unlikely

    loc_0x08020190: // orphan
         w10 = 0x3400
         if (w9 == w10)
         b.ne 0x8020238           // likely

    loc_0x0802019c: // orphan
         if ((w8 & 0x1000000) == 0)
         w10 = 0xe
         w9 = 0x4
         cinc w10,w10,ne
         w11 = w8 >> 3
         if (w8 == 0)
         [x1, 8] = (w9,2)         // arg2
         w9 = w8 >> 0x1f
         w10 = 0x20
         w12 = 0x40               // '@'
         w8 = w8 & 0x1f
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x14] = w9         // arg2
         csel w9,w12,w10, lt
         w10 = w11 & 0x1ffffc
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         w9 = w10 ^ 0x100000
         // CODE XREFS from sym.arm64_decode_branch @ 0x801fde4, 0x801fde8
         [x1 + 0x1c] = (byte) w8  // arg2

    loc_0x080201e4: // orphan
         // CODE XREF from sym.arm64_decode_branch @ 0x802015c
         x8 = x9 - 0x100,lsl 12
         [x1 + 0x20] = x8         // arg2
         

    loc_0x080201f0: // orphan
         w9 = w8 >> 0x1a
         w11 = w8 & 0x1f
         if ((w8 & 0x1000000) == 0)
         [x1 + 0x1c] = (byte) w11 // arg2
         w11 = w8 >> 3
         w10 = 0x4
         w9 = w9 & 0x20
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfxil w9,w8,0x13, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x10
         w11 = w11 & 0xfffc
         cinc w8,w8,ne
         [x1, 8] = (w10,2)        // arg2
         w8 = w11 ^ 0x8000
         x8 = x8 - 8,lsl 12
         [x1 + 0x29] = (byte) w9  // arg2
         [x1 + 0x20] = x8         // arg2
         

    loc_0x08020238: // orphan
         w8 = 0x4
         w0 = 0x1
         [x1 + 8] = x8            // arg2
         

}

/* ===== 0x0802024c ===== */
int sym.arm64_decode_ldst (int esi, int edx) {
    loc_0x802024c:
        ubfx w8,w0,0x18, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w9 = w8 - 8
        w8 = 0x3
        if (w9 == 0x35)
        b.hi 0x8020364 // likely
            
    loc_0x8020364:
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x08020368
         // } else {
    loc_0x8020260:
        x10 = 0x8020000
        x10 = x10 + 0
        x11 = 0x8020278
        w12 = (byte) [x10 + x9] // 0xd0000000d1 // 893353197777
        x11 = x11 + x12,lsl 2 // 0x8020674
        // fcn.08020674 // "`"
        br x11
        }
        return eax;
}

/* ===== 0x0801f6d4 ===== */
int sym.arm64_decode_data_processing_register (int esi, int edx) {
    loc_0x801f6d4:
        hint 0x19
        [sp, -0x20]! = (x29,2) // (pstr 0x00178000) "4"
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff' // (pstr 0x00178000) "4"
        w8 = 0x1f20   // ' \x1f'
        w9 = 0xb00
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w8 = w0 & w8  // arg1
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w10 = 0x2
        if (w8 == w9)
        [x1 + 8] = w10 // arg2
        b.eq 0x801f7c4 // unlikely
            
    loc_0x801f7c4:
        if ((w20 & 0x200000) == 0)
        w8 = 0x1a
        w9 = 0x1
        cinc w8,w8,ne
        if ((w20 & 0x40000000) == 0)
        w10 = w20 & 0x1f
        cinc w9,w9,ne
        [x19 + 0x18] = (byte) w10
        ubfx w10,w20,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19, 0xc] = (w8,2)
        ubfx w8,w20,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w20 == 0)
        [x19 + 0x19] = (byte) w10
        w9 = 0x20
        w10 = 0x40    // '@'
        [x19 + 0x1b] = (byte) w8
        ubfx w8,w20,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0x1a] = (byte) w8
        csel w8,w10,w9, lt
        [x19 + 0x1f] = (byte) w8 // " " tmp
        tbnz w20,0x1f,0x801f8a4 // unlikely
            
    loc_0x801f8a4:
        w8 = [x19 + 0x14] // 0xda // 218
        w8 = w8 | 1
        [x19 + 0x14] = w8
        tbz w20,0x15,0x801f81c // likely
            
    loc_0x801f81c:
        ubfx w8,w20,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w9,w20,0xa, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = 0xc0    // '\xc0'
        bics wzr,w10,w20 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w0 = 0x3
        [x19 + 0x38] = (byte) w8
        [x19 + 0x39] = (byte) w9
        b.eq 0x801fb84 // unlikely
            
    loc_0x801fb84:
        // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x801f848, 0x801f8d4, 0x801f8f0, 0x801fab0, 0x801fd38
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x0801fb90
         // } else {
    loc_0x801f83c:
        w8 = w20 & 0x80008000
        if (w8 == 8)
        b.ne 0x801f8d8 // likely
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x801f708
    loc_0x801f718:
        w8 = w20 & 0x1f000000
        w9 = 0xa00
        if (w8 == w9)
        b.ne 0x801f84c // likely
            
    loc_0x801f84c:
        w8 = w20 & 0x3fe00000
        w9 = 0x1a80   // '\x80\x1a'
        if (w8 == w9)
        b.ne 0x801f8f4 // likely
            
    loc_0x801f8f4:
        w8 = w20 & 0x7fe00000
        w9 = 0x1ac0   // '\xc0\x1a'
        if (w8 == w9)
        b.ne 0x801f98c // likely
            
    loc_0x801f98c:
        w8 = w20 & 0x7f000000
        w9 = 0x1b00
        if (w8 == w9)
        b.ne 0x801fa54 // likely
            
    loc_0x801fa54:
        w8 = w20 & 0x1ffffc00
        w9 = 0x1a00
        w8 = w8 & 0xffe0ffff
        if (w8 == w9)
        b.ne 0x801fab4 // likely
            
    loc_0x801fab4:
        w8 = 0x410
        w9 = 0x3a40   // '@:'
        w8 = 0x3fe0   // '\xe0?'
        w8 = w20 & w8
        if (w8 == w9)
        b.ne 0x801fb18 // likely
            
    loc_0x801fb18:
        w8 = 0x6b04
        w8 = 0x3
        if (w8 == w20)
        b.ne 0x801fc1c // likely
            
    loc_0x801fc1c:
        w9 = 0xa3f    // '?\n'
        w8 = w20 | 0x400
        w9 = 0x6d6
        if (w9 == w8)
        b.ne 0x801fcdc // likely
            
    loc_0x801fcdc:
        w8 = w20 & 0x7fff0000
        w9 = 0x5ac0   // '\xc0Z'
        if (w8 == w9)
        b.ne 0x801fd30 // likely
            
    loc_0x801fd30:
        [x19 + 0xc] = wzr // arg1
         // do {
    loc_0x801fd34:
        // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x801fb44, 0x801fc3c
        w0 = 0x1
        jmp 0x801fb84
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
        goto loc_0x801f728
    loc_0x801f770:
        w8 = [x19 + 0x14] // 0xda // 218
        w8 = w8 | 1
        [x19 + 0x14] = w8
         // do {
    loc_0x801f77c:
        ubfx w8,w20,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w9,w20,0xa, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w10 = w20 & 0x80008000
        if (w10 == 8)
        [x19 + 0x38] = (byte) w8
        [x19 + 0x39] = (byte) w9
        b.eq 0x801f8d0 // unlikely
         // } while (?);
        }
        return eax;
    loc_0x801f798:
        tbz w20,0x15,0x801f7a8 // likely
            
    loc_0x801f7a8:
        w8 = 0x6000
        bics wzr,w8,w20 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        b.ne 0x801f8ec // likely
            
    loc_0x801f8ec:
        // CODE XREF from fcn.0801fd80 @ 0x801fd84
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        jmp 0x801fb84
    loc_0x0801f79c: // orphan
             w8 = [x19 + 0x14]        // 0xda // 218
             w8 = w8 | 0x800
             [x19 + 0x14] = w8

    loc_0x0801f7b4: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218

    loc_0x0801f7b8: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x801fb14
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 | 2
         jmp 0x801fb80

    loc_0x0801f848: // orphan
         jmp 0x801fb84

    loc_0x0801f89c: // orphan
         tbnz w20,0xb,0x801f8d0   // unlikely

    loc_0x0801f8a0: // orphan
         jmp 0x801fa2c

    loc_0x0801f8d0: // orphan
         w0 = 0x3
         jmp 0x801fb84

    loc_0x0801f8d8: // orphan
         tbz w20,0x1d,0x801f8e8   // likely

    loc_0x0801f8dc: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x14] = w8

    loc_0x0801f8e8: // orphan
         tbnz w20,0x1e,0x801fb74  // unlikely

    loc_0x0801f944: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8

    loc_0x0801f950: // orphan
         ubfx w8,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x1
         w8 = w8 - 2
         if (w8 == 0x19)
         b.hi 0x801fb84           // likely

    loc_0x0801f964: // orphan
         x9 = 0x801f000
         x9 = x9 + 0
         x10 = 0x801f984
         w11 = (byte) [x9 + x8]   // 0xcf000000d0 // 889058230480
         x10 = x10 + x11,lsl 2    // 0x801fd80 // "h\x12"
         w9 = 0x22                // '\"'
         w8 = 0x1c
         br x10

    loc_0x0801f9d8: // orphan
         w9 = [x19 + 0x14]        // 0xda // 218
         w9 = w9 | 1
         [x19 + 0x14] = w9

    loc_0x0801f9e4: // orphan
         if (w10 == 6)
         w0 = 0x3
         b.hi 0x801fb84           // unlikely

    loc_0x0801f9f0: // orphan
         x11 = 0x801f000
         x11 = x11 + 0
         ubfx w9,w20,0xf, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x12 = 0x801fa0c
         w13 = (byte) [x11 + x10] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2    // 0x801fe00 // "* " // fcn.0801fe00
         br x12                   // fcn.0801fe00

    loc_0x0801fa1c: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8
         tbnz w20,0xb,0x801f8d0   // unlikely

    loc_0x0801fa2c: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x801f8a0
         w8 = w20 >> 0x1c
         ubfx w9,w20,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 & 2
         [x19 + 0x3c] = (byte) w9
         bfxil w8,w20,0xa, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if !w8 jmp 0x801fa94     // likely

    loc_0x0801fa44: // orphan
         if (w8 == 1)
         b.ne 0x801fa9c           // likely

    loc_0x0801fa4c: // orphan
         w8 = 0x13
         jmp 0x801faa8

    loc_0x0801fa84: // orphan
         if (w8 == 1)
         b.ne 0x801fb50           // likely

    loc_0x0801fa8c: // orphan
         w8 = 0x17
         jmp 0x801fb5c

    loc_0x0801fa94: // orphan
         w8 = 0x12
         jmp 0x801faa8

    loc_0x0801fa9c: // orphan
         if (w8 == 2)
         w8 = 0x14
         cinc w8,w8,ne

    loc_0x0801faa8: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x801fa50, 0x801fa98
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x10] = w8
         jmp 0x801fb84

    loc_0x0801fb04: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w9 = (byte) [x19 + 0x1a] // 0xda // 218
         w8 = w8 | 0x2000
         [x19 + 0x20] = x9
         jmp 0x801f7b8

    loc_0x0801fb38: // orphan
         w8 = (byte) [x19 + 0x19] // 0xda // 218
         if (w8 == 0x1f)
         b.ne 0x801f8d0           // likely

    loc_0x0801fb44: // orphan
         jmp 0x801fd34

    loc_0x0801fb48: // orphan
         w8 = 0x16
         jmp 0x801fb5c

    loc_0x0801fb50: // orphan
         if (w8 == 2)
         w8 = 0x18
         cinc w8,w8,ne

    loc_0x0801fb5c: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_register @ 0x801fa90, 0x801fb4c
         [x19 + 0x10] = w8
         tbz w20,0x1d,0x801fb70   // likely

    loc_0x0801fb64: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x14] = w8

    loc_0x0801fb70: // orphan
         tbz w20,0x1e,0x801f8ec   // likely

    loc_0x0801fb74: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 | 4

    loc_0x0801fb80: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_register @ 0x801f7c0
         [x19 + 0x14] = w8

    loc_0x0801fd0c: // orphan
         x9 = 0x801f000
         x9 = x9 + 0
         x10 = 0x801fd28
         w11 = (byte) [x9 + x8]   // 0xcf000000d0 // 889058230480
         x10 = x10 + x11,lsl 2
         w8 = 0x32                // '2'
         br x10

}

/* ===== 0x08020d6c ===== */
int sym.arm64_decode_simd (int esi, int edx) {
    loc_0x8020d6c:
        x8 = 0x5
        w9 = 0x20
        w12 = 0x800
        x8 = 0x2f     // '/'
        [x1 + 0x14] = w9 // arg2
        ubfx w9,w0,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 8] = x8 // arg2
        w8 = w0 & 0x1f // arg1
        w12 = 0x1e20  // ' \x1e'
        [x1 + 0x18] = (byte) w8 // arg2
        w8 = 0x1fe0   // '\xe0\x1f'
        ubfx w11,w0,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = 0xff20   // ' \xff'
        [x1 + 0x1b] = (byte) w9 // arg2
        ubfx w10,w0,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w0 & w8  // arg1
        w9 = w12 + 0x800
        [x1 + 0x19] = (byte) w11 // arg2
        if (w8 == w9)
        [x1 + 0x1a] = (byte) w10 // arg2
        b.ne 0x8020e34 // likely
            
    loc_0x8020e34:
        w8 = 0xc00
        w13 = 0x400
        w8 = 0x9ff8   // '\xf8\x9f'
        w13 = 0xf00
        w9 = w0 & w8  // arg1
        if (w9 == w13)
        b.ne 0x8020ea0 // likely
            
    loc_0x8020ea0:
        w9 = 0x7c00
        w11 = 0x8000
        w14 = 0x400
        w9 = 0xff20   // ' \xff'
        w11 = 0xc0    // '\xc0'
        w14 = 0x5e00
        w11 = w9 | w11
        w11 = w0 & w11 // arg1
        if (w11 == w14)
        b.ne 0x8020fd0 // likely
            
    loc_0x8020fd0:
        w15 = 0x800
        w11 = 0x8400
        w15 = 0xe00
        w11 = 0x9fe0  // '\xe0\x9f'
        w11 = w0 & w11 // arg1
        w13 = w15 - 0x400
        if (w11 == w13)
        b.ne 0x8021070 // likely
            
    loc_0x8021070:
        w11 = 0xfc00
        w11 = 0xbf01
        w10 = w11 + 0x1e9,lsl 12
        w10 = w0 & w10 // arg1
        if (w10 == w15)
        b.ne 0x8021108 // unlikely
            
    loc_0x8021108:
        w16 = 0xe400
        w10 = 0xc400
        w16 = 0xbf20  // ' \xbf'
        w10 = 0x2e00
        w13 = w0 & w16 // arg1
        if (w13 == w10)
        b.eq 0x8021240 // unlikely
            
    loc_0x8021240:
        ubfx w9,w0,0x16, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if (w13 == w10)
        b.ne 0x80213c4 // unlikely
            
    loc_0x80213c4:
        if ((w0 & 0x1000) == 0) // arg1
        w8 = 0x3
        w10 = 0x30    // '0'
        csinc w8,w8,wzr, ne
         // do {
    loc_0x80213d4:
        // CODE XREF from sym.arm64_decode_simd @ 0x8021254
        [x1 + 0x24] = w10 // arg2
        [x1 + 0x3d] = (byte) w8 // arg2
        if !w9 jmp 0x8021528 // likely
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
        goto loc_0x8020dc0
    loc_0x8020dc8:
        if (w8 == 1)
        b.eq 0x8020f10 // unlikely
            
    loc_0x8020f10:
        ubfx w8,w0,0x13, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        sbfx w9,w0,0x13, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w10 = w0 >> 0xd // arg1
        x11 = 0x1
        w8 = w8 << 0xa
        x11 = 0xb
        [x1 + 0x3d] = (byte) w10 // arg2
        [x1 + 0x20] = x11 // arg2
        w11 = 0x40    // '@'
        ubfx w10,w0,0xd, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 ^ 0x400
        [x1 + 0x1f] = (byte) w11 // arg2 // tmp
        bfxil w8,w9,0, 0xa // '\xff\xff\xff\xff\xff\xff\xff\xff'
        ubfx w9,w0,0xd, 4 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x3e] = (byte) w11 // arg2
        w11 = 0x3f    // '?'
        bfxil w8,w0,0x11, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x9 = x9 << 0x30
        x9 = x9 | x8,lsl 52
        jmp 0x8020fb8
         // do {
    loc_0x8020fb8:
        // CODE XREFS from sym.arm64_decode_simd @ 0x8020e30, 0x8020f5c
        w10 = w10 >> 7
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x10 = x10 << x11
        x9 = x10 | x9
        [x1 + 0x30] = x9 // arg2
        0x08020fcc
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8020dd0
    loc_0x8020dd8:
        w8 = 0x1
        x10 = 0x1
        w9 = w0 >> 0xd // arg1
        w8 &= w8      // arg1
        x10 = 0xb
        w11 = 0xc     // "/"
        ubfx w12,w0,0x11, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        [x1 + 0x20] = x10 // arg2
        csel x10,xzr,x11, eq // "/"
        w8 = w8 << 4
        w11 = w0 >> 7 // arg1
        [x1 + 0x3d] = (byte) w9 // arg2
        x9 = x10 | x12 // "/"
        w12 = 0x10
        ubfx w10,w0,0xd, 8 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = w8 ^ 0x10
        [x1 + 0x1f] = (byte) w12 // arg2 // tmp
        x8 = x9 | x8
        w9 = w11 & 0x3c0
        [x1 + 0x3e] = (byte) w12 // arg2 // "@"
        x9 = x9 | x8,lsl 10
        w11 = 0xf
        jmp 0x8020fb8
    loc_0x08020e7c: // orphan
             ubfx x10,x0,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
             x11 = 0x8020000
             x11 = x11 + 0
             x12 = 0x8020e98
             w14 = (byte) [x11 + x10] // 0xd1000000d2 // 897648165074
             x12 = x12 + x14,lsl 2
             br x12

    loc_0x08020ed0: // orphan
         rbit w8,w10
         clz w9,w8
         if (w9 == 3)
         b.hi 0x8021528           // likely

    loc_0x08020ee0: // orphan
         w11 = 0x8
         w13 = w9 + 1
         x12 = 0x17
         w9 = w11 << w9
         w10 = w10 >> w13
         x12 = 0x3d               // '='
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = x12        // arg2
         [x1 + 0x3e] = (byte) w9  // arg2
         [x1 + 0x40] = (byte) w10 // arg2
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         

    loc_0x08020f60: // orphan
         w8 = 0x1
         x10 = 0x1
         w9 = w0 >> 0xd           // arg1
         w8 &= w8                 // arg1
         x10 = 0xb
         w11 = 0x7c               // '|'
         ubfx w12,w0,0x11, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = x10        // arg2
         csel x10,xzr,x11, eq
         w8 = w8 << 7
         w11 = w0 << 6            // arg1
         [x1 + 0x3d] = (byte) w9  // arg2
         x9 = x10 | x12
         w12 = 0x20
         ubfx w10,w0,0xd, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = w8 ^ 0x80
         [x1 + 0x1f] = (byte) w12 // arg2 // tmp
         x8 = x9 | x8
         w9 = w11 & 0x780000
         [x1 + 0x3e] = (byte) w12 // arg2
         x9 = x9 | x8,lsl 23
         w11 = 0x1f               // tmp

    loc_0x08020ff8: // orphan
         rbit w8,w10
         clz w11,w8
         // XREFS(26)
         if (w11 == 3)
         b.hi 0x8021528           // likely

    loc_0x08021008: // orphan
         w8 = 0x8
         w9 = 0xc                 // "/"
         w8 = w8 << w11
         [x1 + 0x20] = w9         // arg2
         w9 = w8 & 0xf8
         [x1 + 0x3e] = (byte) w8  // arg2 // " "
         tbnz w0,0x1e,0x802102c   // unlikely

    loc_0x08021024: // orphan
         if (w9 == 0x40)
         b.eq 0x8021528           // unlikely

    loc_0x0802102c: // orphan
         w8 = w11 + 1
         w8 = w10 >> w8
         ubfx w10,w0,0xb, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x40] = (byte) w8  // arg2
         tbnz w0,0x1d,0x8021524   // unlikely

    loc_0x08021040: // orphan
         if (w10 == 7)
         w8 = 0x3
         b.hi 0x80214ec           // unlikely

    loc_0x0802104c: // orphan
         x11 = 0x8021000
         x11 = x11 + 0
         x12 = 0x8021064
         w13 = (word) [x11 + x10,lsl 1] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2
         br x12

    loc_0x0802109c: // orphan
         w9 = 0x77                // 'w'
         w9 = w9 >> w8
         tbz w9,0,0x8021528       // unlikely

    loc_0x080210a8: // orphan
         x9 = 0x8021000
         x9 = x9 + 0
         w8 = [x9 + x8,lsl 2]     // 0xcf000000d0 // 889058230480
         ubfx w9,w0,0x16, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x24] = w8         // arg2
         tbnz w0,0x1e,0x80210c8   // unlikely

    loc_0x080210c0: // orphan
         if (w9 == 3)
         b.eq 0x8021528           // unlikely

    loc_0x080210c8: // orphan
         w13 = 0x8
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = 0xe
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         w9 = w13 << w9
         [x1 + 0x20] = w10        // arg2
         csel w10,w12,w11, eq
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1f] = (byte) w10 // arg2 // tmp
         [x1 + 0x3e] = (byte) w9  // arg2
         

    loc_0x08021138: // orphan
         w16 = 0x400
         w13 = 0x7c00
         // CODE XREFS from sym.arm64_decode_simd @ 0x8020e90, 0x8020e94
         w16 = 0x9f20             // ' \x9f'
         w13 = w15 + w13
         w10 = w16 | 0x8000
         w10 = w0 & w10           // arg1
         if (w10 == w13)
         b.ne 0x802129c           // likely

    loc_0x08021158: // orphan
         w10 = w0 >> 0x18         // arg1
         if ((w0 & 0x40000000) == 0) // arg1
         w2 = 0x40                // '@'
         w13 = w10 & 0x20
         w10 = ~0x7f              // '\x7f'
         bfxil w13,w0,0xb, 5      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         csel w10,w2,w10, eq
         [x1 + 0x1f] = (byte) w10 // arg2 // tmp
         w17 = w13 - 0x12
         if (w17 == 0x2d)
         b.hi 0x802129c           // likely

    loc_0x08021184: // orphan
         x2 = 0x8021000
         x2 = x2 + 0
         w10 = w0 >> 0x1e         // arg1
         x3 = 0x80211a0
         w4 = (word) [x2 + x17,lsl 1] // 0xd8000000c9 // 927712936137
         x3 = x3 + x4,lsl 2
         br x3

    loc_0x08021258: // orphan
         ubfx w14,w0,0x11, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w12,w9,4, 2         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbnz w13,0,0x8021420     // unlikely

    loc_0x08021264: // orphan
         w10 = w14 << 7
         if (w14 == 0)
         w13 = 0x7c               // '|'
         csel x13,xzr,x13, eq
         ubfiz w11,w11,0x13, 4    // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x9 = (char) w9
         w10 = w10 ^ 0x80
         x10 = x13 | x10
         x9 = x9 & 0x80000000
         x10 = x10 | x12
         x10 = x11 | x10,lsl 23
         x9 = x10 | x9
         x9 = x9 | x9,lsl 32
         jmp 0x8021450

    loc_0x0802129c: // orphan
         w10 = w16 + 0x40c,lsl 12
         w13 = wzr | 0x3ffc00     // arg1
         w10 = w0 & w10           // arg1
         w13 = w15 + w13
         if (w10 == w13)
         b.eq 0x8021530           // unlikely

    loc_0x080212b4: // orphan
         w17 = wzr | 0x1ffc00     // arg1
         w16 = w0 & w16           // arg1
         w17 = w15 + w17
         if (w16 == w17)
         b.eq 0x8021530           // unlikely

    loc_0x080212c8: // orphan
         w10 = 0x400
         w13 = 0x8000
         w16 = w14 + 8,lsl 12
         w10 = 0xdf00
         w13 = 0x20
         w13 = w10 | w13
         w13 = w0 & w13           // arg1
         if (w13 == w16)
         b.ne 0x8021624           // likely

    loc_0x080212ec: // orphan
         w8 = w0 & 0xf000         // arg1
         if (w8 == 8)
         w8 = 0x3
         b.ne 0x80214ec           // likely

    loc_0x080212fc: // orphan
         ubfx w9,w0,0x16, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w9 == 3)
         b.eq 0x80214ec           // unlikely

    loc_0x08021308: // orphan
         tbz w0,0x1d,0x80214ec    // likely

    loc_0x0802130c: // orphan
         if !w9 jmp 0x80214ec     // likely

    loc_0x08021310: // orphan
         w12 = 0x8
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if ((w0 & 0x800) == 0)   // arg1
         w11 = 0x7e               // '~'
         w9 = w12 << w9
         w10 = 0x1b
         cinc w11,w11,ne
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1, 0x20] = (w10,2)     // arg2
         [x1 + 0x3e] = (byte) w9  // arg2
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         

    loc_0x080213e0: // orphan
         tbnz w0,0x1e,0x80213ec   // unlikely

    loc_0x080213e4: // orphan
         if (w9 == 3)
         b.eq 0x8021528           // unlikely

    loc_0x080213ec: // orphan
         w10 = 0x8
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if ((w0 & 0x40000000) == 0) // arg1
         w9 = w10 << w9
         w10 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         w11 = 0x14               // " "
         csel w10,w12,w10, eq
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x20] = w11        // arg2
         [x1 + 0x3e] = (byte) w9  // arg2
         [x1 + 0x1f] = (byte) w10 // arg2 // tmp
         

    loc_0x08021420: // orphan
         w9 = w14 << 0xa
         if (w14 == 0)
         w11 = 0x3fc
         ubfx w13,w0,5, 4         // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         csel w11,wzr,w11, eq
         w10 = w10 >> 7
         w9 = w9 ^ 0x400
         w9 = w11 | w9
         x11 = x13 << 0x30
         w9 = w9 | w12
         x9 = x11 | x9,lsl 52
         x9 = x9 | x10,lsl 63

    loc_0x08021450: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8021298
         if ((w0 & 0x40000000) == 0) // arg1
         w10 = ~0x7f              // '\x7f'
         w11 = 0x40               // '@'
         [x1 + 0x30] = x9         // arg2
         csel w9,w11,w10, eq
         if (w8 == 8)
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         b.hs 0x8021484           // unlikely

    loc_0x08021470: // orphan
         w8 = 0x20
         [x1 + 0x3e] = (byte) w8  // arg2
         tbnz w0,0xc,0x8021498    // unlikely

    loc_0x0802147c: // orphan
         tbnz w0,0x1d,0x80214c0   // unlikely

    loc_0x08021480: // orphan
         jmp 0x80214e0

    loc_0x08021484: // orphan
         if (w8 == 0xc)
         b.hs 0x80214ac           // unlikely

    loc_0x0802148c: // orphan
         w8 = 0x10
         [x1 + 0x3e] = (byte) w8  // arg2 // " "
         tbz w0,0xc,0x802147c     // likely

    loc_0x08021498: // orphan
         if ((w0 & 0x20000000) == 0) // arg1
         w9 = 0x3a                // ':'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         cinc w9,w9,ne
         jmp 0x80214e8

    loc_0x080214ac: // orphan
         if (w8 == 0xe)
         b.hs 0x80214c8           // unlikely

    loc_0x080214b4: // orphan
         w8 = 0x20
         [x1 + 0x3e] = (byte) w8  // arg2
         tbz w0,0x1d,0x80214e0    // likely

    loc_0x080214c0: // orphan
         w9 = 0x39                // '9'
         jmp 0x80214e4

    loc_0x080214c8: // orphan
         b.ne 0x80214f4           // likely

    loc_0x080214cc: // orphan
         if ((w0 & 0x20000000) == 0) // arg1
         w8 = 0x40                // '@'
         w9 = 0x8
         csel w8,w9,w8, eq
         [x1 + 0x3e] = (byte) w8  // arg2 // " "

    loc_0x080214e0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8021480
         w9 = 0x38                // '8'

    loc_0x080214e4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80214c4
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x080214e8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80214a8, 0x8021520, 0x8021c2c
         [x1 + 0x24] = w9         // arg2

    loc_0x080214ec: // orphan
         // XREFS(28)
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         

    loc_0x080214f4: // orphan
         if ((w0 & 0x20000000) == 0) // arg1
         w8 = 0x40                // '@'
         w9 = 0x20
         w10 = w0 & 0x60000000    // arg1
         w11 = 0x2000
         csel w8,w9,w8, eq
         if (w10 == w11)
         [x1 + 0x3e] = (byte) w8  // arg2 // "@"
         b.eq 0x8021528           // unlikely

    loc_0x08021518: // orphan
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xb
         jmp 0x80214e8

    loc_0x08021524: // orphan
         tbnz w0,0x1e,0x802157c   // unlikely

    loc_0x08021528: // orphan
         // XREFS(25)
         w0 = 0x3
         

    loc_0x08021530: // orphan
         w11 = w0 >> 0x1d         // arg1
         if ((w0 & 0x40000000) == 0) // arg1
         w9 = ~0x7f               // '\x7f'
         w12 = 0x40               // '@'
         ubfx w8,w0,0xb, 5        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         csel w9,w12,w9, eq
         if (w10 == w13)
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         b.eq 0x802159c           // likely

    loc_0x08021554: // orphan
         if (w8 == 3)
         b.ne 0x802159c           // likely

    loc_0x0802155c: // orphan
         ubfx w8,w0,0x16, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = 0xf
         [x1 + 0x20] = w9         // arg2
         bfi w8,w11,2, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == 7)
         b.ne 0x8021750           // likely

    loc_0x08021574: // orphan
         w9 = 0x4d                // 'M'
         jmp 0x802175c

    loc_0x0802157c: // orphan
         w9 = 0x3f                // '?'
         w10 = w10 >> w11
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x24] = w9         // arg2
         w9 = 0x80                // '\x80'
         [x1 + 0x41] = (byte) w10 // arg2
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         

    loc_0x0802159c: // orphan
         w9 = w0 >> 0x1e          // arg1
         if (w10 == w13)
         b.eq 0x8021724           // likely

    loc_0x080215a8: // orphan
         if (w8 == 0x17)
         b.hi 0x8021724           // unlikely

    loc_0x080215b0: // orphan
         bfi w8,w11,5, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if (w8 == 0x36)
         b.hi 0x8021528           // unlikely

    loc_0x080215bc: // orphan
         x11 = xzr | 0xfff7fff7fff7fff7
         w10 = w8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x11 = 0xff               // '\xff'
         x11 = 0x7f               // '\x7f'
         x10 = x11 >> x10
         tbz w10,0,0x8021528      // unlikely

    loc_0x080215d4: // orphan
         ubfiz x8,x8,2, 0x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x10 = 0x8021000
         x10 = x10 + 0
         w11 = [x10 + x8]         // 0xcf000000d1 // 889058230481
         ubfx w10,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = w11 >> w10
         tbz w11,0,0x8021528      // unlikely

    loc_0x080215f0: // orphan
         x11 = 0x8021000
         x11 = x11 + 0
         w11 = [x11 + x8]         // 0xcf000000d2 // 889058230482
         if w9 jmp 0x8021608      // unlikely

    loc_0x08021600: // orphan
         if (w10 == 3)
         b.eq 0x8021528           // unlikely

    loc_0x08021608: // orphan
         w12 = 0x8
         w9 = 0x10
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = w12 << w10
         [x1, 0x20] = (w9,2)      // arg2
         [x1 + 0x3e] = (byte) w10 // arg2 // "@"
         

    loc_0x08021624: // orphan
         w13 = 0xc000
         w16 = 0x400
         w13 = 0x60               // '`'
         w16 = 0x5e40             // '@^'
         w13 = w10 | w13
         w13 = w0 & w13           // arg1
         if (w13 == w16)
         b.eq 0x8021770           // unlikely

    loc_0x08021644: // orphan
         w17 = w10 + 0x200,lsl 12
         w14 = w14 + 0x200,lsl 12
         w17 = w0 & w17           // arg1
         if (w17 == w14)
         b.eq 0x8021770           // unlikely

    loc_0x08021658: // orphan
         w10 = w0 & w10           // arg1
         w13 = 0xf00
         if (w10 == w13)
         b.eq 0x8021680           // unlikely

    loc_0x08021668: // orphan
         w13 = 0x5f00
         if (w10 == w13)
         b.eq 0x8021680           // unlikely

    loc_0x08021674: // orphan
         w13 = 0x4f00
         if (w10 == w13)
         b.ne 0x8022098           // likely

    loc_0x08021680: // orphan
         ubfx w13,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w4,w0,0xc, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w17 = w0 >> 0x1d         // arg1
         w14 = w0 >> 0xb          // arg1
         w2 = w0 >> 0x15          // arg1
         w10 = w0 >> 0x14         // arg1
         ubfx w16,w0,0x14, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbz w17,0,0x8021918      // likely

    loc_0x080216a0: // orphan
         w17 = w4 | 2
         if (w17 == 0xf)
         b.ne 0x8021918           // likely

    loc_0x080216ac: // orphan
         w8 = w13 - 3
         if (w8 != 2)
         b.lo 0x8021528           // unlikely

    loc_0x080216b8: // orphan
         if (w4 == 0xd)
         w8 = 0x7e                // '~'
         w9 = 0x80                // '\x80'
         w11 = 0x8
         cinc w8,w8,ne
         if ((w0 & 0x40000000) == 0) // arg1
         w12 = 0x40               // '@'
         w11 = w11 << w13
         csel w9,w12,w9, eq
         if ((w0 & 0x10000000) == 0) // arg1
         w12 = 0x1c
         cinc w12,w12,ne
         [x1 + 0x3e] = (byte) w11 // arg2
         [x1, 0x20] = (w12,2)     // arg2
         csel w8,w9,w11, eq
         if (w13 == 1)
         [x1 + 0x1f] = (byte) w8  // arg2 // tmp
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         b.ne 0x8021c30           // likely

    loc_0x08021704: // orphan
         ubfiz w9,w14,2, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w10,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w9,w2,1, 1           // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x08021710: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022534
         w9 = w9 | w16
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1a] = (byte) w10 // arg2
         [x1 + 0x40] = (byte) w9  // arg2
         

    loc_0x08021724: // orphan
         if (w10 == w13)
         b.eq 0x8021b70           // likely

    loc_0x0802172c: // orphan
         tbnz w0,0x16,0x8021b70   // unlikely

    loc_0x08021730: // orphan
         ubfx w12,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbnz w0,0x1d,0x8021b34   // unlikely

    loc_0x08021738: // orphan
         if (w8 == 0x1d)
         b.ne 0x8021b34           // likely

    loc_0x08021740: // orphan
         if (w12 == 2)
         w8 = 0x12
         cinc w9,w8,hs
         jmp 0x8021b58

    loc_0x08021750: // orphan
         x9 = 0x8021000
         x9 = x9 + 0
         w9 = [x9 + w8,uxtw 2]    // 0xb0000000d0 // 755914244304

    loc_0x0802175c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8021578
         [x1 + 0x24] = w9         // arg2
         w9 = 0x8
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3e] = (byte) w9  // arg2
         

    loc_0x08021770: // orphan
         w8 = w0 >> 0x1d          // arg1
         if (w13 == w16)
         b.ne 0x8021988           // unlikely

    loc_0x0802177c: // orphan
         w9 = w0 >> 0x12          // arg1
         w9 = w9 & 0x20
         bfxil w9,w0,0xb, 3       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w9,w8,6, 1           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = 0x3
         w10 = w9 - 0x44
         if (w10 == 0x21)
         b.hi 0x8021aa4           // likely

    loc_0x0802179c: // orphan
         x9 = 0x8021000
         x9 = x9 + 0
         x11 = 0x80214ec
         w12 = (word) [x9 + x10,lsl 1] // 0xd1000000d0 // 897648165072
         x11 = x11 + x12,lsl 2
         br x11

    loc_0x080217f0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x802267c, 0x80227b4, 0x80229fc
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         

    loc_0x08021918: // orphan
         w3 = w0 >> 0x1c          // arg1
         ubfx w5,w0,0x1d, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w4 == 0xe)
         w6 = w3 & 1
         b.ne 0x8021a38           // likely

    loc_0x0802192c: // orphan
         if w6 jmp 0x8021a38      // unlikely

    loc_0x08021930: // orphan
         w8 = w0 & 0xc00000       // arg1
         if (w8 == 0x800)
         b.ne 0x8021528           // likely

    loc_0x0802193c: // orphan
         w9 = 0x2008
         ubfx w11,w0,0x15, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w13,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3e] = (half) w9
         w9 = w5 | 0x80
         w12 = 0x1c
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w11,w14,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if ((w0 & 0x40000000) == 0) // arg1
         [x1, 0x20] = (w12,2)     // arg2
         w9 = ~0x7f               // '\x7f'
         w12 = 0x40               // '@'
         bfi w13,w10,4, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w9,w12,w9, eq
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x40] = (byte) w11 // arg2
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         [x1 + 0x1a] = (byte) w13 // arg2
         

    loc_0x08021988: // orphan
         ubfx w10,w0,0xb, 5       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = w10                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w9,w8,5, 1           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x8 = x9 - 1
         if (w8 == 0x36)
         b.hs 0x80219b8           // likely

    loc_0x080219a0: // orphan
         x9 = 0x87f1              // '\xf1\x87'
         x9 = 0x21                // '!'
         x9 = 0x87f1              // '\xf1\x87'
         x9 = 0x21                // '!'
         x9 = x9 >> x8
         tbnz w9,0,0x8021bc4      // likely

    loc_0x080219b8: // orphan
         w8 = w0 >> 0x16          // arg1
         ubfx w9,w0,0x1d, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = w8 << 4
         w8 = w8 & 0x20
         w8 = w8 | w9,lsl 6
         w9 = w8 | w10
         w8 = 0x3
         w11 = w9 - 0x5c
         if (w11 == 0x21)
         b.hi 0x8021b04           // likely

    loc_0x080219e0: // orphan
         x9 = 0x8021000
         x9 = x9 + 0
         x12 = 0x80214ec
         w13 = (word) [x9 + x11,lsl 1] // 0xd2000000d0 // 901943132368
         x12 = x12 + x13,lsl 2
         br x12

    loc_0x08021a38: // orphan
         w17 = w0 >> 0x1e         // arg1
         tbnz w0,0x1d,0x8021bd4   // unlikely

    loc_0x08021a40: // orphan
         if (w4 == 0xf)
         b.ne 0x8021bd4           // likely

    loc_0x08021a48: // orphan
         if w6 jmp 0x8021bd4      // unlikely

    loc_0x08021a4c: // orphan
         if (w13 == 3)
         b.ne 0x8021c50           // likely

    loc_0x08021a54: // orphan
         ubfiz w8,w14,2, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = 0x2010             // '\x10 '
         w9 = 0x85                // '\x85'
         [x1 + 0x3e] = (half) w10
         ubfx w10,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w8,w2,1, 1           // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x24] = w9         // arg2
         w9 = 0x80                // '\x80'
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         w8 = w8 | w16
         [x1 + 0x1a] = (byte) w10 // arg2
         [x1 + 0x40] = (byte) w8  // arg2
         tbz w17,0,0x8021a94      // likely

    loc_0x08021a88: // orphan
         w8 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         w8 = w8 | 4
         [x1 + 0x38] = w8         // arg2

    loc_0x08021a94: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8021a84
         w9 = 0x1c
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = w9         // arg2
         

    loc_0x08021aa4: // orphan
         w9 = w9 | 0x18
         w9 = w9 - 0x1b
         if (w9 == 0x24)
         b.hi 0x80214ec           // likely

    loc_0x08021ab4: // orphan
         x10 = 0x8021000
         x10 = x10 + 0
         x11 = 0x80214ec
         w12 = (word) [x10 + x9,lsl 1] // 0xd0000000d1 // 893353197777
         x11 = x11 + x12,lsl 2
         w9 = 0x2
         br x11

    loc_0x08021b04: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80219dc
         w9 = w9 - 0x1b
         if (w9 == 0x24)
         b.hi 0x80214ec           // likely

    loc_0x08021b10: // orphan
         x11 = 0x8021000
         x11 = x11 + 0
         x12 = 0x80214ec
         w13 = (word) [x11 + x9,lsl 1] // 0xd0000000d2 // 893353197778
         x12 = x12 + x13,lsl 2
         w9 = 0x2
         br x12

    loc_0x08021b34: // orphan
         tbz w0,0x1d,0x8021b70    // likely

    loc_0x08021b38: // orphan
         if (w8 == 0x19)
         b.ne 0x8021b70           // likely

    loc_0x08021b40: // orphan
         w8 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         if (w12 == 2)
         w9 = 0x12
         cinc w9,w9,hs
         w8 = w8 | 2
         [x1 + 0x38] = w8         // arg2

    loc_0x08021b58: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802174c
         w10 = 0x13
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 0x20] = (w10,2)     // arg2
         w10 = 0x2010             // '\x10 '
         [x1 + 0x3e] = (half) w10
         

    loc_0x08021b70: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8021b34, 0x8021b3c
         w12 = w0 >> 0x16         // arg1
         if (w10 == w13)
         w12 = w12 << 4
         w12 = w12 & 0x20
         bfi w12,w11,6, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w8 + 0x18
         csel w8,w11,w8, eq
         w8 = w12 | w8
         w11 = w8 - 0x18
         w8 = 0x3
         if (w11 == 0x67)
         b.hi 0x80214ec           // unlikely

    loc_0x08021ba0: // orphan
         x12 = 0x8021000
         x12 = x12 + 0
         x14 = 0x80214ec
         w15 = (word) [x12 + x11,lsl 1] // 0xd2000000d3 // 901943132371
         x14 = x14 + x15,lsl 2
         w11 = 0x8
         br x14

    loc_0x08021bc4: // orphan
         x9 = 0x8021000
         x9 = x9 + 0
         w9 = [x9 + x8,lsl 2]     // 0xcf000000d0 // 889058230480
         jmp 0x8021dcc

    loc_0x08021bd4: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8021a3c, 0x8021a44, 0x8021a48
         w6 = 0x9400
         w7 = 0x1000
         w6 = 0xbf00
         w7 = 0x2f00
         w6 = w0 & w6             // arg1
         if (w6 == w7)
         b.ne 0x8021cb8           // likely

    loc_0x08021bf0: // orphan
         w8 = 0x3
         if !w13 jmp 0x80214ec    // likely

    loc_0x08021bf8: // orphan
         if (w13 == 3)
         b.eq 0x80214ec           // unlikely

    loc_0x08021c00: // orphan
         if (w13 == 2)
         b.ne 0x8021f64           // likely

    loc_0x08021c08: // orphan
         tbnz w0,0x15,0x80214ec   // unlikely

    loc_0x08021c0c: // orphan
         tbz w17,0,0x80214ec      // likely

    loc_0x08021c10: // orphan
         ubfx w9,w0,0xb, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = 0x1
         jmp 0x8021f7c

    loc_0x08021c28: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x802233c, 0x80224b8, 0x80225b4, 0x8022e5c
         [x1 + 0x20] = w10        // arg2
         jmp 0x80214e8

    loc_0x08021c30: // orphan
         ubfx w9,w0,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         ubfx w11,w0,0x15, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w9,w10,4, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w11,w14,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1a] = (byte) w9  // arg2
         [x1 + 0x40] = (byte) w11 // arg2
         

    loc_0x08021c50: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8021a50
         x9 = 0x8021000
         x9 = x9 + 0
         w11 = w13 << 3
         w12 = 0x1008
         w9 = [x9 + w13,uxtw 2]   // 0xb5000000d0 // 777389080784
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = 0x8
         if ((w0 & 0x40000000) == 0) // arg1
         w13 = 0x40               // '@'
         w11 = w12 >> w11
         w12 = 0x1c
         [x1, 0x20] = (w12,2)     // arg2
         w9 = 0x20
         ubfx w12,w0,0x15, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3f] = (byte) w9  // arg2 // " "
         ubfx w9,w0,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w12,w14,1, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x3e] = (byte) w11 // arg2
         w11 = ~0x7f              // '\x7f'
         bfi w9,w10,4, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w11,w13,w11, eq
         [x1 + 0x40] = (byte) w12 // arg2
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         [x1 + 0x1a] = (byte) w9  // arg2
         

    loc_0x08021cb8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8021bec
         w6 = w0 & 0xfff000       // arg1
         w6 = w6 & 0xff803fff
         if (w6 == 0x800)
         b.ne 0x8021e50           // likely

    loc_0x08021cc8: // orphan
         w6 = w4 >> 3
         if (w6 == w5)
         b.ne 0x8021e50           // unlikely

    loc_0x08021cd4: // orphan
         w8 = 0x3
         tbnz w0,0x1c,0x80214ec   // unlikely

    loc_0x08021cdc: // orphan
         if (w13 == 3)
         b.eq 0x80214ec           // unlikely

    loc_0x08021ce4: // orphan
         if ((w0 & 0x4000) == 0)  // arg1
         w9 = 0x12
         w8 = 0x18
         cinc w9,w9,ne
         ubfiz w10,w14,2, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         if ((w0 & 0x40000000) == 0) // arg1
         [x1, 0x20] = (w8,2)      // arg2
         w8 = 0x2010              // '\x10 '
         w9 = ~0x7f               // '\x7f'
         w11 = 0x40               // '@'
         [x1 + 0x3e] = (half) w8
         bfi w10,w2,1, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w8,w11,w9, eq
         [x1 + 0x1f] = (byte) w8  // arg2 // tmp
         ubfx w8,w0,0x10, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = w10 | w16
         [x1 + 0x40] = (byte) w9  // arg2
         [x1 + 0x1a] = (byte) w8  // arg2
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbz w0,0x1d,0x80214ec    // likely

    loc_0x08021d34: // orphan
         w9 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9 | 2
         [x1 + 0x38] = w9         // arg2
         

    loc_0x08021dcc: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8021bd0
         ubfx w11,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w10 == 0x16)
         b.ne 0x8021dec           // likely

    loc_0x08021dd8: // orphan
         w8 = 0x3
         if !w11 jmp 0x80214ec    // likely

    loc_0x08021de0: // orphan
         if (w11 == 3)
         b.eq 0x80214ec           // unlikely

    loc_0x08021de8: // orphan
         jmp 0x8021e20

    loc_0x08021dec: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8021dd4
         w8 = w0 & 0xf000         // arg1
         w10 = 0xe800
         w12 = 0x4000
         if (w8 == 3)
         w10 = w0 & w10           // arg1
         ccmp w10,w12,4, ne
         w10 = 0x8000
         ccmp w8,w10,4, ne
         w10 = 0xc0               // '\xc0'
         cset w8,eq
         bics wzr,w10,w0          // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         b.eq 0x8021e20           // unlikely

    loc_0x08021e1c: // orphan
         tbnz w8,0,0x8021528      // unlikely

    loc_0x08021e20: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8021de8, 0x8021e18
         w10 = (byte) [x1 + 0x3e] // 0xc8 // 200 // arg2
         if w10 jmp 0x8021e34     // likely

    loc_0x08021e28: // orphan
         w8 = 0x8
         w10 = w8 << w11
         // XREFS: CODE 0x08021ad8  CODE 0x08021d50  CODE 0x08021d5c  
         // XREFS: CODE 0x08021d68  CODE 0x08021d74  CODE 0x08021d80  
         // XREFS: CODE 0x08021d8c  
         [x1 + 0x3e] = (byte) w10 // arg2

    loc_0x08021e34: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8021e24
         w11 = 0x1b
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = w11        // arg2
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x24] = w9         // arg2
         [x1 + 0x1f] = (byte) w10 // arg2 // tmp
         

    loc_0x08021e50: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8021cc4, 0x8021cd0
         tbnz w0,0x1d,0x8021fdc   // unlikely

    loc_0x08021e54: // orphan
         if (w4 == 1)
         b.ne 0x8021fdc           // likely

    loc_0x08021e5c: // orphan
         w2 = 0x10
         jmp 0x8022004

    loc_0x08021f64: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8021c04
         if (w13 == 1)
         ubfx w9,w0,0xb, 1        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         cset w11,ne
         b.ne 0x8021f7c           // likely

    loc_0x08021f74: // orphan
         if !w9 jmp 0x8021f7c     // likely

    loc_0x08021f78: // orphan
         tbz w17,0,0x80214ec      // likely

    loc_0x08021f7c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8021c18, 0x8021f70, 0x8021f74
         ubfx w12,w0,0x15, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w16 = 0x8
         if (w11 == 0)
         w13 = w16 << w13
         ubfx w11,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = w12 | w9,lsl 1
         x14 = 0x18
         ubfx w15,w0,0xd, 2       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3e] = (byte) w13 // arg2
         w13 = 0x40               // '@'
         bfi w11,w10,4, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w9,w9,w12, ne
         w12 = ~0x7f              // '\x7f'
         if ((w0 & 0x40000000) == 0) // arg1
         x14 = 0x2f               // '/'
         [x1 + 0x40] = (byte) w9  // arg2
         csel w9,w13,w12, eq
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x20] = x14        // arg2
         [x1 + 0x3d] = (byte) w15 // arg2
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         [x1 + 0x1a] = (byte) w11 // arg2
         

    loc_0x08021fdc: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8021e50, 0x8021e58
         tbnz w0,0x1d,0x8021ff0   // unlikely

    loc_0x08021fe0: // orphan
         if (w4 == 5)
         b.ne 0x8021ff0           // likely

    loc_0x08021fe8: // orphan
         w2 = 0x11
         jmp 0x8022004

    loc_0x08021ff0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8021fdc, 0x8021fe4
         if (w5 == 0)
         w2 = 0x1
         cinc w2,w2,ne
         if (w4 == 9)
         // XREFS: STRING 0x08022570  CODE 0x08022574  STRING 0x08022680  
         // XREFS: CODE 0x08022684  STRING 0x080226b8  CODE 0x080226bc  
         // XREFS: STRING 0x08022ec8  
         b.ne 0x8022098           // likely

    loc_0x08022004: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8021e60, 0x8021fec
         if (w13 == 1)
         b.eq 0x8021528           // unlikely

    loc_0x0802200c: // orphan
         if (w13 == 3)
         b.ne 0x802201c           // likely

    loc_0x08022014: // orphan
         w8 = w17 | w3
         tbz w8,0,0x8021528       // likely

    loc_0x0802201c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022010
         ubfx w9,w0,0x15, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w13 == 3)
         b.ne 0x802202c           // likely

    loc_0x08022028: // orphan
         if w9 jmp 0x8021528      // unlikely

    loc_0x0802202c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022024
         w8 = 0x8
         if (w13 == 0)
         w11 = 0x10
         w8 = w8 << w13
         w15 = 0x40               // '@'
         w12 = 0x18
         [x1, 0x20] = (w12,2)     // arg2
         csel w8,w11,w8, eq
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = ~0x7f              // '\x7f'
         csel w11,w15,w11, eq
         if ((w0 & 0x10000000) == 0) // arg1
         [x1 + 0x3e] = (byte) w8  // arg2
         csel w8,w11,w8, eq
         [x1 + 0x1f] = (byte) w8  // arg2 // tmp
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if !w13 jmp 0x8022528    // likely

    loc_0x08022070: // orphan
         ubfx w11,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w9,w14,1, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w12,w0,0xb, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w13 == 2)
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         bfi w11,w10,4, 1         // '\xff\xff\xff\xff\xff\xff\xff\xff'
         csel w9,w9,w12, eq
         [x1 + 0x40] = (byte) w9  // arg2
         [x1 + 0x1a] = (byte) w11 // arg2
         

    loc_0x08022098: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022000
         w10 = 0x9f80             // '\x80\x9f'
         w13 = 0xf00
         w10 = w0 & w10           // arg1
         if (w10 == w13)
         b.ne 0x80220ec           // likely

    loc_0x080220ac: // orphan
         ubfx w10,w0,0x13, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if !w10 jmp 0x80220ec    // likely

    loc_0x080220b4: // orphan
         ubfx w13,w0,0xb, 5       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbz w0,0xa,0x80220d0     // likely

    loc_0x080220bc: // orphan
         if w13 jmp 0x80220d0     // unlikely

    loc_0x080220c0: // orphan
         if ((w0 & 0x20000000) == 0) // arg1
         w8 = 0x8b                // '\x8b'
         cinc w9,w8,ne
         jmp 0x8022394

    loc_0x080220d0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80220b8, 0x80220bc
         tbnz w0,0x1d,0x80220ec   // unlikely

    loc_0x080220d4: // orphan
         if (w13 == 0xa)
         b.ne 0x80220ec           // likely

    loc_0x080220dc: // orphan
         tbnz w0,0xa,0x8022390    // unlikely

    loc_0x080220e0: // orphan
         w10 = w0 & 0xc00000      // arg1
         if (w10 == 0x400)
         b.eq 0x8021528           // unlikely

    loc_0x080220ec: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80220a8, 0x80220b0, 0x80220d0, 0x80220d8
         w10 = 0xc00
         w10 = 0x8f00
         w13 = w0 & w10           // arg1
         if (w13 == w15)
         b.ne 0x80221d8           // unlikely

    loc_0x08022100: // orphan
         w13 = w0 & 0xff0000      // arg1
         w14 = w0 & 0x3ffff000    // arg1
         if (w13 == 0xf80)
         w16 = w14 & 0xe000ffff
         b.eq 0x8022134           // unlikely

    loc_0x08022114: // orphan
         if (w13 == 0xe00)
         b.eq 0x8022144           // unlikely

    loc_0x0802211c: // orphan
         if (w13 == 0xa00)
         b.ne 0x8022154           // likely

    loc_0x08022124: // orphan
         w14 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w13 = 0x20
         w15 = 0x1
         jmp 0x8022160

    loc_0x08022134: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022110
         w14 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w13 = 0x10
         w15 = 0x1
         jmp 0x8022160

    loc_0x08022144: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022118
         w13 = 0x40               // '@'
         w15 = 0x1
         w14 = 0x1
         jmp 0x8022160

    loc_0x08022154: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022120
         w15 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w14 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w13 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1

    loc_0x08022160: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022130, 0x8022140, 0x8022150
         if (w16 == 0xe)
         b.lt 0x8022194           // likely

    loc_0x08022168: // orphan
         b.eq 0x80221ac           // unlikely

    loc_0x0802216c: // orphan
         w17 = 0xd000
         w17 = 0x2000
         if (w16 == w17)
         b.eq 0x80221b4           // unlikely

    loc_0x0802217c: // orphan
         w17 = 0xc000
         w17 = 0x2000
         if (w16 == w17)
         b.ne 0x80221d8           // likely

    loc_0x0802218c: // orphan
         w16 = 0x26               // '&'
         jmp 0x80221c0

    loc_0x08022194: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022164
         if (w16 == 0xc)
         b.eq 0x80221bc           // unlikely

    loc_0x0802219c: // orphan
         if (w16 == 0xd)
         b.ne 0x80221d8           // likely

    loc_0x080221a4: // orphan
         w16 = 0x25               // '%'
         jmp 0x80221c0

    loc_0x080221ac: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022168
         w16 = 0x29               // ')'
         jmp 0x80221c0

    loc_0x080221b4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022178
         w16 = 0x28               // '('
         jmp 0x80221c0

    loc_0x080221bc: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022198
         w16 = 0x27               // '''

    loc_0x080221c0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022190, 0x80221a8, 0x80221b0, 0x80221b8
         if !w15 jmp 0x80221d8    // likely

    loc_0x080221c4: // orphan
         w15 = 0x5000
         w17 = 0x1000
         w15 = w0 & w15           // arg1
         if (w15 == w17)
         b.ne 0x80222ac           // likely

    loc_0x080221d8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80220fc, 0x8022188, 0x80221a0, 0x80221c0
         w14 = 0xbfff             // '\xff\xbf'
         w13 = w0 & 0xfffffc00    // arg1
         w14 = 0x1e22             // '\"\x1e'
         if (w13 == w14)
         jmp ifgt 0x8022224       // unlikely

    loc_0x080221ec: // orphan
         w14 = ~0x619e            // '\x9ea'
         if (w13 == w14)
         jmp ifle 0x8022260       // unlikely

    loc_0x080221f8: // orphan
         w14 = 0x9e62             // 'b\x9e'
         if (w13 == w14)
         b.eq 0x80222e8           // unlikely

    loc_0x08022204: // orphan
         w14 = 0x9e63             // 'c\x9e'
         if (w13 == w14)
         b.eq 0x80222f0           // unlikely

    loc_0x08022210: // orphan
         w14 = 0x1e22             // '\"\x1e'
         if (w13 == w14)
         b.ne 0x8022340           // likely

    loc_0x0802221c: // orphan
         w9 = 0x8d                // '\x8d'
         jmp 0x80222a0

    loc_0x08022224: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80221e8
         w14 = ~0xe19e            // '\x9e\xe1'
         if (w13 == w14)
         jmp ifle 0x8022280       // likely

    loc_0x08022230: // orphan
         w14 = 0x1e62             // 'b\x1e'
         if (w13 == w14)
         b.eq 0x8022300           // unlikely

    loc_0x0802223c: // orphan
         w14 = 0x4000
         w14 = 0x1e62             // 'b\x1e'
         if (w13 == w14)
         b.eq 0x8022308           // unlikely

    loc_0x0802224c: // orphan
         w14 = 0x1e63             // 'c\x1e'
         if (w13 == w14)
         b.ne 0x8022340           // likely

    loc_0x08022258: // orphan
         w9 = 0x93                // '\x93'
         jmp 0x8022324

    loc_0x08022260: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80221f4
         w14 = 0x9e22             // '\"\x9e'
         if (w13 == w14)
         b.eq 0x8022310           // unlikely

    loc_0x0802226c: // orphan
         w14 = 0x9e23             // '#\x9e'
         if (w13 == w14)
         b.ne 0x8022340           // likely

    loc_0x08022278: // orphan
         w9 = 0x92                // '\x92'
         jmp 0x8022314

    loc_0x08022280: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802222c
         w14 = 0xc000
         w14 = 0x1e22             // '\"\x1e'
         if (w13 == w14)
         b.eq 0x8022320           // unlikely

    loc_0x08022290: // orphan
         w14 = 0x1e23             // '#\x1e'
         if (w13 == w14)
         b.ne 0x8022340           // likely

    loc_0x0802229c: // orphan
         w9 = 0x91                // '\x91'

    loc_0x080222a0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022220
         w11 = 0x20
         w10 = 0x20
         jmp 0x802232c

    loc_0x080222ac: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80221d4
         w9 = w13                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         tbnz w0,0x1c,0x80222d0   // unlikely

    loc_0x080222b4: // orphan
         if ((w0 & 0x40000000) == 0) // arg1
         csel w8,wzr,w14, ne
         tbnz w8,0,0x8021528      // unlikely

    loc_0x080222c0: // orphan
         if ((w0 & 0x40000000) == 0) // arg1
         w8 = ~0x7f               // '\x7f'
         w9 = 0x40                // '@'
         csel w9,w9,w8, eq

    loc_0x080222d0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80222b0
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         w9 = 0x19
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 0x20] = (w9,2)      // arg2
         [x1 + 0x3e] = (byte) w13 // arg2
         

    loc_0x080222e8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022200
         w9 = 0x90                // '\x90'
         jmp 0x80222f4

    loc_0x080222f0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802220c
         w9 = 0x94                // '\x94'

    loc_0x080222f4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80222ec
         w11 = 0x40               // '@'
         w10 = 0x40               // '@'
         jmp 0x802232c

    loc_0x08022300: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022238
         w9 = 0x8f                // '\x8f'
         jmp 0x8022324

    loc_0x08022308: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022248
         w9 = 0x97                // '\x97'
         jmp 0x8022314

    loc_0x08022310: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022268
         w9 = 0x8e                // '\x8e'

    loc_0x08022314: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x802227c, 0x802230c
         w10 = 0x40               // '@'
         w11 = 0x20
         jmp 0x802232c

    loc_0x08022320: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802228c
         w9 = 0x98                // '\x98'

    loc_0x08022324: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x802225c, 0x8022304
         w10 = 0x20
         w11 = 0x40               // '@'

    loc_0x0802232c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80222a8, 0x80222fc, 0x802231c
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1f] = (byte) w11 // arg2 // tmp
         [x1 + 0x3e] = (byte) w10 // arg2
         w10 = 0x9
         jmp 0x8021c28

    loc_0x08022340: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022218, 0x8022254, 0x8022274, 0x8022298
         w10 = w10 + 0xbff,lsl 12
         w13 = 0xd7ff             // '\xff\xd7'
         w10 = w0 & w10           // arg1
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         jmp ifgt 0x8022400       // unlikely

    loc_0x08022358: // orphan
         w13 = 0xa800
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         b.eq 0x8022438           // unlikely

    loc_0x08022368: // orphan
         w13 = 0xb800
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         b.eq 0x8022440           // unlikely

    loc_0x08022378: // orphan
         w13 = 0xc800
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         b.ne 0x80224bc           // likely

    loc_0x08022388: // orphan
         w8 = 0x5
         jmp 0x802245c

    loc_0x08022390: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80220dc
         w9 = 0x8a                // '\x8a'

    loc_0x08022394: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80220cc
         clz w8,w10
         w11 = 0x8
         if ((w0 & 0x40000000) == 0) // arg1
         w8 = w8 ^ 0x1f           // " "
         w12 = 0x40               // '@'
         w11 = w11 << w8
         w8 = ~0x7f               // '\x7f'
         csel w8,w12,w8, eq
         w12 = w11 & 0xf8
         [x1 + 0x1f] = (byte) w8  // arg2 // tmp
         tbnz w0,0x1e,0x80223c8   // unlikely

    loc_0x080223c0: // orphan
         if (w12 == 0x40)
         b.eq 0x8021528           // unlikely

    loc_0x080223c8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80223bc
         ubfx w13,w0,0x10, 3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = w12 << 1
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w14 = 0xd
         if (w9 == 0x8a)
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w10 = w13 | w10,lsl 3
         [x1, 0x20] = (w14,2)     // arg2
         [x1 + 0x3e] = (byte) w11 // arg2
         w13 = w10 - w11
         w10 = w12 - w10
         csel w9,w13,w10, eq
         [x1 + 0x3d] = (byte) w9  // arg2
         

    loc_0x08022400: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022354
         w13 = 0xd800
         w13 = 0xe21              // '!\x0e'
         if (w10 == w13)
         b.eq 0x8022448           // unlikely

    loc_0x08022410: // orphan
         w13 = 0xa800
         w13 = 0xea1              // '\xa1\x0e'
         if (w10 == w13)
         b.eq 0x8022458           // unlikely

    loc_0x08022420: // orphan
         w13 = 0xb800
         w13 = 0xea1              // '\xa1\x0e'
         if (w10 == w13)
         b.ne 0x80224bc           // likely

    loc_0x08022430: // orphan
         w8 = 0x4
         jmp 0x802245c

    loc_0x08022438: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022364
         w8 = 0x1
         jmp 0x802245c

    loc_0x08022440: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022374
         w8 = 0x3
         jmp 0x802245c

    loc_0x08022448: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802240c
         if ((w0 & 0x20000000) == 0) // arg1
         w8 = 0x9b                // '\x9b'
         cinc w9,w8,ne
         jmp 0x802246c

    loc_0x08022458: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802241c
         w8 = 0x2

    loc_0x0802245c: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x802238c, 0x8022434, 0x802243c, 0x8022444
         if ((w0 & 0x20000000) == 0) // arg1
         w9 = 0x99                // '\x99'
         [x1 + 0x28] = w8         // arg2
         cinc w9,w9,ne

    loc_0x0802246c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022454
         if ((w0 & 0x400000) == 0) // arg1
         w8 = 0x40                // '@'
         w10 = 0x20               // "\r"
         csel w10,w10,w8, eq
         [x1 + 0x3e] = (byte) w10 // arg2
         tbnz w0,0x1c,0x80224a8   // unlikely

    loc_0x08022484: // orphan
         w10 = 0x4040             // '@@'
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = ~0x7f              // '\x7f'
         w10 = w0 & w10           // arg1
         csel w8,w8,w11, eq
         if (w10 == 0x400)
         [x1 + 0x1f] = (byte) w8  // arg2 // tmp
         b.eq 0x8021528           // unlikely

    loc_0x080224a4: // orphan
         jmp 0x80224b0

    loc_0x080224a8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022480
         tbz w0,0x1e,0x8021528    // likely

    loc_0x080224ac: // orphan
         [x1 + 0x1f] = (byte) w10 // arg2 // tmp

    loc_0x080224b0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80224a4
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = 0x9
         jmp 0x8021c28

    loc_0x080224bc: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022384, 0x802242c
         w13 = 0xfc00
         w14 = 0x1e20             // ' \x1e'
         w13 = 0x7fa0             // '\xa0\x7f'
         w10 = w0 & w13           // arg1
         if (w10 == w14)
         b.ne 0x80224f4           // likely

    loc_0x080224d4: // orphan
         ubfx w10,w0,0x13, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w14 &= w0                // arg1
         b.eq 0x8022570           // unlikely

    loc_0x080224e0: // orphan
         if (w14 == 0x40)
         b.ne 0x80224f4           // likely

    loc_0x080224e8: // orphan
         if w10 jmp 0x80224f4     // unlikely

    loc_0x080224ec: // orphan
         w9 = 0x5
         jmp 0x802257c

    loc_0x080224f4: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80224d0, 0x80224e4, 0x80224e8
         w10 = 0xc00
         w10 = 0xff20             // ' \xff'
         w14 = w0 & w10           // arg1
         ubfx w10,w0,0x16, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w14 == w12)
         b.ne 0x8022538           // unlikely

    loc_0x0802250c: // orphan
         if !w10 jmp 0x80225e0    // likely

    loc_0x08022510: // orphan
         if (w10 == 3)
         b.eq 0x80225e8           // unlikely

    loc_0x08022518: // orphan
         if (w10 == 1)
         b.ne 0x8021528           // likely

    loc_0x08022520: // orphan
         w9 = 0x40                // '@'
         jmp 0x80225ec

    loc_0x08022528: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802206c
         w9 = w9 << 1
         ubfx w10,w0,0x10, 4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         bfi w9,w14,2, 1          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x8021710

    loc_0x08022538: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022508
         w12 = 0x2000
         w15 = w0 & w9            // arg1
         w12 = 0x1e20             // ' \x1e'
         w16 = w12 + 2,lsl 12
         if (w15 == w16)
         b.ne 0x80225b8           // likely

    loc_0x08022550: // orphan
         w8 = 0x3
         if !w10 jmp 0x8022698    // likely

    loc_0x08022558: // orphan
         if (w10 == 3)
         b.eq 0x80226a0           // unlikely

    loc_0x08022560: // orphan
         if (w10 == 1)
         b.ne 0x80214ec           // likely

    loc_0x08022568: // orphan
         w9 = 0x40                // '@'
         jmp 0x80226a4

    loc_0x08022570: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80224dc
         x8 = 0x8022000
         x8 = x8 + 0
         w9 = [x8 + w10,uxtw 2]   // 0xb2000000cf // 764504178895

    loc_0x0802257c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80224f0
         if (w0 == 0)             // arg1
         w10 = 0x40               // '@'
         w11 = 0x20               // "\r"
         [x1 + 0x28] = w9         // arg2
         csel w9,w11,w10, ge      // "\r"
         if ((w0 & 0x400000) == 0) // arg1
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         csel w9,w11,w10, eq
         if ((w0 & 0x10000) == 0) // arg1
         [x1 + 0x3e] = (byte) w9  // arg2 // "@ "
         w9 = 0x95                // '\x95'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = 0x9
         cinc w9,w9,ne
         jmp 0x8021c28

    loc_0x080225b8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802254c
         w15 = w0 >> 0x18         // arg1
         if (w15 == 0x1f)
         b.ne 0x8022618           // likely

    loc_0x080225c4: // orphan
         if !w10 jmp 0x8022718    // likely

    loc_0x080225c8: // orphan
         if (w10 == 3)
         b.eq 0x8022720           // unlikely

    loc_0x080225d0: // orphan
         if (w10 == 1)
         b.ne 0x8021528           // likely

    loc_0x080225d8: // orphan
         w9 = 0x40                // '@'
         jmp 0x8022724

    loc_0x080225e0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802250c
         w9 = 0x20                // "\r"
         jmp 0x80225ec

    loc_0x080225e8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022514
         w9 = 0x10

    loc_0x080225ec: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022524, 0x80225e4
         ubfx w8,w0,0xc, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w8 == 8)
         b.ls 0x8022600           // likely

    loc_0x080225f8: // orphan
         w0 = 0x1
         

    loc_0x08022600: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80225f4
         w10 = 0x2
         if (w8 == 8)
         [x1 + 0x20] = w10        // arg2 // "\r"
         b.ne 0x8022680           // likely

    loc_0x08022610: // orphan
         w10 = 0xa
         jmp 0x802268c

    loc_0x08022618: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80225c0
         w15 = w9 + 8,lsl 12
         w15 = w0 & w15           // arg1
         if (w15 == w12)
         b.ne 0x80226dc           // unlikely

    loc_0x08022628: // orphan
         if ((w0 & 7) == 0)       // arg1
         w8 = 0x3
         b.ne 0x80214ec           // likely

    loc_0x08022634: // orphan
         if (w10 == 2)
         b.eq 0x80214ec           // unlikely

    loc_0x0802263c: // orphan
         if ((w0 & 0x10) == 0)    // arg1
         w9 = 0x20
         w8 = 0x5
         cinc w11,w9,ne
         [x1, 0x20] = (w8,2)      // arg2
         tbz w0,3,0x8022660       // likely

    loc_0x08022654: // orphan
         w8 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         w8 = w8 | 1
         [x1 + 0x38] = w8         // arg2

    loc_0x08022660: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022650
         if (w10 == 0)
         w11 = 0x40               // '@'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         csel w9,w9,w11, eq
         if (w10 == 3)
         w10 = 0x10
         csel w9,w10,w9, eq
         jmp 0x80217f0

    loc_0x08022680: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802260c
         x10 = 0x8022000
         x10 = x10 + 0
         w10 = [x10 + w8,uxtw 2]  // 0xb0000000d1 // 755914244305

    loc_0x0802268c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022614
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x24] = w10        // arg2 // "!"
         jmp 0x8022834

    loc_0x08022698: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022554
         w9 = 0x20
         jmp 0x80226a4

    loc_0x080226a0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802255c
         w9 = 0x10

    loc_0x080226a4: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x802256c, 0x802269c
         ubfx w10,w0,0xf, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x20] = w8         // arg2
         w8 = 0x1
         if (w10 == 0xf)
         b.hi 0x80214ec           // unlikely

    loc_0x080226b8: // orphan
         x11 = 0x8022000
         x11 = x11 + 0
         x12 = 0x80214ec
         w13 = (word) [x11 + x10,lsl 1] // 0xd1000000d2 // 897648165074
         x12 = x12 + x13,lsl 2    // 0x80227f0
                                  // fcn.080227f0
         br x12                   // fcn.080227f0

    loc_0x080226dc: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022624
         w12 = 0xc00
         w12 = 0x1e20             // ' \x1e'
         if (w14 == w12)
         b.eq 0x8022750           // unlikely

    loc_0x080226ec: // orphan
         w12 = 0x400
         w12 = 0x1e20             // ' \x1e'
         if (w14 == w12)
         b.ne 0x802276c           // likely

    loc_0x080226fc: // orphan
         if !w10 jmp 0x8022898    // likely

    loc_0x08022700: // orphan
         if (w10 == 3)
         b.eq 0x80228a0           // unlikely

    loc_0x08022708: // orphan
         if (w10 == 1)
         b.ne 0x8021528           // likely

    loc_0x08022710: // orphan
         w9 = 0x40                // '@'
         jmp 0x80228a4

    loc_0x08022718: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80225c4
         w9 = 0x20
         jmp 0x8022724

    loc_0x08022720: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80225cc
         w9 = 0x10

    loc_0x08022724: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80225dc, 0x802271c
         w10 = w0 >> 0x14         // arg1
         w12 = 0x14               // " "
         w11 = 0x4
         [x1 + 0x1f] = (byte) w9  // arg2 // " " tmp
         w10 = w10 & 2
         [x1 + 0x3e] = (byte) w9  // arg2 // "@ "
         bfxil w10,w0,0xf, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = w10 | w12          // " "
         [x1, 0x20] = (w11,2)     // arg2
         

    loc_0x08022750: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80226e8
         if !w10 jmp 0x80228d0    // likely

    loc_0x08022754: // orphan
         if (w10 == 3)
         b.eq 0x80228d8           // unlikely

    loc_0x0802275c: // orphan
         if (w10 == 1)
         b.ne 0x8021528           // likely

    loc_0x08022764: // orphan
         w9 = 0x40                // '@'
         jmp 0x80228dc

    loc_0x0802276c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80226f8
         w12 = w13 + 0x1e0,lsl 12
         w13 = 0x1e26             // '&\x1e'
         w12 = w0 & w12           // arg1
         if (w12 == w13)
         b.ne 0x8022844           // likely

    loc_0x08022780: // orphan
         ubfx w8,w0,0x16, 1       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         if (w8 == w0)            // arg1
         b.ne 0x8021528           // unlikely

    loc_0x0802278c: // orphan
         if ((w0 & 0x10000) == 0) // arg1
         w9 = 0x35                // '5'
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = 0x8
         cinc w9,w9,eq
         if (w0 == 0)             // arg1
         w11 = 0x40               // '@'
         w12 = 0x20
         [x1, 0x20] = (w10,2)     // arg2
         csel w9,w12,w11, ge
         jmp 0x80217f0

    loc_0x08022834: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022694, 0x80228cc
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         [x1 + 0x3e] = (byte) w9  // arg2
         

    loc_0x08022844: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802277c
         w12 = 0x8400
         w13 = 0x2e00
         w12 = 0xbfe0             // '\xe0\xbf'
         w12 = w0 & w12           // arg1
         if (w12 == w13)
         b.ne 0x8022900           // likely

    loc_0x0802285c: // orphan
         x8 = 0xa
         ubfx w9,w0,0xb, 4        // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 &= w0                // arg1
         x8 = 0x37                // '7'
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         [x1 + 0x20] = x8         // arg2
         csel w8,w12,w11, eq
         if (w9 == 7)
         [x1 + 0x3d] = (byte) w9  // arg2
         ccmp w10,0,0, hi
         w9 = 0x3
         csel w0,w9,wzr, eq
         [x1 + 0x1f] = (byte) w8  // arg2 // tmp
         

    loc_0x08022898: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80226fc
         w9 = 0x20                // U"\n7"
         jmp 0x80228a4

    loc_0x080228a0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022704
         w9 = 0x10

    loc_0x080228a4: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022714, 0x802289c
         if ((w0 & 0x10) == 0)    // arg1
         w11 = 0x22               // '\"'
         w10 = 0x6
         ubfx w12,w0,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         cinc w11,w11,ne
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1, 0x20] = (w10,2)     // arg2
         w10 = w0 & 0xf           // arg1
         [x1 + 0x3c] = (byte) w12 // arg2
         [x1 + 0x3d] = (byte) w10 // arg2
         jmp 0x8022834

    loc_0x080228d0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022750
         w9 = 0x20
         jmp 0x80228dc

    loc_0x080228d8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022758
         w9 = 0x10

    loc_0x080228dc: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022768, 0x80228d4
         x10 = 0x7
         ubfx w11,w0,0xc, 4       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         x10 = 0x24               // '$'
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         [x1 + 0x20] = x10        // arg2
         [x1 + 0x3c] = (byte) w11 // arg2
         [x1 + 0x3e] = (byte) w9  // arg2
         

    loc_0x08022900: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022858
         w12 = w0 & 0xfe0000      // arg1
         if (w12 == 0xa00)
         b.eq 0x8022928           // unlikely

    loc_0x0802290c: // orphan
         if (w12 == 0xe00)
         b.eq 0x8022930           // unlikely

    loc_0x08022914: // orphan
         if (w12 == 0xf80)
         b.ne 0x802293c           // likely

    loc_0x0802291c: // orphan
         w12 = 0x10
         [x1 + 0x3e] = (byte) w12 // arg2
         jmp 0x802294c

    loc_0x08022928: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022908
         w12 = 0x20
         jmp 0x8022938

    loc_0x08022930: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022910
         tbz w0,0x1e,0x8021528    // likely

    loc_0x08022934: // orphan
         w12 = 0x40               // '@'

    loc_0x08022938: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802292c
         [x1 + 0x3e] = (byte) w12 // arg2

    loc_0x0802293c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022918
         w12 = 0xbe               // '\xbe'
         w12 = w0 & w12           // arg1
         if (w12 == 0xa00)
         b.ne 0x8022988           // likely

    loc_0x0802294c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022924
         w12 = 0xf800
         w11 = w0 & w11           // arg1
         w12 = 0xe00
         if (w11 == w12)
         b.eq 0x80229d4           // unlikely

    loc_0x08022960: // orphan
         w12 = 0xf800
         w12 = 0x2e01
         if (w11 == w12)
         b.eq 0x80229dc           // unlikely

    loc_0x08022970: // orphan
         w12 = 0xf800
         w12 = 0x2e00
         if (w11 == w12)
         b.ne 0x8022988           // likely

    loc_0x08022980: // orphan
         w9 = 0xd
         jmp 0x80229e0

    loc_0x08022988: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022948, 0x802297c
         w11 = 0xfc00
         w12 = 0x800
         w11 = 0xbf3f             // '?\xbf'
         w12 = 0x2e20             // ' .'
         w11 = w0 & w11           // arg1
         if (w11 == w12)
         b.eq 0x8022a00           // unlikely

    loc_0x080229a4: // orphan
         w12 = 0x1800
         w12 = 0xe20              // ' \x0e'
         if (w11 == w12)
         b.eq 0x8022a10           // unlikely

    loc_0x080229b4: // orphan
         w12 = 0x800
         w12 = 0xe20              // ' \x0e'
         if (w11 == w12)
         b.ne 0x8022a4c           // likely

    loc_0x080229c4: // orphan
         if (w10 == 3)
         b.eq 0x8021528           // unlikely

    loc_0x080229cc: // orphan
         w9 = 0x4e                // 'N'
         jmp 0x8022a18

    loc_0x080229d4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802295c
         w9 = 0xc                 // "/"
         jmp 0x80229e0

    loc_0x080229dc: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x802296c
         w9 = 0xe

    loc_0x080229e0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022984, 0x80229d8
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w10 = 0x15
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         [x1, 0x20] = (w10,2)     // arg2
         csel w9,w12,w11, eq
         jmp 0x80217f0

    loc_0x08022a00: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80229a0
         if (w10 == 1)
         b.hi 0x8021528           // unlikely

    loc_0x08022a08: // orphan
         w9 = 0x4f                // 'O'
         jmp 0x8022a18

    loc_0x08022a10: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80229b0
         if w10 jmp 0x8021528     // unlikely

    loc_0x08022a14: // orphan
         w9 = 0x50                // 'P'

    loc_0x08022a18: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x80229d0, 0x8022a0c
         w14 = 0x8
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w11 = 0x16
         if ((w0 & 0x40000000) == 0) // arg1
         w12 = ~0x7f              // '\x7f'
         w13 = 0x40               // '@'
         w10 = w14 << w10
         [x1, 0x20] = (w11,2)     // arg2
         csel w9,w13,w12, eq
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         [x1 + 0x3e] = (byte) w10 // arg2
         

    loc_0x08022a4c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x80229c0
         tbnz w0,0x1c,0x8022aa8   // unlikely

    loc_0x08022a50: // orphan
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         jmp ifle 0x8022b10       // likely

    loc_0x08022a60: // orphan
         w9 = 0x37ff              // '\xff7'
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         jmp ifgt 0x8022b48       // unlikely

    loc_0x08022a70: // orphan
         w9 = 0xb800
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         b.eq 0x8022c40           // unlikely

    loc_0x08022a80: // orphan
         w9 = 0x2800
         w9 = 0x2e21              // '!.'
         if (w11 == w9)
         b.eq 0x8022d18           // unlikely

    loc_0x08022a90: // orphan
         w9 = 0x4800
         w9 = 0x2e21              // '!.'
         if (w11 == w9)
         b.ne 0x8022ce8           // likely

    loc_0x08022aa0: // orphan
         w9 = 0xa6                // '\xa6'
         jmp 0x8022d24

    loc_0x08022aa8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022a4c
         w9 = w9 + 0x1f8,lsl 12
         w12 = 0x27ff             // '\xff''
         w9 = w0 & w9             // arg1
         w12 = 0x7e21             // '!~'
         if (w9 == w12)
         jmp ifgt 0x8022ae8       // unlikely

    loc_0x08022ac0: // orphan
         w12 = 0x2800
         w12 = 0x5e21             // '!^'
         if (w9 == w12)
         b.eq 0x8021528           // unlikely

    loc_0x08022ad0: // orphan
         w12 = 0x4800
         w12 = 0x5e21             // '!^'
         if (w9 == w12)
         b.ne 0x8022b80           // likely

    loc_0x08022ae0: // orphan
         w9 = 0xa5                // '\xa5'
         jmp 0x8022b60

    loc_0x08022ae8: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022abc
         w12 = 0x2800
         w12 = 0x7e21             // '!~'
         if (w9 == w12)
         b.eq 0x8022b5c           // unlikely

    loc_0x08022af8: // orphan
         w12 = 0x4800
         w12 = 0x7e21             // '!~'
         if (w9 == w12)
         b.ne 0x8022b80           // likely

    loc_0x08022b08: // orphan
         w9 = 0xa6                // '\xa6'
         jmp 0x8022b60

    loc_0x08022b10: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022a5c
         w9 = 0x37ff              // '\xff7'
         w9 = 0xe30               // '0\x0e'
         if (w11 == w9)
         jmp ifgt 0x8022bd0       // unlikely

    loc_0x08022b20: // orphan
         w9 = 0x2800
         w9 = 0xe21               // '!\x0e'
         if (w11 == w9)
         b.eq 0x8022d20           // unlikely

    loc_0x08022b30: // orphan
         w9 = 0x4800
         w9 = 0xe21               // '!\x0e'
         if (w11 == w9)
         b.ne 0x8022ce8           // likely

    loc_0x08022b40: // orphan
         w9 = 0xa5                // '\xa5'
         jmp 0x8022d24

    loc_0x08022b48: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022a6c
         w9 = 0x3800
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         b.ne 0x8022c10           // likely

    loc_0x08022b58: // orphan
         jmp 0x8022bc0

    loc_0x08022b5c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022af4
         w9 = 0xa7                // '\xa7'

    loc_0x08022b60: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022ae4, 0x8022b0c
         if (w10 == 3)
         b.eq 0x8021528           // unlikely

    loc_0x08022b68: // orphan
         w8 = 0x8
         w11 = 0x20
         w8 = w8 << w10
         [x1 + 0x20] = w11        // arg2
         [x1 + 0x1f] = (byte) w8  // arg2 // tmp
         jmp 0x8022d58

    loc_0x08022b80: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022adc, 0x8022b04
         w9 = 0xb7ff              // '\xff\xb7'
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         jmp ifle 0x8022bd0       // likely

    loc_0x08022b90: // orphan
         w9 = 0xa7ff              // '\xff\xa7'
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         jmp ifgt 0x8022c10       // unlikely

    loc_0x08022ba0: // orphan
         w9 = 0xb800
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         b.eq 0x8022c40           // unlikely

    loc_0x08022bb0: // orphan
         w9 = 0x3800
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         b.ne 0x8022ce8           // likely

    loc_0x08022bc0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022b58
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = 0x9f               // '\x9f'
         w9 = 0x1
         jmp 0x8022c7c

    loc_0x08022bd0: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022b1c, 0x8022b8c
         w9 = 0x3800
         w9 = 0xe30               // '0\x0e'
         if (w11 == w9)
         b.eq 0x8022c50           // unlikely

    loc_0x08022be0: // orphan
         w9 = 0xa800
         w9 = 0xe30               // '0\x0e'
         if (w11 == w9)
         b.eq 0x8022c60           // unlikely

    loc_0x08022bf0: // orphan
         w9 = 0xa800
         w9 = 0xe31               // '1\x0e'
         if (w11 == w9)
         b.ne 0x8022ce8           // likely

    loc_0x08022c00: // orphan
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = 0xa1               // '\xa1'
         jmp 0x8022c7c

    loc_0x08022c10: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022b54, 0x8022b9c
         w9 = 0xa800
         w9 = 0x2e30              // '0.'
         if (w11 == w9)
         b.eq 0x8022c70           // unlikely

    loc_0x08022c20: // orphan
         w9 = 0xa800
         w9 = 0x2e31              // '1.'
         if (w11 == w9)
         b.ne 0x8022ce8           // likely

    loc_0x08022c30: // orphan
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = 0xa3               // '\xa3'
         jmp 0x8022c7c

    loc_0x08022c40: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022a7c, 0x8022bac
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = 0x9d               // '\x9d'
         jmp 0x8022c7c

    loc_0x08022c50: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022bdc
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = 0x9e               // '\x9e'
         w11 = 0x1
         jmp 0x8022c7c

    loc_0x08022c60: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022bec
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = 0xa0               // '\xa0'
         jmp 0x8022c7c

    loc_0x08022c70: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022c1c
         w11 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w9 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = 0xa2               // '\xa2'

    loc_0x08022c7c: // orphan
         // XREFS: CODE 0x08022bcc  CODE 0x08022c0c  CODE 0x08022c3c  
         // XREFS: CODE 0x08022c4c  CODE 0x08022c5c  CODE 0x08022c6c  
         if (w10 == 2)
         b.eq 0x8022ca4           // unlikely

    loc_0x08022c84: // orphan
         if (w10 == 3)
         w8 = w10                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.eq 0x80214ec           // unlikely

    loc_0x08022c90: // orphan
         if ((w0 & 0x40000000) == 0) // arg1
         w8 = ~0x7f               // '\x7f'
         w13 = 0x40               // '@'
         csel w13,w13,w8, eq
         jmp 0x8022cac

    loc_0x08022ca4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022c80
         tbz w0,0x1e,0x8021528    // likely

    loc_0x08022ca8: // orphan
         w13 = 0x80               // '\x80'

    loc_0x08022cac: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022ca0
         w14 = 0x1e
         w15 = 0x10
         w9 = w11 | w9
         [x1, 0x20] = (w14,2)     // arg2
         w14 = 0x8
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         w12 = w14 << w10
         w10 = w15 << w10
         if (w9 == 0)
         w0 = w8                  // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x1 + 0x1f] = (byte) w13 // arg2 // tmp
         csel w9,w10,w12, ne
         [x1 + 0x3e] = (byte) w12 // arg2
         [x1 + 0x3f] = (byte) w9  // arg2 // " "
         

    loc_0x08022ce8: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022a9c, 0x8022b3c, 0x8022bbc, 0x8022bfc, 0x8022c2c
         w9 = 0xfc00
         w10 = 0xd800
         w9 = 0xdfbf              // '\xbf\xdf'
         w10 = 0x5e30             // '0^'
         w9 = w0 & w9             // arg1
         if (w9 == w10)
         b.ne 0x8022d7c           // likely

    loc_0x08022d04: // orphan
         tbnz w0,0x1d,0x8022dc0   // unlikely

    loc_0x08022d08: // orphan
         tbnz w0,0x16,0x8021528   // unlikely

    loc_0x08022d0c: // orphan
         w8 = 0x10
         w9 = 0x20
         jmp 0x8022dd4

    loc_0x08022d18: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022a8c
         w9 = 0xa7                // '\xa7'
         jmp 0x8022d24

    loc_0x08022d20: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022b2c
         w9 = 0xa4                // '\xa4'

    loc_0x08022d24: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022aa4, 0x8022b44, 0x8022d1c
         if (w10 == 3)
         b.eq 0x8021528           // unlikely

    loc_0x08022d2c: // orphan
         w8 = 0x1f                // tmp
         if ((w0 & 0x40000000) == 0) // arg1
         w11 = ~0x7f              // '\x7f'
         w12 = 0x40               // '@'
         [x1 + 0x20] = w8         // arg2
         csel w8,w12,w11, eq
         [x1 + 0x1f] = (byte) w8  // arg2 // tmp
         tbz w0,0x1e,0x8022d58    // likely

    loc_0x08022d4c: // orphan
         w8 = [x1 + 0x38]         // 0xc8 // 200 // arg2
         w8 = w8 | 8
         [x1 + 0x38] = w8         // arg2

    loc_0x08022d58: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022b7c, 0x8022d48
         w11 = 0x10
         w12 = 0x8
         [x1 + 0x24] = w9         // arg2
         w11 = w11 << w10
         w9 = w12 << w10
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x3e] = (byte) w11 // arg2
         [x1 + 0x3f] = (byte) w9  // arg2
         

    loc_0x08022d7c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022d00
         w8 = w8 + 0x7f,lsl 12
         w9 = w0 & w8             // arg1
         w8 = 0xc7ff              // '\xff\xc7'
         w8 = 0xeb0               // '\xb0\x0e'
         if (w9 == w8)
         w8 = 0x1
         jmp ifgt 0x8022df0       // unlikely

    loc_0x08022d98: // orphan
         w10 = 0xc800
         w10 = 0xe30              // '0\x0e'
         if (w9 == w10)
         b.eq 0x8022e18           // unlikely

    loc_0x08022da8: // orphan
         w10 = 0xf800
         w10 = 0xe30              // '0\x0e'
         if (w9 == w10)
         b.ne 0x80214ec           // likely

    loc_0x08022db8: // orphan
         w9 = 0x33                // '3'
         jmp 0x8022e24

    loc_0x08022dc0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022d04
         if ((w0 & 0x400000) == 0) // arg1
         w8 = 0x40                // '@'
         w9 = 0x20
         csel w8,w9,w8, eq
         w9 = w8 << 1

    loc_0x08022dd4: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022d14
         [x1 + 0x3e] = (byte) w8  // arg2
         x10 = 0x1a
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1f] = (byte) w9  // arg2 // tmp
         x10 = 0x18
         [x1 + 0x20] = x10        // arg2
         

    loc_0x08022df0: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022d94
         w10 = 0xf800
         w10 = 0xeb0              // '\xb0\x0e'
         if (w9 == w10)
         b.eq 0x8022e20           // unlikely

    loc_0x08022e00: // orphan
         w10 = 0xc800
         w10 = 0xeb0              // '\xb0\x0e'
         if (w9 == w10)
         b.ne 0x80214ec           // likely

    loc_0x08022e10: // orphan
         w9 = 0x32                // '2'
         jmp 0x8022e24

    loc_0x08022e18: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022da4
         w9 = 0x31                // '1'
         jmp 0x8022e24

    loc_0x08022e20: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022dfc
         w9 = 0x34                // '4'

    loc_0x08022e24: // orphan
         // CODE XREFS from sym.arm64_decode_simd @ 0x8022dbc, 0x8022e14, 0x8022e1c
         tbnz w0,0x1d,0x8022e40   // unlikely

    loc_0x08022e28: // orphan
         if ((w0 & 0x40000000) == 0) // arg1
         w10 = ~0x7f              // '\x7f'
         w11 = 0x40               // '@'
         w8 = 0x10
         csel w10,w11,w10, eq
         jmp 0x8022e4c

    loc_0x08022e40: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022e24
         tbz w0,0x1e,0x8021528    // likely

    loc_0x08022e44: // orphan
         w8 = 0x20
         w10 = 0x80               // '\x80'

    loc_0x08022e4c: // orphan
         // CODE XREF from sym.arm64_decode_simd @ 0x8022e3c
         [x1 + 0x3e] = (byte) w8  // arg2
         w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x1 + 0x1f] = (byte) w10 // arg2 // tmp
         w10 = 0x1a
         jmp 0x8021c28

}

/* ===== 0x0801f0bc ===== */
int sym.arm64_decode_data_processing_immediate (int esi, int edx) {
    loc_0x801f0bc:
        hint 0x19
        [sp, -0x20]! = (x29,2) // (pstr 0x00178000) "4"
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff' // (pstr 0x00178000) "4"
        w9 = 0x1000
        w10 = w0 & 0x1f000000 // arg1
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        w20 = w0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w8 = 0x1
        if (w10 == w9)
        [x1 + 8] = w8 // arg2
        b.ne 0x801f13c // likely
            
    loc_0x801f13c:
        w8 = w20 & 0x1f800000
        w9 = 0x1100
        if (w8 == w9)
        b.ne 0x801f1cc // likely
            
    loc_0x801f1cc:
        w9 = w20 & 0x7ff00000
        w10 = 0x11c0  // '\xc0\x11'
        if (w9 == w10)
        b.ne 0x801f278 // likely
            
    loc_0x801f278:
        w9 = 0x1200
        if (w8 == w9)
        b.ne 0x801f320 // likely
            
    loc_0x801f320:
        w9 = w20 & 0x7f800000
        w10 = 0x1300
        if (w9 == w10)
        b.eq 0x801f348 // unlikely
            
    loc_0x801f348:
        w8 = 0x17
        ubfx w10,w20,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = w20 & 0x1f
        [x19 + 0xc] = w8 // "/"
        ubfx w8,w20,0xa, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if (w20 == 0)
        [x19 + 0x18] = (byte) w9
        w9 = 0x40     // '@'
        [x19 + 0x19] = (byte) w10
        w10 = 0x20
        [x19 + 0x1b] = (byte) w8
        ubfx w8,w20,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        csel w3,w10,w9, ge
        [x19 + 0x1f] = (byte) w3 // arg4 // tmp
        [x19 + 0x1a] = (byte) w8
        tbz w20,0x1f,0x801f394 // likely
            
    loc_0x801f394:
        ubfx w0,w20,0x1d, 2 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !w0 jmp 0x801f448 // likely
            
    loc_0x801f448:
        w8 = 0x7
         // do {
    loc_0x801f44c:
        // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x801f3b0
        if (w20 == 0)
        ubfx w0,w20,0x16, 1 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 0x10] = w8
        cset w9,ge
        ubfx w1,w20,0x10, 6 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w20 & 0x400000
        if (w9 == w8)
        [x19 + 0x3a] = (byte) w0
        [x19 + 0x3b] = (byte) w1
        b.eq 0x801f4ac // unlikely
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
    loc_0x0801f198: // orphan
             w8 = [x19 + 0x14]        // 0xda // 218
             w8 = w8 | 1
             [x19 + 0x14] = w8

    loc_0x0801f1a4: // orphan
         sbfx w9,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w20,0xa, 0xc     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w9 = w9 & 0xc
         [x19 + 0x20] = x8
         [x19 + 0x39] = (byte) w9
         tbnz w20,0x16,0x801f248  // unlikely

    loc_0x0801f1bc: // orphan
         tbnz w20,0x1d,0x801f254  // unlikely

    loc_0x0801f1c0: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbnz w20,0x1e,0x801f268  // unlikely

    loc_0x0801f1c8: // orphan
         jmp 0x801f4b0

    loc_0x0801f21c: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8

    loc_0x0801f228: // orphan
         ubfx w9,w20,0xa, 8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w8,w20,0x12, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x20] = x9
         if !w8 jmp 0x801f3b4     // likely

    loc_0x0801f238: // orphan
         if (w8 == 1)
         b.ne 0x801f3bc           // likely

    loc_0x0801f240: // orphan
         w8 = 0x10
         jmp 0x801f3cc

    loc_0x0801f248: // orphan
         x8 = x8 << 0xc
         [x19 + 0x20] = x8
         tbz w20,0x1d,0x801f1c0   // likely

    loc_0x0801f254: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 2
         [x19 + 0x14] = w8
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         tbz w20,0x1e,0x801f4b0   // likely

    loc_0x0801f268: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 4
         [x19 + 0x14] = w8
         jmp 0x801f4b0

    loc_0x0801f2d0: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w8 = w8 | 1
         [x19 + 0x14] = w8

    loc_0x0801f2dc: // orphan
         ubfx w0,w20,0x16, 1      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         ubfx w1,w20,0x10, 6      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x19 + 0x20          // int64_t arg7
         x6 = x19 + 0x30
         w4 = 0x1
         [x19 + 0x3a] = (byte) w0
         [x19 + 0x3b] = (byte) w1
         sym.arm64_decode_bit_masks () // sym.arm64_decode_bit_masks(0x0, 0x0, 0x0, 0x0, -1, -1)
         if !w0 jmp 0x801f4ac     // likely

    loc_0x0801f300: // orphan
         w8 = 0x6000
         bics wzr,w8,w20          // '\xff\xff\xff\xff\xff\xff\xff\xff'
         b.ne 0x801f3d8           // likely

    loc_0x0801f30c: // orphan
         w8 = [x19 + 0x14]        // 0xda // 218
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w8 = w8 | 2
         [x19 + 0x14] = w8
         jmp 0x801f4b0

    loc_0x0801f33c: // orphan
         w10 = 0x3300
         if (w9 == w10)
         b.ne 0x801f3e0           // likely

    loc_0x0801f3a4: // orphan
         if (w0 == 1)
         w8 = 0x8
         cinc w8,w8,ne
         jmp 0x801f44c

    loc_0x0801f3b4: // orphan
         w8 = 0xe
         jmp 0x801f3cc

    loc_0x0801f3bc: // orphan
         if (w8 == 2)
         w8 = 0x11
         w9 = 0xf
         csel w8,w9,w8, eq

    loc_0x0801f3cc: // orphan
         // CODE XREFS from sym.arm64_decode_data_processing_immediate @ 0x801f244, 0x801f3b8
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
         [x19 + 0x10] = w8
         jmp 0x801f4b0

    loc_0x0801f3d8: // orphan
         w0 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         jmp 0x801f4b0

    loc_0x0801f3e0: // orphan
         w9 = 0x7fa0              // '\xa0\x7f'
         w10 = 0x1380             // '\x80\x13'
         w9 = w20 & w9
         if (w9 == w10)
         b.ne 0x801f4c0           // likely

    loc_0x0801f3f4: // orphan
         x8 = 0x18
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         x8 = 0xa
         [x19 = x8
         sym.arm64_decode_base_registers () // sym.arm64_decode_base_registers(0x0, 0x0)
         w8 = (byte) [x19 + 0x1f] // 0xda // 218 // tmp
         ubfx w9,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w11 = w20 & 0x400000
         ubfx w12,w20,0x16, 1     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // CODE XREFS from sym.arm64_decode_insn @ 0x801f068, 0x801f06c
         if (w8 == 0x40)
         [x19 + 0x39] = (byte) w9
         cset w10,ne
         if (w9 == w8)
         [x19 + 0x3a] = (byte) w12
         w10 = w10 ^ w11,lsr 22
         cset w8,lo
         if ((w10 & w8) == 0)
         w8 = 0x3
         csel w0,wzr,w8, ne
         jmp 0x801f4b0

    loc_0x0801f474: // orphan
         tbnz w20,0x1f,0x801f488  // unlikely

    loc_0x0801f478: // orphan
         w8 = w20 >> 0xa
         w9 = w20 >> 0x10
         w8 = w9 | w8
         tbnz w8,5,0x801f4ac      // unlikely

    loc_0x0801f488: // orphan
         ubfx w2,w20,0xa, 6       // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x5 = x19 + 0x28          // int64_t arg7
         x6 = x19 + 0x30
         w4 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.arm64_decode_bit_masks () // "h" // sym.arm64_decode_bit_masks(0x0, 0x0, 0x0, 0x0, -1, -1)
         w8 = 0x3
         if (w0 == 0)
         csel w0,w8,wzr, eq
         jmp 0x801f4b0

    loc_0x0801f4ac: // orphan
         w0 = 0x3

    loc_0x0801f4b0: // orphan
         // XREFS: CODE 0x0801f138  CODE 0x0801f1c8  CODE 0x0801f274  
         // XREFS: CODE 0x0801f31c  CODE 0x0801f3d4  CODE 0x0801f3dc  
         // XREFS: CODE 0x0801f444  CODE 0x0801f4a8  CODE 0x0801f50c  
         // XREFS: CODE 0x0801f540  
         (x20, 2) = 3
         (x29, 2) = 3
         hint 0x1d
         

    loc_0x0801f4c0: // orphan
         w9 = 0x1280              // '\x80\x12'
         if (w8 == w9)
         b.ne 0x801f504           // likely

    loc_0x0801f4cc: // orphan
         w8 = 0x19
         w0 = w20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff' // int64_t arg2
         [x19 + 0xc] = w8
         sym.arm64_decode_base_registers () // sym.arm64_decode_base_registers(0x0, 0x0)
         ubfx w8,w20,0x1d, 2      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         w0 = 0x3
         if !w8 jmp 0x801f510     // likely

    loc_0x0801f4ec: // orphan
         if (w8 == 1)
         b.eq 0x801f4b0           // unlikely

    loc_0x0801f4f4: // orphan
         if (w8 == 2)
         w8 = 0xc
         cinc w8,w8,ne
         jmp 0x801f514

    loc_0x0801f504: // orphan
         w0 = 0x1
         [x19 + 0xc] = wzr
         jmp 0x801f4b0

    loc_0x0801f510: // orphan
         w8 = 0xb

    loc_0x0801f514: // orphan
         // CODE XREF from sym.arm64_decode_data_processing_immediate @ 0x801f500
         w9 = (byte) [x19 + 0x1f] // 0xda // 218 // tmp
         w11 = w20 >> 0x11
         ubfx w10,w20,5, 0x10     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         [x19 + 0x10] = w8        // U"\n\a"
         w8 = w20 & 0x400000
         if (w9 == 0x20)
         w9 = w11 & 0x30
         [x19 + 0x20] = x10
         ccmp w8,0,4, eq
         [x19 + 0x39] = (byte) w9
         csel w0,wzr,w0, eq
         jmp 0x801f4b0

}

/* ===== 0x08022e64 ===== */
int sym.arm64_decode_sme (int esi, int edx) {
    loc_0x8022e64:
        tbnz w0,0x1f,0x8022e70 // unlikely
            
    loc_0x8022e70:
        // CODE XREF from sym.arm64_decode_sme @ 0x8022e64
        x8 = 0x7
        w0 = 0x1
        x8 = 0x31     // '1'
        [x1 + 8] = x8 // arg2
        0x08022e80
         // } else {
    loc_0x8022e68:
        w0 = 0x3
        0x08022e6c
        }
        return eax;
}

/* ===== 0x08022e88 ===== */
int sym.arm64_decode_sve (int esi, int edx) {
    loc_0x8022e88:
        x8 = 0x6
        ubfx w9,w0,5, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        ubfx w10,w0,0x10, 5 // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x8 = 0x30     // '0'
        [x1 + 8] = x8 // arg2
        w8 = w0 & 0x1f // arg1
        w0 = 0x1
        [x1 + 0x18] = (byte) w8 // arg2
        [x1 + 0x19] = (byte) w9 // arg2
        [x1 + 0x1a] = (byte) w10 // arg2
        0x08022eb0
         // (break)
}

/* ===== 0x08022f44 ===== */
int sym.arraylist_add (int esi, int edx) {
    loc_0x8022f44:
        hint 0x19
        [sp, -0x30]! = (x29,2) // (pstr 0x00178000) "4"
        [var_10h] = x21 // (pstr 0x00178000) "4"
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff' // (pstr 0x00178000) "4"
        (x9, 2) = 3   // arg1
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x20 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x10 = x9 + 1
        if (x8 == x10)
        b.hs 0x8022fac // unlikely
            
    loc_0x8022fac:
        // CODE XREF from sym.arraylist_add @ 0x8022f6c
        x0 = [x19]    // 0xda // 218
         // do {
    loc_0x8022fb0:
        // CODE XREF from sym.arraylist_add @ 0x8022fa8
        w8 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        [x19 + 8] = x10
        [x0 + x9,lsl 3] = x20
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8022f70
    loc_0x8022f84:
        x0 = [x19]    // 0xda // 218 // int64_t arg1
        x1 = x21 << 3 // int64_t arg2
        w2 = 0xcc0    // '\xc0\f'
        0x8022f90 ()  // 0x8022f90(0x0, 0x0, 0xcc0, 0x0)
        if !x0 jmp 0x8022fd4 // likely
            
    loc_0x8022fd4:
        // CODE XREFS from sym.arraylist_add @ 0x8022f80, 0x8022f94
        w8 = ~0xb
        jmp 0x8022fbc
         // do {
    loc_0x8022fbc:
        // CODE XREF from sym.arraylist_add @ 0x8022fd8
        w0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        x21 = [var_10h] // 0x4 // 4
        (x29, 2) = 3  // "P"
        hint 0x1d
        0x08022fd0
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08023004 ===== */
int sym.arraylist_remove (int esi, int edx) {
    loc_0x8023004:
        hint 0x19
        [sp, -0x20]! = (x29,2)
        [sp, 0x10] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff' // (pstr 0x00178000) "4"
        x8 = [x0 + 8] // 0xc7 // 199 // arg1
        if (x8 == x1) // arg2
        b.ls 0x8023054 // likely
            
    loc_0x8023054:
        // CODE XREF from sym.arraylist_remove @ 0x802301c
        x20 = xzr     // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x8023058:
        // CODE XREF from sym.arraylist_remove @ 0x8023050
        x0 = x20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        (x20, 2) = 3
        (x29, 2) = 3
        hint 0x1d
        0x08023068
         // } while (?);
         // } while (?);
        }
        return eax;
}

/* ===== 0x08023070 ===== */
int sym.arraylist_clear (int esi, int edx) {
    loc_0x8023070:
        [x0 + 8] = xzr // arg1
        0x08023074
         // (break)
}

/* ===== 0x08002000 ===== */
int sym..text (int esi, int edx) {
    loc_0x8002000:
        // XREFS(109)
        if !x2 jmp 0x7fa7f0c // [13] -r-x section size 136908 named .text // likely
        // chop
}

