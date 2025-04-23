// https://olimpiada.ic.unicamp.br/pratique/p2/2017/f1/botas/
// Minha primeira resolução
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, pares = 0; cin >> n;
    vector<int> E;
    vector<int> D;
    while(n--) {
        int x;
        char pe;
        cin >> x >> pe;
        if(pe == 'E') E.push_back(x);
        else D.push_back(x);
    }
 
    for(int i = 0; i < E.size(); i++) {
        for(int j = 0; j < D.size(); j++) {
            if(E[i] == D[j]) {
                pares++;
                D.erase(D.begin() + j);
                break;
            }
        }
    };
    cout << pares << endl;
    return 0;
}
