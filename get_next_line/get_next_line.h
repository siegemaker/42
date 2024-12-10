/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:59:16 by mpeters           #+#    #+#             */
/*   Updated: 2024/12/07 00:36:23 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 256
# endif

# include <fcntl.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>		//printf

char	*get_next_line(int fd);
char	*cut_line(char **str, char **overflow);
int		find_newline(const char *str);
char	*read_line(int fd, int nl, char **line, char **overflow);

size_t	ft_strlcpy(char *dst, char const *src, size_t size);
char	*ft_strdup(const char *s);
char	*gnl_strjoin(char **s1, char **s2);
size_t	ft_strlen(const char *str);

#endif