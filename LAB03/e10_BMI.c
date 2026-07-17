#include <stdio.h>

int main(){
    float h,w;
    scanf("%f\n%f",&h,&w);
    
    h = h * 0.01;

    printf("%f",w / (h*h));

    return 0;
};