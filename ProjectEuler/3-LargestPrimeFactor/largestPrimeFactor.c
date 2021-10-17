#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_FACTORS 256

void primeFactors(long num, int *factors)
{
    int pos = 0;
    while (num % 2 == 0) {
        factors[pos] = 2;
        pos++;
        num = num / 2;
    }

    for (long i = 3; i <= sqrt(num); i = i + 2) {
        while (num % i == 0) {
            factors[pos] = i;
            pos++;
            num = num / i;
        }
    }

    if (num > 2) {
        factors[pos] = num;
        pos++;
    }
}

int findLargest(int *factors)
{
    long max = 0;
    for (int i = 0; i < MAX_FACTORS; i++)
        if (factors[i] > max)
            max = factors[i];
    return max;
}

int main(int argc, char **argv)
{
    int pf[MAX_FACTORS];
    for (int i = 0; i < 256; i++)
        pf[i] = 0;

    if (argc != 2) {
        printf("Usage: %s NUMBER\n", argv[0]);
        return 0;
    }

    long n = atol(argv[1]);

    primeFactors(n, pf);

    printf("\n");
    printf("Largest factor: %d\n", findLargest(pf));

    printf("\n");
    return 0;
}
