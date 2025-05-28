// Lagrange Interpolation for curve fitting

#include <stdio.h>

int main()
{
    float x[10], y[10], xp, yp = 0, l[10];
    int i, j, n;
    printf("Enter the no. of data points: ");
    scanf("%d",&n);
    printf("\nEnter data points: ");
    for(i=0;i<n;i++)
    {
        printf("\n Enter x(%d), y(%d): ",i,i);
        scanf("%f%f", &x[i], &y[i]);
    }

    printf("\nAlso enter the interpolating point xp: ");
    scanf("%f",&xp);

    for(i=0;i<n;i++)
    {
        l[i]=1;
        for(j=0;j<n;j++)
        {
            if(j!=i)
                l[i] *= (xp-x[j])/(x[i]-x[j]);
        }
        yp+=l[i]*y[i];
    }
    for(i=0;i<n;i++)
    {
        printf("l[%d] = %f\n",i,l[i]);
    }
    printf("\n y(%f) = %f", xp, yp);
}