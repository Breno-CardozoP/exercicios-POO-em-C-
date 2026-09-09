//exemplo static
#include <iostream>
using namespace std;

class Matematica {
public:
    static int quadrado(int x){
        return x*x;
    }
};

int main()
{
    int valor = 5;
    cout << "quadrado de "<<valor<<" = "<<Matematica::quadrado(valor)<<endl;

    return 0;
}