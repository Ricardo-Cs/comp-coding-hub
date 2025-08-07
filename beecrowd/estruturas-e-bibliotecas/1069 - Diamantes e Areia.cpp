#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;
	
	while(n--) {
	    int res = 0;
	    string text;
	    cin >> text;
	    
        text.erase(remove(text.begin(), text.end(), '.'), text.end());

        for(int i = 0; i <= text.length(); i++) {
            if(text[i] == '<' && text[i + 1] == '>') {
                res++;
                text.erase(i, 2);
                i = -1;
            }
        }
        cout << res << endl;
	}
    
    return 0;
}
