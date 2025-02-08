//Ce programme informe si un nombre est positif ou negatif
#include <stdio.h>
int main()
{
    int n;
    printf("Entrer un nombre n: ");
    scanf("%d", &n);
    if (n>=0)
    {
        printf("n est positif");
    }
        else
        {
            printf("n est negatif");
        }
    return(0);
}
