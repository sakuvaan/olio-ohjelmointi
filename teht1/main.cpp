#include <iostream>

using namespace std;

int game(int);

int main() {
    int arvaukset = game(40);
    cout << "Arvasit yhteensa " << arvaukset << " kertaa";
    return 0;
}

int game(int maxnum) {

    int arvaus = 0;
    int counter = 0;

    srand(time(0));
    int randomNumber = rand() % maxnum + 1;

    while(arvaus != randomNumber){
        cout << "Arvaa luku: ";
        cin >> arvaus;

        if (arvaus < randomNumber){
            cout << "Numero " << arvaus << " on liian pieni..." << endl << endl;
            counter++;
        }

        if (arvaus > randomNumber){
            cout << "Numero " << arvaus << " on liian suuri..." << endl << endl;
            counter++;
        }

        else if (arvaus == randomNumber){
            cout << "Numero " << arvaus << " on oikein" << endl;
            counter++;
        }

    }
    return counter;
}
