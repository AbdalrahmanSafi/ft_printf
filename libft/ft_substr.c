/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 11:55:38 by absafi            #+#    #+#             */
/*   Updated: 2026/10/09 20:31:31 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	src_size;

	if (!s)
		return (0);
	src_size = ft_strlen(s);
	if (start > src_size)
	{
		buffer = malloc(1);
		if (!buffer)
			return (0);
		*buffer = 0;
		return (buffer);
	}
	if (len > src_size - start)
		len = src_size - start;
	buffer = malloc(len + 1);
	if (!buffer)
	{
		return (0);
	}
	ft_strlcpy(buffer, &s[start], len + 1);
	return (buffer);
}
/*
#include <stdio.h>

int	main(void)
{
char	src[] = "";

printf("%s\n", ft_substr(src, 2, 3));
return (0);
}
*/
