/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:18:47 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/11/02 13:26:28 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	if (!dst && !size)
		return (srcsize);
	dstsize = ft_strlen(dst);
	i = 0;
	if (size == 0)
		return (srcsize);
	if (size <= dstsize)
		return (srcsize + size);
	while (i < size - dstsize - 1 && src[i])
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	dst[dstsize + i] = '\0';
	return (dstsize + srcsize);
}
