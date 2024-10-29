/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:11:27 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 13:11:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t  dest_len;
    size_t  src_len;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    if (dest_len >= n)
        return (src_len + n);
    size_t  space_left;
    size_t  i;

    space_left = n - dest_len -1;
    i = 0;
    while (i < space_left && src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest_len + src_len);
}
