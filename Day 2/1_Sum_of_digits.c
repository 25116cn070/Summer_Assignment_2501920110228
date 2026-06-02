#include<stdio.h>

int main(){
    int n,d;
    printf("Enter a number; ");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        d=n%10;
        sum = sum+d;
        n=n/10;
    }
    printf("The sum of digits of given number is: %d",sum);
    return 0;
}