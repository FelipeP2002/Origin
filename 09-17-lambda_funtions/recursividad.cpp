#include <iostream>
#include <cstdlib>//supongo que por el atoi

int factorial(int m);
int factorial_recur(int m);


int main(int argc, char **argv)
{int n = std::atoi(argv[1]);

    std::cout <<factoril(n) << "\n";

    std::cout <<factorial_recur(n) << "\n";
    
    return 0;
}


int factorial(int m)//factorial en un loop
{
    int mult=1;
    for(int ii=2, ii <= m; ++ii){
        mult=mutl*ii;
    };
    return mult;
}//por el tamaño de int solo se puede caĺcular el factorial hasta 15 sin over

int facorial_recur(int m)
{
    if(m<=1) return 1;
    return m*factoarial_recur(m-1);
}
