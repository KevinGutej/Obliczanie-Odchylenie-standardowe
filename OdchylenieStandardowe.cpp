#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double obliczSrednia(const vector<double> &liczby)
{
    double suma = 0;
    for (double liczba : liczby)
    {
        suma += liczba;
    }
    return suma / liczby.size();
}

double obliczOdchylenieStandardowe(const vector<double> &liczby)
{
    double srednia = obliczSrednia(liczby);
    double sumaKwadratowRoznic = 0;

    for (double liczba : liczby)
    {
        sumaKwadratowRoznic += pow(liczba - srednia, 2);
    }

    double wariancja = sumaKwadratowRoznic / liczby.size();
    return sqrt(wariancja);
}

int main()
{
    vector<double> dane = {2, 4, 4, 4, 5, 5, 7, 9};
    double odchylenie = obliczOdchylenieStandardowe(dane);
    cout << "Odchylenie standardowe: " << odchylenie << endl;

    return 0;
}
