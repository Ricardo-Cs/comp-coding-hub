#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--) {
        int maior = 0;
        string entrada;
        map<char, int> frequencias;
        getline(cin, entrada);
        
        frequencias.clear();
        
        // Preenche o map com as frequencias de cada letra
        for(int i = 0; i < entrada.length(); i++) {
            if(isalpha(entrada[i])) {
                entrada[i] = tolower(entrada[i]);
                // Verifica se a letra em questão não existe no map, se não existir, insere.
                if(!frequencias.count(entrada[i])) frequencias[entrada[i]] = 0;
                frequencias[entrada[i]]++;
            }
        }
    
        // Percorre o mapa para encontrar a maior frequência (o valor inteiro)
        for (map<char, int>::iterator it = frequencias.begin(); it != frequencias.end(); it++) {
            // it->first é a chave do mapa (a letra).
            // it->second é o valor associado à chave (a frequência da letra).
            if (it->second > maior)  
                maior = it->second; // Atualiza a maior frequência
        }
    
        // Percorre novamente para imprimir os valores que tem a frequência igual a maior (que foi feito no for anterior)
        for (map<char, int>::iterator it = frequencias.begin(); it != frequencias.end(); it++) {
            if (it->second == maior) 
                cout << it->first; // Imprime o caractere (chave do mapa) com a maior frequência
        }
        cout << endl; // Imprime uma nova linha para separar os resultados
    }
    
    return 0;
}
