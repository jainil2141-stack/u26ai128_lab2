#include <stdio.h>
int main(){
    int a,b; char op;
    printf("Enter a b and operator(+ - * /): ");
    scanf("%d %d %c",&a,&b,&op);
    switch(op){
        case '+': printf("Ans=%d",a+b); break;
        case '-': printf("Ans=%d",a-b); break;
        case '*': printf("Ans=%d",a*b); break;
        case '/': printf("Ans=%d",a/b); break;
        default: printf("Invalid operator");
    }
    return 0;
}
