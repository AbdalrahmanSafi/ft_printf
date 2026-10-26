/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 21:00:50 by absafi            #+#    #+#             */
/*   Updated: 2026/09/26 21:24:15 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (0);
	last = lst;
	while (last->next)
	{
		last = last->next;
	}
	return (last);
}
/*
#include <stdio.h>

int	main(void)
{
t_list	*lst;
t_list	temp1;
t_list	temp2;

lst = &temp1;
lst->content = "head 1";
temp2.content = "tail";
temp2.next = 0;
lst->next = &temp2;
printf("1: %s\n", (char *) ft_lstlast(lst)->content);
}
*/
