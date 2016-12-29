/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:33:30 by olunin            #+#    #+#             */
/*   Updated: 2016/12/21 16:30:51 by anutsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_list_push_back(t_list **begin_list, int *x, int *y, char c)
{
	t_list *new_elem;

	new_elem = ft_create_elem(x, y, c);
	if (!(*begin_list))
	{
		*begin_list = new_elem;
		return ;
	}
	while ((*begin_list)->next)
		begin_list = &(*begin_list)->next;
	(*begin_list)->next = new_elem;
}
