/*Crie uma classe Conversor com atributos valor e taxa. Adicione um método estático converter que recebe valor e taxa e retorna o valor convertido. 
No main, peça ao usuário o valor e a taxa, e mostre o valor convertido usando o método estático.*/
#include <iostream>
using namespace std;

class Conversor{
public:
    float valor;
    float taxa;
    
    static float converter(float x, float y){//metodo estático
        return x*y;
    }
};

int main()
{
    Conversor c;
    
    cout<<"insira o valor e taxa a ser convertido: "<<endl;
    cout<<"valor: "<<endl;
    cin>>c.valor;
    cout<<"taxa: "<<endl;
    cin>>c.taxa;
    
    cout<<"valor convertido: "<<Conversor::converter(c.valor,c.taxa);//mostrar o valor utilizando o metodo estatico

    return 0;
}