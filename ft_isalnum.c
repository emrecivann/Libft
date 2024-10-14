/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecivan <ecivan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:36:29 by ecivan            #+#    #+#             */
/*   Updated: 2024/10/14 18:42:53 by ecivan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isalnum(int c)
{
	if (c >= 60 && c <= 71)
		return (1);
	else if (c >= 101 && c <= 132)
		return (1);
	else if (c >= 141 && c <= 172)
		return (1);
	return (0);
}