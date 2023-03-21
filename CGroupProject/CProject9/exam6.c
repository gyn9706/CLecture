#include <stdio.h>
//#include <string.h>  --> strcpy_s(temp,20,str1,20);

int main() {
	//문자열 처리 함수
	//string copy, string length, string compare, string concatenation - 라이브러리함수
	//복잡한 것을 간단하게 쓸 수 있도록 만든 툴: 프레임 워크

	char str1[20] = "apple";
	char str2[20] = "banana";
	char temp[20];

	strcpy(temp,str1); //빈 배열, 복사할 배열
	strcpy(str1, str2);
	strcpy(str2, temp);
	printf("str1 :%s\n", str1);
	printf("str2 :%s\n", str2);


	return 0;
}