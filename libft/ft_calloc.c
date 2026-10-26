/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 21:26:12 by absafi            #+#    #+#             */
/*   Updated: 2026/10/09 11:38:19 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*cal_buf;
	size_t			size_max;

	size_max = (size_t) - 1;
	if (!n || !size)
		return (malloc(0));
	if (n > size_max / size)
		return (0);
	cal_buf = (unsigned char *) malloc(n * size);
	if (!cal_buf)
	{
		return (0);
	}
	ft_bzero(cal_buf, n * size);
	return (cal_buf);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
void	*original;
void	*mine;

original = calloc(500, 2);
mine = ft_calloc(500, 2);
pritnf("original: %d", original);
free(original);
free(mine);
return (0);
}
*/
