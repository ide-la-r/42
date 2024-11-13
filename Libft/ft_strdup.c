/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:27:14 by marvin            #+#    #+#             */
/*   Updated: 2024/11/13 17:27:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *ptr;
    size_t  len;

    len = ft_strlen(s) + 1;
    ptr = (char *)malloc(sizeof(*ptr) * len);
    if (!ptr)
        return(NULL);
    return ((char *)ft_memcpy(ptr, s, len));
}
