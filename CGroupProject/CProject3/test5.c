#include <stdio.h>

//������: 1 ,�⺻��� 1130��, 127.8/kw, tax=9%
//�����:2 ,�⺻��� 660��, 88.5/kw, tax=8%
//������:3, �⺻��� 370��, 52/kw, tax=5%

int main() {
	int code; //�ڵ� ��ȣ
	int amount; //��뷮
	double basic=0; //�⺻��� 
	double price=0; // kw�� ���
	double tax_rate=0; //���� ����
	double total;
	double tax; //����

	
	printf("�ڵ��ȣ�� �Է��ϼ���(1:������, 2:�����, 3:������) :");
	scanf_s("%d", &code);
	printf("���� ��뷮�� �Է��ϼ���(kw) :");
	scanf_s("%d", &amount);

	switch (code) {
	case 1:
		basic = 1130;
		price = 127.8;
		tax_rate = 0.09;
		break;
	case 2:
		basic = 660;
		price = 88.5;
		tax_rate = 0.08;
		break;
	case 3:
		basic = 370;
		price = 52;
		tax_rate = 0.05;
		break;
	}

	total = basic + price * amount;
	tax = total * tax_rate;
	total = total + tax;
	
	printf("���� ����� %.lf���Դϴ�.", total);

	return 0;
}