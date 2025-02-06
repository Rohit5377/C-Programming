#include<stdio.h>
int isPalindrome(char ch[],int i,int j){
    if(i>j){
        return 1;
    }
    if(ch[i]!=ch[j]){
        return 0;
    }
    return isPalindrome(ch,i+1,j-1);
}

int main(){
    int n;
    printf("Enter length of string\n");
    scanf("%d",&n);
    char ch[n];
    printf("Enter the String\n");
    scanf("%s",&ch);
    if(isPalindrome(ch,0,n-1)){
        printf("Palindrome String");
    }else{
        printf("Not Palindrome String");
    }
    return 0;
}