/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 08:34:22 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/27 14:22:05 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checksign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi(char const *str)
{
	int		sign;
	long	r;
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
		if ((r * sign) > INT_MAX || (r * sign) < INT_MIN)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		i++;
	}
	return ((int)(r * sign));
}
