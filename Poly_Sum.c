#include <stdio.h>
struct poly
{
    int coeff;
    int exp;
};
int main()
{
    struct poly a[50], b[50], c[50], d[50];
    int deg1, deg2, deg3, i;

    printf("Enter the heigest degree of first polynomial ");
    scanf("%d", &deg1);
    printf("Enter the heigest degree of second polynomial ");
    scanf("%d", &deg2);
    printf("\nEnter the coefficient of the first polynomial : \n");
    if(deg1>deg2)
        deg3=deg1;
    else
        deg3=deg2;
    //poly1 reading
    for (i = 0; i <= deg1; i++)
    {
        printf("Enter the coefficeint of x^%d ", i);
        scanf("%d", &a[i].coeff);
        a[i].exp = i;
    }
    printf("\nEnter the coefficient of the second polynomial : \n");
    //poly2 reading
    for (i = 0; i <= deg2; i++)
    {
        printf("Enter the coefficeint of x^%d ", i);
        scanf("%d", &b[i].coeff);
        b[i].exp = i;
    }
    printf("\nFirst polynomial : ");
    for(i=0;i<=deg1;i++)
    {
        printf("%d", a[i].coeff);
        printf("x^%d ", a[i].exp);
        if(i!=deg1)
            printf("+ ");
    }
    printf("\n\nSecond polynomial : ");
    for(i=0;i<=deg2;i++)
    {
        printf("%d", b[i].coeff);
        printf("x^%d ", b[i].exp);
        if(i!=deg2)
            printf("+ ");
    }
    //poly1 + poly2
    if (deg1 > deg2)
    {
        for (i = 0; i <= deg2; i++)
        {
            c[i].coeff = a[i].coeff + b[i].coeff;
            c[i].exp = a[i].exp;
        }
        for (i = deg2 + 1; i <= deg1; i++)
        {
            c[i].coeff = a[i].coeff;
            c[i].exp = a[i].exp;
        }
       
    }
    else
    {
        for (i = 0; i <= deg1; i++)
        {
            c[i].coeff = a[i].coeff + b[i].coeff;
            c[i].exp = b[i].exp;
        }
        for (i = deg1 + 1; i <= deg2; i++)
        {
            c[i].coeff = b[i].coeff;
            c[i].exp = b[i].exp;
        }
        /*for (i = 0; i < deg2; i++)
        {
            printf("%d", a[i].coeff);
            printf("x^%d ", a[i].exp);
        }*/
    }
    printf("\n\nsum : ");
    
     for (i = 0; i <= deg3; i++)
        {
            printf("%d", c[i].coeff);
            printf("x^%d ", c[i].exp);
            if(i!=deg3)
                printf("+ ");
        }

    return 0;
}