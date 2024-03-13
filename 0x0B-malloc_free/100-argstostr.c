#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments to one string
 * @ac: the argument count
 * @av: the argument array
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int counter1, counter2, counter3 = 0, counter4 = 0;
	char *ret;

	if (ac < 1 || !av)
		return (NULL);
	for (counter1 = 0; counter1 < ac; counter1++)
		for (counter2 = 0; av[counter1][counter2]; counter2++)
			counter4++;
	counter4 += ac + 1;
	ret = malloc(sizeof(char) * counter4);
	if (!ret)
		return (NULL);
	for (counter1 = 0; counter1 < ac; counter1++)
	{
		for (counter2 = 0; av[counter1][counter2]; counter2++)
			ret[counter3++] = av[counter1][counter2];
		ret[counter3++] = '\n';
	}
	ret[counter3] = '\0';
	return (ret);
}
