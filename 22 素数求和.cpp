#include<stdio.h>
int main(void)
{
	int i,j,r,a,b,c,sum=0;
	printf("������������");
	scanf("%d",&i); 
	for(r=0;r<i;r++)
	{ 
	 printf("������������ݸ�����") ;
	 scanf("%d",&a);
	  for(i=0;i<a;i++)
	  {
	  	scanf("%d",&b);      /*ȡi������*/ 
        for(j=2;j<b;j++)
	       if(b%2==0)        /*�ж�����*/ 
	          break;
	    if(j==b)
	    {
	    sum+=b;         /*���*/ 
		}
	  }
	  printf("%d",sum);   
	  sum=0;
    }
    return 0;
}  
