/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 01:49:48 by absafi            #+#    #+#             */
/*   Updated: 2026/10/09 11:30:24 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char	str1[50] = "La la land";
char	str2[50] = "La la land";

ft_bzero(NULL, 4);
bzero(NULL, 4);
printf("mine: %c\n", str1[4]);
printf("original: %c\n", str2[4]);
return (0);
}
*/
