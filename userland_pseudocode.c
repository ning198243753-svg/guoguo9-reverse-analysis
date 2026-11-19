// 用户态核心关键函数伪代码（r2 pdc, 按需分析）


/* ===== rc4_core() @0x459464 ===== */
int fcn.00459464 (int esi, int edx) {
    loc_0x459464:
        sp = sp - 0x50
        [sp, 0x10] = (x29,2)
        [sp, 0x20] = (x24,2)
        [sp, 0x30] = (x22,2)
        [sp, 0x40] = (x20,2)
        x29 = var_10h
        x21 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        w0 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        if !x21 jmp 0x459584 // likely
            
    loc_0x459584:
        (x20, 2) = 3
        (x22, 2) = 3
        (x24, 2) = 3
        (x29, 2) = 3
        sp = arg_50h
        0x00459598
         // } else {
    loc_0x459488:
        x24 = x2      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg3
        if !x2 jmp 0x459584 // likely
        }
        return eax;
    loc_0x459490:
        x20 = x4      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg5
        if !x4 jmp 0x459584 // likely
    loc_0x459498:
        x8 = 0x58000
        w0 = 0x100
        x19 = x5      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg6
        q0 = [x8 + 0x420] // 0xcf
        w23 = w3      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg4
        w22 = w1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        [sp] = q0
        0x91f560 ()   // 0x91f560(0x100, 0x0, 0x0, 0x0)
        movi v0.16b,0x10
        q1 = [sp]     // 0x4
        x8 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x4594c4:
        [x0 + x8] = q1
        v1.16b = v1.16b + v0.16b
        x8 = x8 + 0x10
        if (x8 == 0x100)
        b.ne 0x4594c4 // likely
         // } while (?);
        }
        return eax;
    loc_0x4594d8:
        x8 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w9 = wzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
         // do {
    loc_0x4594e0:
        sdiv w10,w8,w23
        w11 = (byte) [x0 + x8] // 0xcf000000c7 // 889058230471
        w9 = w9 + w11
        msub w10,w10,w23, w8
        w10 = (byte) [x24 + w10,uxtw] // 0xb2000000df // 764504178911
        w9 = w10 + w9
        x10 = x9 & 0xff
        w12 = (byte) [x0 + x10] // 0xd1000000c7 // 897648165063
        [x0 + x8] = (byte) w12
        x8 = x8 + 1
        if (x8 == 0x100)
        [x0 + x10] = (byte) w11
        b.ne 0x4594e0 // likely
         // } while (?);
        }
        return eax;
    loc_0x459514:
        if (w22 == 1)
        b.lt 0x459578 // likely
            
    loc_0x459578:
        [x19] = w22
        0x919a6c ()   // 0x919a6c(0x0, 0x0, 0x0, 0x0)
        w0 = ~0
    loc_0x0045951c: // orphan
             w8 = wzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w10 = wzr                // '\xff\xff\xff\xff\xff\xff\xff\xff'
             w9 = w22                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x00459528: // orphan
         w10 = w10 + 1
         negs w11,w10
         w10 = w10 & 0xff
         w11 = w11 & 0xff
         csneg w10,w10,w11, mi
         x9 = x9 - 1
         w11 = (byte) [x0 + w10,sxtw] // 0xb2000000c7 // 764504178887
         w8 = w11 + w8
         x12 = x8 & 0xff
         w13 = (byte) [x0 + x12]  // 0xd3000000c7 // 906238099655
         [x0 + w10,sxtw] = (byte) w13
         [x0 + x12] = (byte) w11
         w12 = (byte) [x0 + w10,sxtw] // 0xb2000000c7 // 764504178887
         w11 = w12 + w11
         w12 = (byte) [x21] + 1   // 0xdc
         x11 = x11 & 0xff
         w11 = (byte) [x0 + x11]  // 0xd2000000c7 // 901943132359
         w11 = w11 ^ w12
         [x20] + 1 = (byte) w11
         b.ne 0x459528            // likely

}


