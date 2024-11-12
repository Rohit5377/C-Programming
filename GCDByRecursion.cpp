#include <stdio.h>
int gcd(int n, int m,int c){
    
    if(c==1){
        return 1;
    }
    if(n%c==0 && m%c==0){
        return c;
    }else{
        gcd(n,m,c-1);
    }
}

int main() {
    int n=12,m=20;
    int c= n<m? n:m;
    printf("%d", gcd(n,m,c));

    return 0;
}
