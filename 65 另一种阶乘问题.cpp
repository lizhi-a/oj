#include<stdio.h>
int main(void)
{
	int a,n,sum,t,i,j;
	scanf("%d",&a);
	while(a--)
	{
		sum=0;
		i=1;
		scanf("%d",&n);
		while(i<=n)       /*����1!!+2!!+3!!...*/ 
		{
		    t=1;
			for(j=1;j<=i;j+=2)  /*���㵥�� 1!!,2!!...��ֵ*/ 
			{
		      t=t*j;
			}
			sum+=t;
			i++;
		}
		printf("%d\n",sum);	
	}
}
