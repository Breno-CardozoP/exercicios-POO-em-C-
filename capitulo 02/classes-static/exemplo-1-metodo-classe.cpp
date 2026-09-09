//exemplo metodos
#include <iostream>
using namespace std;

class Carro{
public;
    string modelo;
    int ano;
    
    void exibirInfo(){
        cout<<"modelo: "<<modelo<<", ano: "<<ano<<endl;
    }
};

int main()
{
 Carro carro1;
 carro1.modelo="gol";
 carro1.ano=2010;
 
 carro1.exibirInfo();//chama o metodo para exibir os dados

    return 0;
}