#include "Robotnao.h"
#include "Robot.h"
#include <iostream>
using namespace std;

Robotnao::Robotnao(){
cout<<"hello world NAO"<<endl;
}
Robotnao::~Robotnao()
{

    cout<<"hora de dar tchau"<<endl;
}
int Robotnao::getNumeroMotores(){
    int m;
    cout<<"digite o numero de motores: ";
    cin>>m;
    cout<<" o numero de motores e: "<<m<<endl;



}
int Robotnao::getNivelBateria(){
int b;
cout<<"degite o nivel de bateria: ";
cin>>b;
cout<<"o nivel de bateria é "<<b<<"%"<<endl;
}
