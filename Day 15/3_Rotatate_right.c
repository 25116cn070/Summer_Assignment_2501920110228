#include<stdio.h>

int main(){

    int n,k;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array's elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("enter number of rotation (k): ");
    scanf("%d", &k);

    k=k%n;

    int temp[n];

    for(int i=0; i<k; i++){
        temp[i] = arr[n-k+i];
    }
    
    for(int i=0; i<n-k; i++){
        temp[k+i]=arr[i];
    }
    
    printf("Array after %d right rotation: ",k);
    for(int i=0; i<n; i++){
        printf("%d ",temp[i]);
    }

    return 0;
}