#include <stdio.h>
#include <string.h>

int main() {
	char season[80];
	char spr[] = "봄";
	char sum[] = "여름";
	char fal[] = "가을";
	char win[] = "겨울";

	printf("계절명을 입력하세요 :");
	scanf_s("%s", season, 80);

	//res = strcmp(str1, str2);	
	if(strcmp(spr,season)==0) printf("개나리\n"); //봄
	else if (strcmp(sum, season) == 0) printf("장미\n");  //여름
	else if (strcmp(fal, season) == 0) printf("국화\n");  //가을
	else if (strcmp(win, season) == 0) printf("매화\n");  //겨울
	else printf("계절명을 잘못 입력하였습니다.\n");

	//if(strcmp("봄",season)==0) printf("개나리\n"); (o)


	return 0;
}