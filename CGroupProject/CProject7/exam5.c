#include <stdio.h>

int main() {

	int num1 = 100, num2 = 100;
	int* pnum;
	
	//printf("%p", *pnum); //�ʱ�ȭ�ȵǼ� ��¾ȵ�
	//*pnum = &num1; //pnum�� ����Ű�� � ������ �����Ⱚ�� num1�ּ�����?! (x)
	pnum = &num1; //pnum �����ͺ����� num1�ּ�����
	*pnum = *pnum + 30; //(*pnum)+=30; //num1= 130

	pnum = &num2;
	*pnum = *pnum - 30;

	printf("num1:%d num2:%d", num1, num2);
}