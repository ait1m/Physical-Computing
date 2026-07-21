#include <stdio.h>

int main(){
    char name[100];
    double power, w ,price;
    scanf("%[^\n]",name);
    scanf(" %lf\n %lf\n %lf",&power ,&w ,&price);
    printf("%.4lf\n%.4lf\n%.2lf\n",power,w,price);
    printf("%s",name);
    return 0;
};