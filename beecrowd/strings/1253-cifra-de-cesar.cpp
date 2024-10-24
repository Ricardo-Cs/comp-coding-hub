#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    
    while(n--) {
        int num;
        string str;
        getline(cin, str);
        cin >> num;
        cin.ignore();
        
        for(int i = 0; i < str.length(); i++) {
            // Decodifica o caractere str[i] subtraindo num e garantindo que o resultado 
            // esteja dentro do intervalo de letras maiúsculas
            str[i] = 'A' + (str[i] - 'A' - num + 26) % 26;
        }
        
        cout << str << "\n";
    }
    
    return 0;
}
