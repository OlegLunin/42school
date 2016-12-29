/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:05:21 by olunin            #+#    #+#             */
/*   Updated: 2016/12/06 17:05:52 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		count;
	int		char_numb;
	char	*temp_ptr;
	char	temp;

	count = 0;
	char_numb = 0;
	temp_ptr = str;
	while (*temp_ptr != '\0')
	{
		char_numb++;
		temp_ptr++;
	}
	while (char_numb > count)
	{
		temp = *(str + char_numb - 1);
		*(str + char_numb - 1) = *(str + count);
		*(str + count) = temp;
		count++;
		char_numb--;
	}
	return (str);
}
