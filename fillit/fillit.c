/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anutsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:35:29 by anutsa            #+#    #+#             */
/*   Updated: 2016/12/22 18:04:27 by anutsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

t_list	*ft_create_elem(int *x, int *y, char c)
{
	t_list	*elem;
	int		index;

	index = 0;
	elem = malloc(sizeof(t_list));
	if (elem)
	{
		elem->next = NULL;
		while (index < 4)
		{
			elem->y[index] = y[index];
			elem->x[index] = x[index];
			index++;
		}
		elem->c = c;
	}
	return (elem);
}

int		ft_val(char *buf, int i)
{
	int		k;

	k = 0;
	if (buf[i - 1] == '#')
		k++;
	if (buf[i + 1] == '#')
		k++;
	if (buf[i - 5] == '#')
		k++;
	if (buf[i + 5] == '#')
		k++;
	return (k);
}

int		ft_validtet(char *buf, int *x)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if (((!(k = 0)) && buf[4] != '\n') || buf[9] != '\n' || buf[14] != '\n'
			|| buf[19] != '\n' || (buf[20] != '\0' && buf[20] != '\n'))
		return (0);
	while (i < 20)
	{
		if (i % 5 != 4 && buf[i] != '.' && buf[i] != '#')
			return (0);
		if (buf[i] == '#')
		{
			k += ft_val(buf, i);
			j++;
		}
		i++;
	}
	if (!(j == 4 && (k == 6 || k == 8)))
		return (0);
	if (buf[20] == '\0')
		x[4] = 1;
	return (1);
}

void	start(int fd, int *x, int *y, t_list *tetromino)
{
	int		tetnum;
	int		m;
	char	**result;

	result = 0;
	tetnum = 0;
	m = 0;
	if (!(tetromino = create_my_list_mfk(&fd, tetromino, x, y)))
		return ;
	close(fd);
	list_to_left(tetromino);
	result = ft_square(tetromino, tetnum);
	while (result[m])
	{
		ft_putstr(result[m++]);
		ft_putchar('\n');
	}
}

int		main(int ac, char **av)
{
	int		fd;
	int		tetnum;
	int		x[5];
	int		y[4];
	t_list	*tetromino;

	x[4] = 0;
	tetnum = 0;
	tetromino = 0;
	if (ac != 2)
		ft_putstr("usage: fillit source_file\n");
	else
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("open() error\n");
			return (1);
		}
		start(fd, x, y, tetromino);
	}
	return (0);
}
