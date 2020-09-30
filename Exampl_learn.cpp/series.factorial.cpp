#include<iostream>
#include<cmath>
#include<cstdlib>

long double factorial(long int N);

int main(int agc, char **argv){

    int Nmax= std::atol(argv[1]);
    long double K=0;
    for(int ii=1; ii <= Nmax; ii++ ){
        K += 1/factorial(ii);
    }
    std::cout<<K<<"\n";

return 0;
}

long double factorial(long int N){
    
    if(N==1){return 1;}
    else{return N*factorial(--N);}

};
