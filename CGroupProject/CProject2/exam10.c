#include <stdio.h>

int main() {
	int input, change; //input은 투입액, change는 잔돈을 저장할 변수
	int w500, w100 ,w50, w10; // 각 동전의 개수를 저장할 변수
	

	for (int i = 0; i < 5; i++) {
	printf("돈을 입력하세요 :");
	scanf_s("%d", &input); //1000
	change=input - 150; //커피값이 150원일 때 잔돈 계산
	w500 = change / 500; //1 change=850
	change = change % 500;
	w100 = change / 100;
	change = change % 100;
	w50 = change/ 50;
	change = change % 50;
	w10 = change / 10;
	printf("%d %d %d %d\n", w500, w100, w50, w10);
	}

	return 0;
}