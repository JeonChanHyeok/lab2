#include <stdio.h>
#include <math.h>

int sum(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    if(a>=b) return a-b;
    else return b-a;
}
int multiply(int a, int b){
    return a*b;
}
int divide(int a, int b){
    if(a>=b) return a/b;
    else return b/a;
}
    