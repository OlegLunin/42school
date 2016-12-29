/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:07:18 by olunin            #+#    #+#             */
/*   Updated: 2016/12/04 12:43:26 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *tempd;
	char *temps;

	tempd = (char *)dst;
	temps = (char *)src;
	while (n--)
	{
		*tempd = *temps;
		tempd++;
		temps++;
	}
	return (dst);
}
