#include<stdio.h>
#include<string.h>

int str_cmp(const char *s1,const char *s2)
{
	while (*s1==*s2)
	{
		if(*s1=='\0')
			return 0;
		s1++;
		s2++;
		
	}

	return (unsigned char)*s1-(unsigned char)*s2;

}

int main(void)
{
	char st[128];
	puts("\"ABCD\"‚Æ‚Ì•¶š—ñ‚ğ”äŠr‚µ‚Ü‚·");
	puts("\"XXXX\"‚ÅI—¹‚µ‚Ü‚·");

	while (1)
	{
		printf("•¶š—ñstF");
		scanf("%s",st,sizeof(st));

		if(strcmp("XXXX",st)==0)
			break;
		printf("str_cmp(\"ABCD\",st)=%d\n",str_cmp("ABCD",st));
	}
	return 0;
}
