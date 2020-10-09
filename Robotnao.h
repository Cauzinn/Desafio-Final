#ifndef ROBOTNAO_H_INCLUDED
#define ROBOTNAO_H_INCLUDED
#include "Robot.h"
class Robotnao : public Robot
{
    private:
    int numeroMotores;
    int numeroSensores;
    float bateria;
    Estado orientacao;

  public:
     Robotnao();
    ~Robotnao();
    void Locomocao();
    int getNumeroMotores();
    int getNumeroSensores();
    int getNivelBateria();
    Estado getOrientacao();
    void setOrientacao(Estado);
    void setNivelBateria(float);
    void setNumeroMotores(int);
    void setNumeroSensores(int);
};



#endif // ROBOTNAO_H_INCLUDED
