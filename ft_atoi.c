/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 08:34:22 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/19 23:22:55 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checksign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi(char *str)
{
	int		sign;
	int		r;
	size_t	i;

	r = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = ft_checksign(str[i]);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		r = (r * 10) + (str[i] - '0');
		if (r != (((r * 10) + (str[i] - '0')) / 10))
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		i++;
	}
	return (r * sign);
}
