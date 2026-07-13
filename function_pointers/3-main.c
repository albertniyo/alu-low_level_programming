#include "3-calc.h"

/**
 * main - simple calculator operations
 * @argc: nber of arguments passed
 * @argv: array of string args
 *
 * Return: always 0 on success
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", func(num1, num2));
	return (0);
}
