/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 14:28:27 by olunin            #+#    #+#             */
/*   Updated: 2016/12/06 14:28:29 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*rt;
	t_list	*dst_elem;

	if (!lst)
		return (0);
	if (!(rt = ft_lstnew(lst->content, lst->content_size)))
		return (0);
	rt = f(rt);
	lst = lst->next;
	dst_elem = rt;
	while (lst)
	{
		if (!(dst_elem->next =
					ft_lstnew(lst->content, lst->content_size)))
			return (0);
		dst_elem->next = f(dst_elem->next);
		dst_elem = dst_elem->next;
		lst = lst->next;
	}
	return (rt);
}
