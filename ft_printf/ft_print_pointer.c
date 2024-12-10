/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:11:05 by mpeters           #+#    #+#             */
/*   Updated: 2024/11/19 15:44:37 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_pointer(int *count, void *arg)
{
	char	*str;

	if (arg == NULL)
	{
		ft_putstr_count(count, "(nil)");
		return ;
	}
	str = ft_itoa_base((unsigned long)arg, "0123456789abcdef");
	if (!str)
		return ;
	ft_putstr_count(count, "0x");
	ft_putstr_count(count, str);
	free(str);
}
