#include<stdio.h>
int main()
{
	int i,x,k,score[10];//k代表偶数的个数
	k=0;
	double sum,ave;
	sum=0;
	printf("Input number:");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&x);
		score[i]=x;
	
		if(score[i]%2==0)
		{
			k+=1;
			sum+=score[i];
			ave=sum/5; 
		    
		}
	}
	
		printf("the number of even number is:%d\n",k);
		printf("the average of even number is:%f\n",ave);	

	
	return 0;
 } 
