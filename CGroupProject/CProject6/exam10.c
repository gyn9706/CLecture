#include <stdio.h>

int main() {
	char str[] = "Good morning!"; //13����
	//���ڿ��� ������ null('\0')�� �ڵ����� ����
	printf("�迭 str�� ũ�� : %zd\n", sizeof(str)); //14 //zd z�ֺ��̴�����
	printf("�� ���� ������ ���:%c\n", str[13]); //nothing
	printf("�� ���� ������ ���:%d\n", str[13]); //0 null���� �ƽ�Ű�ڵ�=0
	printf("�� ���� ������ ���:%d\n", str[4]); //����(space bar) �ƽ�Ű�ڵ�=32

	str[12] = '?'; //Good morning!���� �ٲ� ��, �迭�� ���� ���氡���� �����̴�.
	printf("���:%s\n", str);
	return 0;
}