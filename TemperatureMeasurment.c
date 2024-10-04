#include <stdio.h>
int main() {
    int temp;
    printf("Enter Temperature  ");
    scanf("%d", &temp);
    if(temp<=10){
        printf("Very Cold");
    }
    else if(temp>10 && temp<=20){
        printf("Cold");
    }
    else if(temp>20 && temp<=30){
        printf("Normal");
    }
    else if(temp>30 && temp<=40){
        printf("Hot");
    }
    else{
        printf("Very Hot");
    }
    return 0;
}





