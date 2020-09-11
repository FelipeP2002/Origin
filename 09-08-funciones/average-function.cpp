#include<iostream>

double average(double &x, double y);

int main(void)
{
    double k=9.8, y=-10.76, z=0;
    z=average(k,y);
    std::cout <<"el promedio es"<<z<<"\n";
    return 0;
}

double average(double &x, double y)//con el ampersa esta x es la misma k
    //esto es pasar por referencia por que ahorra memoria
{
    double z;
    z=0.5*(x+y);
    return z;
}
