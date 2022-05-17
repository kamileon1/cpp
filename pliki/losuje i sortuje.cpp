#include <iostream>
using namespace std;

//losuje i sortuje :like:
 
int sort(int tab[]);
 
int main(){
    srand(time(NULL));
    int tab1[20];
    for(int i = 0; i < 20; i++) {
        tab1[i] = rand() % 100;
    }
    sort(tab1);
}
 
int sort(int tab[]) {
    for (int i = 0; i < 20; i++) {
        for (int i = 0; i < 19; i++) {
            if (tab[i + 1] < tab[i]) {
                int tab2[2];
                tab2[0] = tab[i];
                tab2[1] = tab[i + 1];
                tab[i + 1] = tab2[0];
                tab[i] = tab2[1];
            }
        }
    }
    for (int i = 0; i < 20; i++) {
        cout << tab[i] << endl;
    }
    return 0;
} 