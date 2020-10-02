#include <iostream>

int main (int argc , char **argv)
{
  std::cout<<"el nuemro de argumanetos fue"<<argc<<std::endl;
  std::cout<<"arg[0]= "<<argv[0]<<std::endl;
  std::cout<<"arg[1]= "<<argv[1]<<std::endl;std::cout<<"\n";

  //se pide al usuarioa que insete un numero que inizializara a c
  int x=0;
  std::cout<<"Escriba un numero entero porfavor"<<"\n";
  std::cin>>x;
  std::cout<<"usted acaba de inizializar a x como "<<x<<" por medio del operador de extarcion >>";
  
  return 0;

}

 
