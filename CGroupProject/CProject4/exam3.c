#include <stdio.h>

int main() {
	int height = 0;
	int days = 0;

	//do~while()
	//달팽이가 하루에 55cm올라감. 3m될때까지 며칠 걸리는지.
	do { 
		height = height + 55;
		days++;
	} while (height<300);

	printf("달팽이가 우물을 올라가는 데 걸린 일 수:%d", days);

	return 0;
}