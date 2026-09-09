/*Crie uma classe Retangulo com atributos largura e altura e um método que calcule a área. No main, leia os valores e mostre o resultado.*/
#include <iostream>
using namespace std;

class Retangulo{
public:
    float largura;
    float altura;
    
    float CalculoArea(){
        return largura*altura;//metodo do calculo por instancia(usa os atributos da propria classe sem precisar de parametros)
    }
};

int main()
{
    Retangulo r;
    
    cout<<"insira os valores do Retangulo: "<<endl;
    cout<<"largura: "<<endl;
    cin>>r.largura;
    cout<<"altura: "<<endl;
    cin>>r.altura;
    
    cout<<"area: "<<r.CalculoArea();

    return 0;
}