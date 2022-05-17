#include <iostream>
using namespace std;

//wypisuje dwie tablice i podmienia elelmenty

int zamien(int tab3[], int tab4[]);

int main(){
    int tab1[20];
    int tab2[20];

    for(int i = 0; i < 20; i++) {
        tab2[i] = rand() % 100;
    }

    for (int i = 0; i < 20; i++) {
        tab1[i] = rand() % 100;
    }

    cout << "Tablica 1" << endl;
    for (int i = 0; i < 20; i++) {
        cout << tab1[i] << endl;
    }

    cout << "Tablica 2" << endl;
    for (int i = 0; i < 20; i++) {
        cout << tab2[i] << endl;
    }

    zamien(tab1, tab2);
}

int zamien(int tab3[], int tab4[]) {
    int tab[2];
    for (int i = 0; i < 20; i++) {
        tab[0] = tab3[i];
        tab[1] = tab4[i];
        tab3[i] = tab[1];
        tab4[i] = tab[0];
    }

    cout << "tablica pierwsza" << endl;
    for (int i = 0; i < 20; i++) {
        cout << tab3[i] << endl;
    }

    cout << "tablica druga" << endl;
    for (int i = 0; i < 20; i++) {
        cout << tab4[i] << endl;
    }

    return 0;
}