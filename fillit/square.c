/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anutsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 15:55:47 by anutsa            #+#    #+#             */
/*   Updated: 2016/12/21 17:23:52 by anutsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb == 0)
		return (0);
	while (i * i < nb)
		i++;
	if (nb == i * i)
		return (i);
	else
		return (0);
}

char	*ft_strnew(int size)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(size + 1);
	if (str)
	{
		while (size-- > 0)
			str[i++] = '.';
		str[i] = '\0';
		return (str);
	}
	else
		return (NULL);
}

char	**ft_square(t_list *lst, int lstsize)
{
	char	**sq;
	int		i;
	int		size1;
	int		size;

	size1 = lstsize * 4;
	while (ft_sqrt(size1) == 0)
		size1++;
	size = ft_sqrt(size1);
	if (!(sq = (char **)malloc(sizeof(char *) * (size + 1))))
		return (0);
	i = 0;
	while (i < size)
	{
		if (!(sq[i++] = ft_strnew(size)))
			return (0);
	}
	sq[i] = 0;
	i = 0;
	while (!(ft_fillsq(lst, sq)))
	{
		if ((sq = ft_square(lst, ++lstsize)))
			return (sq);
	}
	return (sq);
}
