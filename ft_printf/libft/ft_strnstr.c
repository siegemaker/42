/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:11:06 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/25 15:09:50 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
b being the str to find stuff in
l being the str to find
*/
#include "libft.h"

char	*ft_strnstr(char const *b, char const *l, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*l == '\0')
		return ((char *)b);
	while ((b[i] != '\0') && (i < len))
	{
		j = 0;
		if (b[i] == l[j])
		{
			while ((i + j < len) && (b[i + j] == l[j]) && (l[j] != '\0'))
				j++;
			if (l[j] == '\0')
				return ((char *)&b[i]);
		}
		i++;
	}
	return (NULL);
}
