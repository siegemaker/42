/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 23:16:42 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/25 17:02:57 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	cnt;

	cnt = 0;
	while (s[cnt] != '\0')
		cnt++;
	while (cnt >= 0)
	{
		if (s[cnt] == (char)c)
			return ((char *)&s[cnt]);
		cnt--;
	}
	return (NULL);
}
