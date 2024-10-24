/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-r <ide-la-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:20:10 by ide-la-r          #+#    #+#             */
/*   Updated: 2024/10/24 16:26:08 by ide-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *str, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (unsigned char *)str;
	i = 0;
	if (!s && !d)
		return (0);
	if (s < d)
		ft_memcpy(dest, str, n);
	else
	{
		while (n-- > 0)
		{
			*(d++) = *(s++);
		}
	}
	return (dest);
}

/*int main(){
    char hola[] = "Hola mundo!";

    ft_memmove(hola, hola + 3, 6);
    printf("%s\n", hola);
}*/
