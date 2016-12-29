/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olunin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 10:45:03 by olunin            #+#    #+#             */
/*   Updated: 2016/12/03 16:38:53 by olunin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, const char *src, int nb)
{
	char *ret;

	ret = dest;
	while (*dest)
		dest++;
	while (nb--)
		if (!(*dest++ = *src++))
			return (ret);
	*dest = 0;
	return (ret);
}
