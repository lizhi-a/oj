#include<stdio.h>
int main(void)
{
	int i,j,a[5],t;
	printf("���������������һ������� "); 
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<5;j++)
	{
	   for(i=0;i<4-j;i++)
	    {
	    	if(a[i]>a[i+1])      /*ð������,��С����*/ 
	    	 {
	    	 	t=a[i];
	    	 	a[i]=a[i+1];
	    	 	a[i+1]=t;
			 }
		}
    }
    printf("%d %d",a[0],a[4]);
}
