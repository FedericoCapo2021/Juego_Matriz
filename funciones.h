#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


//Definiciones
void cargarMatrizNum(int [][6], int); //Genera matriz aleatoria de 6x6 con num enteros.
void cargarDatos (char []); //Carga el nombre del jugador en un vector de caracteres.
void mostrarJuego (int[][6],char [], int &, int, int); //Muestra la pantalla del Juego.
void vida(int ); //Muestra las vidas disponibles.
void comienzoJuego(int [][6], int & , int &); //Codigo del Juego.
bool validarDatos (int [][6], int, int, int, int, int, int);
//bool validarEcuacion(int [][6], int, int, int);
void cargarDireccion(int, int, int , int&, int&, int&, int&);//carga las coordenadas de los valores a comparar segurn la direccion que el usuario elija.
void seleccionColor(int &);//Muestra pantalla para elegir color y guarda el ingreso en una variable para despues ser usada
void ponerNulo (int [][6], int , int , int , int , int , int );
void sumarPuntos (int [][6], int &, int , int , int , int , int , int);
void mostrarEstadisticas (int [], string[]);
bool validarOperacion(int [][6], int, int, int, int, int, int, char);
#endif // FUNCIONES_H_INCLUDED

