#include <stdio.h>
//���߿��

int add_ten(int);

int main() {
	//call by value : ���� �Ѱ��ִ� ��� 
	//call by reference : �ּҸ� �Ѱ��ִ� ���

	int a = 10;
	a = add_ten(a); //call by value : ���� �Ѱ��ִ� ��� 
	printf("a : %d\n", a);

	return 0;
}

int add_ten(int b) 
{
	b = b + 10;

	return b;
}