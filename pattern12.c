#include <stdio.h>
int main() {
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf("*");
        }
        for(int k=0;k<=2*i-1;k++){
            printf(" ");
        }
        for(int j=0;j<n-i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        for(int k=0;k<=2*(n-i-1)-1;k++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}