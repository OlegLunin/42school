/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 21:36:44 by olunin            #+#    #+#             */
/*   Updated: 2016/12/03 17:39:02 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s,
		char (*f)(unsigned int, char))
{
	char	*temp;
	char	*temp1;
	int		i;

	i = 0;
	if (!s || !f || !(temp = ft_strdup((char*)s)))
		return (NULL);
	temp1 = temp;
	while (*s)
	{
		*temp = f(i, *s);
		temp++;
		s++;
		i++;
	}
	*temp = '\0';
	return (temp1);
}
