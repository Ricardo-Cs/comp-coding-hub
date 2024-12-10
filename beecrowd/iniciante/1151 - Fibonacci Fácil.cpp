#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t1 = 0, t2 = 1, proxT = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cout << t1;
        if(i != n - 1) cout  << " ";
        proxT = t1 + t2;
        t1 = t2;
        t2 = proxT;
    }
    cout << endl;
    return 0;
}
