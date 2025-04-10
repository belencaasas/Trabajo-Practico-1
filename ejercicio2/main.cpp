#include <cstdlib> // para el rand()
#include <ctime> // para el time()
#include <iostream>
using namespace std;

int main(){
    int srand(time(0));
    int numero1 = rand() % 5 + 3; //(7-3 + 1) + 3
    int numero2 = rand() % 5 + 3;

    cout << "Cantidad de magos: " << numero1 << endl;
    cout << "Cantidad de guerreros: " << numero2 << endl;

    int cantArmasMago = rand() % 3;
    int cantArmasGuerrero = rand() % 3; 

    cout << "Los magos tienen en total " << cantArmasMago << " armas." << endl;
    cout << "Los guerreros tienen en total " << cantArmasGuerrero << " armas." << endl;


}