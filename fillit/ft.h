/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anutsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:09:12 by anutsa            #+#    #+#             */
/*   Updated: 2016/12/22 15:49:29 by anutsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUF_SIZE 21
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct		s_list
{
	int				x[4];
	int				y[4];
	char			c;
	struct s_list	*next;
}					t_list;
void				ft_putchar(char c);
void				ft_putstr(char const *s);
t_list				*ft_create_elem(int *x, int *y, char c);
void				ft_list_push_back(t_list **begin_list,
					int *x, int *y, char c);
void				list_to_left(t_list *list);
char				**ft_fillsq(t_list *lst, char **sq);
char				**ft_square(t_list *lst, int lstsize);
size_t				ft_strlen(const char *str);
void				ft_puttab(char const **tab);
t_list				*create_my_list_mfk(int *fd, t_list *tetromino,
					int *x, int *y);
int					ft_validtet(char *buf, int *x);
#endif
