/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-r <ide-la-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:01:07 by ide-la-r          #+#    #+#             */
/*   Updated: 2024/10/21 18:14:17 by ide-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	s = (unsigned char) *src;
	d = (unsigned char) *dest;
	i = 0;
	if (dest == src || n == 0)
	{
		return (dest);
	}
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}


/*
char *s = "hola mundo";
char *p;

p = s;		-> p = "hola mundo";
*p = *s;		->  p = "h";

*p = s; esto no se puede

char e = s
char q = d
char d = d

char *i = e, q , d; -> sdd

char **z;  z[] = *z		z[1]
int i = [][];

*/