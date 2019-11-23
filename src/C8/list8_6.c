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
	printf("������F");
	scanf("%s",str,sizeof(str));

	printf("���̕������%d�����ł��B�i����1�j\n",str_len1(str));
	printf("���̕������%d�����ł��B�i����2�j\n",str_len2(str));
	printf("���̕������%d�����ł��B�i����3�j\n",str_len3(str));

	printf("\n");

	return 0;
}