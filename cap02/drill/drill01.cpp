#include <iostream>

int main ()
{
    std::cout << "olar, tudo bem? \n esta é a newsletter do costacurta\n";
    std::string first_name;
    std::cout << "qual o seu nome? ";
    std::cin >> first_name;
    std::cout << "prezado " << first_name << ",\n";
    std::cout << "seje bem vindo \n";
    std::cout << "qual o nome do seu amigo? \n";
    std::string friend_name;
    std::cin >> friend_name;
    std::cout << "voce tem visto o " << friend_name << "?\n";
    return 0; 
    
    }
