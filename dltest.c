#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

void main()
{
    void *handle;
    int (*sum)(int, int), (*subtract)(int, int),(*multiply)(int, int),(*divide)(int, int);
    char *error;
    handle = dlopen ("./lib/libtest.so", RTLD_LAZY);
    if (!handle) {
        fputs (dlerror(), stderr);
        exit(1);
    }
    sum = dlsym(handle, "sum"); 
    if ((error = dlerror()) != NULL) { 
        fprintf (stderr, "%s", error); 
        exit(1); 
    }
    subtract = dlsym(handle, "subtract");
    if ((error = dlerror()) != NULL) {
        fprintf (stderr, "%s", error);
        exit(1);
    }
    multiply = dlsym(handle, "multiply"); 
    if ((error = dlerror()) != NULL) { 
        fprintf (stderr, "%s", error); 
        exit(1); 
    }
    divide = dlsym(handle, "divide"); 
    if ((error = dlerror()) != NULL) { 
        fprintf (stderr, "%s", error); 
        exit(1); 
    }
    int a, b;
    printf("사칙연산\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d+%d = %d\n",a,b, (*sum)(a,b));
    if (a>b) printf("%d-%d = %d\n",a,b, (*subtract)(a,b));
    else printf("%d-%d = %d\n",b,a, (*subtract)(a,b));
    printf("%d*%d = %d\n",a,b, (*multiply)(a,b));
    if (a>b) printf("%d/%d = %d\n",a,b, (*divide)(a,b));
    else printf("%d/%d = %d\n",b,a, (*divide)(a,b));
    dlclose(handle);
}