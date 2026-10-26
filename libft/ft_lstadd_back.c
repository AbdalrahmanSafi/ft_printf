/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 21:25:32 by absafi            #+#    #+#             */
/*   Updated: 2026/10/02 16:57:51 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	last = ft_lstlast(*lst);
	if (!last)
	{
		*lst = new;
		return ;
	}
	last->next = new;
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
ft_lstadd_back(&lst, &temp2);
printf("1: %s\n", (char *) ft_lstlast(lst)->content);
}
*/
