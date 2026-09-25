#include <stdio.h>

int main(void){
    int i,k,j;
    int a[3][3];
    int b[3][3];
    int c[3][3];

    printf("Enter First Matrix here :");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("First Matrix is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter Second Matrix here :");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Second Matrix is :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("Addition of two matrix is :\n");
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=b[i][j]+a[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}