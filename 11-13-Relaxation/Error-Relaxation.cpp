#include<iostream>
#include<vector>
#include<cmath>

const double DELTA = 0.1;
const double XMIN = 0.0;
const double XMAX = 1.0;
const double YMIN = 0.0;
const double YMAX = 1.2;
const int Nx = (XMAX-XMIN)/DELTA;
const int Ny = (YMAX-YMIN)/DELTA;
const int Nmax = 1200; 


typedef std::vector<double> data_t;

void initial_conditions(data_t & data,int nx, int ny);
void boudary_conditions(data_t & data,int nx, int ny);
int evolve(data_t & data,int nx, int ny, double eps);
double relaxation_step(data_t & data,int nx, int ny);
void Uc(data_t & data, int ix, int iy);


int main(int arc, char **argv)
{
    data_t potencial(Nx*Ny);
    double eps = 0.1;
    for(int ii=0; ii <=20; ++ii){
        eps *= 0.1;
         initial_conditions(potencial,Nx,Ny);
         boudary_conditions(potencial,Nx,Ny);
        std::cout<< eps <<" " << evolve(potencial, Nx, Ny, eps)<<"\n";

    }
    return 0;
}

void initial_conditions(data_t & data,int nx, int ny){
    int ix=0, iy=0;
    for(ix=0 ; ix<nx ; ++ix){
        for(iy=0 ; iy<ny; ++iy){
            data[ix*ny + iy] = 1;
        }
    }  
    
}
void boudary_conditions(data_t & data,int nx, int ny){

    int ix, iy;
    ix=0;
    for(int iy=0; iy<ny; ++iy){
        data[ix*ny + iy] = 100;
    }

    ix=nx-1;
    for(int iy=1; iy < ny; ++iy){
        data[ix*ny+iy]= 0.0;
    }

    iy=0;
    for(int ix=1; ix < nx; ++ix){
        data[ix*ny+iy]= 0.0;
    }

    iy=ny-1;
    for(int ix=1; ix < nx; ++ix){
        data[ix*ny+iy]= 0.0;
    }

    

        }

int evolve(data_t & data,int nx, int ny, double eps){
    double Error=0.0;
    for(int istep = 0; istep < Nmax ; ++istep){
        Error= relaxation_step(data, nx, ny);
        if(Error <= eps){return istep;}
    }
    return Nmax;
}

double relaxation_step(data_t & data,int nx, int ny ){
    double Zb=0.0;
    double Er=0.0;
    for(int ix=1; ix<nx-1;++ix){
        for (int iy= 1; iy < ny-1; ++iy){
            Zb=data[ix*ny+iy];
            Uc(data, ix, iy);
            if(Er <= std::fabs(1-data[ix*ny+iy]/Zb))
            {Er = std::fabs(1-data[ix*ny+iy]/Zb);}
        
        }           //Karen Gomez Ortega (O.O)
    }               //Nicolas Rueda Becerra (UnU)
    return Er;      //Daniel Felipe Peralta Macca \_(*o* )_/
}


void Uc(data_t & Matriz, int ix, int iy){
    Matriz[ix*Ny+iy]=(Matriz[(ix+1)*Ny+iy] + Matriz[(ix-1)*Ny+iy]
                      +Matriz[ix*Ny+iy+1] + Matriz[ix*Ny+iy-1])/4;
}


