//Ce programme echange les valeurs de trois nombres entrer par l'utilisateur
#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("Entrer un nombre a:");
    scanf("%f", &a);
    printf("Entrer un nombre b:");
    scanf("%f", &b);
    printf("Entrer un nombre c:");
    scanf("%f", &c);
    d=a; //d prend la valeur de a
    a=b; //a prend la valeur de b
    b=c; //b prend la valeur de c
    c=d; //c prend la valeur de d
    printf ("La valeur de a= %f\n La valeur de b= %f\n La valeur de c= %f",a,b,c);
    return(0);
}
