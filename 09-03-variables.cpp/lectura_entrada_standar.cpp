#include <iostream>
#include <string>

int main(int argc , char **argv)

{
  std::string fullname;
  std::cout <<"Hola, escirbe tu nombre porfavor\n";
  std::getline(std::cin,fullname);
  std::cout <<"Hola, " <<fullname <<std::endl;
  std ::cout <<&fullname <<"\n";
  
  return 0;
}
