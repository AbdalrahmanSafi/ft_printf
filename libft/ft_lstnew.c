/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 13:00:52 by absafi            #+#    #+#             */
/*   Updated: 2026/10/09 22:28:27 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
	{
		return (0);
	}
	node->content = content;
	node->next = 0;
	return (node);
}
/*
#include <stdio.h>

int	main(void)
{
t_list	*node = ft_lstnew("head");

node->next = ft_lstnew("tail");
free(node->next);
free(node);
return (0);
}
*/
