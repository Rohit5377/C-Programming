#include<stdio.h>
int pow(int n){
    if(n==0){
        return 1;
    }
    return 2*pow(n-1);
}

int main(){
    int n;
    printf("Enter the power\n");
    scanf("%d",&n);
    printf("Product = %d",pow(n));
    return 0;
}