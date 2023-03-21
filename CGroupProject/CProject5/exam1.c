#include <stdio.h>

int sum(int a, int b) //매개변수
{
	int res; //지역변수
	res = a + b;
	return res;
}
int main() //시작함수
{
	//함수란? 특별한 기능을 수행하는 독립된 코드 단위이다.
	//함수는 호출을 해야 작동한다.
	int a = 10, b = 20;
	int res; //지역변수

	res=sum(a,b); //함수호출
	printf("결과 :%d\n",res);

	return 0; //1) 반환값 2)종료
}