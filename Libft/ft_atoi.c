/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:30:25 by marvin            #+#    #+#             */
/*   Updated: 2024/11/05 14:30:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int  ft_isspace(char c)
{
    return (c == ' ' || c == '\f' || c == '\n' || c == '\r'
        || c == '\t' || c == '\v');
}

int ft_atoi(const char *str)
{
    size_t  i;
    int sign;
    int res;

    i = 0;
    res = 0;
    sign = 1;
    while (ft_isspace(str[i]))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}
