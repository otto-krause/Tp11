#include<stdio.h>
void i(),o();
int main()
{
    i();
    o();
}
void i()
{
    int num1,num2,sum=0;
    printf("Ingrese un numero para el perimetro \n ");
    scanf("%d",&num1);
    printf("Ingrese otro numero para el perimetro \n ");
    scanf("%d",&num2);
    sum=num1*2+num2*2;
    printf("El resultado del perimetro es %d ",sum);
    return 0;
}
void o()
{
    int num1,num2,mul=0;
    printf("\nIngrese un numero para calcular el area \n ");
    scanf("%d",&num1);
    printf("Ingrese otro numero para calcular el area \n ");
    scanf("%d",&num2);
    mul=num1*num2;
    printf("El resultado del area es %d ",mul);
    return 0;
}
