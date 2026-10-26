/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:02:44 by absafi            #+#    #+#             */
/*   Updated: 2026/09/22 11:07:53 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int value)
{
	if (value >= 'A' && value <= 'Z')
	{
		value += 32;
	}
	return (value);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
printf("%c", ft_tolower('C'));
printf("%c", ft_tolower('\n'));
printf("%c", tolower('c'));
return (0);
}
*/
