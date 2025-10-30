/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:11:01 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/29 20:35:12 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tem;

	tem = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		tem[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
