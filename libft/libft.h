/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:42:12 by esozbalt          #+#    #+#             */
/*   Updated: 2023/12/09 15:29:23 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	ft_strlen(const char *s);

int	ft_isdigit(int c);

int	ft_atoi(const char *str);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(const char *s1);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memset(void *b, int c, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
