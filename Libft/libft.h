/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-r <ide-la-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:32:59 by ide-la-r          #+#    #+#             */
/*   Updated: 2024/10/21 18:15:26 by ide-la-r         ###   ########.fr       */
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
void			ft_bzero(void *str, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void	        *ft_memmove(void *dest, const void *str, size_t n);
size_t          ft_strlcpy(char *dest, const char *src, size_t n);
size_t          ft_strlcat(char *dest, const char *src, size_t n);
int             ft_toupper(int c);
int             ft_tolower(int c);
char            *ft_strchr(const char *str, int c);
char            *ft_strrchr(const char *str, int c);
int             ft_strncmp(const char *s1, const char *s2, size_t n);
void            *ft_memchr(const void *str, int c, size_t n);
int             ft_memcmp(const void *s1, const void *s2, size_t n);
char            *ft_strnstr(const char *haystack, const char *needle, size_t len);
int             ft_atoi(const char *str);

#endif