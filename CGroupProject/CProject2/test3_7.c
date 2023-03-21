#include <stdio.h>

int main() {
	char name[80]; // = "yena_kim";
	char sex;
	int age;
	double height;

	printf("이름을 입력하세요 :");
	scanf_s("%s", name,80 );
	printf("나이를 입력하세요 :");
	scanf_s("%d", &age);
	printf("성별을 입력하세요 :");
	scanf_s(" %c", &sex, 1); //공백 or \n 넣기 - if not, 나이치고 엔터누르면 그냥 넘어가버림. 엔터를 문자로 인식.
	printf("키를 입력하세요 :");
	scanf_s("%lf", &height);

	printf("이름:%s, 성별:%c, 나이:%d, 키:%.2lf\n",name,sex,age,height);

	return 0;
}