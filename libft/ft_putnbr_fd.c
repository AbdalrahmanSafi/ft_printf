/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 23:34:11 by absafi            #+#    #+#             */
/*   Updated: 2026/09/25 23:54:28 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		n %= 10;
	}
	ft_putchar_fd(n + '0', fd);
}
/*
int	main(void)
{
ft_putnbr_fd(0, 1);
ft_putchar_fd('\n', 1);
ft_putnbr_fd(1, 1);
ft_putchar_fd('\n', 1);
ft_putnbr_fd(10, 1);
ft_putchar_fd('\n', 1);
ft_putnbr_fd(-1, 1);
ft_putchar_fd('\n', 1);
ft_putnbr_fd(-2147483648, 1);
ft_putchar_fd('\n', 1);
return (0);
}
*/
