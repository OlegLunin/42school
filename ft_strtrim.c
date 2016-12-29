/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 14:52:13 by olunin            #+#    #+#             */
/*   Updated: 2016/12/06 16:43:47 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*retemp(void)
{
	char	*temp;

	temp = (char *)malloc(1);
	*temp = '\0';
	return (temp);
}

static char	*retemp1(char *temp[2], size_t end_start[2], char const *s)
{
	temp[1] = (char *)s;
	while (*temp[1])
		temp[1]++;
	while (--temp[1] && (*temp[1] == ' ' ||
				*temp[1] == '\t' || *temp[1] == '\n'))
		end_start[0]++;
	if (end_start[0] == ft_strlen((char *)s) && ((end_start[1] = 0) == 0))
		return (retemp());
	s--;
	while ((++s && (*s == ' ' || *s == '\t' || *s == '\n') && *(s + 1)))
		(end_start[1])++;
	if ((temp[0] = (char *)malloc(ft_strlen((char *)s) - end_start[0] + 1)))
	{
		temp[1] = temp[0];
		while (*(s + end_start[0]))
			if ((*(temp[0]) = *s) && s++ && (temp[0])++)
				;
		*temp[0] = '\0';
		return (temp[1]);
	}
	return (NULL);
}

char		*ft_strtrim(char const *s)
{
	char	*temp[2];
	size_t	end_start[2];

	if (s && ((end_start[0] = 0) == 0))
		return (retemp1(temp, end_start, s));
	return (NULL);
}
