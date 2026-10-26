/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:39:21 by absafi            #+#    #+#             */
/*   Updated: 2026/09/22 10:48:37 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int value)
{
	if (value >= 'a' && value <= 'z')
	{
		value -= 32;
	}
	return (value);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
printf("%c", ft_toupper('C'));
printf("%c", ft_toupper('\0'));
printf("%c", toupper('c'));
return (0);
}
*/
