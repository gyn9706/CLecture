#include <stdio.h>

int main() {
	//���� ������ �Լ��� ���ϵǰ� ���� �޸𸮿��� �������.
	int a = 10, b = 20;

	printf("�ٲٱ� �� a : %d, b : %d\n", a, b);
	{
		int temp; //�ش� �� �ȿ����� ��� ����!
		temp = a;
		a = b;
		b = temp;
	} //block : ���� ���� 
	printf("�ٲ� �� a : %d, b : %d\n", a, b);

	return 0;
}