#include <stdio.h>
#include<stdlib.h>

int main() {
	int* ip;
	double* dp;
	//int a; a라는 이름의 4byte짜리 공간 만들어줘.

	//메모리 동적할당 : 급하게 메모리 공간 필요시
	ip=(int*)malloc(sizeof(int)); //실행할 때 메모리 할당해줘 이름은 int*인트형 포인트변수에 저장할게
	dp = (double*)malloc(sizeof(double));

	*ip = 10;
	*dp = 3.4;

	printf("정수형으로 사용 :%d\n", *ip);
	printf("실수형으로 사용 :%lf\n", *dp);

	free(ip); // 동적할당 해제!
	free(dp); // 동적할당 해제!

	return 0;
}