#include<stdio.h>
int main(void)
{
	int i,b,c,a,d;
	printf("������������");
	scanf("%d",&i);   /*iΪ����*/ 
	for(d=0;d<i;d++)   
     {	
	   printf("������һ�����֣�");
       scanf("%d",&c); 
	   for(b=1;b<c+1;b++)   /*�������*/ 
	    {
	      if((b%2)==1)
	      printf("%d ",b);  
        }   
      printf("\n");
      for(a=1;a<c+1;a++)   /*���ż��*/
	  {
	  if((a%2)==0)
	  printf("%d ",a);	
      } 
	  printf("\n") ;
    }
}
