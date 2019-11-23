#include<stdio.h>

void move(int no,int x,int y){
	if(no>1)
		move(no-1,x,6-x-y);
	printf("\n�~��[%d]��%d������%d���ֈړ�\n",no,x,y);
	if(no>1)
		move(no-1,6-x-y,y);
}
int hano1_main(void){
	int n;
	printf("�n�m�C�̓�\n�~�Ղ̖����F");
	scanf("%d",&n);
	move(n,1,3);
	return 0;
}