/* ===== hex_encode() @0x45959c ===== */
int fcn.0045959c (int esi, int edx) {
    loc_0x45959c:
        if !x0 jmp 0x459620 // likely
            
    loc_0x459620:
        0x00459620
         // } else {
    loc_0x4595a0:
        [sp, -0x30]! = (x29,2)
        [sp + 0x10] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w20 = w1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        x19 = x0      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        sbfiz x21,x20,1, 0x20 // '\xff\xff\xff\xff\xff\xff\xff\xff'
        w8 = w21 | 1
        x0 = w8       // '\xff\xff\xff\xff\xff\xff\xff\xff'
        0x91f560 ()   // 0x91f560(0x1, 0x0, 0x0, 0x0)
        if (w20 == 1)
        b.lt 0x459610 // likely
        }
        return eax;
    loc_0x4595d0:
        w8 = w20      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x9 = x0 + 1
        w10 = 0x30    // '0'
        w11 = 0x57    // 'W'
         // do {
    loc_0x4595e0:
        w12 = (byte) [x19] + 1 // 0xda
        if (w12 == 0x9f)
        w13 = w12 & 0xf
        csel w14,w11,w10, hi
        if (w13 == 9)
        w12 = w14 + w12,lsr 4
        csel w14,w11,w10, hi
        x8 = x8 - 1
        w13 = w14 + w13
        sturb w12,[x9,-1]
        [x9] + 2 = (byte) w13
        b.ne 0x4595e0 // likely
         // } while (?);
        }
        return eax;
    loc_0x459610:
        [x0 + x21] = (byte) wzr
        (x20, 2) = 3
        x21 = [var_10h] // 0x4
        (x29, 2) = 3
}


/* ===== json_get() @0x459280 ===== */
int fcn.00459280 (int esi, int edx) {
    loc_0x459280:
        x8 = x0       // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg1
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        if !x8 jmp 0x459394 // likely
            
    loc_0x459394:
        0x00459394
         // } else {
    loc_0x45928c:
        [sp, -0x30]! = (x29,2)
        [sp + 0x10] = x21
        [sp, 0x20] = (x20,2)
        x29 = sp      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        x19 = x1      // '\xff\xff\xff\xff\xff\xff\xff\xff' // arg2
        if !x1 jmp 0x459388 // likely
        }
        return eax;
    loc_0x4592a4:
        x21 = [x8 + 0x10] // 0xcf
        if !w2 jmp 0x4592d4 // likely
            
    loc_0x4592d4:
        if !x21 jmp 0x459370 // likely
            
    loc_0x459370:
        // CODE XREF from fcn.00459280 @ 0x4592d0
        x0 = xzr      // '\xff\xff\xff\xff\xff\xff\xff\xff'
        jmp 0x459388
         // do {
    loc_0x459388:
        // CODE XREFS from fcn.00459280 @ 0x45936c, 0x459374, 0x459380
        (x20, 2) = 3
        x21 = [var_10h] // 0x4
        (x29, 2) = 3
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x4592ac
    loc_0x4592b0:
        x20 = [x21 + 0x38] // 0xdc
        if !x20 jmp 0x459378 // unlikely
            
    loc_0x459378:
        if (x20 == 0)
        csel x0,xzr,x21, eq
        jmp 0x459388
    loc_0x00459360: // orphan
             x21 = [x21]              // 0xdc
             x0 = xzr                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
             if x21 jmp 0x4592dc      // likely

    loc_0x004592dc: // orphan
         x10 = [x21 + 0x38]       // 0xdc
         if !x10 jmp 0x459360     // unlikely

    loc_0x0045936c: // orphan
         jmp 0x459388

    loc_0x004592e4: // orphan
         if (x10 == x19)
         b.eq 0x459384            // likely

    loc_0x00459384: // orphan
         x0 = x21                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x004592ec: // orphan
         w9 = (byte) [x19]        // 0xda
         w11 = (byte) [x10]       // 0xd1
         w12 = w9 - 0x5b
         w13 = w9 | 0x20
         w14 = w11 - 0x5b
         if (w12 != 0x1a)
         csel w12,w9,w13, lo
         w13 = w11 | 0x20
         if (w14 != 0x1a)
         csel w13,w11,w13, lo
         if (w12 == w13)
         b.ne 0x459358            // unlikely

    loc_0x00459358: // orphan
         if (w12 == w13)
         b.eq 0x459384            // likely

    loc_0x0045931c: // orphan
         x10 = x10 + 1
         x11 = x8                 // '\xff\xff\xff\xff\xff\xff\xff\xff'

    loc_0x00459328: // orphan
         w9 = (byte) [x11] + 1    // 0xd2
         w13 = (byte) [x10] + 1   // 0xd1
         w12 = w9 - 0x5b
         w14 = w9 | 0x20
         if (w12 != 0x1a)
         w15 = w13 - 0x5b
         csel w12,w9,w14, lo
         w14 = w13 | 0x20
         if (w15 != 0x1a)
         csel w13,w13,w14, lo
         if (w12 == w13)
         b.eq 0x459324            // likely

    loc_0x00459324: // orphan
         if !w9 jmp 0x459384      // likely

    loc_0x004592b8: // orphan
         x0 = x19                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         x1 = x20                 // '\xff\xff\xff\xff\xff\xff\xff\xff'
         sym.imp.strcmp ()
                                  // int strcmp(-1, -1)
         if !w0 jmp 0x459378      // likely

    loc_0x004592c8: // orphan
         x21 = [x21]              // 0xdc
         if x21 jmp 0x4592b0      // likely

    loc_0x004592d0: // orphan
         jmp 0x459370

}

