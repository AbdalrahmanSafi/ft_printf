/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: absafi <absafi@student.42amman.com>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/23 12:51:28 by absafi           #+#    #+#              */
/*   Updated: 2026/10/17 03:50:28 by absafi          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				counter;
	const unsigned char	*ptr;

	counter = 0;
	ptr = (const unsigned char *) s;
	while (counter < n)
	{
		if (*ptr == (unsigned char) c)
		{
			return ((void *) ptr);
		}
		ptr++;
		counter++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	src[50] = "La la land";

printf("mine: %s\n", (char *) ft_memchr(NULL, 'x', 8));
printf("original: %s\n", (char *) memchr(NULL, 'x', 8));
return (0);
}
*/
