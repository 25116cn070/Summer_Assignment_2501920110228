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

    int maxFrequency = 0, element = arr[0];

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > maxFrequency){
        maxFrequency = count;
        element = arr[i];
        }
    }
    printf("Elemen with maximum frequency: %d (appers %d times)\n", element, maxFrequency);
    
    return 0;
}