/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:44:48 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 22:44:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char  *ptr1;
	const char  *ptr2;
	size_t  i;

	ptr1 = (const char *)s1;
	ptr2 = (const char *)s2;
    while (i < n)
    {
        if (ptr1[i] != ptr2[i])
            return ((unsigned char)ptr1[i] - (unsigned char)ptr2[i]);
        i++;
    }
    return (NULL);
}
