"li t0, 16\n\t"
"addi %[lw_cnt], %[lw_cnt], 1\n\t"
"loop:\n\t"
"addi %[others_cnt], %[others_cnt], 1\n\t"
"lw t1, 0(%[h])\n\t"
"addi %[lw_cnt], %[lw_cnt], 1\n\t"
"lw t2, 0(%[x])\n\t"
"addi %[lw_cnt], %[lw_cnt], 1\n\t"
"add t1, t1, t2\n\t"
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
"sw t1, 0(%[y])\n\t"
"addi %[sw_cnt], %[sw_cnt], 1\n\t"
"addi %[h], %[h], 2\n\t"
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
"addi %[x], %[x], 2\n\t"
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
"addi %[y], %[y], 2\n\t"
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
"addi t0, t0, -1\n\t"
"addi %[arith_cnt], %[arith_cnt], 1\n\t"
"bnez t0, loop\n\t"