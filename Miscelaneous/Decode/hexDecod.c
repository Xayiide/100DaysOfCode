#include <stdio.h>
#include <stdint.h>
#include <iostream>

typedef uint8_t u8;

int main(void) {
	u8 ex  = 0x12;
	u8 a   = 0x00 | (ex >> 4);
	u8 b   = 0x0F & ex;

	printf("ex:  %03d 0x%02X\n", ex, ex);
	printf("a:   %03d 0x%02X [0x00 | (ex >> 4)]\n", a, a);
	printf("b:   %03d 0x%02X [0x0F & ex]\n", b, b);

	// Convert to string?
	std::string astr = std::to_string(int(a));
	std::string bstr = std::to_string(int(b));
	printf("astr: %s\n", astr.c_str());
	printf("bstr: %s\n", bstr.c_str());

	// Concat strings?
	std::string abstr = astr + bstr;
	printf("abstr: %s\n", abstr.c_str());

	// Convert to int
	int res = std::stoi(abstr);
	printf("res: %03d 0x%02X\n", res, res);

	return 0;
}
