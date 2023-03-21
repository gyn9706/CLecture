#include <stdio.h>

void user_strcpy(char* des, char* src);

int main() {

	char fruit[20];

	user_strcpy(fruit, "strawberry");
	printf("배열에 저장된 문자열 :%s\n", fruit);

	return 0;
}

//포인터변수 이용해서 fruit라는 빈공간에 strawberry 복사된 데이터를 넘겨줌
void user_strcpy(char* des, char* src) //fruit[20]의 시작주소, strawberry의 s시작주소
{
	while (*src != '\0')
	{
		*des = *src;
		src++;
		des++; //같이 증가해줘야함!!
	}
	*des = '\0'; //문자열의 끝에 반드시 널 문자가 포함되어야 한다.
	//return des; //포인터라 반환타입 없음! 
}


