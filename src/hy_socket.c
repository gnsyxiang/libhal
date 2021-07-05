/**
 * 
 * Release under GPLv-3.0.
 * 
 * @file    hy_socket.c
 * @brief   
 * @author  gnsyxiang <gnsyxiang@163.com>
 * @date    01/07 2021 18:56
 * @version v0.0.1
 * 
 * @since    note
 * @note     note
 * 
 *     change log:
 *     NO.     Author              Date            Modified
 *     00      zhenquan.qiu        01/07 2021      create the file
 * 
 *     last modified: 01/07 2021 18:56
 */
#include <stdio.h>

#include "hy_socket.h"
#include "hy_socket_wrapper.h"

#include "hy_log.h"

#define ALONE_DEBUG 1

void *HySocketCreate(HySocketConfig_t *socket_config)
{
    if (!socket_config) {
        LOGE("the param is NULL \n");
        return NULL;
    }

    return socket_create(socket_config);
}

void HySocketDestroy(void *handle)
{
    if (!handle) {
        LOGE("the param is NULL \n");
        return ;
    }

    socket_destroy((socket_context_t *)handle);
}

int HySocketRead(void *handle, char *buf, uint32_t len)
{
    if (!handle || !buf) {
        LOGE("the param is NULL \n");
        return -1;
    }

    return socket_read((socket_context_t *)handle, buf, len);
}

int HySocketWrite(void *handle, const char *buf, uint32_t len)
{
    if (!handle || !buf) {
        LOGE("the param is NULL \n");
        return -1;
    }

    return socket_write((socket_context_t *)handle, buf, len);
}
