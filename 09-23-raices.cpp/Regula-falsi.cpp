 #include <iostream>
 #include <cmath>

using fptr=double(double);
double f(double x);
double bisection(double xl, double xu, double eps, fptr fun);
double Falsi(double xl, double xu, double eps, fptr fun);


int main(int argc, char **argv)
{
    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    
    double xl=1.0;
    double xu=20.0;
    double eps =10e-6;
    double xrr= bisection(xl,xu,eps,f);
    std:: cout <<"xr:"<<xrr<<" f(xr)="<<f(xrr)<<std::endl;
    xrr=Falsi(xl,xu,eps,f);
    std:: cout <<"xr:"<<xrr<<" f(xr)="<<f(xrr)<<std::endl;
    return 0;
}

 double f(double x)
 {
     const double G=9.81;
     const double M=68.1;
     const double T=10.0;
     const double VF=40.0;
     return ((M*G/x)*(1-std::exp(-x*T/M))-40.0);
 }

double bisection(double xl, double xu, double eps, fptr fun)
 {
     int niter=0;
     double xr=1;
     while(niter<=100){
         xr=0.5*(xl+xu);
         if(std::fabs(fun(xr))<eps){break;}
         else if( fun(xr)*fun(xu) >0){xu=xr;}
         else{xl=xr;}
         
         niter++;
     }
     std::cout<<"#numero de iteraciones Bisection -> "<<niter <<"\n";
     return xr;
 }

double Falsi(double xl, double xu, double eps, fptr fun)
 {
     int niter=0;
     double xr=1;
     while(niter<=100){
         xr=xu-(fun(xu)*(xl-xu))/(fun(xl)-fun(xu));
         if(std::fabs(fun(xr))<eps){break;}
         else if( fun(xr)*fun(xu) >0){xu=xr;}
         else{xl=xr;}
         
         niter++;
     }
     std::cout<<"#numero de iteraciones Falsi-> "<<niter <<"\n";
     return xr;
 }
