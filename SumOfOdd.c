#include <stdio.h>

int main() {
    int n,sum=0;
    printf("Enter Range ");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2){
        sum += i;
    }
    printf("Sum = %d",sum);

    return 0;
}
