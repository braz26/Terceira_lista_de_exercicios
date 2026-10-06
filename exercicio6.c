#include <stdio.h>

int main() {
    const double PI = 3.14159;
    double raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;

    printf("Area do circulo: %.2f\n", area);

    return 0;
}