#include <stdio.h>

int main() {
	char ch = 0;
	int x = 0, y = 0;

	scanf_s("%c", &ch,1);
	scanf_s("%d%d", &x, &y);

	switch (ch) {
	case 'a': 
		printf("%d\n",x + y);
		break;
	case 'b':
		printf("%d\n", x * y);
		break;
	case 'c':
		printf("%d\n",x - y);
		break;
	default:
		printf("알 수 없는 명령\n");
	}
	return 0;
}