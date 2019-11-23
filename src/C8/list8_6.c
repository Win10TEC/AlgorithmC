#include<stdio.h>

int str_len1(const char *s)
{
	int len=0;
	while (s[len])
		len++;
	return len;
}

int str_len2(const char *s)
{
	int len=0;
	while(*s++)
		len++;
	return len;
}

int str_len3(const char *s)
{
	const char *p=s;
	while (*s)
		s++;
	return s-p;
}

int main(void)
{
	char str[256];
	printf("文字列：");
	scanf("%s",str,sizeof(str));

	printf("その文字列は%d文字です。（その1）\n",str_len1(str));
	printf("その文字列は%d文字です。（その2）\n",str_len2(str));
	printf("その文字列は%d文字です。（その3）\n",str_len3(str));

	printf("\n");

	return 0;
}