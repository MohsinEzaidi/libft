/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 21:53:52 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/29 19:54:33 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tem;
	size_t			i;

	tem = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (tem[i] == (unsigned char) c)
			return (&tem[i]);
		i++;
	}
	return (NULL);
}
