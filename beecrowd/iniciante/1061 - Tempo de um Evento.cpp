#include <bits/stdc++.h>
using namespace std;
int main()
{
    string aux;
    int dias, horas, minutos, segundos, dFim, hFim, mFim, sFim;
    
    // aux irá ler as strings desnecessárias para o resultado
    cin >> aux >> dias;
    cin >> horas >> aux >> minutos >> aux >> segundos;
    cin >> aux >> dFim;
    cin >> hFim >> aux >> mFim >> aux >> sFim;

    dias = dFim - dias;
    horas = hFim - horas;
    minutos = mFim - minutos;
    segundos = sFim - segundos;
    
    // Ajusta os segundos se o valor for negativo
    if (segundos < 0) {
        segundos += 60; // Adiciona 60 segundos para normalizar
        minutos--;      // Reduz 1 minuto, pois "emprestamos" um minuto para completar os segundos
    }
    
    // Ajusta os minutos se o valor for negativo
    if (minutos < 0) {
        minutos += 60; // Adiciona 60 minutos para normalizar
        horas--;       // Reduz 1 hora, pois "emprestamos" uma hora para completar os minutos
    }
    
    // Ajusta as horas se o valor for negativo
    if (horas < 0) {
        horas += 24; // Adiciona 24 horas para normalizar
        dias--;      // Reduz 1 dia, pois "emprestamos" um dia para completar as horas
    }
    
    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}
