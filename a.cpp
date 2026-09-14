#include <iostream>
#include <stdio.h>
using namespace std;
class Tiempo
{
public:
int horas;
int minutos;

void imprimir()
{
cout << "*****************" << endl;
cout << horas << ":" << minutos << endl;
cout << "*****************" << endl;
}

Tiempo sumar(Tiempo a)
{
Tiempo resultado = Tiempo();
resultado.horas = (horas + a.horas);
resultado.minutos = (minutos + a.minutos);
return resultado;
}

Tiempo restar(Tiempo a)
{
    Tiempo resultado = Tiempo();
    resultado.horas = (horas - a.horas);
    resultado.minutos = (minutos - a.minutos);
    return resultado;
}

Tiempo multiplicar(Tiempo a)
{
    int n;
    Tiempo resultado = Tiempo();
    resultado.horas = (horas * n);
    resultado.minutos = (minutos * n);
    return resultado;
}

void normalizar();
{
    
}
};