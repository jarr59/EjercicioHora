// EjercicioReloj.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Hora.h"
using namespace std;

int main()
{
    Hora hora;
    cout << "Hora inicial: ";
    hora.visualizar();
    cout << endl;

    hora.fijarHora(11, 28, 00);
    cout << "Hora fijada: ";
    hora.visualizar();
    cout << endl;

    // Adelantar hora 30
    cout << "Avanzar 30 seg: ";
    hora.avanzar(30);
    hora.visualizar();
    cout << endl;

    // Adelantar hora 60
    cout << "Avanzar 60 seg: ";
    hora.avanzar(60);
    hora.visualizar();
    cout << endl;

    // Adelantar hora 120
    cout << "Avanzar 120 seg: ";
    hora.avanzar(120);
    hora.visualizar();
    cout << endl;

    // Adelantar hora 3600
    cout << "Avanzar 3600 seg: ";
    hora.avanzar(3600);
    hora.visualizar();
    cout << endl;

    // Adelantar hora 7200
    cout << "Avanzar 7200 seg: ";
    hora.avanzar(7200);
    hora.visualizar();
    cout << endl;

    // Adelantar hora 9000
    cout << "Avanzar 9000 seg: ";
    hora.avanzar(9000);
    hora.visualizar();
    cout << endl;

    // Adelantar hora 86400
    cout << "Avanzar 86400 seg: ";
    hora.avanzar(86400);
    hora.visualizar();
    cout << endl;

    //Adelantar hora 17,280
    cout << "Avanzar 172800 seg: ";
    hora.avanzar(172800);
    hora.visualizar();
    cout << endl;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
