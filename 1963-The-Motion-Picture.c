#include<stdio.h>
int main() {

    float a,b,c;
    scanf("%f %f", &a, &b);

    c=(((b-a)*100.00) / a);
    printf("%.2f %%\n",c);

    return 0;
}