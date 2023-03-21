#include <stdio.h>

int main(){
	char name[10];
	char num[20];
	char adr[50];
	char str[80] = {0}; //반드시 초기화! 초기화 안하면 쓰레기값 출력됨

	/*
	printf("이름을 입력하세요 : ");
	gets(name);
	printf("전화번호를 입력하세요 : ");
	gets(num);
	printf("주소를 입력하세요 : ");
	gets(adr);
	printf("%s, %s, %s", name, num, adr);
	*/

	
	printf("이름을 입력하세요 : ");
	gets(name); //null문자 자동으로 붙음(scanf처럼)
	strcat(str, name);
	strcat(str, ",");
	printf("전화번호를 입력하세요 : ");
	gets(num);
	strcat(str, num);
	strcat(str, ",");
	printf("주소를 입력하세요 : ");
	gets(adr);
	strcat(str, adr);
	puts(str);

	return 0;
}