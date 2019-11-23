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

	puts("2つの整数の最大公約数を求めます。");
	printf("整数を入力せよ：");
	scanf("%d",&x);

	printf("整数を入力せよ：");
	scanf("%d",&y);

	printf("最大公約数は%dです。\n",gcd_s(x,y));


	return 0;
}