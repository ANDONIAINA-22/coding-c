//Ce programme affiche 1 jusqu'a N
#include <stdio.h>
int main()

{
    int N,i;
    printf("Entrer un nombre N: ");
    scanf("%d",&N);
    i=0;
    while (i<N)
    {
        i=i+1;
        printf("%d \n",i);
    }
    return(0);

}
