/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:11:59 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/25 12:14:21 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new_node;

	new_node = (t_list *) ft_calloc(1, sizeof(t_list));
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}