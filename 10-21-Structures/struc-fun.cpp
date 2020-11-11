#include<iostream>


struct Fractional{//Declaracion de la structura
//la stuture tiene sus datos como publicos por defecto
        
        int num{0};
        int den{1};

        void print(void);
        Fractional pus(Fractional f2);
};

Fractional sum(const Fractional &f1,const Fractional & f2);
Fractional minus(const Fractional &f1,const Fractional & f2);
Fractional factor(const Fractional &f1,const Fractional & f2);
Fractional div(const Fractional &f1,const Fractional & f2);


int main(int argc, char **argv) {

    Fractional f,g{2,3};//inizializacion
    
    f.num=4;
    f.den=7;
    f.print();
    g.print();

    Fractional h;

    h=f.pus(g);
    //h=sum(f,g);
    h.print();
    
    h=minus(f,g);
    h.print();

    h=factor(f,g);
    h.print();

    h=div(f,g);
    h.print();

    return 0;
}


void Fractional::print(void){
    std::cout<<"("<<num<<"/"<<den<<")"<<"\n";
}

Fractional sum(const Fractional &f1,const Fractional &f2){
 Fractional result;
    result.num=f1.num*f2.den+f2.num*f1.den;
    result.den=f1.den*f2.den;
    return result;
}


Fractional minus(const Fractional &f1,const Fractional &f2){
    Fractional f;
    f.num=-f2.num;
    f.den=f2.den;
    return sum(f1,f);
}

Fractional factor(const Fractional &f1,const Fractional & f2)
{
    Fractional result;
    result.num = f1.num*f2.num;
    result.den = f1.den*f2.den;
    return result;
}

Fractional div(const Fractional &f1,const Fractional & f2)
{
    Fractional result;
    result.num = f1.num*f2.den;
    result.den = f1.den*f2.num;
    return result;
}

Fractional Fractional::pus(Fractional f2){

    Fractional result;
    result.num=num*f2.den+f2.num*den;
    result.den=den*f2.den;
    return result;
    
}
