#include <stdio.h>
#define HEX "0123456789abcdef"
int main()
{
	int a = 577712124;
	printf("%c%c", HEX[(unsigned char)a/16], HEX[(unsigned char)a % 16]);
}
