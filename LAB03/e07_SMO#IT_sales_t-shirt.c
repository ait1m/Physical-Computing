#include <stdio.h>

int main(){
    double price;
    double sale;
    double n;

    scanf("%lf\n%lf\n%lf",&price,&sale,&n);

    printf("%.2lf",(price - (price * sale / 100)) * n);

    return 0;
};