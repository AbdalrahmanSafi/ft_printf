/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 23:26:16 by absafi            #+#    #+#             */
/*   Updated: 2026/10/09 22:47:43 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int	main(void)
{
ft_putstr_fd("Ramie", -1);
ft_putstr_fd("Ahmad", 0);
ft_putstr_fd("Khalid", 1);
ft_putstr_fd("42", 3);
return (0);
}
*/
