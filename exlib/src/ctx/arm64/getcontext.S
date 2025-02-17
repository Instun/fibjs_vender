/*
 * Copyright (c) 2018, 2020 Ariadne Conill <ariadne@dereferenced.org>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * This software is provided 'as is' and without any warranty, express or
 * implied.  In no event shall the authors be liable for any damages arising
 * from the use of this software.
 */

#include "defs.h"

ALIAS(getcontext, ctx_getcontext)
ALIAS(__getcontext, ctx_getcontext)

	.global PROC_NAME(ctx_getcontext);
	.align  2;
	TYPE(ctx_getcontext)
	ENT(ctx_getcontext)
PROC_NAME(ctx_getcontext):
	str	xzr, [x0, #REG_OFFSET(0)]

	/* save GPRs */
	stp	x0, x1,   [x0, #REG_OFFSET(0)]
	stp	x2, x3,   [x0, #REG_OFFSET(2)]
	stp	x4, x5,   [x0, #REG_OFFSET(4)]
	stp	x6, x7,   [x0, #REG_OFFSET(6)]
	stp	x8, x9,   [x0, #REG_OFFSET(8)]
	stp	x10, x11, [x0, #REG_OFFSET(10)]
	stp	x12, x13, [x0, #REG_OFFSET(12)]
	stp	x14, x15, [x0, #REG_OFFSET(14)]
	stp	x16, x17, [x0, #REG_OFFSET(16)]
	stp	x18, x19, [x0, #REG_OFFSET(18)]
	stp	x20, x21, [x0, #REG_OFFSET(20)]
	stp	x22, x23, [x0, #REG_OFFSET(22)]
	stp	x24, x25, [x0, #REG_OFFSET(24)]
	stp	x26, x27, [x0, #REG_OFFSET(26)]
	stp	x28, x29, [x0, #REG_OFFSET(28)]
	str	x30,      [x0, #REG_OFFSET(30)]

	/* save current program counter in link register */
	str	x30, [x0, #PC_OFFSET]

	/* save current stack pointer */
	mov	x2, sp
	str	x2, [x0, #SP_OFFSET]

	/* save pstate */
	str	xzr, [x0, #PSTATE_OFFSET]

	add x2, x0, #FPSIMD_CONTEXT_OFFSET
	stp q8, q9,   [x2, #144]
	stp q10, q11, [x2, #176]
	stp q12, q13, [x2, #208]
	stp q14, q15, [x2, #240]

#ifdef __APPLE__
    mov x8, #68719411200
    movk x8, #49420
    ldrb w9, [x8]

    cmp w9, #1
    b.ne l1

    mrs x8, s3_4_c15_c2_7
    str x8, [x0, #REG_OFFSET(31)]

    b l2
l1:
    cmp w9, #0
    b.eq l2
    cmp w9, #3
    b.gt l2

    mrs x8, s3_6_c15_c1_5
    str x8, [x0, #REG_OFFSET(31)]
l2:
#endif

	mov	x0, #0
	ret
END(ctx_getcontext)
