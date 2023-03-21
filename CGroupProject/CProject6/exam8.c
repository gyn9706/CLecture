#include <stdio.h>

int main() {
	char word[80];
	int i;

	printf("단어를 입력하세요 :");
	scanf_s("%s", word,80); //문자열의 경우, &안붙임! 
	i = 0;

	//scanf함수는 문자열 입력 받으면 널문자 자동으로 채워준다.
	while (word[i] !='\0') //apple //index(0~5)=size(글자개수+널문자=6)-1 
	{
		i++; //널문자 아니면 i증가
	}

	printf("%s단어의 길이는 %d자 입니다.\n", word, i);
	return 0;
}