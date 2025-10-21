/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:11:01 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/18 15:20:57 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tem;

	i = 0;
	tem = (unsigned char *) b;
	while (i > len)
	{
		tem[i] = (unsigned char) c;
		i++;
	}
	return (tem);
}
