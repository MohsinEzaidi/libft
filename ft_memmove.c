/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:44:10 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/22 22:09:05 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	size_t			i;
	unsigned char	*temdst;
	unsigned char	*temsrc;

	i = 0;
	temdst = (unsigned char *) dst;
	temsrc = (unsigned char *) src;
	if (temdst < temsrc)
	{
		while (i < len)
		{
			temdst[i] = temsrc[i];
			i++;
		}
	}
	else if (temdst > temsrc)
		while (len--)
			temdst[len] = temsrc[len];
	return (dst);
}
