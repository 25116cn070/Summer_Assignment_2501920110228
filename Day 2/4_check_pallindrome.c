#include<stdio.h>

int main(){
    int n, num;
    printf("Enter a number: ");
    scanf("%d",&n);
    int rev=0;
    num=n;
    while(num!=0){
        rev = rev*10 + (num%10);
        num = num/10;
    }
    if(n==rev){
        printf("The given number is palindrome");
    }
    else{
        printf("The given number is not palindrome");
    }
    return 0;
}