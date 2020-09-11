#include<iostream>

void Doprint(void)  //se define la funcion Doprint
    //en los parentesis se le dijo que no recibiera nada como argumento
{
    std::cout <<"aca se se hizo Doprint()\n";
}

int main(void)//de nuevo no recibe nada pero retorna un entero
{
    std::cout <<"empezo la main()\n";
    Doprint(void);  //implementa la funcion doprint, llamandola desde main

    return 0;
}
//no se pueden definir funciones dentro de otras ellas solo se llaman entre si 
