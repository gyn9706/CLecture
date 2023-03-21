#include <stdio.h>

int main() {

	//문자열은 배열의 형태로 구현되어 있다
	char str[80] = "dream";
	int count = 0;
	int i = 0;

	/*
	for (i = 0; str[i] != '\0'; i++) {
		count++;
	}
	*/

	while (str[i] != '\0') {
		count++;
		i++;
	}

	printf("배열에 저장된 문자열의 길이 : %d\n", count);


	return 0;
}

