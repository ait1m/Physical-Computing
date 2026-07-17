#include <stdio.h>
#include <math.h>

int main(){
    double price,d,h,volume,bath;
    scanf("%lf\n%lf\n%lf",&price,&d,&h);
    
    volume = h*(M_PI*pow(d/2,2));
    bath = price/volume;

    printf("Volume : %.2lfml\n",volume);
    printf("Baht/ml : %.4lf",bath);

    return 0;
};
