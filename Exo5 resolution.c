// Ce programme fait la resolution d'une equation de seconde degree de la forme ax^2+bx+c
#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,d,m,n,p;
    printf("Entrer a=");
    scanf("%f",&a);
    printf("Entrer b=");
    scanf("%f",&b);
    printf("Entrer c=");
    scanf("%f",&c);
    if (a==0)
    {
        x1=-c/b;
        printf("La solution est x= %f",x1);
    }
    else
    {
        d=b*b-(4*a*c);
    }
    if (d==0)
    {
        x1=-b/(2*a);
        printf ("La solution x=%f",x1);
    }
    else if(d>0)
    {
        x1=(-b-sqrt(d))/(2*a);
        x2=(-b+sqrt(d))/(2*a);
        printf ("La solution x1= %f\nx2=%f",x1,x2);

    }
    else
    {
        m=2*a;
        n=(sqrt(-d))/m;
        p=-d/m;
        printf("la solution x1=%f+%fi\nx2=%f-%fi",p,n,p,n);

    }
    return(0);
}
