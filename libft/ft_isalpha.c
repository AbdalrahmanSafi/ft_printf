/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 21:25:35 by absafi            #+#    #+#             */
/*   Updated: 2026/09/22 10:51:07 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int value)
{
	if (value >= 'a' && value <= 'z')
	{
		return (1);
	}
	if (value >= 'A' && value <= 'Z')
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
printf("Mine:\n5 %d\n", ft_isalpha(5));
printf("A %d\n", ft_isalpha('A'));
printf("1950 %d\n", ft_isalpha(1950));
printf("-5 %d\n", ft_isalpha(-5));
printf("Original:\n5 %d\n", isalpha(5));
printf("A %d\n", isalpha('A'));
printf("1950 %d\n", isalpha(1950));
printf("-5 %d\n", isalpha(-5));
}
*/
