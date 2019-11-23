#include<stdio.h>

int factorial(int n){
	if(n>0)
		return n * factorial(n-1);
	else
		return 1;
}
int fmain(void){
	int x;
	printf("��������͂���F");
	scanf("%d",&x);

	printf("%d�̊K���%d�ł��B\n",x,factorial(x));
	return 0;
}