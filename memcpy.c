/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:23:50 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/18 16:07:38 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	size_t			i;
	unsigned char	*temdst;
	unsigned char	*temsrc;

	temdst = (unsigned char *) dst;
	temsrc = (unsigned char *) src;
	i = 0;
	if (n == 0)
	{
		temdst[0] = '\0';
		return (temdst);
	}
	while (i < n)
	{
		temdst[i] = temsrc[i];
		i++;
	}
	return (temdst);
}
