#include <stdio.h>

int main() {
	//1. 6세 이하 어린이와 70세 이상의 어른들은 무료입장
	//2. 그 외에는 3,000원의 입장료를 받는다.
	int age;
	
	printf("나이 입력 :");
	scanf_s("%d", &age);

	(age <= 6 || age >= 70) ? printf("무료 입장입니다.") : printf("입장료는 \\3,000입니다.");
	
	/*
	if (age <= 6 || age >= 70) {
		printf("무료 입장입니다.");
	}else printf("입장료는 \\3,000입니다.");
	*/

	return 0;
}