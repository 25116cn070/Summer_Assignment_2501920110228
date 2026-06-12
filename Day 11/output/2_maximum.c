#include<stdio.h>

int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    
    int n1, n2, result;

    printf("Enter two numbers :");
    scanf("%d %d", &n1, &n2);

    result = maximum(n1, n2);

    printf("Maximum number = %d", result);

    return 0;
}