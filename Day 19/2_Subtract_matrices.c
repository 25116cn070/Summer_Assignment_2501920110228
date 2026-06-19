#include<stdio.h>

int main(){

    int r, c;
    printf("Enter number of rows and column of matrices: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter elements of first matrix: ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int brr[r][c];
    printf("Enter elements of second matrix: ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&brr[i][j]);
        }
    }
    
    int subtract[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
          subtract[i][j] = arr[i][j] - brr[i][j];  
        }
    }

    printf("Subtract of two matrices: \n");
     for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d  ",subtract[i][j]);
        }
        printf("\n");
    }
    return 0;
}