#include <iostream>
using namespace std;

//tablica 10 elementowa

int main(){
    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int length = (sizeof(tab)/sizeof(tab[0]));
    for (int i = 0; i < length; i++) {
        cout << tab[i] << endl;
    }
}