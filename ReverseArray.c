#include<stdio.h>
int main(){
    int n=5;
    int arr[5]={2,4,6,7,9};
    int count=0;
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}