// Ce programme lit deux notes et leurs coefficients et affiche leur moyenne
#include<stdio.h>
int main()
{
    int c,k;
    float a,b,m;
    printf ("Entrer le nombre a: ");
    scanf("%f",&a);
    printf ("Entrer le nombre b: ");
    scanf("%f",&b);
    printf ("Entrer le coefficient de a,c: ");//Demande à l'utilisateur d'entrer le coefficient de a
    scanf("%d",&c);
    printf ("Entrer le coefficient de b,k: ");//Demande à l'utilisateur d'entrer le coefficient de b
    scanf("%d",&k);
    m=((a*c)+(b*k))/(c+k);
    printf("Leur moyenne est m= %f",m);
    return(0);
}
