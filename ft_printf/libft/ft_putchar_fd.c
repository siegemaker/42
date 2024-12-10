/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeters <mpeters@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:06:05 by mpeters           #+#    #+#             */
/*   Updated: 2024/10/21 16:29:15 by mpeters          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
take some time and let the concept of file descriptors sink in, not entirely
sure how to use them properly yet, but I think I know what the function wants.
Remember to do a lil deep dive and ask around later.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

// int		main(void)
// {
// 	ft_putchar_fd('a', 1);
// 	ft_putchar_fd('\t', 1);
// 	ft_putchar_fd('Z', 1);
// 	ft_putchar_fd(31, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putchar_fd('F', 2);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }