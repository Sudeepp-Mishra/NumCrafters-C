// Curver fitting using Regression Analysis
/**
 * Linear Regression
 * y = ax^b
 * lny = lna + blnx
 */

 #include<stdio.h>
 #include<math.h>
 #define size 20
 
 int main()
 {
    float  X[size], Y[size], sumX=0, sumY=0, sumXY=0, sumXX=0;
    int n, i;
    printf("\nEnter no. of data points: ");
    scanf("%d",&n);

    
    for(i=0; i<n; i++){
        printf("\nEnter the data points [X%d, Y%d]: ",i,i);
        scanf("%f%f", &X[i], &Y[i]);
    }

    for(i=0; i<n; i++){
        sumX += log(X[i]);
        sumY += log(Y[i]);
        sumXY += log(X[i])*log(Y[i]);
        sumXX += log(X[i])*log(X[i]);
    }

    float A, B;
    B = (n*sumXY-sumX*sumY)/(n*sumXX - sumX*sumX);
    A = (sumY - sumX * B)/n;

    float a;
    a = exp(A);

    printf("\nA: %f \nB: %f\n ",A, B);
    printf("\na: %f \nb: %f\n",a,B);
    printf("\nax^b = %fx^(%f)", a, B);
 }