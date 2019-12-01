#include<stdio.h>
int main(void)
{
	int a,n,m,b,c,t=0;     /*a为组数，n为总个数，m为总腿数，兔为b,鸡为c*/ 
	scanf("%d",&a);
	while(a--)
	{
		scanf("%d%d",&n,&m);
		for(b=0;b<100;b++)
		{
		    for(c=0;c<100;c++)
		    {
		  	  if((b+c==n)&&(b*4+c*2==m))
		  	   {
		  	     printf("%d %d\n",c,b);
		  	     t++;
		  	   }  
		    }
	    }
	    if(t==0)
	    printf("No answer\n");
    }
	
}
