#include <stdio.h>

int main() {
	char str[80];
	int ch;
	int i=0;

	printf("���ڿ��� �Է��ϼ��� :");
	
	/*
	for (i = 0; i < 4; i++) {
		ch = getchar(); //�ϳ��� ����, �ƽ�Ű�ڵ������̶� int����, null�Ⱥٿ���
		str[i] = ch;
	}
	str[i] = '\0'; //null���� �߰��������! �ݺ��� �������� �� i=4
	//printf("%s", str);
	*/

	while (1) {
		ch = getchar();
		if (ch == '\n') break;
		str[i] = ch;
		i++;
	}str[i] = '\0';

	i = 0;
	printf("�Էµ� ���ڿ� : ");
	while (str[i] != '\0') {
		putchar(str[i]);
		i++;
	}

	/*
	for (i = 0; i < 4; i++) {
		putchar(str[i]);
	}
	*/

	return 0;
}