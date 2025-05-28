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

## Requirements
- **Compiler**: GCC or any other C compiler
- **Operating System**: Compatible with any OS that supports C programming (Linux, Windows, macOS)

## How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/Sudeepp-Mishra/NumCrafters.git
