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

    int x;
    printf("Enter sum: ");
    scanf("%d",&x);

    int totalpair=0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==x){
                totalpair++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("Total pair: %d",totalpair);
return 0;
}    