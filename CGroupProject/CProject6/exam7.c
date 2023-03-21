#include <stdio.h>

int main() {
	//문자 배열
	char word[5];
	word[0] = 'L';
	word[1] = 'o';
	word[2] = 'v';
	word[3] = 'e';
	word[4] = '\0'; // Null 추가 -> 문자열임을 컴파일러에 알려줌

	char A[3] = "HI"; //문자열+1(Null)로 배열크기지정 

	printf("%s\n", word);
	printf("%zd\n", sizeof(char));

	for (int i = 0; i < 5; i++) {
		printf("%c ", word[i]);
	}
	return 0;
}