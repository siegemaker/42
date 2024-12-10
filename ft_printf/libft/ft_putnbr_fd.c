/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:31:08 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/21 17:16:04 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
using itoa was a bad idea, rewriting most of itoa in this was also a bad idea
classic case of me not seeing the obvious. Thank god for second opinions.
done recursively until a single digit. Didn't think about that at all.
Also didn't think about using the other put_fd functions lmao.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;
	char	c;

	ln = n;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln = -ln;
	}
	if (ln >= 10)
	{
		ft_putnbr_fd(ln / 10, fd);
		c = (ln % 10) + 48;
	}
	else
		c = ln + 48;
	ft_putchar_fd(c, fd);
}
