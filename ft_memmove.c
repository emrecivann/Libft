/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrecivan <emrecivan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:15:18 by emrecivan         #+#    #+#             */
/*   Updated: 2024/10/16 15:30:44 by emrecivan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *dst_ptr;
    char *src_ptr;

    if (!dst || !src)
        return (NULL);

    dst_ptr = (char *)dst;
    src_ptr = (char *)src;

    if (dst_ptr > src_ptr)
    {
        dst_ptr = dst_ptr + len - 1;
        src_ptr = src_ptr + len - 1;
        while (len-- > 0)
        {
            *dst_ptr-- = *src_ptr--;
        }
    }
    else
    {
        while (len-- > 0)
        {
            *dst_ptr++ = *src_ptr++;
        }
    }
    return dst;
}