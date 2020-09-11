#include <iostream>

int addition(int a, int b);

int main(void)
{
    int z, x, y;
    x=5;
    y=3;
    z= addition(x,y);
    std::cout <<"the result is " <<z <<std::endl;
    std::cout <<"the value of x is" <<x <<"\n";
    return 0;
}

int addition(int &x, int b)//ahora son la misma variable, los cambios quedan
{
    int r;
    r=x+b;
    x=r;
    return r;
}
