#include<stdio.h>

int main(){
    int n, sum=0, total;

    printf("Enter the value of n(range of numbers): ");
    scanf("%d", &n);

    int arr[n-1];
    printf("Enter %d numbers (from 1 to %d, with one missing):\n ", n-1, n);
    for(int i=0; i<n-1; i++){
        scanf("%d", &arr[i]);
        sum +=arr[i];
    }
    total = n*(n+1)/2;
    printf("Missing number is: %d\n",total-sum);

    return 0;
}