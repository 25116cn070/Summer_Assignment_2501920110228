#include<stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int fact=1;
    if(n<0){
        printf("Factorial of a negative number does not exist");
    }
   else{
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }

    printf("The factorial of given number is: %d",fact);
    }

    return 0;
}