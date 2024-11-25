/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-r <ide-la-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:23:18 by marvin            #+#    #+#             */
/*   Updated: 2024/11/25 16:14:16 by ide-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*str)
	{
		if (*str == (unsigned char)c)
			ptr = (char *)str;
		str++;
	}
	if (*str == (unsigned char)c)
		return ((char *)str);
	return (ptr);
}
