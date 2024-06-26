/* SPDX-License-Identifier: Apache-2.0 */

#ifndef __G_SYS_RPROC_H__
#define __G_SYS_RPROC_H__

#ifdef __cplusplus
extern "C" {
#endif// __cplusplus

#if defined(CONFIG_CHIP_SUN8IW21)
    #include <sun8iw21/sys-rproc.h>
#elif defined(CONFIG_CHIP_SUN8IW20)
    #include <sun8iw20/sys-rproc.h>
#elif defined(CONFIG_CHIP_SUN20IW1)
    #include <sun20iw1/sys-rproc.h>
#elif defined(CONFIG_CHIP_SUN55IW3)
    #include <sun55iw3/sys-rproc.h>
#else
    #error "Unsupported chip"
#endif

#ifdef __cplusplus
}
#endif // __cplusplus

#endif// __G_SYS_RPROC_H__