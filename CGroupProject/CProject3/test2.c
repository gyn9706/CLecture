#include <stdio.h>

int main() {
	int nInput = 0; //점수
	char chCredit; //학점
	scanf_s("%d", &nInput);
	
	/*if (nInput >= 90) nInput = 1;
	if (nInput >= 80) nInput = 2;
	if (nInput >= 70) nInput = 3;
	if (nInput >= 60) nInput = 4;*/
	
	nInput = nInput / 10;
	
	switch (nInput) {
	case 10:
	case 9:
		chCredit = 'A';
		break;
	case 8:
		chCredit = 'B';
		break;
	case 7:
		chCredit = 'C';
		break;
	case 6:
		chCredit = 'D';
		break;
	default:
		chCredit = 'F';
	}
	printf("학점은 %c입니다.", chCredit);

	/*switch (nInput) {
	case 100:case 99:case 98:case 97:case 96:case 95:case 94:case 93:case 92:case 91:case 90:
		chCredit = 'A';
		break;
	case 89:case 88:case 87:case 86:case 85:case 84:case 83:case 82:case 81:case 80:
		chCredit = 'B';
		break;
	case 79:case 78:case 77:case 76:case 75:case 74:case 73:case 72:case 71:case 70:
		chCredit = 'C';
		break;
	case 69:case 68:case 67:case 66:case 65:case 64:case 63:case 62:case 61:case 60:
		chCredit = 'D';
		break;
	default:
		chCredit = 'F';
	}*/
	

	return 0;
}