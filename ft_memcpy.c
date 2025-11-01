/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 17:22:29 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/11/01 12:15:43 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temdst;
	unsigned char	*temsrc;
	
	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	temdst = (unsigned char *) dst;
	temsrc = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		temdst[i] = temsrc[i];
		i++;
	}
	return (temdst);
}
