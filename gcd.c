#include<stdio.h>
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int n,m,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the second number\n");
    scanf("%d",&m);
    printf("GCD = %d",gcd(n,m));
    return 0;
}
































// #include<stdio.h>
// int gcd(int n,int m,int i){
//     if(n%i==0 && m%i==0){
//         return i;
//     }
//     return gcd(n,m,i-1);
// }

// int main(){
//     int n,m,i;
//     printf("Enter the number\n");
//     scanf("%d",&n);
//     printf("Enter the second number\n");
//     scanf("%d",&m);
//     if(n>m){
//         i=m;
//     }else{
//         i=n;
//     }
//     printf("GCD = %d",gcd(n,m,i));
//     return 0;
// }