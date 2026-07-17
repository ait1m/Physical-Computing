#include <stdio.h>

int main(){
    char name[50];
    char surname[50];
    char nickname[20];
    char id[10];

    scanf("%s %s",name,surname);
    scanf(" %s",nickname);
    scanf("%s",id);

    printf("Hello World, my name is %s (%s)\n",nickname,name);
    printf("\n");
    printf("Student ID: %s\n",id);
    printf("Name: %s %s\n",name,surname);
    printf("Nickname: %s",nickname);

    return 0;
};