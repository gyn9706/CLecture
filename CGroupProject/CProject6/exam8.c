#include <stdio.h>

int main() {
	char word[80];
	int i;

	printf("�ܾ �Է��ϼ��� :");
	scanf_s("%s", word,80); //���ڿ��� ���, &�Ⱥ���! 
	i = 0;

	//scanf�Լ��� ���ڿ� �Է� ������ �ι��� �ڵ����� ä���ش�.
	while (word[i] !='\0') //apple //index(0~5)=size(���ڰ���+�ι���=6)-1 
	{
		i++; //�ι��� �ƴϸ� i����
	}

	printf("%s�ܾ��� ���̴� %d�� �Դϴ�.\n", word, i);
	return 0;
}