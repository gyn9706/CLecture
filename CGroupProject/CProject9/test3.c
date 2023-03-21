#include <stdio.h>

int main() {
	char* str = "watermelon";
	int i = 0;

	while (str[i] != '\0') {
		printf("%c", str[i]);  //wtreo
		i += 2;
	}

	return 0;
}