#include<stdio.h>

void swap_ptr(char **x, char **y)
{
	char *tmp=*x;
	*x=*y;
	*y=tmp;
}

int main(void)
{
	char *s1="ABCD";
	char *s2="EFGH";

	printf("�|�C���^s1��\"%s\"���w���Ă��܂��B\n",s1);
	printf("�|�C���^s2��\"%s\"���w���Ă��܂��B\n",s2);

	printf("\n�|�C���^s1�̒l�� %p �ł��B\n",s1);
	printf("�|�C���^s2�̒l�� %p �ł��B\n",s2);

	printf("\n�|�C���^&s1�̒l�� %p �ł��B\n",&s1);
	printf("�|�C���^&s2�̒l�� %p �ł��B\n",&s2);

	swap_ptr(&s1,&s2);

	puts("\n�|�C���^s1��s2�̒l���������܂����B\n");

	printf("�|�C���^s1��\"%s\"���w���Ă��܂��B\n",s1);
	printf("�|�C���^s2��\"%s\"���w���Ă��܂��B\n",s2);
	printf("\n");

	return 0;
}