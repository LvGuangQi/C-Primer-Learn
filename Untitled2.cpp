#include<stdio.h>
int main()
{
  int n,i;
 
  printf("Input n:");
  scanf("%d",&n);
  double a=2,b=1,s=0; 
  
  for(i=0;i<n;i++)
  {
  	s=(a/b)+s;
	 a=a+b;
	 b=a-b; 
	


  }
   
   printf("%.3f\n",s);
 
return 0;
}
