/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:10:07 by mpeters           #+#    #+#             */
/*   Updated: 2024/11/19 15:51:36 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned_int(int *count, unsigned int arg)
{
	char	*str;

	str = ft_itoa_base(arg, "0123456789");
	if (!str)
		return ;
	ft_putstr_count(count, str);
	free(str);
}
