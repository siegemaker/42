/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 21:02:32 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/25 15:09:51 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//again the meme with unsigned char, really have to keep it in mind.
//made a mistake of (unsigned char *)s instead of (unsigned char)*s
//dereferenced value, not the pointer.

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == uc)
			return ((char *)s);
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return (NULL);
}
