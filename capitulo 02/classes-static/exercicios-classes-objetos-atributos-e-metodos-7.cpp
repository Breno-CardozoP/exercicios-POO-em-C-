/*Crie uma classe Temperatura com atributos cidade e valor (Celsius) e um método estático celsiusParaFahrenheit. 
No main, leia a cidade e a temperatura e mostre o valor em Fahrenheit.*/
#include <iostream>
#include <string>
using namespace std;

class Temperatura{
public:
    string cidade;
    float valor;
    
    static float celsiusParaFahrenheit(float x){
        return x * 1.8 + 32;
    }
};


int main()
{
   Temperatura t;
   
   cout<<"insira a cidade: "<<endl;
   getline(cin,t.cidade);
   cout<<"insira a Temperatura(*c): "<<endl;
   cin>>t.valor;
   
   cout<<"Temperatura em Fahrenheit: "<<Temperatura::celsiusParaFahrenheit(t.valor);

    return 0;
}