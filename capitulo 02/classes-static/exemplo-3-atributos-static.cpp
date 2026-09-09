//exemplo static
#include <iostream>
using namespace std;

class Contador{
public;
    static int total;//atributo estatico
    Contador(){
        total++;
    }
};

//definição fora de classe obrigatoria
int Contador::total=0;

int main()
{
    Contador c1;
    Contador c2;
    Contador c3;
    
    cout << "total de objetos criados: "<<Contador::total<<endl;

    return 0;
}