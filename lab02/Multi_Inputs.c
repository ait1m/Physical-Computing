#include <stdio.h>

int main(){
    char text1[30];
    char text2[30];
    char text3[30];
    char text4[30];

    scanf("%s",text1);
    scanf("%s",text2);
    scanf("%s",text3);
    scanf("%s",text4);

    printf("String 1: %.*s\n",3,text1);
    printf("String 2: %.*s\n",4,text2);
    printf("String 3: %.*s\n",5,text3);
    printf("String 4: %.*s\n",6,text4);
    return 0;
};