/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrecivan <emrecivan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:25:33 by emrecivan         #+#    #+#             */
/*   Updated: 2024/10/15 15:14:29 by emrecivan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *temp_dst;
	unsigned char *temp_src;
	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;

	while (n > 0)
	{
		*temp_dst++ = *temp_src++;
	}
	return (dst);
}
