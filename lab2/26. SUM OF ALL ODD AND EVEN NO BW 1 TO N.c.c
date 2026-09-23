#include<stdio.h>
int main()
{
   /*	int N,i,n=0; 
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	n=n+i;
	printf("n=%d",n);
	*/
    int N,i,even=0,odd=0; 
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
	if(i%2==0)
	even=even+i;
	else
	odd=odd+i;
    }
	printf("sum of even=%d\n sum of odd=%d",even,odd);	
}
