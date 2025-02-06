#include<stdio.h>
void reverse(char ch[],int i,int j){
    if(i>j){
        return;
    }
    char temp=ch[i];
    ch[i]=ch[j];
    ch[j]=temp;
    reverse(ch,i+1,j-1);
}

int main(){
    int n;
    printf("Enter length of string\n");
    scanf("%d",&n);
    char ch[n];
    printf("Enter the String\n");
    scanf("%s",&ch);
    reverse(ch,0,n-1);
    printf("%s",ch);
    return 0;
}