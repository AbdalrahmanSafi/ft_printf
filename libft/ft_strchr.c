/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:15:37 by absafi            #+#    #+#             */
/*   Updated: 2026/10/09 19:37:28 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int goal_char)
{
	while ((char)*src != (char) goal_char)
	{
		if (*src == '\0')
			return (0);
		src++;
	}
	return ((char *) src);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
printf("%s\n", ft_strchr("42 Amman", '7'));
printf("%s\n", strchr("42 Amman", '7'));
return (0);
}
*/
