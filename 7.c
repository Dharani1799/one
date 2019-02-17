#include<stdio.h>
#include<string.h>
void main()
{
char a[100],t; 
int len,i;

scanf("%s",a);
len=strlen(a);
if(len%2==0)
{
for(i=0;i<len;i+=2)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;

}
printf("%s",a);
}
else
{
for(i=0;i<(len-1);i+=2)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;

}
printf("%s",a);
}
}
