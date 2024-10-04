
#include <stdio.h>

int main() {
    int s1,s2,s3;
    printf("Enter vlue of side 1 ");
    scanf("%d",&s1);
    printf("Enter vlue of side 2 ");
    scanf("%d",&s2);
    printf("Enter vlue of side 3 ");
    scanf("%d",&s3);
    
    if(s1==s2 && s2==s3){
        printf("Equilateralk Triangle");
    }
    else if(s1==s2 || s2==s3 || s1==s3){
        printf("Isoscales Triangle");
    }
    else{
        printf("Scales Triangle");
    }
    return 0;
}
