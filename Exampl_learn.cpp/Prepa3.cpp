#include<iostream>
#include<cmath>

using fptr=double(double);
double f(double X);
double forward(double X, double h, fptr fun);
double central(double X, double h, fptr fun);
double richardson(double X, double h, fptr fun);
double fdevtheo(double X);

int main(void)
{
    std::cout.precision(15);std::cout.setf(std::ios::scientific);
    const double X = 2.0;
    const double DEV_EXACT = fdevtheo(X);
    double h = 0;
    double deltac, deltaf, deltar; // percentual diffs

    for (double h = 1.0e-1; h >= 1.0e-8; h /= 10.0) {
        deltaf = std::fabs(1.0 - forward(X, h, f)/DEV_EXACT);
        deltac = std::fabs(1.0 - central(X, h, f)/DEV_EXACT);
        deltar = std::fabs(1.0 - richardson(X, h, f)/DEV_EXACT);
        std::cout << h << " \t" << deltaf << "\t" << deltac << "\t" << deltar << "\n";
    }
    return 0;
}

double forward(double X, double h, fptr fun){
    return (fun(X+h)-fun(X))/h;
}

double central(double X, double h, fptr fun){
    return (fun(X+h/2)-fun(X-h/2))/h;
}

double richardson(double X, double h, fptr fun){
    return(4*central(X,2*h,fun)-central(X,h,fun))/3;
}

double fdevtheo(double X){
    return -2*std::exp(-2*X)-1;
}

double f(double X){
    return std::exp(-2*X)-X;
}
