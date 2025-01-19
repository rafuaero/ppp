#include <iostream>

int main()
{
    std::string anterior;
    std::string atual;
    int numero =0;
    while (std::cin >> atual){
        ++numero;
        if (anterior == atual)
          std::cout << "numero da palavra repetida: " << numero << " = " << atual << '\n';
        anterior = atual;
    }

}
