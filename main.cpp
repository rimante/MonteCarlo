#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    cout << "Monte Carlo realizacijos pradzia" << endl;
    cout << "(RANDOM SEARCH METHOD)" << endl;
    // Kintamuju apsirasymas
    double f, x; // Funkcijos reiksmes ir argumentas x
    int n; // Uzedavinio dimensija
    double xSprendinys; // Argumento reiksme
    int fSprendinys; // Uzdavinio sprendinys

    // Vektoriu kurimas, kuriu elementai yra atitiktiniai realus skaiciai

    double virsutinis_rezis, apatinis_rezis; // apsirasome intervalo rezius

    cout << "Iveskite inervalo apatiny ir virsutiny rezius:" << endl;
    cin >> apatinis_rezis >> virsutinis_rezis;
    cout << "Iveskite vektoriaus dimensija (n):" << endl;
    cin >> n;

    double vektorius[n];
    cout << "x = ( ";
    for(int i=0; i<n; i++)
    {
        vektorius[i] = rand() * (virsutinis_rezis - apatinis_rezis) / RAND_MAX + apatinis_rezis;
    }
    for(int i=0; i<n; i++)
    {
        cout << vektorius[i] << " "; // Vektoriaus isvedimas i ekrana
    }
    cout << ")";
    return 0;
}
