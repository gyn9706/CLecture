#include <stdio.h>

int main() {
	char* fruit = "strawberry";
	
	while (*fruit != '\0') {
		printf("%s\n", fruit);
		fruit++;
	}
	
	/*
	* int count = 0;
	for (int i = 0; fruit[i] != '\0'; i++) {
		count++;
	}

	for(int i=0; i<=count; i++){
		for (int j = i; j <= count; j++){
			printf("%c", fruit[j]);
		}
		putchar('\n');
	}
	*/

	return 0;
}