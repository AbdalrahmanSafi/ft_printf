/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 18:50:56 by absafi            #+#    #+#             */
/*   Updated: 2026/10/09 19:35:02 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	val_and_free(char **array, size_t index)
{
	if (array[index])
		return (1);
	while (index > 0)
	{
		index--;
		free(array[index]);
	}
	free(array);
	return (0);
}

static size_t	subs_num(const char *src, char del)
{
	size_t	counter;

	counter = 0;
	while (*src)
	{
		while (*src && *src == del)
			src++;
		if (*src)
		{
			counter++;
			while (*src && *src != del)
				src++;
		}
	}
	return (counter);
}

static char	*split_next(const char *from, const char *to)
{
	char	*result;
	size_t	len;

	len = to - from;
	result = malloc(len + 1);
	if (!result)
		return (0);
	ft_strlcpy(result, from, len + 1);
	return (result);
}

static char	*get_next(char **from, char del)
{
	char	*next;

	while (**from && **from == del)
		(*from)++;
	next = *from;
	while (*next && *next != del)
		next++;
	return (next);
}

char	**ft_split(char const *s, char c)
{
	size_t	counter;
	size_t	subs;
	char	*from;
	char	*next;
	char	**result;

	if (!s)
		return (0);
	subs = subs_num(s, c);
	result = malloc((subs + 1) * sizeof(char *));
	if (!result)
		return (0);
	counter = 0;
	from = (char *) s;
	while (counter < subs)
	{
		next = get_next(&from, c);
		result[counter] = split_next(from, next);
		if (!val_and_free(result, counter))
			return (0);
		counter++;
		from = next;
	}
	result[counter] = 0;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
char	**ch = ft_split("  b d dd l   ", ' ');

printf("%s\n", ch[0]);
printf("%s\n", ch[1]);
printf("%s\n", ch[2]);
printf("%s\n", ch[3]);
}
*/
