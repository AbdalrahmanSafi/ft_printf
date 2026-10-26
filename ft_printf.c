/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 22:40:05 by absafi            #+#    #+#             */
/*   Updated: 2026/10/25 14:50:54 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_in_set(char c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'x' || c == 'X')
		return (1);
	else if (c == 'p' || c == '%' || c == 'u')
		return (1);
	return (0);
}

static int	parser(va_list args, char character)
{
	if (character == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (character == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (character == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (character == 'd' || character == 'i')
		return (ft_put_decimal(va_arg(args, int)));
	if (character == 'u')
		return (ft_put_unsigned_decimal(va_arg(args, unsigned int)));
	if (character == 'x')
		return (ft_putlower_hex(va_arg(args, unsigned int)));
	if (character == 'X')
		return (ft_putcharupper_hex(va_arg(args, unsigned int)));
	return (ft_putchar('%'));
}

int	print_token(char **str, va_list args)
{
	int	write_value;

	if (**str == '%' && is_in_set(*(*str + 1)))
	{
		write_value = parser(args, *(*str + 1));
		if (write_value == -1)
			return (-1);
		(*str)++;
	}
	else
	{
		write_value = ft_putchar(**str);
		if (write_value == -1)
			return (-1);
	}
	return (write_value);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		counter;
	int		write_value;

	counter = 0;
	write_value = 0;
	if (!str)
		return (0);
	va_start(args, str);
	while (*str)
	{
		write_value = print_token((char **) & str, args);
		if (write_value == -1)
		{
			va_end(args);
			return (-1);
		}
		counter += write_value;
		str++;
	}
	va_end(args);
	return (counter);
}
