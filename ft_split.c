/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: andjajas <andjajas@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/03/19 17:19:18 by andjajas      #+#    #+#                 */
/*   Updated: 2026/03/20 10:19:43 by andjajas      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	**ft_split(char const *s, char c)
// {
	
// }

// static int	word_count(char *s, char c)
// {
// 		int	i;
// 		int	counter;
		
// 		i = 0;
// 		counter = 0;
// 	while (s[i])
// 	{
// 		while ((s[i] == c) && s[i]) // loop om alle aaneengesloten separators te skippen
// 			i++;
// 		while (s[i] != c) // conditie om te checken of het de eerste letter van nieuw woord is
// 			counter++;
// 	}
// 	return (counter);
// }
//
// hulper functies: word counter, letter counter, free all memory als allocations failen
// in the word counter to count words: count the transtitions,
// from not-separator to separator or not separator to null-term,
// so one big loop running through string while (s[i]), 
// and inside the if statement to count the transitions...

static int count_word(char *s, char c)
{
	int i;
	int	count;
	
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if(s[i] == c && (s[i - 1]) != c)
			count++;
		i++;
	}
	return (count + 1);
}

#include <stdio.h>

int main(void)
{
	char *str = "hello      world";
	char spliter = ' ';
	int results = count_word(str, spliter);
	printf("%d", results);
}