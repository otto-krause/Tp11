#include<stdio.h>
void i(float num1,float cal)
{
    cal=num1/8;
    printf("La octaba parte es : %0.2f ",cal);
}
int main()
{
    int num1,cal=0;
    printf("Ingrese un numero entero ");
    scanf("%d",&num1);
    i(num1,cal);
    return 0;
}
