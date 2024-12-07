#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;

    while (getline(cin, a)) {
        // Controlador das letras, começa como true para a primeira letra ser maiúscula
        bool upper = true;

        for (int i = 0; i < a.length(); i++) {
            if (a[i] != ' ') {
                if (upper) {
                    a[i] = toupper(a[i]);
                } else {
                    a[i] = tolower(a[i]);
                }
                upper = !upper;
            }
        }

        cout << a << endl;
    }

    return 0;
}
