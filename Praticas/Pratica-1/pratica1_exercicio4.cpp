#include <iostream> 

using namespace std;

struct Jogador {
    int pontos;
    int x, y;
};

void leDadosJogador(Jogador *jog){

    cin >> jog->pontos;
    cin >> jog->x;
    cin >> jog->y;

    return;
}

int main(){
    Jogador j[5];

    for(int i=0; i<5; i++){
        leDadosJogador( &j[i]);
    }

    for(int i=0; i<5; i++){

        cout << endl;
        cout << "Jogador " << i+1 << ':' << endl;
        cout << " Pontos - " << j[i].pontos << endl;
        cout << " X - " << j[i].x << endl;
        cout << " Y - " << j[i].y << endl;
        
    }

    return 0;
}