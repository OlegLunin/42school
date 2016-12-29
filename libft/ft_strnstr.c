/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:58:00 by olunin            #+#    #+#             */
/*   Updated: 2016/12/06 16:58:02 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (*big == '\0' && *little == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i] == little[j] && big[i] != '\0' && little[j] != '\0')
		{
			i++;
			j++;
		}
		if (little[j] == '\0' && i <= len)
			return ((char *)big + i - j);
		else
			i -= j;
		i++;
	}
	return (0);
}
