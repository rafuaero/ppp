#include <iostream>

using namespace std;

#include "PPPheaders.h"

int main (){
    cout << "digite um numero por extenso de zero a quarto: ";
    string resposta {};
    cin >> resposta;
    if (resposta == "zero") {
        cout << "voce digitou zero = " << 0 << '\n'; 
    } else if (resposta == "um"){
        cout << "voce digitou um = " << 1 << '\n';
    } else if (resposta == "dois"){
        cout << "voce digitou dois = " << 2 << '\n';
    } else {
        cout << "nao reconheço esse número: " << resposta << '\n';
    }
    return 0;
}
