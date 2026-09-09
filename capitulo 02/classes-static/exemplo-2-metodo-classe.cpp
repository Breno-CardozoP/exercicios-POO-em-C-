//metodo implementado fora da classe
#include <iostream>
using namespace std;

//declaração da classe
class Pessoa{
private;
    string nome;
    int idade;
    
public;
    Pessoa(string n, int i){
        nome =n;
        idade=i;
    }
    
    void apresentar();//metodo só declarado aqui
};

//definição do metodo fora da classe
void Pessoa::apresentar(){
    cout << "olá, meu nome é "<<nome<<" e eu tenho "<<idade<<"anos."<<endl;
}

int main()
{
    Pessoa p("joao",25);
    p.apresentar();//chama o metodo fora da classe
    return 0;
    

    return 0;
}