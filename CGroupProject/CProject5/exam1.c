#include <stdio.h>

int sum(int a, int b) //�Ű�����
{
	int res; //��������
	res = a + b;
	return res;
}
int main() //�����Լ�
{
	//�Լ���? Ư���� ����� �����ϴ� ������ �ڵ� �����̴�.
	//�Լ��� ȣ���� �ؾ� �۵��Ѵ�.
	int a = 10, b = 20;
	int res; //��������

	res=sum(a,b); //�Լ�ȣ��
	printf("��� :%d\n",res);

	return 0; //1) ��ȯ�� 2)����
}