#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignora o caractere '\n' deixado pelo cin >> n
    
    while(n != 0) {
        string str, reverse_str;
        getline(cin, str);  // Sem o cin.ignore(), o getline lê uma linha vazia por causa do '\n' do cin >> n

        // Primeira passada
        for(int i = 0; i < str.length(); i++) {
            if((int(str[i]) >= 65 && int(str[i]) <= 90) || (int(str[i]) >= 97 && int(str[i]) <= 122)) {
                str[i] = int(str[i] + 3);   
            }
        }
        
        // Segunda passada
        for (int i = str.length() - 1; i >= 0; i--) {
            reverse_str += str[i];
        }
        str = reverse_str;
        
        // Terceira passada
        for(int i = trunc(str.length() / 2); i < str.length(); i++) {
            str[i] = int(str[i] - 1);
        }
        
        cout << str << endl;
        n--;
    }
    return 0;
}
