#include<stdio.h>
void i();
int main()
{
    i();
}
void i()
{
    float num1,num2,tot=0;
    printf("Ingrese la superficie ");
    scanf("%f",&num1);
    printf("Ingrese la fuerza ");
    scanf("%f",&num2);
    tot=num2/num1;
    printf("La presion sobre la superficie es de %0.2f Pa",tot);
    return 0;
}
