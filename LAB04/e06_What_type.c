#include <stdio.h>
#include <ctype.h>

int main(){
    char x;
    scanf("%c",&x);

    if (isalnum(x)){
        if (islower(x)){
            printf("lowercase");
        }
        else if (isupper(x)){
            printf("uppercase");
        }
        else{
            printf("number");
        }
    }
    else {
        printf("error");
    }

    return 0;
};