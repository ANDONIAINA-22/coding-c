//Ce programme lit deux notes, affiche leur somme et leur moyenne
#include <stdio.h>
int main()
{
    float S,n,p,M;
    printf ("Entrer un nombre n=");
    scanf("%f", &n);
    printf ("Entrer un nombre p=");
    scanf("%f", &p);
    S=n+p;
    M=S/2;
    printf ("Leur somme est S= %f\nLeur moyenne est M=%f", S,M);
    return (0);
}
