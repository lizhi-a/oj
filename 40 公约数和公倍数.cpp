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
			if(b%m==0&&a%m==0)   /*�����Լ��*/
			{
		 	   printf("%d ",m);
			   break;	 
		    }
		 }
		 if(a>b)
		 {
			t=a;
			a=b;  /*aΪ��Сֵ*/ 
			b=t;
		 }
		n=a;
		while(1)
		 {
			if(n%a==0&&n%b==0) /*����С������*/
			{
			  printf("%d\n",n);
			  break;
		    }
			n++;
	     }
    }
}
