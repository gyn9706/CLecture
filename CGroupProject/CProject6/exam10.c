#include <stdio.h>

int main() {
	char str[] = "Good morning!"; //13글자
	//문자열의 끝에는 null('\0')이 자동으로 삽입
	printf("배열 str의 크기 : %zd\n", sizeof(str)); //14 //zd z왜붙이는지모름
	printf("널 문자 문자형 출력:%c\n", str[13]); //nothing
	printf("널 문자 문자형 출력:%d\n", str[13]); //0 null문자 아스키코드=0
	printf("널 문자 문자형 출력:%d\n", str[4]); //공백(space bar) 아스키코드=32

	str[12] = '?'; //Good morning!으로 바뀜 즉, 배열도 값이 변경가능한 변수이다.
	printf("출력:%s\n", str);
	return 0;
}