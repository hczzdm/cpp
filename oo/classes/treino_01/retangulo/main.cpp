#include <iostream>
using namespace std;

class Retangulo {
public:
    Retangulo() : altura(0), largura(0) {}

    Retangulo(double altura, double largura) {
        this->altura = altura;
        this->largura = largura;
    }

    double getAltura() {
        return this->altura;
    }

    double getLargura() {
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

private:
    double altura;
    double largura;
};

int main() {
    Retangulo retangulo(5, 4);

    cout << "Altura: " << retangulo.getAltura() << endl;
    cout << "Largura: " << retangulo.getLargura() << endl;
    cout << "Area: " << retangulo.area() << endl;

    return 0;
}
