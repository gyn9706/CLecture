#include <stdio.h>

int main() {
	char str1[] = "My String";
	char* str2 = "Your String";
	
	printf("%s %s\n", str1, str2);//My String Your String

	str2 = "Our String"; 
	printf("%s %s\n", str1, str2); //My String Our String

	str1[0] = 'X';
	printf("%s %s\n", str1, str2); //Xy String Our String

	str2[0] = 'X';
	printf("%s %s\n", str1, str2); // �ȉ�(���� ������ ����, but �� �����Ұ�!)


	return 0;
}