// Ce programme lit trois valeurs et affiche leur maximum
#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Entrer a");
    scanf("%f",&a);
    printf("Entrer b");
    scanf("%f",&b);
    printf("Entrer c");
    scanf("%f",&c);
    if (a>b && a>c)
    {
        printf("a est maximum");

    }
    else if (b>a && b>c)
    {
        printf("b est maximum");
    }

}
