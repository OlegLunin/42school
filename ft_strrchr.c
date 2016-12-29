/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:54:00 by olunin            #+#    #+#             */
/*   Updated: 2016/12/06 16:54:02 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*res;
	unsigned int	index;

	index = 0;
	res = NULL;
	if (*str == (char)c)
		res = (char *)str;
	while (*str++)
	{
		if (*str == (char)c)
			res = (char *)str;
	}
	return (res);
}
