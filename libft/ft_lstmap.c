/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absafi <absafi@student.42amman.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 03:21:17 by absafi            #+#    #+#             */
/*   Updated: 2026/10/09 11:46:54 by absafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp_new;
	void	*content;

	if (!lst || !f || !del)
		return (0);
	new = 0;
	while (lst)
	{
		content = f(lst->content);
		temp_new = ft_lstnew(content);
		if (!temp_new)
		{
			del(content);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, temp_new);
		lst = lst->next;
	}
	return (new);
}
