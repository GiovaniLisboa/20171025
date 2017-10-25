#include <stdlib.h>
#include <iostream>
using std::cout;
using std::cin;

int main(int argc, char **argv)
{
    double nota1,nota2,nota3,media,notafinal;
    char frequencia;
    cout << "Insira a primeira nota do aluno: ";
    cin >> nota1;
    
    cout << "\n Insira a segunda nota do aluno: ";
    cin >> nota2;
    
    cout << "\n Insira a terceira nota do aluno: ";
    cin >> nota3;
    
    media = ( nota1 + nota2 + nota3 ) / 3;
    
    cout << "\n A frequencia do aluno foi maior que 80%? (s/n) ";
    cin >> frequencia;
    
    notafinal = ( frequencia == 's' ) ? (++media) : media;
    
    cout << "\n Nota final do aluno: ";
    cout << notafinal;
	
    cout << "\n \n";
    
    notafinal = media++;
    cout << "Pos incremento: ";
    cout << notafinal;
    cout << "\n";
    
    notafinal = ++media;
    cout << "Pre incremento: ";
    cout << notafinal;
    cout << "\n";

    system ("pause");
    return 0;
}
