/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_worker.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 18:08:19 by olunin            #+#    #+#             */
/*   Updated: 2016/12/22 18:04:54 by anutsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	write_my_x_y_mfk(int *x, int *y, char *buf)
{
	int index;
	int tetcount;

	tetcount = 0;
	index = 0;
	while (buf[index])
	{
		if (buf[index] == '#')
		{
			x[tetcount] = index % 5;
			y[tetcount] = index / 5;
			tetcount++;
		}
		index++;
	}
}

t_list	*create_my_list_mfk(int *fd, t_list *tetromino, int *x, int *y)
{
	int		ret;
	int		tetnum;
	char	buf[BUF_SIZE + 1];
	char	c;

	tetnum = 0;
	c = 'A';
	while ((ret = read(*fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		if (ft_validtet(buf, x) == 0)
			tetnum = 27;
		write_my_x_y_mfk(x, y, buf);
		ft_list_push_back(&tetromino, x, y, c);
		if ((c++) && tetnum++ > 26)
			break ;
	}
	if (x[4] == 0 || tetnum > 26)
	{
		ft_putstr("error\n");
		return (0);
	}
	return (tetromino);
}
