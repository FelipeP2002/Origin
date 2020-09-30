#include<iostream>


int main(int argc, char **argv){
    int v{ 5 };
    int  k=7;

    int *ptr{&v};
    int *ptr1{&k};

    
    std::cout<<"la direcciones  de v=" <<v<< std::endl;
    std::cout<<&v <<"\t"<<ptr <<"\n";
    std::cout<<"la direcciones de k=" <<k<< std::endl;
    std::cout<<&k<<"\t"<<ptr1<<"\n";

    
    std::cout<<"y los valores tambien son v="<< *ptr <<" y k="<< *ptr1 <<"\n";

    
    return 0;
}


/*
-los punteros son otro tipo de variable que en cambio de contenr entreros 
contiene la direccion de la varible a que se le asigna

-el type del puntero debe ser el mismo que la type del valor al que el 
señala

-la direccion contenida en el pontier may be changed by a new inicialization
 */
