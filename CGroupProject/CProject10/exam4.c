#include <stdio.h>
//���߿��

void add_ten(int*);

int main() {
	//call by reference : �ּҸ� �Ѱ��ִ� ���

	int a = 10;
	add_ten(&a); //a=add_ten(&a) (x) ��ȯ�� �����Ƿ� a�� �����ʿ� ����
	printf("a : %d\n", a); //20

	return 0;
}

void add_ten(int* b) //�����ͺ����̹Ƿ� �˾Ƽ� �ٲ� ��ȯ�� ���� void
{
	*b = *b + 10;
}