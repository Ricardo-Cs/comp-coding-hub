#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--) {
        string a, b, sub;
        cin >> a >> b;
        
        if(a.length() >= b.length()) {
            // Extrai uma substring de 'a' que começa na posição (a.length() - b.length()) e tem o tamanho b.length()
            sub = a.substr(a.length() - b.length(), b.length());
            if(sub == b) cout << "encaixa\n";
            else cout << "nao encaixa\n";
        } else cout << "nao encaixa\n";
    }

    return 0;
}
