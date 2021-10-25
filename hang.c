#include <stdio.h>
#include <stdlib.h>

int main(){
    int garo, sero, garo2, sero2;

    printf("첫번째 행렬 가로 길이 : ");
    scanf("%d",&garo);
    printf("첫번째 행렬 세로 길이 : ");
    scanf("%d",&sero);

    printf("두번째 행렬 가로 길이 : ");
    scanf("%d",&garo2);
    printf("두번째 행렬 세로 길이 : ");
    scanf("%d",&sero2); 

    int** hang1 = (int**)malloc(sizeof(int*) * garo);
    for (int i = 0 ; i < garo ; i++){
        hang1[i] = (int*)malloc(sizeof(int) * sero);
    }

    int** hang2 = (int**)malloc(sizeof(int*) * garo2);
    for (int i = 0 ; i < garo2 ; i++){
        hang2[i] = (int*)malloc(sizeof(int) * sero2);
    }
    for(int i = 0; i < garo ; i ++){
        for(int j = 0 ; j < sero ; j ++){
            hang1[i][j] = rand()%10;
        }
    }
    
    for(int i = 0; i < garo2 ; i ++){
        for(int j = 0 ; j < sero2 ; j ++){
            hang2[i][j] = rand()%10;
        }
    }
    printf("<첫번째 행렬>\n");
    for(int i = 0; i < garo ; i ++){
        for(int j = 0 ; j < sero ; j ++){
            printf("%d ",hang1[i][j]);
        }
        printf("\n");
    }

    printf("<두번째 행렬>\n");

    for(int i = 0; i < garo2 ; i ++){
        for(int j = 0 ; j < sero2 ; j ++){
            printf("%d ",hang2[i][j]);
        }
        printf("\n");
    }
    

    if(garo != garo2 || sero != sero2){
        printf("두 행렬의 가로와 세로 길이가 같아야 합니다.\n");
        return 0;
    }

    int** hang_sum = (int**)malloc(sizeof(int*) * garo);
    for (int i = 0 ; i < garo ; i++){
        hang_sum[i] = (int*)malloc(sizeof(int) * sero);
    }
    for(int i = 0; i < garo ; i ++){
        for(int j = 0 ; j < sero ; j ++){
            hang_sum[i][j] = hang1[i][j] + hang2[i][j];
        }
    }
    printf("<두 행렬의 합>\n");
    for(int i = 0; i < garo ; i ++){
        for(int j = 0 ; j < sero ; j ++){
            printf("%d ",hang_sum[i][j]);
        }
        printf("\n");
    }
    for(int i = 0 ; i < garo ; i ++){
        free(hang_sum[i]);
    }
    for(int i = 0 ; i < garo ; i ++){
        free(hang1[i]);
    }
    for(int i = 0 ; i < garo2 ; i ++){
        free(hang2[i]);
    }
    free (hang1);
    free (hang2);
    free (hang_sum);
}