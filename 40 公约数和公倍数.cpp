#include<stdio.h>
int main(void)
{
	int i,a,b,t,m,n;
	scanf("%d",&i);
	while(i--)
	{
		scanf("%d %d",&a,&b);
		for(m=a;m>0;m--)
		 {
			if(b%m==0&&a%m==0)   /*求最大公约数*/
			{
		 	   printf("%d ",m);
			   break;	 
		    }
		 }
		 if(a>b)
		 {
			t=a;
			a=b;  /*a为最小值*/ 
			b=t;
		 }
		n=a;
		while(1)
		 {
			if(n%a==0&&n%b==0) /*求最小公倍数*/
			{
			  printf("%d\n",n);
			  break;
		    }
			n++;
	     }
    }
}
