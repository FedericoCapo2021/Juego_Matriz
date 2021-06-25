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
    int vecPuntaje [tam] = {};
    string vecNombres [tam] ;
    nombre(vecNombres);
    int vecIndice [tam] = {0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 ,8 ,9};



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
            cargarMatrizNum(matrizNumeros, 6);
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
            rlutil::cls();
            cargarEstadisticas(vecPuntaje, puntaje, tam , vecNombres , Usuario);
            ordenarVector(vecPuntaje, tam , vecIndice);

            break;
        case 2:
            rlutil::cls();
            mostrarEstadisticas (vecPuntaje , vecNombres , vecIndice);
            break;
        case 3:
            break;
        case 4:
            break;

        }
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
    }


    return 0;
}
