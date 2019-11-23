#include<stdio.h>

int factorial(int n){
	if(n>0)
		return n * factorial(n-1);
	else
		return 1;
}
int fmain(void){
	int x;
	printf("®”‚ğ“ü—Í‚¹‚æF");
	scanf_s("%d",&x);

	printf("%d‚ÌŠKæ‚Í%d‚Å‚·B\n",x,factorial(x));
	return 0;
}