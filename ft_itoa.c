#include "libft.h"

char	*ft_itoa(int n)
{
	char	*numb;

	get_len_numb(n);
	return (numb);
}
static int	get_len_numb (int n) // lengte bepalen
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1
	while (n > 9)
		n /= 10;
		len++;
	return (len);
}

// geheugen reserveren

// de string vullen


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
