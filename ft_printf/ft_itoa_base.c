/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:08:04 by mpeters           #+#    #+#             */
/*   Updated: 2024/11/05 16:12:29 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_itoa_base_zero(const char *base)
{
	char	*str;

	str = ft_calloc(2, sizeof(char));
	str[0] = base[0];
	return (str);
}

char	*ft_itoa_base(unsigned long nb, const char *base)
{
	unsigned int	radixlen;
	char			*str;
	int				digits;
	unsigned long	i;

	i = nb;
	digits = 0;
	radixlen = ft_strlen(base);
	if (nb == 0)
		return (ft_itoa_base_zero(base));
	while (i > 0)
	{
		i = i / radixlen;
		digits++;
	}
	str = ft_calloc((digits + 1), sizeof(char));
	if (!str)
		return (NULL);
	str[digits] = '\0';
	while (nb > 0)
	{
		str[--digits] = base[nb % radixlen];
		nb = nb / radixlen;
	}
	return (str);
}
