#include<stdio.h>
int main(void)
{
	int i,b,c,a,d;
	printf("请输入组数：");
	scanf("%d",&i);   /*i为组数*/ 
	for(d=0;d<i;d++)   
     {	
	   printf("请输入一个数字：");
       scanf("%d",&c); 
	   for(b=1;b<c+1;b++)   /*输出奇数*/ 
	    {
	      if((b%2)==1)
	      printf("%d ",b);  
        }   
      printf("\n");
      for(a=1;a<c+1;a++)   /*输出偶数*/
	  {
	  if((a%2)==0)
	  printf("%d ",a);	
      } 
	  printf("\n") ;
    }
}
