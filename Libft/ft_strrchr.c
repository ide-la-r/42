/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:23:18 by marvin            #+#    #+#             */
/*   Updated: 2024/11/03 18:23:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    char    *ptr;
    char    *ptr2;

    ptr = (char *)str;
    while (*ptr)
    {
        if (*ptr == (unsigned char)c)
            ptr2 = ptr;
        ptr++;
    }
    if (c == '\0')
        return (ptr);
    return (NULL);        
}
