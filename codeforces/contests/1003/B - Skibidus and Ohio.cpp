// Link: https://codeforces.com/contest/2065/problem/B

#include <bits/stdc++.h>
using namespace std;

// Sempre que uma mudança for feita, a resposta sempre será 1, caso contrário será o tamanho da string.
int min_length(string text) {
    int size = text.size();
    for (int i = 0; i < size - 1; ++i) {
        if (text[i] == text[i + 1]) 
            return 1;
    }
    return size;
}
 
int main() {
    int n;
    cin >> n;
    while(n--) {
        string text;
        cin >> text;
        cout << min_length(text) << endl;
    }
    return 0;
}
