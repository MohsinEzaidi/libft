#include "libft.h"

int ft_coutdigits(int n)
{
	int count;

	if (n == 0)
		return 1;
	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return count;
}
int ft_checknumber(int n)
{
	int tem;

	tem = n * 10;
	if (n != (tem / 10))
		return -1;
	if (ft_coutdigits(n) == 0)
		return -1;
	return n;
}
char *ft_fillresult(int n, char *result, int count)
{
	int tem;
	while (count--)
	{
		tem = n % 10;
		n = n / 10;
		result[count] = tem + '0';
		ft_fillresult(n, result, count);
	}
	return result;
}
char *ft_itoa(int n)
{
	int tem;
	int i;
	char *result;
	int sign;

	if (n == -2147483648)
		return "-2147483648";
	// if (n == 2147483647)
	// 	return "-2147483648";
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	tem = ft_checknumber(n);
	if (tem == -1)
		return NULL;
	result = malloc(ft_coutdigits(n));
	if(result == NULL)
		return NULL;
	result = ft_fillresult(n, result, ft_coutdigits(n));
	return result;
}
int main(int argc, char const *argv[])
{
	printf("the result is: %s\n",ft_itoa(2147483646));
	return 0;
}
