#include<stdio.h>

int main(){

    int r1, c1;
    printf("Enter number of rows and column of first matrix: ");
    scanf("%d %d", &r1, &c1);

    int arr[r1][c1]; 
    printf("Enter elements of first matrix: ");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int r2, c2;
    printf("Enter number of rows and column of second matrix: ");
    scanf("%d %d", &r2, &c2);
    int brr[r2][c2];
    printf("Enter elements of second matrix: ");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int res[r1][c2];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            res[i][j] = 0;

            for(int k=0; k<c1; k++){
                res[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }
    printf("The resultant matrix is: \n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}