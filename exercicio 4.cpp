#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int>numeros(8);
  int x;
  int y;
  int soma;

  cout << "Me diga 8 numeros:\n";
  for(int i = 0; i < 8; i++){
    cout << "\nNumero " << i  << ": ";
    cin >> numeros[i];
  }
  cout << "\nMe diga a posicao de X de 0 a 7: ";
  cin >> x;
  cout << "\nMe diga a posicao de Y de 0 a 7: ";
  cin >> y;

  soma = numeros[x] + numeros[y];

  cout << "\nAs posicoes escolhidas foram: " << x << " " << y;
  cout << "\nA soma dessas posi��es ficou: " << soma;

  return 0;
}
