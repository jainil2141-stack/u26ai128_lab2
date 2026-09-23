#include <stdio.h>
int main(){
    int x,y,i; long pow=1;
    printf("Enter base and power: ");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++) pow=pow*x;
    printf("Power=%ld",pow);
    return 0;
}
