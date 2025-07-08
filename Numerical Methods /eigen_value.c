/**
 * Eigen Value and Corresponding Vector using Power Method
 */
#include <stdio.h>
#include <math.h>
#define size 10
#define E 0.01

void matProduct(float A[][size], float X[], float Y[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        Y[i] = 0;
        for (j = 0; j < n; j++)
        {
            Y[i] += A[i][j] * X[j];
        }
    }
}

float normalize(float Y[], int n)
{
    float max = fabs(Y[0]);
    int i;
    for (i = 1; i < n; i++)
    {
        if (fabs(Y[i]) > max)
            max = fabs(Y[i]);
    }

    for (i = 0; i < n; i++)
        Y[i] = Y[i] / max;

    return max;
}

int main()
{
    float A[size][size], X[size], Y[size], lambda_old = 0, lambda_new;
    int n, i, j, itr = 0;
    printf("Enter the order of matrix: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nA[%d][%d]: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    printf("Enter the initial eigen vector elements: (%d) values", n);
    for (i = 0; i < n; i++)
    {
        printf("\nX[%d]: ", i);
        scanf("%f", &X[i]);
    }

    do
    {
        matProduct(A, X, Y, n);       // Y = A * X
        lambda_new = normalize(Y, n); // Normalize Y and get eigenvalue estimate

        // Update X with normalized Y
        for (i = 0; i < n; i++)
            X[i] = Y[i];

        itr++;

        // Check for convergence
        if (fabs(lambda_new - lambda_old) < E)
            break;

        lambda_old = lambda_new;

    } while (1);

    printf("\nDominant Eigenvalue after %d iterations: %.4f\n", itr, lambda_new);
    printf("Corresponding Eigenvector:\n");
    for (i = 0; i < n; i++)
    {
        printf("X[%d] = %.4f\n", i, X[i]);
    }
}