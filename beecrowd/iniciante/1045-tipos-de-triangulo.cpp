#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<double> lados(3);
    for(int i = 0; i < 3; i++) cin >> lados[i];
    sort(lados.begin(), lados.end(), greater<int>());
    
    if(lados[0] >= (lados[1] + lados[2])) cout << "NAO FORMA TRIANGULO\n";
    else {
        if(pow(lados[0], 2) == pow(lados[1], 2) + pow(lados[2], 2)) cout << "TRIANGULO RETANGULO\n";
        if(pow(lados[0], 2) > pow(lados[1], 2) + pow(lados[2], 2)) cout << "TRIANGULO OBTUSANGULO\n";
        if(pow(lados[0], 2) < pow(lados[1], 2) + pow(lados[2], 2)) cout << "TRIANGULO ACUTANGULO\n";
        if(lados[0] == lados[1] && lados[1] == lados[2]) cout << "TRIANGULO EQUILATERO\n";
        if((lados[0] == lados[1] && lados[1] != lados[2]) || (lados[1] == lados[2] && lados[1] != lados[0])) cout << "TRIANGULO ISOSCELES\n";
    }
    
	return 0;
}
