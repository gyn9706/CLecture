#include <stdio.h>

int main() {
	char str[50] = "I like C programming";
	// null ���� �ڵ����� ä������
	char str2[10];
	printf("string:%s\n", str);
	printf("string:%c\n", str[19]); //g
	printf("string:%c\n", str[20]); //�ι���
	printf("string:%c\n", str[21]); //str[50]���� g�ڿ� ������ �� �ι��ڷ� ä����

	printf("string:%s\n", str2); //str2 �ʱ�ȭ�ȵ����Ƿ� �����Ⱚ����
	
	str[8] = '\0'; //C���� null�ָ� 
	printf("string:%s\n", str); //I like C���� �����. ���ڿ������� �ν�.

	return 0;
}