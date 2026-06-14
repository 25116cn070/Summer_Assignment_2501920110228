#include<stdio.h>

int main(){
    int n, key, found=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array's elements:" );
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter element to be search: ");
    scanf("%d",&key);

    for(int i=0; i<n; i++){
        if(arr[i]==key){
            printf("Element found at position: %d\n",i+1);
            found = 1;
            break;
        }
    }
    if(found==0){
        printf("Element not found in the array.\n");
    }
    return 0;
}