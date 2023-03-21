#include <stdio.h>

int main() {
	int a = 0, b = 0;

	++a; //1
	b++; //1
	printf("a=%d, b=%d\n", a, b); 

	b = a++; //a=2 b=1
	printf("a=%d, b=%d\n", a, b);

	b = ++a; //a=3 b=3
	printf("a=%d, b=%d\n", a, b);

	printf("a=%d, b=%d\n", a++, b++); //3, 3
	printf("a=%d, b=%d\n", a, b); //4, 4

	return 0;
}