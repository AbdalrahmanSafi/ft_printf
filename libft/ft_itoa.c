/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 18:18:11 by absafi            #+#    #+#             */
/*   Updated: 2026/10/02 16:45:01 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_res(char **dest, int n, size_t size)
{
	(*dest)[size] = '\0';
	size--;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_memmove(*dest, "-2147483648", size + 1);
			return ;
		}
		(*dest)[0] = '-';
		n *= -1;
	}
	if (n == 0)
		(*dest)[0] = '0';
	while (n)
	{
		(*dest)[size] = (n % 10) + '0';
		n /= 10;
		size--;
	}
}

static size_t	res_size(int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
		counter++;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
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
/*
#include <stdio.h>

int	main(void)
{
printf("50: %s\n", ft_itoa(50));
printf("0: %s\n", ft_itoa(0));
printf("-50: %s\n", ft_itoa(-50));
printf("-2147483648: %s\n", ft_itoa(-2147483648));
printf("2147483647: %s\n", ft_itoa(2147483647));
return (0);
}
*/
