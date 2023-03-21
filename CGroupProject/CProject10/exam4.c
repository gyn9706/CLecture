#include <stdio.h>
//☆중요☆

void add_ten(int*);

int main() {
	//call by reference : 주소를 넘겨주는 방법

	int a = 10;
	add_ten(&a); //a=add_ten(&a) (x) 반환값 없으므로 a에 저장필요 없음
	printf("a : %d\n", a); //20

	return 0;
}

void add_ten(int* b) //포인터변수이므로 알아서 바뀜 반환값 없음 void
{
	*b = *b + 10;
}