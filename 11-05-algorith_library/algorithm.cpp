#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cmath>

void print(std::vector<double> &v);

int main()
{

    std::vector<double> data(10);
    std::iota(data.begin(), data.end(), 1);
    print(data);
    auto flambda= [](auto i){return i > 5;};
    std::cout<< std::accumulate(data.begin(), data.end(), 0.0)<<"\n"; 
    std::cout<<std::none_of(data.begin(), data.end(),flambda )<<"\n";
    std::cout<<std::all_of(data.begin(), data.end(), flambda)<<"\n";
    std::cout<<std::any_of(data.begin(), data.end(), flambda)<<"\n";

    const double average=std::accumulate(data.begin(), data.end(), 0.0)/10;
    std::cout<<"average is: "<<average<<std::endl;
    double V{0.0};

    auto Vlambda=[average, &V](auto n){V+=(n-average)*(n-average);return V;};

    std::for_each(data.begin(),data.end(), Vlambda);

    std::cout<<"la desviacion estandar es: "<<std::sqrt(V)<<std::endl;

    return 0;
}

void print(std::vector<double> & v){

    for(int val: v){std::cout<<val<<" ";};

    std::cout<<"\n";
}
