#include <stdio.h>

int main(){
    char c[200];
    scanf("%[^\n]",c);
    printf("Hello, %s!",c);

    return 0;
};