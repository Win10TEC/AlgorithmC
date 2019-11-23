#include<stdio.h>
#include<string.h>
char *nspace(char *s,int n){
	//n�̃X�y�[�X������Ԃ�
	int i;
	for(i=0;i<n;i++){
		s[i]=' ';
	}
	s[i]='\0';
	return s;
}
int bf_match(const char txt[],const char pat[],int &cnt){
	int pt=0;
	int pp=0;
	char *r;
	char *space1=" ";
	char *space2=" ";
	char s[128];
	int x,y;
	
	while (txt[pt]!= '\0' && pat[pp]!= '\0')
	{
		printf("%s pt=%d pp=%d\n",txt,pt,pp);//�e�L�X�g
		cnt++;
		if(txt[pt]==pat[pp]){
			r="+";
			x=pt;
			y=pt-pp;
			pt++;
			pp++;
			
		}
		else{
			r="|";
			x=pt;
			y=pt-pp;
			pt=pt-pp+1;
			pp=0;

		}
		
		printf("%s%s\t",nspace(s,x),r);//��r�ʒu
		printf("x=%d\n",x);
		printf("%s%s\t",nspace(s,y),pat);//�p�^�[��
		printf("y=%d\n",y);
		printf("\n");
	}
	
	if(pat[pp]== '\0')
		return pt-pp;
	return -1;
}

int bm_match(const char txt[],const char pat[]){
	int pt=strlen(txt) -1;
	int pp=strlen(pat) -1;
	int cntn=0;
	while (pt == 0 && txt[pt] == pat[0]){
		printf("%s pt=%d pp=%d\n",txt,pt,pp);//�e�L�X�g
		
		if(txt[pt]==pat[pp]){
			pt--;
			pp--;
			
		}
		else{
			pt=strlen(txt) -1 -cntn;
			pp=strlen(pat) -1;

		}
	}
	if(pat[pp]== '\0')
		return pt-pp;
	return -1;
}

void list8_12(void)
{
	int idx;
	char s1[256];
	char s2[256];
	int cnt= 0;

	puts("�͂܂����@");

	printf("�e�L�X�g:");
	scanf("%s",s1,sizeof(s1));

	printf("�p�^�[��:");
	scanf("%s",s2,sizeof(s2));

	idx=bf_match(s1,s2,cnt);

	if(idx==-1){
		puts("�e�L�X�g���Ƀp�^�[�������݂��Ă��܂���B");
	}
	else{
		printf("%d�����ڂɃ}�b�`���܂��B\n",idx+1);
	}
	printf("��r�����񐔂�%d�ł����B\n",cnt);
}

void list8_9(void){
	int idx;
	char s1[256];
	char s2[256];
	int cnt= 0;

	puts("�͂܂����@");

	printf("�e�L�X�g:");
	scanf("%s",s1,sizeof(s1));

	printf("�p�^�[��:");
	scanf("%s",s2,sizeof(s2));

	idx=bm_match(s1,s2);


	if(idx==-1){
		puts("�e�L�X�g���Ƀp�^�[�������݂��Ă��܂���B");
	}
	else{
		printf("%d�����ڂɃ}�b�`���܂��B\n",idx+1);
	}
	printf("��r�����񐔂�%d�ł����B\n",cnt);
}

int main(void)
{
	list8_12();
	list8_9();
	return 0;

}