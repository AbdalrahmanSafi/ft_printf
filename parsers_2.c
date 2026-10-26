/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsers_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:15:12 by absafi            #+#    #+#             */
/*   Updated: 2026/10/25 14:54:16 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	covert_int_hex(unsigned int n, char *base)
{
	int	write_value;
	int	counter;

	counter = 0;
	if (n >= 16)
		counter += covert_int_hex(n / 16, base);
	if (counter < 0)
		return (-2147483648);
	write_value = ft_putchar(base[n % 16]);
	if (write_value == -1)
		return (-2147483648);
	return (write_value + counter);
}

static int	covert_uintptr_t_hex(uintptr_t n, char *base)
{
	int	write_value;
	int	counter;

	counter = 0;
	if (n >= 16)
		counter += covert_uintptr_t_hex(n / 16, base);
	if (counter < 0)
		return (-2147483648);
	write_value = ft_putchar(base[n % 16]);
	if (write_value == -1)
		return (-2147483648);
	return (write_value + counter);
}

int	ft_putlower_hex(unsigned int n)
{
	int	write_value;

	write_value = covert_int_hex(n, "0123456789abcdef");
	if (write_value < 0)
		return (-1);
	return (write_value);
}

int	ft_putcharupper_hex(unsigned int n)
{
	int	write_value;

	write_value = covert_int_hex(n, "0123456789ABCDEF");
	if (write_value < 0)
		return (-1);
	return (write_value);
}

int	ft_putptr(void *ptr)
{
	int	count;
	int	w_val;

	if (!ptr)
		return (ft_putstr("(nil)"));
	count = ft_putstr("0x");
	if (count == -1)
		return (-1);
	w_val = covert_uintptr_t_hex((uintptr_t) ptr, "0123456789abcdef");
	if (w_val < 0)
		return (-1);
	return (count + w_val);
}
