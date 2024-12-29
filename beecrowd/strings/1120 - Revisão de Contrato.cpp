#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true) {
        // Transformar um valor de int para string usa muito recurso, o ideal é sempre manter em apenas um tipo
        int p = 0;
        char D;
        string N, resposta;

        cin >> D >> N;

        if(D == '0' && N == "0") break;
        
        for(int i = 0; i < N.length(); i++) {
            if(N[i] != D) resposta += N[i];
        }
        
        while(p < resposta.length()) {
            if(resposta[p] != '0') break;
            p++;
        }
        
        if(p == resposta.length()) cout << 0 << endl;
        else cout << resposta.substr(p) << endl;
        // 'p' encontra o último zero a esquerda, com isso, substr(p) imprime a string sem os zeros desnecessários
    }

    return 0;
}
