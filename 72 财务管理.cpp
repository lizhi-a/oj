#include<stdio.h>
int main(void)
{
	int i;
	float a[12],sum=0;  /*����Ϊ������*/ 
	for(i=0;i<12;i++)
	{
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	
	printf("$%.2f\n",sum/12);
}
