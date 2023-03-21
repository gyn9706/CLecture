#include <stdio.h>

int main() {
	//변수선언 위치가 어디 블럭{}인지가 중요함!
	int nData = 10;
	printf("%d\n", nData); //10

	if (nData > 0) {
		int nData = 20;
		printf("%d\n", nData); //20
	}

	printf("%d\n", nData); //10
	
	return 0;
}