#include <stdio.h>
#include <stdlib.h>

void my_assert(int expression){
    if(expression){
    }else{
        perror("assert error");
        abort();
    }
}