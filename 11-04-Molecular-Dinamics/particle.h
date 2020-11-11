#ifndef __PARTICLE_H_//si este archivo ya se llamo en un codigido
#define __PARTICLE_H_//no volver a definir

struct Particle
{
  double rad = 0.0;
  double mass = 0.0;
  double Rx = 0.0, Ry = 0.0, Rz = 0.0;
  double Vx = 0.0, Vy = 0.0, Vz = 0.0;
  double Fx = 0.0, Fy = 0.0, Fz = 0.0;
};


#endif // __PARTICLE_H_
