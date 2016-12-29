/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 15:22:36 by olunin            #+#    #+#             */
/*   Updated: 2016/12/06 15:44:24 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content,
		size_t content_size)
{
	t_list *list;

	if ((list = (t_list *)malloc(sizeof(t_list))))
	{
		if (content == NULL)
		{
			list->content = NULL;
			list->content_size = 0;
			list->next = NULL;
			return (list);
		}
		else
		{
			list->content = ft_memcpy(ft_memalloc(content_size), content,
					content_size);
			list->content_size = content_size;
			list->next = NULL;
			return (list);
		}
	}
	return (NULL);
}
