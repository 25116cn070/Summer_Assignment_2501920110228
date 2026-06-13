#include<stdio.h>
#include<limits.h>
int main(){
    
    int arr[6];
    printf("Enter the array elements: ");
    for(int i=0; i<6; i++){
    scanf("%d", &arr[i]);
    }
    int max= INT_MIN;
    int min = INT_MAX;
    for(int i=0; i<6; i++){
        if(max<arr[i]){
            max = arr[i];
        }
        else if(min>arr[i]){
            min = arr[i];
        }
        
    }
    printf("The largest element of array: %d\n",max);
    printf("The smallest element of array: %d",min);

    return 0;
}