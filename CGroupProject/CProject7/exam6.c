#include <stdio.h>

int main() {
	char* pszData = "Test Starting!"; //char pszData[] �迭�� ����

	/*
	char words[]="hi!"
	printf("%s", words) // words��� �迭�� �����ּҸ� �˷��༭ ����ϴ� ����
	��, ���ڿ���½� �����Ϳ� �迭�̸� ���� ����
	*/

	printf("%s", pszData);
	printf("[%p]%c\n", pszData, *pszData); 
	//pszData�� �����ּ�, pszData�� ����Ű�� �����ּ��� ����� �� T
	printf("[%p]%c\n", pszData+1, *(pszData+1));
	printf("[%p]%c\n", pszData+5, *(pszData+5));
	printf("[%p]%c\n", pszData+11, *(pszData+11));

	printf("%zd\n", sizeof(pszData)); //8byte��

	return 0;
}