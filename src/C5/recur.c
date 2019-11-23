#include<stdio.h>
void recur(int n){
	if(n>0){
		recur(n-1);
		printf("%d\n",n);
		recur(n-2);
	}
}
int wmain(void){
	int x;
	printf("��������͂���F");
	scanf("%d",&x);
	recur(x);
	return 0;
}