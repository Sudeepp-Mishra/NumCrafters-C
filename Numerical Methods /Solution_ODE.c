/*
Solution of ordinary differentail equation using RK1, RK2 and RK4 method
*/
#include<stdio.h>

float f(float x, float y)
{
    return x+y;
}

void RK1(float x0, float y0, float h, float xn)
{
    float x, y, m;
    x = x0, y = y0;
    printf("\nSolution from Euler or RK1 method: ");
    printf("\n%f\t%f",x,y);
    do
    {
        m = f(x,y);
        y += m*h;
        x += h;
        printf("\n%f\t%f",x,y);
    } while(x<xn);
}

void RK2(float x0, float y0, float h, float xn)
{
    float x, y, m1, m2;
    x = x0, y = y0;
    printf("\nSolution from RK2 Method:");
    do{
        m1 = f(x,y);
        m2 = f(x+h, y+m1*h);
        y += (m1+m2)*h/2;
        x += h;
        printf("\n%f\t%f",x,y);
    }while(x<xn);   
}

void RK4(float x0, float y0, float h, float xn)
{
    float x, y, m1, m2, m3, m4;
    x=x0, y=y0;
    printf("\nSolution from RK4 Method:");
    do{
        m1 = f(x,y);
        m2=f(x+h/2, y+m1*h/2);
        m3=f(x+h/2, y+m2*h/2);
        m4=f(x+h, y+m3*h);
        y+=(m1+2*m2+2*m3+m4)*h/6;
        x+=h;
        printf("\n%f\t%f",x,y);
    } while(x<xn);
}

int main()
{
    float x0 = 0, y0 = 1, h=0.2, xn;
    printf("\nEnter xn: ");
    scanf("%f",&xn);
    RK1(x0, y0, h, xn);
    RK2(x0, y0, h, xn);
    RK4(x0, y0, h, xn);
    return 0;
}