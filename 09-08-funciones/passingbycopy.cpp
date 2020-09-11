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

ini addition(int a, int b)//hay dos variables, mismo de valor de x y Y
{
    int r;
    r=a+b;
    a=r;
    return r;
}
