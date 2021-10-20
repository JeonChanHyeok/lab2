#include <stdio.h>
#include "4chic.h"

int main(){
    int a,b;
    printf("사칙연산\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d+%d = %d\n",a,b, sum(a,b));
    if (a>b) printf("%d-%d = %d\n",a,b, subtract(a,b));
    else printf("%d-%d = %d\n",b,a, subtract(a,b));
    printf("%d*%d = %d\n",a,b, multiply(a,b));
    if (a>b) printf("%d/%d = %d\n",a,b, divide(a,b));
    else printf("%d/%d = %d\n",b,a, divide(a,b));
}