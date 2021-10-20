#include <stdio.h>

int palindromo(int n)
{
	int reversed = 0;
	int lastdigit;

	while (n != 0) {
		lastdigit = n % 10;
		reversed  = (reversed * 10) + lastdigit;
		n         = n / 10;
	}
	
	return reversed;
}


int main(void)
{
	int i, j, im, jm, prod, reversed;
	int max = 0;

	for (i = 999; i > 0; i--) {
		for (j = 999; j > 0; j--) {
			prod = i * j;
			reversed = palindromo(prod);
			if (reversed == prod) {
				if (prod > max) {
					max = prod;
					im  = i;
					jm  = j;
				}
			}
		}
	}
	printf("[+] Max palindrome: %d  [%dx%d]\n", max, im, jm);

	return 0;

}
