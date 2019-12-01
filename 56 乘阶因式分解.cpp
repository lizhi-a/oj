#include<stdio.h>
int main(void)
{
	int s,n,m,i,j,k;
	scanf("%d",&s);
	while(s--)
	{
	  scanf("%d%d",&n,&m);
      j=0;
	  for(i=m;i<=n;i++)   /*遍历所有因数*/
	  {
	  	for(k=i;!(k%m);j++)  /*j计算质因数的个数*/ 
	  	 {
	  	 	k=k/m;   /*求出此时的i有多少个m*/ 
		   }
	  }
	  printf("%d\n",j);
    } 
}
