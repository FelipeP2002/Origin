#include <iostream>
#include<cmath>
#include<functional>

using fptr=double(double X);
double f(double x);
double bisection_rec(double xu, double xul, double eps);

int main(int agrc,char **argv ){

    double xu=1.0,xl=2.0;
    double eps=10e-10;   
    std::cout<<"root of f betwen "<<xu<<" and "<<xl;
    double xroot=bisection_rec(xu,xl,eps);
    std::cout << " is "<<xroot<<"\n";
    std::cout<<f(xroot);

return 0;
}

double f(double x){
    return std::pow(x, 3.0)-2*std::sin(x);
}



double bisection_rec(double xu, double xl, double eps)
{
    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    double xr=0.5*(xu+xl);
    if(std::fabs(f(xr))<eps){return xr;}
    else if(f(xr)*f(xu)>0){
        xr=bisection_rec(xr,xl,eps);}
    else{
        xr=bisection_rec(xu,xr,eps);}

}
