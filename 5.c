#include<stdio.h>
void i(int num1,int num2,int num3,int num4,int num5,int cal)
{
    cal=num1+num2+num3+num4+num5;
    printf("La suma de todas las resistencias es de: %d ",cal);
}
int main()
{
    int num1,num2,num3,num4,num5,cal=0;
    printf("Ingrese las 5 resistencias : ");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
    printf("La resistencia 1 es:%d\n La resistencia 2 es:%d\n La resistencia 3 es:%d\n La resistencia 4 es:%d\n La resistencia 5 es:%d\n",num1,num2,num3,num4,num5);
    i(num1,num2,num3,num4,num5,cal);
    return 0;
}


