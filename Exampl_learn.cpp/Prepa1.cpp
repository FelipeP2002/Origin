# include <iostream>
# include <cstdlib>
# include <cmath>
void printsum(int nmax);


int main(int argc, char *argv[])
{
    std::cout.precision(15); std::cout.setf(std::ios::scientific);
    const int NMAX = std::atoi(argv[1]);
    printsum(NMAX);
    return 0;
}


void printsum(int nmax)
{
    auto ii=1;
    double head = 0.0;
    while(ii<=nmax){
        double k=ii*ii;
        head += 1/k;
        std::cout<<ii<<"\t"<<head<<"\n";
        ++ii;
    }
    return;
}
