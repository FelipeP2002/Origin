#include <iostream>
#include <cstdlib>
int next_collatz_term(int n);

int main(int argc, char**argv)
{
    int leader=0;
    int n0= std::atoi(argv[1]);
    for( leader= 1; n0!=1; n0=next_collatz_term(n0))
    {
        if(leader<=n0)
        {leader=n0;};
    };
    std::cout <<leader;
    return 0;
}


int next_collatz_term(int n)
{
    if (n == 1) return 1;
    if (n%2 == 0) return n/2;
    else return 3*n + 1;
}
