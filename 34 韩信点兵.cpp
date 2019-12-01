#include<stdio.h>
int main(void)
{
	int a,b,c,i,flag;
	scanf("%d%d%d",&a,&b,&c);
	for(i=10;i<101;i++,flag=0)
	   {
	     if((i%3==a)&&(i%5==b)&&(i%7==c))
	       {
		    printf("%d",i);
			flag=1; 
	        break;    /*Ìø³ö¸Ã²ãÑ­»·*/ 
           }
        }
    if (flag==0)
	  printf("No answer");
}

