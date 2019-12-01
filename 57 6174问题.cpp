#include<stdio.h>
int main(void)
{
	int N,a[4],i,j,t,max,min,m,k;
	scanf("%d",&N);
	while(N--)
    {   
        k=1;
		scanf("%d",&m);
		while(m!=6174)
		{
		  for(i=0;i<4;i++)
		  {
		  	a[i]=m%10;      /*分别取m得个位、十位、百位、千位*/
		    m/=10;
		  }
		  for(i=0;i<4;i++)  //a[i]与a[j]作比较 ，使a[i] 值最大
		  {
			for(j=i+1;j<4;j++)
			{
				if(a[i]<a[j])
				{
				   t=a[i];
				   a[i]=a[j];
				   a[j]=t;
				}
			}
		  }	
		  max=a[0]*1000+a[1]*100+a[2]*10+a[3];
		  min=a[3]*1000+a[2]*100+a[1]*10+a[0]; 
		  m=max-min;
		  k++;
		}
	}
	printf("%d\n",k);
}
