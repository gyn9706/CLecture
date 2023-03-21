#include <stdio.h>

int main() {
	double weight, height;
	double bmi;

	printf("몸무게를 입력하세요(kg) :");
	scanf_s("%lf", &weight,1);
	printf("키를 입력하세요(cm) :");
	scanf_s("%lf", &height,1);
	height = height / 100;
	bmi = weight / (height * height);
	printf("당신의 BMI는 : %.1lf입니다.\n", bmi);

	//bmi <20 :저체중
	//20~24.9:표준체중
	//>=25:과체중
	if (bmi >= 20 && bmi <25) {
		printf("표준체중입니다\n");
	}else printf("체중관리가 필요합니다.");

	/*
	if (bmi < 20) {
		printf("저체중");
	}
	else if(bmi < 25) {
		printf("표준체중");
	}else printf("과체중");
	*/

	return 0;
}