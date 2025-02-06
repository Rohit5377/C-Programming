#include<stdio.h>
int digit(int n){
    if(n==0){
        return 0;
    }
    return 1+digit(n/10);
}

int main(){
    int n,count=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Total digits = %d",digit(n));
    return 0;
}