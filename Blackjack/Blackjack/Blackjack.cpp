#include <iostream>
using namespace std;
int diamante[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
int corazon[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
int trebol[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
int picas[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
int valorJugador = 0;
int valorcroupier = 0;
int vecesRepartidoJugador = 0;
int vecesRepartidoCroupier = 0;
void repartoJugador() {
    int numrandCarta = rand() % 13;
    int numrandPalo = rand() % 4;
    int valorAs;

    if (numrandPalo == 0 && diamante[numrandCarta] != 0) {
        if (numrandCarta == 0)
        {
            cout << "La carta es un as de diamantes que valor quiere que tenga 1 o 11 \n";
            cin >> valorAs;
            valorJugador += valorAs;
        }
        else if (numrandCarta == 11 || numrandCarta == 12 || numrandCarta == 13)
        {
            cout << "La carta del jugador es un " << diamante[numrandCarta] << " de diamantes  con el valor de 10\n";
            valorJugador += 10;

        }
        else
        {
            cout << "La del jugador carta es un " << diamante[numrandCarta] << " de diamantes \n";
            valorJugador += diamante[numrandCarta];
        }
        diamante[numrandCarta] = 0;
        vecesRepartidoJugador++;
    }
    else if (numrandPalo == 1 && corazon[numrandCarta] != 0)
    {
        if (numrandCarta == 0)
        {
            cout << "La carta es un as de corazones que valor quiere que tenga 1 o 11 \n";
            cin >> valorAs;
            valorJugador += valorAs;
        }
        else if (numrandCarta == 11 || numrandCarta == 12 || numrandCarta == 13)
        {
            cout << "La carta del jugador es un " << corazon[numrandCarta] << " de diamantes  con el valor de 10\n";
            valorJugador += 10;

        }
        else
        {
            cout << "La carta del jugador es un " << corazon[numrandCarta] << " de corazones \n";
            valorJugador += corazon[numrandCarta];
        }
        corazon[numrandCarta] = 0;
        vecesRepartidoJugador++;
    }
    else if (numrandPalo == 2 && trebol[numrandCarta] != 0)
    {
        if (numrandCarta == 0)
        {
            cout << "La carta es un as de treboles que valor quiere que tenga 1 o 11 \n";
            cin >> valorAs;
            valorJugador += valorAs;
        }
        else if (numrandCarta == 11 || numrandCarta == 12 || numrandCarta == 13)
        {
            cout << "La carta del jugador es un " << trebol[numrandCarta] << " de diamantes  con el valor de 10\n";
            valorJugador += 10;

        }
        else
        {
            cout << "La carta del jugador es un " << trebol[numrandCarta] << " de trebol \n";
            valorJugador += trebol[numrandCarta];
        }
        trebol[numrandCarta] = 0;
        vecesRepartidoJugador++;
    }
    else if (numrandPalo == 3 && picas[numrandCarta] != 0)
    {
        if (numrandCarta == 0)
        {
            cout << "La carta es un as de picas que valor quiere que tenga 1 o 11 \n";
            cin >> valorAs;
            valorJugador += valorAs;
        }
        else if (numrandCarta == 11 || numrandCarta == 12 || numrandCarta == 13)
        {
            cout << "La carta del jugador es un " << picas[numrandCarta] << " de diamantes  con el valor de 10\n";
            valorJugador += 10;

        }
        else {
            cout << "La carta del jugador es un " << picas[numrandCarta] << " de picas \n";
            valorJugador += picas[numrandCarta];
        }
        picas[numrandCarta] = 0;
        vecesRepartidoJugador++;
    }
}
void repartoCroupier() {
    int numrandCarta = rand() % 13;
    int numrandPalo = rand() % 4;
    int valorAs;
    if (numrandPalo == 0 && diamante[numrandCarta] != 0) {
        if (numrandCarta == 0)
        {
            if (vecesRepartidoCroupier == 0)
            {
                cout << "La carta es un as de diamantes con valor de 11 \n";
                valorcroupier += 11;
            }
            else
            {
                cout << "La carta es un as de diamantes con valor de 1 \n";
                valorcroupier += 1;
            }
        }
        else if (numrandCarta == 11 || numrandCarta == 12 || numrandCarta == 13)
        {
            cout << "La carta del croupier es un " << diamante[numrandCarta] << " de diamantes  con el valor de 10\n";
            valorcroupier += 10;

        }
        else
        {
            cout << "La carta del croupier es un " << diamante[numrandCarta] << " de diamantes \n";
            valorcroupier += diamante[numrandCarta];
        }
        diamante[numrandCarta] = 0;
    }
    else if (numrandPalo == 1 && corazon[numrandCarta] != 0)
    {
        if (numrandCarta == 0)
        {
            if (vecesRepartidoCroupier == 0)
            {
                cout << "La carta es un as de corazones con valor de 11 \n";
                valorcroupier += 11;
            }
            else
            {
                cout << "La carta es un as de corazones con valor de 1 \n";
                valorcroupier += 1;
            }
        }
        else if (numrandCarta == 11 || numrandCarta == 12 || numrandCarta == 13)
        {
            cout << "La carta del croupier es un " << corazon[numrandCarta] << " de diamantes  con el valor de 10\n";
            valorcroupier += 10;

        }
        else
        {
            cout << "La carta del croupier es un " << corazon[numrandCarta] << " de corazones \n";
            valorcroupier += corazon[numrandCarta];
        }
        corazon[numrandCarta] = 0;
    }
    else if (numrandPalo == 2 && trebol[numrandCarta] != 0)
    {
        if (numrandCarta == 0)
        {
            if (vecesRepartidoCroupier == 0)
            {
                cout << "La carta es un as de trevoles con valor de 11 \n";
                valorcroupier += 11;
            }
            else
            {
                cout << "La carta es un as de trevoles con valor de 1 \n";
                valorcroupier += 1;
            }
        }
        else if (numrandCarta == 11 || numrandCarta == 12 || numrandCarta == 13)
        {
            cout << "La carta del croupier es un " << trebol[numrandCarta] << " de diamantes  con el valor de 10\n";
            valorcroupier += 10;

        }
        else
        {
            cout << "La carta del croupier es un " << trebol[numrandCarta] << " de trebol \n";
            valorcroupier += trebol[numrandCarta];
        }
        trebol[numrandCarta] = 0;
    }
    else if (numrandPalo == 3 && diamante[numrandCarta] != 0)
    {
        if (numrandCarta==0)
        {
            if (vecesRepartidoCroupier == 0)
            {
                cout << "La carta es un as de diamantes con valor de 11 \n";
                valorcroupier += 11;
            }
            else
            {
                cout << "La carta es un as de picas con valor de 1 \n";
                valorcroupier += 1;
            }
        }
        else if (numrandCarta == 11 || numrandCarta == 12 || numrandCarta == 13)
        {
            cout << "La carta del croupier es un " << picas[numrandCarta] << " de diamantes  con el valor de 10\n";
            valorcroupier += 10;

        }
        else {
            cout << "La carta del croupier es un " << picas[numrandCarta] << " de picas \n";
            valorcroupier += picas[numrandCarta];
        }
        picas[numrandCarta] = 0;
    }
    vecesRepartidoCroupier++;
}
void valorCartas() {
    cout << "El valor actual del jugador es " << valorJugador << "\n";
    cout << "El valor actual del croupier es " << valorcroupier << "\n";
}
bool otraCarta() {
    string seguir;
    cout << "Quiere otra carta? (Responda con si o no)";
    cin >> seguir;
    if (seguir == "si")
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    srand(time(NULL));
    while (vecesRepartidoJugador < 2)
    {
        repartoJugador();
    }
    repartoCroupier();
    valorCartas();
    while (valorJugador < 21 && otraCarta() == true) {
        repartoJugador();
        valorCartas();
    }
    if (valorJugador > 21)
    {
        cout << "El jugador a perdido la banca gana";
    }
    else{
        while (valorcroupier < valorJugador && valorcroupier < 21) {
            repartoCroupier();
            valorCartas();
        }
    }
    if (valorcroupier > valorJugador && valorcroupier <= 21)
    {
        cout << "El jugador a perdido la banca gana";
    }
    else if (valorJugador > 21){
    }
    else{
        cout << "El jugador a ganado la banca pierde";
    }


}

