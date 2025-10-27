/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 00:03:43 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/27 00:19:22 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*tem;

	if (!lst || !del)
		return ;
	list = *lst;
	while (list)
	{
		del(list->content);
		tem = list->next;
		free(list);
		list = tem;
	}
	*lst = NULL;
}
