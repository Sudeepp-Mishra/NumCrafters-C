#include <math.h>
#include <stdio.h>
#define TOLERANCE 0.001 // Best practice: Using UPPERCASE for macros

double f(double x)
{
    // Function 1
    return pow(x, 2) - x - 1;

    // Function 2
    //  return x-exp(-x);

    // Function 3
    //  return x*exp(x)-cos(x);

    // Function 4
    //  return x*log10(x)-1.2;
}

int main()
{
    double a, b, x;
    int maxIterations = 1000; // To prevent infinite loop if method doesn't converge quickly
    int iterationCount = 0;
    int method;

    do
    {
        printf("Enter\n1 for Bisection Method \n2 for False Position Method: ");
        scanf("%d", &method);
        if (method != 1 && method != 2)
            printf("\nInvalid Choice! Please enter 1 or 2...\n");
    } while (method != 1 && method != 2);

    do
    {
        printf("\nEnter the initial brackets [a,b]: ");
        scanf("%lf%lf", &a, &b); // We need to use %lf for double in scanf() but in printf() we
                                 // have to use %f only because printf() treats even float as
                                 // double i.e., float is promoted to double by printf() and it
                                 // don't recognize %lf
        if (f(a) * f(b) > 0)
            printf("\nThe functional values at the bracket ends are of same sign. Try different values.\n");
    } while (f(a) * f(b) > 0);

    printf("\n%-12s%-12s%-12s%-12s%-12s%-12s", "Iteration", "a", "b", "x", "f(x)", "|f(x)|");
    printf("\n--------------------------------------------------------------------");

    do
    {
        if (method == 1) // Bisection Method
            x = (a + b) / 2;

        else // False Position Method
            x = (a * f(b) - b * f(a)) / (f(b) - f(a));

        iterationCount++;

        printf("\n%-12d%-12.6f%-12.6f%-12.6f%-12.6f%-12.6f", iterationCount, a, b, x, f(x), fabs(f(x)));

        if (f(x) == 0)
        {
            printf("\nRoot found: %f (exact)\n", x);
            break;
        }

        if (fabs(f(x)) <= TOLERANCE)
        {
            printf("\n\nRoot approximated: %f within tolerance %f\n", x, TOLERANCE);
            break;
        }

        if (f(x) * f(b) < 0)
            a = x;
        else
            b = x;

        if (iterationCount >= maxIterations)
        {
            printf("\nMax. iterations reached so it does not converge quickly!");
            break;
        }

    } while (fabs(f(x)) > TOLERANCE);
}

// We only run it till maxIterations although we know the Bisection method gurantees convergence but sometimes due to our mistake while defining function or if we took tolerance as 0.0000000000001 then it may take million iterations to converge (but its sure that it will converge) which is not practical so we only go till maxIterations here to prevent this looping...