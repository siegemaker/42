/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 00:49:02 by mpeters           #+#    #+#             */
/*   Updated: 2024/11/19 16:04:09 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_count(int *count, char c)
{
	ssize_t	ret;

	ret = write(1, &c, 1);
	if (ret == -1)
	{
		*count = -1;
		return ;
	}
	*count += 1;
}

void	ft_putstr_count(int *count, char *c)
{
	if (c == NULL)
	{
		ft_putstr_count(count, "(null)");
		return ;
	}
	while (*c)
	{
		ft_putchar_count(count, *c);
		if (*count == -1)
			return ;
		c++;
	}
}

static void	ft_process_arg(int *count, const char *input, va_list args)
{
	if (*input == 'c')
		ft_putchar_count(count, va_arg(args, int));
	if (*input == 's')
		ft_putstr_count(count, va_arg(args, char *));
	if (*input == 'p')
		ft_print_pointer(count, va_arg(args, void *));
	if ((*input == 'd') || (*input == 'i'))
		ft_print_int(count, va_arg(args, int));
	if (*input == 'u')
		ft_print_unsigned_int(count, va_arg(args, unsigned int));
	if (*input == 'x')
		ft_print_hex(count, va_arg(args, unsigned int), 0);
	if (*input == 'X')
		ft_print_hex(count, va_arg(args, unsigned int), 1);
	if (*input == '%')
		ft_putchar_count(count, '%');
}

int	ft_printf(const char *input, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start (args, input);
	while (*input != '\0')
	{
		if (*input == '%')
		{
			input++;
			ft_process_arg(&count, input, args);
		}
		else
			ft_putchar_count(&count, *input);
		if (count == -1)
			return (-1);
		input++;
	}
	va_end(args);
	return (count);
}
