#include<stdio.h>

int main(){

    int n;
    printf("Enter number of elemets: ");
    scanf("%d",&n);
    int arr[n];

    printf("enter the array's elements: ");

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
     int even=0, odd=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d", even, odd);
    return 0;
}