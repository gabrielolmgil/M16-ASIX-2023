using namespace std;
#include  <iostream>
#include "Personaje.h"
#include "Boss.h"
#include <time.h>
int main() {
    srand(time(NULL));
    string nom;
    cout << "Como quieres que se llame el gerrero?\n";
    cin >> nom;
    Personaje prota = Personaje(150, nom, 100, rand() % 5,0 );
    Personaje CPU1 = Personaje(60,"Licker",45, rand() % 5, (rand() % 8) + 1);
    Personaje CPU2 = Personaje(40, "Zombie",10, rand() % 5, (rand() % 8) + 1);
    Personaje CPU3 = Personaje(100,"Tirant",20, rand() % 5, (rand() % 8) + 1);
    Personaje CPU4 = Personaje(200,"Mister X",30, rand() % 5, (rand() % 8) + 1);
    Personaje salida = Personaje(1, "Salida", 0, rand() % 5,9);
    Boss bossfinal= Boss(200, "Nemesis",50,3, 3, 5);

    prota.printStatus();
    CPU1.printStatus();
    CPU2.printStatus();
    CPU3.printStatus();
    CPU4.printStatus();

    string tablero[10][5] = {
        {".",".",".",".","."},
        {".",".",".",".","."},
        {".",".",".",".","."},
        {".",".",".",".","."},
        {".",".",".",".","."},
        {".",".",".",".","."},
        {".",".",".",".","."},
        {".",".",".",".","."},
        {".",".",".",".","."},
        {".",".",".",".","."}
    };
    tablero[salida.getPosicionY()][salida.getPosicionX()] = "S";
    while (prota.getPosicionY() != salida.getPosicionY() || prota.getPosicionX() != salida.getPosicionX())
    {
        tablero[prota.getPosicionY()][prota.getPosicionX()] = "P";
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 5; j++) {
                cout << tablero[i][j] << " ";
            }
            cout << endl;
        }
        tablero[prota.getPosicionY()][prota.getPosicionX()] = ".";
        cout << "Escribe w,a,s,d para elegir hacia donde ir:\n ";
        string direccion;
        cin >> direccion;
        if (direccion == "w")
        {
            int y = prota.getPosicionY() - 1;
            prota.setPosicionY(y);
        }
        else if (direccion == "a"){
            int x = prota.getPosicionX() - 1;
            prota.setPosicionX(x);
        }
        else if (direccion == "s") {
            int y = prota.getPosicionY() + 1;
            prota.setPosicionY(y);
        }
        else if (direccion == "d") {
            int x = prota.getPosicionX() + 1;
            prota.setPosicionX(x);
        }
        if (prota.getPosicionY() == CPU1.getPosicionY() && prota.getPosicionX() == CPU1.getPosicionX())
        {
            cout << "Has entrado en pelea contra un enemigo\n";
            CPU1.printStatus();
            while (prota.getHp() > 0 && CPU1.getHp() > 0)
            {
                int vidaEnemigo;
                int vidaProta;
                vidaEnemigo = CPU1.getHp() - prota.getAttack();
                prota.printDmg();
                CPU1.setHp(vidaEnemigo);
                CPU1.printHp();
                vidaProta = prota.getHp() - CPU1.getAttack();
                CPU1.printDmg();
                prota.setHp(vidaProta);
                prota.printHp();
            }
            if (prota.getHp() > 0)
            {
                cout << prota.getName() << " a vencido la pelea contra " << CPU1.getName() << "\n";
            }
            else {
                cout << "Has perdido";
                break;
            }

        }
        if (prota.getPosicionY() == CPU2.getPosicionY() && prota.getPosicionX() == CPU2.getPosicionX())
        {
            cout << "Has entrado en pelea contra un enemigo\n";
            CPU2.printStatus();
            while (prota.getHp() > 0 && CPU2.getHp() > 0)
            {
                int vidaEnemigo;
                int vidaProta;
                vidaEnemigo = CPU2.getHp() - prota.getAttack();
                prota.printDmg();
                CPU2.setHp(vidaEnemigo);
                CPU2.printHp();
                vidaProta = prota.getHp() - CPU2.getAttack();
                CPU2.printDmg();
                prota.setHp(vidaProta);
                prota.printHp();
            }
            if (prota.getHp() > 0)
            {
                cout << prota.getName() << " a vencido la pelea contra " << CPU2.getName() << "\n";
            }
            else {
                cout << "Has perdido";
                break;
            }

        }
        if (prota.getPosicionY() == CPU3.getPosicionY() && prota.getPosicionX() == CPU3.getPosicionX())
        {
            cout << "Has entrado en pelea contra un enemigo\n";
            CPU3.printStatus();
            while (prota.getHp() > 0 && CPU3.getHp() > 0)
            {
                int vidaEnemigo;
                int vidaProta;
                vidaEnemigo = CPU3.getHp() - prota.getAttack();
                prota.printDmg();
                CPU3.setHp(vidaEnemigo);
                CPU3.printHp();
                vidaProta = prota.getHp() - CPU3.getAttack();
                CPU3.printDmg();
                prota.setHp(vidaProta);
                prota.printHp();
            }
            if (prota.getHp() > 0)
            {
                cout << prota.getName() << " a vencido la pelea contra " << CPU3.getName() << "\n";
            }
            else {
                cout << "Has perdido";
                break;
            }

        }
        if (prota.getPosicionY() == CPU4.getPosicionY() && prota.getPosicionX() == CPU4.getPosicionX())
        {
            cout << "Has entrado en pelea contra un enemigo\n";
            CPU4.printStatus();
            while (prota.getHp() > 0 && CPU4.getHp() > 0)
            {
                int vidaEnemigo;
                int vidaProta;
                vidaEnemigo = CPU4.getHp() - prota.getAttack();
                prota.printDmg();
                CPU4.setHp(vidaEnemigo);
                CPU4.printHp();
                vidaProta = prota.getHp() - CPU4.getAttack();
                CPU4.printDmg();
                prota.setHp(vidaProta);
                prota.printHp();
            }
            if (prota.getHp() > 0)
            {
                cout << prota.getName() << " a vencido la pelea contra " << CPU4.getName() << "\n";
            }
            else {
                cout << "Has perdido";
                break;
            }

        }
    }
    cout << prota.getName() << " ya ha llegado a la salida pero queda el enemigo final" << "\n";
    while (prota.getHp() > 0 && bossfinal.getHp() > 0)
    {
        bossfinal.printAllStats();
        int vidaEnemigo;
        int vidaProta;
        vidaEnemigo = bossfinal.getHp() - prota.getAttack();
        prota.printDmg();
        bossfinal.setHp(vidaEnemigo);
        bossfinal.printHp();
        if (bossfinal.getGarrotazo() > 0)
        {
            int num = rand() % 2;
            if (num == 0)
            {
                vidaProta = prota.getHp() - bossfinal.getAttack();
                bossfinal.printDmg();
                prota.setHp(vidaProta);
                prota.printHp();
            }
            else
            {
                int garrotes =  bossfinal.getGarrotazo() - 1;
                bossfinal.setGarrotazo(garrotes);
                vidaProta = prota.getHp() - ( 2 * bossfinal.getAttack());
                bossfinal.printGarrotazo();
                bossfinal.printDmg();
                prota.setHp(vidaProta);
                prota.printHp();
            }
        }
        if (prota.getHp() < 1)
        {
            cout << "Has muerto "<< bossfinal.getName() <<" ha ganado";
        }
        else
        {
            cout << "Has Ganado!!!!!";
        }
    }


    

}