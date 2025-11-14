#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main() {

	FILE* fp = fopen("data.txt", "wt");

	if (fp = NULL) {
		printf("Failed to open file");

		return -1;//왜 -1를 return 하지?
	}

	fputc('A', fp);//왜 오류가 뜰까 똑같이 했는데..int main괄호가 없어서 그랬군 해결함!
	fputc('B', fp);
	fputc('C', fp);

	fclose(fp);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char ch;

	FILE* fp = fopen("C:/KHS_Code/C_V2022/ch5/ex1/data.txt", "rt");


	if (fp == NULL) {
		printf("Failed to open file");
		return -1;
	}
	for (int i = 0;i < 3; i++)
	{
		ch = fgetc(fp);//fp는 정의괴지 않아도 쓸수있구나 신기하네 정체가 뭐지
		printf("%c?n", ch);
	}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	int main(void);//void없어도 되겠찌?,노션에서는 ;없던데 추가해야 오류가 안뜨는데 뭐지
	{

		char name[10];
		int age;
		FILE* fp = fopen("student.txt", "wt");

		for (int i = 0;i < 3;i++)
		{
			printf("다음 순서로 입력(name age): ");
			scanf("%s, %d" , name,&age);
			getchar();
			fprintf(fp, "%s %d\n", name, age);
		}
		fclose(fp);
		return 0;
	}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
	int main(void);//왜 계속 ;를 붙어야한다고 뜨는거야?
	{
		int* ptr1 = (int*)malloc(sizeof(int));
		int* ptr2 = (int*)malloc(sizeof(int) * 3);
		*ptr1 = 20;

		for (int i = 0 ; i < 3; i++)
			ptr2[i] = i;

		printf("%d \n", *ptr1);
		for (int i = 0;i < 3; i++)
			printf("%d ", ptr2[i]);

		free(ptr1);
		free(ptr2);

		return 0;
	}