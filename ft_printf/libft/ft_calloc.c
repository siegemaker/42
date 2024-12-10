/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:55:55 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/22 16:33:37 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
If nmemb or size is 0, then calloc() returns either NULL, 
or a unique pointer value that can later  be  successfully
passed  to  free()
Can just use bzero here instead of a loop that makes it all 0
currently returns NULL if nmemb or size are 0, different testers and people
have differing opinions, but my manual says both are ok. will check the man
at a 42 computer monday
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*m;

	if ((nmemb == 0) || (size == 0))
	{
		m = malloc(0);
		if (!m)
			return (NULL);
		return (m);
	}
	m = malloc(size * nmemb);
	if (!m)
		return (NULL);
	ft_bzero(m, size * nmemb);
	return (m);
}
