/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 13:31:51 by absafi            #+#    #+#             */
/*   Updated: 2026/10/02 16:55:49 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
t_list	*lst;
t_list	temp;
t_list	new;

lst = &temp;
lst->content = "head 1";
lst->next = NULL;
new.content = "head 2";
new.next = NULL;
ft_lstadd_front(&lst, &new);
printf("head: %s\n", (char *) lst->content);
printf("next: %s\n", (char *) lst->next->content);
return (0);
}
*/
