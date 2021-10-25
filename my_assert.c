#include <stdio.h>
#include <stdlib.h>

void my_assert(int expression){
    if(expression){
    }else{
        printf("assert_error\n");
        abort();
    }
}

void foo(int num){
    my_assert(((num>=0) && (num<=100)));
    printf("foo : num = %d\n",num);
}

int main(int argc, char *argv[]){
   int num;
   if(argc < 2){
       fprintf(stderr, "a");
       exit(1);
   }
   num = atoi(argv[1]);
   foo(num);
}