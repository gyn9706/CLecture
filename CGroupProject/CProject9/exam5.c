#include <stdio.h>

int main() {
	//char* fruit = "strawberry";
	char fruit[20]="strawberry";
	//char fruit[20];
	//fruit = "strawberry"; 
	//변수 = 값 인데 변수가 아니라는 소리! 주소값임. 즉, 상수! 
	//100 = 100대입 말안됌! 상수에 값 대입 안됨!! 

	printf("%s\n", fruit);


	return 0;
}