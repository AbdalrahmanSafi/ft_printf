/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:22:55 by absafi            #+#    #+#             */
/*   Updated: 2026/10/17 08:48:36 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int goal_char)
{
	size_t	size;

	size = ft_strlen(src);
	while ((char) src[size] != (char) goal_char)
	{
		if (!size)
			return (0);
		size--;
	}
	return ((char *) & src[size]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
printf("%s\n", ft_strrchr("42 Amman", '\0'));
printf("%s\n", strrchr("42 Amman", '\0'));
return (0);
}
*/
