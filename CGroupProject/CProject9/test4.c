#include <stdio.h>

void user_strcpy(char* des, char* src);

int main() {

	char fruit[20];

	user_strcpy(fruit, "strawberry");
	printf("�迭�� ����� ���ڿ� :%s\n", fruit);

	return 0;
}

//�����ͺ��� �̿��ؼ� fruit��� ������� strawberry ����� �����͸� �Ѱ���
void user_strcpy(char* des, char* src) //fruit[20]�� �����ּ�, strawberry�� s�����ּ�
{
	while (*src != '\0')
	{
		*des = *src;
		src++;
		des++; //���� �����������!!
	}
	*des = '\0'; //���ڿ��� ���� �ݵ�� �� ���ڰ� ���ԵǾ�� �Ѵ�.
	//return des; //�����Ͷ� ��ȯŸ�� ����! 
}


