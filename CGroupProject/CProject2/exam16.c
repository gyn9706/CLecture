#include <stdio.h>

int main() {
	printf("12345678901234567890\n"); //자리수보려고 출력
	printf("%10c\n", 'A'); //10자리중에 오른쪽에 출력됨
	printf("%10d\n", 128); 
	printf("%10lf\n", 3.1415926);
	printf("%10le\n", 3.1415926);
	printf("%10.3lf\n", 3.1415926); //.3 소수점아래 3자리까지만 출력
	printf("%10.4s\n", "Love is"); // Love 4자 출력
	printf("%5lf\n", 3.1415926);

	return 0;
}