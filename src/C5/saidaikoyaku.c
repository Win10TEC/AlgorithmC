#include<stdio.h>
int gcd_s(int x,int y){
	int i;
int v=(x<y)?x:y;

for(i=v;i>0;i--){
	printf("x=%d y=%d v=%d Xv=%d Yv=%d\n",x,y,i,x%v,y%v);
	if(x%v ==0 && y%v==0){
		
		return v;
}
}
return 1;

}
int gmain(void){
	int x,y;

	puts("2�̐����̍ő���񐔂����߂܂��B");
	printf("��������͂���F");
	scanf("%d",&x);

	printf("��������͂���F");
	scanf("%d",&y);

	printf("�ő���񐔂�%d�ł��B\n",gcd_s(x,y));


	return 0;
}