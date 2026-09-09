//exemplo static
#include <iostream>
using namespace std;

class Pessoa {
private:
    static int contador;//variavel estatica compartilhada entre todos os objetos
    
public:
    Pessoa(){
        contador++;//incrementa toda vez que o objeto é criado
    }
    
    static int getContador(){
        return contador;
    }
};

//inicialização da variavel fora da classe
int Pessoa::contador = 0;

int main()
{
    Pessoa p1;
    Pessoa p2;
    Pessoa p3;
    
    cout<<"total de objetos Pessoa criados: "<<Pessoa::getContador()<<endl;

    return 0;
}