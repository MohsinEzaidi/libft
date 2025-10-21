/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:49:20 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/18 11:49:21 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*r;

	len = 0;
	r = (char *) s;
	if (c == '\0')
		return ("");
	while (r[len])
		len++ ;
	while (len > 0)
	{
		if (r[len] == c)
			return (&r[len]);
		len-- ;
	}
	if (r[0] == c)
		return (&r[0]);
	return (NULL);
}
