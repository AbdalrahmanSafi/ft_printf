/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 22:05:08 by absafi            #+#    #+#             */
/*   Updated: 2026/09/22 10:49:01 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int value)
{
	if (value >= 32 && value <= 126)
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
printf("mine:\n0 %d\n", ft_isprint(0));
printf("32 %d\n", ft_isprint(32));
printf("126 %d\n", ft_isprint(126));
printf("50 %d\n", ft_isprint(50));
printf("127 %d\n", ft_isprint(127));
printf("-1 %d\n", ft_isprint(-1));
printf("original:\n0 %d\n", isprint(0));
printf("32 %d\n", isprint(32));
printf("126 %d\n", isprint(126));
printf("50 %d\n", isprint(50));
printf("127 %d\n", isprint(127));
printf("-1 %d\n", isprint(-1));
return (0);
}
*/
