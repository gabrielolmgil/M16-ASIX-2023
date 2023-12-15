#include <iostream>
using namespace std;
string characterName;
int characterHP = 500;
int characterDamage;
int usos = 2;
int bossHP = 300;
int bossDamage;
int boss2HP = 200;
int boss2Damage;
string bossName = "Carlos el del Boste";
string boss2Name = "Melendrill";
int selectboss;
int ataque;
void Inicio() {
    cout << "Escribe el nombre de tu heroe\n";
    cin >> characterName;
}
bool heroAlive() {
    if (characterHP > 0)
    {
        return true;
    }
    else {
        return false;
    }
}
bool boss1Alive() {
    if (bossHP > 0){
        return true;
    }else{
        return false;
    }
}
bool boss2Alive() {
    if (boss2HP > 0) {
        return true;
    }
    else {
        return false;
    }
}
int select() {
    cout << "Elige a que boss atacar:\n";
    cout << "1-" << bossName << "\n";
    cout << "2-" << boss2Name << "\n";
    cin >> selectboss;
    return selectboss;
}
void attackSelect() {
    cout << "Elige el ataque:\n";
    cout << "1- Mano celestial\n";
    cout << "2- Pellizco\n";
    cout << "3- Hay que te rajo \n";
    cin >> ataque;
}
int main(){
    Inicio();
    srand(time(NULL));
    while (heroAlive() && (boss1Alive()||boss2Alive())) {
        //enemy attack
        boss2Damage = rand() % 50;
        bossDamage = rand() % 100;
        int selectEnemy = select();
        attackSelect();
        if (boss1Alive()){
            characterHP = characterHP - bossDamage;
            if (characterHP <= 0) {
                characterHP = 0;
            }
            cout << bossName << " te ha pegado un tortazo de " << bossDamage << "\n";
        }
        if (boss2Alive)
        {
            characterHP = characterHP - boss2Damage;
            if (characterHP <= 0) {
                characterHP = 0;
            }
            cout << boss2Name << " te ha pegado un tortazo de " << boss2Damage << "\n";
        }
        cout << "Te queda un total de " << characterHP << " vida\n";
        //character attack
        if (ataque == 1)
        {
            characterDamage = rand() % 100;
        }
        else if (ataque == 2)
        {
            characterDamage = rand() % 2;
        }
        else if (ataque == 3)
        {
            if (usos > 0)
            {
                characterDamage = rand() % 500;
            }
            else
            {
                characterDamage = 0;
                cout << "No se puede utilizar mas de dos veces el ataque (Hay que te rajo) ya que es demasiado podroso que " << characterName << " no puede utilizarlo mas de 2 veces\n";
            }
            usos = usos - 1;
        }
        else
        {
            cout << "Error tienes que elegir uno de los 3 ataque \n";
        }
        if (selectEnemy == 1)
        {
            if (boss1Alive() == false)
            {
                cout << bossName << " esta muerto\n";
            }
            else {
                bossHP = bossHP - characterDamage;
                if (boss1Alive() == false)
                {
                    bossHP = 0;
                }
                cout << characterName << " le has quitado " << characterDamage << " de salud y a " << bossName << "le quedan " << bossHP << " de vida\n";
                if (boss1Alive() == false) {
                    cout << "Te has cargado a " << bossName << "\n";
                }


            }
        }
        else if (selectEnemy == 2)
        {
            if (boss2Alive() == false)
            {
                cout << boss2Name << " esta muerto\n";
            }
            else {

                boss2HP = boss2HP - characterDamage;
                if (boss2Alive() == false)
                {
                    boss2HP = 0;
                }
                cout << characterName << " le has quitado " << characterDamage << " de salud  y a " << boss2Name << "le quedan " << boss2HP << " de vida\n";
                if (boss2Alive() == false)
                {
                    cout << "Te has cargado a " << boss2Name << "\n";
                }
            }
        }
        else
        {
            cout << "Error tienes que elegir a uno de los dos jefes";
        }
        if (boss1Alive() == false && boss2Alive() == false)
        {
            cout << characterName << " se ha cargado a los dos desgraciados y se va a dormir";
        }
        if (heroAlive() == false)
        {
            cout << bossName << " y " << boss2Name << " han reventado a ostias a " << characterName;
        }


    }
}