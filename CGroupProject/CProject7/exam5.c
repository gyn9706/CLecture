#include <stdio.h>

int main() {

	int num1 = 100, num2 = 100;
	int* pnum;
	
	//printf("%p", *pnum); //초기화안되서 출력안됨
	//*pnum = &num1; //pnum이 가리키는 어떤 임의의 쓰레기값에 num1주소저장?! (x)
	pnum = &num1; //pnum 포인터변수에 num1주소저장
	*pnum = *pnum + 30; //(*pnum)+=30; //num1= 130

	pnum = &num2;
	*pnum = *pnum - 30;

	printf("num1:%d num2:%d", num1, num2);
}