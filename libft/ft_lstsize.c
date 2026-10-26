/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 13:57:47 by absafi            #+#    #+#             */
/*   Updated: 2026/10/09 11:48:17 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	length;
	t_list			*temp;

	temp = lst;
	length = 0;
	while (temp)
	{
		length++;
		temp = temp->next;
	}
	return (length);
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
printf("1: %d\n", ft_lstsize(lst));
new.content = "head 2";
new.next = NULL;
ft_lstadd_front(&lst, &new);
printf("2: %d\n", ft_lstsize(lst));
return (0);
}
*/
