#include <stdio.h>

int main() {
    char a;
    printf("Enter Character  ");
    scanf("%c", &a);
    if((a>=65 && a<=92) || (a>=97 && a<=122)
    ){
        printf("Aplhabet");
    }
    else{
        printf("Not Alphabet");
    }
    return 0;
}
