#include <stdio.h>

int main() {
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(i==n-1||j==0||i==j){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}