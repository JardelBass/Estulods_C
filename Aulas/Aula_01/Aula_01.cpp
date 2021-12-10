#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Variavel PRIMITIVO

    int idade = 36;
    char tipoSanginio = 'B';
    float atura = 1.83;
    bool bol = true;
    double salario = 1.566;
    string nome("jardel");

    cout << "--------------------- Varialveos -----------------------\n\n";

    cout << "Nome :" << nome << "\n";
    cout << "Idade :" << idade << " anos\n";
    cout << "Atura :" << atura <<"\n";
    cout << "Tipo Sanginio: " << tipoSanginio << "\n";
    cout << "Salario: " << salario <<"\n\n";

    cout << "--------------------- Variavel Bool -----------------------\n\n";
    cout << "Bool: " << bol << "\n";
    bol = false;
    cout << "Bool: " << bol << "\n\n";


    cout << "------------------------- Final --------------------------\n";
    return 0;
}
