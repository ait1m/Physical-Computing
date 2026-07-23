#include <stdio.h>

int main(){
    int start, end;
    scanf("%d %d", &start, &end);

    //ช่วงเร่งความเร็ว
    double sa = (1.5*1.5) / (2 * 0.5);
    double ta = 1.5 / 0.5;

    //หาระยะทาง
    double pos_start, pos_end;

    if (start > 1) {
        pos_start = 6.0 + (4.0 * (start - 2));
    } else {
        pos_start = 0.0;
    }

    if (end > 1) {
        pos_end = 6.0 + (4.0 * (end - 2));
    } else {
        pos_end = 0.0;
    }

    // ระยะทางรวมระหว่างสองชั้น
    double Stotal = pos_end - pos_start;
    if (Stotal < 0) {
        Stotal = -Stotal;
    }

    // ช่วงวิ่งคงที่
    double sc = Stotal - (2 * sa);
    double tc = sc / 1.5;

    double total = ta + tc + ta;


    printf("%.02lf",total);

    return 0;
};

