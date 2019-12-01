#include<stdio.h>
int main(void)
{
	int i,j,r,a,b,c,sum=0;
	printf("请输入组数：");
	scanf("%d",&i); 
	for(r=0;r<i;r++)
	{ 
	 printf("请输入该组数据个数：") ;
	 scanf("%d",&a);
	  for(i=0;i<a;i++)
	  {
	  	scanf("%d",&b);      /*取i个数据*/ 
        for(j=2;j<b;j++)
	       if(b%2==0)        /*判断素数*/ 
	          break;
	    if(j==b)
	    {
	    sum+=b;         /*求和*/ 
		}
	  }
	  printf("%d",sum);   
	  sum=0;
    }
    return 0;
}  
