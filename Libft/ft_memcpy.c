/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-r <ide-la-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:01:07 by ide-la-r          #+#    #+#             */
/*   Updated: 2024/10/24 16:14:28 by ide-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;

	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (!dest && !src)
		return (dest);
	while (n-- > 0)
		*(d++) = *(s++);
	return (dest);
}
