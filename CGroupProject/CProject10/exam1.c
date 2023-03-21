#include <stdio.h>

int main() {
	//지역 변수는 함수가 리턴되고 나면 메모리에서 사라진다.
	int a = 10, b = 20;

	printf("바꾸기 전 a : %d, b : %d\n", a, b);
	{
		int temp; //해당 블럭 안에서만 사용 가능!
		temp = a;
		a = b;
		b = temp;
	} //block : 범위 지정 
	printf("바꾼 후 a : %d, b : %d\n", a, b);

	return 0;
}