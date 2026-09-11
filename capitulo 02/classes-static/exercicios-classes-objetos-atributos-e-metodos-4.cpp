/*Crie uma classe Carro com atributos marca e velocidade. Crie métodos para acelerar (aumentar a velocidade) e frear (diminuir a velocidade).*/
#include <iostream>
#include <string>
using namespace std;

class Carro{
public:
    string marca;
    float velocidade=0;
    
    float DiminuirVelocidade(){
        return --velocidade;
    }
    float AumentarVelocidade(){
        return ++velocidade;
    }
};

int main()
{
    Carro c;
    int codigo;
    
    cout<<"insira a marca e velocidade do carro"<<endl;
    cout<<"marca: "<<endl;
    getline(cin,c.marca);
    cout<<"velocidade: "<<endl;
    cin>>c.velocidade;
    
    do{
        cout<<"\n(1)acelerar e (2)frear ou (3)sair"<<endl;
        cin>>codigo;
        if(codigo==1){
            cout<<"velocidade: "<<c.AumentarVelocidade();
        }else if(codigo==2){
            cout<<"velocidade: "<<c.DiminuirVelocidade();
        }else if(codigo==3){
            break;
        }else{
            cout<<"codigo invalidado";
        }
        
    }while(codigo!=3);

    return 0;
}