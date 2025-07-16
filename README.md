# NumCrafters - Numerical Methods in C

Welcome to **NumCrafters**, a collection of numerical methods implemented in C. This repository contains various algorithms and methods that I’ve explored and created. The goal of this project is to better understand and practice numerical analysis techniques using C programming.

## Methods Implemented

### 1. Bisection Method
- **File**: `bisection_falsePositionMethod.c`
- **Description**: This program implements the **Bisection Method** for solving nonlinear equations. It's used to find the root of a function where the function changes sign over a specified interval.

### 2. False Position Method
- **File**: `bisection_falsePositionMethod.c` 
- **Description**: Another method used to find roots of nonlinear equations. The False Position Method is similar to the Bisection Method, but it improves the approximation by using a secant line.
>Note: Both Bisection and False Position Methods are implemented on the same file as both have same working except the approximation formula...

### 3. Newton Raphson Method
- **File**: `NRMethod.c`	
- **Description**: The Newton-Raphson method is an efficient root-finding algorithm that uses the function and its derivative to iteratively approach a solution. It converges quickly when starting near the actual root.

### 4. Secant Method
- **File**: `SecantMethod.c`
- **Description**: The Secant method is a numerical technique to find roots without requiring the derivative. It uses two initial guesses and a secant line to approximate the root iteratively.

### 5. Lagrange Interpolation
- **File**: `lagrangeInterpolation.c`
- **Description**: Lagrange Interpolation is a method of estimating values between known data points by constructing a polynomial that passes through all given points. It uses Lagrange basis polynomials to ensure that the resulting curve exactly fits the data. This technique is especially useful in curve fitting and numerical analysis.

### 6. Newton-Cotes Formula
- **File**: `General_Quadrature_Formula.c`
- **Description**: Implements the Newton-Cotes Quadrature formula for numerical integration. It approximates the integral of a function using equally spaced points and weights determined by the method.

### 7. Romberg's Integration
- **File**: `RombergIntegration.c`
- **Description**: Romberg's Method is an advanced numerical integration technique that builds upon the Trapezoidal Rule by applying Richardson extrapolation. It successively refines estimates to improve accuracy and convergence speed.

### 8. Linear Regression for Curve Fitting
- **File**: `Linear_Regression_curveFitting.c`
- **Description**: This program implements simple linear regression to fit a straight line through a set of data points. It minimizes the sum of squared errors between the data and the regression line.

### 9. Logarithmic Regression for Curve Fitting
- **File**: `RegressionForCurveFitting_logarithmic.c`
- **Description**: Implements regression based on a logarithmic model. This is useful when the data trend follows a logarithmic curve, helping in estimating parameters for functions like `y = a + b*log(x)`.

### 10. Solution of ODE - RK1, RK2, and RK4
- **File**: `Solution_ODE`
- **Description**: This program solves ordinary differential equations (ODEs) using Runge-Kutta methods of first (Euler's method), second, and fourth order. RK4 is widely used for its balance between accuracy and computational efficiency.

### 11. Dominant Eigenvalue by Power Method
- **File**: `eigen_value.c`
- **Description**: `Implements the Power Method to estimate the dominant (largest in magnitude) eigenvalue of a square matrix. This method is useful for large matrices where computing all eigenvalues is computationally expensive.

### 12. Solution of Linear Algebraic Equations - Gauss-Jacobi and Gauss-Seidel
- **File**: `solution_of_LinearAlgebraicEquation.c`
- **Description**: This program solves systems of linear equations using two iterative techniques: Gauss-Jacobi and Gauss-Seidel. Both methods are useful for large sparse systems and provide convergence under certain conditions.

## Requirements
- **Compiler**: GCC or any other C compiler
- **Operating System**: Compatible with any OS that supports C programming (Linux, Windows, macOS)

## How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/Sudeepp-Mishra/NumCrafters.git
