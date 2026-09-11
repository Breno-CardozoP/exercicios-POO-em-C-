/*Crie uma classe Conversor com um método estático converter que recebe um valor em dólares e uma taxa de conversão, e retorna o valor em reais.*/
#include <iostream>
using namespace std;

class Conversor{
public:
    
    static float converter(float x,float y){//metodo estatico
        return x*y;
    }
};

int main()
{
    float valor, taxa;
    
    cout<<"insira o valor em dolar e a taxa de conversão: "<<endl;
    cout<<"valor: "<<endl;
    cin>>valor;
    cout<<"taxa: "<<endl;
    cin>>taxa;
    
    cout<<"valor em reais: "<<Conversor::converter(valor,taxa);

    return 0;
}