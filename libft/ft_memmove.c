/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: absafi <absafi@student.42amman.com>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/21 16:02:39 by absafi           #+#    #+#              */
/*   Updated: 2026/10/17 04:02:04 by absafi          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	const unsigned char	*temp_src;
	unsigned char		*temp_dest;

	if (num == 0)
		return (dest);
	if ((unsigned char *) dest < (unsigned char *) src)
	{
		return (ft_memcpy(dest, src, num));
	}
	temp_dest = ((unsigned char *) dest) + num - 1;
	temp_src = ((const unsigned char *) src) + num - 1;
	while (num > 0)
	{
		*temp_dest = *temp_src;
		temp_dest--;
		temp_src--;
		num--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	src[50] = "Abdelrahman";
char	src2[50] = "Abde";

printf("mine: %s\n", (char *) ft_memmove(&src[1], (const char *) & src[4], 4));
printf("original: %s\n", (char *) memmove(&src[1], (const char *) & src[4], 4));
return (0);
}
*/
