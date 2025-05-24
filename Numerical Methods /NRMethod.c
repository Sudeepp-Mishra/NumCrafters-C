#include <stdio.h>
#include <math.h>

#define TOL 0.001

float f(float x) {
    return x*x - x - 1;
}

float f_prime(float x) {
    return 2*x - 1;
}

int main() {
    float x0, x1, f0, df0;
    int iteration = 0, maxIteration = 100;

    // Input with valid derivative
    do {
        printf("\nEnter your initial guess: ");
        scanf("%f", &x0);

        if (f_prime(x0) == 0)
            printf("The derivative at initial guess %.4f is zero. Choose another guess!\n", x0);
        else
            break;
    } while (1);

    // Newton-Raphson iteration
    do {
        iteration++;
        f0 = f(x0);
        df0 = f_prime(x0);

        x1 = x0 - f0 / df0;

        printf("Iteration %d: x = %.6f, f(x) = %.6f\n", iteration, x1, f(x1));

        if (fabs(f(x1)) < TOL) {
            printf("\nRoot found: %.6f in %d iterations\n", x1, iteration);
            break;
        }

        if (iteration >= maxIteration) {
            printf("\nMaximum iterations reached without convergence.\n");
            break;
        }

        x0 = x1;

    } while (1);

    return 0;
}