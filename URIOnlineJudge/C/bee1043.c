#include <stdio.h>

int main(){
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if((a <= (b+c)) || (b <= (a+c)) || (c <= (a+b)))
        printf("Perimetro = %f\n", a+b+c);
    else
        printf("Area = %f\n", (c*(a+b))/2);

    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if((a + b > c) && (b + c > a) && (c + a > b))
        printf("Perimetro = %.1f\n", a + b + c);
    else
        printf("Area = %.1f\n", ((a + b)/2.0)*c);

    return 0;
}
