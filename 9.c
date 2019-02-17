#include<stdio.h>

void main()
{
   int i,j,l,h,f=0,c=0;
   scanf("%d %d",&l,&h);
   for(i=l;i<=h;i+2)
   {
       for(j=2;j<=i/2;j++)
       {
           if(i%j!=0)
           
               f=1;
               else
               f=0;
           }
           if(f==1)
           c++;
       }
   
printf("%d",c);
}

