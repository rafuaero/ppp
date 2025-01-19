#include <iostream>
using namespace std;
#include "PPPheaders.h"


int main(){
    cout << "digite uma operação e dois operandos e vamos fazer os calculos\n";
    string operacao {};
    double op01 = {0};
    double op02 = {0};
    cout << "digite a operação: \n";
    cin >> operacao;
    cout << "digite o primeiro operando: \n";
    cin >> op01;
    cout << "digite o segundo operando: \n";
    cin >> op02;

    if (operacao == "+"){
        cout << "voce somou " << op01 << " com " << op02 << " e o resultado é : " << op01 + op02 << " \n";
    }
    return 0;
}

