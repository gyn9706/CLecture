#include <stdio.h>
//#include <string.h>

int main() {
	char novel[800] = {0};
	char str_in[80] = {0};

	while (1) {
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(str_in);
		if (strcmp(str_in, "��")== 0) break;
		
		strcat(str_in, " "); //strcat_s(str_in,sizeof(str_in), " ");
		strcat(novel, str_in); //strcat_s(novel,sizeof(noverl), str_in);
		printf("��������� �ٰŸ� : ");
		puts(novel);
		putchar('\n');
	}

	return 0;
}