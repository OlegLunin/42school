/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 21:20:31 by olunin            #+#    #+#             */
/*   Updated: 2016/12/03 16:51:30 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *temp;
	char *temp1;

	if (!s || !f || !(temp = ft_strdup((char*)s)))
		return (NULL);
	temp1 = temp;
	while (*s)
	{
		*temp = f(*s);
		temp++;
		s++;
	}
	*temp = '\0';
	return (temp1);
}
