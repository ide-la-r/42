/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:09:13 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 13:09:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    
    if(*needle == '\0')
    {
        return((char*)haystack);
    }
    i = ft_strlen(needle);
    while (*haystack && len >= i)
    {
        if (*haystack == *needle && ft_strncmp(haystack, needle, i) == 0)
            return ((char*)haystack);
        haystack++;
        len--;
    }
    return(NULL);
}
