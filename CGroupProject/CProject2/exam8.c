#include <stdio.h>

int main() {
	int result;
	result = 10 / 4;
	printf("%d\n", result);
	printf("%d\n", 10/4);
	printf("%lf\n", 10/4); 
	// �Ǽ��� ���� = �����κ�+�����κ��̶� �������� �Ǽ������� ��� �Ұ�
	printf("%lf\n", 10/4.0); 
	// but 10/4.0�� �ڵ�����ȯ���� �Ǽ��� ��µ� <->��������ȯ
	return 0;

}