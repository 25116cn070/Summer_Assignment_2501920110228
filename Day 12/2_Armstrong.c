#include<stdio.h>
#include<math.h>

int isArmstrong(int n){
    int original, rem, sum=0, digits=0;

    original =n;

    while(original != 0){
        digits++;
        original = original/10;
    }
    original = n;

    while(original != 0){
        rem = original%10;
        sum = sum+pow(rem,digits);
        original = original/10;
    }

    if(sum==n)
    return 1;
    else
    return 0;
}
int main(){
    
    int num;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isArmstrong(num)){
        printf("%d is an Armstrong Number",num);
    }
    else{
        printf("%d is Not an Armstrong Number", num);
    }

    return 0;
}