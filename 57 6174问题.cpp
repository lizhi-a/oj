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
		  	a[i]=m%10;      /*�ֱ�ȡm�ø�λ��ʮλ����λ��ǧλ*/
		    m/=10;
		  }
		  for(i=0;i<4;i++)  //a[i]��a[j]���Ƚ� ��ʹa[i] ֵ���
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
