#include <stdio.h>

#define DEBUG 0

int main(void)
{
	int i    = 1;
	int j    = 2;
	int next = i + j;
	int sum  = 2; // We start with 2

	printf("%d\n", i);
	printf("%d\n", j);

	while (next < 4000000) {
		printf("%d\n", next);
		
#if DEBUG
		if (next % 2 == 0) {
			printf("%d + %d = %d\n", sum, next, sum + next);
			sum += next;
		}
#else
		sum += next * !(next % 2); // Add only if next is even
#endif
		i = j;
		j = next;
		next = i + j;
	}
	printf("Sum: %d\n", sum);

	return 0;
}
