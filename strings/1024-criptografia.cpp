#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < str.length(); j++) {
            cout << str[i] << endl;
        }
    }
    return 0;
}
