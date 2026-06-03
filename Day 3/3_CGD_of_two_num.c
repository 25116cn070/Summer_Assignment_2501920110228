#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers a and b: ");
    scanf("%d %d",&a,&b);
    while(b!=0){
        int temp=b;
        b=a%b;//swap
        a=temp;//swap
    }
    printf("CGD is: %d ",a);
    return 0;
}