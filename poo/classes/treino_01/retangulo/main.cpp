#include <iostream>
using namespace std;

class Retangulo {
public:
    Retangulo() : altura(0), largura(0) {}

    Retangulo(double altura, double largura) {
        this->altura = altura;
        this->largura = largura;
    }

    double getAltura() const {
        return this->altura;
    }

    double getLargura() const{
        return this->largura;
    }

    void setAltura(double altura) {
        this->altura = altura;
    }

    void setLargura(double largura) {
        this->largura = largura;
    }

    double area() {
        return altura * largura;
    } 

    double perimetro() {
        return 2 * (altura + largura); 
    } 
    
    bool ehQuadrado(){
        if(altura == largura){
            return true;
        }
        return false;
    }

private:
    double altura;
    double largura;
};

int main() {
    Retangulo retangulo(5, 4);

    cout << "Altura: " << retangulo.getAltura() << endl;
    cout << "Largura: " << retangulo.getLargura() << endl;
    cout << "Area: " << retangulo.area() << endl;
    cout << "Perimetro: " << retangulo.perimetro() << endl;
    char resposta = 'N';
    if(retangulo.ehQuadrado()){
        resposta = 'S';
    }
    cout << "É um quandrado ? " << resposta << '\n';

    return 0;
}
