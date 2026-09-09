//exemplo static
#include <iostream>
using namespace std;

class Teste{
    private:
        int x = 10;//atributo normal
        static int y;//atributo estatico
        
    public:
        void normal(){
            cout<<"normal -> x = "<<x<<", y = "<<y<<endl;
            //pode acessar ambos
        }
        static void estatico(){
            //cout <<x; --> ERRO pois x não é estatico
            cout<<"estatico -> y = "<<y<<endl;//só pode acessar y
        }
    
};

int Teste::y = 20;

int main()
{
    Teste::estatico();//ok, sem objeto
    
    Teste a;
    a.normal();//precisa de objeto
    a.estatico();//funciona pois é tratado como Teste::estatico()

    return 0;
}