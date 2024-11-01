/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrecivan <emrecivan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:35:02 by emrecivan         #+#    #+#             */
/*   Updated: 2024/10/17 10:21:06 by emrecivan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    const char *src_ptr;
    size_t counter;
    src_ptr = src;
    counter = 0;

    while (*src_ptr++)
    {
        counter++;
    }
    if (dstsize == 0)
        return counter;
    while (dstsize > 1 && *src)
    {
        *dst++ = *src++;
        dstsize--;
    }
    *dst = '\0';
    return counter;
}