#include<stdio.h>

int main(void) {

    char name[10];

    printf("What's your name? ");
    scanf("%[^\n]", name);

    printf("Hello, ");
    puts(name);

    return 0;
}