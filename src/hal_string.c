/**
 * 
 * Release under GPL-3.0.
 * 
 * @file    hal_string.c
 * @brief   
 * @author  gnsyxiang <gnsyxiang@163.com>
 * @date    22/02 2020 16:32
 * @version v0.0.1
 * 
 * @since    note
 * @note     note
 * 
 *     change log:
 *     NO.     Author              Date            Modified
 *     00      zhenquan.qiu        22/02 2020      create the file
 * 
 *     last modified: 22/02 2020 16:32
 */
#include "config.h"
#include "hal_config.h"

#ifdef HAVE_RTT_HAL
#include <rtthread.h>

hal_int8_t *Hal_strcpy(hal_int8_t *dest, const hal_int8_t *src)
{
    return NULL;
}

hal_int8_t *Hal_strncpy(hal_int8_t *dest, const hal_int8_t *src, size_t n)
{
    return rt_strncpy(dest, src, n);
}

size_t Hal_strlen(const hal_int8_t *s)
{
    return rt_strlen(s);
}
#endif

#ifdef HAVE_LINUX_HAL
#include <string.h>

hal_int8_t *Hal_strcpy(hal_int8_t *dest, const hal_int8_t *src)
{
    return strcpy(dest, src);
}

hal_int8_t *Hal_strncpy(hal_int8_t *dest, const hal_int8_t *src, size_t n)
{
    return strncpy(dest, src, n);
}

size_t Hal_strlen(const hal_int8_t *s)
{
    return strlen(s);
}
#endif
