#include <stdio.h>
#include <string.h>

int main() {
	char season[80];
	char spr[] = "��";
	char sum[] = "����";
	char fal[] = "����";
	char win[] = "�ܿ�";

	printf("�������� �Է��ϼ��� :");
	scanf_s("%s", season, 80);

	//res = strcmp(str1, str2);	
	if(strcmp(spr,season)==0) printf("������\n"); //��
	else if (strcmp(sum, season) == 0) printf("���\n");  //����
	else if (strcmp(fal, season) == 0) printf("��ȭ\n");  //����
	else if (strcmp(win, season) == 0) printf("��ȭ\n");  //�ܿ�
	else printf("�������� �߸� �Է��Ͽ����ϴ�.\n");

	//if(strcmp("��",season)==0) printf("������\n"); (o)


	return 0;
}