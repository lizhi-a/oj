#include<stdio.h>
int main (void)
{
	int N;
	char a,b,c,t;
	printf("请输入数据行数：");
	scanf("%d",&N);
    getchar();
	while(N--)
	{
	  scanf("%c%c%c",&a,&b,&c);
	  getchar();
	  if(a>b)
	  {
	  	t=a;
	  	a=b;
	  	b=t;
	  }
	  if(a>c)
	  	  {t=a;
			a=c;
			c=t;
			}
	  if(b>c)
	   {
		 t=b;
	  	 b=c;
	  	 c=t;
	  	 }
	} 
	printf("%c %c %c\n",a,b,c);
}
