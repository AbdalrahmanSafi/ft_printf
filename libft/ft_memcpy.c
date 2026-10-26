/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: absafi <absafi@student.42amman.com>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/21 10:10:34 by absafi           #+#    #+#              */
/*   Updated: 2026/10/17 04:02:06 by absafi          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	const unsigned char	*temp_src;
	unsigned char		*temp_dest;

	temp_src = (const unsigned char *) src;
	temp_dest = (unsigned char *) dest;
	while (num > 0)
	{
		*temp_dest = *temp_src;
		temp_dest++;
		temp_src++;
		num--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	src[50] = "La la land";
char	dest[50] = "";

ft_memcpy(dest, src, 4);
printf("mine: %s\n", dest);
memcpy(dest, src, 4);
printf("original: %s\n", dest);
return (0);
}
*/
