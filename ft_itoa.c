/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/27 11:11:09 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/27 11:11:09 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_numlen(long num);
static char	*fill_charnum(char *charnum, long num, int charlen);

char	*ft_itoa(int n)
{
	long	num;
	int		charlen;
	char	*charnum;

	num = (long)n;
	charlen = get_numlen(num);
	charnum = malloc(sizeof(char) * (charlen + 1));
	if (!charnum)
		return (NULL);
	charnum[charlen] = '\0';
	if (num < 0)
	{
		num = -num;
		charnum[0] = '-';
	}
	charnum = fill_charnum(charnum, num, charlen);
	return (charnum);
}

static int	get_numlen(long num)
{
	int		count;

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

static char	*fill_charnum(char *charnum, long num, int charlen)
{
	int	i;

	if (num == 0)
	{
		charnum[0] = '0';
		return (charnum);
	}
	i = 1;
	while (num > 0)
	{
		charnum[charlen - i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	return (charnum);
}

// int main(void)
// {
// 	char *res; // pointer gebruiken, komt in stack
// //	res = ft_itoa(-2147483648); // Test direct de lastigste case!
// 	res = ft_itoa(125); // binnen ft_itoa wordt wel HEAP gebruikt!
// 	if (!res) // altijd checken of malloc gefaald is
// 		return (1);
// 	printf("resultaat: %s\n", res);
// 	free(res); // HEAP geheugen opruimen!!!
// 	return (0);
// }
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

// char	*ft_itoa(int n)
// {
// 	long	num;
// 	int		charlen;
// 	char	*charnum;
// 	int		i;

// 	num = (long)n;
// 	charlen = get_numlen(num);
// 	charnum = malloc(sizeof(char) * (charlen + 1));
// 	if (!charnum)
// 		return (NULL);
// 	charnum[charlen] = '\0';
// 	if (num < 0)
// 	{
// 		num = -num;
// 		charnum[0] = '-';
// 	}
// 	if (num == 0)
// 	{
// 		charnum[0] = '0';
// 		return (charnum);
// 	}
// 	i = 1;
// 	while (num > 0)
// 	{
// 		charnum[charlen - i] = (num % 10) + '0';
// 		num = num /10;
// 		i++;
// 	}
// 	return (charnum);
// }
