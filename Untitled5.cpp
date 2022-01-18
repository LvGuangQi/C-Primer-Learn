#include<stdio.h>
int main()
{
	int i,x,y,a[5];
	printf("input array:");
	scanf("%d",&x);
	for(i=0;i<=4;i++)
	{
		a[i]=x;
	}
	printf("input number:");
	scanf("%d",&y);
	for(i=0;i<=4;i++)
	{
		if(y==a[i])
		{
			printf("i=%d",i);
			break;
		}
		if(i==4)
		{
			printf("error\n");
		}
	}
	
	return 0;
 } 
