/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:10:23 by mpeters           #+#    #+#             */
/*   Updated: 2024/11/19 15:44:29 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_int(int *count, int arg)
{
	char	*str;

	str = ft_itoa(arg);
	if (!str)
		return ;
	ft_putstr_count(count, str);
	free(str);
}
