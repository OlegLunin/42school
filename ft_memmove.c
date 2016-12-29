/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:13:10 by olunin            #+#    #+#             */
/*   Updated: 2016/12/06 15:46:21 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	long int		a;
	unsigned int	index;

	index = 0;
	a = len;
	if ((unsigned long int)dst - (unsigned long int)src
			>= (unsigned long int)len)
	{
		while (--a >= 0)
		{
			*(char *)(dst + index) = *(char *)(src + index);
			index++;
		}
	}
	else
	{
		while (--a >= 0)
			*(char *)(dst + a) = *(char*)(src + a);
	}
	return (dst);
}
