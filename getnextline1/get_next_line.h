/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esozbalt <esozbalt@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:38:11 by esozbalt          #+#    #+#             */
/*   Updated: 2024/02/29 15:38:13 by esozbalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char		*get_next_line(int fd);

char		*ft_read(int fd, char *buffer);

char		*ft_line(char *buffer);

char		*ft_newline(char *buffer);

int			ft_strlen(char *s);

char		*ft_strchr(char *s, char c);

char		*ft_strjoin(char *s1, char *s2);

#endif
