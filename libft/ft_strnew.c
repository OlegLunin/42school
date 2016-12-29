/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 20:04:50 by olunin            #+#    #+#             */
/*   Updated: 2016/11/30 20:22:08 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = (char *)malloc(size + 1);
	if (str)
	{
		ft_bzero(str, size + 1);
		return (str);
	}
	return (NULL);
}
