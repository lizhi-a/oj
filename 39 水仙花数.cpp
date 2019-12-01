#include<stdio.h>
int main(void)
{  	
    while(1)
    {
    int n,a,b,c;
	scanf("%d",&n);
    a=n/100;     /*百位*/ 
	b=n/10%10;   /*十位*/ 
	c=n%10;      /*个位*/
	
    if((a*a*a+b*b*b+c*c*c==n)&&(n>=100)&&(n<=1000))
	   printf("Yes\n");
	else
	   if(n==0)   /*输入0代表程序输入结束*/
         break;          
       else
         printf("No\n");
    continue;
    }
}
