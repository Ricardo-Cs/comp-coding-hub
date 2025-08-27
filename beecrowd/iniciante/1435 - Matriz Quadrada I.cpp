#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int x = i;
                if (j < x) x = j;
                if (n - i + 1 < x) x = n - i + 1;
                if (n - j + 1 < x) x = n - j + 1;
                // setw(n) vem da <iomanip>. Ele diz ao cout: reserve no mínimo n caracteres para imprimir o próximo
                // Se o número tiver menos dígitos que n, ele é preenchido com espaços à esquerda (alinhado à direita).
                // Se tiver mais dígitos, ocupa o espaço normal (não corta nada).
                cout << setw(3) << x;
                if (j < n) cout << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
