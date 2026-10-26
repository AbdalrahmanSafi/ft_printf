/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:20:05 by absafi            #+#    #+#             */
/*   Updated: 2026/10/09 20:23:14 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b_ind;
	size_t	l_ind;

	if (!*little)
		return ((char *) big);
	b_ind = 0;
	while (b_ind < len && big[b_ind])
	{
		l_ind = 0;
		while ((b_ind + l_ind) < len && little[l_ind]
			&& big[b_ind + l_ind] == little[l_ind])
		{
			l_ind++;
		}
		if (!little[l_ind])
			return ((char *) & big[b_ind]);
		b_ind++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
char	str1[50] = "lax";
char	str2[50] = "la la";

printf("mine: %s\n", ft_strnstr(str1, str2, 15));
printf("original: %s\n", strnstr(str1, str2, 15));
return (0);
}
*/
