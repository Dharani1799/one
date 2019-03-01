#include <stdio.h>
void main() 
{
	int n,k,i,s[10];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(s[i]==k)
	    {
	        printf("yes");
	    }
	}
}
