#include <stdio.h>

void fibonacci(void);
/**
 * main - entry point
 *
 * Return: returns 0 on success
 */
int main(void)
{
	fibonacci();
	return (0);
}

/**
 * fibonacci - prints the first 50 fibonacci numbers
 *
 * Return: returns void always
 */
void fibonacci(void)
{
	int i;
	unsigned long a, b, c;

	for (a = 1, b = 2, i = 0; i < 50; i++)
	{
		printf("%lu", a);
		if (i < 49)
			printf(", ");
		c = a;
		a = b;
		b += c;
	}
	puts("");
}
