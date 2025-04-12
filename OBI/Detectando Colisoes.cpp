// https://olimpiada.ic.unicamp.br/pratique/p1/2007/f1/colisoes/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[4], b[4];
    
    for(int i = 0; i < 4; i++) cin >> a[i];
    for(int i = 0; i < 4; i++) cin >> b[i];
    
    if ((b[0] > a[2]) || (b[2] < a[0]) || (b[1] > a[3]) || (b[3] < a[1])) cout << 0 << endl;
    else cout << 1 << endl;
    
	return 0;
}
