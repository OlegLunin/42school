/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:31:25 by olunin            #+#    #+#             */
/*   Updated: 2016/12/03 17:34:10 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s,
		unsigned int start, size_t len)
{
	char *temp;
	char *temp1;

	if (s && *s && (temp = malloc(len + 1)))
	{
		temp1 = temp;
		while (start--)
			s++;
		while (len--)
		{
			*temp = *s;
			temp++;
			s++;
		}
		*temp = '\0';
		return (temp1);
	}
	return (NULL);
}
