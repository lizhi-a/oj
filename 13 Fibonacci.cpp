#include<stdio.h>
int main(void)
{
	int i,a=1,b=1,c=1,t=2;
	scanf("%d",&i);
	if(i==1||i==2) /*前两个数为1时,输出1*/ 
	  printf("1");
	if(i>2)
	{
	 while(1)
 	{
	 a=b;
	 b=c;
	 c=a+b;	
	 t++;
	 if(t==i)      /*输出第i个数*/ 
	   {
	   	printf("%d",c);
	   	break; 
	   }
	 }
    }
 } 
