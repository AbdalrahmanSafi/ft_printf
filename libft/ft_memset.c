/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: absafi <absafi@student.42amman.com>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/21 10:25:26 by absafi           #+#    #+#              */
/*   Updated: 2026/10/17 04:01:55 by absafi          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *start, int byte, size_t num)
{
	unsigned char	*char_area_pointer;
	size_t			counter;

	counter = 0;
	char_area_pointer = start;
	while (num > 0)
	{
		char_area_pointer[counter] = (unsigned char) byte;
		num--;
		counter++;
	}
	return (start);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	c1[] = "00000";
char	c2[] = "00000";

printf("original: %s\n", (char *) memset(NULL, '\0', 4));
//printf("mine: %s\n", (char *) ft_memset(NULL, '\0', 4));
return (0);
}
*/
