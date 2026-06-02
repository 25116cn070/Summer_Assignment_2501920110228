#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int product=1;
    while(n!=0){
        product = product*(n%10);
        n=n/10;
    } 
    printf("The product of given number is: %d",product);
    return 0;
}