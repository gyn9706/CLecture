#include <stdio.h>

int main() {

	printf("�ּҰ��� ��� : %p\n", "dream"); //dream�̶�� ���ڿ��� �����ּ�(���ڿ�=�迭����)
	printf("ù��° ���ڸ� ��� : %c\n",*"dream"); //d
	printf("����° ���ڸ� ��� : %c\n", *"dream"+2); //(X)f
	printf("����° ���ڸ� ��� : %c\n", *("dream"+2)); //(O)e
	printf("����° ���ڸ� ��� : %c\n", "dream"[2]);//(O)e
	
	return 0;
}