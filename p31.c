#include <stdio.h>
#include<string.h>
int main()
{
   char s[100];
   int i,l,c=0,c1=0;
   gets(s);
   l=strlen(s);
   for(i=0;i<l;i++)
   {
       if(s[i]=='(')
       c++;
       else if(s[i]==')')
      c1++;
   }
   if(c==c1)
   printf("yes");
   else
   printf("no");
}
