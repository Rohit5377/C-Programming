#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int n=5;
    if(n>0){
        printf("Factorial = %d",fact(n));
    }else{
        printf("Factorial is not defined for negative number");
    }
    return 0;
}