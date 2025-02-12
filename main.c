#include <stdio.h>
#include <math.h>

int main()
{
    int N,i;
    printf("Entrez un nombre N: ");
    scanf("%d", &N);
    for(i=1; i<=N; i=1+i)
    {
        if (N%i==0)
        {
            printf("%d \n",i);

        }

    }

}
