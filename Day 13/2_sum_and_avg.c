#include<stdio.h>

int main(){

    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the array's elements: ");
    for(int i=0; i<n; i++){
        
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }  
    int average=sum/n;

    printf("The sum of array's elements: %d\n",sum);

    printf("The average of array's elements: %d", average);

    return 0;
}