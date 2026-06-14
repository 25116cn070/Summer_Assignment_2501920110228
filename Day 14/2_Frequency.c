#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the array's elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int element;
    printf("Enter element to find frequency: ");
    scanf("%d",&element);

    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==element){
            count++;
        }
    }
    if(count==0){
        printf("Element %d not found in array.\n", element);
    }
    else{
        printf("Frequency of %d = %d\n", element, count);
    }
    return 0;
}