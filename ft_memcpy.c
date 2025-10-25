/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:23:50 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/22 20:37:59 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*temdst;
	char	*temsrc;

	if (!dst && !src)
		return (NULL);
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
