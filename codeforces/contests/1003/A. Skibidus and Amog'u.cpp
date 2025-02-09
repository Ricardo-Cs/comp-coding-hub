// Link: https://codeforces.com/contest/2065/problem/A

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
        
        text.erase(size - 1);
        text[size - 2] = 'i'; 
        cout << text << endl;
    }
    return 0;
}
