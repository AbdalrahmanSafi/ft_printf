/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 14:18:58 by absafi            #+#    #+#             */
/*   Updated: 2026/10/09 11:23:05 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s1_size;
	size_t	s2_size;

	if (!s1 || !s2)
		return (0);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	result = malloc(s1_size + s2_size + 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s1, s1_size + 1);
	ft_strlcpy(&result[s1_size], s2, s2_size + 1);
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
char	*temp = ft_strjoin("", "lall");

printf("%s", temp);
free(temp);
return (0);
}
*/
