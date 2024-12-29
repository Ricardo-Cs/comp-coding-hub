#include <bits/stdc++.h>
using namespace std;
int main()
{
    char vogais[5] = { 'a', 'e', 'i', 'o', 'u' };
    string entrada, resposta, inversa;
    getline(cin, entrada);
    
    for(int i = 0; i < entrada.length(); i++) {
        // find verifica se um valor está contido em um array
        if(find(begin(vogais), end(vogais), entrada[i]) != end(vogais)) {
            resposta += entrada[i];
        }
    }
    // Cria uma string inversa
    inversa = string(resposta.rbegin(), resposta.rend());
    
    if(resposta == inversa) cout << "S\n";
    else cout << "N\n";
    
    return 0;
}
