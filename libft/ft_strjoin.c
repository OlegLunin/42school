/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:41:30 by olunin            #+#    #+#             */
/*   Updated: 2016/12/03 17:35:22 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const
		*s2)
{
	char *temp;
	char *temp1;

	if (s1 && s2 && (temp = malloc(ft_strlen((char *)s1)
					+ ft_strlen((char *)s2) + 1)))
	{
		temp1 = temp;
		while (*s1)
		{
			*temp = *s1;
			temp++;
			s1++;
		}
		while (*s2)
		{
			*temp = *s2;
			temp++;
			s2++;
		}
		*temp = '\0';
		return (temp1);
	}
	return (NULL);
}
