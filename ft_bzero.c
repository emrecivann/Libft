/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrecivan <emrecivan@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:11:02 by emrecivan         #+#    #+#             */
/*   Updated: 2024/10/15 13:28:58 by emrecivan        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *temp_ptr;
    temp_ptr = s;

    while (n > 0)
    {
        *temp_ptr++ = 0;
        n--;
    }
}
