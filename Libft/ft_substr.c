/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:44:02 by marvin            #+#    #+#             */
/*   Updated: 2024/11/13 17:44:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  size;

    if (!s)
        return (NULL);
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    size = ft_strlen(s + start);
    if (size < len)
        len = size;
    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return (NULL);
    ft_strlcpy(substr, s + start, len + 1);
    return (substr);
}
