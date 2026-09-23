#include <stdio.h>
int main() {
    float m1,m2,m3,m4,m5,per;
    scanf("%f %f %f %f %f", &m1,&m2,&m3,&m4,&m5);
    per = (m1+m2+m3+m4+m5)/5;
    printf("Per = %.2f\n", per);
    if(per >= 60) printf("First Division");
    else if(per >= 50) printf("Second Division");
    else if(per >= 40) printf("Third Division");
    else printf("Fail");
    return 0;
}
