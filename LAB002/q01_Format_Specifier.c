#include <stdio.h>

int main(){
    int n;
    float f;
    char c;
    char s[50];


    scanf("%d",&n);
    scanf("%f",&f);
    scanf(" %c",&c);
    scanf("%s",s);

    printf("Integer: %d\n",n);
    printf("Float: %.3f\n",f);
    printf("Character: %c\n",c);
    printf("String: %s\n",s);

    return 0;
};