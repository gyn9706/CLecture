#include <stdio.h>

int* increase(); //포인터 함수
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

int* increase() //주소를 반환하는 포인터 함수
{  
	static int sum = 0; 
	sum++;
	//num = 100;
	//return &num;
	return &sum;
}