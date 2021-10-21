#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void my_perror(const char *s){
    if(s){
        printf("%s : %s\n",s,strerror(errno)); // 들어온 문자열 뒤에 : + 오류내용
    }else{
        printf("%s",strerror(errno)); // 오류내용만 출력
    }
}

int main(int argc, char *argv[]){
    FILE *f;

    if(argc <2){
        printf ("으아아");
        exit(1);
    }
    if((f = fopen(argv[1],"r")) == NULL){ 
        my_perror("Cannot open a file...error message");
    }
}