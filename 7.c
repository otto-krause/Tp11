#include<stdio.h>
void i(int num1,int num2)
{
    if(num1>num2)
    {
        printf("El mayor es: %d ",num1);
    }
    else
    {
        if(num2>num1)
        {
           printf("El mayor es: %d ",num2);
        }
           else
           {
               printf("Ambos son iguales");
           }

    }
}
int main()
{
    int num1,num2;
    printf("Ingrese 2 numeros\n");
    scanf("%d%d",&num1,&num2);
    i(num1,num2);
    return 0;
}
