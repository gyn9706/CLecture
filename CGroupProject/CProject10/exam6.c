#include <stdio.h>

int* increase(); //������ �Լ�
//int num = 100;

int main() {
	int i;
	int* sp;


	for (i = 0; i < 5; i++) {
		sp=increase();
		printf("num:%d\n", *sp);
	}

	return 0;
}

int* increase() //�ּҸ� ��ȯ�ϴ� ������ �Լ�
{  
	static int sum = 0; 
	sum++;
	//num = 100;
	//return &num;
	return &sum;
}