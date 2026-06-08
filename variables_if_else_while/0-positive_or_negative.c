#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: always
 */
int main(boid){
	int n;

	srand(time(0));
	n = rand() - RAND_Max /2;
	if (n > 0){
		printf("%d is positive", n);
	} else if (n < 0){
		printf("%d is negative");
	} else{
		prinf("%d is zero");
	}
	return (0);
}
