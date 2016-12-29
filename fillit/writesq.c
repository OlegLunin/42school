/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writesq.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anutsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 19:35:20 by anutsa            #+#    #+#             */
/*   Updated: 2016/12/21 16:23:47 by anutsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

char	**ft_erase(char **sq, char c)
{
	int	i;
	int	j;

	i = 0;
	while (sq[i])
	{
		j = 0;
		while (sq[i][j])
		{
			if (sq[i][j] == c)
				sq[i][j] = '.';
			j++;
		}
		i++;
	}
	return (sq);
}

int		ft_fit(t_list *lst, char **sq, int y, int x)
{
	int		i;
	int		j;
	int		k;
	int		size;

	size = ft_strlen(sq[0]);
	j = y;
	i = x;
	k = 0;
	while (i >= 0 && i < size &&
			j >= 0 && j < size &&
			sq[i][j] == '.' && k < 4)
	{
		sq[i][j] = lst->c;
		if (++k >= 4)
			break ;
		j += (lst->x[k] - lst->x[k - 1]);
		i += (lst->y[k] - lst->y[k - 1]);
	}
	return (k);
}

char	**ft_fillsq(t_list *lst, char **sq)
{
	int		i[3];

	i[0] = -1;
	i[2] = 0;
	while (sq[++i[0]])
	{
		i[1] = -1;
		while (sq[i[0]][++i[1]])
		{
			if (sq[i[0]][i[1]] == '.' && (i[2] = ft_fit(lst, sq, i[1], i[0])))
			{
				if (i[2] != 4 && !(i[2] = 0))
					ft_erase(sq, lst->c);
				else if (i[2] == 4 && lst->next != NULL)
				{
					if (ft_fillsq(lst->next, sq))
						return (sq);
					ft_erase(sq, lst->c);
				}
				else
					return (sq);
			}
		}
	}
	return (0);
}
