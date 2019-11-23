#include<stdio.h>

int gcd(int x,int y){
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}

int emain(void){
	int x,y;
	emaintest();
	puts("2�̐����̍ő���񐔂����߂܂��B");
	printf("��������͂���F");
	scanf("%d",&x);

	printf("��������͂���F");
	scanf("%d",&y);

	printf("�ő���񐔂�%d�ł��B\n",gcd(x,y));
	return 0;
}