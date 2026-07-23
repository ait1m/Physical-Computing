#include <stdio.h>
#include <math.h>

int main(){
    double price, sale;
    int n;
    scanf("%lf\n%lf\n%d",&price ,&sale, &n);

    double pro1 = price * n * (1 - sale/100);
    double pro2 = (floor(n/3)*2 + n%3) * price;

    if (pro1 <= pro2){
        printf("Discount %.0lf%%\n",sale);
        printf("%.02lf",pro1);
    }
    else {
        printf("Buy 2 Get 1\n");
        printf("%.02lf",pro2);
    }

    return 0;
};