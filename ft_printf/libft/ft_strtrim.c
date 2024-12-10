/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:37:37 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/20 19:57:36 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	strlen;
	char			*newstr;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	strlen = ft_strlen(s1);
	if (strlen == 0)
		return (ft_strdup(""));
	while ((ft_strchr(set, s1[strlen - 1])) && strlen > 0)
		strlen--;
	if (strlen == 0)
		return (ft_strdup(""));
	newstr = malloc((strlen + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, s1, strlen + 1);
	newstr[strlen] = '\0';
	return (newstr);
}
