#include <stdio.h>

int main() {
	char fruit[80] = "straw";
	strcat(fruit, "berry");
	printf("연결된 문자열 : :%s\n", fruit);

	return 0;
}