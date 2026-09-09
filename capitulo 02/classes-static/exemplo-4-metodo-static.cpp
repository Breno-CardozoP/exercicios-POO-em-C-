//exemplo static
#include <iostream>
using namespace std;

class Calculadora{
public:
    //metodos estaticos
    static int somar(int a, int b){
        return a+b;
    }
    
    static int subtrair(int a, int b){
        return a-b;
    }
    
    static int multiplicar(int a, int b){
        return a*b;
    }
    
    static double dividir(int a, int b){
        if(b==0){
            cout << "erro: divisão por zero!" << endl;
            return 0;
        }
        return (double)a / b;
    }
    
};

int main()
{
    int x = 10, y = 5;
    
    //chamando metodos estaticos diretamente pela classe
    cout<<"soma: "<<Calculadora::somar(x,y)<<endl;
    cout<<"subtrair: "<<Calculadora::subtrair(x,y)<<endl;
    cout<<"multiplicar: "<<Calculadora::multiplicar(x,y)<<endl;
    cout<<"dividir: "<<Calculadora::dividir(x,y)<<endl;

    return 0;
}