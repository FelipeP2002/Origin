#include<iostream>


struct Fractional{//Declaracion de la structura
//la stuture tiene sus datos como publicos por defecto
        
        int num{0};
        int den{1};

        void print(void);

        Fractional operator+(const Fractional &f2);
        Fractional operator-(const Fractional &f2);
        Fractional operator*(const Fractional & f2);
        Fractional operator/(const Fractional & f2);
};

int main(int argc, char **argv) {

    Fractional f,g{2,3};//inizializacion
    
    f.num=4;
    f.den=7;
    f.print();
    g.print();

    Fractional h;

    h=f+g;
    h.print();
    
    h=f-g;
    h.print();

    h = f*g;
    h.print();

    h = f/g;
    h.print();

    return 0;
}


void Fractional::print(void){
    std::cout<<"("<<num<<"/"<<den<<")"<<"\n";
}

Fractional Fractional::operator+(const Fractional &f2){
 Fractional result;
    result.num=num*f2.den+f2.num*den;
    result.den=den*f2.den;
    return result;
}


Fractional Fractional::operator-(const Fractional &f2){
    Fractional f;
    f.num=-f2.num;
    f.den=f2.den;
    return f+(*this);
}

Fractional Fractional::operator*(const Fractional & f2)
{
    Fractional result;
    result.num = num*f2.num;
    result.den = den*f2.den;
    return result;
}

Fractional Fractional::operator/(const Fractional & f2)
{
    Fractional result;
    result.num = num*f2.den;
    result.den = den*f2.num;
    return result;
}
