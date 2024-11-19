#include <stdio.h>

int main() {
    int sum=0;
   int a[2][2];
   for(int i=0;i<2;i++){
       for(int j=0;j<2;j++){
           printf("Enter element ");
           scanf("%d",&a[i][j]);
       }
   }
   for(int i=0;i<2;i++){
       for(int j=0;j<2;j++){
           sum+=a[i][j];
       }
   }
   printf("Sum = %d",sum);
   

    return 0;
}
