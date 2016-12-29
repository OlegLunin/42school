/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:33:57 by olunin            #+#    #+#             */
/*   Updated: 2016/12/03 16:19:40 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *dest;

	dest = malloc(ft_strlen(src) + 1);
	if (!(dest))
		return (0);
	ft_strcpy(dest, src);
	return (dest);
}
