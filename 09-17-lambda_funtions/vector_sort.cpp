#include<iostream>
#include<vector>
#include<algorithm>


int main(int argc, char **argv){

    std::vector<int> data = {1,5,3,7,9,3};
    std::cout <<"datta consta de "<<data.size() <<" elementos" <<std::endl;

    for(int ii=0; ii<data.size();++ii){
        std::cout<<"data["<<ii<<"]="<<data[ii] <<std::endl;
    };
    std::cout<<"\n";
    std::sort(data.begin(),data.end());
    for(int kk=0; kk<data.size();++kk){
        std::cout<<"data["<<kk<<"]="<<data[kk] <<std::endl;
    };
    
    return 0;
}
