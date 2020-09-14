#include <iostream>
#include <cstdlib>

int number_of_divisors(int n);

int main(int argc, char **argv)
{
    int number= std::atoi(argv[1]);
    std::cout <<"El numero de divisores de "<<number;
    std::cout <<" es "  <<number_of_divisors(number) << "\n";
  
  return 0;
}

int number_of_divisors(int n)
{
    int kk=1;
    for(int ii=2; ii <= n*0.5; ii++)
    {if(n%ii==0){kk++;};};
    return kk;
}
