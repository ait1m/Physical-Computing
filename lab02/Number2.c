#include <stdio.h>

int main(){
    char num[5];

    scanf("%5s",num);

    printf("%c%81c%c%80c%c%c%79c%c%c%c%78c%c%c%c%c",num[0],num[0],num[1],num[0],num[1],num[2],num[0],num[1],num[2],num[3],num[0],num[1],num[2],num[3],num[4]);

    return 0;
};