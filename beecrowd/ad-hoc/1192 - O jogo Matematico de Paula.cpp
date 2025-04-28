#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    while(n--) {
        string s; cin >> s;
        // (s[n] - 0) pega o valor inteiro de um número em string
        if (s[0] == s[2]) cout << (s[0] - '0') * (s[2] - '0') << endl;
        else if (isupper(s[1])) cout << (s[2] - '0') - (s[0] - '0') << endl;
        else cout << (s[0] - '0') + (s[2] - '0') << endl;
    }
    return 0;
}
