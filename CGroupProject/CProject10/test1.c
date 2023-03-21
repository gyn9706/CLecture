#include <stdio.h>

double get_item(double*);

int main() {
	double ary[] = { 0.1, 0.3, 0.5, 0.7, 0.9 };
	double res;

	res = get_item(ary);
	printf("첫번째 호출할 때 : %.1lf\n", res); //0.1

	res = get_item(ary);
	printf("두번째 호출할 때 : %.1lf\n", res); //0.3

	return 0;
}

double get_item(double* ap) {
	static int i = 0; //함수가 사라지더라도 static공간에 저장됨
	double temp;
	
	temp = *(ap+i); //포인터변수 ap가 가리키는 ary의 상대적인 위치 옮길때 *(ap+i)
	i++;

	return temp;
}