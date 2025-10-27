/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 00:03:19 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/27 14:33:35 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tem;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		tem = *lst;
		while (tem->next)
			tem = tem->next;
		tem->next = new;
	}
}
