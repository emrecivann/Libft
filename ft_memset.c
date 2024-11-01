/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrecivan <emrecivan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:03:05 by emrecivan         #+#    #+#             */
/*   Updated: 2024/10/15 13:16:30 by emrecivan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *temp_b;
	temp_b = (unsigned char *)b;

	while (len > 0)
	{
		*(temp_b++) = (unsigned char)c;
		len--;
	}
	return (b);
}
