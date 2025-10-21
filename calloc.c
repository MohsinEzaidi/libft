/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 22:02:35 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/18 22:02:43 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	r = malloc(count * size);
	if (r == NULL || (count == 0 || size == 0))
		return (NULL);
	if ((count * size / 10) != (count * size / 10))
		return (NULL);
	return (ft_memset(malloc(count * size), 0, count));
}
