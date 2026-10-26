/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: absafi <absafi@student.42amman.com>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/22 01:15:40 by absafi           #+#    #+#              */
/*   Updated: 2026/10/17 04:31:38 by absafi          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dst_size;
	size_t	src_size;

	dst_size = 0;
	while (dst_size < dsize && dst[dst_size])
		dst_size++;
	src_size = ft_strlen(src);
	if (dsize <= dst_size)
		return (dsize + src_size);
	ft_strlcpy(&dst[dst_size], src, dsize - dst_size);
	return (dst_size + src_size);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	dest1[50] = "Ahmad";
char	dest2[50] = "Ahmad";
int		len1 = ft_strlcat(dest1, " gone girl", 10);
int		len2 = strlcat(dest2, " gone girl", 10);

printf("mine: dest= %s length: %u\n", dest1, len1);
printf("original: dest= %s length: %u\n", dest2, len2);
return (0);
}
*/
