#include <iostream>

int main(int argc, char **argv)
{
  int n;
  int j;
  int k=1;
  std::cout <<"Escribe un numero porfavor\n";
  std::cin >> n;
  std:: cout <<n <<",";
  while(n!=1)
    {
      if(n%2==1){j=3*n+1; n=j; k++;std::cout <<n <<",";}
      else{j=n/2; n=j; k++;std::cout <<n <<",";}
    }
  std::cout <<"\n";
  std::cout <<"El numero de elementos de la secuencia hasta 1 es " <<k <<std::endl;
  return 0;
}
