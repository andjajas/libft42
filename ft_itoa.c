#include "libft.h"

char	*ft_itoa(int n)
{
	return (0);
}


static int	get_numlen(int n)
{
	long	num;
	int		count;

	num = (long) n;
	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num *= -1;
		count++;
	}
	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}
int main(void)
{
	char *res; // pointer gebruiken, komt in stack
//	res = ft_itoa(-2147483648); // Test direct de lastigste case!
	res = ft_itoa(125); // binnen ft_itoa wordt wel HEAP gebruikt!
	if (!res) // altijd checken of malloc gefaald is
		return (1);
	printf("resultaat: %s\n", res);
	free(res); // HEAP geheugen opruimen!!!
	return (0);
}
// geheugen reserveren
// de string vullen

// static int	get_numlen(int n)
// {
// 	long	num;
// 	int		count;
// 	int		sign;
//
// 	num = (long) n;
// 	count = 0;
// 	sign = 1;
// 	if (num == 0)
// 		return (1);
// 	if (num < 0)
// 	{
// 		num *= -1;
// 		sign *= -1;
// 	}
// 	while (num > 0)
// 	{
// 		count++;
// 		num /= 10;
// 	}
// 	if (sign == -1)
// 		count += 1;
// 	return (count);
// }
