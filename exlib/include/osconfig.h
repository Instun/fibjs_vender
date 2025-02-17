/*
 *  osconfig.h
 *  Created on: 2012-3-2
 *
 *  Copyright (c) 2012 by Leo Hoo
 *  lion@9465.net
 */

#pragma once

#if defined(_WIN32) || defined(_WIN64) || defined(WIN32) || defined(WIN64)
#ifndef Windows
#define Windows
#endif
#endif

#if defined(linux) || defined(__linux) || defined(__linux__)
#ifndef Linux
#define Linux
#endif
#endif

#if defined(__NetBSD__)
#ifndef NetBSD
#define NetBSD
#endif
#endif

#if defined(__OpenBSD__)
#ifndef OpenBSD
#define OpenBSD
#endif
#endif

#if (defined(__FreeBSD__) || defined(__DragonFly__) || defined(__FreeBSD_kernel__)) && !defined(FREEBSD)
#ifndef FreeBSD
#define FreeBSD
#endif
#endif

#if defined(sun) || defined(__sun)
#ifndef Solaris
#define Solaris
#endif
#endif

#ifdef __APPLE__
#ifndef Darwin
#define Darwin
#endif
#if __is_target_os(ios)
#ifndef iPhone
#define iPhone
#endif
#endif
#endif

#if defined(i386) || defined(__i386__) || defined(_M_IX86) || defined(_X86_) || defined(x86)
#ifndef ia32
#define ia32
#define ARCH_BITS 32
#endif
#endif

#if defined(__amd64) || defined(__x86_64__) || defined(_M_X64)
#ifndef x64
#define x64
#define ARCH_BITS 64
#endif
#endif

#if defined(__ia64) || defined(__ia64__) || defined(_M_IA64)
#ifndef IA64
#define IA64
#define ARCH_BITS 64
#endif
#endif

#if defined(__AARCH64EL__) || defined(_M_ARM64)
#ifndef arm64
#define arm64
#define ARCH_BITS 64
#endif
#endif

#if defined(__ARMEL__) || defined(_M_ARM)
#ifndef arm
#define arm
#define ARCH_BITS 32
#endif
#endif

#if (defined(__MIPSEB__) || defined(__MIPSEL__))
#if defined(__mips64)
#ifndef mips64
#define mips64
#define ARCH_BITS 64
#endif
#ifdef mips
#undef mips
#endif
#else
#ifndef mips
#define mips
#define ARCH_BITS 32
#endif
#endif
#endif

#if defined(__ppc__) || defined(__ppc) || defined(__powerpc__)        \
    || defined(_ARCH_COM) || defined(_ARCH_PWR) || defined(_ARCH_PPC) \
    || defined(_M_MPPC) || defined(_M_PPC)
#if defined(__ppc64__) || defined(__powerpc64__) || defined(__64BIT__)
#ifndef ppc64
#define ppc64
#define ARCH_BITS 64
#endif
#else
#ifndef ppc
#define ppc
#define ARCH_BITS 32
#endif
#endif
#endif

#if defined(__riscv) || defined(__riscv__)
#if __riscv_xlen == 64
#ifndef riscv64
#define riscv64
#define ARCH_BITS 64
#endif
#else
#ifndef riscv32
#define riscv32
#define ARCH_BITS 32
#endif
#endif
#endif

#ifdef __loongarch64
#ifndef loong64
#define loong64
#define ARCH_BITS 64
#endif
#endif