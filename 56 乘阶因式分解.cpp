#include<stdio.h>
int main(void)
{
	int s,n,m,i,j,k;
	scanf("%d",&s);
	while(s--)
	{
	  scanf("%d%d",&n,&m);
      j=0;
	  for(i=m;i<=n;i++)   /*������������*/
	  {
	  	for(k=i;!(k%m);j++)  /*j�����������ĸ���*/ 
	  	 {
	  	 	k=k/m;   /*�����ʱ��i�ж��ٸ�m*/ 
		   }
	  }
	  printf("%d\n",j);
    } 
}
