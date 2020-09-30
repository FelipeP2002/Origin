#include <iostream>
#include <cmath>

// calcular la derivada forward del sin
// graficar x \in [0, 2pi] y comparar errores

// DX = 0.1, [0, 1] -> x  0.0 0.1 0.2 0.3 0.4 0.5 ...
//                     ii 0   1   2   3   4   5

double f(double x);
double deriv_central(double x, double h);
double richarson_central(double x, double h);

int main(int argc, char **argv)
{
    const double DX = 0.1;
    const double XMIN = 0.0;
    const double XMAX = 2*M_PI;
    
    const int N = (XMAX - XMIN)/DX;//N es el numero de intervalo necesarios
    for (int ii = 0; ii < N; ++ii)//se hace porque se prefiere contar enteros!!
    {
        double x = XMIN + ii*DX;
        double error_central = std::fabs(1-deriv_central(x,DX)/std::cos(x));
        double error_richarson_central= std::fab(1-ricahrson_central(x,DX)/std::cos(x))
        std::cout << x << "\t"
                  << f(x) << "\t"
                  << error_central "\t"
                  << error_richarson_central "\t"
                  << "\n";
    }// la cosita de t, es nueva columna o algo asi
    
    return 0;
}

double f(double x)
{
    return std::sin(x);
}

double deriv_central(double x, double h)
{
    return (f(x+h/2)-f(x-h/2))/h;
}

double richarson_central(double x, double h)
{
    double D1 = deriv_centrl(x,h);
    double D2 = deriv_central(x, h);
    
    return (4*D2 - D1)/3.0;
}
