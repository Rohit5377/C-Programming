// Online C compiler to run C program online
#include <stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}


int main() {
    printf("%d",factorial(6));
    return 0;
}
