/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:36:36 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/25 15:06:42 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The atoi() function converts the initial portion of the string 
pointed to by nptr to int. The behavior is the same as strtol(nptr, NULL, 10);
except that atoi() does not detect errors.
RETURN VALUE The converted value or 0 on error.
AND: remember atoi doesn't work the way it was described in C03
*/

#include "libft.h"

int	ft_atoi(char const *nptr)
{
	int	sign;
	int	val;

	sign = 1;
	val = 0;
	while (((*nptr >= 9) && (*nptr <= 13)) || (*nptr == 32))
		nptr++;
	if ((*nptr == 43) || (*nptr == 45))
	{
		if (*nptr == 45)
			sign = -sign;
		nptr++;
	}
	while ((*nptr >= 48) && (*nptr <= 57))
	{
		val = val * 10;
		val += *nptr - 48;
		nptr++;
	}
	val = val * sign;
	return (val);
}
