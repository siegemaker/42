/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:07:48 by mpeters           #+#    #+#             */
/*   Updated: 2024/11/19 15:44:24 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(int *count, unsigned int arg, int upcase)
{
	char	*str;

	if (upcase)
		str = ft_itoa_base(arg, "0123456789ABCDEF");
	else
		str = ft_itoa_base(arg, "0123456789abcdef");
	if (!str)
		return ;
	ft_putstr_count(count, str);
	free(str);
}
