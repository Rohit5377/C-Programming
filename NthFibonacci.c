#include<stdio.h>
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    printf("Enter the range\n");
    scanf("%d",&n);
    printf("Fibonacci Number = %d",fib(n));
    return 0;
}