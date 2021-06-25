#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include "funciones.h"
#include "rlutil.h"


int main()
{
    srand(time(0));
    const int tam = 10;
    int opcion, pilas, color, puntaje;
    int matrizNumeros [6][6];
    char Usuario [30];
    cargarMatrizNum(matrizNumeros, 6);
    int vecPuntaje [tam] = {};
    string vecNombres [tam] ;
    vecNombres [0] = {'Jugador'};



    rlutil::setBackgroundColor(rlutil::DARKGREY);
    rlutil::setColor(rlutil::RED);
    rlutil::saveDefaultColor();


    rlutil::cls();


    cout <<"        *****************************"      <<endl;
    cout <<"       *                             *"      <<endl;
    cout <<"       *          MATRIX             *"      <<endl;
    cout <<"       *                             *"      <<endl;
    cout <<"        *****************************"      <<endl<<endl<<endl;


    cout <<"----------------------"<<endl;
    cout <<"1- Jugar"<<endl;
    cout <<"2- Estadisticas"<<endl;
    cout <<"3- Creditos"<<endl;
    cout <<"0- Salir"<<endl;

    cout <<"----------------------"<<endl;


    cout <<"Ingrese una opcion: "<<endl;
    cin >>opcion;

    while (opcion != 0)
    {
        switch(opcion)
        {
        case 1:
            pilas = 3;
            puntaje = 0;
            system("cls");
            cargarDatos(Usuario);
            rlutil::cls();
            seleccionColor(color);
            rlutil::cls();

            while(pilas !=0){


                mostrarJuego(matrizNumeros,Usuario, pilas, color, puntaje);
                comienzoJuego(matrizNumeros,pilas,puntaje);
                rlutil::cls();
            }
            rlutil::locate(35,15);
            cout << "Lo siento, te quedaste sin pilas :( " ;
            rlutil::anykey();


            break;
        case 2:
            mostrarEstadisticas (vecPuntaje , vecNombres);
            break;
        case 3:
            break;
        case 4:
            break;

        }

        cout <<"Ingrese una opcion: "<<endl;
        cin >>opcion;
    }


    return 0;
}
