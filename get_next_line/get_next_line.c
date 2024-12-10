/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:59:08 by mpeters           #+#    #+#             */
/*   Updated: 2024/12/09 09:38:44 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_newline(const char *str)
{
	int	i;

	if (str == NULL)
		return (-1);
	i = 0;
	while (str[i] != '\n')
	{
		if (str[i] == '\0')
			return (-1);
		i++;
	}
	return (i);
}

char	*cut_line(char **str, char **overflow)
{
	char	*newline;
	int		i;

	i = 0;
	while ((*str)[i] != '\n')
		i++;
	newline = malloc(sizeof(char) * (i + 2));
	if (!newline)
		return (NULL);
	ft_strlcpy(newline, *str, i + 2);
	free(*overflow);
	*overflow = NULL;
	if ((*str)[i] == '\n')
		i++;
	if ((*str)[i] != '\0')
		*overflow = ft_strdup(&(*str)[i]);
	free(*str);
	return (newline);
}

char	*read_line(int fd, int nl, char **line, char **overflow)
{
	char	*buffer;
	int		charsread;

	charsread = 1;
	while ((charsread > 0) && (nl < 0))
	{
		buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		charsread = read(fd, buffer, BUFFER_SIZE);
		if (charsread == -1)
		{
			free(buffer);
			free(*overflow);
			free(*line);
			return (NULL);
		}
		buffer[charsread] = '\0';
		nl = find_newline(buffer);
		if (nl >= 0)
			buffer = cut_line(&buffer, overflow);
		if (*line == NULL)
			*line = ft_strdup("");
		*line = gnl_strjoin(line, &buffer);
	}
	return (*line);
}

char	*get_next_line(int fd)
{
	static char	*overflow = NULL;
	char		*line;
	int			nl;

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (NULL);
	line = ft_strdup(overflow);
	free(overflow);
	overflow = NULL;
	nl = find_newline(line);
	if (nl >= 0)
		line = cut_line(&line, &overflow);
	else
		line = read_line(fd, nl, &line, &overflow);
	if ((line == NULL) || (*line == '\0'))
	{
		free(line);
		return (NULL);
	}
	return (line);
}
