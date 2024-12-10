/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:59:29 by mpeters           #+#    #+#             */
/*   Updated: 2024/12/07 00:46:05 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	l;

	l = 0;
	while (src[l] != '\0')
		l++;
	if (size == 0)
		return (l);
	i = 0;
	while ((i < size - 1) && (src[i] != '\0'))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char const *s)
{
	size_t	n;
	char	*ms;

	if (!s)
		return (0);
	n = ft_strlen(s);
	ms = malloc((n + 1) * sizeof(char));
	if (!ms)
		return (NULL);
	ft_strlcpy(ms, s, n + 1);
	return (ms);
}

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	unsigned int	srclen;
	unsigned int	destlen;
	unsigned int	i;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (size == 0)
		return (srclen);
	if (size <= destlen)
		return (size + srclen);
	while ((destlen + i + 1 < size) && (src[i] != '\0'))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (srclen + destlen);
}

char	*gnl_strjoin(char **s1, char **s2)
{
	size_t	len1;
	size_t	len2;
	char	*s3;

	len1 = ft_strlen(*s1);
	len2 = ft_strlen(*s2);
	s3 = malloc((len1 + len2 + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, *s1, len1 + 1);
	ft_strlcat(s3, *s2, len1 + len2 + 1);
	free(*s1);
	*s1 = NULL;
	free(*s2);
	*s2 = NULL;
	return (s3);
}
