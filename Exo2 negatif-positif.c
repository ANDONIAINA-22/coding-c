//ce programme affirme à l'utilisateur si le produit deux nombres est positif ou negatif
#include <stdio.h>
int main()
{
    float n,p;
    printf ("Veuillez entrer un nombre n: ");
    scanf("%f", &n);
    printf ("Veuillez entrer un nombre p: ");
    scanf("%f", &p);
    if ((p>0 && n>0) ||( p<0 && n<0))
    {
        printf ("Leur produit est positif");
    }
    else
    {
        printf("Leur produit est negatif");
    }
}
