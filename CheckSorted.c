#include<stdio.h>
int main(){
    int arr[5]={2,4,6,7,9};
    int count=0;
    for(int i=1;i<5;i++){
        if(arr[i-1]>arr[i]){
           count=1;
           break;
        }
    }
    if(count==0){
        printf("Sorted array");
    }else{
        printf("Not Sorted array");

    }
}