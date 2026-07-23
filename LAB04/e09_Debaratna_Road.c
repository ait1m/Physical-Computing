#include <stdio.h>

int main(){
    double dis;
    scanf("%lf",&dis);

    if ((dis >= 0.00) && (dis <= 58.855)){
        if (dis <= 5.032){
            printf("Bangkok");
        }
        else if (dis <= 35.477){
            printf("Samut Prakarn");
        }
        else if (dis <= 52.900){
            printf("Chachoengsao");
        }
        else {
            printf("Chon Buri");
        }
    }
    else {
        printf("InValid");
    }

    return 0;
};