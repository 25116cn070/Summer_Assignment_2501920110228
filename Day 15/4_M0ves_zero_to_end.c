#include<stdio.h>

int main(){

    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array's elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    
    
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            arr[count] = arr[i];
            count++;
        }
    }
    while(count<n){
        arr[count] = 0;
        count++;
    }
    
    
    printf("Array after moving zeros to end: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}