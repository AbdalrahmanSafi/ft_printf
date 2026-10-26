/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 10:56:31 by absafi            #+#    #+#             */
/*   Updated: 2026/10/25 11:44:39 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	fill_res(char **dest, unsigned long long n, size_t size)
{
	(*dest)[size] = '\0';
	size--;
	if (n == 0)
		(*dest)[0] = '0';
	while (n)
	{
		(*dest)[size] = (n % 10) + '0';
		n /= 10;
		size--;
	}
}

static size_t	res_size(unsigned long long n)
{
	size_t	counter;

	counter = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_ulltoa(unsigned long long n)
{
	size_t	size;
	char	*result;

	size = res_size(n);
	result = malloc(size + 1);
	if (!result)
		return (0);
	fill_res(&result, n, size);
	return (result);
}
