#include <iostream>
using namespace std;

//tablica losujaca 20 elementow

int main(){
    srand(time(NULL));
    int tab[20];
    int length = sizeof(tab) / sizeof(tab[0]);
    for(int i = 0; i < length; i++) {
        tab[i] = rand() % 100;
    }
    for (int i = 0; i < length; i++) {
        cout << tab[i] << endl;
    }
}