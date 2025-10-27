/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:20:33 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/27 00:52:28 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	if (n == 0)
		return ;
	p = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
