#include<stdio.h>
#include"recurcive.h"

typedef enum{
	TERMINATE,FACTORIAL,EUCLID,KAIJO,K_YAKUSU,RECUR
}Menu;

Menu SelectMenu(void){
	int ch;
	do
	{
		printf("(1)�K��@(2)�ő���񐔁@(3)�K��2�@(4)�ő����2�@(5)��́@(0)�I��");
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