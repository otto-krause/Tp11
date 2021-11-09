#include<stdio.h>
void i();
int main()
{
    i();
}
void i()
{
    int num1,num2,sum=0,tot1=0,tot2=0;
    printf("Ingrese la cantidad de hombres postulados ");
    scanf("%d",&num1);
    printf("Ingrese la cantidad de mujeres postuladas ");
    scanf("%d",&num2);
    sum=num1+num2;
    tot1=(100*num1)/(num1+num2);
    tot2=(100*num2)/(num1+num2);
    printf("El porcentaje de mujeres postuladas es de %d % y de hombres es de %d % ",tot2,tot1);
    return 0;
}
