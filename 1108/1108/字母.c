#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	char ch;
	printf("ÇëÊäÈëÒ»¸ö×ÖÄ¸£º\n");
	scanf("%c", &ch);
	if (ch >= 'a'&&ch <= 'z')
	{
		ch = ch - 32;
		printf("%c", ch);
	}
	else if (ch >= 'A'&&ch <= 'Z')
	{
		ch = ch + 32;
		printf("%c", ch);
	}
	else
	{
		printf("ÊäÈë´íÎó");
	}
	system("pause");
	return 0;
}