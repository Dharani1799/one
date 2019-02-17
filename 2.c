#include<stdio.h>
#include<string.h>
void main()
{
 int l,i;
 char s[20];
 gets(s);
 l=strlen(s);
 for(i=l-1;i>=0;i--)
 {
 	printf("%c",s[i]);
	 }	
}
