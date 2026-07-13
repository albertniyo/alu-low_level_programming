#include "3-calc.h"

/**
 * op_add - returns sum of a and b
 * @a: first int
 * @b: second int
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a and b
 * @a: first int
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a and b
 * @a: first int
 * @b: Second int
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division of a by b
 * @a: first int
 * @b: second int
 *
 * Return: quotient of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns modulus of a and b
 * @a: first int
 * @b: second int
 *
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
