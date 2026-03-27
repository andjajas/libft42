#include "libft.h"
#include <stdio.h>

// word_counter tester
int	main(void)
{
	char	*str;
	char	spliter;
	int		results;

	str = "   hello   testen hallo  whatiti world   ";
	spliter = ' ';
	results = word_counter(str, spliter);
	printf("%d", results);
}
