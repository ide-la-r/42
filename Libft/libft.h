/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-r <ide-la-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:32:59 by ide-la-r          #+#    #+#             */
/*   Updated: 2024/09/24 16:37:35 by ide-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *c);
void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *str, size_t n);ccv

#endif