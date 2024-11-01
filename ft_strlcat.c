/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrecivan <emrecivan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:24:39 by emrecivan         #+#    #+#             */
/*   Updated: 2024/10/17 13:22:03 by emrecivan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    size_t dst_len;
    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);

    if (dst_len >= dstsize)
        dst_len = dstsize;
    if (dst_len == dstsize)
        return (dstsize + src_len);
    if (src_len < dstsize - dst_len)
        /* we used ft_memcpy again, since it works directly on memory
         * addresses, we can offset the pointer of dst by dst_len so our
         * dst pointer is now set at the end of dst, then we tell ft_memcpy to
         * copy the content of src there for a maximum of src_len + 1
         * character
         */
        ft_memcpy(dst + dst_len, src, src_len + 1);
    else
    {
        /* in this case, we do the same thing as above, we offset the dst
         * pointer by dst_len and then we copy src there
         * this time, we copy dstsize - dst_len - 1 character
         */
        ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
        /* as with ft_strlcpy, we then NUL-terminate the string */
        dst[dstsize - 1] = '\0';
    }
    /* finally, we return the original length of src + dst */
    return (dst_len + src_len);
}