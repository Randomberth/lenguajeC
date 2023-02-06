#include<stdio.h> // necesaria para printf
//#include<iostream>
//using namespace std;

double suma (double, double);
double resta (double, double);

int main (){
    
    double op1 = 225, op2 = 100, resp = 0;

    //suma 
    resp = suma(op1, op2);
    printf("\nSuma = %f\n\n", resp);
    //resta
    resp = resta(op1, op2);
    printf("\nSuma = %g\n\n", resp);
}

    double suma(double x, double y)
    {
        double z;
        z = x + y;
        return z;
    }
    double resta(double x,double y)
    {
        double z;
        z = x - y;
        return z;
    }
     
