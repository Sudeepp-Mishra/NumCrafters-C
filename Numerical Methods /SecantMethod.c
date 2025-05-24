#include <stdio.h>
#include <math.h>

#define TOL 0.001

float f(float x) {
    return x*x - x - 1;
}

int main() {
    float x0, x1, f0, f1, x2, f2, ea;
    int iteration = 0, maxIteration = 100;

    // Input with valid derivative
    do {
        printf("\nEnter your initial guesses: ");
        scanf("%f%f", &x0, &x1);

        if (f(x0) == f(x1))
            printf("Try other guesses\n", x0);
        else
            break;
    } while (1);

    // Secant Iteration
    do {
        iteration++;
        f0 = f(x0);
        f1 = f(x1);

        x2 = (x0 * f1 - x1 * f0)/(f1-f0);

        f2 = f(x2);

        printf("Iteration %d: x0 = %.6f, x1 = %.6f f(x0) = %.6f, f(x1) = %.6f, x2 = %.6f, |x2-x1| = %.6f\n", iteration, x0, x1,f(x0), f(x1), x2, fabs(x2-x1));

        ea = fabs(x2-x1);

        if (ea < TOL) {
            printf("\nRoot found: %.6f in %d iterations\n", x1, iteration);
            break;
        }

        if (iteration >= maxIteration) {
            printf("\nMaximum iterations reached without convergence.\n");
            break;
        }

        x1 = x2;

    } while (1);

    return 0;
}