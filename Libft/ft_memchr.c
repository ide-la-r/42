/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:07:04 by marvin            #+#    #+#             */
/*   Updated: 2024/11/04 21:07:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char   *ptr;
    size_t  i;

    ptr = (unsigned char*)str;
    i = 0;
    while (i < n)
    {
        if (*ptr == (unsigned char)c)
            return ((void *)ptr);
        ptr++;
        i++;
    }
    return (NULL);
}
