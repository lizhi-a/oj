#include<stdio.h>
int main(void)
{
	int a,b,c,t;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
	 t=a;
	 a=b;
	 b=t;
	}
	if(c<a)
	 {
	 	t=c;
	 	c=a;
	 	a=t;
	 }
	if(c>a&&c<b)
	  {
	  	t=c;
	  	c=b;
	  	b=t;
	  }
	printf("%d %d %d",a,b,c);
}
