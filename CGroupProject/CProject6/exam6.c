#include <stdio.h>

int main() {
	int ary[] = { 1,2,3,4,5};
	int i, r;
	int temp;
	int size;


	size = sizeof(ary) / sizeof(ary[0]);
	printf("처음 배열에 저장된 값 :");
	for (i = 0; i < size; i++) {
		printf("%d ", ary[i]); //12345출력됨
	}
	putchar('\n');
	//배열순서 index 01234 -> 43210으로 0-4값, 1-3값 서로 바꿔 출력하는 프로그램
	for (i = 0; i < size / 2; i++) {
		r = size - 1 - i; //size-1이 인덱스 max값!!! 0 4 1 3 2 2
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
		} //홀수일때
	}else{
		for (i = 0; i < size / 2; i++) {
			temp = ary[r - i];
			ary[r - i] = ary[(r + 1) + i];
			ary[(r + 1) + i] = temp;
		} //짝수일때 
	}
	*/
	
	