#include <stdio.h>

int main() {
	int input, change; //input�� ���Ծ�, change�� �ܵ��� ������ ����
	int w500, w100 ,w50, w10; // �� ������ ������ ������ ����
	

	for (int i = 0; i < 5; i++) {
	printf("���� �Է��ϼ��� :");
	scanf_s("%d", &input); //1000
	change=input - 150; //Ŀ�ǰ��� 150���� �� �ܵ� ���
	w500 = change / 500; //1 change=850
	change = change % 500;
	w100 = change / 100;
	change = change % 100;
	w50 = change/ 50;
	change = change % 50;
	w10 = change / 10;
	printf("%d %d %d %d\n", w500, w100, w50, w10);
	}

	return 0;
}