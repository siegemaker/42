/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:29:41 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/20 22:34:46 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
accidently made it in reverse at first, remember that when looking back at this
str[len - 1 + neg] has the - 1 cuz we start at the end, remember?
also neg 0/1 is a little "out there" compared to sign -1/1 but it has a dual
purpose as it also decides whether 1 extra space needs to be allocated for the
minus symbol, compared to 0 extra space needing to be allocated for a pos number
moved the while to a separate function, idk if it looks weird, just
struggles with the normie 25 line rule
*/

#include "libft.h"

static int	ft_itoa_len(long n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_itoa_fill(char *str, long ln, unsigned int len, int neg)
{
	while (len > 0)
	{
		str[len - 1 + neg] = (ln % 10) + 48;
		ln = ln / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	long			ln;
	unsigned int	len;
	int				neg;
	char			*str;

	ln = n;
	neg = 0;
	if (ln < 0)
	{
		ln = -1 * ln;
		neg = 1;
	}
	len = ft_itoa_len(ln);
	str = malloc((len + 1 + neg) * sizeof(char));
	if (!str)
		return (NULL);
	str[len + neg] = '\0';
	if (ln == 0)
		str[0] = '0';
	else
		ft_itoa_fill(str, ln, len, neg);
	if (neg == 1)
		str[0] = '-';
	return (str);
}
