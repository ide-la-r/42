/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:58:34 by marvin            #+#    #+#             */
/*   Updated: 2024/11/03 17:58:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    char    *ptr;

    ptr = (char *)str;
    while (*ptr)
    {
        if (*ptr == (unsigned char)c)
            return (ptr);
        ptr++;
    }
    if (c == '\0')
        return (ptr);
    return (NULL);
}
