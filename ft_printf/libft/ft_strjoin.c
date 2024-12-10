/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:38:33 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/21 17:35:15 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
new string s3, calculate size needed, malloc dat
strlcpy to move the first bit in the new space,
strlcat to append the second in there too
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*s3;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = malloc((len1 + len2 + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, len1 + 1);
	ft_strlcat(s3, s2, len1 + len2 + 1);
	return (s3);
}
