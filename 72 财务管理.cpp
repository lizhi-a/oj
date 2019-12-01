#include<stdio.h>
int main(void)
{
	int i;
	float a[12],sum=0;  /*定义为浮点型*/ 
	for(i=0;i<12;i++)
	{
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	
	printf("$%.2f\n",sum/12);
}
