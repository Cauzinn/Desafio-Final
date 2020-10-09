#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED
struct Estado
{
  float x,y,theta;
};

class Robot
{
  private:
    int numeroMotores;
    int numeroSensores;
    float bateria;
    Estado orientacao;

  public:
    Robot();
    ~Robot();
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


#endif // ROBOT_H_INCLUDED
