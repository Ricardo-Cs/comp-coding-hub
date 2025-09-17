// Boa resolução, mas em problemas com mais casos de teste, valeria a pena utilizar unordered_map e unordered_set, para busca O(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    map<string, vector<string>> regras = {
        {"tesoura", {"papel", "lagarto"}},
        {"papel",   {"pedra", "Spock"}},
        {"pedra",   {"tesoura", "lagarto"}},
        {"lagarto", {"Spock", "papel"}},
        {"Spock",   {"tesoura", "pedra"}}
    };

	for(int i = 1; i <= n; i++) {
        string s, r, resposta; cin >> s >> r;
	    if(s == r) resposta = "De novo!\n";
	    else if(find(regras[s].begin(), regras[s].end(), r) != regras[s].end()) 
	        resposta = "Bazinga!\n";
	    else resposta = "Raj trapaceou!\n";
	    cout << "Caso #" << i << ": " << resposta;
	}
	return 0;
}
