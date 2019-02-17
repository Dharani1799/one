#include <stdio.h>
void main() 
{
	int n,a,d,i,s=0;
	scanf("%d %d %d",&a,&d,&n);
	
    for(i=0;i<n;i++)
    {
        s=s+(a+i*d);
    }
    printf("%d",s);

}
