#include <iostream>
#include "hora.h"

#define HORA_MIN 0
#define HORA_MAX 23

#define MIN 0
#define MAX 59

#define SEGUNDOS_HORA 3600
#define SEGUNDOS_MAX 60

using namespace std;

void Hora::validarHora(int _hora, int _minutos, int _segundos)
{
    if (int(_hora) % 24 == 0 && int(_minutos) % 60 == 0 && int(_segundos) % 60 == 0)
    {
        this->hora = _hora - 1;
        this->minuto = 59;
        this->segundo = 59;
    }
}

Hora::Hora()
{
    poner_a_cero();
}

Hora::~Hora()
{
    cout << "Liberando objeto hora" << endl;
}

void Hora::fijarHora(int h, int m, int s)
{
    hora = (h >= HORA_MIN && h <= HORA_MAX) ? h : HORA_MIN;
    minuto = (m >= MIN && m <= MAX) ? m : MIN;
    segundo = (s >= MIN && s <= MAX) ? s : MIN;
}

void Hora::avanzar(int s = 0)
{
    float _h, _m;

    _m = s / 60;
    _h = _m / 60;

    hora = int(_h)%24;
    minuto = int(_m)%60;
    segundo = s%60;
    validarHora(_h, _m, s);
    _h = 0, _m = 0, s = 0;

}

void Hora::poner_a_cero()
{
    hora = 0;
    minuto = 0;
    segundo = 0;
}

void Hora::visualizar()
{
    cout << (hora < 10 ? "0" : "") << hora << ":"
         << (minuto < 10 ? "0" : "") << minuto << ":"
         << (segundo < 10 ? "0" : "") << segundo;
}