#pragma once
#define HORA_H_INCLUDED
#define HORA_H_INCLUDED

class Hora
{
private:
    int hora, minuto, segundo;
    void validarHora();
public:
    void validarHora(int hora, int minutos, int segundos);
    Hora();
    ~Hora();
    void fijarHora(int, int, int);
    void avanzar(int);
    void poner_a_cero();
    void visualizar();
};
