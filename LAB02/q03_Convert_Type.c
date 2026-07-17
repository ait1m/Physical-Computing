#include <stdio.h>

int main(){
    int num;
    float num2;
    char c;

    scanf("%d",&num);
    scanf("%f",&num2);
    scanf(" %c",&c);

    printf("%.3f\n",(float) num);
    printf("%d\n",(int) num2);
    printf("%d",(int)c);

    return 0;
};