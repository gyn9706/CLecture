#include <stdio.h>

int main() {
	char word[80];
	int i=0;
	int count=0;

	printf("�ܾ �Է��ϼ��� :");
	scanf_s("%s", word, 80);
	
	/*
	while(word[count] != 0) {
		count++;
	}
	*/
	
	for (i = 0; word[i] != '\0'; i++);  // �����ݷ����� i=5 ������ ��ɾ��� ����
	
	count = i; //i��(index+1 = ���ڰ���)�� count�� ���� 


	printf("�ܾ �������� :");

	for (i = count-1; i >= 0; i--) //i���� �ε����� �������� -1����
	{
		printf("%c", word[i]);
	}

	printf("\n");
	puts(word); //���ڿ� ���� ��� �Լ�

	//apple
	//elppa

	return 0;
}