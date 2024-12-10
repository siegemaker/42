/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 02:32:05 by mpeters           #+#    #+#             */
/*   Updated: 2024/11/19 15:52:28 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

//main
int		ft_printf(const char *input, ...);
//tools
char	*ft_itoa_base(unsigned long nb, const char *base);
void	ft_putchar_count(int *count, char c);
void	ft_putstr_count(int *count, char *c);
//types
void	ft_print_hex(int *count, unsigned int arg, int upcase);
void	ft_print_int(int *count, int arg);
void	ft_print_pointer(int *count, void *arg);
void	ft_print_unsigned_int(int *count, unsigned int arg);

#endif