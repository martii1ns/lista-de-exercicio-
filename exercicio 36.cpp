#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<double> numeros(10);


    cout << "Digite 10 n�meros reais:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> numeros[i];
    }


    sort(numeros.begin(), numeros.end());


    cout << "N�meros ordenados:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
