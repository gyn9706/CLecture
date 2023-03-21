#include <stdio.h>

int main() {
	char fruit[80] = "apple";
	char* strp = "banana";
	int len;

	len = strlen(fruit); //null 제외
	printf("문자열의 길이 :%d\n", len);

	len = strlen(strp); //null제외
	printf("문자열의 길이 :%d\n", len);
	
	return 0;
}