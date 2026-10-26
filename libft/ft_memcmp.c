/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: absafi <absafi@student.42amman.com>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/23 14:47:15 by absafi           #+#    #+#              */
/*   Updated: 2026/10/17 03:55:52 by absafi          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				count;
	const unsigned char	*t_s1;
	const unsigned char	*t_s2;

	if (n == 0)
	{
		return (0);
	}
	t_s1 = (const unsigned char *) s1;
	t_s2 = (const unsigned char *) s2;
	count = 0;
	while (count < n)
	{
		if (t_s1[count] != t_s2[count])
			return ((unsigned char) t_s1[count] - (unsigned char) t_s2[count]);
		count++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	str1[50] = "aLa la land";
char	str2[50] = "La la land";

printf("mine: %d\n", ft_memcmp(str1, str2, 3));
printf("original: %d\n", memcmp(str1, str2, 3));
return (0);
}
*/
