#include <stdio.h>

int main() {
	int ary[] = { 1,2,3,4,5};
	int i, r;
	int temp;
	int size;


	size = sizeof(ary) / sizeof(ary[0]);
	printf("ó�� �迭�� ����� �� :");
	for (i = 0; i < size; i++) {
		printf("%d ", ary[i]); //12345��µ�
	}
	putchar('\n');
	//�迭���� index 01234 -> 43210���� 0-4��, 1-3�� ���� �ٲ� ����ϴ� ���α׷�
	for (i = 0; i < size / 2; i++) {
		r = size - 1 - i; //size-1�� �ε��� max��!!! 0 4 1 3 2 2
		temp = ary[i];
		ary[i] = ary[r];
		ary[r] = temp;
	}
	for (i = 0; i < size; i++) {
		printf("%d ", ary[i]);
	}

	return 0;
}

	/*
	r = (size-1)/2; //2
	if(size%2==1){
		for (i = 0; i < (size+1)/2; i++) {
			temp = ary[r-i]; //t=2 1 0 
			ary[r-i] = ary[r+i]; //2=2 1 = 3  0 = 4 
			ary[r+i] = temp; //2=2 3=1 4=0
		} //Ȧ���϶�
	}else{
		for (i = 0; i < size / 2; i++) {
			temp = ary[r - i];
			ary[r - i] = ary[(r + 1) + i];
			ary[(r + 1) + i] = temp;
		} //¦���϶� 
	}
	*/
	
	