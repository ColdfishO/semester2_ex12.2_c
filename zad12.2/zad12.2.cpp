#include <iostream>
#include<locale.h>
#include<string>
#include<sstream>
using namespace std;
void autor(void) {
    cout << endl;
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "Autor programu: Simon Dudek\n\n";
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "\n\n";
}
int main() {
    string dane("Albert Einstein 1879 3 14");
    string tab[12] = {"stycznia", "lutego", "marca", "kwietnia", "maja", "czerwca", "lipca", "sierpnia", "września", "października", "listopada", "grudnia" };
    istringstream wejscie(dane);
    string imie, nazwisko, temp;
    int rok, mies, dzien;
    setlocale(LC_ALL, "");
    autor();
    wejscie >> imie;
    wejscie >> nazwisko;
    wejscie >> temp;
    rok = stoi(temp);
    wejscie >> temp;
    mies = stoi(temp)-1;
    wejscie >> temp;
    dzien = stoi(temp);
    cout << imie << " " << nazwisko << ", ur. " << dzien << " " << tab[mies] << " " << rok << " roku" << endl;
    system("pause");
    return 0;
}