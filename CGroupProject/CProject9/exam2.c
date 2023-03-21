#include <stdio.h>

int main() {

	printf("주소값을 출력 : %p\n", "dream"); //dream이라는 문자열의 시작주소(문자열=배열구조)
	printf("첫번째 문자를 출력 : %c\n",*"dream"); //d
	printf("세번째 문자를 출력 : %c\n", *"dream"+2); //(X)f
	printf("세번째 문자를 출력 : %c\n", *("dream"+2)); //(O)e
	printf("세번째 문자를 출력 : %c\n", "dream"[2]);//(O)e
	
	return 0;
}