#include <stdio.h>
//#include <string.h>  --> strcpy_s(temp,20,str1,20);

int main() {
	//���ڿ� ó�� �Լ�
	//string copy, string length, string compare, string concatenation - ���̺귯���Լ�
	//������ ���� �����ϰ� �� �� �ֵ��� ���� ��: ������ ��ũ

	char str1[20] = "apple";
	char str2[20] = "banana";
	char temp[20];

	strcpy(temp,str1); //�� �迭, ������ �迭
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("str1 :%s\n", str1);
	printf("str2 :%s\n", str2);


	return 0;
}