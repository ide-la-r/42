/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:08:54 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 13:08:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t  i;

    i = 0;
    if (n > 0)
    {
        while (src[i] != '\0' && i < (n - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    while (src[i])
        i++;
    return(i);
}
