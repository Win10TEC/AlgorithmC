#include <stdio.h>
#include "Member.h"
#include "LinkedList.h"

typedef enum {
	TERMINATE, INS_FRONT, INS_REAR,  RMV_FRONT, RMV_REAR, PRINT_CRNT,
	RMV_CRNT,  SRCH_NO,   SRCH_NAME, PRINT_ALL, CLEAR,
	PURGE_NO, PURGE_NAME, RETRIEVE,
}Menu;

Menu SelectMenu(void)
{
	int  i, ch;
	char *mstring[] = {	"先頭にノードを挿入", "末尾にノードを挿入",	"先頭のノードを削除",
		"末尾のノードを削除", "着目ノードを表示",	"着目ノードを削除",
		"番号で探索",		  "氏名で探索",			"全ノードを表示",
		"全ノードを削除",	  "番号同一ノード削除", "氏名同一ノード削除",
		"n番目のノード"
	};

	do {
		for (i = TERMINATE; i < CLEAR; i++) {
			printf("(%2d) %-18.18s  ", i + 1, mstring[i]);
			if ((i % 3) == 2)
				putchar('\n');
		}
		printf("( 0) 終了 ：");
		scanf_s("%d", &ch);
	} while (ch < TERMINATE || ch > CLEAR);

	return (Menu)ch;
}

int main(void){
		Menu menu;
		List list;

	Initialize(&list);
	do {
		Member x;
		switch (menu=SelectMenu())		{
		case INS_FRONT:
			x=ScanMember("先頭に挿入",MEMBER_NO | MEMBER_NAME);
			InsertFront(&list,&x);	
			break;

		case INS_REAR:
			x=ScanMember("未尾に挿入",MEMBER_NO | MEMBER_NAME);
			InsertRear(&list,&x);
			break;

		case RMV_FRONT:
			RemoveFront(&list);
			break;

		case RMV_REAR:
			RemoveRear(&list);
			break;

		case RMV_CRNT:
			RemoveCurrent(&list);
			break;

		case SRCH_NO:
			x=ScanMember("探索",MEMBER_NO);
			if(Search(&list,&x,MemberNoCmp)!=NULL)
				PrintLnCurrent(&list);
			else
				puts("その番号のデータはありません。");
			break;

		case SRCH_NAME:
			x=ScanMember("探索",MEMBER_NAME);
			if(Search(&list,&x,MemberNameCmp)!=NULL)
				PrintLnCurrent(&list);
			else
				puts("その名前のデータはありません。");
				break;

		case PRINT_CRNT:
			PrintCurrent(&list);
			break;

		case PRINT_ALL:
				Print(&list);
				break;

		case CLEAR:
			Clear(&list);
			break;

		}
		
	} while (menu != TERMINATE);

	Terminate(&list);
	return 0;
}