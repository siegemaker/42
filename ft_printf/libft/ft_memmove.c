/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:09:40 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/19 21:19:46 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
The memmove() function copies n bytes from memory area src to memory area dest. 
The memory areas may overlap: copying takes place as though the bytes in
src are first copied into a temporary array that does not overlap src or dest,
and the bytes are then copied from the temporary array to dest.
The memmove() function returns a pointer to dest. 
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ud;
	const unsigned char	*us;

	ud = (unsigned char *)dest;
	us = (const unsigned char *)src;
	if ((ud == us) || (n == 0))
		return (dest);
	if (ud < us)
		while (n--)
			*ud++ = *us++;
	else
	{
		ud += n;
		us += n;
		while (n--)
		{
			ud--;
			us--;
			*(ud) = *(us);
		}
	}
	return (dest);
}
