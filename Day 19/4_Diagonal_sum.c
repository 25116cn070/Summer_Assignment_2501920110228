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
    int sum = 0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(i == j){
                sum += arr[i][j];
            }
        }
    }
    printf("The diagonal sum of matrix: %d", sum);
    return 0;
}