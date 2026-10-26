/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 22:58:26 by absafi            #+#    #+#             */
/*   Updated: 2026/09/25 23:13:14 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
ft_putchar_fd('b', -1);
ft_putchar_fd('a', 0);
ft_putchar_fd('b', 1);
ft_putchar_fd('c', 2);
ft_putchar_fd('d', 3);
}
*/
