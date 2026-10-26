/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: absafi <absafi@student.42amman.com>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/24 15:04:05 by absafi           #+#    #+#              */
/*   Updated: 2026/10/17 04:15:09 by absafi          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(const char *set, char current_char)
{
	size_t	counter;

	counter = 0;
	while (set[counter])
	{
		if (set[counter] == current_char)
		{
			return (1);
		}
		counter++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	src_count;
	size_t	start;
	char	*buffer;

	src_count = 0;
	if (!s1 || !set)
		return (0);
	while (s1[src_count] && is_in_set(set, s1[src_count]))
		src_count++;
	start = src_count;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	src_count = ft_strlen(s1) - 1;
	while (start < src_count && is_in_set(set, s1[src_count]))
		src_count--;
	buffer = malloc(src_count - start + 2);
	if (!buffer)
		return (0);
	ft_strlcpy(buffer, &s1[start], (src_count - start + 2));
	return (buffer);
}

/*

#include <stdio.h>

int	main(void)
{
char	*buffer;

buffer = ft_strtrim("anng\nan lao 2\nann", "ann");
printf("%s\n", buffer);
free(buffer);
return (0);
}
*/
