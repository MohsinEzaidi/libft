/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezzaidi <mezzaidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:34:39 by mezzaidi          #+#    #+#             */
/*   Updated: 2025/10/19 12:38:07 by mezzaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*result;
	size_t	i;
	size_t	j;

	str1 = (char *) s1;
	str2 = (char *) s2;
	i = 0;
	j = 0;
	result = malloc((ft_strlen(str1) + ft_strlen(str2)) * sizeof(char));
	if (result == NULL || str1 == NULL || str2 == NULL)
		return (NULL);
	while (i < ft_strlen(str1) && str1[i])
	{
		result[i] = str1[i];
		i++;
	}
	while (j < ft_strlen(str2) && str2[j])
	{
		result[i + j] = str2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
// int main(int argc, char const *argv[])
// {
// 	char s1[3] = "12345";
// 	char s2[5] = "ABCDE";
// 	char *result = ft_strjoin(s1,s2);
// 	printf("s1 = %s\ns2 = %s\nresult = %s\n",s1,s2,result);
// 	return 0;
// }