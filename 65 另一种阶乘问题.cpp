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
		while(i<=n)       /*计算1!!+2!!+3!!...*/ 
		{
		    t=1;
			for(j=1;j<=i;j+=2)  /*计算单个 1!!,2!!...的值*/ 
			{
		      t=t*j;
			}
			sum+=t;
			i++;
		}
		printf("%d\n",sum);	
	}
}
