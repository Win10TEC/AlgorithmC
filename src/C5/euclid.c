#include<stdio.h>

int gcd(int x,int y){
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}

int emain(void){
	int x,y;
	puts("2つの整数の最大公約数を求めます。");
	printf("整数を入力せよ：");
	scanf_s("%d",&x);

	printf("整数を入力せよ：");
	scanf_s("%d",&y);

	printf("最大公約数は%dです。\n",gcd(x,y));
	return 0;
}