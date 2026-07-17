#include <stdio.h>

int main() {
    char name[30];
    char surname[30];
    int id;
    int day , month , year;
    double gpa;

    scanf("%s",name);
    scanf("%s",surname);
    scanf("%d",&id);
    scanf("%d/%d/%d",&day,&month,&year);
    scanf("%lf",&gpa);

    printf("Fullname: %s %s\n",name,surname);
    printf("ID: %d\n",id);
    printf("DOB: %02d-%02d-%d\n",day,month,year);
    printf("GPA: %.2lf\n",gpa);

    return 0;

};