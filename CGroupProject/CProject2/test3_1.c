#include <stdio.h>

/*
���� ��뷮�� kw������ �Է��ϸ� ������� ������ִ� ���α׷�
�⺻���: 660��
kw�� �����: 88.5��
��ü���: �⺻���+�����뷮*kw�� �����
����: ��ü����� 9%
���� �����=��ü���+����
*/

int main() {
	int amount;
	double price, tax, total;
	char coment[31] = "���� ��뷮�� �Է��ϼ���(kw) :";

	printf("%s",coment);
	scanf_s("%d", &amount);
	price = 660 + (amount * 88.5);
	tax = price * 0.09;
	total = price + tax;

	printf("���� ������� %lf���Դϴ�.\n", total);


	return 0;
}