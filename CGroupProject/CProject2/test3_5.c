#include <stdio.h>
//32767초는 몇시간 몇분 몇초인지 게산하여 출력하는 프로그램

int main() {
	int sec = 32767;
	int hour, min;

	hour = sec / 3600;
	sec = sec % 3600;
	min = sec / 60;
	sec = sec % 60;

	printf("32767초는 %d시간 %d분 %d초입니다.\n", hour, min, sec);

	return 0;
}