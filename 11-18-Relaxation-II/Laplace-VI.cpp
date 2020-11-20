#include<iostream>
#include<vector>

const double DELTA = 0.05;
const double XMIN = 0.0;
const double XMAX = 1.0;
const double YMIN = 0.0;
const double YMAX = 1.2;
const int Nx = (XMAX-XMIN)/DELTA;
const int Ny = (YMAX-YMIN)/DELTA;
const int NSTEPS = 250;


typedef std::vector<double> data_t;

void initial_conditions(data_t & data,int nx, int ny);
void boudary_conditions(data_t & data,int nx, int ny);
void Uc(data_t & data, int ix, int iy);
void evolve(data_t & data,int nx, int ny, int nsteps);
void relaxation_step(data_t & data,int nx, int ny);
void print_screen(data_t & data,int nx, int ny);
void start_gnuplot(void);
void print_gnuplot(data_t & data,int nx, int ny);

int main(int arc, char **argv)
{
    data_t potencial(Nx*Ny);

    initial_conditions(potencial,Nx,Ny);
    boudary_conditions(potencial,Nx,Ny);
    evolve(potencial, Nx, Ny, NSTEPS) ;
    return 0;
}

void initial_conditions(data_t & data,int nx, int ny){
    int ix=0, iy=0;
    for(ix=0 ; ix<nx ; ++ix){
        for(iy=0 ; iy<ny; ++iy){
            data[ix*ny + iy] = 0.0;
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

    ix=nx/2;
    for(int iy=ny/3; iy<2*ny/3; ++iy){
        data[ix*ny +iy]=-80.0;
    }
    

        }

void evolve(data_t & data,int nx, int ny, int nsteps){

    start_gnuplot();
    for(int istep = 0; istep < nsteps; ++istep){
        relaxation_step(data, nx, ny);
        print_gnuplot(data, nx,  ny);
    }
}
void relaxation_step(data_t & data,int nx, int ny){

    for(int ix=1; ix<nx-1;++ix){
        for (int iy= 1; iy < ny-1; ++iy){
            if((ix==nx/2)&&(iy <= 2*ny/3)&&(iy >= ny/3)){}
            else{Uc(data, ix, iy);}
        }
    }


}
void print_screen(data_t & data,int nx, int ny){

    for (int ix=0; ix<nx; ++ix){
        for(int iy =0; iy<ny; ++iy){
            std::cout<<data[ix*ny+iy]<<"  ";
                }
        std::cout<<"\n";
    }
 std::cout<<std::endl;   
}

void Uc(data_t & Matriz, int ix, int iy){
    Matriz[ix*Ny+iy]=(Matriz[(ix+1)*Ny+iy] + Matriz[(ix-1)*Ny+iy]
                      +Matriz[ix*Ny+iy+1] + Matriz[ix*Ny+iy-1])/4;
}

void print_gnuplot(data_t & data,int nx, int ny){

    std::cout <<"splot '-' w l lt 3 \n";
    for (int ix=0; ix<nx; ++ix){
        double x =XMIN  + ix*DELTA;
        for(int iy =0; iy<ny; ++iy){
            double y = YMIN +iy*DELTA;
            std::cout<< x << " " << y << " " <<data[ix*ny +iy]<<"\n";
                }
        std::cout<<"\n";
    }
 std::cout<<"e\n";   
}

void start_gnuplot(void){
    std::cout << "set pm3d\n";
    std::cout << "set contour base\n";
    std::cout <<  "set term gif animate\n";
    std::cout <<  "set output 'anim.gif'\n";
}
