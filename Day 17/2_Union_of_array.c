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
    int unionArr[n1=n2];
    int k=0;

    for(i=0; i<n1; i++){
        unionArr[k++] = arr2[i];
    }

    printf("Union of arrays:\n");
    for(i=0; i<k; i++){
        int isDuplicate = 0;
        for(j=0; j<i; j++){
            if(unionArr[i] == unionArr[j]){
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate){
            printf("%d ",unionArr[i]);
        }
    }
    return 0;
}