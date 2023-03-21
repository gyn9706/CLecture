#include <stdio.h>

int main() {
	int a = 10;
	int *ap=&a;

	printf("%d\n", a); //10
	printf("%x\n", &a); //a矫累林家
	printf("%x\n", ap); //ap历厘等 a矫累林家
	printf("%x\n", &ap); //ap矫累林家
	printf("%d\n", *ap); //10 ap俊 历厘等 'a林家'俊 历厘等 蔼阑 免仿
	
	return 0;
}

