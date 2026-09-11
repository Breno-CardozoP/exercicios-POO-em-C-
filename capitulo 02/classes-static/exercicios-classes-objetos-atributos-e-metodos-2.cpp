/*Crie uma classe Aluno com atributos nome e nota. 
Crie um método que exiba se o aluno está aprovado (nota >= 6) ou reprovado. 
Pesquise função de entrada de dados na biblioteca <string>*/
#include <iostream>
#include <string>
using namespace std;

class Aluno{
public:
    string nome;
    float nota;
    
    bool CalculoMedia(){//identificar aprovação da nota, por instancia
        if(nota>=6){
            return true;
        }else{
            return false;
        }
    }
    
};

int main()
{
    Aluno a;
    
    cout<<"insira o seu nome e nota: "<<endl;
    cout<<"nome: "<<endl;
    getline(cin,a.nome);
    cout<<"nota: "<<endl;
    cin>>a.nota;
    
    if(a.CalculoMedia()==true){
        cout<<"APROVADO";
    }else{
        cout<<"REPROVADO";
    }
    

    return 0;
}