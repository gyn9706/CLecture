#include <stdio.h>

int main() {
	printf("12345678901234567890\n"); //�ڸ��������� ���
	printf("%10c\n", 'A'); //10�ڸ��߿� �����ʿ� ��µ�
	printf("%10d\n", 128); 
	printf("%10lf\n", 3.1415926);
	printf("%10le\n", 3.1415926);
	printf("%10.3lf\n", 3.1415926); //.3 �Ҽ����Ʒ� 3�ڸ������� ���
	printf("%10.4s\n", "Love is"); // Love 4�� ���
	printf("%5lf\n", 3.1415926);

	return 0;
}