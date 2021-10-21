#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

void foo(int num){
     void *handle;
    int (*my_assert)(int expression);
    char *error;

    handle = dlopen("./lib/libtest.so",RTLD_LAZY);
    if(!handle){
        fputs(dlerror(),stderr);
        exit(1);
    }
    my_assert = dlsym(handle,"my_assert");
    if((error = dlerror()) != NULL){
        fprintf(stderr,"%s",error);
        exit(1);
    }

    (*my_assert)(((num>=0) && (num<=100)));
    printf("foo : num = %d\n",num);
}

int main(int argc, char *argv[]){
   int num;
   if(argc < 2){
       fprintf(stderr, "asd");
       exit(1);
   }
   num = atoi(argv[1]);
   foo(num);
}