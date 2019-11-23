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
	char *mstring[] = {	"�擪�Ƀm�[�h��}��", "�����Ƀm�[�h��}��",	"�擪�̃m�[�h���폜",
		"�����̃m�[�h���폜", "���ڃm�[�h��\��",	"���ڃm�[�h���폜",
		"�ԍ��ŒT��",		  "�����ŒT��",			"�S�m�[�h��\��",
		"�S�m�[�h���폜",	  "�ԍ�����m�[�h�폜", "��������m�[�h�폜",
		"n�Ԗڂ̃m�[�h"
	};

	do {
		for (i = TERMINATE; i < CLEAR; i++) {
			printf("(%2d) %-18.18s  ", i + 1, mstring[i]);
			if ((i % 3) == 2)
				putchar('\n');
		}
		printf("( 0) �I�� �F");
		scanf("%d", &ch);
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
			x=ScanMember("�擪�ɑ}��",MEMBER_NO | MEMBER_NAME);
			InsertFront(&list,&x);	
			break;

		case INS_REAR:
			x=ScanMember("�����ɑ}��",MEMBER_NO | MEMBER_NAME);
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
			x=ScanMember("�T��",MEMBER_NO);
			if(Search(&list,&x,MemberNoCmp)!=NULL)
				PrintLnCurrent(&list);
			else
				puts("���̔ԍ��̃f�[�^�͂���܂���B");
			break;

		case SRCH_NAME:
			x=ScanMember("�T��",MEMBER_NAME);
			if(Search(&list,&x,MemberNameCmp)!=NULL)
				PrintLnCurrent(&list);
			else
				puts("���̖��O�̃f�[�^�͂���܂���B");
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