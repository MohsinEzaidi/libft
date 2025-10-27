/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 00:05:28 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/27 00:20:34 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*tem;

	tem = lst;
	len = 0;
	while (tem)
	{
		len++;
		tem = tem -> next;
	}
	return (len);
}
