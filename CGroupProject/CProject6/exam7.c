#include <stdio.h>

int main() {
	//���� �迭
	char word[5];
	word[0] = 'L';
	word[1] = 'o';
	word[2] = 'v';
	word[3] = 'e';
	word[4] = '\0'; // Null �߰� -> ���ڿ����� �����Ϸ��� �˷���

	char A[3] = "HI"; //���ڿ�+1(Null)�� �迭ũ������ 

	printf("%s\n", word);
	printf("%zd\n", sizeof(char));

	for (int i = 0; i < 5; i++) {
		printf("%c ", word[i]);
	}
	return 0;
}