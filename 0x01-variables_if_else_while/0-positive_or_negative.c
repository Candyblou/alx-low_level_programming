#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() % (RAND_MAX / 2 + 1) - RAND_MAX / 4;
	
	printf("Random number: %d is", n)
		if (n > 0)
		printf("positive\n");
	else if (n < 0)
		printf("negative\n");
	else
		printf("zero\n");	
	return (0);
}
