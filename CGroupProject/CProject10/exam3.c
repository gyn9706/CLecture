#include <stdio.h>
//☆중요☆

int add_ten(int);

int main() {
	//call by value : 값을 넘겨주는 방법 
	//call by reference : 주소를 넘겨주는 방법

	int a = 10;
	a = add_ten(a); //call by value : 값을 넘겨주는 방법 
	printf("a : %d\n", a);

	return 0;
}

int add_ten(int b) 
{
	b = b + 10;

	return b;
}