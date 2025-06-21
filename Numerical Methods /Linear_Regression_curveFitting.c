// Curver fitting using Regression Analysis
/**
 * Linear Regression
 * y = a + bx
 */

 #include<stdio.h>
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
        sumX += X[i];
        sumY += Y[i];
        sumXY += X[i]*Y[i];
        sumXX += X[i]*X[i];
    }

    float A, B;
    B = (n*sumXY-sumX*sumY)/(n*sumXX - sumX*sumX);
    A = (sumY - sumX * B)/n;

    printf("\nA: %f \nB: %f\n ",A, B);
    printf("\nA + BX = %f + (%f)B", A, B);
 }