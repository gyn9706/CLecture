#include <stdio.h>

int main() {
	char ch=0;
	int num = 0;
	int adr = 0;

	//&:�ּҿ�����
	printf("ch�� ������ : %x\n", &ch); //ch�޸��� �����ּ� ���
	printf("num�� ������ : %x\n", &num);


	adr = &num;
	printf("adr=%x", adr);

	return 0;
}