#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Monte Carlo realizacijos pradzia" << endl;
    cout << "(RANDOM SEARCH METHOD)" << endl;
    // Kintamųjų apsirašymas
    double f, x; // Funkcijos reiksmes ir argumentas x
    int n; // Uzedavinio dimensija
    double xSprendinys; // Argumento reiksme
    double fSprendinys; // Uzdavinio sprendinys

    // Vektoriu kurimas, kuriu elementai yra atsitiktiniai realus skaiciai

    double virsutinis_rezis, apatinis_rezis; // apsirasome intervalo rezius

    cout << "Įveskite intervalo rėžius:" << endl;
    cin >> apatinis_rezis >> virsutinis_rezis;
    cout << "Įveskite vektoriaus ilgį:" << endl;
    cin >> n;

    double vektorius[n];
    for(int i=0; i<n; i++)
    {
        vektorius[i] = rand() * (virsutinis_rezis - apatinis_rezis) / RAND_MAX + apatinis_rezis;
    }
	cout << "x = (";
	for(int i = 0; i < n; ++i)
	{
		cout << vektorius[i] << " "; // Vektoriaus isvedimas i ekrana
	}
	cout << ")" << endl;
    return 0;
}
