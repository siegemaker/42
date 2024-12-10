/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:37:26 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/25 15:09:51 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s)
{
	size_t	n;
	char	*ms;

	n = ft_strlen(s);
	ms = malloc((n + 1) * sizeof(char));
	if (!ms)
		return (NULL);
	ft_strlcpy(ms, s, n + 1);
	return (ms);
}
