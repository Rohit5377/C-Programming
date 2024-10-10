#include <stdio.h>

int main() {
    int start,end,n;
    printf("Enter Starting Number ");
    scanf("%d",&start);
    printf("\nEnter Ending Number ");
    scanf("%d",&end);
    printf("\nEnter user choice ");
    scanf("%d",&n);
    while(start<=end){
        if(start==n){
            printf("\nYes Number is in the range");
        }
        start++;
    }

    return 0;
}
