/*Crie uma classe Produto com atributos nome, preço e quantidade. Crie um método que calcule o valor total em estoque.*/
#include <iostream>
#include <string>
using namespace std;

class Produto{
public:
    string nome;
    float preço;
    int quantidade;
    
    int estoque(){
        return quantidade*preço;//valor em estoque
    }
};

int main()
{
    Produto p;
    
    cout<<"insira as informações do Produto"<<endl;
    cout<<"nome: "<<endl;
    getline(cin,p.nome);
    cout<<"preço: "<<endl;
    cin>>p.preço;
    cout<<"quantidade: "<<endl;
    cin>>p.quantidade;
    
    cout<<"quantidade em estoque: "<<p.estoque();

    return 0;
}