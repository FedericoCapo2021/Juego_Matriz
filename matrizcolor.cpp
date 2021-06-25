#include <iostream>
#include "rlutil.h"
#include "matrizcolor.h"

using namespace std;

void mostrarRojo(int m[][6]){

    int posx = 10;
    int posy = 5;

    for(int i = 0; i < 6; i++){
        for(int b = 0; b < 6; b++){


                rlutil::setBackgroundColor(rlutil::DARKGREY);
                rlutil::setColor(rlutil::WHITE);
                rlutil::saveDefaultColor();

                rlutil::setColor(rlutil::RED);

                for (int y = 1; y <= 3; y++) {

                    for (int x = 1; x <= 6; x++) {
                        rlutil::locate(x + posx, y + posy);
                        //cout << "█";
                        cout << (char)219;
                    }
                }

    rlutil::setBackgroundColor(rlutil::RED);
    rlutil::setColor(rlutil::WHITE);

	switch (m[i][b])
	{

    case 0:
        rlutil::locate(posx + 2,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

        break;

	case 1:
		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;
        break;

    case 2:
        rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		 rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 2,posy + 3);
		//cout << "■";
		cout << (char)223;


		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 3);
		//cout << "■";
		cout << (char)223;

        break;
    case 3:
        rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		break;


    case 4:
        rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 2,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 3);
		//cout << "■";
		cout << (char)223;

		break;

    case 5:
        rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 2,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

        break;

    case 6:
        rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

        break;

    case 7:

        rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;
        break;


	case 8:
	    rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;
        break;

    case 9:
        rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;


		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;


        break;

	default:
		break;
	}


               posx += 7;


        }
           posx = 10;
           posy += 4;

    }

                rlutil::setBackgroundColor(rlutil::DARKGREY);
                rlutil::setColor(rlutil::RED);
                rlutil::saveDefaultColor();

cout << endl << endl;
}

void mostrarAzul(int m[][6]){

    int posx = 10;
    int posy = 5;

    for(int i = 0; i < 6; i++){
        for(int b = 0; b < 6; b++){


                rlutil::setBackgroundColor(rlutil::DARKGREY);
                rlutil::setColor(rlutil::WHITE);
                rlutil::saveDefaultColor();

                rlutil::setColor(rlutil::BLUE);

                for (int y = 1; y <= 3; y++) {

                    for (int x = 1; x <= 6; x++) {
                        rlutil::locate(x + posx, y + posy);
                        //cout << "█";
                        cout << (char)219;
                    }
                }

    rlutil::setBackgroundColor(rlutil::BLUE);
    rlutil::setColor(rlutil::WHITE);

	switch (m[i][b])
	{

    case 0:
        rlutil::locate(posx + 2,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

        break;

	case 1:
		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;
        break;

    case 2:
        rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		 rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 2,posy + 3);
		//cout << "■";
		cout << (char)223;


		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 3);
		//cout << "■";
		cout << (char)223;

        break;
    case 3:
        rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		break;


    case 4:
        rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 2,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 3);
		//cout << "■";
		cout << (char)223;

		break;

    case 5:
        rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 2,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

        break;

    case 6:
        rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

        break;

    case 7:

        rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;
        break;


	case 8:
	    rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;
        break;

    case 9:
        rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;


		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;


        break;

	default:
		break;
	}


               posx += 7;


        }
           posx = 10;
           posy += 4;

    }
    rlutil::setBackgroundColor(rlutil::DARKGREY);
    rlutil::setColor(rlutil::RED);
    rlutil::saveDefaultColor();

cout << endl << endl;

}

void mostrarBlanco(int m[][6]){

    int posx = 10;
    int posy = 5;

    for(int i = 0; i < 6; i++){
        for(int b = 0; b < 6; b++){


                rlutil::setBackgroundColor(rlutil::DARKGREY);
                rlutil::setColor(rlutil::BLACK);
                rlutil::saveDefaultColor();

                rlutil::setColor(rlutil::WHITE);

                for (int y = 1; y <= 3; y++) {

                    for (int x = 1; x <= 6; x++) {
                        rlutil::locate(x + posx, y + posy);
                        //cout << "█";
                        cout << (char)219;
                    }
                }

    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::setColor(rlutil::RED);

	switch (m[i][b])
	{

    case 0:
        rlutil::locate(posx + 2,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

        break;

	case 1:
		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;
        break;

    case 2:
        rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		 rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 2,posy + 3);
		//cout << "■";
		cout << (char)223;


		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 3);
		//cout << "■";
		cout << (char)223;

        break;
    case 3:
        rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		break;


    case 4:
        rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 2,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 3);
		//cout << "■";
		cout << (char)223;

		break;

    case 5:
        rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 2,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

        break;

    case 6:
        rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

        break;

    case 7:

        rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 5,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;
        break;


	case 8:
	    rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 2);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 4,posy + 3);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;
        break;

    case 9:
        rlutil::locate(posx + 3,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 4,posy + 1);
		//cout << "■";
		cout << (char)223;

		rlutil::locate(posx + 2,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 5,posy + 1);
		//cout << "■";
		cout << (char)220;

		rlutil::locate(posx + 3,posy + 2);
		//cout << "■";
		cout << (char)223;


		rlutil::locate(posx + 4,posy + 2);
		//cout << "■";
		cout << (char)219;

		rlutil::locate(posx + 3,posy + 3);
		//cout << "■";
		cout << (char)223;


        break;

	default:
		break;
	}


               posx += 7;


        }
           posx = 10;
           posy += 4;

    }
    rlutil::setBackgroundColor(rlutil::DARKGREY);
    rlutil::setColor(rlutil::RED);
    rlutil::saveDefaultColor();
cout << endl << endl;

}

