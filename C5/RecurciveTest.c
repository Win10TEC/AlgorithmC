#include<stdio.h>
#include"recurcive.h"

typedef enum{
	TERMINATE,FACTORIAL,EUCLID,KAIJO,K_YAKUSU,RECUR
}Menu;

Menu SelectMenu(void){
	int ch;
	do
	{
		printf("(1)階乗　(2)最大公約数　(3)階乗2　(4)最大公約数2　(5)解析　(0)終了");
		scanf_s("%d",&ch);

	} while (ch< TERMINATE || ch>RECUR);
	return (Menu)ch;
}

int main(void){
	Menu menu;
	do
	{
		switch (menu = SelectMenu())
		{
		case FACTORIAL:
			fmain();
			break;

		case EUCLID:
			emain();
			break;

		case KAIJO:
			hmain();
			break;

		case K_YAKUSU:
			gmain();
			break;
			
		case RECUR:
			wmain();
			break;
		}
	} while (menu != TERMINATE);
	return 0;
}