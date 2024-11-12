
#include <stdio.h>
int power(int n,int m){
    if(m==0){
        return 1;
    }
   return n*power(n,m-1);
}


int main() {
    int n=2, m=3;
   int c= power(n,m);
   printf("%d",c);

    return 0;
}
