#include<stdio.h>
int main(void)
{  	
    while(1)
    {
    int n,a,b,c;
	scanf("%d",&n);
    a=n/100;     /*��λ*/ 
	b=n/10%10;   /*ʮλ*/ 
	c=n%10;      /*��λ*/
	
    if((a*a*a+b*b*b+c*c*c==n)&&(n>=100)&&(n<=1000))
	   printf("Yes\n");
	else
	   if(n==0)   /*����0��������������*/
         break;          
       else
         printf("No\n");
    continue;
    }
}
