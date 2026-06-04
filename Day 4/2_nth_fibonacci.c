#include<stdio.h>

int main(){
    int n, a=0, b=1, c;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    if(n==1){
        printf("Nth Fibinacci term = %d",a);
    }
    else if(n==2){
        printf("Nth Fibinacci term=%d",b);
    }

    else{
        for(int i=3; i<=n; i++){
            c=a+b;
            a=b;
            b=c;
        }

        printf("Nth Fibinacci term =%d",c);
    }

    return 0;
}