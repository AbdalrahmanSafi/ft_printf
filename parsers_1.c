/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsers_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:37:05 by absafi            #+#    #+#             */
/*   Updated: 2026/10/25 11:51:41 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	write_value;
	int	counter;

	counter = 0;
	write_value = 0;
	if (!s)
	{
		return (write(1, "(null)", 6));
	}
	while (*s)
	{
		write_value = ft_putchar(*s);
		if (write_value == -1)
			return (-1);
		counter += write_value;
		s++;
	}
	return (counter);
}

int	ft_put_decimal(int n)
{
	char	*str;
	int		write_value;

	str = ft_itoa(n);
	if (!str)
		return (-1);
	write_value = ft_putstr(str);
	free(str);
	return (write_value);
}

int	ft_put_unsigned_decimal(unsigned int n)
{
	char	*str;
	int		write_value;

	str = ft_ulltoa((unsigned long long) n);
	if (!str)
		return (-1);
	write_value = ft_putstr(str);
	free(str);
	return (write_value);
}
