// 24. FIND Y(x,n)
#include <stdio.h>
int main()
{
 int x,n; float Y;
 scanf("%d %d",&x,&n);
 if(n==1) Y=1+x;
 else if(n==2) Y=1+(float)x/n;
 else if(n==3) Y=1+x*n;
 else Y=1+n*x;
 printf("Y=%.2f",Y);
 return 0;
}
