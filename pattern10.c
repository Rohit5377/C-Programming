#include <stdio.h>
int main() {
    int n=5;
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){
            printf("%d",j+1);
        }
        for(int j=i;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}