// Link: https://codeforces.com/contest/2065/problem/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--) {
        string text;
        cin >> text;
        int size = text.size();

        bool reduced = true;
        while (size > 1 && reduced) {
            reduced = false; // Assume que não haverá remoções
            for (int i = 0; i < size - 1; i++) { // Evita acesso fora do limite
                if (text[i] == text[i + 1]) {
                    text.erase(i + 1, 1); // Remove text[i+1] corretamente
                    size--;
                    reduced = true; // Indica que houve alteração
                    break; // Importante: Reiniciar a verificação do início
                }
            }
        }
        cout << size << endl;
    }
    return 0;
}
