#include <stdio.h>

void swap_string(char *, char * );

int main() {
	char str1[20] = "apple";
	char str2[20] = "banana";
	swap_string(str1, str2);

	printf("str1 : %s \n", str1);
	printf("str2 : %s \n", str2);

	return 0;
}

void swap_string(char* s1, char* s2) {
	char temp[20];
	strcpy(temp, s1); // strcpy_s(temp,20,s1); <- #include <string.h> 했을 경우
	strcpy(s1,s2); // strcpy_s(s1, 20, s2);
	strcpy(s2,temp); // strcpy_s(s2,20,temp);
}