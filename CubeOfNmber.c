#include <stdio.h>

int main() {
    int n,cube=1;
    printf("Enter Number ");
    scanf("%d", &n);
    for(int i=1;i<=3;i++){
        cube=cube*n;
    }
    printf("Cube of %d = %d",n,cube);

    return 0;
}
