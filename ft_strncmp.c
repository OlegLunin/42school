/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:39:00 by olunin            #+#    #+#             */
/*   Updated: 2016/12/08 15:39:02 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	index = 0;
	while (index < n && (*(s2 + index) || *(s1 + index)))
	{
		if (index < n && *((unsigned char*)s2 + index) ==
				*((unsigned char *)s1 + index))
			index++;
		else
			return (*((unsigned char *)s1 + index) -
					*((unsigned char *)s2 + index));
	}
	return (0);
}
