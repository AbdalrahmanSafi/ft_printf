/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 22:35:07 by absafi            #+#    #+#             */
/*   Updated: 2026/10/09 19:38:12 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	counter;

	if (!s || !f)
		return ;
	counter = 0;
	while (s[counter])
	{
		f(counter, &s[counter]);
		counter++;
	}
}
/*
#include <stdio.h>

void	print_ind_and_char(unsigned int ind, char *character)
{
printf("index: %d => character: %c\n", ind, *character);
}

int	main(void)
{
void	(*ptr)(unsigned int, char *) = print_ind_and_char;
ft_striteri("AAAA", ptr);
return (0);
}
*/
