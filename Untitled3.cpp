#include<stdio.h>
int main()
{
   int i,x,score[5];
   double sum,ave;
   sum=0;
   printf("input numbers:");
   for(i=0;i<=4;i++) 
   {
   		scanf("%d",&x);
   		score[i]=x;
   		sum+=score[i];
   		ave=sum/5;
   }
   printf("ave=%.2f\n",ave);
   
   

	
	return 0;
 } 
