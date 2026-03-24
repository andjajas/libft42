#include "libft.h"
#include <stdio.h>

// word_counter tester
int main(void)
{
	char *str = "   hello   testen hallo  whatiti world   ";
	char spliter = ' ';
	int results = word_counter(str, spliter);
	printf("%d", results);
}
