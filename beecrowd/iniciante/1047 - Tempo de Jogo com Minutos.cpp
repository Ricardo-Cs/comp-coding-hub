#include <iostream>
using namespace std;

int main() {
    int hora_inicio, minuto_inicio, hora_fim, minuto_fim;
    
    cin >> hora_inicio >> minuto_inicio >> hora_fim >> minuto_fim;
    
    int inicio_total_minutos = hora_inicio * 60 + minuto_inicio;
    int fim_total_minutos = hora_fim * 60 + minuto_fim;

    if (fim_total_minutos <= inicio_total_minutos) {
        fim_total_minutos += 24 * 60;
    }

    int duracao_total_minutos = fim_total_minutos - inicio_total_minutos;

    int duracao_horas = duracao_total_minutos / 60;
    int duracao_minutos = duracao_total_minutos % 60;

    cout << "O JOGO DUROU " << duracao_horas << " HORA(S) E " << duracao_minutos << " MINUTO(S)" << endl;

    return 0;
}
