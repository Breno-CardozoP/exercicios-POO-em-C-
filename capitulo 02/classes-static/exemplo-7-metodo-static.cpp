//exemplo static
#include <iostream>
using namespace std;

class Carro{
public:
    string modelo;
    int ano;
    
    Carro(string m, int a){
        modelo=m;
        ano=a;
    }
    
    static Carro criarCarroPopular(){
        return Carro("modelo popular", 2025);
    }
    
    void exibir(){
        cout<<"carro: "<<modelo<<", ano "<<ano<<endl;
    }
};

int main()
{
    Carro c = Carro::criarCarroPopular();//cria um Carro pelo metodo estatico
    c.exibir();

    return 0;
}