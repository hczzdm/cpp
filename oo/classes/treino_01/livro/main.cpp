#include <iostream>
#include <string>
using namespace std;

class Livro {
public:
    Livro(string autor, string titulo, string genero)
        : autor(autor), titulo(titulo), genero(genero) {}

    string getAutor() const {
        return autor;
    }

    string getTitulo() const {
        return titulo;
    }

    string getGenero() const {
        return genero;
    }

private:
    string autor;
    string titulo;
    string genero;
    int numPag = 0;
};

int main() {
    Livro l1("Eu", "Eu titulo", "terror");

    cout << "Nome do autor: " << l1.getAutor() << '\n';
    cout << "Nome do livro: " << l1.getTitulo() << '\n';
    cout << "Genero do livro: " << l1.getGenero() << '\n';

    return 0;
}