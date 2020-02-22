/**
 *
 * Release under GPL-3.0.
 * 
 * @file    hal_log.h
 * @brief   
 * @author  gnsyxiang <gnsyxiang@163.com>
 * @date    20/01 2020 17:55
 * @version v0.0.1
 * 
 * @since    note
 * @note     note
 * 
 *     change log:
 *     NO.     Author              Date            Modified
 *     00      zhenquan.qiu        20/01 2020      create the file
 * 
 *     last modified: 20/01 2020 17:55
 */
#ifndef __LIBHAL_INCLUDE_HAL_LOG_H_
#define __LIBHAL_INCLUDE_HAL_LOG_H_

#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_RTT_HAL
#else
#define HalLogD printf
#define HalLogT printf
#define HalLogW printf
#define HalLogE printf
#endif

#ifdef __cplusplus
}
#endif

#endif //__LIBHAL_INCLUDE_HAL_LOG_H_

