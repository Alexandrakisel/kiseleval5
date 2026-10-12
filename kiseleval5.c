#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES 
#include <math.h>

double z1(double gr);
double z2(double x);
void z3(int A, int B, int C);
double dz();

int main() {
    setlocale(LC_ALL, "Ru");
    printf("Практика 5\n");
    printf("\nЗадание 1\n");
    double gr;
    printf("введите угол в градусах: ");
    scanf("%lf\n", &gr);
    double sin_val = z1(gr);
    printf("%g град = %.6f\n", gr, sin_val);

    printf("\nЗадание 2\n");
    double x;
    printf("введите значение x: ");
    scanf("%lf\n", &x);
    double y = z2(x);
    printf("\nрезультат:\n");
    printf("значение x: %.1f\n", x);
    printf("вычисленное значение функции y: %.2f\n", y);

    printf("\nЗадание 3\n");
    int A, B, C;
    printf("Введите числа A, B, C (через пробел): ");
    scanf("%d %d %d\n", &A, &B, &C);
    z3(A, B, C);

    printf("\nДомашнее задание:\n");
    double res=dz();
    printf("Результат: %lf\n", res);
    return 0;
}

double z1(double gr) {
    double rad = gr * M_PI / 180.0;
    return sin(rad);
}

double z2(double x)
{
    const double k = 1.2;
    double a = exp(k*x);
    double b = pow(log(x), 2.0) + pow(k, 5.0);
    return pow(pow(a, 2.0) + pow(b, 2.0), 1.0/3.0);
}

void z3(int A, int B, int C)
{
    int uslA = (A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0);
    int uslB = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
    printf("условие выполнено (1 - да, 0 - нет): %d\n", uslA);
    printf("условие выполнено (1 - да, 0 - нет): %d\n", uslB);
}

double dz(){
double x=0.1722;
double y=6.33;
double z=0.000325;

double r1=fabs(x-y);
double r2=pow(x,2);
double r3=x+3*r1+r2;
double r4=r1*z+r2;

return 5*atan(x) - (1.0/4.0)*acos(x)*(r3/r4);
}