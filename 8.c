#include<string.h>

void main()
{
	char a[100];
	int l,i;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
	    if(i==0)
	    {
	    a[0]=toupper(a[0]);
	    }
	    if(a[i]==' ')
	    {
	    a[i+1]=toupper(a[i+1]);
	    }
	    
	}
	printf("%s",a);
		
}
