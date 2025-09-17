#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int n = 0;
  string bin = "";
	while(getline(cin, s)) {
	    bin = "";
        if(s == "caw caw") {
            cout << n << endl;
            n = 0;
        } else {
            for(char c : s) {
                if(c == '*') bin += '1';
                else bin += '0';
            }
            int decimal = stoi(bin, nullptr, 2);
            n += decimal;
        }

	}
	return 0;
}
