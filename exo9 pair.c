//Ce programme affiche le nombre pair compris entre 1 et N
#include <stdio.h>
int main ()
{
    int N,i;
    printf("Entrer un nombre N: ");
    scanf("%d", &N);
    i=0;
    while (i<=N)
    {
        i=i+2;
        printf("%d",i);
    }
    return(0);
}
