#include <stdio.h>
/*���� ���
��� ������ �Ǽ������� �Է�
����� 90�� �̻��� A, 90�� �̸� 80�� �̻��� B,80�� �̸� 70���̻�C, �׿� F
*/

int main() {
	double avg;
	char grade;

	printf("��� ����? :");
	scanf_s("%lf", &avg);


		if (avg >= 90) grade = 'A';
		else if (avg >= 80) grade = 'B';
		else if (avg >= 70) grade = 'C';
		else grade = 'F';
	
		printf("����: %c", grade);
	
	return 0;
}