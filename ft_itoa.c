/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 00:03:04 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/27 00:19:07 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countdigits(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_fillresult(int n, char *result, int count, int sign)
{
	int	i;

	i = 0;
	if (sign == -1)
	{
		i = 1;
		result[0] = '-';
	}
	result[count] = '\0';
	while (count - 1 >= i)
	{
		result[count - 1] = n % 10 + '0';
		n = n / 10;
		count--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		totallen;
	char	*result;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	if (sign == -1)
		totallen = ft_countdigits(n) + 2;
	else
		totallen = ft_countdigits(n) + 1;
	result = malloc(totallen);
	if (result == NULL)
		return (NULL);
	result = ft_fillresult(n, result, totallen - 1, sign);
	return (result);
}
