  
#include <iostream>

int main(int argc, char **argv)
{  
  const int N = 10;
  int data[N] {0};
  
  // for(int ii = 0; ii < N; ++ii) {
  //   data[ii] = 2*ii + 1; 
  // }
  int ii=0;
  for(auto &val: data){val=2*(ii++)+1;}
  
  double sum = 0.0;
  for(auto add: data){sum+=add;
  } 
  
  std::cout << "avg: " << sum/N << "\n";
  
  return 0;
}
