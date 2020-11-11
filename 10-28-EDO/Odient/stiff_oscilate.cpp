#include <iostream>
#include <array>
#include <cmath>

#include <boost/numeric/odeint.hpp>

const double M = 1.0;
const double K = 5;
const double L = 1.0;

typedef std::array< double , 2 > state_type;

void lorenz( const state_type &x , state_type &dxdt , double t )
{
    dxdt[0] = x[1];
    dxdt[1] = -K*std::pow(x[0],L)/M;
}

void write_lorenz( const state_type &x , const double t )
{
    std::cout << t << '\t' << x[0] << '\t' << x[1] << '\t' << std::endl;
}

int main(int argc, char **argv)
{
    state_type x = {0.0 , 9.0 }; // initial conditions
    boost::numeric::odeint::integrate( lorenz , x , 0.0 , 2.0 , 0.01 , write_lorenz );
}
