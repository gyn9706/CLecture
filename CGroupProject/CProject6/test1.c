#include <stdio.h>

int main() {
	char word[80];
	int i=0;
	int count=0;

	printf("단어를 입력하세요 :");
	scanf_s("%s", word, 80);
	
	/*
	while(word[count] != 0) {
		count++;
	}
	*/
	
	for (i = 0; word[i] != '\0'; i++);  // 세미콜론으로 i=5 저장후 명령없이 종료
	
	count = i; //i값(index+1 = 글자개수)을 count에 저장 


	printf("단어를 뒤집으면 :");

	for (i = count-1; i >= 0; i--) //i값을 인덱스로 쓰기위해 -1해줌
	{
		printf("%c", word[i]);
	}

	printf("\n");
	puts(word); //문자열 전용 출력 함수

	//apple
	//elppa

	return 0;
}