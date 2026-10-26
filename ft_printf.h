/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_printf.h                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: absafi <absafi@student.42amman.com>       #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/18 08:43:32 by absafi           #+#    #+#              */
/*   Updated: 2026/10/26 09:41:46 by absafi          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putptr(void *ptr);
int		ft_put_decimal(int n);
int		ft_put_unsigned_decimal(unsigned int n);
int		ft_putlower_hex(unsigned int n);
int		ft_putcharupper_hex(unsigned int n);
char	*ft_ulltoa(unsigned long long n);
#endif
