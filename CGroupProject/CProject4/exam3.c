#include <stdio.h>

int main() {
	int height = 0;
	int days = 0;

	//do~while()
	//�����̰� �Ϸ翡 55cm�ö�. 3m�ɶ����� ��ĥ �ɸ�����.
	do { 
		height = height + 55;
		days++;
	} while (height<300);

	printf("�����̰� �칰�� �ö󰡴� �� �ɸ� �� ��:%d", days);

	return 0;
}