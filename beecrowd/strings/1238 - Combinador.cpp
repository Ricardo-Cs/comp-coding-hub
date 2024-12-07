#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--) {
        string a, b, res;
        cin >> a >> b;
        int aLen = a.length(), bLen = b.length();
        int minLen = min(aLen, bLen);

        for (int i = 0; i < minLen; i++) {
            res += a[i];
            res += b[i];
        }

        // substr extrai uma substring de uma string, com base em um ponto inicial
        if (aLen > bLen) {
            res += a.substr(minLen);
        } else if (bLen > aLen) {
            res += b.substr(minLen);
        }
        
        cout << res << endl;
    }
    return 0;
}
