#include<stdio.h>
int main(){
    int arr[5]={2,4,3,1,6};
    int max=-1;
    int res=-1;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            res=max;
            max=arr[i];
        }else if(arr[i]>res && arr[i]!=max){
            res=arr[i];
        }
    }
    printf("Second maximun = %d",res);
}