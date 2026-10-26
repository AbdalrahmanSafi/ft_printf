/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 22:08:48 by absafi            #+#    #+#             */
/*   Updated: 2026/10/09 20:19:32 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	counter;
	char			*buffer;
	size_t			buf_size;

	if (!s || !f)
		return (0);
	buf_size = ft_strlen(s);
	buffer = malloc(buf_size + 1);
	if (!buffer)
		return (0);
	counter = 0;
	while (s[counter])
	{
		buffer[counter] = f(counter, s[counter]);
		counter++;
	}
	buffer[counter] = '\0';
	return (buffer);
}

/*
#include <stdio.h>

char	adding_ind_to_char(unsigned int ind, char character)
{
return (character + ind);
}

int	main(void)
{
char	(*ptr)(unsigned int, char) = adding_ind_to_char;
char	*str = ft_strmapi("AAAA", ptr);

printf("%s", str);
free(str);
return (0);
}
*/
