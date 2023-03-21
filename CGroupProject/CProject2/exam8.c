#include <stdio.h>

int main() {
	int result;
	result = 10 / 4;
	printf("%d\n", result);
	printf("%d\n", 10/4);
	printf("%lf\n", 10/4); 
	// 실수형 구조 = 가수부분+지수부분이라 정수형을 실수형으로 출력 불가
	printf("%lf\n", 10/4.0); 
	// but 10/4.0은 자동형변환으로 실수로 출력됨 <->강제형변환
	return 0;

}