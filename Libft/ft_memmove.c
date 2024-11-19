/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-r <ide-la-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:20:10 by ide-la-r          #+#    #+#             */
/*   Updated: 2024/11/19 19:37:41 by ide-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *str, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)str;
	if (!s && !d)
		return (0);
	if (d < s)
		ft_memcpy(dest, str, n);
	else
	{
		while (n)
		{
			n--;
			((unsigned char *)d)[n] = ((unsigned char *)s)[n];
		}
	}
	return (dest);
}
