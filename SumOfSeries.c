#include <stdio.h>

int main() {
    int a=9,n,x=10;
    int y=a,sum=a;
    printf("ENTER TERM ");
    scanf("%d",&n);
    printf("%d",a);
    for(int i=1;i<n;i++)
    {
        a=a+y*x;
        printf("+%d",a);
        x=x*10;
        sum=sum+a;
    }
    printf(" =%d", sum);

    return 0;
}
