#include <bits/stdc++.h>
using namespace std;

void imprimirVetor(int vet[], int qtd, string s) {
    for(int i = 0; i < qtd; i++) {
        cout << s << "[" << i << "] = " << vet[i] << endl;
    }
    qtd = 0;
}

int main() {
    int pares[5], impares[5], qtdPares = 0, qtdImpares = 0;
    
    for(int i = 0; i < 15; i++) {
        if(qtdPares == 5){
             imprimirVetor(pares, qtdPares, "par");
             qtdPares = 0;
        }
        if(qtdImpares == 5){
             imprimirVetor(impares, qtdImpares, "impar");
             qtdImpares = 0;
        }
        int n; cin >> n;
        
        if(n % 2 == 0) {
            pares[qtdPares] = n;
            qtdPares++;
        } else {
             impares[qtdImpares] = n; 
             qtdImpares++;
        }
    }
    
    imprimirVetor(impares, qtdImpares, "impar");
	imprimirVetor(pares, qtdPares, "par");
	
    return 0;
}
