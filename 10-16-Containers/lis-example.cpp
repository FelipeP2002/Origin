#include <algorithm>
#include <iostream>
#include <list>
 
int main()
{

    std::list<int> l = { 7, 5, 16, 8 };
 
    l.push_front(-25);//de primero

    l.push_back(-13);//de ultimo
 
    
    auto it = std::find(l.begin(), l.end(), 16);
    //std::find busca un iterador para despues de 16
    //si no lo encuentra devuelve l.end()
    
    if (it != l.end()) {
        l.insert(it, 42);
    }
    
    std::cout<<"orden en predeterminado"<<"\n";
    
    for (int n : l) {
        std::cout << n << '\n';
    }

    
     l.sort([](int m,int n){return m<n;});
     std::cout<<"orden de mayor a menor"<<"\n";
     for (int n : l) {
        std::cout << n << '\n';
     }


    l.sort();
    std::cout<<"orden sort de menor a mayor"<<"\n";
    for (int n : l) {
        std::cout << n << '\n';
    }
    
    l.sort([](int m, int n){return std::abs(m)<std::abs(n);});
    std::cout<<"orden en absoluto"<<"\n";
     for (int n : l) {
        std::cout << n << '\n';
     }

    //std::cout<<"empty: "<< l.empty()<<"\n";
    //std::cout<<"size: "<< l.size()<<"\n";
    //std::cout<<"max_size: "<< l.max_size()<<"\n";
    //l.remove elimina elementos osecutivos repetidos
}
