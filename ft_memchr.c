/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:00:49 by olunin            #+#    #+#             */
/*   Updated: 2016/12/06 15:45:25 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{
		if (*(unsigned char *)(s + index) == (unsigned char)c)
			return ((void *)(s + index));
		index++;
	}
	return (NULL);
}
