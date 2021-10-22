#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


// 1^2 + 2^2 + 3^2 + ... + n^2 
long long sumOfSquares(long n)
{
	long long res = 0;
	res = ((2 * n) + 1) * (n + 1) * n / 6;
	return res;
}

// (1 + 2 + 3 + ... + n)^2
long long squareOfSums(long n)
{
	long long res = 0;
	res = (n * (n + 1)) / 2;
	res = res * res;
	return res;
}

int main (int argc, char **argv)
{
	if (argc != 2) {
		printf("Usage: %s N\n", argv[0]);
		return 1;
	}	
	
	long long n = (long long) atoi(argv[1]);
	long long sum = sumOfSquares(n);
	long long squ = squareOfSums(n);
	long long dif = squ - sum;

	printf("[+] %lld - %lld = %lld\n", squ, sum, dif);

	return 0;
}
