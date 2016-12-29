/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:14:30 by olunin            #+#    #+#             */
/*   Updated: 2016/12/21 16:31:30 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	list_to_left(t_list *list)
{
	int i;
	int minx;
	int miny;

	while (list)
	{
		minx = 10;
		miny = 10;
		i = -1;
		while (++i < 4)
		{
			if (list->x[i] < minx)
				minx = list->x[i];
			if (list->y[i] < miny)
				miny = list->y[i];
		}
		i = -1;
		while (++i < 4)
		{
			list->x[i] -= minx;
			list->y[i] -= miny;
		}
		list = list->next;
	}
}
