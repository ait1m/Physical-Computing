#include <stdio.h>
 
int main() {
    char name[50];
    char surname[50];
 
    scanf("%s",name);
    scanf("%s",surname);    
 
    printf("Hello! My name is %s %s\n" ,name,surname);
    return 0;
}