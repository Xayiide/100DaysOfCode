#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint64_t u64;


/*
 * Regla 1: mcm(a, b, c, d) = mcm(a, mcm(b, mcm(c, d))) etc.
 * Regla 2: mcm(a, b) = (a * b) / mcm(a, b)
 */

// Máximo Común Denominador
u64 mcd(u64 a, u64 b)
{
	u64 res;
	if (b == 0)
		res = a;
	else
		res = mcd(b, a % b);
	return res;
}

// Mínimo Común Múltiplo
u64 mcm(u64 a, u64 b)
{
	u64 res;
	res = (a * b) / (mcd(a, b));

	return res;
}


int main(int argc, char **argv)
{
	u64 i, n;
	u64 res = 1;

	if (argc != 2) {
		printf("Usage: %s N\n", argv[0]);
		return 1;
	}

	n = (u64) atoi(argv[1]);

	for (i = 1; i <= n; i++)
		res = (res * i) / mcd(res, i);
	printf("[+] mcm(1, 2, ..., %ld) = %ld\n", n, res);

	return 0;
}
		
