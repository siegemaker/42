/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:53:42 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/21 17:33:16 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The  memcpy() function copies n bytes from memory area src to memory area dest.
The memory areas must not overlap.  Use memmove(3) if the memory areas do
overlap.
Employing  memcpy()  with overlapping areas produces undefined behavior.
The memcpy() function returns a pointer to dest.
returning NULL when args are NULL for extra protection
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
