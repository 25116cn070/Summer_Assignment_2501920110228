#include<stdio.h>

int main(){
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter element of first array: ");
    for( i=0; i<n1; i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d",&n2);
    int arr2[n2];
     printf("Enter element of second array: ");
    for( i=0; i<n2; i++){
        scanf("%d",&arr2[i]);
    }
    printf("Common elements: \n");
    for(i=0; i<n1; i++){
        for(j=0; j<n2; j++){
            if(arr1[i]==arr2[j]){

                int duplicate = 0;
                for(int k=0; k<i; k++){
                    if(arr1[k] == arr1[i]){
                        duplicate = 1;
                        break;
                    }
                }
                if(!duplicate){
                    printf("%d ", arr1[i]);
                }
                break;
            }
        }
    }
    return 0;
}