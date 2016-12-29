/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:18:14 by olunin            #+#    #+#             */
/*   Updated: 2016/12/08 15:32:20 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *tempd;
	unsigned char *temps;

	tempd = (unsigned char *)dst;
	temps = (unsigned char *)src;
	while (n--)
	{
		if (*temps != (unsigned char)c)
		{
			*tempd = *(unsigned char *)temps;
			tempd++;
			temps++;
		}
		else
		{
			*tempd = *(unsigned char *)temps;
			return ((unsigned char *)++tempd);
		}
	}
	return (NULL);
}
