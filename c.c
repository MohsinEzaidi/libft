#include "libft.h"
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
int main(int argc, char const *argv[])
{
	char result[10];
	char *str;
	int count = 4;
	int n = 1337;
	str = ft_fillresult(n, result, count);
	printf("the result is: %s\n",str);
}
