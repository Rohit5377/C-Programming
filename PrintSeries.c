#include<stdio.h>
void print(int n){
    if(n==0){
        return ;
    }
    print(n-1);
    printf("%d\n",n);
    return;
}

int main(){
    int n;
    printf("Enter the range\n");
    scanf("%d",&n);
    print(n);
    return 0;
}