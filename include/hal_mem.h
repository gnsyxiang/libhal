/**
 *
 * Release under GPL-3.0.
 * 
 * @file    hal_mem.h
 * @brief   
 * @author  gnsyxiang <gnsyxiang@163.com>
 * @date    20/01 2020 17:50
 * @version v0.0.1
 * 
 * @since    note
 * @note     note
 * 
 *     change log:
 *     NO.     Author              Date            Modified
 *     00      zhenquan.qiu        20/01 2020      create the file
 * 
 *     last modified: 20/01 2020 17:50
 */
#ifndef __LIBHAL_INCLUDE_HAL_MEM_H_
#define __LIBHAL_INCLUDE_HAL_MEM_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "hal_type.h"

void *Hal_malloc(size_t size);
void Hal_free(void *ptr);
void *Hal_calloc(size_t nmemb, size_t size);
void *Hal_realloc(void *ptr, size_t size);
void *Hal_memset(void *s, int c, size_t n);

#ifdef __cplusplus
}
#endif

#endif //__LIBHAL_INCLUDE_HAL_MEM_H_

