#include<stdio.h>
void main(){
    int r,c,i,j;
    printf("Enter the value of the row \n");
    scanf("%d",&r);
    printf("Enter the value of the col \n");
    scanf("%d",&c);
    int a[r][c],b[r][c],ca[r][c],res[r][c];
    printf("ENTER THE VALUE FOR MATRIX A \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the value of matrix element %d of %d \n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER THE VALUE FOR MATRIX B \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the value of matrix element %d of %d \n",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("ENTER THE VALUE FOR MATRIX C \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the value of matrix element %d of %d \n",i,j);
            scanf("%d",&ca[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            res[i][j]=a[i][j]+b[i][j]+ca[i][j];
        }
    }
    printf("The addition of the above matrices are \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",res[i][j]);
        }
        printf(" \n");
    }
    
    
    
}