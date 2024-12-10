/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:23:09 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/25 15:09:51 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_strlcat_strlen(char const	*s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	unsigned int	srclen;
	unsigned int	destlen;
	unsigned int	i;

	i = 0;
	srclen = ft_strlcat_strlen(src);
	destlen = ft_strlcat_strlen(dest);
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
