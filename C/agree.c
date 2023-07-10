 #include<stdio.h>

 int main(void) {

    char c;

    printf("Do you agree? ");
    scanf("%c", &c);

    if (c == 'y') {

        printf("Agreed.\n");
    }
    else if (c == 'n') {

        printf("Not agreed.\n");
    }

    return 0;
 }