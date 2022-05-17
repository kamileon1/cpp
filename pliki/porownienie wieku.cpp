#include <iostream>
using namespace std;

//porownienie wieku

int age(int age3, int age4);

int main(){
    int age1,age2;
    cout << "podaj wiek piewszej osoby: ";
    cin >> age1;
    cout << "podaj wiek drugiej osoby: ";
    cin >> age2;
    age(age1, age2);
}


int age(int age3, int age4) {
    if (age3 > age4) {
        cout << "pierwsza osoba jest starsza" << endl;
    }
    else if (age3 < age4) {
        cout << "druga osoba jest starsza" << endl;
    }
    else {
        cout << "sa w tym samym wieku" << endl;
    }

    if ((age3 + age4)>100) {
        cout << "razem maja ponad 100 lat";
    }

    return 0;
}