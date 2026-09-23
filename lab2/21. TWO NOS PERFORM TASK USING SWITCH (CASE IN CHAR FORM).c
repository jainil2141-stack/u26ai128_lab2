#include <stdio.h>
int main(){
    float a,b; char op;
    scanf("%f %f %c",&a,&b,&op);
    switch(op){
        case '+': printf("%.2f",a+b); break;
        case '-': printf("%.2f",a-b); break;
        case '*': printf("%.2f",a*b); break;
        case '/': printf("%.2f",a/b); break;
        case '%': printf("%d",(int)a%(int)b); break;
        default: printf("Invalid");
    }
    return 0;
}
