#include <stdio.h>

int main() {
	char* pszData = "Test Starting!"; //char pszData[] 배열과 같음

	/*
	char words[]="hi!"
	printf("%s", words) // words라는 배열의 시작주소를 알려줘서 출력하는 거임
	즉, 문자열출력시 포인터와 배열이름 같은 거임
	*/

	printf("%s", pszData);
	printf("[%p]%c\n", pszData, *pszData); 
	//pszData의 시작주소, pszData가 가리키는 시작주소의 저장된 값 T
	printf("[%p]%c\n", pszData+1, *(pszData+1));
	printf("[%p]%c\n", pszData+5, *(pszData+5));
	printf("[%p]%c\n", pszData+11, *(pszData+11));

	printf("%zd\n", sizeof(pszData)); //8byte씀

	return 0;
}