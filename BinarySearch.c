#include<stdio.h>
int binarySearch(int arr[],int st,int end,int n){
    if(st>end){
        return -1;
    }
    int mid=st+(end-st)/2;
    if(arr[mid]==n){
        return mid;
    }else if(arr[mid]>n){
        end=mid-1;
    }else{
        st=mid+1;
    }
}

int main(){
    int arr[10]={4,6,7,8,12,14,16,17,34,67};
    int n;
    printf("Enter the number you want to search\n");
    scanf("%d",&n);
    printf("%d",binarySearch(arr,0,n-1,n));
    return 0;
}