#include <stdio.h>

int main(){
	char name[10];
	char num[20];
	char adr[50];
	char str[80] = {0}; //�ݵ�� �ʱ�ȭ! �ʱ�ȭ ���ϸ� �����Ⱚ ��µ�

	/*
	printf("�̸��� �Է��ϼ��� : ");
	gets(name);
	printf("��ȭ��ȣ�� �Է��ϼ��� : ");
	gets(num);
	printf("�ּҸ� �Է��ϼ��� : ");
	gets(adr);
	printf("%s, %s, %s", name, num, adr);
	*/

	
	printf("�̸��� �Է��ϼ��� : ");
	gets(name); //null���� �ڵ����� ����(scanfó��)
	strcat(str, name);
	strcat(str, ",");
	printf("��ȭ��ȣ�� �Է��ϼ��� : ");
	gets(num);
	strcat(str, num);
	strcat(str, ",");
	printf("�ּҸ� �Է��ϼ��� : ");
	gets(adr);
	strcat(str, adr);
	puts(str);

	return 0;
}