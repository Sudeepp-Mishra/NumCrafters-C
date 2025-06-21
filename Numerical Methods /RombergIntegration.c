#include <stdio.h>
#include <math.h>

#define tol 0.01
#define level_of_extrapolation 10

float f(float x)
{
    return 1.0 / x;
}

float trapezoidal(float a, float b, int n)
{
    float h = (b - a) / n;
    float sum = f(a) + f(b);
    for (int i = 1; i < n; i++)
    {
        sum += 2 * f(a + i * h);
    }
    return (h / 2) * sum;
}

float richardsonExtrapolation(float a, float b)
{
    float R[level_of_extrapolation][level_of_extrapolation];

    for (int i = 0; i < level_of_extrapolation; i++)
    {
        int n = (int)pow(2, i);
        R[i][0] = trapezoidal(a, b, n);
        printf("R[%d][0] = %f\n", i, R[i][0]);

        for (int j = 1; j <= i; j++)
        {
            R[i][j] = ((pow(4, j) * R[i][j - 1]) - R[i - 1][j - 1]) / (pow(4, j) - 1);
            printf("R[%d][%d] = %f\n", i, j, R[i][j]);
        }

        if (i > 0 && fabs(R[i][i] - R[i - 1][i - 1]) < tol)
        {
            return R[i][i];
        }
    }

    return R[level_of_extrapolation - 1][level_of_extrapolation - 1];
}

int main()
{
    float a, b;
    printf("Enter the lower and upper limit of integral: [a,b]: ");
    scanf("%f%f", &a, &b);

    float I = richardsonExtrapolation(a, b);
    printf("\nApproximated Integral (I): %f\n", I);

    return 0;
}