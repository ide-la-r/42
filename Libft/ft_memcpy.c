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

#include <stdio.h>

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

/*int main() {

    char source[] = "hola, mundo!";
    char destination[20];

    ft_memcpy(destination, source, 9);
    destination[9] = "\0";//If you don't put this, it will take the last random one, but it's not that it's bad, it's just like that.

    printf("Origen: %s\n", source);
    printf("Destino: %s\n", destination);
}*/