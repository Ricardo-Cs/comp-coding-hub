#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vetor(3), vetorOrdenado(3);
	for(int i = 0; i < 3; i++) cin >> vetor[i];
	
	vetorOrdenado = vetor;
	sort(vetorOrdenado.begin(), vetorOrdenado.end());
	
	for(int i = 0; i < 3; i++) cout << vetorOrdenado[i] << "\n";
	cout << "\n";
	
	for(int i = 0; i < 3; i++) cout << vetor[i] << "\n";
	return 0;
}
