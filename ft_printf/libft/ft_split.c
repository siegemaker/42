/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:57:40 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/25 15:09:52 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1. count ahead how many strings it will be
	the counter checks for changes FROM c, not just how many c there are
2. malloc the array of addresses with sizeof (char *)!!!! and not (char)!!
3. go down the string and count each individual substring and malloc each
I should review this one especially, while I 1shot the logic, the syntax
and concepts were still difficult to grasp at times, let it all sink in well.
*/

#include "libft.h"

static int	ft_split_counter(char const *s, char c)
{
	unsigned int	i;
	int				yes;

	yes = 1;
	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			yes = 1;
		else
		{
			if (yes == 1)
			{
				yes = 0;
				i++;
			}
		}
		s++;
	}
	return (i);
}

static int	ft_split_checkalloc(char **result, unsigned int i)
{
	if (!result[i])
	{
		free(result[i]);
		while (i > 0)
		{
			i--;
			free(result[i]);
		}
		free(result);
		return (0);
	}
	return (1);
}

static int	ft_split_cutlen(char const *s, char c)
{
	unsigned int	cutlen;

	cutlen = 0;
	while (s[cutlen] != '\0' && s[cutlen] != c)
		cutlen++;
	return (cutlen);
}

char	**ft_split(char const *s, char c)
{
	char			**result;
	unsigned int	cutlen;
	unsigned int	count;
	unsigned int	i;

	count = ft_split_counter(s, c);
	result = malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		cutlen = ft_split_cutlen(s, c);
		result[i] = malloc((cutlen + 1) * sizeof(char));
		if (!ft_split_checkalloc(result, i))
			return (NULL);
		ft_strlcpy(result[i], s, cutlen + 1);
		s += cutlen;
		i++;
	}
	result[count] = NULL;
	return (result);
}
