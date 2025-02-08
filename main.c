//Ce programme permet d'echanger les valeurs de deux nombres entrer par l'utilisateur
#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Entrer un nombre a: ");
    scanf ("%f",&a);
    printf("Entrer un nombre b: ");
    scanf ("%f",&b);
    c=b; //c prend la valeur de b
    b=a; //b prend la valeur de a
    a=c; //a prend la valeur de c
    printf("La valeur de a= %f\n la valeur de b=%f\n",a,b);
    return(0);
}
